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
    mmphysics:inertia

    0x4CCF10 | public: __thiscall asInertialCS::asInertialCS(void) | ??0asInertialCS@@QAE@XZ
    0x4CD010 | public: void __thiscall asInertialCS::SetMass(float,float,float,float) | ?SetMass@asInertialCS@@QAEXMMMM@Z
    0x4CD120 | public: void __thiscall asInertialCS::SetDensity(float,float,float,float) | ?SetDensity@asInertialCS@@QAEXMMMM@Z
    0x4CD170 | public: void __thiscall asInertialCS::SetZeroDOF(float,float) | ?SetZeroDOF@asInertialCS@@QAEXMM@Z
    0x4CD230 | public: void __thiscall asInertialCS::Zero(void) | ?Zero@asInertialCS@@QAEXXZ
    0x4CD350 | public: virtual void __thiscall asInertialCS::Reset(void) | ?Reset@asInertialCS@@UAEXXZ
    0x4CD370 | public: void __thiscall asInertialCS::UpdateKids(void) | ?UpdateKids@asInertialCS@@QAEXXZ
    0x4CD3A0 | public: virtual void __thiscall asInertialCS::Update(void) | ?Update@asInertialCS@@UAEXXZ
    0x4CD460 | public: void __thiscall asInertialCS::FinishForces(void) | ?FinishForces@asInertialCS@@QAEXXZ
    0x4CD7F0 | public: void __thiscall asInertialCS::MoveICS(void) | ?MoveICS@asInertialCS@@QAEXXZ
    0x4CD870 | public: void __thiscall asInertialCS::FinishUpdate(void) | ?FinishUpdate@asInertialCS@@QAEXXZ
    0x4CDF10 | public: void __thiscall asInertialCS::ApplyForce(class Vector3 const &) | ?ApplyForce@asInertialCS@@QAEXABVVector3@@@Z
    0x4CDF50 | public: void __thiscall asInertialCS::ApplyForce(class Vector3 const &,class Vector3 const &) | ?ApplyForce@asInertialCS@@QAEXABVVector3@@0@Z
    0x4CDFF0 | public: void __thiscall asInertialCS::ApplyTorque(class Vector3 const &) | ?ApplyTorque@asInertialCS@@QAEXABVVector3@@@Z
    0x4CE030 | public: void __thiscall asInertialCS::ApplyImpulse(class Vector3 const &) | ?ApplyImpulse@asInertialCS@@QAEXABVVector3@@@Z
    0x4CE070 | public: void __thiscall asInertialCS::ApplyImpulse(class Vector3 const &,class Vector3 const &) | ?ApplyImpulse@asInertialCS@@QAEXABVVector3@@0@Z
    0x4CE110 | public: void __thiscall asInertialCS::ApplyAngImpulse(class Vector3 const &) | ?ApplyAngImpulse@asInertialCS@@QAEXABVVector3@@@Z
    0x4CE150 | public: virtual void __thiscall asInertialCS::ApplyPush(class Vector3 const &,class Vector3 const &) | ?ApplyPush@asInertialCS@@UAEXABVVector3@@0@Z
    0x4CE260 | public: void __thiscall asInertialCS::ApplyPush(class Vector3 const &) | ?ApplyPush@asInertialCS@@QAEXABVVector3@@@Z
    0x4CE370 | public: void __thiscall asInertialCS::ApplyTurn(class Vector3 const &) | ?ApplyTurn@asInertialCS@@QAEXABVVector3@@@Z
    0x4CE3B0 | private: void __thiscall asInertialCS::DrawForce(class Vector3 const &,class Vector3 const &) | ?DrawForce@asInertialCS@@AAEXABVVector3@@0@Z
    0x4CE3C0 | private: void __thiscall asInertialCS::DrawForce(class Vector3 const &,class Vector3 const &,class Vector3 const &) | ?DrawForce@asInertialCS@@AAEXABVVector3@@00@Z
    0x4CE3D0 | public: void __thiscall asInertialCS::DoConstrain(void) | ?DoConstrain@asInertialCS@@QAEXXZ
    0x4CE480 | public: class Vector3 __thiscall asInertialCS::GetVelocity(class Vector3 const *) | ?GetVelocity@asInertialCS@@QAE?AVVector3@@PBV2@@Z
    0x4CE550 | public: void __thiscall asInertialCS::CalcCMatrix(class Matrix34 &,class Vector3 const &) const | ?CalcCMatrix@asInertialCS@@QBEXAAVMatrix34@@ABVVector3@@@Z
    0x4CE720 | public: virtual void __thiscall asInertialCS::GetCMatrix(class Matrix34 &,class Vector3 const &) const | ?GetCMatrix@asInertialCS@@UBEXAAVMatrix34@@ABVVector3@@@Z
    0x4CE790 | float __cdecl InertiaAxis(class Vector3 const &,class Vector3 const &) | ?InertiaAxis@@YAMABVVector3@@0@Z
    0x4CE7D0 | class Vector3 __cdecl MatrixToAngVelocity(class Matrix34 const &,float) | ?MatrixToAngVelocity@@YA?AVVector3@@ABVMatrix34@@M@Z
    0x4CE8A0 | public: void __thiscall asInertialCS::MatricesToMomenta(class Matrix34 const &,class Matrix34 const &,float) | ?MatricesToMomenta@asInertialCS@@QAEXABVMatrix34@@0M@Z
    0x4CEAD0 | class Vector3 __cdecl MatrixToAngVelocity(class Matrix34 const &,class Matrix34 const &,float) | ?MatrixToAngVelocity@@YA?AVVector3@@ABVMatrix34@@0M@Z
    0x4CEB30 | public: void __thiscall asInertialCS::FileIO(class MiniParser *) | ?FileIO@asInertialCS@@QAEXPAVMiniParser@@@Z
    0x4CEB40 | public: void __thiscall asInertialCS::AddWidgets(class Bank *) | ?AddWidgets@asInertialCS@@QAEXPAVBank@@@Z
    0x4CEB50 | public: static void __cdecl asInertialCS::DeclareFields(void) | ?DeclareFields@asInertialCS@@SAXXZ
    0x4CECD0 | public: virtual class MetaClass * __thiscall asInertialCS::GetClass(void) | ?GetClass@asInertialCS@@UAEPAVMetaClass@@XZ
    0x4CED10 | public: void __thiscall Vector3::Set(float,float,float) | ?Set@Vector3@@QAEXMMM@Z
    0x4CED30 | public: virtual void * __thiscall asInertialCS::`vector deleting destructor'(unsigned int) | ??_EasInertialCS@@UAEPAXI@Z
    0x4CED90 | public: void __thiscall Vector3::operator+=(class Vector3 const &) | ??YVector3@@QAEXABV0@@Z
    0x594590 | const asInertialCS::`vftable' | ??_7asInertialCS@@6B@
    0x67B3C0 | class MetaClass asInertialCSMetaClass | ?asInertialCSMetaClass@@3VMetaClass@@A
    0x4CEBB0 | void * __cdecl new_asInertialCS(int) | ?new_asInertialCS@@YAPAXH@Z
    0x4CEC80 | void __cdecl delete_asInertialCS(void *,int) | ?delete_asInertialCS@@YAXPAXH@Z
*/

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
        // stub<member_func_t<void, asInertialCS>>(0x4CCF10, this);

        unimplemented();
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
    inline ~asInertialCS() override = 0
    {
        // stub<member_func_t<void, asInertialCS>>(0x44D470, this);

        unimplemented();
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
