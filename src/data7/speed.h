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
    data7:speed

    0x55E710 | unsigned int __cdecl __ComputeCpuSpeed(void) | ?__ComputeCpuSpeed@@YAIXZ
    0x55E7D0 | unsigned int __cdecl ComputeCpuSpeed(void) | ?ComputeCpuSpeed@@YAIXZ
    0x55E7C0 | unsigned int __cdecl rdtsc(void) | ?rdtsc@@YAIXZ
*/

#include "hooking.h"

// 0x55E710 | ?__ComputeCpuSpeed@@YAIXZ
inline uint32_t __ComputeCpuSpeed()
{
    return stub<cdecl_t<uint32_t>>(0x55E710);
}

// 0x55E7D0 | ?ComputeCpuSpeed@@YAIXZ
inline uint32_t ComputeCpuSpeed()
{
    return stub<cdecl_t<uint32_t>>(0x55E7D0);
}

// 0x55E7C0 | ?rdtsc@@YAIXZ
inline uint32_t rdtsc()
{
    return stub<cdecl_t<uint32_t>>(0x55E7C0);
}
