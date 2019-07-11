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

// memory:stub

#include "hooking.h"

// 0x50F4B0 | _malloc

// 0x50F4D0 | _realloc

// 0x50F4F0 | _calloc

// 0x50F530 | _free

// 0x50F560 | ??2@YAPAXI@Z
inline void* operator new(uint32_t arg1)
{
    return stub<cdecl_t<void*, uint32_t>>(0x50F560, arg1);
}

// 0x50F580 | ??3@YAXPAX@Z
inline void operator delete(void* arg1)
{
    return stub<cdecl_t<void, void*>>(0x50F580, arg1);
}
