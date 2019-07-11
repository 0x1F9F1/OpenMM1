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
    mmai:aiGoalCollision

    0x4640E0 | public: __thiscall aiGoalCollision::aiGoalCollision(class aiRailSet *,class aiVehicleSpline *) | ??0aiGoalCollision@@QAE@PAVaiRailSet@@PAVaiVehicleSpline@@@Z
    0x464110 | public: __thiscall aiGoalCollision::~aiGoalCollision(void) | ??1aiGoalCollision@@QAE@XZ
    0x464120 | public: virtual void __thiscall aiGoalCollision::Init(void) | ?Init@aiGoalCollision@@UAEXXZ
    0x464130 | public: virtual void __thiscall aiGoalCollision::Reset(void) | ?Reset@aiGoalCollision@@UAEXXZ
    0x464140 | public: virtual void __thiscall aiGoalCollision::Update(void) | ?Update@aiGoalCollision@@UAEXXZ
    0x4641C0 | public: virtual int __thiscall aiGoalCollision::Context(void) | ?Context@aiGoalCollision@@UAEHXZ
    0x4641E0 | public: virtual int __thiscall aiGoalCollision::Priority(void) | ?Priority@aiGoalCollision@@UAEHXZ
    0x590DD8 | const aiGoalCollision::`vftable' | ??_7aiGoalCollision@@6B@
*/

#include "hooking.h"

struct aiGoalCollision : aiGoal
{
public:
    // aiGoalCollision::`vftable' @ 0x590DD8

    // 0x4640E0 | ??0aiGoalCollision@@QAE@PAVaiRailSet@@PAVaiVehicleSpline@@@Z
    inline aiGoalCollision(class aiRailSet* arg1, class aiVehicleSpline* arg2)
    {
        stub<member_func_t<void, aiGoalCollision, class aiRailSet*, class aiVehicleSpline*>>(
            0x4640E0, this, arg1, arg2);
    }

    // 0x464110 | ??1aiGoalCollision@@QAE@XZ
    inline ~aiGoalCollision()
    {
        stub<member_func_t<void, aiGoalCollision>>(0x464110, this);
    }

    // 0x464120 | ?Init@aiGoalCollision@@UAEXXZ
    inline void Init() override
    {
        return stub<member_func_t<void, aiGoalCollision>>(0x464120, this);
    }

    // 0x464130 | ?Reset@aiGoalCollision@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiGoalCollision>>(0x464130, this);
    }

    // 0x4641C0 | ?Context@aiGoalCollision@@UAEHXZ
    inline int32_t Context() override
    {
        return stub<member_func_t<int32_t, aiGoalCollision>>(0x4641C0, this);
    }

    // 0x4641E0 | ?Priority@aiGoalCollision@@UAEHXZ
    inline int32_t Priority() override
    {
        return stub<member_func_t<int32_t, aiGoalCollision>>(0x4641E0, this);
    }

    // 0x464140 | ?Update@aiGoalCollision@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiGoalCollision>>(0x464140, this);
    }
};
