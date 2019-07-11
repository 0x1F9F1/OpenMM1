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
    mminput:friction

    0x4DA800 | public: virtual int __thiscall mmFrictionFF::Init(struct IDirectInputDevice2A *) | ?Init@mmFrictionFF@@UAEHPAUIDirectInputDevice2A@@@Z
    0x4DA910 | public: virtual int __thiscall mmFrictionFF::SetValues(float,float) | ?SetValues@mmFrictionFF@@UAEHMM@Z
    0x4DA940 | public: int __thiscall mmFrictionFF::Assign(long) | ?Assign@mmFrictionFF@@QAEHJ@Z
    0x4DAA10 | public: virtual int __thiscall mmFrictionFF::Play(void) | ?Play@mmFrictionFF@@UAEHXZ
    0x4DAA70 | public: virtual int __thiscall mmFrictionFF::Stop(void) | ?Stop@mmFrictionFF@@UAEHXZ
*/

#include "hooking.h"

struct mmFrictionFF
{
public:
    // mmFrictionFF::`vftable' @ 0x5947C8

    // 0x4DA940 | ?Assign@mmFrictionFF@@QAEHJ@Z
    inline int32_t Assign(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmFrictionFF, int32_t>>(0x4DA940, this, arg1);
    }

    // 0x4DA800 | ?Init@mmFrictionFF@@UAEHPAUIDirectInputDevice2A@@@Z
    virtual inline int32_t Init(struct IDirectInputDevice2A* arg1)
    {
        return stub<member_func_t<int32_t, mmFrictionFF, struct IDirectInputDevice2A*>>(0x4DA800, this, arg1);
    }

    // 0x4DAA10 | ?Play@mmFrictionFF@@UAEHXZ
    virtual inline int32_t Play()
    {
        return stub<member_func_t<int32_t, mmFrictionFF>>(0x4DAA10, this);
    }

    // 0x4DAA70 | ?Stop@mmFrictionFF@@UAEHXZ
    virtual inline int32_t Stop()
    {
        return stub<member_func_t<int32_t, mmFrictionFF>>(0x4DAA70, this);
    }

    // 0x4DA910 | ?SetValues@mmFrictionFF@@UAEHMM@Z
    virtual inline int32_t SetValues(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, mmFrictionFF, float, float>>(0x4DA910, this, arg1, arg2);
    }
};
