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
    mmui:pu_control

    0x49EB40 | public: __thiscall PUControl::PUControl(int,float,float,float,float) | ??0PUControl@@QAE@HMMMM@Z
    0x49EE40 | public: virtual __thiscall PUControl::~PUControl(void) | ??1PUControl@@UAE@XZ
    0x49EEA0 | public: virtual void __thiscall PUControl::PreSetup(void) | ?PreSetup@PUControl@@UAEXXZ
    0x49EEC0 | public: void __thiscall PUControl::CancelAction(void) | ?CancelAction@PUControl@@QAEXXZ
    0x49EEE0 | public: void __thiscall PUControl::SetRWStates(void) | ?SetRWStates@PUControl@@QAEXXZ
    0x49EF70 | public: void __thiscall PUControl::ControlSelect(void) | ?ControlSelect@PUControl@@QAEXXZ
    0x49EFA0 | public: void __thiscall PUControl::SetSensitivityCB(void) | ?SetSensitivityCB@PUControl@@QAEXXZ
    0x49EFB0 | public: virtual void * __thiscall PUControl::`scalar deleting destructor'(unsigned int) | ??_GPUControl@@UAEPAXI@Z
    0x49EFB0 | public: virtual void * __thiscall PUControl::`vector deleting destructor'(unsigned int) | ??_EPUControl@@UAEPAXI@Z
    0x592D20 | const PUControl::`vftable' | ??_7PUControl@@6B@
*/

#include "hooking.h"

struct PUControl : PUMenuBase
{
public:
    // PUControl::`vftable' @ 0x592D20

    // 0x49EB40 | ??0PUControl@@QAE@HMMMM@Z
    inline PUControl(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        stub<member_func_t<void, PUControl, int32_t, float, float, float, float>>(
            0x49EB40, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x49EEC0 | ?CancelAction@PUControl@@QAEXXZ
    inline void CancelAction()
    {
        return stub<member_func_t<void, PUControl>>(0x49EEC0, this);
    }

    // 0x49EEE0 | ?SetRWStates@PUControl@@QAEXXZ
    inline void SetRWStates()
    {
        return stub<member_func_t<void, PUControl>>(0x49EEE0, this);
    }

    // 0x49EF70 | ?ControlSelect@PUControl@@QAEXXZ
    inline void ControlSelect()
    {
        return stub<member_func_t<void, PUControl>>(0x49EF70, this);
    }

    // 0x49EFA0 | ?SetSensitivityCB@PUControl@@QAEXXZ
    inline void SetSensitivityCB()
    {
        return stub<member_func_t<void, PUControl>>(0x49EFA0, this);
    }

    // 0x49EE40 | ??1PUControl@@UAE@XZ
    inline ~PUControl() override
    {
        stub<member_func_t<void, PUControl>>(0x49EE40, this);
    }

    // 0x49EEA0 | ?PreSetup@PUControl@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, PUControl>>(0x49EEA0, this);
    }
};
