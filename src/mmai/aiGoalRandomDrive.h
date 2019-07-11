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

// mmai:aiGoalRandomDrive

#include "hooking.h"

struct aiGoalRandomDrive : aiGoal
{
public:
    // aiGoalRandomDrive::`vftable' @ 0x590B68

    // 0x455440 | ??0aiGoalRandomDrive@@QAE@PAVaiRailSet@@PAVaiVehicleSpline@@@Z
    inline aiGoalRandomDrive(class aiRailSet* arg1, class aiVehicleSpline* arg2)
    {
        stub<member_func_t<void, aiGoalRandomDrive, class aiRailSet*, class aiVehicleSpline*>>(
            0x455440, this, arg1, arg2);
    }

    // 0x455500 | ??1aiGoalRandomDrive@@QAE@XZ
    inline ~aiGoalRandomDrive()
    {
        stub<member_func_t<void, aiGoalRandomDrive>>(0x455500, this);
    }

    // 0x4560D0 | ?SolveVelocity@aiGoalRandomDrive@@AAEXXZ
    inline void SolveVelocity()
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x4560D0, this);
    }

    // 0x456860 | ?OkayToEnterIntersection@aiGoalRandomDrive@@AAEHXZ
    inline int32_t OkayToEnterIntersection()
    {
        return stub<member_func_t<int32_t, aiGoalRandomDrive>>(0x456860, this);
    }

    // 0x456A70 | ?AnyVehiclesComingThisWay@aiGoalRandomDrive@@AAEHXZ
    inline int32_t AnyVehiclesComingThisWay()
    {
        return stub<member_func_t<int32_t, aiGoalRandomDrive>>(0x456A70, this);
    }

    // 0x456C80 | ?AvoidCollision@aiGoalRandomDrive@@AAEXPAVaiVehicleSpline@@M@Z
    inline void AvoidCollision(class aiVehicleSpline* arg1, float arg2)
    {
        return stub<member_func_t<void, aiGoalRandomDrive, class aiVehicleSpline*, float>>(0x456C80, this, arg1, arg2);
    }

    // 0x456EB0 | ?SolvePosition@aiGoalRandomDrive@@QAEXAAVVector3@@M@Z
    inline void SolvePosition(class Vector3& arg1, float arg2)
    {
        return stub<member_func_t<void, aiGoalRandomDrive, class Vector3&, float>>(0x456EB0, this, arg1, arg2);
    }

    // 0x456F00 | ?SolveRailType@aiGoalRandomDrive@@AAEXXZ
    inline void SolveRailType()
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x456F00, this);
    }

    // 0x457D10 | ?SolveLane@aiGoalRandomDrive@@AAEXXZ
    inline void SolveLane()
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x457D10, this);
    }

    // 0x457DF0 | ?ChangeLanes@aiGoalRandomDrive@@AAEXXZ
    inline void ChangeLanes()
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x457DF0, this);
    }

    // 0x4582D0 | ?Dump@aiGoalRandomDrive@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x4582D0, this);
    }

    // 0x455510 | ?Init@aiGoalRandomDrive@@UAEXXZ
    inline void Init() override
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x455510, this);
    }

    // 0x455530 | ?Reset@aiGoalRandomDrive@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x455530, this);
    }

    // 0x4560A0 | ?Context@aiGoalRandomDrive@@UAEHXZ
    inline int32_t Context() override
    {
        return stub<member_func_t<int32_t, aiGoalRandomDrive>>(0x4560A0, this);
    }

    // 0x4560C0 | ?Priority@aiGoalRandomDrive@@UAEHXZ
    inline int32_t Priority() override
    {
        return stub<member_func_t<int32_t, aiGoalRandomDrive>>(0x4560C0, this);
    }

    // 0x455F80 | ?Update@aiGoalRandomDrive@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x455F80, this);
    }
};

struct aiGoal
{
public:
    // aiGoal::`vftable' @ 0x590B80

    // 0x458330 | ??1aiGoal@@QAE@XZ
    inline ~aiGoal()
    {
        stub<member_func_t<void, aiGoal>>(0x458330, this);
    }

    // 0x567350 | __purecall
    virtual inline void Init()
    {
        return stub<member_func_t<void, aiGoal>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline void Reset()
    {
        return stub<member_func_t<void, aiGoal>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline int32_t Context()
    {
        return stub<member_func_t<int32_t, aiGoal>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline int32_t Priority()
    {
        return stub<member_func_t<int32_t, aiGoal>>(0x567350, this);
    }

    // 0x458340 | ?Update@aiGoal@@UAEXXZ
    virtual inline void Update()
    {
        return stub<member_func_t<void, aiGoal>>(0x458340, this);
    }
};
