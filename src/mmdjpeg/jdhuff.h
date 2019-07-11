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

// mmdjpeg:jdhuff

#include "hooking.h"

// 0x563320 | ?jpeg_make_d_derived_tbl@@YAXPAUjpeg_decompress_struct@@EHPAPAUd_derived_tbl@@@Z
inline void jpeg_make_d_derived_tbl(
    struct jpeg_decompress_struct* arg1, uint8_t arg2, int32_t arg3, struct d_derived_tbl** arg4)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t, int32_t, struct d_derived_tbl**>>(
        0x563320, arg1, arg2, arg3, arg4);
}

// 0x5635E0 | ?jpeg_fill_bit_buffer@@YAEPAUbitread_working_state@@JHH@Z
inline uint8_t jpeg_fill_bit_buffer(struct bitread_working_state* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    return stub<cdecl_t<uint8_t, struct bitread_working_state*, int32_t, int32_t, int32_t>>(
        0x5635E0, arg1, arg2, arg3, arg4);
}

// 0x563700 | ?jpeg_huff_decode@@YAHPAUbitread_working_state@@JHPAUd_derived_tbl@@H@Z
inline int32_t jpeg_huff_decode(
    struct bitread_working_state* arg1, int32_t arg2, int32_t arg3, struct d_derived_tbl* arg4, int32_t arg5)
{
    return stub<cdecl_t<int32_t, struct bitread_working_state*, int32_t, int32_t, struct d_derived_tbl*, int32_t>>(
        0x563700, arg1, arg2, arg3, arg4, arg5);
}

// 0x563800 | ?jinit_huff_decoder@@YAXPAUjpeg_decompress_struct@@@Z
inline void jinit_huff_decoder(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x563800, arg1);
}

// 0x563850 | ?start_pass_huff_decoder@@YAXPAUjpeg_decompress_struct@@@Z
inline void start_pass_huff_decoder(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x563850, arg1);
}

// 0x5639B0 | ?decode_mcu@@YAEPAUjpeg_decompress_struct@@PAPAY0EA@F@Z
inline uint8_t decode_mcu(struct jpeg_decompress_struct* arg1, int16_t (**arg2)[64])
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*, int16_t(**)[64]>>(0x5639B0, arg1, arg2);
}

// 0x563DD0 | ?process_restart@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t process_restart(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x563DD0, arg1);
}
