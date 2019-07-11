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

// mmcityinfo:miscdata

#include "hooking.h"

// 0x66A820 | ?mmMiscDataMetaClass@@3VMetaClass@@A
inline extern_var(0x66A820, class MetaClass, mmMiscDataMetaClass);

// 0x4C1D80 | ?new_mmMiscData@@YAPAXH@Z
inline void* new_mmMiscData(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4C1D80, arg1);
}

// 0x4C1E60 | ?delete_mmMiscData@@YAXPAXH@Z
inline void delete_mmMiscData(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4C1E60, arg1, arg2);
}

struct mmMiscData : mmInfoBase
{
public:
    // mmMiscData::`vftable' @ 0x594410

    // 0x4C09E0 | ??0mmMiscData@@QAE@XZ
    inline mmMiscData()
    {
        stub<member_func_t<void, mmMiscData>>(0x4C09E0, this);
    }

    // 0x4C0BF0 | ?Load@mmMiscData@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, mmMiscData, char*>>(0x4C0BF0, this, arg1);
    }

    // 0x4C0C60 | ?Save@mmMiscData@@QAEHPADH@Z
    inline int32_t Save(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmMiscData, char*, int32_t>>(0x4C0C60, this, arg1, arg2);
    }

    // 0x4C0CF0 | ?LoadBinary@mmMiscData@@QAEHPAD@Z
    inline int32_t LoadBinary(char* arg1)
    {
        return stub<member_func_t<int32_t, mmMiscData, char*>>(0x4C0CF0, this, arg1);
    }

    // 0x4C0EB0 | ?SaveBinary@mmMiscData@@QAEHPAD@Z
    inline int32_t SaveBinary(char* arg1)
    {
        return stub<member_func_t<int32_t, mmMiscData, char*>>(0x4C0EB0, this, arg1);
    }

    // 0x4C1030 | ?GetBestRaceTime@mmMiscData@@QAE?AVmmRecord@@HH@Z
    inline class mmRecord GetBestRaceTime(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<class mmRecord, mmMiscData, int32_t, int32_t>>(0x4C1030, this, arg1, arg2);
    }

    // 0x4C1160 | ?GetBestBlitzTime@mmMiscData@@QAE?AVmmRecord@@HH@Z
    inline class mmRecord GetBestBlitzTime(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<class mmRecord, mmMiscData, int32_t, int32_t>>(0x4C1160, this, arg1, arg2);
    }

    // 0x4C1290 | ?GetBestCircuitTime@mmMiscData@@QAE?AVmmRecord@@HH@Z
    inline class mmRecord GetBestCircuitTime(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<class mmRecord, mmMiscData, int32_t, int32_t>>(0x4C1290, this, arg1, arg2);
    }

    // 0x4C13C0 | ?GetBestRaceScore@mmMiscData@@QAE?AVmmRecord@@HH@Z
    inline class mmRecord GetBestRaceScore(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<class mmRecord, mmMiscData, int32_t, int32_t>>(0x4C13C0, this, arg1, arg2);
    }

    // 0x4C14F0 | ?GetBestBlitzScore@mmMiscData@@QAE?AVmmRecord@@HH@Z
    inline class mmRecord GetBestBlitzScore(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<class mmRecord, mmMiscData, int32_t, int32_t>>(0x4C14F0, this, arg1, arg2);
    }

    // 0x4C1620 | ?GetBestCircuitScore@mmMiscData@@QAE?AVmmRecord@@HH@Z
    inline class mmRecord GetBestCircuitScore(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<class mmRecord, mmMiscData, int32_t, int32_t>>(0x4C1620, this, arg1, arg2);
    }

    // 0x4C1750 | ?CheckCheckpoint@mmMiscData@@QAEHPADMH0HH@Z
    inline int32_t CheckCheckpoint(char* arg1, float arg2, int32_t arg3, char* arg4, int32_t arg5, int32_t arg6)
    {
        return stub<member_func_t<int32_t, mmMiscData, char*, float, int32_t, char*, int32_t, int32_t>>(
            0x4C1750, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4C18F0 | ?CheckCircuit@mmMiscData@@QAEHPADMH0HH@Z
    inline int32_t CheckCircuit(char* arg1, float arg2, int32_t arg3, char* arg4, int32_t arg5, int32_t arg6)
    {
        return stub<member_func_t<int32_t, mmMiscData, char*, float, int32_t, char*, int32_t, int32_t>>(
            0x4C18F0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4C1A90 | ?CheckBlitz@mmMiscData@@QAEHPADMH0HH@Z
    inline int32_t CheckBlitz(char* arg1, float arg2, int32_t arg3, char* arg4, int32_t arg5, int32_t arg6)
    {
        return stub<member_func_t<int32_t, mmMiscData, char*, float, int32_t, char*, int32_t, int32_t>>(
            0x4C1A90, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4C1C30 | ?DeclareFields@mmMiscData@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4C1C30);
    }

    // 0x4C0AF0 | ??1mmMiscData@@UAE@XZ
    inline ~mmMiscData() override
    {
        stub<member_func_t<void, mmMiscData>>(0x4C0AF0, this);
    }

    // 0x4C1EB0 | ?GetClass@mmMiscData@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmMiscData>>(0x4C1EB0, this);
    }
};
