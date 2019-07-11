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
    mminput:road

    0x4DA520 | public: virtual int __thiscall mmRoadFF::Init(struct IDirectInputDevice2A *) | ?Init@mmRoadFF@@UAEHPAUIDirectInputDevice2A@@@Z
    0x4DA620 | public: virtual int __thiscall mmRoadFF::SetValues(float,float) | ?SetValues@mmRoadFF@@UAEHMM@Z
    0x4DA650 | public: int __thiscall mmRoadFF::Assign(long,long) | ?Assign@mmRoadFF@@QAEHJJ@Z
    0x4DA740 | public: virtual int __thiscall mmRoadFF::Play(void) | ?Play@mmRoadFF@@UAEHXZ
    0x4DA7B0 | public: virtual int __thiscall mmRoadFF::Stop(void) | ?Stop@mmRoadFF@@UAEHXZ
*/

#include "hooking.h"

struct mmRoadFF
{
public:
    // mmRoadFF::`vftable' @ 0x5947F8

    // 0x4DA650 | ?Assign@mmRoadFF@@QAEHJJ@Z
    inline int32_t Assign(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmRoadFF, int32_t, int32_t>>(0x4DA650, this, arg1, arg2);
    }

    // 0x4DA520 | ?Init@mmRoadFF@@UAEHPAUIDirectInputDevice2A@@@Z
    virtual inline int32_t Init(struct IDirectInputDevice2A* arg1)
    {
        return stub<member_func_t<int32_t, mmRoadFF, struct IDirectInputDevice2A*>>(0x4DA520, this, arg1);
    }

    // 0x4DA740 | ?Play@mmRoadFF@@UAEHXZ
    virtual inline int32_t Play()
    {
        return stub<member_func_t<int32_t, mmRoadFF>>(0x4DA740, this);
    }

    // 0x4DA7B0 | ?Stop@mmRoadFF@@UAEHXZ
    virtual inline int32_t Stop()
    {
        return stub<member_func_t<int32_t, mmRoadFF>>(0x4DA7B0, this);
    }

    // 0x4DA620 | ?SetValues@mmRoadFF@@UAEHMM@Z
    virtual inline int32_t SetValues(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, mmRoadFF, float, float>>(0x4DA620, this, arg1, arg2);
    }
};
