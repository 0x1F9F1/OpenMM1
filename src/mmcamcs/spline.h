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
    mmcamcs:spline

    0x4EF4B0 | public: __thiscall Spline::Spline(void) | ??0Spline@@QAE@XZ
    0x4EF4E0 | public: void __thiscall Spline::Init(float *,int) | ?Init@Spline@@QAEXPAMH@Z
    0x4EF610 | public: int __thiscall Spline::InRange(void) | ?InRange@Spline@@QAEHXZ
    0x4EF670 | public: void __thiscall Spline::CalcCoeff(void) | ?CalcCoeff@Spline@@QAEXXZ
    0x4EF7D0 | public: void __thiscall Spline::SetValue(float *) | ?SetValue@Spline@@QAEXPAM@Z
    0x4EF850 | public: void __thiscall Spline::SetGoal(float *,float) | ?SetGoal@Spline@@QAEXPAMM@Z
    0x4EF940 | public: void __thiscall Spline::Solve(float) | ?Solve@Spline@@QAEXM@Z
    0x4EFAB0 | public: void __thiscall Spline::Print(int) | ?Print@Spline@@QAEXH@Z
    0x4EFBB0 | public: void __thiscall Spline::FixTimeStop(void) | ?FixTimeStop@Spline@@QAEXXZ
    0x4EFBF0 | public: virtual void __thiscall Spline::Update(void) | ?Update@Spline@@UAEXXZ
    0x4EFC40 | public: void __thiscall Spline::AddWidgets(class Bank *) | ?AddWidgets@Spline@@QAEXPAVBank@@@Z
    0x4EFC50 | public: static void __cdecl Spline::DeclareFields(void) | ?DeclareFields@Spline@@SAXXZ
    0x4EFDB0 | public: virtual class MetaClass * __thiscall Spline::GetClass(void) | ?GetClass@Spline@@UAEPAVMetaClass@@XZ
    0x4EFDC0 | public: virtual void * __thiscall Spline::`vector deleting destructor'(unsigned int) | ??_ESpline@@UAEPAXI@Z
    0x594F48 | const Spline::`vftable' | ??_7Spline@@6B@
    0x67B810 | class MetaClass SplineMetaClass | ?SplineMetaClass@@3VMetaClass@@A
    0x4EFCA0 | void * __cdecl new_Spline(int) | ?new_Spline@@YAPAXH@Z
    0x4EFD60 | void __cdecl delete_Spline(void *,int) | ?delete_Spline@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x67B810 | ?SplineMetaClass@@3VMetaClass@@A
inline extern_var(0x67B810, class MetaClass, SplineMetaClass);

// 0x4EFCA0 | ?new_Spline@@YAPAXH@Z
inline void* new_Spline(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4EFCA0, arg1);
}

// 0x4EFD60 | ?delete_Spline@@YAXPAXH@Z
inline void delete_Spline(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4EFD60, arg1, arg2);
}

struct Spline : asNode
{
public:
    // Spline::`vftable' @ 0x594F48

    // 0x4EF4B0 | ??0Spline@@QAE@XZ
    inline Spline()
    {
        stub<member_func_t<void, Spline>>(0x4EF4B0, this);
    }

    // 0x4EF4E0 | ?Init@Spline@@QAEXPAMH@Z
    inline void Init(float* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, Spline, float*, int32_t>>(0x4EF4E0, this, arg1, arg2);
    }

    // 0x4EF610 | ?InRange@Spline@@QAEHXZ
    inline int32_t InRange()
    {
        return stub<member_func_t<int32_t, Spline>>(0x4EF610, this);
    }

    // 0x4EF670 | ?CalcCoeff@Spline@@QAEXXZ
    inline void CalcCoeff()
    {
        return stub<member_func_t<void, Spline>>(0x4EF670, this);
    }

    // 0x4EF7D0 | ?SetValue@Spline@@QAEXPAM@Z
    inline void SetValue(float* arg1)
    {
        return stub<member_func_t<void, Spline, float*>>(0x4EF7D0, this, arg1);
    }

    // 0x4EF850 | ?SetGoal@Spline@@QAEXPAMM@Z
    inline void SetGoal(float* arg1, float arg2)
    {
        return stub<member_func_t<void, Spline, float*, float>>(0x4EF850, this, arg1, arg2);
    }

    // 0x4EF940 | ?Solve@Spline@@QAEXM@Z
    inline void Solve(float arg1)
    {
        return stub<member_func_t<void, Spline, float>>(0x4EF940, this, arg1);
    }

    // 0x4EFAB0 | ?Print@Spline@@QAEXH@Z
    inline void Print(int32_t arg1)
    {
        return stub<member_func_t<void, Spline, int32_t>>(0x4EFAB0, this, arg1);
    }

    // 0x4EFBB0 | ?FixTimeStop@Spline@@QAEXXZ
    inline void FixTimeStop()
    {
        return stub<member_func_t<void, Spline>>(0x4EFBB0, this);
    }

    // 0x4EFC40 | ?AddWidgets@Spline@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, Spline, class Bank*>>(0x4EFC40, this, arg1);
    }

    // 0x4EFC50 | ?DeclareFields@Spline@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4EFC50);
    }

    // 0x4EB570 | ??1Spline@@UAE@XZ
    inline ~Spline() override
    {
        stub<member_func_t<void, Spline>>(0x4EB570, this);
    }

    // 0x4EFDB0 | ?GetClass@Spline@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, Spline>>(0x4EFDB0, this);
    }

    // 0x4EFBF0 | ?Update@Spline@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, Spline>>(0x4EFBF0, this);
    }
};
