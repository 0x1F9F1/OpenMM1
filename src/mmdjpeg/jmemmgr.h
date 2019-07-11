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
    mmdjpeg:jmemmgr

    0x561590 | void __cdecl jinit_memory_mgr(struct jpeg_common_struct *) | ?jinit_memory_mgr@@YAXPAUjpeg_common_struct@@@Z
    0x5616C0 | void * __cdecl alloc_small(struct jpeg_common_struct *,int,unsigned int) | ?alloc_small@@YAPAXPAUjpeg_common_struct@@HI@Z
    0x561800 | void __cdecl out_of_memory(struct jpeg_common_struct *,int) | ?out_of_memory@@YAXPAUjpeg_common_struct@@H@Z
    0x561830 | void * __cdecl alloc_large(struct jpeg_common_struct *,int,unsigned int) | ?alloc_large@@YAPAXPAUjpeg_common_struct@@HI@Z
    0x5618D0 | unsigned char * * __cdecl alloc_sarray(struct jpeg_common_struct *,int,unsigned int,unsigned int) | ?alloc_sarray@@YAPAPAEPAUjpeg_common_struct@@HII@Z
    0x561970 | short (* * __cdecl alloc_barray(struct jpeg_common_struct *,int,unsigned int,unsigned int))[64] | ?alloc_barray@@YAPAPAY0EA@FPAUjpeg_common_struct@@HII@Z
    0x561A30 | struct jvirt_sarray_control * __cdecl request_virt_sarray(struct jpeg_common_struct *,int,unsigned char,unsigned int,unsigned int,unsigned int) | ?request_virt_sarray@@YAPAUjvirt_sarray_control@@PAUjpeg_common_struct@@HEIII@Z
    0x561AA0 | struct jvirt_barray_control * __cdecl request_virt_barray(struct jpeg_common_struct *,int,unsigned char,unsigned int,unsigned int,unsigned int) | ?request_virt_barray@@YAPAUjvirt_barray_control@@PAUjpeg_common_struct@@HEIII@Z
    0x561B10 | void __cdecl realize_virt_arrays(struct jpeg_common_struct *) | ?realize_virt_arrays@@YAXPAUjpeg_common_struct@@@Z
    0x561CB0 | unsigned char * * __cdecl access_virt_sarray(struct jpeg_common_struct *,struct jvirt_sarray_control *,unsigned int,unsigned int,unsigned char) | ?access_virt_sarray@@YAPAPAEPAUjpeg_common_struct@@PAUjvirt_sarray_control@@IIE@Z
    0x561DF0 | void __cdecl do_sarray_io(struct jpeg_common_struct *,struct jvirt_sarray_control *,unsigned char) | ?do_sarray_io@@YAXPAUjpeg_common_struct@@PAUjvirt_sarray_control@@E@Z
    0x561EA0 | short (* * __cdecl access_virt_barray(struct jpeg_common_struct *,struct jvirt_barray_control *,unsigned int,unsigned int,unsigned char))[64] | ?access_virt_barray@@YAPAPAY0EA@FPAUjpeg_common_struct@@PAUjvirt_barray_control@@IIE@Z
    0x561FE0 | void __cdecl do_barray_io(struct jpeg_common_struct *,struct jvirt_barray_control *,unsigned char) | ?do_barray_io@@YAXPAUjpeg_common_struct@@PAUjvirt_barray_control@@E@Z
    0x562090 | void __cdecl free_pool(struct jpeg_common_struct *,int) | ?free_pool@@YAXPAUjpeg_common_struct@@H@Z
    0x5621A0 | void __cdecl self_destruct(struct jpeg_common_struct *) | ?self_destruct@@YAXPAUjpeg_common_struct@@@Z
*/

#include "hooking.h"

// 0x561590 | ?jinit_memory_mgr@@YAXPAUjpeg_common_struct@@@Z
inline void jinit_memory_mgr(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*>>(0x561590, arg1);
}

// 0x5616C0 | ?alloc_small@@YAPAXPAUjpeg_common_struct@@HI@Z
inline void* alloc_small(struct jpeg_common_struct* arg1, int32_t arg2, uint32_t arg3)
{
    return stub<cdecl_t<void*, struct jpeg_common_struct*, int32_t, uint32_t>>(0x5616C0, arg1, arg2, arg3);
}

// 0x561800 | ?out_of_memory@@YAXPAUjpeg_common_struct@@H@Z
inline void out_of_memory(struct jpeg_common_struct* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*, int32_t>>(0x561800, arg1, arg2);
}

// 0x561830 | ?alloc_large@@YAPAXPAUjpeg_common_struct@@HI@Z
inline void* alloc_large(struct jpeg_common_struct* arg1, int32_t arg2, uint32_t arg3)
{
    return stub<cdecl_t<void*, struct jpeg_common_struct*, int32_t, uint32_t>>(0x561830, arg1, arg2, arg3);
}

// 0x5618D0 | ?alloc_sarray@@YAPAPAEPAUjpeg_common_struct@@HII@Z
inline uint8_t** alloc_sarray(struct jpeg_common_struct* arg1, int32_t arg2, uint32_t arg3, uint32_t arg4)
{
    return stub<cdecl_t<uint8_t**, struct jpeg_common_struct*, int32_t, uint32_t, uint32_t>>(
        0x5618D0, arg1, arg2, arg3, arg4);
}

// 0x561970 | ?alloc_barray@@YAPAPAY0EA@FPAUjpeg_common_struct@@HII@Z
inline int16_t (**)[64] alloc_barray(struct jpeg_common_struct* arg1, int32_t arg2, uint32_t arg3, uint32_t arg4)
{
    return stub<cdecl_t<int16_t(**)[64], struct jpeg_common_struct*, int32_t, uint32_t, uint32_t>>(
        0x561970, arg1, arg2, arg3, arg4);
}

// 0x561A30 | ?request_virt_sarray@@YAPAUjvirt_sarray_control@@PAUjpeg_common_struct@@HEIII@Z
inline struct jvirt_sarray_control* request_virt_sarray(
    struct jpeg_common_struct* arg1, int32_t arg2, uint8_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6)
{
    return stub<cdecl_t<struct jvirt_sarray_control*, struct jpeg_common_struct*, int32_t, uint8_t, uint32_t, uint32_t,
        uint32_t>>(0x561A30, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x561AA0 | ?request_virt_barray@@YAPAUjvirt_barray_control@@PAUjpeg_common_struct@@HEIII@Z
inline struct jvirt_barray_control* request_virt_barray(
    struct jpeg_common_struct* arg1, int32_t arg2, uint8_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6)
{
    return stub<cdecl_t<struct jvirt_barray_control*, struct jpeg_common_struct*, int32_t, uint8_t, uint32_t, uint32_t,
        uint32_t>>(0x561AA0, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x561B10 | ?realize_virt_arrays@@YAXPAUjpeg_common_struct@@@Z
inline void realize_virt_arrays(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*>>(0x561B10, arg1);
}

// 0x561CB0 | ?access_virt_sarray@@YAPAPAEPAUjpeg_common_struct@@PAUjvirt_sarray_control@@IIE@Z
inline uint8_t** access_virt_sarray(
    struct jpeg_common_struct* arg1, struct jvirt_sarray_control* arg2, uint32_t arg3, uint32_t arg4, uint8_t arg5)
{
    return stub<
        cdecl_t<uint8_t**, struct jpeg_common_struct*, struct jvirt_sarray_control*, uint32_t, uint32_t, uint8_t>>(
        0x561CB0, arg1, arg2, arg3, arg4, arg5);
}

// 0x561DF0 | ?do_sarray_io@@YAXPAUjpeg_common_struct@@PAUjvirt_sarray_control@@E@Z
inline void do_sarray_io(struct jpeg_common_struct* arg1, struct jvirt_sarray_control* arg2, uint8_t arg3)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*, struct jvirt_sarray_control*, uint8_t>>(
        0x561DF0, arg1, arg2, arg3);
}

// 0x561EA0 | ?access_virt_barray@@YAPAPAY0EA@FPAUjpeg_common_struct@@PAUjvirt_barray_control@@IIE@Z
inline int16_t (**)[64] access_virt_barray(
    struct jpeg_common_struct* arg1, struct jvirt_barray_control* arg2, uint32_t arg3, uint32_t arg4, uint8_t arg5)
{
    return stub<cdecl_t<int16_t(**)[64], struct jpeg_common_struct*, struct jvirt_barray_control*, uint32_t, uint32_t,
        uint8_t>>(0x561EA0, arg1, arg2, arg3, arg4, arg5);
}

// 0x561FE0 | ?do_barray_io@@YAXPAUjpeg_common_struct@@PAUjvirt_barray_control@@E@Z
inline void do_barray_io(struct jpeg_common_struct* arg1, struct jvirt_barray_control* arg2, uint8_t arg3)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*, struct jvirt_barray_control*, uint8_t>>(
        0x561FE0, arg1, arg2, arg3);
}

// 0x562090 | ?free_pool@@YAXPAUjpeg_common_struct@@H@Z
inline void free_pool(struct jpeg_common_struct* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*, int32_t>>(0x562090, arg1, arg2);
}

// 0x5621A0 | ?self_destruct@@YAXPAUjpeg_common_struct@@@Z
inline void self_destruct(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*>>(0x5621A0, arg1);
}
