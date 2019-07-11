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

// mminput:spring

#include "hooking.h"

struct mmSpringFF
{
public:
    // mmSpringFF::`vftable' @ 0x5947E8

    // 0x4DABE0 | ?Assign@mmSpringFF@@QAEHJ@Z
    inline int32_t Assign(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmSpringFF, int32_t>>(0x4DABE0, this, arg1);
    }

    // 0x4DAAB0 | ?Init@mmSpringFF@@UAEHPAUIDirectInputDevice2A@@@Z
    virtual inline int32_t Init(struct IDirectInputDevice2A* arg1)
    {
        return stub<member_func_t<int32_t, mmSpringFF, struct IDirectInputDevice2A*>>(0x4DAAB0, this, arg1);
    }

    // 0x4DACD0 | ?Play@mmSpringFF@@UAEHXZ
    virtual inline int32_t Play()
    {
        return stub<member_func_t<int32_t, mmSpringFF>>(0x4DACD0, this);
    }

    // 0x4DAD40 | ?Stop@mmSpringFF@@UAEHXZ
    virtual inline int32_t Stop()
    {
        return stub<member_func_t<int32_t, mmSpringFF>>(0x4DAD40, this);
    }

    // 0x4DABB0 | ?SetValues@mmSpringFF@@UAEHMM@Z
    virtual inline int32_t SetValues(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, mmSpringFF, float, float>>(0x4DABB0, this, arg1, arg2);
    }
};
