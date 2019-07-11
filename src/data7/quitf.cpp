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

#include "printer.h"

#include <stdarg.h>

// 0x5588F0 | ?Quitf@@YAXPBDZZ
[[noreturn]] void Quitf(char const* arg1, ...)
{
    va_list va;
    va_start(va, arg1);
    Printer(3, arg1, va);
    va_end(va);

    exit(1);
}