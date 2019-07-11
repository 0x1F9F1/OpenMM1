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

// mmphysics:inertia

#include "hooking.h"

// 0x4CE790 | ?InertiaAxis@@YAMABVVector3@@0@Z
inline float InertiaAxis(class Vector3 const& arg1, class Vector3 const& arg2)
{
    return stub<cdecl_t<float, class Vector3 const&, class Vector3 const&>>(0x4CE790, arg1, arg2);
}

// 0x4CE7D0 | ?MatrixToAngVelocity@@YA?AVVector3@@ABVMatrix34@@M@Z
inline class Vector3 MatrixToAngVelocity(class Matrix34 const& arg1, float arg2)
{
    return stub<cdecl_t<class Vector3, class Matrix34 const&, float>>(0x4CE7D0, arg1, arg2);
}

// 0x4CEAD0 | ?MatrixToAngVelocity@@YA?AVVector3@@ABVMatrix34@@0M@Z
inline class Vector3 MatrixToAngVelocity(class Matrix34 const& arg1, class Matrix34 const& arg2, float arg3)
{
    return stub<cdecl_t<class Vector3, class Matrix34 const&, class Matrix34 const&, float>>(
        0x4CEAD0, arg1, arg2, arg3);
}

// 0x67B3C0 | ?asInertialCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B3C0, class MetaClass, asInertialCSMetaClass);

// 0x4CEBB0 | ?new_asInertialCS@@YAPAXH@Z
inline void* new_asInertialCS(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4CEBB0, arg1);
}

// 0x4CEC80 | ?delete_asInertialCS@@YAXPAXH@Z
inline void delete_asInertialCS(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4CEC80, arg1, arg2);
}

class asInertialCS : asLinearCS
{
public:
    // asInertialCS::`vftable' @ 0x594590

    // 0x4CCF10 | ??0asInertialCS@@QAE@XZ
    inline asInertialCS()
    {
        stub<member_func_t<void, asInertialCS>>(0x4CCF10, this);
    }

    // 0x4CD010 | ?SetMass@asInertialCS@@QAEXMMMM@Z
    inline void SetMass(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, asInertialCS, float, float, float, float>>(
            0x4CD010, this, arg1, arg2, arg3, arg4);
    }

    // 0x4CD120 | ?SetDensity@asInertialCS@@QAEXMMMM@Z
    inline void SetDensity(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, asInertialCS, float, float, float, float>>(
            0x4CD120, this, arg1, arg2, arg3, arg4);
    }

    // 0x4CD170 | ?SetZeroDOF@asInertialCS@@QAEXMM@Z
    inline void SetZeroDOF(float arg1, float arg2)
    {
        return stub<member_func_t<void, asInertialCS, float, float>>(0x4CD170, this, arg1, arg2);
    }

    // 0x4CD230 | ?Zero@asInertialCS@@QAEXXZ
    inline void Zero()
    {
        return stub<member_func_t<void, asInertialCS>>(0x4CD230, this);
    }

    // 0x4CD370 | ?UpdateKids@asInertialCS@@QAEXXZ
    inline void UpdateKids()
    {
        return stub<member_func_t<void, asInertialCS>>(0x4CD370, this);
    }

    // 0x4CD460 | ?FinishForces@asInertialCS@@QAEXXZ
    inline void FinishForces()
    {
        return stub<member_func_t<void, asInertialCS>>(0x4CD460, this);
    }

    // 0x4CD7F0 | ?MoveICS@asInertialCS@@QAEXXZ
    inline void MoveICS()
    {
        return stub<member_func_t<void, asInertialCS>>(0x4CD7F0, this);
    }

    // 0x4CD870 | ?FinishUpdate@asInertialCS@@QAEXXZ
    inline void FinishUpdate()
    {
        return stub<member_func_t<void, asInertialCS>>(0x4CD870, this);
    }

    // 0x4CDF10 | ?ApplyForce@asInertialCS@@QAEXABVVector3@@@Z
    inline void ApplyForce(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, asInertialCS, class Vector3 const&>>(0x4CDF10, this, arg1);
    }

    // 0x4CDF50 | ?ApplyForce@asInertialCS@@QAEXABVVector3@@0@Z
    inline void ApplyForce(class Vector3 const& arg1, class Vector3 const& arg2)
    {
        return stub<member_func_t<void, asInertialCS, class Vector3 const&, class Vector3 const&>>(
            0x4CDF50, this, arg1, arg2);
    }

    // 0x4CDFF0 | ?ApplyTorque@asInertialCS@@QAEXABVVector3@@@Z
    inline void ApplyTorque(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, asInertialCS, class Vector3 const&>>(0x4CDFF0, this, arg1);
    }

    // 0x4CE030 | ?ApplyImpulse@asInertialCS@@QAEXABVVector3@@@Z
    inline void ApplyImpulse(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, asInertialCS, class Vector3 const&>>(0x4CE030, this, arg1);
    }

    // 0x4CE070 | ?ApplyImpulse@asInertialCS@@QAEXABVVector3@@0@Z
    inline void ApplyImpulse(class Vector3 const& arg1, class Vector3 const& arg2)
    {
        return stub<member_func_t<void, asInertialCS, class Vector3 const&, class Vector3 const&>>(
            0x4CE070, this, arg1, arg2);
    }

    // 0x4CE110 | ?ApplyAngImpulse@asInertialCS@@QAEXABVVector3@@@Z
    inline void ApplyAngImpulse(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, asInertialCS, class Vector3 const&>>(0x4CE110, this, arg1);
    }

    // 0x4CE260 | ?ApplyPush@asInertialCS@@QAEXABVVector3@@@Z
    inline void ApplyPush(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, asInertialCS, class Vector3 const&>>(0x4CE260, this, arg1);
    }

    // 0x4CE370 | ?ApplyTurn@asInertialCS@@QAEXABVVector3@@@Z
    inline void ApplyTurn(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, asInertialCS, class Vector3 const&>>(0x4CE370, this, arg1);
    }

    // 0x4CE3B0 | ?DrawForce@asInertialCS@@AAEXABVVector3@@0@Z
    inline void DrawForce(class Vector3 const& arg1, class Vector3 const& arg2)
    {
        return stub<member_func_t<void, asInertialCS, class Vector3 const&, class Vector3 const&>>(
            0x4CE3B0, this, arg1, arg2);
    }

    // 0x4CE3C0 | ?DrawForce@asInertialCS@@AAEXABVVector3@@00@Z
    inline void DrawForce(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3)
    {
        return stub<
            member_func_t<void, asInertialCS, class Vector3 const&, class Vector3 const&, class Vector3 const&>>(
            0x4CE3C0, this, arg1, arg2, arg3);
    }

    // 0x4CE3D0 | ?DoConstrain@asInertialCS@@QAEXXZ
    inline void DoConstrain()
    {
        return stub<member_func_t<void, asInertialCS>>(0x4CE3D0, this);
    }

    // 0x4CE480 | ?GetVelocity@asInertialCS@@QAE?AVVector3@@PBV2@@Z
    inline class Vector3 GetVelocity(class Vector3 const* arg1)
    {
        return stub<member_func_t<class Vector3, asInertialCS, class Vector3 const*>>(0x4CE480, this, arg1);
    }

    // 0x4CE550 | ?CalcCMatrix@asInertialCS@@QBEXAAVMatrix34@@ABVVector3@@@Z
    inline void CalcCMatrix(class Matrix34& arg1, class Vector3 const& arg2)
    {
        return stub<member_func_t<void, asInertialCS, class Matrix34&, class Vector3 const&>>(
            0x4CE550, this, arg1, arg2);
    }

    // 0x4CE8A0 | ?MatricesToMomenta@asInertialCS@@QAEXABVMatrix34@@0M@Z
    inline void MatricesToMomenta(class Matrix34 const& arg1, class Matrix34 const& arg2, float arg3)
    {
        return stub<member_func_t<void, asInertialCS, class Matrix34 const&, class Matrix34 const&, float>>(
            0x4CE8A0, this, arg1, arg2, arg3);
    }

    // 0x4CEB30 | ?FileIO@asInertialCS@@QAEXPAVMiniParser@@@Z
    inline void FileIO(class MiniParser* arg1)
    {
        return stub<member_func_t<void, asInertialCS, class MiniParser*>>(0x4CEB30, this, arg1);
    }

    // 0x4CEB40 | ?AddWidgets@asInertialCS@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, asInertialCS, class Bank*>>(0x4CEB40, this, arg1);
    }

    // 0x4CEB50 | ?DeclareFields@asInertialCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4CEB50);
    }

    // 0x44D470 | ??1asInertialCS@@UAE@XZ
    inline ~asInertialCS() override
    {
        stub<member_func_t<void, asInertialCS>>(0x44D470, this);
    }

    // 0x4CECD0 | ?GetClass@asInertialCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asInertialCS>>(0x4CECD0, this);
    }

    // 0x4CD3A0 | ?Update@asInertialCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asInertialCS>>(0x4CD3A0, this);
    }

    // 0x4CD350 | ?Reset@asInertialCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, asInertialCS>>(0x4CD350, this);
    }

    // 0x4CE150 | ?ApplyPush@asInertialCS@@UAEXABVVector3@@0@Z
    virtual inline void ApplyPush(class Vector3 const& arg1, class Vector3 const& arg2)
    {
        return stub<member_func_t<void, asInertialCS, class Vector3 const&, class Vector3 const&>>(
            0x4CE150, this, arg1, arg2);
    }

    // 0x4CE720 | ?GetCMatrix@asInertialCS@@UBEXAAVMatrix34@@ABVVector3@@@Z
    virtual inline void GetCMatrix(class Matrix34& arg1, class Vector3 const& arg2)
    {
        return stub<member_func_t<void, asInertialCS, class Matrix34&, class Vector3 const&>>(
            0x4CE720, this, arg1, arg2);
    }
};
