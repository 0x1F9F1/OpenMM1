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
    memory:stack

    0x50E0F0 | void __cdecl LookupAddress(char *,int) | ?LookupAddress@@YAXPADH@Z
    0x50E480 | void __cdecl DoStackTraceback(int,int *) | ?DoStackTraceback@@YAXHPAH@Z
    0x50E550 | void __cdecl StackTraceback(int) | ?StackTraceback@@YAXH@Z
    0x50E570 | int __cdecl LogStackTraceback(int *,int) | ?LogStackTraceback@@YAHPAHH@Z
    0x50E630 | void __cdecl DumpStackTraceback(int *,int) | ?DumpStackTraceback@@YAXPAHH@Z
    0x50E680 | void __cdecl DebugLogInit(int) | ?DebugLogInit@@YAXH@Z
    0x50E6C0 | void __cdecl DebugLogShutdown(void) | ?DebugLogShutdown@@YAXXZ
    0x50E6E0 | void __cdecl DebugLog(int,void *,int) | ?DebugLog@@YAXHPAXH@Z
    0x50E180 | void __cdecl InitMap(void) | ?InitMap@@YAXXZ
*/

// 0x50E0F0 | ?LookupAddress@@YAXPADH@Z
void LookupAddress(char* buffer, uint32_t address);

// 0x50E480 | ?DoStackTraceback@@YAXHPAH@Z
inline void DoStackTraceback(int32_t arg1, int32_t* arg2)
{
    return stub<cdecl_t<void, int32_t, int32_t*>>(0x50E480, arg1, arg2);
}

// 0x50E550 | ?StackTraceback@@YAXH@Z
inline void StackTraceback(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x50E550, arg1);
}

// 0x50E570 | ?LogStackTraceback@@YAHPAHH@Z
inline int32_t LogStackTraceback(int32_t* arg1, int32_t arg2)
{
    return stub<cdecl_t<int32_t, int32_t*, int32_t>>(0x50E570, arg1, arg2);
}

// 0x50E630 | ?DumpStackTraceback@@YAXPAHH@Z
inline void DumpStackTraceback(int32_t* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, int32_t*, int32_t>>(0x50E630, arg1, arg2);
}

// 0x50E680 | ?DebugLogInit@@YAXH@Z
inline void DebugLogInit(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x50E680, arg1);
}

// 0x50E6C0 | ?DebugLogShutdown@@YAXXZ
inline void DebugLogShutdown()
{
    return stub<cdecl_t<void>>(0x50E6C0);
}

// 0x50E6E0 | ?DebugLog@@YAXHPAXH@Z
inline void DebugLog(int32_t arg1, void* arg2, int32_t arg3)
{
    return stub<cdecl_t<void, int32_t, void*, int32_t>>(0x50E6E0, arg1, arg2, arg3);
}

// 0x50E180 | ?InitMap@@YAXXZ
void InitMap();
