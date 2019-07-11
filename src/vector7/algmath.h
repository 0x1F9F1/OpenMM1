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
    vector7:algmath

    0x552900 | float __cdecl Bias(float,float) | ?Bias@@YAMMM@Z
    0x552950 | float __cdecl Gain(float,float) | ?Gain@@YAMMM@Z
    0x5529D0 | float __cdecl logf_fast(float) | ?logf_fast@@YAMM@Z
    0x552A60 | float __cdecl sqrtf_faster(float) | ?sqrtf_faster@@YAMM@Z
    0x552AD0 | float __cdecl invsqrtf_fast(float) | ?invsqrtf_fast@@YAMM@Z
    0x552B50 | float __cdecl expf_fast(float) | ?expf_fast@@YAMM@Z
    0x552BE0 | float __cdecl expf_faster(float) | ?expf_faster@@YAMM@Z
*/

#include "hooking.h"

// 0x552900 | ?Bias@@YAMMM@Z
inline float Bias(float arg1, float arg2)
{
    return stub<cdecl_t<float, float, float>>(0x552900, arg1, arg2);
}

// 0x552950 | ?Gain@@YAMMM@Z
inline float Gain(float arg1, float arg2)
{
    return stub<cdecl_t<float, float, float>>(0x552950, arg1, arg2);
}

// 0x5529D0 | ?logf_fast@@YAMM@Z
inline float logf_fast(float arg1)
{
    return stub<cdecl_t<float, float>>(0x5529D0, arg1);
}

// 0x552A60 | ?sqrtf_faster@@YAMM@Z
inline float sqrtf_faster(float arg1)
{
    return stub<cdecl_t<float, float>>(0x552A60, arg1);
}

// 0x552AD0 | ?invsqrtf_fast@@YAMM@Z
inline float invsqrtf_fast(float arg1)
{
    return stub<cdecl_t<float, float>>(0x552AD0, arg1);
}

// 0x552B50 | ?expf_fast@@YAMM@Z
inline float expf_fast(float arg1)
{
    return stub<cdecl_t<float, float>>(0x552B50, arg1);
}

// 0x552BE0 | ?expf_faster@@YAMM@Z
inline float expf_faster(float arg1)
{
    return stub<cdecl_t<float, float>>(0x552BE0, arg1);
}
