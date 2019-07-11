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

// mmdjpeg:jdapistd

#include "hooking.h"

// 0x55EDF0 | ?jpeg_start_decompress@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t jpeg_start_decompress(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x55EDF0, arg1);
}

// 0x55EF00 | ?jpeg_read_scanlines@@YAIPAUjpeg_decompress_struct@@PAPAEI@Z
inline uint32_t jpeg_read_scanlines(struct jpeg_decompress_struct* arg1, uint8_t** arg2, uint32_t arg3)
{
    return stub<cdecl_t<uint32_t, struct jpeg_decompress_struct*, uint8_t**, uint32_t>>(0x55EF00, arg1, arg2, arg3);
}

// 0x55EFA0 | ?jpeg_read_raw_data@@YAIPAUjpeg_decompress_struct@@PAPAPAEI@Z
inline uint32_t jpeg_read_raw_data(struct jpeg_decompress_struct* arg1, uint8_t*** arg2, uint32_t arg3)
{
    return stub<cdecl_t<uint32_t, struct jpeg_decompress_struct*, uint8_t***, uint32_t>>(0x55EFA0, arg1, arg2, arg3);
}

// 0x55EE90 | ?output_pass_setup@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t output_pass_setup(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x55EE90, arg1);
}
