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
    mmdjpeg:jutils

    0x562740 | long __cdecl jdiv_round_up(long,long) | ?jdiv_round_up@@YAJJJ@Z
    0x562760 | long __cdecl jround_up(long,long) | ?jround_up@@YAJJJ@Z
    0x562780 | void __cdecl jcopy_sample_rows(unsigned char * *,int,unsigned char * *,int,int,unsigned int) | ?jcopy_sample_rows@@YAXPAPAEH0HHI@Z
    0x5627D0 | void __cdecl jcopy_block_row(short (*)[64],short (*)[64],unsigned int) | ?jcopy_block_row@@YAXPAY0EA@F0I@Z
    0x562800 | void __cdecl jzero_far(void *,unsigned int) | ?jzero_far@@YAXPAXI@Z
    0x596600 | int const * const jpeg_natural_order | ?jpeg_natural_order@@3PBHB
*/

// 0x562740 | ?jdiv_round_up@@YAJJJ@Z
inline int32_t jdiv_round_up(int32_t arg1, int32_t arg2)
{
    return stub<cdecl_t<int32_t, int32_t, int32_t>>(0x562740, arg1, arg2);
}

// 0x562760 | ?jround_up@@YAJJJ@Z
inline int32_t jround_up(int32_t arg1, int32_t arg2)
{
    return stub<cdecl_t<int32_t, int32_t, int32_t>>(0x562760, arg1, arg2);
}

// 0x562780 | ?jcopy_sample_rows@@YAXPAPAEH0HHI@Z
inline void jcopy_sample_rows(uint8_t** arg1, int32_t arg2, uint8_t** arg3, int32_t arg4, int32_t arg5, uint32_t arg6)
{
    return stub<cdecl_t<void, uint8_t**, int32_t, uint8_t**, int32_t, int32_t, uint32_t>>(
        0x562780, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x5627D0 | ?jcopy_block_row@@YAXPAY0EA@F0I@Z
inline void jcopy_block_row(int16_t (*arg1)[64], int16_t (*arg2)[64], uint32_t arg3)
{
    return stub<cdecl_t<void, int16_t(*)[64], int16_t(*)[64], uint32_t>>(0x5627D0, arg1, arg2, arg3);
}

// 0x562800 | ?jzero_far@@YAXPAXI@Z
inline void jzero_far(void* arg1, uint32_t arg2)
{
    return stub<cdecl_t<void, void*, uint32_t>>(0x562800, arg1, arg2);
}

// 0x596600 | ?jpeg_natural_order@@3PBHB
inline extern_var(0x596600, int32_t const* const, jpeg_natural_order);
