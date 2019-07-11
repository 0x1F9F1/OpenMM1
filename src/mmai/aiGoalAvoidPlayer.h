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

// mmai:aiGoalAvoidPlayer

#include "hooking.h"

struct aiGoalAvoidPlayer : aiGoal
{
public:
    // aiGoalAvoidPlayer::`vftable' @ 0x590DA0

    // 0x463170 | ??0aiGoalAvoidPlayer@@QAE@PAVaiRailSet@@PAVaiVehicleAmbient@@@Z
    inline aiGoalAvoidPlayer(class aiRailSet* arg1, class aiVehicleAmbient* arg2)
    {
        stub<member_func_t<void, aiGoalAvoidPlayer, class aiRailSet*, class aiVehicleAmbient*>>(
            0x463170, this, arg1, arg2);
    }

    // 0x4631A0 | ??1aiGoalAvoidPlayer@@QAE@XZ
    inline ~aiGoalAvoidPlayer()
    {
        stub<member_func_t<void, aiGoalAvoidPlayer>>(0x4631A0, this);
    }

    // 0x4634F0 | ?AvoidPlayer@aiGoalAvoidPlayer@@AAEXXZ
    inline void AvoidPlayer()
    {
        return stub<member_func_t<void, aiGoalAvoidPlayer>>(0x4634F0, this);
    }

    // 0x463790 | ?Dump@aiGoalAvoidPlayer@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiGoalAvoidPlayer>>(0x463790, this);
    }

    // 0x4631B0 | ?Init@aiGoalAvoidPlayer@@UAEXXZ
    inline void Init() override
    {
        return stub<member_func_t<void, aiGoalAvoidPlayer>>(0x4631B0, this);
    }

    // 0x4631C0 | ?Reset@aiGoalAvoidPlayer@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiGoalAvoidPlayer>>(0x4631C0, this);
    }

    // 0x463760 | ?Context@aiGoalAvoidPlayer@@UAEHXZ
    inline int32_t Context() override
    {
        return stub<member_func_t<int32_t, aiGoalAvoidPlayer>>(0x463760, this);
    }

    // 0x463780 | ?Priority@aiGoalAvoidPlayer@@UAEHXZ
    inline int32_t Priority() override
    {
        return stub<member_func_t<int32_t, aiGoalAvoidPlayer>>(0x463780, this);
    }

    // 0x463320 | ?Update@aiGoalAvoidPlayer@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiGoalAvoidPlayer>>(0x463320, this);
    }
};
