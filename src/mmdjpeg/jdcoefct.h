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
    mmdjpeg:jdcoefct

    0x562FB0 | void __cdecl jinit_d_coef_controller(struct jpeg_decompress_struct *,unsigned char) | ?jinit_d_coef_controller@@YAXPAUjpeg_decompress_struct@@E@Z
    0x563040 | void __cdecl start_input_pass(struct jpeg_decompress_struct *) | ?start_input_pass@@YAXPAUjpeg_decompress_struct@@@Z
    0x563060 | void __cdecl start_iMCU_row(struct jpeg_decompress_struct *) | ?start_iMCU_row@@YAXPAUjpeg_decompress_struct@@@Z
    0x5630C0 | void __cdecl start_output_pass(struct jpeg_decompress_struct *) | ?start_output_pass@@YAXPAUjpeg_decompress_struct@@@Z
    0x5630E0 | int __cdecl decompress_onepass(struct jpeg_decompress_struct *,unsigned char * * *) | ?decompress_onepass@@YAHPAUjpeg_decompress_struct@@PAPAPAE@Z
    0x563310 | int __cdecl dummy_consume_data(struct jpeg_decompress_struct *) | ?dummy_consume_data@@YAHPAUjpeg_decompress_struct@@@Z
*/

// 0x562FB0 | ?jinit_d_coef_controller@@YAXPAUjpeg_decompress_struct@@E@Z
inline void jinit_d_coef_controller(struct jpeg_decompress_struct* arg1, uint8_t arg2)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t>>(0x562FB0, arg1, arg2);
}

// 0x563040 | ?start_input_pass@@YAXPAUjpeg_decompress_struct@@@Z
inline void start_input_pass(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x563040, arg1);
}

// 0x563060 | ?start_iMCU_row@@YAXPAUjpeg_decompress_struct@@@Z
inline void start_iMCU_row(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x563060, arg1);
}

// 0x5630C0 | ?start_output_pass@@YAXPAUjpeg_decompress_struct@@@Z
inline void start_output_pass(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x5630C0, arg1);
}

// 0x5630E0 | ?decompress_onepass@@YAHPAUjpeg_decompress_struct@@PAPAPAE@Z
inline int32_t decompress_onepass(struct jpeg_decompress_struct* arg1, uint8_t*** arg2)
{
    return stub<cdecl_t<int32_t, struct jpeg_decompress_struct*, uint8_t***>>(0x5630E0, arg1, arg2);
}

// 0x563310 | ?dummy_consume_data@@YAHPAUjpeg_decompress_struct@@@Z
inline int32_t dummy_consume_data(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<int32_t, struct jpeg_decompress_struct*>>(0x563310, arg1);
}
