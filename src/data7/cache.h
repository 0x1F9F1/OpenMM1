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

#include "hooking.h"

// 0x711AC8 | ?CACHE@@3VDataCache@@A
inline extern_var(0x711AC8, class DataCache, CACHE);

struct DataCacheObject
{
    uint32_t m_LastAgeAccess {0};
    uint8_t* m_pData {nullptr};
    uint32_t* m_Status {nullptr};
    uint8_t m_bUsed {0};
    uint8_t m_nLockCount {0};
    uint8_t m_byteE {0};
    uint8_t m_byteF {0};
    uint32_t m_nTotalSize {0};
    uint32_t m_nMaxSize {0};
    void(__cdecl* m_Callback)(void*, uint32_t) {nullptr};
    void* m_pValue {nullptr};
};

class DataCache
{
public:
    uint32_t m_AgedObjectsCount {0};
    uint32_t m_AgedObjectsSize {0};
    DataCacheObject* m_pObjects {nullptr};
    uint32_t m_nMaxObjects {0};
    uint32_t m_nCurrentObjects {0};
    uint32_t m_nHeapObjects {0};
    uint32_t m_nMaxHeapObjects {0};
    uint32_t m_HasError {0};
    uint8_t* m_pHeap {nullptr};
    uint32_t m_nHeapSize {0};
    uint32_t m_nTotalAllocated {0};
    uint32_t m_AgeChecks {0};
    uint32_t m_LockCount {0};
    void* m_hWriteMutex {nullptr};
    void* m_hAccessMutex {nullptr};
    const char* m_Name {nullptr};

    // 0x558930 | ??0DataCache@@QAE@XZ
    inline DataCache()
    {
        // stub<member_func_t<void, DataCache>>(0x558930, this);

        unimplemented();
    }

    // 0x558940 | ?Init@DataCache@@QAEXIHPAD@Z
    inline void Init(uint32_t arg1, int32_t arg2, char* arg3)
    {
        return stub<member_func_t<void, DataCache, uint32_t, int32_t, char*>>(0x558940, this, arg1, arg2, arg3);
    }

    // 0x5589E0 | ?Shutdown@DataCache@@QAEXXZ
    inline void Shutdown()
    {
        return stub<member_func_t<void, DataCache>>(0x5589E0, this);
    }

    // 0x558A20 | ?Unload@DataCache@@AAEXH@Z
    inline void Unload(int32_t arg1)
    {
        return stub<member_func_t<void, DataCache, int32_t>>(0x558A20, this, arg1);
    }

    // 0x558B00 | ?Relocate@DataCache@@AAEXPAUDataCacheObject@@PAE@Z
    inline void Relocate(struct DataCacheObject* arg1, uint8_t* arg2)
    {
        return stub<member_func_t<void, DataCache, struct DataCacheObject*, uint8_t*>>(0x558B00, this, arg1, arg2);
    }

    // 0x558B50 | ?Lock@DataCache@@QAEHPAH@Z
    inline int32_t Lock(int32_t* arg1)
    {
        return stub<member_func_t<int32_t, DataCache, int32_t*>>(0x558B50, this, arg1);
    }

    // 0x558BF0 | ?Unlock@DataCache@@QAEXH@Z
    inline void Unlock(int32_t arg1)
    {
        return stub<member_func_t<void, DataCache, int32_t>>(0x558BF0, this, arg1);
    }

    // 0x558C60 | ?UnlockAndFree@DataCache@@QAEXH@Z
    inline void UnlockAndFree(int32_t arg1)
    {
        return stub<member_func_t<void, DataCache, int32_t>>(0x558C60, this, arg1);
    }

    // 0x558D00 | ?CleanEndOfHeap@DataCache@@AAEXXZ
    inline void CleanEndOfHeap()
    {
        return stub<member_func_t<void, DataCache>>(0x558D00, this);
    }

    // 0x558D70 | ?BeginObject@DataCache@@QAEHPAHP6AXPAXH@Z1I@Z
    inline int32_t BeginObject(int32_t* arg1, void(__cdecl* arg2)(void*, int32_t), void* arg3, uint32_t arg4)
    {
        return stub<member_func_t<int32_t, DataCache, int32_t*, void(__cdecl*)(void*, int32_t), void*, uint32_t>>(
            0x558D70, this, arg1, arg2, arg3, arg4);
    }

    // 0x558F20 | ?InitObject@DataCache@@AAEXHPAHP6AXPAXH@Z1PAEI@Z
    inline void InitObject(
        int32_t arg1, int32_t* arg2, void(__cdecl* arg3)(void*, int32_t), void* arg4, uint8_t* arg5, uint32_t arg6)
    {
        return stub<member_func_t<void, DataCache, int32_t, int32_t*, void(__cdecl*)(void*, int32_t), void*, uint8_t*,
            uint32_t>>(0x558F20, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x558FF0 | ?EndObject@DataCache@@QAEXH@Z
    inline void EndObject(int32_t arg1)
    {
        return stub<member_func_t<void, DataCache, int32_t>>(0x558FF0, this, arg1);
    }

    // 0x559030 | ?Flush@DataCache@@QAEXXZ
    inline void Flush()
    {
        return stub<member_func_t<void, DataCache>>(0x559030, this);
    }

    // 0x5590B0 | ?Age@DataCache@@QAEXXZ
    inline void Age()
    {
        return stub<member_func_t<void, DataCache>>(0x5590B0, this);
    }

    // 0x559280 | ?Allocate@DataCache@@QAEPAXHI@Z
    inline void* Allocate(int32_t arg1, uint32_t arg2)
    {
        return stub<member_func_t<void*, DataCache, int32_t, uint32_t>>(0x559280, this, arg1, arg2);
    }

    // 0x559330 | ?GetStatus@DataCache@@QAEXAAI00@Z
    inline void GetStatus(uint32_t& arg1, uint32_t& arg2, uint32_t& arg3)
    {
        return stub<member_func_t<void, DataCache, uint32_t&, uint32_t&, uint32_t&>>(0x559330, this, arg1, arg2, arg3);
    }
};

check_size(DataCache, 0x40);
check_size(DataCacheObject, 0x20);
