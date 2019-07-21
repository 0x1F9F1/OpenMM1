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
    eventq7:geinputLib

    0x545960 | int __cdecl inputSetup(int,int,int,int,int) | ?inputSetup@@YAHHHHHH@Z
    0x545D80 | void __cdecl geinputAcquireMouse(void) | ?geinputAcquireMouse@@YAXXZ
    0x545D90 | void __cdecl geinputUnacquireMouse(void) | ?geinputUnacquireMouse@@YAXXZ
    0x545DA0 | int __cdecl geinputGetBufferedKeyboard(char *) | ?geinputGetBufferedKeyboard@@YAHPAD@Z
    0x545E30 | char * __cdecl geinputGetKeyboard(void) | ?geinputGetKeyboard@@YAPADXZ
    0x545EA0 | void __cdecl geinputGetMouse(long *,long *,char *,char *,long *,long *,long *,char *) | ?geinputGetMouse@@YAXPAJ0PAD10001@Z
    0x5460F0 | void __cdecl geinputCleanup(void) | ?geinputCleanup@@YAXXZ
    0x546190 | void __cdecl geinputClearCache(void) | ?geinputClearCache@@YAXXZ
    0x710700 | struct _DIMOUSESTATE MOUSESTATE | ?MOUSESTATE@@3U_DIMOUSESTATE@@A
    0x545BD0 | char * __cdecl DIError(int) | ?DIError@@YAPADH@Z
*/

// 0x545960 | ?inputSetup@@YAHHHHHH@Z
inline int32_t inputSetup(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    return stub<cdecl_t<int32_t, int32_t, int32_t, int32_t, int32_t, int32_t>>(0x545960, arg1, arg2, arg3, arg4, arg5);
}

// 0x545D80 | ?geinputAcquireMouse@@YAXXZ
inline void geinputAcquireMouse()
{
    return stub<cdecl_t<void>>(0x545D80);
}

// 0x545D90 | ?geinputUnacquireMouse@@YAXXZ
inline void geinputUnacquireMouse()
{
    return stub<cdecl_t<void>>(0x545D90);
}

// 0x545DA0 | ?geinputGetBufferedKeyboard@@YAHPAD@Z
inline int32_t geinputGetBufferedKeyboard(char* arg1)
{
    return stub<cdecl_t<int32_t, char*>>(0x545DA0, arg1);
}

// 0x545E30 | ?geinputGetKeyboard@@YAPADXZ
inline char* geinputGetKeyboard()
{
    return stub<cdecl_t<char*>>(0x545E30);
}

// 0x545EA0 | ?geinputGetMouse@@YAXPAJ0PAD10001@Z
inline void geinputGetMouse(
    int32_t* arg1, int32_t* arg2, char* arg3, char* arg4, int32_t* arg5, int32_t* arg6, int32_t* arg7, char* arg8)
{
    return stub<cdecl_t<void, int32_t*, int32_t*, char*, char*, int32_t*, int32_t*, int32_t*, char*>>(
        0x545EA0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

// 0x5460F0 | ?geinputCleanup@@YAXXZ
inline void geinputCleanup()
{
    return stub<cdecl_t<void>>(0x5460F0);
}

// 0x546190 | ?geinputClearCache@@YAXXZ
inline void geinputClearCache()
{
    return stub<cdecl_t<void>>(0x546190);
}

// 0x710700 | ?MOUSESTATE@@3U_DIMOUSESTATE@@A
inline extern_var(0x710700, struct _DIMOUSESTATE, MOUSESTATE);

// 0x545BD0 | ?DIError@@YAPADH@Z
inline char* DIError(int32_t arg1)
{
    return stub<cdecl_t<char*, int32_t>>(0x545BD0, arg1);
}
