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
    mmui:pu_menu

    0x49FBD0 | public: __thiscall PUMenuBase::PUMenuBase(int,float,float,float,float,char *) | ??0PUMenuBase@@QAE@HMMMMPAD@Z
    0x49FDA0 | public: virtual __thiscall PUMenuBase::~PUMenuBase(void) | ??1PUMenuBase@@UAE@XZ
    0x49FE00 | public: class agiBitmap * __thiscall PUMenuBase::CreateDummyBitmap(void) | ?CreateDummyBitmap@PUMenuBase@@QAEPAVagiBitmap@@XZ
    0x49FE60 | public: float __thiscall PUMenuBase::CreateTitle(void) | ?CreateTitle@PUMenuBase@@QAEMXZ
    0x49FE70 | public: float __thiscall PUMenuBase::AddPrevious(float,float,float,float) | ?AddPrevious@PUMenuBase@@QAEMMMMM@Z
    0x49FEE0 | public: void __thiscall PUMenuBase::AddOKCancel(class Callback,class Callback) | ?AddOKCancel@PUMenuBase@@QAEXVCallback@@0@Z
    0x49FF80 | public: float __thiscall PUMenuBase::AddExit(float,float,float,float) | ?AddExit@PUMenuBase@@QAEMMMMM@Z
    0x49FFF0 | public: virtual void __thiscall PUMenuBase::Update(void) | ?Update@PUMenuBase@@UAEXXZ
    0x4A0020 | public: virtual void __thiscall PUMenuBase::Cull(void) | ?Cull@PUMenuBase@@UAEXXZ
    0x4A0060 | public: void __thiscall PUMenuBase::DisableExit(void) | ?DisableExit@PUMenuBase@@QAEXXZ
    0x4A0070 | public: void __thiscall PUMenuBase::EnableExit(void) | ?EnableExit@PUMenuBase@@QAEXXZ
    0x4A0080 | public: virtual void * __thiscall PUMenuBase::`vector deleting destructor'(unsigned int) | ??_EPUMenuBase@@UAEPAXI@Z
    0x4A0080 | public: virtual void * __thiscall PUMenuBase::`scalar deleting destructor'(unsigned int) | ??_GPUMenuBase@@UAEPAXI@Z
    0x592F40 | const PUMenuBase::`vftable' | ??_7PUMenuBase@@6B@
*/

#include "hooking.h"

struct PUMenuBase : UIMenu
{
public:
    // PUMenuBase::`vftable' @ 0x592F40

    // 0x49FBD0 | ??0PUMenuBase@@QAE@HMMMMPAD@Z
    inline PUMenuBase(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, PUMenuBase, int32_t, float, float, float, float, char*>>(
            0x49FBD0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x49FE00 | ?CreateDummyBitmap@PUMenuBase@@QAEPAVagiBitmap@@XZ
    inline class agiBitmap* CreateDummyBitmap()
    {
        return stub<member_func_t<class agiBitmap*, PUMenuBase>>(0x49FE00, this);
    }

    // 0x49FE60 | ?CreateTitle@PUMenuBase@@QAEMXZ
    inline float CreateTitle()
    {
        return stub<member_func_t<float, PUMenuBase>>(0x49FE60, this);
    }

    // 0x49FE70 | ?AddPrevious@PUMenuBase@@QAEMMMMM@Z
    inline float AddPrevious(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<float, PUMenuBase, float, float, float, float>>(
            0x49FE70, this, arg1, arg2, arg3, arg4);
    }

    // 0x49FEE0 | ?AddOKCancel@PUMenuBase@@QAEXVCallback@@0@Z
    inline void AddOKCancel(class Callback arg1, class Callback arg2)
    {
        return stub<member_func_t<void, PUMenuBase, class Callback, class Callback>>(0x49FEE0, this, arg1, arg2);
    }

    // 0x49FF80 | ?AddExit@PUMenuBase@@QAEMMMMM@Z
    inline float AddExit(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<float, PUMenuBase, float, float, float, float>>(
            0x49FF80, this, arg1, arg2, arg3, arg4);
    }

    // 0x4A0060 | ?DisableExit@PUMenuBase@@QAEXXZ
    inline void DisableExit()
    {
        return stub<member_func_t<void, PUMenuBase>>(0x4A0060, this);
    }

    // 0x4A0070 | ?EnableExit@PUMenuBase@@QAEXXZ
    inline void EnableExit()
    {
        return stub<member_func_t<void, PUMenuBase>>(0x4A0070, this);
    }

    // 0x49FDA0 | ??1PUMenuBase@@UAE@XZ
    inline ~PUMenuBase() override = 0
    {
        // stub<member_func_t<void, PUMenuBase>>(0x49FDA0, this);

        unimplemented();
    }

    // 0x4A0020 | ?Cull@PUMenuBase@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, PUMenuBase>>(0x4A0020, this);
    }

    // 0x49FFF0 | ?Update@PUMenuBase@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, PUMenuBase>>(0x49FFF0, this);
    }
};
