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
    agi:error

    0x53DD40 | char * __cdecl agiGetError(int) | ?agiGetError@@YAPADH@Z
    0x53DDA0 | void __cdecl agiDisplayf(char const *,...) | ?agiDisplayf@@YAXPBDZZ
    0x70E718 | int agiVerbose | ?agiVerbose@@3HA
*/

#include "hooking.h"

// 0x53DD40 | ?agiGetError@@YAPADH@Z
inline char* agiGetError(int32_t arg1)
{
    return stub<cdecl_t<char*, int32_t>>(0x53DD40, arg1);
}

// 0x53DDA0 | ?agiDisplayf@@YAXPBDZZ
void agiDisplayf(const char* format, ...);
// Skipped (Variable Arguments)

// 0x70E718 | ?agiVerbose@@3HA
inline extern_var(0x70E718, int32_t, agiVerbose);
