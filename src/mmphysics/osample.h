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
    mmphysics:osample

    0x4D1F00 | public: __thiscall asOverSample::asOverSample(void) | ??0asOverSample@@QAE@XZ
    0x4D1F30 | public: void __thiscall asOverSample::RealTime(float) | ?RealTime@asOverSample@@QAEXM@Z
    0x4D1F50 | public: virtual void __thiscall asOverSample::Update(void) | ?Update@asOverSample@@UAEXXZ
    0x4D2010 | public: void __thiscall asOverSample::AddWidgets(class Bank *) | ?AddWidgets@asOverSample@@QAEXPAVBank@@@Z
    0x4D2020 | public: static void __cdecl asOverSample::DeclareFields(void) | ?DeclareFields@asOverSample@@SAXXZ
    0x4D21A0 | public: virtual class MetaClass * __thiscall asOverSample::GetClass(void) | ?GetClass@asOverSample@@UAEPAVMetaClass@@XZ
    0x4D21B0 | public: virtual void * __thiscall asOverSample::`vector deleting destructor'(unsigned int) | ??_EasOverSample@@UAEPAXI@Z
    0x594650 | const asOverSample::`vftable' | ??_7asOverSample@@6B@
    0x67B438 | class MetaClass asOverSampleMetaClass | ?asOverSampleMetaClass@@3VMetaClass@@A
    0x67B460 | int BenchOSample | ?BenchOSample@@3HA
    0x4D2090 | void * __cdecl new_asOverSample(int) | ?new_asOverSample@@YAPAXH@Z
    0x4D2150 | void __cdecl delete_asOverSample(void *,int) | ?delete_asOverSample@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x67B438 | ?asOverSampleMetaClass@@3VMetaClass@@A
inline extern_var(0x67B438, class MetaClass, asOverSampleMetaClass);

// 0x67B460 | ?BenchOSample@@3HA
inline extern_var(0x67B460, int32_t, BenchOSample);

// 0x4D2090 | ?new_asOverSample@@YAPAXH@Z
inline void* new_asOverSample(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4D2090, arg1);
}

// 0x4D2150 | ?delete_asOverSample@@YAXPAXH@Z
inline void delete_asOverSample(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4D2150, arg1, arg2);
}

struct asOverSample : asNode
{
public:
    // asOverSample::`vftable' @ 0x594650

    // 0x4D1F00 | ??0asOverSample@@QAE@XZ
    inline asOverSample()
    {
        stub<member_func_t<void, asOverSample>>(0x4D1F00, this);
    }

    // 0x4D1F30 | ?RealTime@asOverSample@@QAEXM@Z
    inline void RealTime(float arg1)
    {
        return stub<member_func_t<void, asOverSample, float>>(0x4D1F30, this, arg1);
    }

    // 0x4D2010 | ?AddWidgets@asOverSample@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, asOverSample, class Bank*>>(0x4D2010, this, arg1);
    }

    // 0x4D2020 | ?DeclareFields@asOverSample@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4D2020);
    }

    // 0x423BB0 | ??1asOverSample@@UAE@XZ
    inline ~asOverSample() override
    {
        stub<member_func_t<void, asOverSample>>(0x423BB0, this);
    }

    // 0x4D21A0 | ?GetClass@asOverSample@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asOverSample>>(0x4D21A0, this);
    }

    // 0x4D1F50 | ?Update@asOverSample@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asOverSample>>(0x4D1F50, this);
    }
};
