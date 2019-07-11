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
    mmai:aiGoalRegainRail

    0x463810 | public: __thiscall aiGoalRegainRail::aiGoalRegainRail(class aiRailSet *,class aiVehicleSpline *) | ??0aiGoalRegainRail@@QAE@PAVaiRailSet@@PAVaiVehicleSpline@@@Z
    0x463840 | public: __thiscall aiGoalRegainRail::~aiGoalRegainRail(void) | ??1aiGoalRegainRail@@QAE@XZ
    0x463850 | public: virtual void __thiscall aiGoalRegainRail::Init(void) | ?Init@aiGoalRegainRail@@UAEXXZ
    0x463870 | public: virtual void __thiscall aiGoalRegainRail::Reset(void) | ?Reset@aiGoalRegainRail@@UAEXXZ
    0x463F20 | public: virtual void __thiscall aiGoalRegainRail::Update(void) | ?Update@aiGoalRegainRail@@UAEXXZ
    0x464030 | public: virtual int __thiscall aiGoalRegainRail::Context(void) | ?Context@aiGoalRegainRail@@UAEHXZ
    0x464050 | public: virtual int __thiscall aiGoalRegainRail::Priority(void) | ?Priority@aiGoalRegainRail@@UAEHXZ
    0x464060 | public: void __thiscall aiGoalRegainRail::Dump(void) | ?Dump@aiGoalRegainRail@@QAEXXZ
    0x590DB8 | const aiGoalRegainRail::`vftable' | ??_7aiGoalRegainRail@@6B@
*/

#include "hooking.h"

struct aiGoalRegainRail : aiGoal
{
public:
    // aiGoalRegainRail::`vftable' @ 0x590DB8

    // 0x463810 | ??0aiGoalRegainRail@@QAE@PAVaiRailSet@@PAVaiVehicleSpline@@@Z
    inline aiGoalRegainRail(class aiRailSet* arg1, class aiVehicleSpline* arg2)
    {
        stub<member_func_t<void, aiGoalRegainRail, class aiRailSet*, class aiVehicleSpline*>>(
            0x463810, this, arg1, arg2);
    }

    // 0x463840 | ??1aiGoalRegainRail@@QAE@XZ
    inline ~aiGoalRegainRail()
    {
        stub<member_func_t<void, aiGoalRegainRail>>(0x463840, this);
    }

    // 0x464060 | ?Dump@aiGoalRegainRail@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiGoalRegainRail>>(0x464060, this);
    }

    // 0x463850 | ?Init@aiGoalRegainRail@@UAEXXZ
    inline void Init() override
    {
        return stub<member_func_t<void, aiGoalRegainRail>>(0x463850, this);
    }

    // 0x463870 | ?Reset@aiGoalRegainRail@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiGoalRegainRail>>(0x463870, this);
    }

    // 0x464030 | ?Context@aiGoalRegainRail@@UAEHXZ
    inline int32_t Context() override
    {
        return stub<member_func_t<int32_t, aiGoalRegainRail>>(0x464030, this);
    }

    // 0x464050 | ?Priority@aiGoalRegainRail@@UAEHXZ
    inline int32_t Priority() override
    {
        return stub<member_func_t<int32_t, aiGoalRegainRail>>(0x464050, this);
    }

    // 0x463F20 | ?Update@aiGoalRegainRail@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiGoalRegainRail>>(0x463F20, this);
    }
};
