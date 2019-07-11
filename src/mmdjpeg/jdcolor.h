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

// mmdjpeg:jdcolor

#include "hooking.h"

// 0x5649B0 | ?jinit_color_deconverter@@YAXPAUjpeg_decompress_struct@@@Z
inline void jinit_color_deconverter(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x5649B0, arg1);
}

// 0x564B80 | ?build_ycc_rgb_table@@YAXPAUjpeg_decompress_struct@@@Z
inline void build_ycc_rgb_table(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x564B80, arg1);
}

// 0x564C50 | ?ycc_rgb_convert@@YAXPAUjpeg_decompress_struct@@PAPAPAEIPAPAEH@Z
inline void ycc_rgb_convert(
    struct jpeg_decompress_struct* arg1, uint8_t*** arg2, uint32_t arg3, uint8_t** arg4, int32_t arg5)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t***, uint32_t, uint8_t**, int32_t>>(
        0x564C50, arg1, arg2, arg3, arg4, arg5);
}

// 0x564D80 | ?null_convert@@YAXPAUjpeg_decompress_struct@@PAPAPAEIPAPAEH@Z
inline void null_convert(
    struct jpeg_decompress_struct* arg1, uint8_t*** arg2, uint32_t arg3, uint8_t** arg4, int32_t arg5)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t***, uint32_t, uint8_t**, int32_t>>(
        0x564D80, arg1, arg2, arg3, arg4, arg5);
}

// 0x564E10 | ?grayscale_convert@@YAXPAUjpeg_decompress_struct@@PAPAPAEIPAPAEH@Z
inline void grayscale_convert(
    struct jpeg_decompress_struct* arg1, uint8_t*** arg2, uint32_t arg3, uint8_t** arg4, int32_t arg5)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t***, uint32_t, uint8_t**, int32_t>>(
        0x564E10, arg1, arg2, arg3, arg4, arg5);
}

// 0x564E40 | ?gray_rgb_convert@@YAXPAUjpeg_decompress_struct@@PAPAPAEIPAPAEH@Z
inline void gray_rgb_convert(
    struct jpeg_decompress_struct* arg1, uint8_t*** arg2, uint32_t arg3, uint8_t** arg4, int32_t arg5)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t***, uint32_t, uint8_t**, int32_t>>(
        0x564E40, arg1, arg2, arg3, arg4, arg5);
}

// 0x564EA0 | ?ycck_cmyk_convert@@YAXPAUjpeg_decompress_struct@@PAPAPAEIPAPAEH@Z
inline void ycck_cmyk_convert(
    struct jpeg_decompress_struct* arg1, uint8_t*** arg2, uint32_t arg3, uint8_t** arg4, int32_t arg5)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t***, uint32_t, uint8_t**, int32_t>>(
        0x564EA0, arg1, arg2, arg3, arg4, arg5);
}

// 0x565000 | ?start_pass_dcolor@@YAXPAUjpeg_decompress_struct@@@Z
inline void start_pass_dcolor(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x565000, arg1);
}
