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
    vector7:vector3

    0x546580 | public: void __fastcall Vector3::Dot(class Vector3 const &,class Matrix34 const &) | ?Dot@Vector3@@QAIXABV1@ABVMatrix34@@@Z
    0x5465F0 | public: void __fastcall Vector3::Dot3x3(class Vector3 const &,class Matrix34 const &) | ?Dot3x3@Vector3@@QAIXABV1@ABVMatrix34@@@Z
    0x546650 | public: float __thiscall Vector3::Cos(class Vector3 const &) const | ?Cos@Vector3@@QBEMABV1@@Z
    0x546790 | public: float __thiscall Vector3::Angle(class Vector3 const &) const | ?Angle@Vector3@@QBEMABV1@@Z
    0x546960 | public: float __thiscall Vector3::Area(class Vector3 const &,class Vector3 const &) const | ?Area@Vector3@@QBEMABV1@0@Z
    0x546A00 | public: class Vector3 __thiscall Vector3::Project(class Vector3 &) | ?Project@Vector3@@QAE?AV1@AAV1@@Z
    0x546AA0 | public: float __thiscall Vector3::Atan3(char,char) const | ?Atan3@Vector3@@QBEMDD@Z
    0x546C60 | public: class Vector3 __thiscall Vector3::Reflect(class Vector3 const &) const | ?Reflect@Vector3@@QBE?AV1@ABV1@@Z
    0x546D60 | public: void __thiscall Vector3::Rotate(float,int) | ?Rotate@Vector3@@QAEXMH@Z
    0x546F30 | public: int __thiscall Vector3::HalfSpace(class Vector4 const &) const | ?HalfSpace@Vector3@@QBEHABVVector4@@@Z
    0x546FE0 | public: int __thiscall Vector3::RayIntersectPlane(class Vector3 const &,class Vector3 const &,class Vector4 const &,float) | ?RayIntersectPlane@Vector3@@QAEHABV1@0ABVVector4@@M@Z
    0x547140 | public: int __thiscall Vector3::Approach(class Vector3 const &,float,float,float *) | ?Approach@Vector3@@QAEHABV1@MMPAM@Z
    0x547280 | public: void __thiscall Vector3::CatmullRom(float,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &) | ?CatmullRom@Vector3@@QAEXMABV1@000@Z
    0x547430 | public: void __thiscall Vector3::Slerp(float,class Vector3 const &,class Vector3 const &) | ?Slerp@Vector3@@QAEXMABV1@0@Z
    0x5475F0 | public: void __thiscall Vector3::Hermite(float,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,float) | ?Hermite@Vector3@@QAEXMABV1@000M@Z
    0x547790 | public: void __thiscall Vector3::Bilinear(float,float,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &) | ?Bilinear@Vector3@@QAEXMMABV1@000@Z
    0x547860 | public: float __thiscall Vector3::PointToLine(class Vector3 const &,class Vector3 const &) const | ?PointToLine@Vector3@@QBEMABV1@0@Z
    0x547940 | public: float __thiscall Vector3::PointToSegment(class Vector3 const &,class Vector3 const &,class Vector3 &,int &,float *) const | ?PointToSegment@Vector3@@QBEMABV1@0AAV1@AAHPAM@Z
    0x547B10 | public: float __thiscall Vector3::PointToSegment2(class Vector3 const &,class Vector3 const &,class Vector3 &,int &,float *) const | ?PointToSegment2@Vector3@@QBEMABV1@0AAV1@AAHPAM@Z
    0x547D30 | public: unsigned int __thiscall Vector3::Equal(class Vector3 const &,float) const | ?Equal@Vector3@@QBEIABV1@M@Z
    0x547D90 | public: void __thiscall Vector3::rgbtohsv(void) | ?rgbtohsv@Vector3@@QAEXXZ
    0x547EB0 | public: void __thiscall Vector3::hsvtorgb(void) | ?hsvtorgb@Vector3@@QAEXXZ
    0x547FE0 | public: void __thiscall Vector3::Clamp(float,float) | ?Clamp@Vector3@@QAEXMM@Z
    0x548070 | public: void __thiscall Vector3::Clamp(class Vector3 const &,class Vector3 const &) | ?Clamp@Vector3@@QAEXABV1@0@Z
    0x548110 | public: void __thiscall Vector3::GetPolar(class Vector3 const &,class Vector4 *,class Vector3 *) const | ?GetPolar@Vector3@@QBEXABV1@PAVVector4@@PAV1@@Z
    0x548250 | public: void __thiscall Vector3::Rebound(class Vector3 const &,float) | ?Rebound@Vector3@@QAEXABV1@M@Z
    0x5482B0 | public: void __thiscall Vector3::Bounce(class Vector3 const &,float) | ?Bounce@Vector3@@QAEXABV1@M@Z
    0x548340 | public: float __thiscall Vector3::Mag(void) const | ?Mag@Vector3@@QBEMXZ
    0x548400 | public: float __thiscall Vector3::InvMag(void) const | ?InvMag@Vector3@@QBEMXZ
    0x548460 | public: float __thiscall Vector3::Dist(class Vector3 const &) const | ?Dist@Vector3@@QBEMABV1@@Z
    0x548520 | void __cdecl TransformVertNorm(class Vector3 &,class Vector3 &,class Vector3 const &,class Vector3 &,class Matrix34 const &) | ?TransformVertNorm@@YAXAAVVector3@@0ABV1@0ABVMatrix34@@@Z
    0x548610 | void __cdecl TransformVertList(class Vector3 *,class Vector3 const *,int,class Matrix34 const &) | ?TransformVertList@@YAXPAVVector3@@PBV1@HABVMatrix34@@@Z
    0x5486D0 | void __cdecl TransformVertList(class Vector3 * *,class Vector3 const * *,int,class Matrix34 const &) | ?TransformVertList@@YAXPAPAVVector3@@PAPBV1@HABVMatrix34@@@Z
    0x548790 | void __cdecl TransformNormalList(class Vector3 *,class Vector3 const *,int,class Matrix34 const &) | ?TransformNormalList@@YAXPAVVector3@@PBV1@HABVMatrix34@@@Z
    0x548860 | void __cdecl TransformNormalList(class Vector3 * *,class Vector3 const * *,int,class Matrix34 const &) | ?TransformNormalList@@YAXPAPAVVector3@@PAPBV1@HABVMatrix34@@@Z
    0x548910 | public: void __thiscall Vector3Array::Init(int) | ?Init@Vector3Array@@QAEXH@Z
    0x548980 | public: void __thiscall Vector3Array::Delete(void) | ?Delete@Vector3Array@@QAEXXZ
    0x5489D0 | private: void __thiscall Vector3Array::NewTable(int) | ?NewTable@Vector3Array@@AAEXH@Z
    0x548A40 | public: class Vector3 & __thiscall Vector3Array::operator[](int) | ??AVector3Array@@QAEAAVVector3@@H@Z
    0x548AC0 | public: void __thiscall Vector3Array::operator=(class Vector3Array &) | ??4Vector3Array@@QAEXAAV0@@Z
    0x548BB0 | public: void __thiscall Vector3Array::BlockCopy(class Vector3Array &) | ?BlockCopy@Vector3Array@@QAEXAAV1@@Z
    0x548D50 | public: __thiscall Vector3::operator class Vector2(void) const | ??BVector3@@QBE?AVVector2@@XZ
    0x548D70 | public: __thiscall Vector2::operator class Vector3(void) const | ??BVector2@@QBE?AVVector3@@XZ
    0x548DB0 | public: virtual void __thiscall Vector3Type::Save(class MiniParser *,void *) | ?Save@Vector3Type@@UAEXPAVMiniParser@@PAX@Z
    0x548DF0 | public: virtual void __thiscall Vector3Type::Load(class MiniParser *,void *) | ?Load@Vector3Type@@UAEXPAVMiniParser@@PAX@Z
    0x548E20 | public: virtual unsigned int __thiscall Vector3Type::SizeOf(void) | ?SizeOf@Vector3Type@@UAEIXZ
    0x548E30 | public: virtual void * __thiscall Vector3Type::New(int) | ?New@Vector3Type@@UAEPAXH@Z
    0x548E80 | public: virtual void __thiscall Vector3Type::Delete(void *,int) | ?Delete@Vector3Type@@UAEXPAXH@Z
    0x5960C8 | const Vector3Type::`vftable' | ??_7Vector3Type@@6B@
    0x710888 | class Vector3 ORIGIN | ?ORIGIN@@3VVector3@@A
    0x710898 | class Vector3 XAXIS | ?XAXIS@@3VVector3@@A
    0x7108A4 | struct Vector3Type Vector3Inst | ?Vector3Inst@@3UVector3Type@@A
    0x7108A8 | class Vector3 YAXIS | ?YAXIS@@3VVector3@@A
    0x7108B8 | class Vector3 ZAXIS | ?ZAXIS@@3VVector3@@A
*/

class Vector3
{
public:
    float x {0.0f};
    float y {0.0f};
    float z {0.0f};

    inline constexpr Vector3() noexcept = default;

    // 0x436E50 | ??0Vector3@@QAE@MMM@Z
    inline constexpr Vector3(float x, float y, float z) noexcept;

    // 0x452A60 | ??HVector3@@QBE?AV0@ABV0@@Z
    inline constexpr Vector3 operator+(Vector3 const& other) noexcept;

    // 0x43A760 | ??GVector3@@QBE?AV0@ABV0@@Z
    inline constexpr Vector3 operator-(Vector3 const& other) noexcept;

    // 0x452A90 | ??DVector3@@QBE?AV0@M@Z
    inline constexpr Vector3 operator*(float value) noexcept;

    // 0x4CCDA0 | ??KVector3@@QBE?AV0@M@Z
    inline constexpr Vector3 operator/(float value) noexcept;

    // 0x452B30 | ??GVector3@@QBE?AV0@XZ
    inline constexpr Vector3 operator-() noexcept;

    // 0x4CED90 | ??YVector3@@QAEXABV0@@Z
    inline constexpr void operator+=(Vector3 const& other) noexcept;

    // 0x4D1D80 | ??ZVector3@@QAEXABV0@@Z
    inline constexpr void operator-=(Vector3 const& other) noexcept;

    // 0x4D1DB0 | ??XVector3@@QAEXM@Z
    inline constexpr void operator*=(float value) noexcept;

    // 0x452B00 | ??TVector3@@QBEMABV0@@Z
    inline constexpr float operator^(Vector3 const& other) noexcept;

    // 0x4D1D50 | ??TVector3@@QBE?AV0@ABVMatrix34@@@Z
    inline Vector3 operator^(class Matrix34 const& transform) noexcept;

    // 0x4550A0 | ??LVector3@@QBE?AV0@ABV0@@Z
    Vector3 operator%(Vector3 const& other) noexcept;

    // 0x4CED10 | ?Set@Vector3@@QAEXMMM@Z
    inline constexpr void Set(float x, float y, float z) noexcept;

    // 0x4550F0 | ?Scale@Vector3@@QAEXABV1@M@Z
    inline constexpr void Scale(Vector3 const& other, float scale) noexcept;

    // 0x5153F0 | ?Add@Vector3@@QAEXABV1@0@Z
    inline void Add(Vector3 const& arg1, Vector3 const& arg2)
    {
        return stub<member_func_t<void, Vector3, Vector3 const&, Vector3 const&>>(0x5153F0, this, arg1, arg2);
    }

    // 0x546580 | ?Dot@Vector3@@QAIXABV1@ABVMatrix34@@@Z
    inline void Dot(Vector3 const& arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<void, Vector3, Vector3 const&, class Matrix34 const&>>(0x546580, this, arg1, arg2);
    }

    // 0x5465F0 | ?Dot3x3@Vector3@@QAIXABV1@ABVMatrix34@@@Z
    inline void Dot3x3(Vector3 const& arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<void, Vector3, Vector3 const&, class Matrix34 const&>>(0x5465F0, this, arg1, arg2);
    }

    // 0x546650 | ?Cos@Vector3@@QBEMABV1@@Z
    inline float Cos(Vector3 const& arg1)
    {
        return stub<member_func_t<float, Vector3, Vector3 const&>>(0x546650, this, arg1);
    }

    // 0x546790 | ?Angle@Vector3@@QBEMABV1@@Z
    inline float Angle(Vector3 const& arg1)
    {
        return stub<member_func_t<float, Vector3, Vector3 const&>>(0x546790, this, arg1);
    }

    // 0x546960 | ?Area@Vector3@@QBEMABV1@0@Z
    inline float Area(Vector3 const& arg1, Vector3 const& arg2)
    {
        return stub<member_func_t<float, Vector3, Vector3 const&, Vector3 const&>>(0x546960, this, arg1, arg2);
    }

    // 0x546A00 | ?Project@Vector3@@QAE?AV1@AAV1@@Z
    inline Vector3 Project(Vector3& arg1)
    {
        return stub<member_func_t<Vector3, Vector3, Vector3&>>(0x546A00, this, arg1);
    }

    // 0x546AA0 | ?Atan3@Vector3@@QBEMDD@Z
    inline float Atan3(char arg1, char arg2)
    {
        return stub<member_func_t<float, Vector3, char, char>>(0x546AA0, this, arg1, arg2);
    }

    // 0x546C60 | ?Reflect@Vector3@@QBE?AV1@ABV1@@Z
    inline Vector3 Reflect(Vector3 const& arg1)
    {
        return stub<member_func_t<Vector3, Vector3, Vector3 const&>>(0x546C60, this, arg1);
    }

    // 0x546D60 | ?Rotate@Vector3@@QAEXMH@Z
    inline void Rotate(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, Vector3, float, int32_t>>(0x546D60, this, arg1, arg2);
    }

    // 0x546F30 | ?HalfSpace@Vector3@@QBEHABVVector4@@@Z
    inline int32_t HalfSpace(class Vector4 const& arg1)
    {
        return stub<member_func_t<int32_t, Vector3, class Vector4 const&>>(0x546F30, this, arg1);
    }

    // 0x546FE0 | ?RayIntersectPlane@Vector3@@QAEHABV1@0ABVVector4@@M@Z
    inline int32_t RayIntersectPlane(Vector3 const& arg1, Vector3 const& arg2, class Vector4 const& arg3, float arg4)
    {
        return stub<member_func_t<int32_t, Vector3, Vector3 const&, Vector3 const&, class Vector4 const&, float>>(
            0x546FE0, this, arg1, arg2, arg3, arg4);
    }

    // 0x547140 | ?Approach@Vector3@@QAEHABV1@MMPAM@Z
    inline int32_t Approach(Vector3 const& arg1, float arg2, float arg3, float* arg4)
    {
        return stub<member_func_t<int32_t, Vector3, Vector3 const&, float, float, float*>>(
            0x547140, this, arg1, arg2, arg3, arg4);
    }

    // 0x547280 | ?CatmullRom@Vector3@@QAEXMABV1@000@Z
    inline void CatmullRom(
        float arg1, Vector3 const& arg2, Vector3 const& arg3, Vector3 const& arg4, Vector3 const& arg5)
    {
        return stub<
            member_func_t<void, Vector3, float, Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&>>(
            0x547280, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x547430 | ?Slerp@Vector3@@QAEXMABV1@0@Z
    inline void Slerp(float arg1, Vector3 const& arg2, Vector3 const& arg3)
    {
        return stub<member_func_t<void, Vector3, float, Vector3 const&, Vector3 const&>>(
            0x547430, this, arg1, arg2, arg3);
    }

    // 0x5475F0 | ?Hermite@Vector3@@QAEXMABV1@000M@Z
    inline void Hermite(
        float arg1, Vector3 const& arg2, Vector3 const& arg3, Vector3 const& arg4, Vector3 const& arg5, float arg6)
    {
        return stub<
            member_func_t<void, Vector3, float, Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&, float>>(
            0x5475F0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x547790 | ?Bilinear@Vector3@@QAEXMMABV1@000@Z
    inline void Bilinear(
        float arg1, float arg2, Vector3 const& arg3, Vector3 const& arg4, Vector3 const& arg5, Vector3 const& arg6)
    {
        return stub<
            member_func_t<void, Vector3, float, float, Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&>>(
            0x547790, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x547860 | ?PointToLine@Vector3@@QBEMABV1@0@Z
    inline float PointToLine(Vector3 const& arg1, Vector3 const& arg2)
    {
        return stub<member_func_t<float, Vector3, Vector3 const&, Vector3 const&>>(0x547860, this, arg1, arg2);
    }

    // 0x547940 | ?PointToSegment@Vector3@@QBEMABV1@0AAV1@AAHPAM@Z
    inline float PointToSegment(Vector3 const& arg1, Vector3 const& arg2, Vector3& arg3, int32_t& arg4, float* arg5)
    {
        return stub<member_func_t<float, Vector3, Vector3 const&, Vector3 const&, Vector3&, int32_t&, float*>>(
            0x547940, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x547B10 | ?PointToSegment2@Vector3@@QBEMABV1@0AAV1@AAHPAM@Z
    inline float PointToSegment2(Vector3 const& arg1, Vector3 const& arg2, Vector3& arg3, int32_t& arg4, float* arg5)
    {
        return stub<member_func_t<float, Vector3, Vector3 const&, Vector3 const&, Vector3&, int32_t&, float*>>(
            0x547B10, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x547D30 | ?Equal@Vector3@@QBEIABV1@M@Z
    inline uint32_t Equal(Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<uint32_t, Vector3, Vector3 const&, float>>(0x547D30, this, arg1, arg2);
    }

    // 0x547D90 | ?rgbtohsv@Vector3@@QAEXXZ
    inline void rgbtohsv()
    {
        return stub<member_func_t<void, Vector3>>(0x547D90, this);
    }

    // 0x547EB0 | ?hsvtorgb@Vector3@@QAEXXZ
    inline void hsvtorgb()
    {
        return stub<member_func_t<void, Vector3>>(0x547EB0, this);
    }

    // 0x547FE0 | ?Clamp@Vector3@@QAEXMM@Z
    inline void Clamp(float arg1, float arg2)
    {
        return stub<member_func_t<void, Vector3, float, float>>(0x547FE0, this, arg1, arg2);
    }

    // 0x548070 | ?Clamp@Vector3@@QAEXABV1@0@Z
    inline void Clamp(Vector3 const& arg1, Vector3 const& arg2)
    {
        return stub<member_func_t<void, Vector3, Vector3 const&, Vector3 const&>>(0x548070, this, arg1, arg2);
    }

    // 0x548110 | ?GetPolar@Vector3@@QBEXABV1@PAVVector4@@PAV1@@Z
    inline void GetPolar(Vector3 const& arg1, class Vector4* arg2, Vector3* arg3)
    {
        return stub<member_func_t<void, Vector3, Vector3 const&, class Vector4*, Vector3*>>(
            0x548110, this, arg1, arg2, arg3);
    }

    // 0x548250 | ?Rebound@Vector3@@QAEXABV1@M@Z
    inline void Rebound(Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, Vector3, Vector3 const&, float>>(0x548250, this, arg1, arg2);
    }

    // 0x5482B0 | ?Bounce@Vector3@@QAEXABV1@M@Z
    inline void Bounce(Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, Vector3, Vector3 const&, float>>(0x5482B0, this, arg1, arg2);
    }

    // 0x548340 | ?Mag@Vector3@@QBEMXZ
    inline float Mag()
    {
        return stub<member_func_t<float, Vector3>>(0x548340, this);
    }

    // 0x548400 | ?InvMag@Vector3@@QBEMXZ
    inline float InvMag()
    {
        return stub<member_func_t<float, Vector3>>(0x548400, this);
    }

    // 0x548460 | ?Dist@Vector3@@QBEMABV1@@Z
    inline float Dist(Vector3 const& arg1)
    {
        return stub<member_func_t<float, Vector3, Vector3 const&>>(0x548460, this, arg1);
    }

    // 0x552850 | ??SVector3@@QBE?AV0@XZ
    inline Vector3 operator~()
    {
        return stub<member_func_t<Vector3, Vector3>>(0x552850, this);
    }

    // 0x553A00 | ?Neg@Vector3@@QAEXABV1@@Z
    inline void Neg(Vector3 const& arg1)
    {
        return stub<member_func_t<void, Vector3, Vector3 const&>>(0x553A00, this, arg1);
    }

    // 0x553A20 | ?Cross@Vector3@@QAEXABV1@0@Z
    inline void Cross(Vector3 const& arg1, Vector3 const& arg2)
    {
        return stub<member_func_t<void, Vector3, Vector3 const&, Vector3 const&>>(0x553A20, this, arg1, arg2);
    }

    // 0x5495B0 | ??BVector3@@QBE?AVVector4@@XZ
    // inline operator Vector4()
    // {
    //     return stub<member_func_t<class Vector4, Vector3>>(0x5495B0, this);
    // }

    // 0x548D50 | ??BVector3@@QBE?AVVector2@@XZ
    // inline operator Vector2()
    // {
    //     return stub<member_func_t<class Vector2, Vector3>>(0x548D50, this);
    // }
};

inline constexpr Vector3::Vector3(float x, float y, float z) noexcept
    : x(x)
    , y(y)
    , z(z)
{}

inline constexpr Vector3 Vector3::operator-(Vector3 const& other) noexcept
{
    return {x - other.x, y - other.y, z - other.z};
}

inline constexpr Vector3 Vector3::operator+(Vector3 const& other) noexcept
{
    return {x + other.x, y + other.y, z + other.z};
}

inline constexpr Vector3 Vector3::operator*(float value) noexcept
{
    return {x * value, y * value, z * value};
}

inline constexpr float Vector3::operator^(Vector3 const& other) noexcept
{
    return (x * other.x) + (y * other.z) + (z * other.z);
}

inline constexpr Vector3 Vector3::operator-() noexcept
{
    return {-x, -y, -z};
}

inline constexpr void Vector3::Scale(Vector3 const& other, float scale) noexcept
{
    x = other.x * scale;
    y = other.y * scale;
    z = other.z * scale;
}

inline constexpr Vector3 Vector3::operator/(float value) noexcept
{
    value = 1.0f / value;

    return {x * value, y * value, z * value};
}

inline constexpr void Vector3::Set(float x_, float y_, float z_) noexcept
{
    x = x_;
    y = y_;
    z = z_;
}

inline constexpr void Vector3::operator+=(Vector3 const& other) noexcept
{
    x += other.x;
    y += other.y;
    z += other.z;
}

inline constexpr void Vector3::operator-=(Vector3 const& other) noexcept
{
    x -= other.x;
    y -= other.y;
    z -= other.z;
}

inline constexpr void Vector3::operator*=(float value) noexcept
{
    x *= value;
    y *= value;
    z *= value;
}

inline Vector3 Vector3::operator^(Matrix34 const& transform) noexcept
{
    Vector3 result;
    result.Dot(*this, transform);
    return result;
}

// 0x548520 | ?TransformVertNorm@@YAXAAVVector3@@0ABV1@0ABVMatrix34@@@Z
inline void TransformVertNorm(
    Vector3& arg1, Vector3& arg2, Vector3 const& arg3, Vector3& arg4, class Matrix34 const& arg5)
{
    return stub<cdecl_t<void, Vector3&, Vector3&, Vector3 const&, Vector3&, class Matrix34 const&>>(
        0x548520, arg1, arg2, arg3, arg4, arg5);
}

// 0x548610 | ?TransformVertList@@YAXPAVVector3@@PBV1@HABVMatrix34@@@Z
inline void TransformVertList(Vector3* arg1, Vector3 const* arg2, int32_t arg3, class Matrix34 const& arg4)
{
    return stub<cdecl_t<void, Vector3*, Vector3 const*, int32_t, class Matrix34 const&>>(
        0x548610, arg1, arg2, arg3, arg4);
}

// 0x5486D0 | ?TransformVertList@@YAXPAPAVVector3@@PAPBV1@HABVMatrix34@@@Z
inline void TransformVertList(Vector3** arg1, Vector3 const** arg2, int32_t arg3, class Matrix34 const& arg4)
{
    return stub<cdecl_t<void, Vector3**, Vector3 const**, int32_t, class Matrix34 const&>>(
        0x5486D0, arg1, arg2, arg3, arg4);
}

// 0x548790 | ?TransformNormalList@@YAXPAVVector3@@PBV1@HABVMatrix34@@@Z
inline void TransformNormalList(Vector3* arg1, Vector3 const* arg2, int32_t arg3, class Matrix34 const& arg4)
{
    return stub<cdecl_t<void, Vector3*, Vector3 const*, int32_t, class Matrix34 const&>>(
        0x548790, arg1, arg2, arg3, arg4);
}

// 0x548860 | ?TransformNormalList@@YAXPAPAVVector3@@PAPBV1@HABVMatrix34@@@Z
inline void TransformNormalList(Vector3** arg1, Vector3 const** arg2, int32_t arg3, class Matrix34 const& arg4)
{
    return stub<cdecl_t<void, Vector3**, Vector3 const**, int32_t, class Matrix34 const&>>(
        0x548860, arg1, arg2, arg3, arg4);
}

// 0x710888 | ?ORIGIN@@3VVector3@@A
constexpr Vector3 ORIGIN {0.0f, 0.0f, 0.0f};

// 0x710898 | ?XAXIS@@3VVector3@@A
constexpr Vector3 XAXIS {1.0f, 0.0f, 0.0f};

// 0x7108A8 | ?YAXIS@@3VVector3@@A
constexpr Vector3 YAXIS {0.0f, 1.0f, 0.0f};

// 0x7108B8 | ?ZAXIS@@3VVector3@@A
constexpr Vector3 ZAXIS {0.0f, 0.0f, 1.0f};

// 0x7108A4 | ?Vector3Inst@@3UVector3Type@@A
extern struct Vector3Type Vector3Inst;

#if 0
Vector3Array
{
public:
    // 0x548910 | ?Init@Vector3Array@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, Vector3Array, int32_t>>(0x548910, this, arg1);
    }

    // 0x548980 | ?Delete@Vector3Array@@QAEXXZ
    inline void Delete()
    {
        return stub<member_func_t<void, Vector3Array>>(0x548980, this);
    }

    // 0x5489D0 | ?NewTable@Vector3Array@@AAEXH@Z
    inline void NewTable(int32_t arg1)
    {
        return stub<member_func_t<void, Vector3Array, int32_t>>(0x5489D0, this, arg1);
    }

    // 0x548A40 | ??AVector3Array@@QAEAAVVector3@@H@Z
    inline Vector3& operator[](int32_t arg1)
    {
        return stub<member_func_t<Vector3&, Vector3Array, int32_t>>(0x548A40, this, arg1);
    }

    // 0x548AC0 | ??4Vector3Array@@QAEXAAV0@@Z
    inline void operator=(Vector3Array& arg1)
    {
        return stub<member_func_t<void, Vector3Array, Vector3Array&>>(0x548AC0, this, arg1);
    }

    // 0x548BB0 | ?BlockCopy@Vector3Array@@QAEXAAV1@@Z
    inline void BlockCopy(Vector3Array& arg1)
    {
        return stub<member_func_t<void, Vector3Array, Vector3Array&>>(0x548BB0, this, arg1);
    }
};
#endif

check_size(Vector3, 12);
