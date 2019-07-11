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
    mmai:aiRailSet

    0x44D630 | public: __thiscall aiRailSet::aiRailSet(void) | ??0aiRailSet@@QAE@XZ
    0x44D730 | public: __thiscall aiRailSet::~aiRailSet(void) | ??1aiRailSet@@QAE@XZ
    0x44D740 | public: void __thiscall aiRailSet::CalcRailPosition(class Vector3 &,float) | ?CalcRailPosition@aiRailSet@@QAEXAAVVector3@@M@Z
    0x44E140 | public: int __thiscall aiRailSet::CalcCopRailPosition(class Vector3 &,class Vector3 &,float,float) | ?CalcCopRailPosition@aiRailSet@@QAEHAAVVector3@@0MM@Z
    0x450590 | public: int __thiscall aiRailSet::CalcRailState(float) | ?CalcRailState@aiRailSet@@QAEHM@Z
    0x450BA0 | public: float __thiscall aiRailSet::CalcRailLength(void) | ?CalcRailLength@aiRailSet@@QAEMXZ
    0x451090 | public: void __thiscall aiRailSet::CalcTurnIntersection(class Vector3 &,int,class aiPath *,class aiPath *) | ?CalcTurnIntersection@aiRailSet@@QAEXAAVVector3@@HPAVaiPath@@1@Z
    0x4514A0 | public: void __thiscall aiRailSet::DrawTurn(float) | ?DrawTurn@aiRailSet@@QAEXM@Z
    0x4514B0 | public: void __thiscall aiRailSet::CalcRailPosOrient(class Vector3 &,class Vector3 &,float) | ?CalcRailPosOrient@aiRailSet@@QAEXAAVVector3@@0M@Z
    0x452050 | public: void __thiscall aiRailSet::SolveNextLane(void) | ?SolveNextLane@aiRailSet@@QAEXXZ
    0x4520D0 | public: int __thiscall aiRailSet::SolveTurnType(class aiPath *,class aiPath *) | ?SolveTurnType@aiRailSet@@QAEHPAVaiPath@@0@Z
    0x452290 | public: void __thiscall aiRailSet::CalcXZPosition(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,float) | ?CalcXZPosition@aiRailSet@@QAEXAAVVector3@@0000M@Z
    0x4523A0 | public: void __thiscall aiRailSet::CalcXZDirection(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,float) | ?CalcXZDirection@aiRailSet@@QAEXAAVVector3@@0000M@Z
    0x4524C0 | public: void __thiscall aiRailSet::CalcXZPosOrient(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,float) | ?CalcXZPosOrient@aiRailSet@@QAEXAAVVector3@@00000M@Z
    0x452600 | public: void __thiscall aiRailSet::ComputeXZCurve(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &) | ?ComputeXZCurve@aiRailSet@@QAEXAAVVector3@@000@Z
    0x4526B0 | public: void __thiscall aiRailSet::ComputeXZCurve(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector4 &,class Vector4 &) | ?ComputeXZCurve@aiRailSet@@QAEXAAVVector3@@000AAVVector4@@1@Z
    0x452750 | public: void __thiscall aiRailSet::SolveXZCurve(class Vector3 &,class Vector3 &,float) | ?SolveXZCurve@aiRailSet@@QAEXAAVVector3@@0M@Z
    0x4527E0 | public: void __thiscall aiRailSet::SolveXZPosition(class Vector3 &,float) | ?SolveXZPosition@aiRailSet@@QAEXAAVVector3@@M@Z
    0x452820 | public: void __thiscall aiRailSet::Dump(void) | ?Dump@aiRailSet@@QAEXXZ
    0x452A60 | public: class Vector3 __thiscall Vector3::operator+(class Vector3 const &) const | ??HVector3@@QBE?AV0@ABV0@@Z
    0x452A90 | public: class Vector3 __thiscall Vector3::operator*(float) const | ??DVector3@@QBE?AV0@M@Z
    0x452AC0 | class Vector3 __cdecl operator*(float,class Vector3 const &) | ??D@YA?AVVector3@@MABV0@@Z
    0x452B00 | public: float __thiscall Vector3::operator^(class Vector3 const &) const | ??TVector3@@QBEMABV0@@Z
    0x452B30 | public: class Vector3 __thiscall Vector3::operator-(void) const | ??GVector3@@QBE?AV0@XZ
    0x452B50 | public: class Vector3 * __thiscall aiPath::LBoundary(int) | ?LBoundary@aiPath@@QAEPAVVector3@@H@Z
*/

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
