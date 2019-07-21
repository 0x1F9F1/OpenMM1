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
    mmdjpeg:jdinput

    0x55F390 | void __cdecl jinit_input_controller(struct jpeg_decompress_struct *) | ?jinit_input_controller@@YAXPAUjpeg_decompress_struct@@@Z
    0x55F3E0 | void __cdecl start_input_pass(struct jpeg_decompress_struct *) | ?start_input_pass@@YAXPAUjpeg_decompress_struct@@@Z
    0x55F430 | void __cdecl per_scan_setup(struct jpeg_decompress_struct *) | ?per_scan_setup@@YAXPAUjpeg_decompress_struct@@@Z
    0x55F5E0 | void __cdecl latch_quant_tables(struct jpeg_decompress_struct *) | ?latch_quant_tables@@YAXPAUjpeg_decompress_struct@@@Z
    0x55F690 | void __cdecl finish_input_pass(struct jpeg_decompress_struct *) | ?finish_input_pass@@YAXPAUjpeg_decompress_struct@@@Z
    0x55F6B0 | int __cdecl consume_markers(struct jpeg_decompress_struct *) | ?consume_markers@@YAHPAUjpeg_decompress_struct@@@Z
    0x55F780 | void __cdecl initial_setup(struct jpeg_decompress_struct *) | ?initial_setup@@YAXPAUjpeg_decompress_struct@@@Z
    0x55F980 | void __cdecl reset_input_controller(struct jpeg_decompress_struct *) | ?reset_input_controller@@YAXPAUjpeg_decompress_struct@@@Z
*/

// 0x55F390 | ?jinit_input_controller@@YAXPAUjpeg_decompress_struct@@@Z
inline void jinit_input_controller(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x55F390, arg1);
}

// 0x55F3E0 | ?start_input_pass@@YAXPAUjpeg_decompress_struct@@@Z
inline void start_input_pass(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x55F3E0, arg1);
}

// 0x55F430 | ?per_scan_setup@@YAXPAUjpeg_decompress_struct@@@Z
inline void per_scan_setup(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x55F430, arg1);
}

// 0x55F5E0 | ?latch_quant_tables@@YAXPAUjpeg_decompress_struct@@@Z
inline void latch_quant_tables(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x55F5E0, arg1);
}

// 0x55F690 | ?finish_input_pass@@YAXPAUjpeg_decompress_struct@@@Z
inline void finish_input_pass(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x55F690, arg1);
}

// 0x55F6B0 | ?consume_markers@@YAHPAUjpeg_decompress_struct@@@Z
inline int32_t consume_markers(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<int32_t, struct jpeg_decompress_struct*>>(0x55F6B0, arg1);
}

// 0x55F780 | ?initial_setup@@YAXPAUjpeg_decompress_struct@@@Z
inline void initial_setup(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x55F780, arg1);
}

// 0x55F980 | ?reset_input_controller@@YAXPAUjpeg_decompress_struct@@@Z
inline void reset_input_controller(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x55F980, arg1);
}
