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

// mmai:aiGoalChase

#include "hooking.h"

struct aiGoalChase : aiGoal
{
public:
    // aiGoalChase::`vftable' @ 0x590CB0

    // 0x458900 | ??0aiGoalChase@@QAE@PAVaiVehiclePolice@@PAVaiRailSet@@PAPAVmmCar@@PAFPAVVector3@@3@Z
    inline aiGoalChase(class aiVehiclePolice* arg1, class aiRailSet* arg2, class mmCar** arg3, int16_t* arg4,
        class Vector3* arg5, int16_t* arg6)
    {
        stub<member_func_t<void, aiGoalChase, class aiVehiclePolice*, class aiRailSet*, class mmCar**, int16_t*,
            class Vector3*, int16_t*>>(0x458900, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4589B0 | ??1aiGoalChase@@QAE@XZ
    inline ~aiGoalChase()
    {
        stub<member_func_t<void, aiGoalChase>>(0x4589B0, this);
    }

    // 0x459050 | ?Fov@aiGoalChase@@AAEHPAVmmCar@@@Z
    inline int32_t Fov(class mmCar* arg1)
    {
        return stub<member_func_t<int32_t, aiGoalChase, class mmCar*>>(0x459050, this, arg1);
    }

    // 0x4591D0 | ?Speeding@aiGoalChase@@AAEHPAVmmCar@@@Z
    inline int32_t Speeding(class mmCar* arg1)
    {
        return stub<member_func_t<int32_t, aiGoalChase, class mmCar*>>(0x4591D0, this, arg1);
    }

    // 0x459220 | ?Collision@aiGoalChase@@AAEHPAVmmCar@@@Z
    inline int32_t Collision(class mmCar* arg1)
    {
        return stub<member_func_t<int32_t, aiGoalChase, class mmCar*>>(0x459220, this, arg1);
    }

    // 0x459240 | ?HitMe@aiGoalChase@@AAEHPAVmmCar@@@Z
    inline int32_t HitMe(class mmCar* arg1)
    {
        return stub<member_func_t<int32_t, aiGoalChase, class mmCar*>>(0x459240, this, arg1);
    }

    // 0x459260 | ?Stopped@aiGoalChase@@AAEHPAVmmCar@@@Z
    inline int32_t Stopped(class mmCar* arg1)
    {
        return stub<member_func_t<int32_t, aiGoalChase, class mmCar*>>(0x459260, this, arg1);
    }

    // 0x459290 | ?IsPerpACop@aiGoalChase@@AAEHPAVmmCar@@@Z
    inline int32_t IsPerpACop(class mmCar* arg1)
    {
        return stub<member_func_t<int32_t, aiGoalChase, class mmCar*>>(0x459290, this, arg1);
    }

    // 0x4592B0 | ?OffRoad@aiGoalChase@@AAEHPAVmmCar@@@Z
    inline int32_t OffRoad(class mmCar* arg1)
    {
        return stub<member_func_t<int32_t, aiGoalChase, class mmCar*>>(0x4592B0, this, arg1);
    }

    // 0x459FF0 | ?PlanRoute@aiGoalChase@@AAEHXZ
    inline int32_t PlanRoute()
    {
        return stub<member_func_t<int32_t, aiGoalChase>>(0x459FF0, this);
    }

    // 0x45A090 | ?LocatePerpFromRoad@aiGoalChase@@AAEHPAVaiPath@@PAPAV2@1@Z
    inline int32_t LocatePerpFromRoad(class aiPath* arg1, class aiPath** arg2, class aiPath** arg3)
    {
        return stub<member_func_t<int32_t, aiGoalChase, class aiPath*, class aiPath**, class aiPath**>>(
            0x45A090, this, arg1, arg2, arg3);
    }

    // 0x45A760 | ?LocatePerpFromInt@aiGoalChase@@AAEHPAVaiIntersection@@PAPAVaiPath@@@Z
    inline int32_t LocatePerpFromInt(class aiIntersection* arg1, class aiPath** arg2)
    {
        return stub<member_func_t<int32_t, aiGoalChase, class aiIntersection*, class aiPath**>>(
            0x45A760, this, arg1, arg2);
    }

    // 0x45A9C0 | ?FindPerp@aiGoalChase@@AAEHHHPAVaiPath@@@Z
    inline int32_t FindPerp(int32_t arg1, int32_t arg2, class aiPath* arg3)
    {
        return stub<member_func_t<int32_t, aiGoalChase, int32_t, int32_t, class aiPath*>>(
            0x45A9C0, this, arg1, arg2, arg3);
    }

    // 0x45AAF0 | ?DetectCopCollision@aiGoalChase@@AAEPAVaiVehiclePolice@@XZ
    inline class aiVehiclePolice* DetectCopCollision()
    {
        return stub<member_func_t<class aiVehiclePolice*, aiGoalChase>>(0x45AAF0, this);
    }

    // 0x45AC30 | ?AvoidCopCollision@aiGoalChase@@AAEXPAVaiVehiclePolice@@@Z
    inline void AvoidCopCollision(class aiVehiclePolice* arg1)
    {
        return stub<member_func_t<void, aiGoalChase, class aiVehiclePolice*>>(0x45AC30, this, arg1);
    }

    // 0x45AF00 | ?Follow@aiGoalChase@@AAEXXZ
    inline void Follow()
    {
        return stub<member_func_t<void, aiGoalChase>>(0x45AF00, this);
    }

    // 0x45B030 | ?CalcSpeed@aiGoalChase@@AAEXM@Z
    inline void CalcSpeed(float arg1)
    {
        return stub<member_func_t<void, aiGoalChase, float>>(0x45B030, this, arg1);
    }

    // 0x45B7B0 | ?CloseInRoad@aiGoalChase@@AAEXXZ
    inline void CloseInRoad()
    {
        return stub<member_func_t<void, aiGoalChase>>(0x45B7B0, this);
    }

    // 0x45BC90 | ?CloseInOpenArea@aiGoalChase@@AAEXXZ
    inline void CloseInOpenArea()
    {
        return stub<member_func_t<void, aiGoalChase>>(0x45BC90, this);
    }

    // 0x45C170 | ?Barricade@aiGoalChase@@AAEXXZ
    inline void Barricade()
    {
        return stub<member_func_t<void, aiGoalChase>>(0x45C170, this);
    }

    // 0x45C600 | ?Block@aiGoalChase@@AAEXXZ
    inline void Block()
    {
        return stub<member_func_t<void, aiGoalChase>>(0x45C600, this);
    }

    // 0x45CA10 | ?Push@aiGoalChase@@AAEXXZ
    inline void Push()
    {
        return stub<member_func_t<void, aiGoalChase>>(0x45CA10, this);
    }

    // 0x45CC00 | ?DetectAmbientCollision@aiGoalChase@@AAEHPAH@Z
    inline int32_t DetectAmbientCollision(int32_t* arg1)
    {
        return stub<member_func_t<int32_t, aiGoalChase, int32_t*>>(0x45CC00, this, arg1);
    }

    // 0x45DB10 | ?AddToBlockedRange@aiGoalChase@@AAEXMMM@Z
    inline void AddToBlockedRange(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, aiGoalChase, float, float, float>>(0x45DB10, this, arg1, arg2, arg3);
    }

    // 0x45DCB0 | ?AvoidAmbientCollision@aiGoalChase@@AAEXH@Z
    inline void AvoidAmbientCollision(int32_t arg1)
    {
        return stub<member_func_t<void, aiGoalChase, int32_t>>(0x45DCB0, this, arg1);
    }

    // 0x45DF10 | ?ProcessCollision@aiGoalChase@@AAEXH@Z
    inline void ProcessCollision(int32_t arg1)
    {
        return stub<member_func_t<void, aiGoalChase, int32_t>>(0x45DF10, this, arg1);
    }

    // 0x45E1D0 | ?Dump@aiGoalChase@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiGoalChase>>(0x45E1D0, this);
    }

    // 0x458A00 | ?Init@aiGoalChase@@UAEXXZ
    inline void Init() override
    {
        return stub<member_func_t<void, aiGoalChase>>(0x458A00, this);
    }

    // 0x458B10 | ?Reset@aiGoalChase@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiGoalChase>>(0x458B10, this);
    }

    // 0x458CC0 | ?Context@aiGoalChase@@UAEHXZ
    inline int32_t Context() override
    {
        return stub<member_func_t<int32_t, aiGoalChase>>(0x458CC0, this);
    }

    // 0x459370 | ?Priority@aiGoalChase@@UAEHXZ
    inline int32_t Priority() override
    {
        return stub<member_func_t<int32_t, aiGoalChase>>(0x459370, this);
    }

    // 0x459380 | ?Update@aiGoalChase@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiGoalChase>>(0x459380, this);
    }
};
