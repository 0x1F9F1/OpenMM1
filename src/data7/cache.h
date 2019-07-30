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

#pragma once

/*
    data7:cache

    0x558930 | public: __thiscall DataCache::DataCache(void) | ??0DataCache@@QAE@XZ
    0x558940 | public: void __thiscall DataCache::Init(unsigned int,int,char *) | ?Init@DataCache@@QAEXIHPAD@Z
    0x5589E0 | public: void __thiscall DataCache::Shutdown(void) | ?Shutdown@DataCache@@QAEXXZ
    0x558A20 | private: void __thiscall DataCache::Unload(int) | ?Unload@DataCache@@AAEXH@Z
    0x558B00 | private: void __thiscall DataCache::Relocate(struct DataCacheObject *,unsigned char *) | ?Relocate@DataCache@@AAEXPAUDataCacheObject@@PAE@Z
    0x558B50 | public: int __thiscall DataCache::Lock(int *) | ?Lock@DataCache@@QAEHPAH@Z
    0x558BF0 | public: void __thiscall DataCache::Unlock(int) | ?Unlock@DataCache@@QAEXH@Z
    0x558C60 | public: void __thiscall DataCache::UnlockAndFree(int) | ?UnlockAndFree@DataCache@@QAEXH@Z
    0x558D00 | private: void __thiscall DataCache::CleanEndOfHeap(void) | ?CleanEndOfHeap@DataCache@@AAEXXZ
    0x558D70 | public: int __thiscall DataCache::BeginObject(int *,void (__cdecl*)(void *,int),void *,unsigned int) | ?BeginObject@DataCache@@QAEHPAHP6AXPAXH@Z1I@Z
    0x558F20 | private: void __thiscall DataCache::InitObject(int,int *,void (__cdecl*)(void *,int),void *,unsigned char *,unsigned int) | ?InitObject@DataCache@@AAEXHPAHP6AXPAXH@Z1PAEI@Z
    0x558FF0 | public: void __thiscall DataCache::EndObject(int) | ?EndObject@DataCache@@QAEXH@Z
    0x559030 | public: void __thiscall DataCache::Flush(void) | ?Flush@DataCache@@QAEXXZ
    0x5590B0 | public: void __thiscall DataCache::Age(void) | ?Age@DataCache@@QAEXXZ
    0x559280 | public: void * __thiscall DataCache::Allocate(int,unsigned int) | ?Allocate@DataCache@@QAEPAXHI@Z
    0x559330 | public: void __thiscall DataCache::GetStatus(unsigned int &,unsigned int &,unsigned int &) | ?GetStatus@DataCache@@QAEXAAI00@Z
    0x711AC8 | class DataCache CACHE | ?CACHE@@3VDataCache@@A
*/

// 0x711AC8 | ?CACHE@@3VDataCache@@A
inline extern_var(0x711AC8, class DataCache, CACHE);

using PageOutCallback = void (*)(void* context, int32_t delta);

struct DataCacheObject
{
    uint32_t m_nAge {0};

    uint8_t* m_pBase {nullptr};
    int32_t* m_pHandle {nullptr};

    uint8_t m_bUsed {0};
    uint8_t m_nLockCount {0};

    uint32_t m_nUsed {0};
    uint32_t m_nMaxSize {0};

    PageOutCallback m_Callback {nullptr};
    void* m_Context {nullptr};
};

class DataCache
{
public:
    uint32_t m_nAgedObjects {0};
    uint32_t m_nAged {0};

    DataCacheObject* m_pObjects {nullptr};
    int32_t m_nHandleCap {0};
    int32_t m_nMaxHandles {0};

    uint32_t m_nWaste {0};
    uint32_t m_nMaxWaste {0};
    bool32_t m_bNeedsDefrag {0};

    uint8_t* m_pHeap {nullptr};
    uint32_t m_nHeapCap {0};
    uint32_t m_nUsed {0};

    uint32_t m_nAge {0};
    uint32_t m_nLockCount {0};

    uint32_t m_hWriteMutex {0};
    uint32_t m_hAccessMutex {0};

    const char* m_Name {nullptr};

    // 0x558930 | ??0DataCache@@QAE@XZ
    DataCache();

    // 0x558940 | ?Init@DataCache@@QAEXIHPAD@Z
    void Init(uint32_t heap_size, int32_t capacity, const char* name);

    // 0x5589E0 | ?Shutdown@DataCache@@QAEXXZ
    void Shutdown();

    // 0x558A20 | ?Unload@DataCache@@AAEXH@Z
    void Unload(int32_t handle);

    // 0x558B00 | ?Relocate@DataCache@@AAEXPAUDataCacheObject@@PAE@Z
    void Relocate(struct DataCacheObject* dco, uint8_t* ptr);

    // 0x558B50 | ?Lock@DataCache@@QAEHPAH@Z
    int32_t Lock(int32_t* handle);

    // 0x558BF0 | ?Unlock@DataCache@@QAEXH@Z
    void Unlock(int32_t handle);

    // 0x558C60 | ?UnlockAndFree@DataCache@@QAEXH@Z
    void UnlockAndFree(int32_t handle);

    // 0x558D00 | ?CleanEndOfHeap@DataCache@@AAEXXZ
    void CleanEndOfHeap();

    // 0x558D70 | ?BeginObject@DataCache@@QAEHPAHP6AXPAXH@Z1I@Z
    int32_t BeginObject(int32_t* handle, PageOutCallback callback, void* context, uint32_t size);

    // 0x558F20 | ?InitObject@DataCache@@AAEXHPAHP6AXPAXH@Z1PAEI@Z
    void InitObject(
        int32_t handle, int32_t* out_handle, PageOutCallback callback, void* context, uint8_t* ptr, uint32_t maxsize);

    // 0x558FF0 | ?EndObject@DataCache@@QAEXH@Z
    void EndObject(int32_t handle);

    // 0x559030 | ?Flush@DataCache@@QAEXXZ
    void Flush();

    // 0x5590B0 | ?Age@DataCache@@QAEXXZ
    void Age();

    // 0x559280 | ?Allocate@DataCache@@QAEPAXHI@Z
    void* Allocate(int32_t handle, uint32_t size);

    // 0x559330 | ?GetStatus@DataCache@@QAEXAAI00@Z
    void GetStatus(uint32_t& used_handles, uint32_t& used_bytes, uint32_t& free_bytes);
};

check_size(DataCache, 0x40);
check_size(DataCacheObject, 0x20);
