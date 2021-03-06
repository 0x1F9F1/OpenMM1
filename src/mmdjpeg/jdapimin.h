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
    mmdjpeg:jdapimin

    0x55E880 | void __cdecl jpeg_CreateDecompress(struct jpeg_decompress_struct *,int,unsigned int) | ?jpeg_CreateDecompress@@YAXPAUjpeg_decompress_struct@@HI@Z
    0x55E960 | void __cdecl jpeg_destroy_decompress(struct jpeg_decompress_struct *) | ?jpeg_destroy_decompress@@YAXPAUjpeg_decompress_struct@@@Z
    0x55E980 | void __cdecl jpeg_abort_decompress(struct jpeg_decompress_struct *) | ?jpeg_abort_decompress@@YAXPAUjpeg_decompress_struct@@@Z
    0x55E9A0 | int __cdecl jpeg_read_header(struct jpeg_decompress_struct *,unsigned char) | ?jpeg_read_header@@YAHPAUjpeg_decompress_struct@@E@Z
    0x55EA20 | int __cdecl jpeg_consume_input(struct jpeg_decompress_struct *) | ?jpeg_consume_input@@YAHPAUjpeg_decompress_struct@@@Z
    0x55ECA0 | unsigned char __cdecl jpeg_input_complete(struct jpeg_decompress_struct *) | ?jpeg_input_complete@@YAEPAUjpeg_decompress_struct@@@Z
    0x55ECE0 | unsigned char __cdecl jpeg_has_multiple_scans(struct jpeg_decompress_struct *) | ?jpeg_has_multiple_scans@@YAEPAUjpeg_decompress_struct@@@Z
    0x55ED20 | unsigned char __cdecl jpeg_finish_decompress(struct jpeg_decompress_struct *) | ?jpeg_finish_decompress@@YAEPAUjpeg_decompress_struct@@@Z
    0x55EAF0 | void __cdecl default_decompress_parms(struct jpeg_decompress_struct *) | ?default_decompress_parms@@YAXPAUjpeg_decompress_struct@@@Z
*/

// 0x55E880 | ?jpeg_CreateDecompress@@YAXPAUjpeg_decompress_struct@@HI@Z
inline void jpeg_CreateDecompress(struct jpeg_decompress_struct* arg1, int32_t arg2, uint32_t arg3)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, int32_t, uint32_t>>(0x55E880, arg1, arg2, arg3);
}

// 0x55E960 | ?jpeg_destroy_decompress@@YAXPAUjpeg_decompress_struct@@@Z
inline void jpeg_destroy_decompress(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x55E960, arg1);
}

// 0x55E980 | ?jpeg_abort_decompress@@YAXPAUjpeg_decompress_struct@@@Z
inline void jpeg_abort_decompress(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x55E980, arg1);
}

// 0x55E9A0 | ?jpeg_read_header@@YAHPAUjpeg_decompress_struct@@E@Z
inline int32_t jpeg_read_header(struct jpeg_decompress_struct* arg1, uint8_t arg2)
{
    return stub<cdecl_t<int32_t, struct jpeg_decompress_struct*, uint8_t>>(0x55E9A0, arg1, arg2);
}

// 0x55EA20 | ?jpeg_consume_input@@YAHPAUjpeg_decompress_struct@@@Z
inline int32_t jpeg_consume_input(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<int32_t, struct jpeg_decompress_struct*>>(0x55EA20, arg1);
}

// 0x55ECA0 | ?jpeg_input_complete@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t jpeg_input_complete(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x55ECA0, arg1);
}

// 0x55ECE0 | ?jpeg_has_multiple_scans@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t jpeg_has_multiple_scans(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x55ECE0, arg1);
}

// 0x55ED20 | ?jpeg_finish_decompress@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t jpeg_finish_decompress(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x55ED20, arg1);
}

// 0x55EAF0 | ?default_decompress_parms@@YAXPAUjpeg_decompress_struct@@@Z
inline void default_decompress_parms(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x55EAF0, arg1);
}
