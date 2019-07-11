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

// mminput:collide

#include "hooking.h"

struct mmCollideFF
{
public:
    // mmCollideFF::`vftable' @ 0x5947D8

    // 0x4DA3C0 | ?Assign@mmCollideFF@@QAEHJJ@Z
    inline int32_t Assign(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmCollideFF, int32_t, int32_t>>(0x4DA3C0, this, arg1, arg2);
    }

    // 0x4DA1D0 | ?Init@mmCollideFF@@UAEHPAUIDirectInputDevice2A@@@Z
    virtual inline int32_t Init(struct IDirectInputDevice2A* arg1)
    {
        return stub<member_func_t<int32_t, mmCollideFF, struct IDirectInputDevice2A*>>(0x4DA1D0, this, arg1);
    }

    // 0x4DA4C0 | ?Play@mmCollideFF@@UAEHXZ
    virtual inline int32_t Play()
    {
        return stub<member_func_t<int32_t, mmCollideFF>>(0x4DA4C0, this);
    }

    // 0x4DA510 | ?Stop@mmCollideFF@@UAEHXZ
    virtual inline int32_t Stop()
    {
        return stub<member_func_t<int32_t, mmCollideFF>>(0x4DA510, this);
    }

    // 0x4DA390 | ?SetValues@mmCollideFF@@UAEHMM@Z
    virtual inline int32_t SetValues(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, mmCollideFF, float, float>>(0x4DA390, this, arg1, arg2);
    }
};
