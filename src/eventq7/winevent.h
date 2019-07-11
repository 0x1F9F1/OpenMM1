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

// eventq7:winevent

#include "hooking.h"

// 0x544970 | ?InitEventQueue@@YAXXZ
inline void InitEventQueue()
{
    return stub<cdecl_t<void>>(0x544970);
}

// 0x5449E0 | ?DeallocateEventQueue@@YAXXZ
inline void DeallocateEventQueue()
{
    return stub<cdecl_t<void>>(0x5449E0);
}

// 0x5C3D38 | ?ActiveFlag@@3HA
inline extern_var(0x5C3D38, int32_t, ActiveFlag);

// 0x710074 | ?CloseCallback@@3P6AXXZA
inline extern_var(0x710074, void(__cdecl*)(void), CloseCallback);

// 0x710078 | ?InitialCursorState@@3HA
inline extern_var(0x710078, int32_t, InitialCursorState);

// 0x710088 | ?eqRestoreFlag@@3HA
inline extern_var(0x710088, int32_t, eqRestoreFlag);

class Dispatchable
{
public:
    // Dispatchable::`vftable' @ 0x595FCC

    // 0x567350 | __purecall
};

struct WINEventHandler : eqEventHandler
{
public:
    // 0x543910 | ??0WINEventHandler@@QAE@XZ
    inline WINEventHandler()
    {
        stub<member_func_t<void, WINEventHandler>>(0x543910, this);
    }

    // 0x5441E0 | ?AdjustMouse@WINEventHandler@@QAEXAAH0@Z
    inline void AdjustMouse(int32_t& arg1, int32_t& arg2)
    {
        return stub<member_func_t<void, WINEventHandler, int32_t&, int32_t&>>(0x5441E0, this, arg1, arg2);
    }
};
