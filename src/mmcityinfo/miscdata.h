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
    mmcityinfo:miscdata

    0x4C09E0 | public: __thiscall mmMiscData::mmMiscData(void) | ??0mmMiscData@@QAE@XZ
    0x4C0AF0 | public: virtual __thiscall mmMiscData::~mmMiscData(void) | ??1mmMiscData@@UAE@XZ
    0x4C0BF0 | public: int __thiscall mmMiscData::Load(char *) | ?Load@mmMiscData@@QAEHPAD@Z
    0x4C0C60 | public: int __thiscall mmMiscData::Save(char *,int) | ?Save@mmMiscData@@QAEHPADH@Z
    0x4C0CF0 | public: int __thiscall mmMiscData::LoadBinary(char *) | ?LoadBinary@mmMiscData@@QAEHPAD@Z
    0x4C0EB0 | public: int __thiscall mmMiscData::SaveBinary(char *) | ?SaveBinary@mmMiscData@@QAEHPAD@Z
    0x4C1030 | public: class mmRecord __thiscall mmMiscData::GetBestRaceTime(int,int) | ?GetBestRaceTime@mmMiscData@@QAE?AVmmRecord@@HH@Z
    0x4C1160 | public: class mmRecord __thiscall mmMiscData::GetBestBlitzTime(int,int) | ?GetBestBlitzTime@mmMiscData@@QAE?AVmmRecord@@HH@Z
    0x4C1290 | public: class mmRecord __thiscall mmMiscData::GetBestCircuitTime(int,int) | ?GetBestCircuitTime@mmMiscData@@QAE?AVmmRecord@@HH@Z
    0x4C13C0 | public: class mmRecord __thiscall mmMiscData::GetBestRaceScore(int,int) | ?GetBestRaceScore@mmMiscData@@QAE?AVmmRecord@@HH@Z
    0x4C14F0 | public: class mmRecord __thiscall mmMiscData::GetBestBlitzScore(int,int) | ?GetBestBlitzScore@mmMiscData@@QAE?AVmmRecord@@HH@Z
    0x4C1620 | public: class mmRecord __thiscall mmMiscData::GetBestCircuitScore(int,int) | ?GetBestCircuitScore@mmMiscData@@QAE?AVmmRecord@@HH@Z
    0x4C1750 | public: int __thiscall mmMiscData::CheckCheckpoint(char *,float,int,char *,int,int) | ?CheckCheckpoint@mmMiscData@@QAEHPADMH0HH@Z
    0x4C18F0 | public: int __thiscall mmMiscData::CheckCircuit(char *,float,int,char *,int,int) | ?CheckCircuit@mmMiscData@@QAEHPADMH0HH@Z
    0x4C1A90 | public: int __thiscall mmMiscData::CheckBlitz(char *,float,int,char *,int,int) | ?CheckBlitz@mmMiscData@@QAEHPADMH0HH@Z
    0x4C1C30 | public: static void __cdecl mmMiscData::DeclareFields(void) | ?DeclareFields@mmMiscData@@SAXXZ
    0x4C1EB0 | public: virtual class MetaClass * __thiscall mmMiscData::GetClass(void) | ?GetClass@mmMiscData@@UAEPAVMetaClass@@XZ
    0x4C1EC0 | public: virtual void * __thiscall mmRecord::`scalar deleting destructor'(unsigned int) | ??_GmmRecord@@UAEPAXI@Z
    0x4C1EF0 | public: virtual void * __thiscall mmMiscData::`vector deleting destructor'(unsigned int) | ??_EmmMiscData@@UAEPAXI@Z
    0x594410 | const mmMiscData::`vftable' | ??_7mmMiscData@@6B@
    0x594428 | const mmRecord::`vftable' | ??_7mmRecord@@6B@
    0x66A820 | class MetaClass mmMiscDataMetaClass | ?mmMiscDataMetaClass@@3VMetaClass@@A
    0x4C1D80 | void * __cdecl new_mmMiscData(int) | ?new_mmMiscData@@YAPAXH@Z
    0x4C1E60 | void __cdecl delete_mmMiscData(void *,int) | ?delete_mmMiscData@@YAXPAXH@Z
*/

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
