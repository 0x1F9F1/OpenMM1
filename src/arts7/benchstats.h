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

// arts7:benchstats

#include "hooking.h"

class asBenchStats
{
public:
    // 0x516200 | ?Reset@asBenchStats@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, asBenchStats>>(0x516200, this);
    }

    // 0x516240 | ?Print@asBenchStats@@QAEXXZ
    inline void Print()
    {
        return stub<member_func_t<void, asBenchStats>>(0x516240, this);
    }

    // 0x516250 | ?Average@asBenchStats@@QAEXPAV1@MH@Z
    inline void Average(class asBenchStats* arg1, float arg2, int32_t arg3)
    {
        return stub<member_func_t<void, asBenchStats, class asBenchStats*, float, int32_t>>(
            0x516250, this, arg1, arg2, arg3);
    }

    // 0x516370 | ?Current@asBenchStats@@QAEXPAV1@@Z
    inline void Current(class asBenchStats* arg1)
    {
        return stub<member_func_t<void, asBenchStats, class asBenchStats*>>(0x516370, this, arg1);
    }
};
