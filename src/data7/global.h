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
    data7:global

    0x55AA00 | void __cdecl HexDump(void *,int) | ?HexDump@@YAXPAXH@Z
    0x5CE784 | int DevelopmentMode | ?DevelopmentMode@@3HA
*/

#include "hooking.h"

// 0x55AA00 | ?HexDump@@YAXPAXH@Z
inline void HexDump(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x55AA00, arg1, arg2);
}

// 0x5CE784 | ?DevelopmentMode@@3HA
inline extern_var(0x5CE784, int32_t, DevelopmentMode);
