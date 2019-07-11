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

// mmdjpeg:jdpostct

#include "hooking.h"

// 0x5640C0 | ?jinit_d_post_controller@@YAXPAUjpeg_decompress_struct@@E@Z
inline void jinit_d_post_controller(struct jpeg_decompress_struct* arg1, uint8_t arg2)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t>>(0x5640C0, arg1, arg2);
}

// 0x564140 | ?start_pass_dpost@@YAXPAUjpeg_decompress_struct@@W4J_BUF_MODE@@@Z
inline void start_pass_dpost(struct jpeg_decompress_struct* arg1, enum J_BUF_MODE arg2)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, enum J_BUF_MODE>>(0x564140, arg1, arg2);
}

// 0x5641E0 | ?post_process_1pass@@YAXPAUjpeg_decompress_struct@@PAPAPAEPAIIPAPAE2I@Z
inline void post_process_1pass(struct jpeg_decompress_struct* arg1, uint8_t*** arg2, uint32_t* arg3, uint32_t arg4,
    uint8_t** arg5, uint32_t* arg6, uint32_t arg7)
{
    return stub<
        cdecl_t<void, struct jpeg_decompress_struct*, uint8_t***, uint32_t*, uint32_t, uint8_t**, uint32_t*, uint32_t>>(
        0x5641E0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
