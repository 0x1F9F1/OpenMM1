/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 1
    Copyright (C) 2019 Brick

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "cache.h"

#include "ipc.h"

static inline constexpr uint32_t Align8(uint32_t value) noexcept
{
    return (value + 7) & 0xFFFFFFF8;
}

DataCache::DataCache() = default;

void DataCache::Init(uint32_t heap_size, int32_t capacity, const char* name)
{
    m_nHeapCap = heap_size;
    m_pHeap = new uint8_t[heap_size];

    m_nHandleCap = capacity;
    m_nMaxHandles = 0;
    m_nUsed = 0;
    m_nLockCount = 0;
    m_nWaste = 0;
    m_nMaxWaste = heap_size / 4;
    m_bNeedsDefrag = 0;

    m_pObjects = new DataCacheObject[capacity];
    --m_pObjects;

    m_Name = name;

    m_hWriteMutex = ipcCreateMutex(0);
    m_hAccessMutex = ipcCreateMutex(0);

    m_nAgedObjects = 0;
    m_nAged = 0;
}

void DataCache::Shutdown()
{
    ipcWaitSingle(m_hWriteMutex);
    ipcWaitSingle(m_hAccessMutex);

    Flush();

    ipcCloseHandle(m_hWriteMutex);
    ipcCloseHandle(m_hAccessMutex);
}

void DataCache::Unload(int32_t handle)
{
    Assert(handle > 0);

    DataCacheObject* dco = &m_pObjects[handle];

    if (dco->m_nLockCount)
    {
        Quitf("DataCache(%s)::Unload - locked object '%s'", m_Name, "unknown");
    }

    if (!dco->m_pHandle)
    {
        Quitf("DataCache(%s)::Unload - Already unloaded handle %d", m_Name, handle);
    }

    Assert(dco->m_nLockCount == 0);

    if (dco->m_Callback)
    {
        dco->m_Callback(dco->m_Context, 0);
        dco->m_Callback = nullptr;
    }

    Assert(dco->m_bUsed);

    dco->m_bUsed = 0;
    dco->m_nAge = 0;
    dco->m_nUsed = 0;

    *dco->m_pHandle = -1;
    dco->m_pHandle = nullptr;
}

void DataCache::Relocate(DataCacheObject* dco, uint8_t* ptr)
{
    uint8_t* old_data = dco->m_pBase;

    if (ptr != old_data)
    {
        dco->m_Callback(dco->m_Context, ptr - old_data);
        memcpy(ptr, old_data, dco->m_nUsed);
        dco->m_pBase = ptr;
    }
}

int32_t DataCache::Lock(int32_t* handle)
{
    Assert(*handle);

    ipcWaitSingle(m_hWriteMutex);

    if (*handle != -1)
    {
        DataCacheObject* dco = &m_pObjects[*handle];

        ++dco->m_nLockCount;

        if (!m_nLockCount++)
        {
            ipcWaitSingle(m_hAccessMutex);
        }

        dco->m_nAge = m_nAge;

        ipcReleaseMutex(m_hWriteMutex);

        return 1;
    }
    else
    {
        ipcReleaseMutex(m_hWriteMutex);

        return 0;
    }
}

void DataCache::Unlock(int32_t handle)
{
    ipcWaitSingle(m_hWriteMutex);

    Assert(handle > 0);

    --m_pObjects[handle].m_nLockCount;

    if (!--m_nLockCount)
    {
        ipcReleaseMutex(m_hAccessMutex);
    }

    ipcReleaseMutex(m_hWriteMutex);
}

void DataCache::UnlockAndFree(int32_t handle)
{
    ipcWaitSingle(m_hWriteMutex);

    Assert(handle > 0);

    --m_pObjects[handle].m_nLockCount;

    if (!--m_nLockCount)
    {
        ipcReleaseMutex(m_hAccessMutex);
    }

    m_nWaste += m_pObjects[handle].m_nMaxSize;

    Unload(handle);
    CleanEndOfHeap();
    ipcReleaseMutex(m_hWriteMutex);
}

void DataCache::CleanEndOfHeap()
{
    for (; m_nMaxHandles; --m_nMaxHandles)
    {
        DataCacheObject* dco = &m_pObjects[m_nMaxHandles];

        if (dco->m_bUsed)
        {
            break;
        }

        uint32_t size = dco->m_nMaxSize;

        Assert(dco->m_pBase + size == m_pHeap + m_nUsed);

        m_nWaste -= size;
        m_nUsed -= size;
    }
}

int32_t DataCache::BeginObject(int32_t* handle, DataCacheCallback callback, void* context, uint32_t size)
{
    ipcWaitSingle(m_hWriteMutex);

    size = Align8(size);

    if ((m_nMaxHandles >= m_nHandleCap) || (size + m_nUsed > m_nHeapCap))
    {
        int32_t best = 0;

        for (int32_t i = 3; i >= 0; --i)
        {
            uint32_t oldest = m_nAge;
            uint32_t max_size = Align8(size + (size >> i));

            for (int32_t j = 1; j <= m_nMaxHandles; ++j)
            {
                DataCacheObject* dco = &m_pObjects[j];

                if (!dco->m_nLockCount)
                {
                    if ((dco->m_nMaxSize >= size) && (dco->m_nMaxSize <= max_size) && (dco->m_nAge < oldest))
                    {
                        best = j;
                        oldest = dco->m_nAge;
                    }
                }
            }

            if (best)
            {
                break;
            }
        }

        if (!best)
        {
            uint32_t obj, mem, waste;
            GetStatus(obj, mem, waste);

            Errorf(
                "DataCache::BeginObject - %s probably too fragmented: OBJ:%d MEM:%d WASTE:%d", m_Name, obj, mem, waste);

            m_bNeedsDefrag = 1;

            ipcReleaseMutex(m_hWriteMutex);

            return 0;
        }

        DataCacheObject* dco = &m_pObjects[best];

        m_nWaste += dco->m_nMaxSize - size;

        if (dco->m_bUsed)
        {
            Unload(best);
        }

        InitObject(best, handle, callback, context, dco->m_pBase, dco->m_nMaxSize);
    }
    else
    {
        ++m_nMaxHandles;

        InitObject(m_nMaxHandles, handle, callback, context, &m_pHeap[m_nUsed], size);

        m_nUsed += size;
    }

    return 1;
}

void DataCache::InitObject(
    int32_t handle, int32_t* out_handle, DataCacheCallback callback, void* context, uint8_t* ptr, uint32_t maxsize)
{
    DataCacheObject* dco = &m_pObjects[handle];

    dco->m_nLockCount = 1;
    dco->m_pBase = ptr;

    *out_handle = handle;

    Assert(dco->m_bUsed == 0);
    Assert(dco->m_nUsed == 0);

    dco->m_pHandle = out_handle;
    dco->m_bUsed = 1;

    dco->m_Callback = callback;
    dco->m_Context = context;
    dco->m_nAge = m_nAge;

    Assert(maxsize);

    dco->m_nMaxSize = maxsize;

    if (!m_nLockCount++)
    {
        ipcWaitSingle(m_hAccessMutex);
    }
}

void DataCache::EndObject(int32_t handle)
{
    m_pObjects[handle].m_nLockCount = 0;

    if (!--m_nLockCount)
    {
        ipcReleaseMutex(m_hAccessMutex);
    }

    ipcReleaseMutex(m_hWriteMutex);
}

void DataCache::Flush()
{
    ipcWaitSingle(m_hWriteMutex);
    ipcWaitSingle(m_hAccessMutex);

    for (int32_t i = 1; i <= m_nMaxHandles; ++i)
    {
        DataCacheObject* dco = &m_pObjects[i];

        if (dco->m_bUsed)
        {
            Unload(i);
        }

        dco->m_pBase = nullptr;
    }

    m_nUsed = 0;

    ipcReleaseMutex(m_hAccessMutex);
    ipcReleaseMutex(m_hWriteMutex);
}

void DataCache::Age()
{
    ipcWaitSingle(m_hWriteMutex);

    ++m_nAge;

    if (m_nLockCount)
    {
        for (int32_t i = 1; i <= m_nMaxHandles; ++i)
        {
            if (m_pObjects[i].m_nLockCount)
            {
                Quitf("DataCache::Age - Object still locked: %s", "unknown");
            }
        }
    }

    for (int32_t i = 1; i <= m_nMaxHandles; ++i)
    {
        DataCacheObject* dco = &m_pObjects[i];

        if (dco->m_bUsed)
        {
            if (dco->m_nAge + 300 < m_nAge)
            {
                Unload(i);

                m_nWaste += dco->m_nMaxSize;
                m_nAged += dco->m_nMaxSize;

                ++m_nAgedObjects;
            }
        }
    }

    CleanEndOfHeap();

    if (m_bNeedsDefrag || m_nWaste > m_nMaxWaste)
    {
        int32_t i = 1;
        int32_t j = 0;
        uint8_t* heap = m_pHeap;

        for (; i <= m_nMaxHandles; ++i)
        {
            if (m_pObjects[i].m_bUsed)
            {
                ++j;

                DataCacheObject* dco = &m_pObjects[j];

                if (i != j)
                {
                    *dco = m_pObjects[i];
                    *dco->m_pHandle = j;
                }

                Relocate(dco, heap);

                uint32_t size = dco->m_nUsed;
                dco->m_nMaxSize = size;
                heap += size;
            }
        }

        m_nMaxHandles = j;

        for (; j < i; ++j)
        {
            DataCacheObject* dco = &m_pObjects[j];

            dco->m_bUsed = 0;
            dco->m_nUsed = 0;
            dco->m_pBase = nullptr;
        }
    }

    ipcReleaseMutex(m_hWriteMutex);
}

void* DataCache::Allocate(int32_t handle, uint32_t size)
{
    if (!size)
    {
        return nullptr;
    }

    Assert(handle >= 0);

    DataCacheObject* dco = &m_pObjects[handle];

    Assert(dco->m_nLockCount);

    size = Align8(size);

    Assert(dco->m_nUsed + size <= dco->m_nMaxSize);

    void* result = &dco->m_pBase[dco->m_nUsed];

    dco->m_nUsed += size;

    return result;
}

void DataCache::GetStatus(uint32_t& used_handles, uint32_t& used_bytes, uint32_t& wasted_bytes)
{
    used_handles = 100 * m_nMaxHandles / m_nHandleCap;
    used_bytes = 100 * m_nUsed / m_nHeapCap;
    wasted_bytes = 100 * m_nWaste / m_nMaxWaste;
}

define_dummy_symbol(datacache);

run_once([] {
    auto_hook_ctor(0x558930, DataCache);
    auto_hook(0x558940, DataCache::Init);
    auto_hook(0x5589E0, DataCache::Shutdown);
    auto_hook(0x558A20, DataCache::Unload);
    auto_hook(0x558B00, DataCache::Relocate);
    auto_hook(0x558B50, DataCache::Lock);
    auto_hook(0x558BF0, DataCache::Unlock);
    auto_hook(0x558C60, DataCache::UnlockAndFree);
    auto_hook(0x558D00, DataCache::CleanEndOfHeap);
    auto_hook(0x558D70, DataCache::BeginObject);
    auto_hook(0x558F20, DataCache::InitObject);
    auto_hook(0x558FF0, DataCache::EndObject);
    auto_hook(0x559030, DataCache::Flush);
    auto_hook(0x5590B0, DataCache::Age);
    auto_hook(0x559280, DataCache::Allocate);
});
