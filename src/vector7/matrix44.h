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
    vector7:matrix44

    0x550050 | public: __thiscall Matrix44::Matrix44(class Matrix34 const &) | ??0Matrix44@@QAE@ABVMatrix34@@@Z
    0x5500C0 | public: class Matrix44 __thiscall Matrix44::operator+(class Matrix44 const &) const | ??HMatrix44@@QBE?AV0@ABV0@@Z
    0x550230 | public: class Matrix44 __thiscall Matrix44::operator-(class Matrix44 const &) const | ??GMatrix44@@QBE?AV0@ABV0@@Z
    0x550380 | public: class Matrix44 __thiscall Matrix44::operator-(void) const | ??GMatrix44@@QBE?AV0@XZ
    0x550480 | class Matrix44 __cdecl operator*(float,class Matrix44 const &) | ??D@YA?AVMatrix44@@MABV0@@Z
    0x5505E0 | public: class Matrix44 __thiscall Matrix44::operator*(float) const | ??DMatrix44@@QBE?AV0@M@Z
    0x550730 | public: class Matrix44 __thiscall Matrix44::operator/(float) const | ??KMatrix44@@QBE?AV0@M@Z
    0x550910 | public: class Matrix44 __thiscall Matrix44::operator^(class Matrix44 const &) const | ??TMatrix44@@QBE?AV0@ABV0@@Z
    0x550B80 | public: void __thiscall Matrix44::Dot(class Matrix44 const &,class Matrix44 const &) | ?Dot@Matrix44@@QAEXABV1@0@Z
    0x550E50 | public: class Vector4 __thiscall Matrix44::operator^(class Vector4 const &) const | ??TMatrix44@@QBE?AVVector4@@ABV1@@Z
    0x550F40 | class Vector3 __cdecl operator^(class Vector3 const &,class Matrix44 const &) | ??T@YA?AVVector3@@ABV0@ABVMatrix44@@@Z
    0x550FB0 | class Vector4 __cdecl operator^(class Vector4 const &,class Matrix44 const &) | ??T@YA?AVVector4@@ABV0@ABVMatrix44@@@Z
    0x550FE0 | public: void __thiscall Matrix44::Perspective(float,float,float,float) | ?Perspective@Matrix44@@QAEXMMMM@Z
    0x5510D0 | public: void __thiscall Matrix44::Ortho(float,float,float,float,float,float) | ?Ortho@Matrix44@@QAEXMMMMMM@Z
    0x5511E0 | public: float __thiscall Matrix44::Determinant(void) const | ?Determinant@Matrix44@@QBEMXZ
    0x551420 | public: class Matrix44 __thiscall Matrix44::Inverse(void) const | ?Inverse@Matrix44@@QBE?AV1@XZ
    0x551ED0 | public: class Matrix44 __thiscall Matrix44::Transpose(void) const | ?Transpose@Matrix44@@QBE?AV1@XZ
    0x551FB0 | public: void __thiscall Matrix44::Identity(void) | ?Identity@Matrix44@@QAEXXZ
    0x551FF0 | public: void __thiscall Matrix44::Rotate(char,float) | ?Rotate@Matrix44@@QAEXDM@Z
    0x552170 | public: void __thiscall Matrix44::Rotate(class Vector3 const &,float) | ?Rotate@Matrix44@@QAEXABVVector3@@M@Z
    0x5521D0 | public: void __thiscall Matrix44::Rotate(class Vector3 const &,class Vector3 const &) | ?Rotate@Matrix44@@QAEXABVVector3@@0@Z
    0x552420 | public: void __thiscall Matrix44::Translate(float,float,float) | ?Translate@Matrix44@@QAEXMMM@Z
    0x552470 | public: void __thiscall Matrix44::Scale(float,float,float) | ?Scale@Matrix44@@QAEXMMM@Z
    0x5524C0 | public: void __thiscall Matrix44::Scale(class Vector3 const &,float) | ?Scale@Matrix44@@QAEXABVVector3@@M@Z
    0x552520 | public: void __thiscall Matrix44::FromQuaternion(class Quaternion const &) | ?FromQuaternion@Matrix44@@QAEXABVQuaternion@@@Z
    0x552660 | public: void __thiscall Matrix44::Print(void) const | ?Print@Matrix44@@QBEXXZ
    0x5527D0 | public: __thiscall Matrix44::Matrix44(class Matrix44 const &) | ??0Matrix44@@QAE@ABV0@@Z
    0x552850 | public: class Vector3 __thiscall Vector3::operator~(void) const | ??SVector3@@QBE?AV0@XZ
    0x5528A0 | public: void __thiscall Vector4::Set(float,float,float,float) | ?Set@Vector4@@QAEXMMMM@Z
    0x5528C0 | public: float __thiscall Vector4::operator^(class Vector4 const &) const | ??TVector4@@QBEMABV0@@Z
    0x5C5288 | float * id | ?id@@3PAMA
    0x5C52C8 | float * bb | ?bb@@3PAMA
    0x5C5308 | float * bt | ?bt@@3PAMA
    0x5C5348 | float * hb | ?hb@@3PAMA
    0x5C5388 | float * ht | ?ht@@3PAMA
    0x710930 | class Matrix44 HermiteBasis | ?HermiteBasis@@3VMatrix44@@A
    0x710970 | class Matrix44 BezierBasis | ?BezierBasis@@3VMatrix44@@A
    0x7109B0 | class Matrix44 HermiteTranspose | ?HermiteTranspose@@3VMatrix44@@A
    0x7109F0 | class Matrix44 BezierTranspose | ?BezierTranspose@@3VMatrix44@@A
    0x710A30 | class Matrix44 Identity | ?Identity@@3VMatrix44@@A
*/

#include "hooking.h"

// 0x550480 | ??D@YA?AVMatrix44@@MABV0@@Z
inline class Matrix44 operator*(float arg1, class Matrix44 const& arg2)
{
    return stub<cdecl_t<class Matrix44, float, class Matrix44 const&>>(0x550480, arg1, arg2);
}

// 0x550F40 | ??T@YA?AVVector3@@ABV0@ABVMatrix44@@@Z
inline class Vector3 operator^(class Vector3 const& arg1, class Matrix44 const& arg2)
{
    return stub<cdecl_t<class Vector3, class Vector3 const&, class Matrix44 const&>>(0x550F40, arg1, arg2);
}

// 0x550FB0 | ??T@YA?AVVector4@@ABV0@ABVMatrix44@@@Z
inline class Vector4 operator^(class Vector4 const& arg1, class Matrix44 const& arg2)
{
    return stub<cdecl_t<class Vector4, class Vector4 const&, class Matrix44 const&>>(0x550FB0, arg1, arg2);
}

// 0x5C5288 | ?id@@3PAMA
inline extern_var(0x5C5288, float*, id);

// 0x5C52C8 | ?bb@@3PAMA
inline extern_var(0x5C52C8, float*, bb);

// 0x5C5308 | ?bt@@3PAMA
inline extern_var(0x5C5308, float*, bt);

// 0x5C5348 | ?hb@@3PAMA
inline extern_var(0x5C5348, float*, hb);

// 0x5C5388 | ?ht@@3PAMA
inline extern_var(0x5C5388, float*, ht);

// 0x710930 | ?HermiteBasis@@3VMatrix44@@A
inline extern_var(0x710930, class Matrix44, HermiteBasis);

// 0x710970 | ?BezierBasis@@3VMatrix44@@A
inline extern_var(0x710970, class Matrix44, BezierBasis);

// 0x7109B0 | ?HermiteTranspose@@3VMatrix44@@A
inline extern_var(0x7109B0, class Matrix44, HermiteTranspose);

// 0x7109F0 | ?BezierTranspose@@3VMatrix44@@A
inline extern_var(0x7109F0, class Matrix44, BezierTranspose);

// 0x710A30 | ?Identity@@3VMatrix44@@A
inline extern_var(0x710A30, class Matrix44, Identity);

class Matrix44
{
public:
    // 0x550050 | ??0Matrix44@@QAE@ABVMatrix34@@@Z
    inline Matrix44(class Matrix34 const& arg1)
    {
        // stub<member_func_t<void, Matrix44, class Matrix34 const&>>(0x550050, this, arg1);

        unimplemented();
    }

    // 0x5500C0 | ??HMatrix44@@QBE?AV0@ABV0@@Z
    inline class Matrix44 operator+(class Matrix44 const& arg1)
    {
        return stub<member_func_t<class Matrix44, Matrix44, class Matrix44 const&>>(0x5500C0, this, arg1);
    }

    // 0x550230 | ??GMatrix44@@QBE?AV0@ABV0@@Z
    inline class Matrix44 operator-(class Matrix44 const& arg1)
    {
        return stub<member_func_t<class Matrix44, Matrix44, class Matrix44 const&>>(0x550230, this, arg1);
    }

    // 0x550380 | ??GMatrix44@@QBE?AV0@XZ
    inline class Matrix44 operator-()
    {
        return stub<member_func_t<class Matrix44, Matrix44>>(0x550380, this);
    }

    // 0x5505E0 | ??DMatrix44@@QBE?AV0@M@Z
    inline class Matrix44 operator*(float arg1)
    {
        return stub<member_func_t<class Matrix44, Matrix44, float>>(0x5505E0, this, arg1);
    }

    // 0x550730 | ??KMatrix44@@QBE?AV0@M@Z
    inline class Matrix44 operator/(float arg1)
    {
        return stub<member_func_t<class Matrix44, Matrix44, float>>(0x550730, this, arg1);
    }

    // 0x550910 | ??TMatrix44@@QBE?AV0@ABV0@@Z
    inline class Matrix44 operator^(class Matrix44 const& arg1)
    {
        return stub<member_func_t<class Matrix44, Matrix44, class Matrix44 const&>>(0x550910, this, arg1);
    }

    // 0x550B80 | ?Dot@Matrix44@@QAEXABV1@0@Z
    inline void Dot(class Matrix44 const& arg1, class Matrix44 const& arg2)
    {
        return stub<member_func_t<void, Matrix44, class Matrix44 const&, class Matrix44 const&>>(
            0x550B80, this, arg1, arg2);
    }

    // 0x550E50 | ??TMatrix44@@QBE?AVVector4@@ABV1@@Z
    inline class Vector4 operator^(class Vector4 const& arg1)
    {
        return stub<member_func_t<class Vector4, Matrix44, class Vector4 const&>>(0x550E50, this, arg1);
    }

    // 0x550FE0 | ?Perspective@Matrix44@@QAEXMMMM@Z
    inline void Perspective(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, Matrix44, float, float, float, float>>(0x550FE0, this, arg1, arg2, arg3, arg4);
    }

    // 0x5510D0 | ?Ortho@Matrix44@@QAEXMMMMMM@Z
    inline void Ortho(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6)
    {
        return stub<member_func_t<void, Matrix44, float, float, float, float, float, float>>(
            0x5510D0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x5511E0 | ?Determinant@Matrix44@@QBEMXZ
    inline float Determinant()
    {
        return stub<member_func_t<float, Matrix44>>(0x5511E0, this);
    }

    // 0x551420 | ?Inverse@Matrix44@@QBE?AV1@XZ
    inline class Matrix44 Inverse()
    {
        return stub<member_func_t<class Matrix44, Matrix44>>(0x551420, this);
    }

    // 0x551ED0 | ?Transpose@Matrix44@@QBE?AV1@XZ
    inline class Matrix44 Transpose()
    {
        return stub<member_func_t<class Matrix44, Matrix44>>(0x551ED0, this);
    }

    // 0x551FB0 | ?Identity@Matrix44@@QAEXXZ
    inline void Identity()
    {
        return stub<member_func_t<void, Matrix44>>(0x551FB0, this);
    }

    // 0x551FF0 | ?Rotate@Matrix44@@QAEXDM@Z
    inline void Rotate(char arg1, float arg2)
    {
        return stub<member_func_t<void, Matrix44, char, float>>(0x551FF0, this, arg1, arg2);
    }

    // 0x552170 | ?Rotate@Matrix44@@QAEXABVVector3@@M@Z
    inline void Rotate(class Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, Matrix44, class Vector3 const&, float>>(0x552170, this, arg1, arg2);
    }

    // 0x5521D0 | ?Rotate@Matrix44@@QAEXABVVector3@@0@Z
    inline void Rotate(class Vector3 const& arg1, class Vector3 const& arg2)
    {
        return stub<member_func_t<void, Matrix44, class Vector3 const&, class Vector3 const&>>(
            0x5521D0, this, arg1, arg2);
    }

    // 0x552420 | ?Translate@Matrix44@@QAEXMMM@Z
    inline void Translate(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, Matrix44, float, float, float>>(0x552420, this, arg1, arg2, arg3);
    }

    // 0x552470 | ?Scale@Matrix44@@QAEXMMM@Z
    inline void Scale(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, Matrix44, float, float, float>>(0x552470, this, arg1, arg2, arg3);
    }

    // 0x5524C0 | ?Scale@Matrix44@@QAEXABVVector3@@M@Z
    inline void Scale(class Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, Matrix44, class Vector3 const&, float>>(0x5524C0, this, arg1, arg2);
    }

    // 0x552520 | ?FromQuaternion@Matrix44@@QAEXABVQuaternion@@@Z
    inline void FromQuaternion(class Quaternion const& arg1)
    {
        return stub<member_func_t<void, Matrix44, class Quaternion const&>>(0x552520, this, arg1);
    }

    // 0x552660 | ?Print@Matrix44@@QBEXXZ
    inline void Print()
    {
        return stub<member_func_t<void, Matrix44>>(0x552660, this);
    }

    // 0x5527D0 | ??0Matrix44@@QAE@ABV0@@Z
    inline Matrix44(class Matrix44 const& arg1)
    {
        // stub<member_func_t<void, Matrix44, class Matrix44 const&>>(0x5527D0, this, arg1);

        unimplemented();
    }
};
