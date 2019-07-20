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

void Assertf(const char* format, ...);

extern const char _AssertFailed[];

#define Assert(EXPR)                                           \
    do                                                         \
    {                                                          \
        if (!(EXPR))                                           \
        {                                                      \
            Assertf(_AssertFailed, __FILE__, __LINE__, #EXPR); \
        }                                                      \
    } while (false)

#define AssertMsg(EXPR, MESSAGE, ...)      \
    do                                     \
    {                                      \
        if (!(EXPR))                       \
        {                                  \
            Assertf(MESSAGE, __VA_ARGS__); \
        }                                  \
    } while (false)

#ifdef _DEBUG
#    define DebugAssert(EXPR) Assert(EXPR)
#else
#    define DebugAssert(EXPR) (void) (0)
#endif
