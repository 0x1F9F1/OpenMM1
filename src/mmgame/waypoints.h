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

// mmgame:waypoints

#include "hooking.h"

// 0x609AF0 | ?Size@@3VVector3@@A
inline extern_var(0x609AF0, class Vector3, Size);

class mmWaypoints : asNode
{
public:
    // mmWaypoints::`vftable' @ 0x5900E0

    // 0x428520 | ??0mmWaypoints@@QAE@XZ
    inline mmWaypoints()
    {
        stub<member_func_t<void, mmWaypoints>>(0x428520, this);
    }

    // 0x428930 | ?BlitzRemove@mmWaypoints@@QAEHH@Z
    inline int32_t BlitzRemove(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmWaypoints, int32_t>>(0x428930, this, arg1);
    }

    // 0x4289B0 | ?Init@mmWaypoints@@QAEHPAVmmPlayer@@PADHHHH@Z
    inline int32_t Init(class mmPlayer* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
    {
        return stub<member_func_t<int32_t, mmWaypoints, class mmPlayer*, char*, int32_t, int32_t, int32_t, int32_t>>(
            0x4289B0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x428AE0 | ?GetStartAngle@mmWaypoints@@QAEMXZ
    inline float GetStartAngle()
    {
        return stub<member_func_t<float, mmWaypoints>>(0x428AE0, this);
    }

    // 0x428C00 | ?LoadCSV@mmWaypoints@@QAEHPADH@Z
    inline int32_t LoadCSV(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmWaypoints, char*, int32_t>>(0x428C00, this, arg1, arg2);
    }

    // 0x429900 | ?CalculateGatePoints@mmWaypoints@@QAEXVVector3@@MMPAVVector2@@1@Z
    inline void CalculateGatePoints(
        class Vector3 arg1, float arg2, float arg3, class Vector2* arg4, class Vector2* arg5)
    {
        return stub<member_func_t<void, mmWaypoints, class Vector3, float, float, class Vector2*, class Vector2*>>(
            0x429900, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x429D10 | ?DeactivateFinish@mmWaypoints@@QAEXXZ
    inline void DeactivateFinish()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x429D10, this);
    }

    // 0x429E20 | ?GetStart@mmWaypoints@@QAEXAAVVector3@@@Z
    inline void GetStart(class Vector3& arg1)
    {
        return stub<member_func_t<void, mmWaypoints, class Vector3&>>(0x429E20, this, arg1);
    }

    // 0x429E60 | ?GetWaypoint@mmWaypoints@@QAEXHAAVVector3@@@Z
    inline void GetWaypoint(int32_t arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, mmWaypoints, int32_t, class Vector3&>>(0x429E60, this, arg1, arg2);
    }

    // 0x429EB0 | ?GetHeading@mmWaypoints@@QAEMH@Z
    inline float GetHeading(int32_t arg1)
    {
        return stub<member_func_t<float, mmWaypoints, int32_t>>(0x429EB0, this, arg1);
    }

    // 0x429EE0 | ?GenerateHitRooms@mmWaypoints@@QAEXXZ
    inline void GenerateHitRooms()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x429EE0, this);
    }

    // 0x429F40 | ?GetHitRoom@mmWaypoints@@QAEHH@Z
    inline int32_t GetHitRoom(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmWaypoints, int32_t>>(0x429F40, this, arg1);
    }

    // 0x429F60 | ?SetArrow@mmWaypoints@@QAEXXZ
    inline void SetArrow()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x429F60, this);
    }

    // 0x429F80 | ?UpdateWPHUD@mmWaypoints@@QAEXXZ
    inline void UpdateWPHUD()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x429F80, this);
    }

    // 0x429FF0 | ?ResetAllTags@mmWaypoints@@QAEXXZ
    inline void ResetAllTags()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x429FF0, this);
    }

    // 0x42A030 | ?GetClosestWaypoint@mmWaypoints@@QAEXXZ
    inline void GetClosestWaypoint()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x42A030, this);
    }

    // 0x42A110 | ?CycleCurrentWaypoint@mmWaypoints@@QAEXH@Z
    inline void CycleCurrentWaypoint(int32_t arg1)
    {
        return stub<member_func_t<void, mmWaypoints, int32_t>>(0x42A110, this, arg1);
    }

    // 0x42A180 | ?GetNextWaypoint@mmWaypoints@@QAEXXZ
    inline void GetNextWaypoint()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x42A180, this);
    }

    // 0x42A190 | ?GetLastWaypoint@mmWaypoints@@QAEXXZ
    inline void GetLastWaypoint()
    {
        return stub<member_func_t<void, mmWaypoints>>(0x42A190, this);
    }

    // 0x42A1A0 | ?SetCurrentGoals@mmWaypoints@@QAEXH@Z
    inline void SetCurrentGoals(int32_t arg1)
    {
        return stub<member_func_t<void, mmWaypoints, int32_t>>(0x42A1A0, this, arg1);
    }

    // 0x42A1E0 | ?AIWPHit@mmWaypoints@@QAEHHHVMatrix34@@VVector3@@M@Z
    inline int32_t AIWPHit(int32_t arg1, int32_t arg2, class Matrix34 arg3, class Vector3 arg4, float arg5)
    {
        return stub<member_func_t<int32_t, mmWaypoints, int32_t, int32_t, class Matrix34, class Vector3, float>>(
            0x42A1E0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x42A4A0 | ?AnyAIWPHit@mmWaypoints@@QAEHAAIHVMatrix34@@VVector3@@M@Z
    inline int32_t AnyAIWPHit(uint32_t& arg1, int32_t arg2, class Matrix34 arg3, class Vector3 arg4, float arg5)
    {
        return stub<member_func_t<int32_t, mmWaypoints, uint32_t&, int32_t, class Matrix34, class Vector3, float>>(
            0x42A4A0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x42A800 | ?WPHit@mmWaypoints@@QAEHHVVector3@@HH@Z
    inline int32_t WPHit(int32_t arg1, class Vector3 arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<int32_t, mmWaypoints, int32_t, class Vector3, int32_t, int32_t>>(
            0x42A800, this, arg1, arg2, arg3, arg4);
    }

    // 0x42AA80 | ?AnyWPHits@mmWaypoints@@QAEHH@Z
    inline int32_t AnyWPHits(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmWaypoints, int32_t>>(0x42AA80, this, arg1);
    }

    // 0x42AD30 | ?LineIntersect@mmWaypoints@@QAEHVVector2@@000M@Z
    inline int32_t LineIntersect(
        class Vector2 arg1, class Vector2 arg2, class Vector2 arg3, class Vector2 arg4, float arg5)
    {
        return stub<
            member_func_t<int32_t, mmWaypoints, class Vector2, class Vector2, class Vector2, class Vector2, float>>(
            0x42AD30, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x42AF40 | ?ClearWaypoint@mmWaypoints@@QAEXH@Z
    inline void ClearWaypoint(int32_t arg1)
    {
        return stub<member_func_t<void, mmWaypoints, int32_t>>(0x42AF40, this, arg1);
    }

    // 0x42B000 | ?DisplayHUDMessage@mmWaypoints@@QAEXHH@Z
    inline void DisplayHUDMessage(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmWaypoints, int32_t, int32_t>>(0x42B000, this, arg1, arg2);
    }

    // 0x428B00 | ??1mmWaypoints@@UAE@XZ
    inline ~mmWaypoints() override
    {
        stub<member_func_t<void, mmWaypoints>>(0x428B00, this);
    }

    // 0x4298F0 | ?Cull@mmWaypoints@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmWaypoints>>(0x4298F0, this);
    }

    // 0x429980 | ?Update@mmWaypoints@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmWaypoints>>(0x429980, this);
    }

    // 0x429D30 | ?Reset@mmWaypoints@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmWaypoints>>(0x429D30, this);
    }
};

struct mmGate
{
public:
    // 0x42B150 | ?Init@mmGate@@QAEXVVector2@@0@Z
    inline void Init(class Vector2 arg1, class Vector2 arg2)
    {
        return stub<member_func_t<void, mmGate, class Vector2, class Vector2>>(0x42B150, this, arg1, arg2);
    }

    // 0x42B1D0 | ?LineEq@mmGate@@QAEMMM@Z
    inline float LineEq(float arg1, float arg2)
    {
        return stub<member_func_t<float, mmGate, float, float>>(0x42B1D0, this, arg1, arg2);
    }

    // 0x42B1F0 | ?CloseEnough@mmGate@@QAEHMM@Z
    inline int32_t CloseEnough(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, mmGate, float, float>>(0x42B1F0, this, arg1, arg2);
    }

    // 0x42B230 | ?Check@mmGate@@QAEHVVector2@@0@Z
    inline int32_t Check(class Vector2 arg1, class Vector2 arg2)
    {
        return stub<member_func_t<int32_t, mmGate, class Vector2, class Vector2>>(0x42B230, this, arg1, arg2);
    }
};
