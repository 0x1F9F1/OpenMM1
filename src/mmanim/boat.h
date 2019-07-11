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

// mmanim:boat

#include "hooking.h"

// 0x5B0C78 | ?cb@@3PAMA
inline extern_var(0x5B0C78, float*, cb);

// 0x5B0CB8 | ?GSFDef@@3MA
inline extern_var(0x5B0CB8, float, GSFDef);

// 0x668230 | ?mmBoatMetaClass@@3VMetaClass@@A
inline extern_var(0x668230, class MetaClass, mmBoatMetaClass);

// 0x668258 | ?_Hermite@@3VMatrix44@@A
inline extern_var(0x668258, class Matrix44, _Hermite);

// 0x668298 | ?CatmullBasis@@3VMatrix44@@A
inline extern_var(0x668298, class Matrix44, CatmullBasis);

// 0x4BC860 | ?new_mmBoat@@YAPAXH@Z
inline void* new_mmBoat(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4BC860, arg1);
}

// 0x4BC930 | ?delete_mmBoat@@YAXPAXH@Z
inline void delete_mmBoat(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4BC930, arg1, arg2);
}

struct mmBoat : asNode
{
public:
    // mmBoat::`vftable' @ 0x594198

    // 0x4BBBB0 | ??0mmBoat@@QAE@XZ
    inline mmBoat()
    {
        stub<member_func_t<void, mmBoat>>(0x4BBBB0, this);
    }

    // 0x4BBD00 | ?Init@mmBoat@@QAEXHPAD0PAVVector3@@HHPAM@Z
    inline void Init(int32_t arg1, char* arg2, char* arg3, class Vector3* arg4, int32_t arg5, int32_t arg6, float* arg7)
    {
        return stub<member_func_t<void, mmBoat, int32_t, char*, char*, class Vector3*, int32_t, int32_t, float*>>(
            0x4BBD00, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4BC090 | ?UpdatePathPosition@mmBoat@@QAEXXZ
    inline void UpdatePathPosition()
    {
        return stub<member_func_t<void, mmBoat>>(0x4BC090, this);
    }

    // 0x4BC0E0 | ?SetPathSpeed@mmBoat@@QAEXXZ
    inline void SetPathSpeed()
    {
        return stub<member_func_t<void, mmBoat>>(0x4BC0E0, this);
    }

    // 0x4BC100 | ?SetRock@mmBoat@@QAEXMM@Z
    inline void SetRock(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmBoat, float, float>>(0x4BC100, this, arg1, arg2);
    }

    // 0x4BC130 | ?ReverseCalcPathSpeed@mmBoat@@QAEXXZ
    inline void ReverseCalcPathSpeed()
    {
        return stub<member_func_t<void, mmBoat>>(0x4BC130, this);
    }

    // 0x4BC150 | ?SolvePosition@mmBoat@@QAEXAAVVector3@@AAM@Z
    inline void SolvePosition(class Vector3& arg1, float& arg2)
    {
        return stub<member_func_t<void, mmBoat, class Vector3&, float&>>(0x4BC150, this, arg1, arg2);
    }

    // 0x4BC240 | ?AdjustPhaseOffsets@mmBoat@@QAEXXZ
    inline void AdjustPhaseOffsets()
    {
        return stub<member_func_t<void, mmBoat>>(0x4BC240, this);
    }

    // 0x4BC2C0 | ?AddWidgets@mmBoat@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, mmBoat, class Bank*>>(0x4BC2C0, this, arg1);
    }

    // 0x4BC2D0 | ?CalculateCubics@mmBoat@@QAEXH@Z
    inline void CalculateCubics(int32_t arg1)
    {
        return stub<member_func_t<void, mmBoat, int32_t>>(0x4BC2D0, this, arg1);
    }

    // 0x4BC4E0 | ?SolveVector@mmBoat@@QAEXMAAVVector3@@0@Z
    inline void SolveVector(float arg1, class Vector3& arg2, class Vector3& arg3)
    {
        return stub<member_func_t<void, mmBoat, float, class Vector3&, class Vector3&>>(
            0x4BC4E0, this, arg1, arg2, arg3);
    }

    // 0x4BC650 | ?ComputeXZCurve@mmBoat@@QAEXAAVVector3@@000@Z
    inline void ComputeXZCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
    {
        return stub<member_func_t<void, mmBoat, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
            0x4BC650, this, arg1, arg2, arg3, arg4);
    }

    // 0x4BC740 | ?SolveXZCurve@mmBoat@@QAEXAAVVector3@@0M@Z
    inline void SolveXZCurve(class Vector3& arg1, class Vector3& arg2, float arg3)
    {
        return stub<member_func_t<void, mmBoat, class Vector3&, class Vector3&, float>>(
            0x4BC740, this, arg1, arg2, arg3);
    }

    // 0x4BC810 | ?DeclareFields@mmBoat@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4BC810);
    }

    // 0x4BBC90 | ??1mmBoat@@UAE@XZ
    inline ~mmBoat() override
    {
        stub<member_func_t<void, mmBoat>>(0x4BBC90, this);
    }

    // 0x4BC980 | ?GetClass@mmBoat@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmBoat>>(0x4BC980, this);
    }

    // 0x4BC060 | ?Update@mmBoat@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmBoat>>(0x4BC060, this);
    }

    // 0x4BC000 | ?Reset@mmBoat@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmBoat>>(0x4BC000, this);
    }
};
