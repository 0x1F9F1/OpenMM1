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
    mmdjpeg:jddctmgr

    0x563E60 | void __cdecl jinit_inverse_dct(struct jpeg_decompress_struct *) | ?jinit_inverse_dct@@YAXPAUjpeg_decompress_struct@@@Z
    0x563EF0 | void __cdecl start_pass(struct jpeg_decompress_struct *) | ?start_pass@@YAXPAUjpeg_decompress_struct@@@Z
*/

// 0x563E60 | ?jinit_inverse_dct@@YAXPAUjpeg_decompress_struct@@@Z
inline void jinit_inverse_dct(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x563E60, arg1);
}

// 0x563EF0 | ?start_pass@@YAXPAUjpeg_decompress_struct@@@Z
inline void start_pass(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x563EF0, arg1);
}
