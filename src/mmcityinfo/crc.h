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
    mmcityinfo:crc

    0x4C8000 | unsigned long __cdecl UpdateCrc(unsigned char *,unsigned int) | ?UpdateCrc@@YAKPAEI@Z
*/

// 0x4C8000 | ?UpdateCrc@@YAKPAEI@Z
inline uint32_t UpdateCrc(uint8_t* arg1, uint32_t arg2)
{
    return stub<cdecl_t<uint32_t, uint8_t*, uint32_t>>(0x4C8000, arg1, arg2);
}
