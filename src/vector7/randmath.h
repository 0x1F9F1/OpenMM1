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

// vector7:randmath

#include "hooking.h"

// 0x548EB0 | ?irand@@YAHH@Z
inline int32_t irand(int32_t arg1)
{
    return stub<cdecl_t<int32_t, int32_t>>(0x548EB0, arg1);
}

// 0x548EE0 | ?irand@@YAHXZ
inline int32_t irand()
{
    return stub<cdecl_t<int32_t>>(0x548EE0);
}

// 0x548F20 | ?frand@@YAMXZ
inline float frand()
{
    return stub<cdecl_t<float>>(0x548F20);
}

// 0x548F40 | ?frand@@YAMH@Z
inline float frand(int32_t arg1)
{
    return stub<cdecl_t<float, int32_t>>(0x548F40, arg1);
}

// 0x548F60 | _rand

// 0x548F70 | _srand

// 0x5C5060 | ?gRandSeed@@3HA
inline extern_var(0x5C5060, int32_t, gRandSeed);

// 0x7108C4 | ?LogRandomCalls@@3P6AXXZA
inline extern_var(0x7108C4, void(__cdecl*)(void), LogRandomCalls);
