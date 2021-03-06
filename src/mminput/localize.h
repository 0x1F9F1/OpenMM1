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
    mminput:localize

    0x4DA070 | struct LocString * __cdecl AngelReadKeyString(unsigned int) | ?AngelReadKeyString@@YAPAULocString@@I@Z
*/

// 0x4DA070 | ?AngelReadKeyString@@YAPAULocString@@I@Z
inline struct LocString* AngelReadKeyString(uint32_t arg1)
{
    return stub<cdecl_t<struct LocString*, uint32_t>>(0x4DA070, arg1);
}
