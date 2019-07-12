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

#include "stub.h"

// 0x50F560 | ??2@YAPAXI@Z
void* operator new(size_t arg1)
{
    return stub<cdecl_t<void*, uint32_t>>(0x50F560, arg1);
}

void* operator new[](size_t arg1)
{
    return operator new(arg1);
}

// 0x50F580 | ??3@YAXPAX@Z
void operator delete(void* arg1)
{
    return stub<cdecl_t<void, void*>>(0x50F580, arg1);
}

void operator delete[](void* arg1)
{
    operator delete(arg1);
}