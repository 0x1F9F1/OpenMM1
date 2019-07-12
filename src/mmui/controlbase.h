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
    mmui:controlbase

    0x4A02F0 | public: __thiscall ControlBase::ControlBase(void) | ??0ControlBase@@QAE@XZ
    0x4A0300 | public: __thiscall ControlBase::~ControlBase(void) | ??1ControlBase@@QAE@XZ
    0x4A0310 | public: void __thiscall ControlBase::InitSensitivity(void) | ?InitSensitivity@ControlBase@@QAEXXZ
    0x4A0370 | public: void __thiscall ControlBase::SetSensitivity(void) | ?SetSensitivity@ControlBase@@QAEXXZ
*/

#include "hooking.h"

struct ControlBase
{
public:
    // 0x4A02F0 | ??0ControlBase@@QAE@XZ
    inline ControlBase()
    {
        // stub<member_func_t<void, ControlBase>>(0x4A02F0, this);

        unimplemented();
    }

    // 0x4A0300 | ??1ControlBase@@QAE@XZ
    inline ~ControlBase()
    {
        stub<member_func_t<void, ControlBase>>(0x4A0300, this);
    }

    // 0x4A0310 | ?InitSensitivity@ControlBase@@QAEXXZ
    inline void InitSensitivity()
    {
        return stub<member_func_t<void, ControlBase>>(0x4A0310, this);
    }

    // 0x4A0370 | ?SetSensitivity@ControlBase@@QAEXXZ
    inline void SetSensitivity()
    {
        return stub<member_func_t<void, ControlBase>>(0x4A0370, this);
    }
};
