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

// mmdjpeg:jdsample

#include "hooking.h"

// 0x564260 | ?jinit_upsampler@@YAXPAUjpeg_decompress_struct@@@Z
inline void jinit_upsampler(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x564260, arg1);
}

// 0x564470 | ?start_pass_upsample@@YAXPAUjpeg_decompress_struct@@@Z
inline void start_pass_upsample(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x564470, arg1);
}

// 0x564490 | ?sep_upsample@@YAXPAUjpeg_decompress_struct@@PAPAPAEPAIIPAPAE2I@Z
inline void sep_upsample(struct jpeg_decompress_struct* arg1, uint8_t*** arg2, uint32_t* arg3, uint32_t arg4,
    uint8_t** arg5, uint32_t* arg6, uint32_t arg7)
{
    return stub<
        cdecl_t<void, struct jpeg_decompress_struct*, uint8_t***, uint32_t*, uint32_t, uint8_t**, uint32_t*, uint32_t>>(
        0x564490, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

// 0x564590 | ?fullsize_upsample@@YAXPAUjpeg_decompress_struct@@PAUjpeg_component_info@@PAPAEPAPAPAE@Z
inline void fullsize_upsample(
    struct jpeg_decompress_struct* arg1, struct jpeg_component_info* arg2, uint8_t** arg3, uint8_t*** arg4)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, struct jpeg_component_info*, uint8_t**, uint8_t***>>(
        0x564590, arg1, arg2, arg3, arg4);
}

// 0x5645A0 | ?noop_upsample@@YAXPAUjpeg_decompress_struct@@PAUjpeg_component_info@@PAPAEPAPAPAE@Z
inline void noop_upsample(
    struct jpeg_decompress_struct* arg1, struct jpeg_component_info* arg2, uint8_t** arg3, uint8_t*** arg4)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, struct jpeg_component_info*, uint8_t**, uint8_t***>>(
        0x5645A0, arg1, arg2, arg3, arg4);
}

// 0x5645B0 | ?int_upsample@@YAXPAUjpeg_decompress_struct@@PAUjpeg_component_info@@PAPAEPAPAPAE@Z
inline void int_upsample(
    struct jpeg_decompress_struct* arg1, struct jpeg_component_info* arg2, uint8_t** arg3, uint8_t*** arg4)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, struct jpeg_component_info*, uint8_t**, uint8_t***>>(
        0x5645B0, arg1, arg2, arg3, arg4);
}

// 0x5646B0 | ?h2v1_upsample@@YAXPAUjpeg_decompress_struct@@PAUjpeg_component_info@@PAPAEPAPAPAE@Z
inline void h2v1_upsample(
    struct jpeg_decompress_struct* arg1, struct jpeg_component_info* arg2, uint8_t** arg3, uint8_t*** arg4)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, struct jpeg_component_info*, uint8_t**, uint8_t***>>(
        0x5646B0, arg1, arg2, arg3, arg4);
}

// 0x564710 | ?h2v2_upsample@@YAXPAUjpeg_decompress_struct@@PAUjpeg_component_info@@PAPAEPAPAPAE@Z
inline void h2v2_upsample(
    struct jpeg_decompress_struct* arg1, struct jpeg_component_info* arg2, uint8_t** arg3, uint8_t*** arg4)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, struct jpeg_component_info*, uint8_t**, uint8_t***>>(
        0x564710, arg1, arg2, arg3, arg4);
}

// 0x5647A0 | ?h2v1_fancy_upsample@@YAXPAUjpeg_decompress_struct@@PAUjpeg_component_info@@PAPAEPAPAPAE@Z
inline void h2v1_fancy_upsample(
    struct jpeg_decompress_struct* arg1, struct jpeg_component_info* arg2, uint8_t** arg3, uint8_t*** arg4)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, struct jpeg_component_info*, uint8_t**, uint8_t***>>(
        0x5647A0, arg1, arg2, arg3, arg4);
}

// 0x564860 | ?h2v2_fancy_upsample@@YAXPAUjpeg_decompress_struct@@PAUjpeg_component_info@@PAPAEPAPAPAE@Z
inline void h2v2_fancy_upsample(
    struct jpeg_decompress_struct* arg1, struct jpeg_component_info* arg2, uint8_t** arg3, uint8_t*** arg4)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, struct jpeg_component_info*, uint8_t**, uint8_t***>>(
        0x564860, arg1, arg2, arg3, arg4);
}
