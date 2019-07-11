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

// mmai:aiRailSet

#include "hooking.h"

// 0x452AC0 | ??D@YA?AVVector3@@MABV0@@Z
inline class Vector3 operator*(float arg1, class Vector3 const& arg2)
{
    return stub<cdecl_t<class Vector3, float, class Vector3 const&>>(0x452AC0, arg1, arg2);
}

class aiRailSet
{
public:
    // 0x44D630 | ??0aiRailSet@@QAE@XZ
    inline aiRailSet()
    {
        stub<member_func_t<void, aiRailSet>>(0x44D630, this);
    }

    // 0x44D730 | ??1aiRailSet@@QAE@XZ
    inline ~aiRailSet()
    {
        stub<member_func_t<void, aiRailSet>>(0x44D730, this);
    }

    // 0x44D740 | ?CalcRailPosition@aiRailSet@@QAEXAAVVector3@@M@Z
    inline void CalcRailPosition(class Vector3& arg1, float arg2)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, float>>(0x44D740, this, arg1, arg2);
    }

    // 0x44E140 | ?CalcCopRailPosition@aiRailSet@@QAEHAAVVector3@@0MM@Z
    inline int32_t CalcCopRailPosition(class Vector3& arg1, class Vector3& arg2, float arg3, float arg4)
    {
        return stub<member_func_t<int32_t, aiRailSet, class Vector3&, class Vector3&, float, float>>(
            0x44E140, this, arg1, arg2, arg3, arg4);
    }

    // 0x450590 | ?CalcRailState@aiRailSet@@QAEHM@Z
    inline int32_t CalcRailState(float arg1)
    {
        return stub<member_func_t<int32_t, aiRailSet, float>>(0x450590, this, arg1);
    }

    // 0x450BA0 | ?CalcRailLength@aiRailSet@@QAEMXZ
    inline float CalcRailLength()
    {
        return stub<member_func_t<float, aiRailSet>>(0x450BA0, this);
    }

    // 0x451090 | ?CalcTurnIntersection@aiRailSet@@QAEXAAVVector3@@HPAVaiPath@@1@Z
    inline void CalcTurnIntersection(class Vector3& arg1, int32_t arg2, class aiPath* arg3, class aiPath* arg4)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, int32_t, class aiPath*, class aiPath*>>(
            0x451090, this, arg1, arg2, arg3, arg4);
    }

    // 0x4514A0 | ?DrawTurn@aiRailSet@@QAEXM@Z
    inline void DrawTurn(float arg1)
    {
        return stub<member_func_t<void, aiRailSet, float>>(0x4514A0, this, arg1);
    }

    // 0x4514B0 | ?CalcRailPosOrient@aiRailSet@@QAEXAAVVector3@@0M@Z
    inline void CalcRailPosOrient(class Vector3& arg1, class Vector3& arg2, float arg3)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, float>>(
            0x4514B0, this, arg1, arg2, arg3);
    }

    // 0x452050 | ?SolveNextLane@aiRailSet@@QAEXXZ
    inline void SolveNextLane()
    {
        return stub<member_func_t<void, aiRailSet>>(0x452050, this);
    }

    // 0x4520D0 | ?SolveTurnType@aiRailSet@@QAEHPAVaiPath@@0@Z
    inline int32_t SolveTurnType(class aiPath* arg1, class aiPath* arg2)
    {
        return stub<member_func_t<int32_t, aiRailSet, class aiPath*, class aiPath*>>(0x4520D0, this, arg1, arg2);
    }

    // 0x452290 | ?CalcXZPosition@aiRailSet@@QAEXAAVVector3@@0000M@Z
    inline void CalcXZPosition(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4,
        class Vector3& arg5, float arg6)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
            class Vector3&, float>>(0x452290, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4523A0 | ?CalcXZDirection@aiRailSet@@QAEXAAVVector3@@0000M@Z
    inline void CalcXZDirection(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4,
        class Vector3& arg5, float arg6)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
            class Vector3&, float>>(0x4523A0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4524C0 | ?CalcXZPosOrient@aiRailSet@@QAEXAAVVector3@@00000M@Z
    inline void CalcXZPosOrient(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4,
        class Vector3& arg5, class Vector3& arg6, float arg7)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
            class Vector3&, class Vector3&, float>>(0x4524C0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x452600 | ?ComputeXZCurve@aiRailSet@@QAEXAAVVector3@@000@Z
    inline void ComputeXZCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
            0x452600, this, arg1, arg2, arg3, arg4);
    }

    // 0x4526B0 | ?ComputeXZCurve@aiRailSet@@QAEXAAVVector3@@000AAVVector4@@1@Z
    inline void ComputeXZCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4,
        class Vector4& arg5, class Vector4& arg6)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
            class Vector4&, class Vector4&>>(0x4526B0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x452750 | ?SolveXZCurve@aiRailSet@@QAEXAAVVector3@@0M@Z
    inline void SolveXZCurve(class Vector3& arg1, class Vector3& arg2, float arg3)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, float>>(
            0x452750, this, arg1, arg2, arg3);
    }

    // 0x4527E0 | ?SolveXZPosition@aiRailSet@@QAEXAAVVector3@@M@Z
    inline void SolveXZPosition(class Vector3& arg1, float arg2)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, float>>(0x4527E0, this, arg1, arg2);
    }

    // 0x452820 | ?Dump@aiRailSet@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiRailSet>>(0x452820, this);
    }
};
