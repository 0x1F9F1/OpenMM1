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
    mmphysics:joint3dof

    0x4CEE00 | public: __thiscall Joint3Dof::Joint3Dof(void) | ??0Joint3Dof@@QAE@XZ
    0x4CEE50 | public: void __thiscall Joint3Dof::Init(void) | ?Init@Joint3Dof@@QAEXXZ
    0x4CEEC0 | public: virtual void __thiscall Joint3Dof::Reset(void) | ?Reset@Joint3Dof@@UAEXXZ
    0x4CEED0 | public: void __thiscall Joint3Dof::InitJoint3Dof(class asInertialCS *,class Vector3 const &,class asInertialCS *,class Vector3 const &) | ?InitJoint3Dof@Joint3Dof@@QAEXPAVasInertialCS@@ABVVector3@@01@Z
    0x4CEF50 | public: void __thiscall Joint3Dof::SetPosition(class Vector3 const &) | ?SetPosition@Joint3Dof@@QAEXABVVector3@@@Z
    0x4CF030 | public: void __thiscall Joint3Dof::SetRotate1(class Matrix34 const &) | ?SetRotate1@Joint3Dof@@QAEXABVMatrix34@@@Z
    0x4CF050 | public: void __thiscall Joint3Dof::SetRotate2(class Matrix34 const &) | ?SetRotate2@Joint3Dof@@QAEXABVMatrix34@@@Z
    0x4CF070 | public: void __thiscall Joint3Dof::SetFrictionLean(float,float,float) | ?SetFrictionLean@Joint3Dof@@QAEXMMM@Z
    0x4CF0A0 | public: void __thiscall Joint3Dof::SetFrictionRoll(float,float,float) | ?SetFrictionRoll@Joint3Dof@@QAEXMMM@Z
    0x4CF0D0 | public: void __thiscall Joint3Dof::SetLeanLimit(float,float) | ?SetLeanLimit@Joint3Dof@@QAEXMM@Z
    0x4CF0F0 | public: void __thiscall Joint3Dof::SetRollLimit(float,float,float) | ?SetRollLimit@Joint3Dof@@QAEXMMM@Z
    0x4CF120 | public: void __thiscall Joint3Dof::SetRestOrientation(void) | ?SetRestOrientation@Joint3Dof@@QAEXXZ
    0x4CF190 | public: void __thiscall Joint3Dof::SetRestOrientMat(class Matrix34 const &) | ?SetRestOrientMat@Joint3Dof@@QAEXABVMatrix34@@@Z
    0x4CF1D0 | public: void __thiscall Joint3Dof::SetRestOrientMat(class Matrix34 const &,class Matrix34 const &) | ?SetRestOrientMat@Joint3Dof@@QAEXABVMatrix34@@0@Z
    0x4CF220 | public: void __thiscall Joint3Dof::SetForceLimit(float) | ?SetForceLimit@Joint3Dof@@QAEXM@Z
    0x4CF230 | public: void __thiscall Joint3Dof::SetJointForceFlag(void) | ?SetJointForceFlag@Joint3Dof@@QAEXXZ
    0x4CF2D0 | public: virtual void __thiscall Joint3Dof::Update(void) | ?Update@Joint3Dof@@UAEXXZ
    0x4D0530 | public: void __thiscall Joint3Dof::MoveICS(void) | ?MoveICS@Joint3Dof@@QAEXXZ
    0x4D0580 | public: void __thiscall Joint3Dof::BreakJoint(void) | ?BreakJoint@Joint3Dof@@QAEXXZ
    0x4D05B0 | public: void __thiscall Joint3Dof::UnbreakJoint(void) | ?UnbreakJoint@Joint3Dof@@QAEXXZ
    0x4D05E0 | public: void __thiscall Joint3Dof::DoJointTorque(class Matrix34 const &,class Matrix34 const &,class Matrix34 const &,class Matrix34 const &,float &,float &,class Vector3 &,float &,float &) | ?DoJointTorque@Joint3Dof@@QAEXABVMatrix34@@000AAM1AAVVector3@@11@Z
    0x4D0B70 | public: void __thiscall Joint3Dof::DoJointLimits(float,class Vector3 const &,float,class Vector3 const &,class Vector3 &,class Matrix34 const &,class Matrix34 const &,class Matrix34 const &,class Matrix34 const &,class Matrix34 const &) | ?DoJointLimits@Joint3Dof@@QAEXMABVVector3@@M0AAV2@ABVMatrix34@@2222@Z
    0x4D1230 | public: virtual void __thiscall Joint3Dof::GetCMatrix(class asInertialCS const *,class Matrix34 &,class Vector3 const &) | ?GetCMatrix@Joint3Dof@@UAEXPBVasInertialCS@@AAVMatrix34@@ABVVector3@@@Z
    0x4D1590 | public: virtual void __thiscall Joint3Dof::GetCMatrix(class asInertialCS const *,class asInertialCS const *,class Matrix34 &,class Vector3 const &) | ?GetCMatrix@Joint3Dof@@UAEXPBVasInertialCS@@0AAVMatrix34@@ABVVector3@@@Z
    0x4D1B80 | public: void __thiscall Joint3Dof::AddWidgets(class Bank *) | ?AddWidgets@Joint3Dof@@QAEXPAVBank@@@Z
    0x4D1B90 | public: static void __cdecl Joint3Dof::DeclareFields(void) | ?DeclareFields@Joint3Dof@@SAXXZ
    0x4D1D00 | public: virtual class MetaClass * __thiscall Joint3Dof::GetClass(void) | ?GetClass@Joint3Dof@@UAEPAVMetaClass@@XZ
    0x4D1D40 | public: virtual __thiscall JointedStruct::~JointedStruct(void) | ??1JointedStruct@@UAE@XZ
    0x4D1D50 | public: class Vector3 __thiscall Vector3::operator^(class Matrix34 const &) const | ??TVector3@@QBE?AV0@ABVMatrix34@@@Z
    0x4D1D80 | public: void __thiscall Vector3::operator-=(class Vector3 const &) | ??ZVector3@@QAEXABV0@@Z
    0x4D1DB0 | public: void __thiscall Vector3::operator*=(float) | ??XVector3@@QAEXM@Z
    0x4D1DE0 | public: virtual void * __thiscall Joint3Dof::`vector deleting destructor'(unsigned int) | ??_EJoint3Dof@@UAEPAXI@Z
    0x4D1E40 | public: virtual __thiscall Joint3Dof::~Joint3Dof(void) | ??1Joint3Dof@@UAE@XZ
    0x4D1E50 | public: class Vector3 __thiscall Matrix34::RotateNoTrans(class Vector3 const &) const | ?RotateNoTrans@Matrix34@@QBE?AVVector3@@ABV2@@Z
    0x4D1E80 | public: class Matrix34 __thiscall Matrix34::Transpose(void) const | ?Transpose@Matrix34@@QBE?AV1@XZ
    0x4D1EB0 | void __cdecl CrossProdMatrix(class Matrix34 *,class Vector3 const &) | ?CrossProdMatrix@@YAXPAVMatrix34@@ABVVector3@@@Z
    0x594618 | const Joint3Dof::`vftable' | ??_7Joint3Dof@@6B@
    0x67B3F0 | class MetaClass Joint3DofMetaClass | ?Joint3DofMetaClass@@3VMetaClass@@A
    0x67B418 | class Vector3 Veldiscrepancy | ?Veldiscrepancy@@3VVector3@@A
    0x67B428 | class Vector3 discrepancy | ?discrepancy@@3VVector3@@A
    0x4D1BE0 | void * __cdecl new_Joint3Dof(int) | ?new_Joint3Dof@@YAPAXH@Z
    0x4D1CB0 | void __cdecl delete_Joint3Dof(void *,int) | ?delete_Joint3Dof@@YAXPAXH@Z
*/

// 0x4D1EB0 | ?CrossProdMatrix@@YAXPAVMatrix34@@ABVVector3@@@Z
inline void CrossProdMatrix(class Matrix34* arg1, class Vector3 const& arg2)
{
    return stub<cdecl_t<void, class Matrix34*, class Vector3 const&>>(0x4D1EB0, arg1, arg2);
}

// 0x67B3F0 | ?Joint3DofMetaClass@@3VMetaClass@@A
inline extern_var(0x67B3F0, class MetaClass, Joint3DofMetaClass);

// 0x67B418 | ?Veldiscrepancy@@3VVector3@@A
inline extern_var(0x67B418, class Vector3, Veldiscrepancy);

// 0x67B428 | ?discrepancy@@3VVector3@@A
inline extern_var(0x67B428, class Vector3, discrepancy);

// 0x4D1BE0 | ?new_Joint3Dof@@YAPAXH@Z
// 0x4D1CB0 | ?delete_Joint3Dof@@YAXPAXH@Z

struct Joint3Dof : asNode
{
public:
    // Joint3Dof::`vftable' @ 0x594618

    // 0x4CEE00 | ??0Joint3Dof@@QAE@XZ
    inline Joint3Dof()
    {
        // stub<member_func_t<void, Joint3Dof>>(0x4CEE00, this);

        unimplemented();
    }

    // 0x4CEE50 | ?Init@Joint3Dof@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, Joint3Dof>>(0x4CEE50, this);
    }

    // 0x4CEED0 | ?InitJoint3Dof@Joint3Dof@@QAEXPAVasInertialCS@@ABVVector3@@01@Z
    inline void InitJoint3Dof(
        class asInertialCS* arg1, class Vector3 const& arg2, class asInertialCS* arg3, class Vector3 const& arg4)
    {
        return stub<member_func_t<void, Joint3Dof, class asInertialCS*, class Vector3 const&, class asInertialCS*,
            class Vector3 const&>>(0x4CEED0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4CEF50 | ?SetPosition@Joint3Dof@@QAEXABVVector3@@@Z
    inline void SetPosition(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, Joint3Dof, class Vector3 const&>>(0x4CEF50, this, arg1);
    }

    // 0x4CF030 | ?SetRotate1@Joint3Dof@@QAEXABVMatrix34@@@Z
    inline void SetRotate1(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, Joint3Dof, class Matrix34 const&>>(0x4CF030, this, arg1);
    }

    // 0x4CF050 | ?SetRotate2@Joint3Dof@@QAEXABVMatrix34@@@Z
    inline void SetRotate2(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, Joint3Dof, class Matrix34 const&>>(0x4CF050, this, arg1);
    }

    // 0x4CF070 | ?SetFrictionLean@Joint3Dof@@QAEXMMM@Z
    inline void SetFrictionLean(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, Joint3Dof, float, float, float>>(0x4CF070, this, arg1, arg2, arg3);
    }

    // 0x4CF0A0 | ?SetFrictionRoll@Joint3Dof@@QAEXMMM@Z
    inline void SetFrictionRoll(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, Joint3Dof, float, float, float>>(0x4CF0A0, this, arg1, arg2, arg3);
    }

    // 0x4CF0D0 | ?SetLeanLimit@Joint3Dof@@QAEXMM@Z
    inline void SetLeanLimit(float arg1, float arg2)
    {
        return stub<member_func_t<void, Joint3Dof, float, float>>(0x4CF0D0, this, arg1, arg2);
    }

    // 0x4CF0F0 | ?SetRollLimit@Joint3Dof@@QAEXMMM@Z
    inline void SetRollLimit(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, Joint3Dof, float, float, float>>(0x4CF0F0, this, arg1, arg2, arg3);
    }

    // 0x4CF120 | ?SetRestOrientation@Joint3Dof@@QAEXXZ
    inline void SetRestOrientation()
    {
        return stub<member_func_t<void, Joint3Dof>>(0x4CF120, this);
    }

    // 0x4CF190 | ?SetRestOrientMat@Joint3Dof@@QAEXABVMatrix34@@@Z
    inline void SetRestOrientMat(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, Joint3Dof, class Matrix34 const&>>(0x4CF190, this, arg1);
    }

    // 0x4CF1D0 | ?SetRestOrientMat@Joint3Dof@@QAEXABVMatrix34@@0@Z
    inline void SetRestOrientMat(class Matrix34 const& arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<void, Joint3Dof, class Matrix34 const&, class Matrix34 const&>>(
            0x4CF1D0, this, arg1, arg2);
    }

    // 0x4CF220 | ?SetForceLimit@Joint3Dof@@QAEXM@Z
    inline void SetForceLimit(float arg1)
    {
        return stub<member_func_t<void, Joint3Dof, float>>(0x4CF220, this, arg1);
    }

    // 0x4CF230 | ?SetJointForceFlag@Joint3Dof@@QAEXXZ
    inline void SetJointForceFlag()
    {
        return stub<member_func_t<void, Joint3Dof>>(0x4CF230, this);
    }

    // 0x4D0530 | ?MoveICS@Joint3Dof@@QAEXXZ
    inline void MoveICS()
    {
        return stub<member_func_t<void, Joint3Dof>>(0x4D0530, this);
    }

    // 0x4D0580 | ?BreakJoint@Joint3Dof@@QAEXXZ
    inline void BreakJoint()
    {
        return stub<member_func_t<void, Joint3Dof>>(0x4D0580, this);
    }

    // 0x4D05B0 | ?UnbreakJoint@Joint3Dof@@QAEXXZ
    inline void UnbreakJoint()
    {
        return stub<member_func_t<void, Joint3Dof>>(0x4D05B0, this);
    }

    // 0x4D05E0 | ?DoJointTorque@Joint3Dof@@QAEXABVMatrix34@@000AAM1AAVVector3@@11@Z
    inline void DoJointTorque(class Matrix34 const& arg1, class Matrix34 const& arg2, class Matrix34 const& arg3,
        class Matrix34 const& arg4, float& arg5, float& arg6, class Vector3& arg7, float& arg8, float& arg9)
    {
        return stub<member_func_t<void, Joint3Dof, class Matrix34 const&, class Matrix34 const&, class Matrix34 const&,
            class Matrix34 const&, float&, float&, class Vector3&, float&, float&>>(
            0x4D05E0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x4D0B70 | ?DoJointLimits@Joint3Dof@@QAEXMABVVector3@@M0AAV2@ABVMatrix34@@2222@Z
    inline void DoJointLimits(float arg1, class Vector3 const& arg2, float arg3, class Vector3 const& arg4,
        class Vector3& arg5, class Matrix34 const& arg6, class Matrix34 const& arg7, class Matrix34 const& arg8,
        class Matrix34 const& arg9, class Matrix34 const& arg10)
    {
        return stub<member_func_t<void, Joint3Dof, float, class Vector3 const&, float, class Vector3 const&,
            class Vector3&, class Matrix34 const&, class Matrix34 const&, class Matrix34 const&, class Matrix34 const&,
            class Matrix34 const&>>(0x4D0B70, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4D1B80 | ?AddWidgets@Joint3Dof@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, Joint3Dof, class Bank*>>(0x4D1B80, this, arg1);
    }

    // 0x4D1B90 | ?DeclareFields@Joint3Dof@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4D1B90);
    }

    // 0x4D1E40 | ??1Joint3Dof@@UAE@XZ
    inline ~Joint3Dof() override = 0
    {
        // stub<member_func_t<void, Joint3Dof>>(0x4D1E40, this);

        unimplemented();
    }

    // 0x4D1D00 | ?GetClass@Joint3Dof@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, Joint3Dof>>(0x4D1D00, this);
    }

    // 0x4CF2D0 | ?Update@Joint3Dof@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, Joint3Dof>>(0x4CF2D0, this);
    }

    // 0x4CEEC0 | ?Reset@Joint3Dof@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, Joint3Dof>>(0x4CEEC0, this);
    }

    // 0x4D1590 | ?GetCMatrix@Joint3Dof@@UAEXPBVasInertialCS@@0AAVMatrix34@@ABVVector3@@@Z
    virtual inline void GetCMatrix(
        class asInertialCS const* arg1, class asInertialCS const* arg2, class Matrix34& arg3, class Vector3 const& arg4)
    {
        return stub<member_func_t<void, Joint3Dof, class asInertialCS const*, class asInertialCS const*,
            class Matrix34&, class Vector3 const&>>(0x4D1590, this, arg1, arg2, arg3, arg4);
    }

    // 0x4D1230 | ?GetCMatrix@Joint3Dof@@UAEXPBVasInertialCS@@AAVMatrix34@@ABVVector3@@@Z
    virtual inline void GetCMatrix(class asInertialCS const* arg1, class Matrix34& arg2, class Vector3 const& arg3)
    {
        return stub<member_func_t<void, Joint3Dof, class asInertialCS const*, class Matrix34&, class Vector3 const&>>(
            0x4D1230, this, arg1, arg2, arg3);
    }
};
