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
    vector7:matrix34

    0x549AD0 | public: __thiscall Matrix34::Matrix34(class Matrix44 const &) | ??0Matrix34@@QAE@ABVMatrix44@@@Z
    0x549B30 | public: void __thiscall Matrix34::Identity(void) | ?Identity@Matrix34@@QAEXXZ
    0x549B60 | public: class Matrix34 __thiscall Matrix34::operator+(class Matrix34 const &) | ??HMatrix34@@QAE?AV0@ABV0@@Z
    0x549C30 | public: class Matrix34 __thiscall Matrix34::operator-(class Matrix34 const &) | ??GMatrix34@@QAE?AV0@ABV0@@Z
    0x549D00 | public: void __thiscall Matrix34::Dot(class Matrix34 const &,class Matrix34 const &) | ?Dot@Matrix34@@QAEXABV1@0@Z
    0x549F20 | public: void __thiscall Matrix34::Dot3x3(class Matrix34 const &,class Matrix34 const &) | ?Dot3x3@Matrix34@@QAEXABV1@0@Z
    0x54A0B0 | public: class Vector3 __thiscall Matrix34::SolveSVD(class Vector3 const &) const | ?SolveSVD@Matrix34@@QBE?AVVector3@@ABV2@@Z
    0x54AD70 | public: float __thiscall Matrix34::Determinant(void) const | ?Determinant@Matrix34@@QBEMXZ
    0x54AE20 | public: class Matrix34 __thiscall Matrix34::Inverse(void) const | ?Inverse@Matrix34@@QBE?AV1@XZ
    0x54AFE0 | public: void __thiscall Matrix34::FastInverse(class Matrix34 const &) | ?FastInverse@Matrix34@@QAEXABV1@@Z
    0x54B0E0 | public: void __thiscall Matrix34::FastInverseFull(class Matrix34 const &) | ?FastInverseFull@Matrix34@@QAEXABV1@@Z
    0x54B380 | private: void __thiscall Matrix34::ArbitraryRotation(class Vector3 const &,float) | ?ArbitraryRotation@Matrix34@@AAEXABVVector3@@M@Z
    0x54B830 | public: void __thiscall Matrix34::Rotate(class Vector3 const &,float) | ?Rotate@Matrix34@@QAEXABVVector3@@M@Z
    0x54BE80 | public: void __thiscall Matrix34::RotateAbs(class Vector3 const &,float) | ?RotateAbs@Matrix34@@QAEXABVVector3@@M@Z
    0x54C380 | public: void __thiscall Matrix34::RotateFull(class Vector3 const &,float) | ?RotateFull@Matrix34@@QAEXABVVector3@@M@Z
    0x54CA60 | public: void __thiscall Matrix34::RotateToAbs(class Vector3 const &,class Vector3 const &,float) | ?RotateToAbs@Matrix34@@QAEXABVVector3@@0M@Z
    0x54CCD0 | public: void __thiscall Matrix34::RotateToFull(class Vector3 const &,class Vector3 const &,float) | ?RotateToFull@Matrix34@@QAEXABVVector3@@0M@Z
    0x54CD20 | public: void __thiscall Matrix34::RotateTo(class Vector3 const &,class Vector3 const &,float) | ?RotateTo@Matrix34@@QAEXABVVector3@@0M@Z
    0x54CD50 | public: class Matrix34 __thiscall Matrix34::operator*(float) const | ??DMatrix34@@QBE?AV0@M@Z
    0x54CE50 | class Matrix34 __cdecl operator*(float,class Matrix34 const &) | ??D@YA?AVMatrix34@@MABV0@@Z
    0x54CF50 | public: void __thiscall Matrix34::Scale(float,float,float) | ?Scale@Matrix34@@QAEXMMM@Z
    0x54CFD0 | public: void __thiscall Matrix34::ScaleAbs(float,float,float) | ?ScaleAbs@Matrix34@@QAEXMMM@Z
    0x54D000 | public: void __thiscall Matrix34::Scale(float) | ?Scale@Matrix34@@QAEXM@Z
    0x54D080 | public: void __thiscall Matrix34::ScaleAbs(float) | ?ScaleAbs@Matrix34@@QAEXM@Z
    0x54D0B0 | public: void __thiscall Matrix34::ScaleFull(float,float,float) | ?ScaleFull@Matrix34@@QAEXMMM@Z
    0x54D150 | public: void __thiscall Matrix34::ScaleFullAbs(float,float,float) | ?ScaleFullAbs@Matrix34@@QAEXMMM@Z
    0x54D190 | public: void __thiscall Matrix34::ScaleFull(float) | ?ScaleFull@Matrix34@@QAEXM@Z
    0x54D230 | public: void __thiscall Matrix34::ScaleFullAbs(float) | ?ScaleFullAbs@Matrix34@@QAEXM@Z
    0x54D270 | public: void __thiscall Matrix34::ScaleVolume(float,char) | ?ScaleVolume@Matrix34@@QAEXMD@Z
    0x54D370 | public: void __thiscall Matrix34::ScaleVolumeAbs(float,char) | ?ScaleVolumeAbs@Matrix34@@QAEXMD@Z
    0x54D470 | public: void __thiscall Matrix34::Transform(class Vector3 const &,class Vector3 const &,float) | ?Transform@Matrix34@@QAEXABVVector3@@0M@Z
    0x54D4E0 | public: void __thiscall Matrix34::Normalize(void) | ?Normalize@Matrix34@@QAEXXZ
    0x54D600 | public: void __thiscall Matrix34::TrackBall(float,float,float,float,float) | ?TrackBall@Matrix34@@QAEXMMMMM@Z
    0x54D8B0 | public: void __thiscall Matrix34::Transpose(class Matrix34 const &) | ?Transpose@Matrix34@@QAEXABV1@@Z
    0x54D910 | public: float __thiscall Matrix34::Atan3(char,char) const | ?Atan3@Matrix34@@QBEMDD@Z
    0x54DC90 | public: class Vector3 __thiscall Matrix34::GetEulers(char const *) const | ?GetEulers@Matrix34@@QBE?AVVector3@@PBD@Z
    0x54E340 | public: class Vector3 __thiscall Matrix34::GetEulers(void) const | ?GetEulers@Matrix34@@QBE?AVVector3@@XZ
    0x54E4E0 | public: void __thiscall Matrix34::FromEulers(class Vector3 const &,char const *) | ?FromEulers@Matrix34@@QAEXABVVector3@@PBD@Z
    0x54EE40 | public: void __thiscall Matrix34::FromEulers(class Vector3 const &) | ?FromEulers@Matrix34@@QAEXABVVector3@@@Z
    0x54F360 | public: void __thiscall Matrix34::FromQuaternion(class Quaternion const &) | ?FromQuaternion@Matrix34@@QAEXABVQuaternion@@@Z
    0x54F490 | public: void __thiscall Matrix34::LookAt(class Vector3 const &,class Vector3 const &) | ?LookAt@Matrix34@@QAEXABVVector3@@0@Z
    0x54F630 | public: void __thiscall Matrix34::PolarView(float,float,float,float) | ?PolarView@Matrix34@@QAEXMMMM@Z
    0x54F690 | public: void __thiscall Matrix34::PolarView2(float,float,float,float) | ?PolarView2@Matrix34@@QAEXMMMM@Z
    0x54F6F0 | public: void __thiscall Matrix34::PolarView(class Vector4 const &) | ?PolarView@Matrix34@@QAEXABVVector4@@@Z
    0x54F710 | public: void __thiscall Matrix34::GetLookAt(class Vector3 *,class Vector3 *,float) const | ?GetLookAt@Matrix34@@QBEXPAVVector3@@0M@Z
    0x54F7A0 | public: void __thiscall Matrix34::GetPolar(class Vector4 *,class Vector3 *,float) const | ?GetPolar@Matrix34@@QBEXPAVVector4@@PAVVector3@@M@Z
    0x54F7E0 | public: unsigned int __thiscall Matrix34::RotEqual(class Matrix34 const &,float) const | ?RotEqual@Matrix34@@QBEIABV1@M@Z
    0x54F840 | public: unsigned int __thiscall Matrix34::Equal(class Matrix34 const &,float) const | ?Equal@Matrix34@@QBEIABV1@M@Z
    0x54F880 | public: void __thiscall Matrix34::CalcAppRates(float &,float &,class Matrix34 const &,float,float) | ?CalcAppRates@Matrix34@@QAEXAAM0ABV1@MM@Z
    0x54F970 | public: int __thiscall Matrix34::Approach(class Matrix34 const &,float,float,float) | ?Approach@Matrix34@@QAEHABV1@MMM@Z
    0x54FAC0 | public: int __thiscall Matrix34::Approach(class Matrix34 const &,float,float) | ?Approach@Matrix34@@QAEHABV1@MM@Z
    0x54FC10 | public: void __thiscall Matrix34::Interpolate(class Matrix34 const &,class Matrix34 const &,float) | ?Interpolate@Matrix34@@QAEXABV1@0M@Z
    0x54FD00 | public: void __thiscall Matrix34::Print(void) const | ?Print@Matrix34@@QBEXXZ
    0x54FDC0 | public: static void __cdecl Matrix34::DeclareFields(void) | ?DeclareFields@Matrix34@@SAXXZ
    0x54FF00 | public: static class MetaClass * __cdecl Matrix34::GetClass(void) | ?GetClass@Matrix34@@SAPAVMetaClass@@XZ
    0x54FF10 | float __cdecl ASinf(float) | ?ASinf@@YAMM@Z
    0x54FFB0 | float __cdecl asinf_fast(float) | ?asinf_fast@@YAMM@Z
    0x54FFE0 | float __cdecl ATan2f(float,float) | ?ATan2f@@YAMMM@Z
    0x7108D0 | class Matrix34 IDENTITY | ?IDENTITY@@3VMatrix34@@A
    0x710900 | class MetaClass Matrix34MetaClass | ?Matrix34MetaClass@@3VMetaClass@@A
    0x54FE60 | void * __cdecl new_Matrix34(int) | ?new_Matrix34@@YAPAXH@Z
    0x54FEB0 | void __cdecl delete_Matrix34(void *,int) | ?delete_Matrix34@@YAXPAXH@Z
*/

#include "hooking.h"

#include "vector3.h"

// 0x54FF10 | ?ASinf@@YAMM@Z
inline float ASinf(float arg1)
{
    return stub<cdecl_t<float, float>>(0x54FF10, arg1);
}

// 0x54FFB0 | ?asinf_fast@@YAMM@Z
inline float asinf_fast(float arg1)
{
    return stub<cdecl_t<float, float>>(0x54FFB0, arg1);
}

// 0x54FFE0 | ?ATan2f@@YAMMM@Z
inline float ATan2f(float arg1, float arg2)
{
    return stub<cdecl_t<float, float, float>>(0x54FFE0, arg1, arg2);
}

// 0x7108D0 | ?IDENTITY@@3VMatrix34@@A
inline extern_var(0x7108D0, class Matrix34, IDENTITY);

// 0x710900 | ?Matrix34MetaClass@@3VMetaClass@@A
inline extern_var(0x710900, class MetaClass, Matrix34MetaClass);

// 0x54FE60 | ?new_Matrix34@@YAPAXH@Z
inline void* new_Matrix34(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x54FE60, arg1);
}

// 0x54FEB0 | ?delete_Matrix34@@YAXPAXH@Z
inline void delete_Matrix34(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x54FEB0, arg1, arg2);
}

class Matrix34
{
public:
    float m00 {0.0f}, m01 {0.0f}, m02 {0.0f};
    float m10 {0.0f}, m11 {0.0f}, m12 {0.0f};
    float m20 {0.0f}, m21 {0.0f}, m22 {0.0f};
    float m30 {0.0f}, m31 {0.0f}, m32 {0.0f};

    // 0x470110 | ??0Matrix34@@QAE@XZ
    inline Matrix34() = default;

    // 0x4D1E50 | ?RotateNoTrans@Matrix34@@QBE?AVVector3@@ABV2@@Z
    inline class Vector3 RotateNoTrans(class Vector3 const& arg1)
    {
        return stub<member_func_t<class Vector3, Matrix34, class Vector3 const&>>(0x4D1E50, this, arg1);
    }

    // 0x4D1E80 | ?Transpose@Matrix34@@QBE?AV1@XZ
    inline class Matrix34 Transpose()
    {
        return stub<member_func_t<class Matrix34, Matrix34>>(0x4D1E80, this);
    }

    // 0x549AD0 | ??0Matrix34@@QAE@ABVMatrix44@@@Z
    Matrix34(class Matrix44 const& other);

    // 0x549B30 | ?Identity@Matrix34@@QAEXXZ
    inline void Identity()
    {
        return stub<member_func_t<void, Matrix34>>(0x549B30, this);
    }

    // 0x549B60 | ??HMatrix34@@QAE?AV0@ABV0@@Z
    inline class Matrix34 operator+(class Matrix34 const& arg1)
    {
        return stub<member_func_t<class Matrix34, Matrix34, class Matrix34 const&>>(0x549B60, this, arg1);
    }

    // 0x549C30 | ??GMatrix34@@QAE?AV0@ABV0@@Z
    inline class Matrix34 operator-(class Matrix34 const& arg1)
    {
        return stub<member_func_t<class Matrix34, Matrix34, class Matrix34 const&>>(0x549C30, this, arg1);
    }

    // 0x549D00 | ?Dot@Matrix34@@QAEXABV1@0@Z
    inline void Dot(class Matrix34 const& arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<void, Matrix34, class Matrix34 const&, class Matrix34 const&>>(
            0x549D00, this, arg1, arg2);
    }

    // 0x549F20 | ?Dot3x3@Matrix34@@QAEXABV1@0@Z
    inline void Dot3x3(class Matrix34 const& arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<void, Matrix34, class Matrix34 const&, class Matrix34 const&>>(
            0x549F20, this, arg1, arg2);
    }

    // 0x54A0B0 | ?SolveSVD@Matrix34@@QBE?AVVector3@@ABV2@@Z
    inline class Vector3 SolveSVD(class Vector3 const& arg1)
    {
        return stub<member_func_t<class Vector3, Matrix34, class Vector3 const&>>(0x54A0B0, this, arg1);
    }

    // 0x54AD70 | ?Determinant@Matrix34@@QBEMXZ
    inline float Determinant()
    {
        return stub<member_func_t<float, Matrix34>>(0x54AD70, this);
    }

    // 0x54AE20 | ?Inverse@Matrix34@@QBE?AV1@XZ
    inline class Matrix34 Inverse()
    {
        return stub<member_func_t<class Matrix34, Matrix34>>(0x54AE20, this);
    }

    // 0x54AFE0 | ?FastInverse@Matrix34@@QAEXABV1@@Z
    inline void FastInverse(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, Matrix34, class Matrix34 const&>>(0x54AFE0, this, arg1);
    }

    // 0x54B0E0 | ?FastInverseFull@Matrix34@@QAEXABV1@@Z
    inline void FastInverseFull(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, Matrix34, class Matrix34 const&>>(0x54B0E0, this, arg1);
    }

    // 0x54B380 | ?ArbitraryRotation@Matrix34@@AAEXABVVector3@@M@Z
    inline void ArbitraryRotation(class Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, Matrix34, class Vector3 const&, float>>(0x54B380, this, arg1, arg2);
    }

    // 0x54B830 | ?Rotate@Matrix34@@QAEXABVVector3@@M@Z
    inline void Rotate(class Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, Matrix34, class Vector3 const&, float>>(0x54B830, this, arg1, arg2);
    }

    // 0x54BE80 | ?RotateAbs@Matrix34@@QAEXABVVector3@@M@Z
    inline void RotateAbs(class Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, Matrix34, class Vector3 const&, float>>(0x54BE80, this, arg1, arg2);
    }

    // 0x54C380 | ?RotateFull@Matrix34@@QAEXABVVector3@@M@Z
    inline void RotateFull(class Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, Matrix34, class Vector3 const&, float>>(0x54C380, this, arg1, arg2);
    }

    // 0x54CA60 | ?RotateToAbs@Matrix34@@QAEXABVVector3@@0M@Z
    inline void RotateToAbs(class Vector3 const& arg1, class Vector3 const& arg2, float arg3)
    {
        return stub<member_func_t<void, Matrix34, class Vector3 const&, class Vector3 const&, float>>(
            0x54CA60, this, arg1, arg2, arg3);
    }

    // 0x54CCD0 | ?RotateToFull@Matrix34@@QAEXABVVector3@@0M@Z
    inline void RotateToFull(class Vector3 const& arg1, class Vector3 const& arg2, float arg3)
    {
        return stub<member_func_t<void, Matrix34, class Vector3 const&, class Vector3 const&, float>>(
            0x54CCD0, this, arg1, arg2, arg3);
    }

    // 0x54CD20 | ?RotateTo@Matrix34@@QAEXABVVector3@@0M@Z
    inline void RotateTo(class Vector3 const& arg1, class Vector3 const& arg2, float arg3)
    {
        return stub<member_func_t<void, Matrix34, class Vector3 const&, class Vector3 const&, float>>(
            0x54CD20, this, arg1, arg2, arg3);
    }

    // 0x54CD50 | ??DMatrix34@@QBE?AV0@M@Z
    inline class Matrix34 operator*(float arg1)
    {
        return stub<member_func_t<class Matrix34, Matrix34, float>>(0x54CD50, this, arg1);
    }

    // 0x54CF50 | ?Scale@Matrix34@@QAEXMMM@Z
    inline void Scale(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, Matrix34, float, float, float>>(0x54CF50, this, arg1, arg2, arg3);
    }

    // 0x54CFD0 | ?ScaleAbs@Matrix34@@QAEXMMM@Z
    inline void ScaleAbs(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, Matrix34, float, float, float>>(0x54CFD0, this, arg1, arg2, arg3);
    }

    // 0x54D000 | ?Scale@Matrix34@@QAEXM@Z
    inline void Scale(float arg1)
    {
        return stub<member_func_t<void, Matrix34, float>>(0x54D000, this, arg1);
    }

    // 0x54D080 | ?ScaleAbs@Matrix34@@QAEXM@Z
    inline void ScaleAbs(float arg1)
    {
        return stub<member_func_t<void, Matrix34, float>>(0x54D080, this, arg1);
    }

    // 0x54D0B0 | ?ScaleFull@Matrix34@@QAEXMMM@Z
    inline void ScaleFull(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, Matrix34, float, float, float>>(0x54D0B0, this, arg1, arg2, arg3);
    }

    // 0x54D150 | ?ScaleFullAbs@Matrix34@@QAEXMMM@Z
    inline void ScaleFullAbs(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, Matrix34, float, float, float>>(0x54D150, this, arg1, arg2, arg3);
    }

    // 0x54D190 | ?ScaleFull@Matrix34@@QAEXM@Z
    inline void ScaleFull(float arg1)
    {
        return stub<member_func_t<void, Matrix34, float>>(0x54D190, this, arg1);
    }

    // 0x54D230 | ?ScaleFullAbs@Matrix34@@QAEXM@Z
    inline void ScaleFullAbs(float arg1)
    {
        return stub<member_func_t<void, Matrix34, float>>(0x54D230, this, arg1);
    }

    // 0x54D270 | ?ScaleVolume@Matrix34@@QAEXMD@Z
    inline void ScaleVolume(float arg1, char arg2)
    {
        return stub<member_func_t<void, Matrix34, float, char>>(0x54D270, this, arg1, arg2);
    }

    // 0x54D370 | ?ScaleVolumeAbs@Matrix34@@QAEXMD@Z
    inline void ScaleVolumeAbs(float arg1, char arg2)
    {
        return stub<member_func_t<void, Matrix34, float, char>>(0x54D370, this, arg1, arg2);
    }

    // 0x54D470 | ?Transform@Matrix34@@QAEXABVVector3@@0M@Z
    inline void Transform(class Vector3 const& arg1, class Vector3 const& arg2, float arg3)
    {
        return stub<member_func_t<void, Matrix34, class Vector3 const&, class Vector3 const&, float>>(
            0x54D470, this, arg1, arg2, arg3);
    }

    // 0x54D4E0 | ?Normalize@Matrix34@@QAEXXZ
    inline void Normalize()
    {
        return stub<member_func_t<void, Matrix34>>(0x54D4E0, this);
    }

    // 0x54D600 | ?TrackBall@Matrix34@@QAEXMMMMM@Z
    inline void TrackBall(float arg1, float arg2, float arg3, float arg4, float arg5)
    {
        return stub<member_func_t<void, Matrix34, float, float, float, float, float>>(
            0x54D600, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x54D8B0 | ?Transpose@Matrix34@@QAEXABV1@@Z
    inline void Transpose(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, Matrix34, class Matrix34 const&>>(0x54D8B0, this, arg1);
    }

    // 0x54D910 | ?Atan3@Matrix34@@QBEMDD@Z
    inline float Atan3(char arg1, char arg2)
    {
        return stub<member_func_t<float, Matrix34, char, char>>(0x54D910, this, arg1, arg2);
    }

    // 0x54DC90 | ?GetEulers@Matrix34@@QBE?AVVector3@@PBD@Z
    inline class Vector3 GetEulers(char const* arg1)
    {
        return stub<member_func_t<class Vector3, Matrix34, char const*>>(0x54DC90, this, arg1);
    }

    // 0x54E340 | ?GetEulers@Matrix34@@QBE?AVVector3@@XZ
    inline class Vector3 GetEulers()
    {
        return stub<member_func_t<class Vector3, Matrix34>>(0x54E340, this);
    }

    // 0x54E4E0 | ?FromEulers@Matrix34@@QAEXABVVector3@@PBD@Z
    inline void FromEulers(class Vector3 const& arg1, char const* arg2)
    {
        return stub<member_func_t<void, Matrix34, class Vector3 const&, char const*>>(0x54E4E0, this, arg1, arg2);
    }

    // 0x54EE40 | ?FromEulers@Matrix34@@QAEXABVVector3@@@Z
    inline void FromEulers(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, Matrix34, class Vector3 const&>>(0x54EE40, this, arg1);
    }

    // 0x54F360 | ?FromQuaternion@Matrix34@@QAEXABVQuaternion@@@Z
    inline void FromQuaternion(class Quaternion const& arg1)
    {
        return stub<member_func_t<void, Matrix34, class Quaternion const&>>(0x54F360, this, arg1);
    }

    // 0x54F490 | ?LookAt@Matrix34@@QAEXABVVector3@@0@Z
    inline void LookAt(class Vector3 const& arg1, class Vector3 const& arg2)
    {
        return stub<member_func_t<void, Matrix34, class Vector3 const&, class Vector3 const&>>(
            0x54F490, this, arg1, arg2);
    }

    // 0x54F630 | ?PolarView@Matrix34@@QAEXMMMM@Z
    inline void PolarView(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, Matrix34, float, float, float, float>>(0x54F630, this, arg1, arg2, arg3, arg4);
    }

    // 0x54F690 | ?PolarView2@Matrix34@@QAEXMMMM@Z
    inline void PolarView2(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, Matrix34, float, float, float, float>>(0x54F690, this, arg1, arg2, arg3, arg4);
    }

    // 0x54F6F0 | ?PolarView@Matrix34@@QAEXABVVector4@@@Z
    inline void PolarView(class Vector4 const& arg1)
    {
        return stub<member_func_t<void, Matrix34, class Vector4 const&>>(0x54F6F0, this, arg1);
    }

    // 0x54F710 | ?GetLookAt@Matrix34@@QBEXPAVVector3@@0M@Z
    inline void GetLookAt(class Vector3* arg1, class Vector3* arg2, float arg3)
    {
        return stub<member_func_t<void, Matrix34, class Vector3*, class Vector3*, float>>(
            0x54F710, this, arg1, arg2, arg3);
    }

    // 0x54F7A0 | ?GetPolar@Matrix34@@QBEXPAVVector4@@PAVVector3@@M@Z
    inline void GetPolar(class Vector4* arg1, class Vector3* arg2, float arg3)
    {
        return stub<member_func_t<void, Matrix34, class Vector4*, class Vector3*, float>>(
            0x54F7A0, this, arg1, arg2, arg3);
    }

    // 0x54F7E0 | ?RotEqual@Matrix34@@QBEIABV1@M@Z
    inline uint32_t RotEqual(class Matrix34 const& arg1, float arg2)
    {
        return stub<member_func_t<uint32_t, Matrix34, class Matrix34 const&, float>>(0x54F7E0, this, arg1, arg2);
    }

    // 0x54F840 | ?Equal@Matrix34@@QBEIABV1@M@Z
    inline uint32_t Equal(class Matrix34 const& arg1, float arg2)
    {
        return stub<member_func_t<uint32_t, Matrix34, class Matrix34 const&, float>>(0x54F840, this, arg1, arg2);
    }

    // 0x54F880 | ?CalcAppRates@Matrix34@@QAEXAAM0ABV1@MM@Z
    inline void CalcAppRates(float& arg1, float& arg2, class Matrix34 const& arg3, float arg4, float arg5)
    {
        return stub<member_func_t<void, Matrix34, float&, float&, class Matrix34 const&, float, float>>(
            0x54F880, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x54F970 | ?Approach@Matrix34@@QAEHABV1@MMM@Z
    inline int32_t Approach(class Matrix34 const& arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<int32_t, Matrix34, class Matrix34 const&, float, float, float>>(
            0x54F970, this, arg1, arg2, arg3, arg4);
    }

    // 0x54FAC0 | ?Approach@Matrix34@@QAEHABV1@MM@Z
    inline int32_t Approach(class Matrix34 const& arg1, float arg2, float arg3)
    {
        return stub<member_func_t<int32_t, Matrix34, class Matrix34 const&, float, float>>(
            0x54FAC0, this, arg1, arg2, arg3);
    }

    // 0x54FC10 | ?Interpolate@Matrix34@@QAEXABV1@0M@Z
    inline void Interpolate(class Matrix34 const& arg1, class Matrix34 const& arg2, float arg3)
    {
        return stub<member_func_t<void, Matrix34, class Matrix34 const&, class Matrix34 const&, float>>(
            0x54FC10, this, arg1, arg2, arg3);
    }

    // 0x54FD00 | ?Print@Matrix34@@QBEXXZ
    inline void Print()
    {
        return stub<member_func_t<void, Matrix34>>(0x54FD00, this);
    }

    // 0x54FDC0 | ?DeclareFields@Matrix34@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x54FDC0);
    }

    // 0x54FF00 | ?GetClass@Matrix34@@SAPAVMetaClass@@XZ
    static inline class MetaClass* GetClass()
    {
        return stub<cdecl_t<class MetaClass*>>(0x54FF00);
    }
};

check_size(Matrix34, 0x30);

// 0x54CE50 | ??D@YA?AVMatrix34@@MABV0@@Z
inline class Matrix34 operator*(float arg1, class Matrix34 const& arg2)
{
    return stub<cdecl_t<class Matrix34, float, class Matrix34 const&>>(0x54CE50, arg1, arg2);
}