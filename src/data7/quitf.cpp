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

#include "quitf.h"

#include "minwin.h"
#include <cstdarg>

const char _UnimplFunction[] = "Unimplemented function %s in %s (%i)";

[[noreturn]] void Quit(char const* message)
{
    if (message)
    {
        Quitf("%s", message);
    }
    else
    {
        exit(0);
    }
}

[[noreturn]] void Quitf(char const* format, ...)
{
    std::va_list va;
    va_start(va, format);

    if (IsDebuggerPresent())
    {
        Printer(2, format, va);
        __debugbreak();
    }
    else
    {
        Printer(3, format, va);
    }

    va_end(va);

    exit(1);
}
