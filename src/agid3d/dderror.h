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
    agid3d:dderror

    0x51A6F0 | char * __cdecl DDErrorToString(long) | ?DDErrorToString@@YAPADJ@Z
    0x51AE10 | void __cdecl __DDTry(int,char const *,char const *,int) | ?__DDTry@@YAXHPBD0H@Z
    0x51AEF0 | void __cdecl __DDRelease(struct IUnknown *,char const *,char const *,int) | ?__DDRelease@@YAXPAUIUnknown@@PBD1H@Z
    0x6F7DD0 | int DDIgnoreErrors | ?DDIgnoreErrors@@3HA
    0x6F7DD4 | int DDNeedRestore | ?DDNeedRestore@@3HA
*/

// 0x51A6F0 | ?DDErrorToString@@YAPADJ@Z
inline char* DDErrorToString(int32_t arg1)
{
    return stub<cdecl_t<char*, int32_t>>(0x51A6F0, arg1);
}

// 0x51AE10 | ?__DDTry@@YAXHPBD0H@Z
inline void __DDTry(int32_t arg1, char const* arg2, char const* arg3, int32_t arg4)
{
    return stub<cdecl_t<void, int32_t, char const*, char const*, int32_t>>(0x51AE10, arg1, arg2, arg3, arg4);
}

// 0x51AEF0 | ?__DDRelease@@YAXPAUIUnknown@@PBD1H@Z
inline void __DDRelease(struct IUnknown* arg1, char const* arg2, char const* arg3, int32_t arg4)
{
    return stub<cdecl_t<void, struct IUnknown*, char const*, char const*, int32_t>>(0x51AEF0, arg1, arg2, arg3, arg4);
}

// 0x6F7DD0 | ?DDIgnoreErrors@@3HA
inline extern_var(0x6F7DD0, int32_t, DDIgnoreErrors);

// 0x6F7DD4 | ?DDNeedRestore@@3HA
inline extern_var(0x6F7DD4, int32_t, DDNeedRestore);
