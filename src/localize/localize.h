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
    localize:localize

    0x50DFD0 | char * __cdecl GetLocTime(float) | ?GetLocTime@@YAPADM@Z
    0x50E090 | struct LocString * __cdecl AngelReadString(unsigned int) | ?AngelReadString@@YAPAULocString@@I@Z
*/

#include "hooking.h"

// 0x50DFD0 | ?GetLocTime@@YAPADM@Z
inline char* GetLocTime(float arg1)
{
    return stub<cdecl_t<char*, float>>(0x50DFD0, arg1);
}

// 0x50E090 | ?AngelReadString@@YAPAULocString@@I@Z
inline struct LocString* AngelReadString(uint32_t arg1)
{
    return stub<cdecl_t<struct LocString*, uint32_t>>(0x50E090, arg1);
}
