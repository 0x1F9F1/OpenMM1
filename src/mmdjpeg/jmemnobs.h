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
    mmdjpeg:jmemnobs

    0x562820 | void * __cdecl jpeg_get_small(struct jpeg_common_struct *,unsigned int) | ?jpeg_get_small@@YAPAXPAUjpeg_common_struct@@I@Z
    0x562840 | void __cdecl jpeg_free_small(struct jpeg_common_struct *,void *,unsigned int) | ?jpeg_free_small@@YAXPAUjpeg_common_struct@@PAXI@Z
    0x562860 | void * __cdecl jpeg_get_large(struct jpeg_common_struct *,unsigned int) | ?jpeg_get_large@@YAPAXPAUjpeg_common_struct@@I@Z
    0x562880 | void __cdecl jpeg_free_large(struct jpeg_common_struct *,void *,unsigned int) | ?jpeg_free_large@@YAXPAUjpeg_common_struct@@PAXI@Z
    0x5628A0 | long __cdecl jpeg_mem_available(struct jpeg_common_struct *,long,long,long) | ?jpeg_mem_available@@YAJPAUjpeg_common_struct@@JJJ@Z
    0x5628B0 | void __cdecl jpeg_open_backing_store(struct jpeg_common_struct *,struct backing_store_struct *,long) | ?jpeg_open_backing_store@@YAXPAUjpeg_common_struct@@PAUbacking_store_struct@@J@Z
    0x5628D0 | long __cdecl jpeg_mem_init(struct jpeg_common_struct *) | ?jpeg_mem_init@@YAJPAUjpeg_common_struct@@@Z
    0x5628E0 | void __cdecl jpeg_mem_term(struct jpeg_common_struct *) | ?jpeg_mem_term@@YAXPAUjpeg_common_struct@@@Z
    0x7125D4 | int jpeg_allocated | ?jpeg_allocated@@3HA
*/

// 0x562820 | ?jpeg_get_small@@YAPAXPAUjpeg_common_struct@@I@Z
inline void* jpeg_get_small(struct jpeg_common_struct* arg1, uint32_t arg2)
{
    return stub<cdecl_t<void*, struct jpeg_common_struct*, uint32_t>>(0x562820, arg1, arg2);
}

// 0x562840 | ?jpeg_free_small@@YAXPAUjpeg_common_struct@@PAXI@Z
inline void jpeg_free_small(struct jpeg_common_struct* arg1, void* arg2, uint32_t arg3)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*, void*, uint32_t>>(0x562840, arg1, arg2, arg3);
}

// 0x562860 | ?jpeg_get_large@@YAPAXPAUjpeg_common_struct@@I@Z
inline void* jpeg_get_large(struct jpeg_common_struct* arg1, uint32_t arg2)
{
    return stub<cdecl_t<void*, struct jpeg_common_struct*, uint32_t>>(0x562860, arg1, arg2);
}

// 0x562880 | ?jpeg_free_large@@YAXPAUjpeg_common_struct@@PAXI@Z
inline void jpeg_free_large(struct jpeg_common_struct* arg1, void* arg2, uint32_t arg3)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*, void*, uint32_t>>(0x562880, arg1, arg2, arg3);
}

// 0x5628A0 | ?jpeg_mem_available@@YAJPAUjpeg_common_struct@@JJJ@Z
inline int32_t jpeg_mem_available(struct jpeg_common_struct* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    return stub<cdecl_t<int32_t, struct jpeg_common_struct*, int32_t, int32_t, int32_t>>(
        0x5628A0, arg1, arg2, arg3, arg4);
}

// 0x5628B0 | ?jpeg_open_backing_store@@YAXPAUjpeg_common_struct@@PAUbacking_store_struct@@J@Z
inline void jpeg_open_backing_store(struct jpeg_common_struct* arg1, struct backing_store_struct* arg2, int32_t arg3)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*, struct backing_store_struct*, int32_t>>(
        0x5628B0, arg1, arg2, arg3);
}

// 0x5628D0 | ?jpeg_mem_init@@YAJPAUjpeg_common_struct@@@Z
inline int32_t jpeg_mem_init(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<int32_t, struct jpeg_common_struct*>>(0x5628D0, arg1);
}

// 0x5628E0 | ?jpeg_mem_term@@YAXPAUjpeg_common_struct@@@Z
inline void jpeg_mem_term(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*>>(0x5628E0, arg1);
}

// 0x7125D4 | ?jpeg_allocated@@3HA
inline extern_var(0x7125D4, int32_t, jpeg_allocated);
