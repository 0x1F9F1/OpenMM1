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

// mmdyna:bndtmpl2

#include "hooking.h"

// 0x50C120 | ?EdgeInList@@YA_NHHJPAH0@Z
inline bool EdgeInList(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t* arg5)
{
    return stub<cdecl_t<bool, int32_t, int32_t, int32_t, int32_t*, int32_t*>>(0x50C120, arg1, arg2, arg3, arg4, arg5);
}

// 0x6E17B0 | ?BoundBytesPaged@@3HA
inline extern_var(0x6E17B0, int32_t, BoundBytesPaged);

// 0x6E17C4 | ?BoundsPaged@@3HA
inline extern_var(0x6E17C4, int32_t, BoundsPaged);

// 0x6E1858 | ?MakeTableStats@@3PAVStream@@A
inline extern_var(0x6E1858, class Stream*, MakeTableStats);
