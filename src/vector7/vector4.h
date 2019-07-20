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
    vector7:vector4

    0x549140 | public: float __thiscall Vector4::Mag(void) const | ?Mag@Vector4@@QBEMXZ
    0x549210 | public: class Vector4 __thiscall Vector4::operator/(float) const | ??KVector4@@QBE?AV0@M@Z
    0x5492A0 | public: class Vector4 __thiscall Vector4::operator!(void) const | ??7Vector4@@QBE?AV0@XZ
    0x549320 | public: void __thiscall Vector4::Bilinear(float,float,class Vector4 const &,class Vector4 const &,class Vector4 const &,class Vector4 const &) | ?Bilinear@Vector4@@QAEXMMABV1@000@Z
    0x549370 | public: void __thiscall Vector4::CalculatePlane(class Vector3 const &,class Vector3 const &,class Vector3 const &) | ?CalculatePlane@Vector4@@QAEXABVVector3@@00@Z
    0x549470 | public: void __thiscall Vector4::GetLookAt(class Vector3 const &,class Vector3 *,class Vector3 *) const | ?GetLookAt@Vector4@@QBEXABVVector3@@PAV2@1@Z
    0x5494F0 | public: void __thiscall Vector4::Lerp(float,class Vector4 const &,class Vector4 const &) | ?Lerp@Vector4@@QAEXMABV1@0@Z
    0x5495B0 | public: __thiscall Vector3::operator class Vector4(void) const | ??BVector3@@QBE?AVVector4@@XZ
    0x5495E0 | public: void __thiscall Vector4Array::Init(int) | ?Init@Vector4Array@@QAEXH@Z
    0x549650 | public: void __thiscall Vector4Array::Delete(void) | ?Delete@Vector4Array@@QAEXXZ
    0x5496A0 | private: void __thiscall Vector4Array::NewTable(int) | ?NewTable@Vector4Array@@AAEXH@Z
    0x549710 | public: class Vector4 & __thiscall Vector4Array::operator[](int) | ??AVector4Array@@QAEAAVVector4@@H@Z
    0x549790 | public: void __thiscall Vector4Array::operator=(class Vector4Array &) | ??4Vector4Array@@QAEXAAV0@@Z
    0x549890 | public: void __thiscall Vector4Array::BlockCopy(class Vector4Array &) | ?BlockCopy@Vector4Array@@QAEXAAV1@@Z
    0x549990 | public: virtual void __thiscall Vector4Type::Save(class MiniParser *,void *) | ?Save@Vector4Type@@UAEXPAVMiniParser@@PAX@Z
    0x5499D0 | public: virtual void __thiscall Vector4Type::Load(class MiniParser *,void *) | ?Load@Vector4Type@@UAEXPAVMiniParser@@PAX@Z
    0x549A10 | public: virtual unsigned int __thiscall Vector4Type::SizeOf(void) | ?SizeOf@Vector4Type@@UAEIXZ
    0x549A20 | public: virtual void * __thiscall Vector4Type::New(int) | ?New@Vector4Type@@UAEPAXH@Z
    0x549A70 | public: virtual void __thiscall Vector4Type::Delete(void *,int) | ?Delete@Vector4Type@@UAEXPAXH@Z
    0x5960F8 | const Vector4Type::`vftable' | ??_7Vector4Type@@6B@
    0x7108C8 | struct Vector4Type Vector4Inst | ?Vector4Inst@@3UVector4Type@@A
*/

#include "hooking.h"

// 0x7108C8 | ?Vector4Inst@@3UVector4Type@@A
inline extern_var(0x7108C8, struct Vector4Type, Vector4Inst);

class Vector4
{
public:
    float x {0.0f};
    float y {0.0f};
    float z {0.0f};
    float w {0.0f};

    constexpr inline Vector4() noexcept = default;

    // 0x549140 | ?Mag@Vector4@@QBEMXZ
    inline float Mag()
    {
        return stub<member_func_t<float, Vector4>>(0x549140, this);
    }

    // 0x549210 | ??KVector4@@QBE?AV0@M@Z
    inline class Vector4 operator/(float arg1)
    {
        return stub<member_func_t<class Vector4, Vector4, float>>(0x549210, this, arg1);
    }

    // 0x5492A0 | ??7Vector4@@QBE?AV0@XZ
    inline class Vector4 operator!()
    {
        return stub<member_func_t<class Vector4, Vector4>>(0x5492A0, this);
    }

    // 0x549320 | ?Bilinear@Vector4@@QAEXMMABV1@000@Z
    inline void Bilinear(float arg1, float arg2, class Vector4 const& arg3, class Vector4 const& arg4,
        class Vector4 const& arg5, class Vector4 const& arg6)
    {
        return stub<member_func_t<void, Vector4, float, float, class Vector4 const&, class Vector4 const&,
            class Vector4 const&, class Vector4 const&>>(0x549320, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x549370 | ?CalculatePlane@Vector4@@QAEXABVVector3@@00@Z
    inline void CalculatePlane(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3)
    {
        return stub<member_func_t<void, Vector4, class Vector3 const&, class Vector3 const&, class Vector3 const&>>(
            0x549370, this, arg1, arg2, arg3);
    }

    // 0x549470 | ?GetLookAt@Vector4@@QBEXABVVector3@@PAV2@1@Z
    inline void GetLookAt(class Vector3 const& arg1, class Vector3* arg2, class Vector3* arg3)
    {
        return stub<member_func_t<void, Vector4, class Vector3 const&, class Vector3*, class Vector3*>>(
            0x549470, this, arg1, arg2, arg3);
    }

    // 0x5494F0 | ?Lerp@Vector4@@QAEXMABV1@0@Z
    inline void Lerp(float arg1, class Vector4 const& arg2, class Vector4 const& arg3)
    {
        return stub<member_func_t<void, Vector4, float, class Vector4 const&, class Vector4 const&>>(
            0x5494F0, this, arg1, arg2, arg3);
    }

    // 0x5528A0 | ?Set@Vector4@@QAEXMMMM@Z
    inline void Set(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, Vector4, float, float, float, float>>(0x5528A0, this, arg1, arg2, arg3, arg4);
    }

    // 0x5528C0 | ??TVector4@@QBEMABV0@@Z
    inline float operator^(class Vector4 const& arg1)
    {
        return stub<member_func_t<float, Vector4, class Vector4 const&>>(0x5528C0, this, arg1);
    }
};

struct Vector4Type
{
public:
    // Vector4Type::`vftable' @ 0x5960F8

    // 0x549990 | ?Save@Vector4Type@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, Vector4Type, class MiniParser*, void*>>(0x549990, this, arg1, arg2);
    }

    // 0x5499D0 | ?Load@Vector4Type@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, Vector4Type, class MiniParser*, void*>>(0x5499D0, this, arg1, arg2);
    }

    // 0x549A10 | ?SizeOf@Vector4Type@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, Vector4Type>>(0x549A10, this);
    }

    // 0x549A20 | ?New@Vector4Type@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, Vector4Type, int32_t>>(0x549A20, this, arg1);
    }

    // 0x549A70 | ?Delete@Vector4Type@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, Vector4Type, void*, int32_t>>(0x549A70, this, arg1, arg2);
    }
};

class Vector4Array
{
public:
    // 0x5495E0 | ?Init@Vector4Array@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, Vector4Array, int32_t>>(0x5495E0, this, arg1);
    }

    // 0x549650 | ?Delete@Vector4Array@@QAEXXZ
    inline void Delete()
    {
        return stub<member_func_t<void, Vector4Array>>(0x549650, this);
    }

    // 0x5496A0 | ?NewTable@Vector4Array@@AAEXH@Z
    inline void NewTable(int32_t arg1)
    {
        return stub<member_func_t<void, Vector4Array, int32_t>>(0x5496A0, this, arg1);
    }

    // 0x549710 | ??AVector4Array@@QAEAAVVector4@@H@Z
    inline class Vector4& operator[](int32_t arg1)
    {
        return stub<member_func_t<class Vector4&, Vector4Array, int32_t>>(0x549710, this, arg1);
    }

    // 0x549790 | ??4Vector4Array@@QAEXAAV0@@Z
    inline void operator=(class Vector4Array& arg1)
    {
        return stub<member_func_t<void, Vector4Array, class Vector4Array&>>(0x549790, this, arg1);
    }

    // 0x549890 | ?BlockCopy@Vector4Array@@QAEXAAV1@@Z
    inline void BlockCopy(class Vector4Array& arg1)
    {
        return stub<member_func_t<void, Vector4Array, class Vector4Array&>>(0x549890, this, arg1);
    }
};

check_size(Vector4, 16);