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

#include "printer.h"

#include <stdarg.h>

void Displayf(char const* arg1, ...)
{
    va_list va;
    va_start(va, arg1);
    Printer(0, arg1, va);
    va_end(va);
}

void Printf(char const* arg1, ...)
{
    va_list va;
    va_start(va, arg1);
    Printer(0, arg1, va);
    va_end(va);
}

void Debugf(char const* arg1, ...)
{
    va_list va;
    va_start(va, arg1);
    Printer(0, arg1, va);
    va_end(va);
}

void Warningf(char const* arg1, ...)
{
    va_list va;
    va_start(va, arg1);
    Printer(1, arg1, va);
    va_end(va);
}

void Errorf(char const* arg1, ...)
{
    va_list va;
    va_start(va, arg1);
    Printer(2, arg1, va);
    va_end(va);
}

[[noreturn]] void Abortf(char const* arg1, ...)
{
    va_list va;
    va_start(va, arg1);
    Printer(4, arg1, va);
    va_end(va);

    exit(1);
}
