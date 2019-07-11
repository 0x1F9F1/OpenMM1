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
    data7:memstat

    0x55A480 | void __cdecl BeginMemStat(char const *) | ?BeginMemStat@@YAXPBD@Z
    0x55A510 | void __cdecl EndMemStat(void) | ?EndMemStat@@YAXXZ
    0x5CE560 | int EnableMemStat | ?EnableMemStat@@3HA
    0x711FC0 | int beginStackCount | ?beginStackCount@@3HA
    0x55A4E0 | int __cdecl getMem(void) | ?getMem@@YAHXZ
*/

#include "hooking.h"

// 0x55A480 | ?BeginMemStat@@YAXPBD@Z
inline void BeginMemStat(char const* arg1)
{
    return stub<cdecl_t<void, char const*>>(0x55A480, arg1);
}

// 0x55A510 | ?EndMemStat@@YAXXZ
inline void EndMemStat()
{
    return stub<cdecl_t<void>>(0x55A510);
}

// 0x5CE560 | ?EnableMemStat@@3HA
inline extern_var(0x5CE560, int32_t, EnableMemStat);

// 0x711FC0 | ?beginStackCount@@3HA
inline extern_var(0x711FC0, int32_t, beginStackCount);

// 0x55A4E0 | ?getMem@@YAHXZ
inline int32_t getMem()
{
    return stub<cdecl_t<int32_t>>(0x55A4E0);
}
