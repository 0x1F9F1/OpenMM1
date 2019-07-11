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

// data7:cache

#include "hooking.h"

// 0x711AC8 | ?CACHE@@3VDataCache@@A
inline extern_var(0x711AC8, class DataCache, CACHE);

class DataCache
{
public:
    // 0x558930 | ??0DataCache@@QAE@XZ
    inline DataCache()
    {
        stub<member_func_t<void, DataCache>>(0x558930, this);
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
