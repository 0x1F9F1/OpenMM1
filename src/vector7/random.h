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
    vector7:random

    0x548F90 | public: void __thiscall Random::Seed(int) | ?Seed@Random@@QAEXH@Z
    0x549050 | public: float __thiscall Random::Number(void) | ?Number@Random@@QAEMXZ
    0x5490B0 | public: float __thiscall Random::Normal(float,float) | ?Normal@Random@@QAEMMM@Z
*/

#include "hooking.h"

struct Random
{
public:
    // 0x548F90 | ?Seed@Random@@QAEXH@Z
    inline void Seed(int32_t arg1)
    {
        return stub<member_func_t<void, Random, int32_t>>(0x548F90, this, arg1);
    }

    // 0x549050 | ?Number@Random@@QAEMXZ
    inline float Number()
    {
        return stub<member_func_t<float, Random>>(0x549050, this);
    }

    // 0x5490B0 | ?Normal@Random@@QAEMMM@Z
    inline float Normal(float arg1, float arg2)
    {
        return stub<member_func_t<float, Random, float, float>>(0x5490B0, this, arg1, arg2);
    }
};
