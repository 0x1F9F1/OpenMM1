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

// mmgame:wpobject

#include "hooking.h"

struct mmWaypointObject : asNode
{
public:
    // mmWaypointObject::`vftable' @ 0x58FF98

    // 0x4260B0 | ??0mmWaypointObject@@QAE@AAVVector4@@PADHMHM@Z
    inline mmWaypointObject(class Vector4& arg1, char* arg2, int32_t arg3, float arg4, int32_t arg5, float arg6)
    {
        stub<member_func_t<void, mmWaypointObject, class Vector4&, char*, int32_t, float, int32_t, float>>(
            0x4260B0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x426280 | ?Activate@mmWaypointObject@@QAEXXZ
    inline void Activate()
    {
        return stub<member_func_t<void, mmWaypointObject>>(0x426280, this);
    }

    // 0x426290 | ?Deactivate@mmWaypointObject@@QAEXXZ
    inline void Deactivate()
    {
        return stub<member_func_t<void, mmWaypointObject>>(0x426290, this);
    }

    // 0x4262A0 | ?SetHeading@mmWaypointObject@@QAEXM@Z
    inline void SetHeading(float arg1)
    {
        return stub<member_func_t<void, mmWaypointObject, float>>(0x4262A0, this, arg1);
    }

    // 0x426310 | ?Move@mmWaypointObject@@QAEXXZ
    inline void Move()
    {
        return stub<member_func_t<void, mmWaypointObject>>(0x426310, this);
    }

    // 0x426250 | ??1mmWaypointObject@@UAE@XZ
    inline ~mmWaypointObject() override
    {
        stub<member_func_t<void, mmWaypointObject>>(0x426250, this);
    }

    // 0x426270 | ?Update@mmWaypointObject@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmWaypointObject>>(0x426270, this);
    }

    // 0x426260 | ?Reset@mmWaypointObject@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmWaypointObject>>(0x426260, this);
    }
};
