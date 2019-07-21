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
    mmdjpeg:jdmarker

    0x55F9D0 | unsigned char __cdecl jpeg_resync_to_restart(struct jpeg_decompress_struct *,int) | ?jpeg_resync_to_restart@@YAEPAUjpeg_decompress_struct@@H@Z
    0x55FC00 | void __cdecl jinit_marker_reader(struct jpeg_decompress_struct *) | ?jinit_marker_reader@@YAXPAUjpeg_decompress_struct@@@Z
    0x561530 | void __cdecl jpeg_set_marker_processor(struct jpeg_decompress_struct *,int,unsigned char (__cdecl*)(struct jpeg_decompress_struct *)) | ?jpeg_set_marker_processor@@YAXPAUjpeg_decompress_struct@@HP6AE0@Z@Z
    0x55FAE0 | unsigned char __cdecl next_marker(struct jpeg_decompress_struct *) | ?next_marker@@YAEPAUjpeg_decompress_struct@@@Z
    0x55FC70 | unsigned char __cdecl get_interesting_appn(struct jpeg_decompress_struct *) | ?get_interesting_appn@@YAEPAUjpeg_decompress_struct@@@Z
    0x55FDC0 | void __cdecl examine_app0(struct jpeg_decompress_struct *,unsigned char *,unsigned int,long) | ?examine_app0@@YAXPAUjpeg_decompress_struct@@PAEIJ@Z
    0x560040 | void __cdecl examine_app14(struct jpeg_decompress_struct *,unsigned char *,unsigned int,long) | ?examine_app14@@YAXPAUjpeg_decompress_struct@@PAEIJ@Z
    0x560120 | unsigned char __cdecl skip_variable(struct jpeg_decompress_struct *) | ?skip_variable@@YAEPAUjpeg_decompress_struct@@@Z
    0x5601E0 | int __cdecl read_markers(struct jpeg_decompress_struct *) | ?read_markers@@YAHPAUjpeg_decompress_struct@@@Z
    0x560570 | unsigned char __cdecl get_soi(struct jpeg_decompress_struct *) | ?get_soi@@YAEPAUjpeg_decompress_struct@@@Z
    0x560630 | unsigned char __cdecl get_sof(struct jpeg_decompress_struct *,unsigned char,unsigned char) | ?get_sof@@YAEPAUjpeg_decompress_struct@@EE@Z
    0x560980 | unsigned char __cdecl get_sos(struct jpeg_decompress_struct *) | ?get_sos@@YAEPAUjpeg_decompress_struct@@@Z
    0x560CB0 | unsigned char __cdecl get_dht(struct jpeg_decompress_struct *) | ?get_dht@@YAEPAUjpeg_decompress_struct@@@Z
    0x561010 | unsigned char __cdecl get_dqt(struct jpeg_decompress_struct *) | ?get_dqt@@YAEPAUjpeg_decompress_struct@@@Z
    0x5612C0 | unsigned char __cdecl get_dri(struct jpeg_decompress_struct *) | ?get_dri@@YAEPAUjpeg_decompress_struct@@@Z
    0x5613C0 | unsigned char __cdecl first_marker(struct jpeg_decompress_struct *) | ?first_marker@@YAEPAUjpeg_decompress_struct@@@Z
    0x561470 | unsigned char __cdecl read_restart_marker(struct jpeg_decompress_struct *) | ?read_restart_marker@@YAEPAUjpeg_decompress_struct@@@Z
    0x561500 | void __cdecl reset_marker_reader(struct jpeg_decompress_struct *) | ?reset_marker_reader@@YAXPAUjpeg_decompress_struct@@@Z
*/

// 0x55F9D0 | ?jpeg_resync_to_restart@@YAEPAUjpeg_decompress_struct@@H@Z
inline uint8_t jpeg_resync_to_restart(struct jpeg_decompress_struct* arg1, int32_t arg2)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*, int32_t>>(0x55F9D0, arg1, arg2);
}

// 0x55FC00 | ?jinit_marker_reader@@YAXPAUjpeg_decompress_struct@@@Z
inline void jinit_marker_reader(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x55FC00, arg1);
}

// 0x561530 | ?jpeg_set_marker_processor@@YAXPAUjpeg_decompress_struct@@HP6AE0@Z@Z
inline void jpeg_set_marker_processor(
    struct jpeg_decompress_struct* arg1, int32_t arg2, uint8_t(__cdecl* arg3)(struct jpeg_decompress_struct*))
{
    return stub<
        cdecl_t<void, struct jpeg_decompress_struct*, int32_t, uint8_t(__cdecl*)(struct jpeg_decompress_struct*)>>(
        0x561530, arg1, arg2, arg3);
}

// 0x55FAE0 | ?next_marker@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t next_marker(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x55FAE0, arg1);
}

// 0x55FC70 | ?get_interesting_appn@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t get_interesting_appn(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x55FC70, arg1);
}

// 0x55FDC0 | ?examine_app0@@YAXPAUjpeg_decompress_struct@@PAEIJ@Z
inline void examine_app0(struct jpeg_decompress_struct* arg1, uint8_t* arg2, uint32_t arg3, int32_t arg4)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t*, uint32_t, int32_t>>(
        0x55FDC0, arg1, arg2, arg3, arg4);
}

// 0x560040 | ?examine_app14@@YAXPAUjpeg_decompress_struct@@PAEIJ@Z
inline void examine_app14(struct jpeg_decompress_struct* arg1, uint8_t* arg2, uint32_t arg3, int32_t arg4)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t*, uint32_t, int32_t>>(
        0x560040, arg1, arg2, arg3, arg4);
}

// 0x560120 | ?skip_variable@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t skip_variable(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x560120, arg1);
}

// 0x5601E0 | ?read_markers@@YAHPAUjpeg_decompress_struct@@@Z
inline int32_t read_markers(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<int32_t, struct jpeg_decompress_struct*>>(0x5601E0, arg1);
}

// 0x560570 | ?get_soi@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t get_soi(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x560570, arg1);
}

// 0x560630 | ?get_sof@@YAEPAUjpeg_decompress_struct@@EE@Z
inline uint8_t get_sof(struct jpeg_decompress_struct* arg1, uint8_t arg2, uint8_t arg3)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*, uint8_t, uint8_t>>(0x560630, arg1, arg2, arg3);
}

// 0x560980 | ?get_sos@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t get_sos(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x560980, arg1);
}

// 0x560CB0 | ?get_dht@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t get_dht(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x560CB0, arg1);
}

// 0x561010 | ?get_dqt@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t get_dqt(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x561010, arg1);
}

// 0x5612C0 | ?get_dri@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t get_dri(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x5612C0, arg1);
}

// 0x5613C0 | ?first_marker@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t first_marker(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x5613C0, arg1);
}

// 0x561470 | ?read_restart_marker@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t read_restart_marker(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x561470, arg1);
}

// 0x561500 | ?reset_marker_reader@@YAXPAUjpeg_decompress_struct@@@Z
inline void reset_marker_reader(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x561500, arg1);
}
