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

// mmdjpeg:jdmaster

#include "hooking.h"

// 0x5622A0 | ?jpeg_calc_output_dimensions@@YAXPAUjpeg_decompress_struct@@@Z
inline void jpeg_calc_output_dimensions(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x5622A0, arg1);
}

// 0x562360 | ?jinit_master_decompress@@YAXPAUjpeg_decompress_struct@@@Z
inline void jinit_master_decompress(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x562360, arg1);
}

// 0x562350 | ?use_merged_upsample@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t use_merged_upsample(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x562350, arg1);
}

// 0x5623A0 | ?master_selection@@YAXPAUjpeg_decompress_struct@@@Z
inline void master_selection(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x5623A0, arg1);
}

// 0x562540 | ?prepare_range_limit_table@@YAXPAUjpeg_decompress_struct@@@Z
inline void prepare_range_limit_table(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x562540, arg1);
}

// 0x5625C0 | ?prepare_for_output_pass@@YAXPAUjpeg_decompress_struct@@@Z
inline void prepare_for_output_pass(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x5625C0, arg1);
}

// 0x562710 | ?finish_output_pass@@YAXPAUjpeg_decompress_struct@@@Z
inline void finish_output_pass(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x562710, arg1);
}
