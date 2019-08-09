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

#include "format.h"

void formatf(char* buffer, size_t bufsz, const char* format, ...)
{
    std::va_list va;
    va_start(va, format);
    vformatf(buffer, bufsz, format, va);
    va_end(va);
}

void vformatf(char* buffer, size_t bufsz, const char* format, std::va_list args)
{
    vsnprintf(buffer, bufsz, format, args);
}
