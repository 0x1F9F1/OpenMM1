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

// vector7:vector2

#include "hooking.h"

// 0x710A84 | ?Vector2Inst@@3UVector2Type@@A
inline extern_var(0x710A84, struct Vector2Type, Vector2Inst);

struct Vector2Type
{
public:
    // Vector2Type::`vftable' @ 0x596218

    // 0x553FB0 | ?Save@Vector2Type@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, Vector2Type, class MiniParser*, void*>>(0x553FB0, this, arg1, arg2);
    }

    // 0x553FE0 | ?Load@Vector2Type@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, Vector2Type, class MiniParser*, void*>>(0x553FE0, this, arg1, arg2);
    }

    // 0x554010 | ?SizeOf@Vector2Type@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, Vector2Type>>(0x554010, this);
    }

    // 0x554020 | ?New@Vector2Type@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, Vector2Type, int32_t>>(0x554020, this, arg1);
    }

    // 0x554070 | ?Delete@Vector2Type@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, Vector2Type, void*, int32_t>>(0x554070, this, arg1, arg2);
    }
};

class Vector2Array
{
public:
    // 0x553C30 | ?Init@Vector2Array@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, Vector2Array, int32_t>>(0x553C30, this, arg1);
    }

    // 0x553CA0 | ?Delete@Vector2Array@@QAEXXZ
    inline void Delete()
    {
        return stub<member_func_t<void, Vector2Array>>(0x553CA0, this);
    }

    // 0x553CF0 | ?NewTable@Vector2Array@@AAEXH@Z
    inline void NewTable(int32_t arg1)
    {
        return stub<member_func_t<void, Vector2Array, int32_t>>(0x553CF0, this, arg1);
    }

    // 0x553D60 | ??AVector2Array@@QAEAAVVector2@@H@Z
    inline class Vector2& operator[](int32_t arg1)
    {
        return stub<member_func_t<class Vector2&, Vector2Array, int32_t>>(0x553D60, this, arg1);
    }

    // 0x553DD0 | ??4Vector2Array@@QAEXAAV0@@Z
    inline void operator=(class Vector2Array& arg1)
    {
        return stub<member_func_t<void, Vector2Array, class Vector2Array&>>(0x553DD0, this, arg1);
    }

    // 0x553EB0 | ?BlockCopy@Vector2Array@@QAEXAAV1@@Z
    inline void BlockCopy(class Vector2Array& arg1)
    {
        return stub<member_func_t<void, Vector2Array, class Vector2Array&>>(0x553EB0, this, arg1);
    }
};

class Vector2
{
public:
    // 0x42B330 | ??0Vector2@@QAE@ABV0@@Z
    inline Vector2(class Vector2 const& arg1)
    {
        stub<member_func_t<void, Vector2, class Vector2 const&>>(0x42B330, this, arg1);
    }

    // 0x553A80 | ??KVector2@@QBE?AV0@M@Z
    inline class Vector2 operator/(float arg1)
    {
        return stub<member_func_t<class Vector2, Vector2, float>>(0x553A80, this, arg1);
    }

    // 0x553AE0 | ??SVector2@@QBE?AV0@XZ
    inline class Vector2 operator~()
    {
        return stub<member_func_t<class Vector2, Vector2>>(0x553AE0, this);
    }

    // 0x553B50 | ?Mag@Vector2@@QBEMXZ
    inline float Mag()
    {
        return stub<member_func_t<float, Vector2>>(0x553B50, this);
    }

    // 0x553BD0 | ?InvMag@Vector2@@QBEMXZ
    inline float InvMag()
    {
        return stub<member_func_t<float, Vector2>>(0x553BD0, this);
    }
};
