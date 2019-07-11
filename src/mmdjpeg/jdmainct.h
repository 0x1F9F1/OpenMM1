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

// mmdjpeg:jdmainct

#include "hooking.h"

// 0x5628F0 | ?jinit_d_main_controller@@YAXPAUjpeg_decompress_struct@@E@Z
inline void jinit_d_main_controller(struct jpeg_decompress_struct* arg1, uint8_t arg2)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t>>(0x5628F0, arg1, arg2);
}

// 0x5629D0 | ?alloc_funny_pointers@@YAXPAUjpeg_decompress_struct@@@Z
inline void alloc_funny_pointers(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x5629D0, arg1);
}

// 0x562A90 | ?start_pass_main@@YAXPAUjpeg_decompress_struct@@W4J_BUF_MODE@@@Z
inline void start_pass_main(struct jpeg_decompress_struct* arg1, enum J_BUF_MODE arg2)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, enum J_BUF_MODE>>(0x562A90, arg1, arg2);
}

// 0x562B00 | ?make_funny_pointers@@YAXPAUjpeg_decompress_struct@@@Z
inline void make_funny_pointers(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x562B00, arg1);
}

// 0x562C40 | ?process_data_simple_main@@YAXPAUjpeg_decompress_struct@@PAPAEPAII@Z
inline void process_data_simple_main(struct jpeg_decompress_struct* arg1, uint8_t** arg2, uint32_t* arg3, uint32_t arg4)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t**, uint32_t*, uint32_t>>(
        0x562C40, arg1, arg2, arg3, arg4);
}

// 0x562CC0 | ?process_data_context_main@@YAXPAUjpeg_decompress_struct@@PAPAEPAII@Z
inline void process_data_context_main(
    struct jpeg_decompress_struct* arg1, uint8_t** arg2, uint32_t* arg3, uint32_t arg4)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t**, uint32_t*, uint32_t>>(
        0x562CC0, arg1, arg2, arg3, arg4);
}

// 0x562E00 | ?set_wraparound_pointers@@YAXPAUjpeg_decompress_struct@@@Z
inline void set_wraparound_pointers(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x562E00, arg1);
}

// 0x562F00 | ?set_bottom_pointers@@YAXPAUjpeg_decompress_struct@@@Z
inline void set_bottom_pointers(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x562F00, arg1);
}
