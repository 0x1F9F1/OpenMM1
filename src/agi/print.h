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

// agi:print

#include "hooking.h"

// 0x539DB0 | ?agiPrint@@YAXHHHPBD@Z
inline void agiPrint(int32_t arg1, int32_t arg2, int32_t arg3, char const* arg4)
{
    return stub<cdecl_t<void, int32_t, int32_t, int32_t, char const*>>(0x539DB0, arg1, arg2, arg3, arg4);
}

// 0x539DD0 | ?agiPrintf@@YAXHHHPBDZZ
// Skipped (Variable Arguments)

// 0x539E30 | ?agiPrintIs3D@@YAHXZ
inline int32_t agiPrintIs3D()
{
    return stub<cdecl_t<int32_t>>(0x539E30);
}

// 0x539E40 | ?agiPrintInit@@YAXXZ
inline void agiPrintInit()
{
    return stub<cdecl_t<void>>(0x539E40);
}

// 0x539E50 | ?agiPrintShutdown@@YAXXZ
inline void agiPrintShutdown()
{
    return stub<cdecl_t<void>>(0x539E50);
}

// 0x5C3078 | ?CharSet@@3PAEA
inline extern_var(0x5C3078, uint8_t*, CharSet);

// 0x539F20 | ?InitBuiltin@@YAXXZ
inline void InitBuiltin()
{
    return stub<cdecl_t<void>>(0x539F20);
}
