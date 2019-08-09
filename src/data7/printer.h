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

#include <cstdarg>

// 0x558360 | ?DefaultPrinter@@YAXHPBDPAD@Z
void DefaultPrinter(int32_t level, char const* format, std::va_list args);

// 0x558770 | ?LogToCommPort@@YAHHH@Z
int32_t LogToCommPort(int32_t port, int32_t rate) = delete;

// 0x558800 | ?LogToMonochromeMonitor@@YAXXZ
void LogToMonochromeMonitor() = delete;

// 0x558810 | ?LogToFile@@YAXPAD@Z
void LogToFile(const char* file);

// 0x558870 | ?LogToFile@@YAXXZ
void LogToFile();

// 0x5585E0 | ?Displayf@@YAXPBDZZ
void Displayf(char const* format, ...);

// 0x558600 | ?Printf@@YAXPBDZZ
void Printf(char const* format, ...);

// 0x558620 | ?Debugf@@YAXPBDZZ
void Debugf(char const* format, ...);

// 0x558640 | ?Warningf@@YAXPBDZZ
void Warningf(char const* format, ...);

// 0x558660 | ?Errorf@@YAXPBDZZ
void Errorf(char const* format, ...);

// 0x558720 | ?Abortf@@YAXPBDZZ
[[noreturn]] void Abortf(char const* format, ...);

// 0x5CDF70 | ?__assertFailed@@3PADA
// inline extern_var(0x5CDF70, char[], __assertFailed);

// 0x711ABC | ?MonoPointer@@3PAGA
// inline extern_var(0x711ABC, uint16_t*, MonoPointer);

// 0x5CDF54 | ?EnableNormalOutput@@3HA
inline extern_var(0x5CDF54, int32_t, EnableNormalOutput);

// 0x5CDF58 | ?EnableDebugOutput@@3HA
inline extern_var(0x5CDF58, int32_t, EnableDebugOutput);

// 0x5CDF68 | ?Printer@@3P6AXHPBDPAD@ZA
inline extern_var(0x5CDF68, void (*)(int32_t, char const*, std::va_list), Printer);
