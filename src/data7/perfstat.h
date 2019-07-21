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
    data7:perfstat

    0x55CD70 | void __cdecl PerfInit(void) | ?PerfInit@@YAXXZ
    0x55CDB0 | void __cdecl PerfShutdown(void) | ?PerfShutdown@@YAXXZ
    0x55CDD0 | int __cdecl PerfLookup(char *) | ?PerfLookup@@YAHPAD@Z
    0x55CE90 | unsigned int __cdecl PerfGetValue(int) | ?PerfGetValue@@YAIH@Z
*/

// 0x55CD70 | ?PerfInit@@YAXXZ
inline void PerfInit()
{
    return stub<cdecl_t<void>>(0x55CD70);
}

// 0x55CDB0 | ?PerfShutdown@@YAXXZ
inline void PerfShutdown()
{
    return stub<cdecl_t<void>>(0x55CDB0);
}

// 0x55CDD0 | ?PerfLookup@@YAHPAD@Z
inline int32_t PerfLookup(char* arg1)
{
    return stub<cdecl_t<int32_t, char*>>(0x55CDD0, arg1);
}

// 0x55CE90 | ?PerfGetValue@@YAIH@Z
inline uint32_t PerfGetValue(int32_t arg1)
{
    return stub<cdecl_t<uint32_t, int32_t>>(0x55CE90, arg1);
}
