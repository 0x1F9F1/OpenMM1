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
    mmdjpeg:jdatasrc

    0x55F060 | void __cdecl jpeg_stdio_src(struct jpeg_decompress_struct *,class Stream *) | ?jpeg_stdio_src@@YAXPAUjpeg_decompress_struct@@PAVStream@@@Z
    0x55F0E0 | void __cdecl init_source(struct jpeg_decompress_struct *) | ?init_source@@YAXPAUjpeg_decompress_struct@@@Z
    0x55F0F0 | unsigned char __cdecl fill_input_buffer(struct jpeg_decompress_struct *) | ?fill_input_buffer@@YAEPAUjpeg_decompress_struct@@@Z
    0x55F160 | void __cdecl skip_input_data(struct jpeg_decompress_struct *,long) | ?skip_input_data@@YAXPAUjpeg_decompress_struct@@J@Z
    0x55F1A0 | void __cdecl term_source(struct jpeg_decompress_struct *) | ?term_source@@YAXPAUjpeg_decompress_struct@@@Z
*/

// 0x55F060 | ?jpeg_stdio_src@@YAXPAUjpeg_decompress_struct@@PAVStream@@@Z
inline void jpeg_stdio_src(struct jpeg_decompress_struct* arg1, class Stream* arg2)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, class Stream*>>(0x55F060, arg1, arg2);
}

// 0x55F0E0 | ?init_source@@YAXPAUjpeg_decompress_struct@@@Z
inline void init_source(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x55F0E0, arg1);
}

// 0x55F0F0 | ?fill_input_buffer@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t fill_input_buffer(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x55F0F0, arg1);
}

// 0x55F160 | ?skip_input_data@@YAXPAUjpeg_decompress_struct@@J@Z
inline void skip_input_data(struct jpeg_decompress_struct* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, int32_t>>(0x55F160, arg1, arg2);
}

// 0x55F1A0 | ?term_source@@YAXPAUjpeg_decompress_struct@@@Z
inline void term_source(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x55F1A0, arg1);
}
