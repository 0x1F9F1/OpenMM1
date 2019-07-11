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
    vector7:geomath

    0x552C60 | class Vector4 __cdecl GetBoundSphere(int,class Vector3 *) | ?GetBoundSphere@@YA?AVVector4@@HPAVVector3@@@Z
    0x552CC0 | void __cdecl GetBoundInfo(int,class Vector3 *,class Vector3 *,class Vector3 *,class Vector3 *,float *) | ?GetBoundInfo@@YAXHPAVVector3@@000PAM@Z
    0x553280 | int __cdecl CollideTri(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,float &,class Vector3 &,class Vector3 &) | ?CollideTri@@YAHABVVector3@@0000AAMAAV1@2@Z
    0x553740 | int __cdecl IsQuadCoplanar(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &) | ?IsQuadCoplanar@@YAHAAVVector3@@000@Z
    0x553890 | void __cdecl ComputeMirrorMatrix(class Matrix34 &,class Vector4 &) | ?ComputeMirrorMatrix@@YAXAAVMatrix34@@AAVVector4@@@Z
    0x553960 | void __cdecl ComputeShadowMatrix(class Matrix34 &,class Vector4 &) | ?ComputeShadowMatrix@@YAXAAVMatrix34@@AAVVector4@@@Z
    0x553A00 | public: void __thiscall Vector3::Neg(class Vector3 const &) | ?Neg@Vector3@@QAEXABV1@@Z
    0x553A20 | public: void __thiscall Vector3::Cross(class Vector3 const &,class Vector3 const &) | ?Cross@Vector3@@QAEXABV1@0@Z
    0x5C69A4 | float QuadCoplanarTolerance | ?QuadCoplanarTolerance@@3MA
*/

#include "hooking.h"

// 0x552C60 | ?GetBoundSphere@@YA?AVVector4@@HPAVVector3@@@Z
inline class Vector4 GetBoundSphere(int32_t arg1, class Vector3* arg2)
{
    return stub<cdecl_t<class Vector4, int32_t, class Vector3*>>(0x552C60, arg1, arg2);
}

// 0x552CC0 | ?GetBoundInfo@@YAXHPAVVector3@@000PAM@Z
inline void GetBoundInfo(
    int32_t arg1, class Vector3* arg2, class Vector3* arg3, class Vector3* arg4, class Vector3* arg5, float* arg6)
{
    return stub<cdecl_t<void, int32_t, class Vector3*, class Vector3*, class Vector3*, class Vector3*, float*>>(
        0x552CC0, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x553280 | ?CollideTri@@YAHABVVector3@@0000AAMAAV1@2@Z
inline int32_t CollideTri(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3 const& arg5, float& arg6, class Vector3& arg7, class Vector3& arg8)
{
    return stub<cdecl_t<int32_t, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector3 const&, float&, class Vector3&, class Vector3&>>(
        0x553280, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

// 0x553740 | ?IsQuadCoplanar@@YAHAAVVector3@@000@Z
inline int32_t IsQuadCoplanar(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
{
    return stub<cdecl_t<int32_t, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
        0x553740, arg1, arg2, arg3, arg4);
}

// 0x553890 | ?ComputeMirrorMatrix@@YAXAAVMatrix34@@AAVVector4@@@Z
inline void ComputeMirrorMatrix(class Matrix34& arg1, class Vector4& arg2)
{
    return stub<cdecl_t<void, class Matrix34&, class Vector4&>>(0x553890, arg1, arg2);
}

// 0x553960 | ?ComputeShadowMatrix@@YAXAAVMatrix34@@AAVVector4@@@Z
inline void ComputeShadowMatrix(class Matrix34& arg1, class Vector4& arg2)
{
    return stub<cdecl_t<void, class Matrix34&, class Vector4&>>(0x553960, arg1, arg2);
}

// 0x5C69A4 | ?QuadCoplanarTolerance@@3MA
inline extern_var(0x5C69A4, float, QuadCoplanarTolerance);
