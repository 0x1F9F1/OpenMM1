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

// mmui:pu_graphics

#include "hooking.h"

// 0x49EA60 | ?toggle_interlace@@YAXXZ
inline void toggle_interlace()
{
    return stub<cdecl_t<void>>(0x49EA60);
}

// 0x49EA80 | ?toggle_filter@@YAXXZ
inline void toggle_filter()
{
    return stub<cdecl_t<void>>(0x49EA80);
}

// 0x49EAB0 | ?fix_lighting_lame@@YAXXZ
inline void fix_lighting_lame()
{
    return stub<cdecl_t<void>>(0x49EAB0);
}

struct PUGraphics : PUMenuBase
{
public:
    // PUGraphics::`vftable' @ 0x592CC8

    // 0x49E550 | ??0PUGraphics@@QAE@HMMMM@Z
    inline PUGraphics(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        stub<member_func_t<void, PUGraphics, int32_t, float, float, float, float>>(
            0x49E550, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x49EAF0 | ?CancelAction@PUGraphics@@QAEXXZ
    inline void CancelAction()
    {
        return stub<member_func_t<void, PUGraphics>>(0x49EAF0, this);
    }

    // 0x49EAD0 | ??1PUGraphics@@UAE@XZ
    inline ~PUGraphics() override
    {
        stub<member_func_t<void, PUGraphics>>(0x49EAD0, this);
    }

    // 0x49EAE0 | ?PreSetup@PUGraphics@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, PUGraphics>>(0x49EAE0, this);
    }
};
