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
    vector7:trigmath

    0x554DA0 | float __cdecl tanf_fast(float) | ?tanf_fast@@YAMM@Z
    0x554E10 | float __cdecl atanf_fast_large_values(float) | ?atanf_fast_large_values@@YAMM@Z
    0x554E40 | float __cdecl atanf_fast(float) | ?atanf_fast@@YAMM@Z
    0x554EC0 | float __cdecl atanf_faster(float) | ?atanf_faster@@YAMM@Z
    0x554F20 | float __cdecl atan2f_fast(float,float) | ?atan2f_fast@@YAMMM@Z
    0x554FA0 | float __cdecl atan2f_faster(float,float) | ?atan2f_faster@@YAMMM@Z
    0x5C6A60 | float * asintable | ?asintable@@3PAMA
    0x5CAD90 | float * TRIGMATH_COSTABLE | ?TRIGMATH_COSTABLE@@3PAMA
    0x5CBDB8 | float * TRIGMATH_TANTABLE | ?TRIGMATH_TANTABLE@@3PAMA
    0x5CCDE0 | float * TRIGMATH_ATANTABLE | ?TRIGMATH_ATANTABLE@@3PAMA
*/

// 0x554DA0 | ?tanf_fast@@YAMM@Z
inline float tanf_fast(float arg1)
{
    return stub<cdecl_t<float, float>>(0x554DA0, arg1);
}

// 0x554E10 | ?atanf_fast_large_values@@YAMM@Z
inline float atanf_fast_large_values(float arg1)
{
    return stub<cdecl_t<float, float>>(0x554E10, arg1);
}

// 0x554E40 | ?atanf_fast@@YAMM@Z
inline float atanf_fast(float arg1)
{
    return stub<cdecl_t<float, float>>(0x554E40, arg1);
}

// 0x554EC0 | ?atanf_faster@@YAMM@Z
inline float atanf_faster(float arg1)
{
    return stub<cdecl_t<float, float>>(0x554EC0, arg1);
}

// 0x554F20 | ?atan2f_fast@@YAMMM@Z
inline float atan2f_fast(float arg1, float arg2)
{
    return stub<cdecl_t<float, float, float>>(0x554F20, arg1, arg2);
}

// 0x554FA0 | ?atan2f_faster@@YAMMM@Z
inline float atan2f_faster(float arg1, float arg2)
{
    return stub<cdecl_t<float, float, float>>(0x554FA0, arg1, arg2);
}

// 0x5C6A60 | ?asintable@@3PAMA
inline extern_var(0x5C6A60, float*, asintable);

// 0x5CAD90 | ?TRIGMATH_COSTABLE@@3PAMA
inline extern_var(0x5CAD90, float*, TRIGMATH_COSTABLE);

// 0x5CBDB8 | ?TRIGMATH_TANTABLE@@3PAMA
inline extern_var(0x5CBDB8, float*, TRIGMATH_TANTABLE);

// 0x5CCDE0 | ?TRIGMATH_ATANTABLE@@3PAMA
inline extern_var(0x5CCDE0, float*, TRIGMATH_ATANTABLE);
