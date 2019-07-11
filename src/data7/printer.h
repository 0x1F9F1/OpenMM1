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
    data7:printer

    0x558360 | void __cdecl DefaultPrinter(int,char const *,char *) | ?DefaultPrinter@@YAXHPBDPAD@Z
    0x5585E0 | void __cdecl Displayf(char const *,...) | ?Displayf@@YAXPBDZZ
    0x558600 | void __cdecl Printf(char const *,...) | ?Printf@@YAXPBDZZ
    0x558620 | void __cdecl Debugf(char const *,...) | ?Debugf@@YAXPBDZZ
    0x558640 | void __cdecl Warningf(char const *,...) | ?Warningf@@YAXPBDZZ
    0x558660 | void __cdecl Errorf(char const *,...) | ?Errorf@@YAXPBDZZ
    0x558680 | void __cdecl PErrorf(char const *,...) | ?PErrorf@@YAXPBDZZ
    0x5586D0 | void __cdecl PDebug(char const *,...) | ?PDebug@@YAXPBDZZ
    0x558720 | void __cdecl Abortf(char const *,...) | ?Abortf@@YAXPBDZZ
    0x558740 | void __cdecl Quit(char const *) | ?Quit@@YAXPBD@Z
    0x558770 | int __cdecl LogToCommPort(int,int) | ?LogToCommPort@@YAHHH@Z
    0x558800 | void __cdecl LogToMonochromeMonitor(void) | ?LogToMonochromeMonitor@@YAXXZ
    0x558810 | void __cdecl LogToFile(char *) | ?LogToFile@@YAXPAD@Z
    0x558870 | void __cdecl LogToFile(void) | ?LogToFile@@YAXXZ
    0x5CDF54 | int EnableNormalOutput | ?EnableNormalOutput@@3HA
    0x5CDF58 | int EnableDebugOutput | ?EnableDebugOutput@@3HA
    0x5CDF68 | void (__cdecl* Printer)(int,char const *,char *) | ?Printer@@3P6AXHPBDPAD@ZA
    0x5CDF70 | char * __assertFailed | ?__assertFailed@@3PADA
    0x711ABC | unsigned short * MonoPointer | ?MonoPointer@@3PAGA
*/

#include "hooking.h"

#include <stdarg.h>

// 0x558360 | ?DefaultPrinter@@YAXHPBDPAD@Z
inline void DefaultPrinter(int32_t arg1, char const* arg2, char* arg3)
{
    return stub<cdecl_t<void, int32_t, char const*, char*>>(0x558360, arg1, arg2, arg3);
}

// 0x558740 | ?Quit@@YAXPBD@Z
inline void Quit(char const* arg1)
{
    return stub<cdecl_t<void, char const*>>(0x558740, arg1);
}

// 0x558770 | ?LogToCommPort@@YAHHH@Z
inline int32_t LogToCommPort(int32_t arg1, int32_t arg2)
{
    return stub<cdecl_t<int32_t, int32_t, int32_t>>(0x558770, arg1, arg2);
}

// 0x558800 | ?LogToMonochromeMonitor@@YAXXZ
inline void LogToMonochromeMonitor()
{
    return stub<cdecl_t<void>>(0x558800);
}

// 0x558810 | ?LogToFile@@YAXPAD@Z
inline void LogToFile(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x558810, arg1);
}

// 0x558870 | ?LogToFile@@YAXXZ
inline void LogToFile()
{
    return stub<cdecl_t<void>>(0x558870);
}

// 0x5CDF54 | ?EnableNormalOutput@@3HA
inline extern_var(0x5CDF54, int32_t, EnableNormalOutput);

// 0x5CDF58 | ?EnableDebugOutput@@3HA
inline extern_var(0x5CDF58, int32_t, EnableDebugOutput);

// 0x5CDF68 | ?Printer@@3P6AXHPBDPAD@ZA
inline extern_var(0x5CDF68, void(__cdecl*)(int32_t, char const*, char*), Printer);

// 0x5CDF70 | ?__assertFailed@@3PADA
inline extern_var(0x5CDF70, char*, __assertFailed);

// 0x711ABC | ?MonoPointer@@3PAGA
inline extern_var(0x711ABC, uint16_t*, MonoPointer);

// 0x5585E0 | ?Displayf@@YAXPBDZZ
inline void Displayf(char const* arg1, ...)
{
    va_list va;
    va_start(va, arg1);
    Printer(0, arg1, va);
    va_end(va);
}

// 0x558600 | ?Printf@@YAXPBDZZ
inline void Printf(char const* arg1, ...)
{
    va_list va;
    va_start(va, arg1);
    Printer(0, arg1, va);
    va_end(va);
}

// 0x558620 | ?Debugf@@YAXPBDZZ
inline void Debugf(char const* arg1, ...)
{
    va_list va;
    va_start(va, arg1);
    Printer(0, arg1, va);
    va_end(va);
}

// 0x558640 | ?Warningf@@YAXPBDZZ
inline void Warningf(char const* arg1, ...)
{
    va_list va;
    va_start(va, arg1);
    Printer(1, arg1, va);
    va_end(va);
}

// 0x558660 | ?Errorf@@YAXPBDZZ
inline void Errorf(char const* arg1, ...)
{
    va_list va;
    va_start(va, arg1);
    Printer(2, arg1, va);
    va_end(va);
}

// 0x558720 | ?Abortf@@YAXPBDZZ
inline void Abortf(char const* arg1, ...)
{
    va_list va;
    va_start(va, arg1);
    Printer(4, arg1, va);
    va_end(va);
}
