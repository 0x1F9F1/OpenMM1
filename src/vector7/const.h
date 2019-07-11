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
    vector7:const

    0x555020 | void __cdecl SetMathSpeedSlow(void) | ?SetMathSpeedSlow@@YAXXZ
    0x555040 | void __cdecl SetMathSpeedMed(void) | ?SetMathSpeedMed@@YAXXZ
    0x555060 | void __cdecl SetMathSpeedFast(void) | ?SetMathSpeedFast@@YAXXZ
    0x555080 | void __cdecl ResetMathSpeed(void) | ?ResetMathSpeed@@YAXXZ
    0x555090 | public: void __thiscall IntArray::Init(int) | ?Init@IntArray@@QAEXH@Z
    0x555100 | public: void __thiscall IntArray::Delete(void) | ?Delete@IntArray@@QAEXXZ
    0x555150 | private: void __thiscall IntArray::NewTable(int) | ?NewTable@IntArray@@AAEXH@Z
    0x5551C0 | public: int & __thiscall IntArray::operator[](int) | ??AIntArray@@QAEAAHH@Z
    0x555220 | public: void __thiscall IntArray::operator=(class IntArray &) | ??4IntArray@@QAEXAAV0@@Z
    0x5552E0 | public: void __thiscall IntArray::BlockCopy(class IntArray &) | ?BlockCopy@IntArray@@QAEXAAV1@@Z
    0x5553B0 | public: void __thiscall FloatArray::Init(int) | ?Init@FloatArray@@QAEXH@Z
    0x555420 | public: void __thiscall FloatArray::Delete(void) | ?Delete@FloatArray@@QAEXXZ
    0x555470 | private: void __thiscall FloatArray::NewTable(int) | ?NewTable@FloatArray@@AAEXH@Z
    0x5554E0 | public: float & __thiscall FloatArray::operator[](int) | ??AFloatArray@@QAEAAMH@Z
    0x555540 | public: void __thiscall FloatArray::operator=(class FloatArray &) | ??4FloatArray@@QAEXAAV0@@Z
    0x555600 | public: void __thiscall FloatArray::BlockCopy(class FloatArray &) | ?BlockCopy@FloatArray@@QAEXAAV1@@Z
    0x710A88 | int MathSpeed | ?MathSpeed@@3HA
    0x710A8C | int OldMathSpeed | ?OldMathSpeed@@3HA
*/

#include "hooking.h"

// 0x555020 | ?SetMathSpeedSlow@@YAXXZ
inline void SetMathSpeedSlow()
{
    return stub<cdecl_t<void>>(0x555020);
}

// 0x555040 | ?SetMathSpeedMed@@YAXXZ
inline void SetMathSpeedMed()
{
    return stub<cdecl_t<void>>(0x555040);
}

// 0x555060 | ?SetMathSpeedFast@@YAXXZ
inline void SetMathSpeedFast()
{
    return stub<cdecl_t<void>>(0x555060);
}

// 0x555080 | ?ResetMathSpeed@@YAXXZ
inline void ResetMathSpeed()
{
    return stub<cdecl_t<void>>(0x555080);
}

// 0x710A88 | ?MathSpeed@@3HA
inline extern_var(0x710A88, int32_t, MathSpeed);

// 0x710A8C | ?OldMathSpeed@@3HA
inline extern_var(0x710A8C, int32_t, OldMathSpeed);

#if 0
class FloatArray
{
public:
    // 0x5553B0 | ?Init@FloatArray@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, FloatArray, int32_t>>(0x5553B0, this, arg1);
    }

    // 0x555420 | ?Delete@FloatArray@@QAEXXZ
    inline void Delete()
    {
        return stub<member_func_t<void, FloatArray>>(0x555420, this);
    }

    // 0x555470 | ?NewTable@FloatArray@@AAEXH@Z
    inline void NewTable(int32_t arg1)
    {
        return stub<member_func_t<void, FloatArray, int32_t>>(0x555470, this, arg1);
    }

    // 0x5554E0 | ??AFloatArray@@QAEAAMH@Z
    inline float& operator[](int32_t arg1)
    {
        return stub<member_func_t<float&, FloatArray, int32_t>>(0x5554E0, this, arg1);
    }

    // 0x555540 | ??4FloatArray@@QAEXAAV0@@Z
    inline void operator=(class FloatArray& arg1)
    {
        return stub<member_func_t<void, FloatArray, class FloatArray&>>(0x555540, this, arg1);
    }

    // 0x555600 | ?BlockCopy@FloatArray@@QAEXAAV1@@Z
    inline void BlockCopy(class FloatArray& arg1)
    {
        return stub<member_func_t<void, FloatArray, class FloatArray&>>(0x555600, this, arg1);
    }
};

class IntArray
{
public:
    // 0x555090 | ?Init@IntArray@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, IntArray, int32_t>>(0x555090, this, arg1);
    }

    // 0x555100 | ?Delete@IntArray@@QAEXXZ
    inline void Delete()
    {
        return stub<member_func_t<void, IntArray>>(0x555100, this);
    }

    // 0x555150 | ?NewTable@IntArray@@AAEXH@Z
    inline void NewTable(int32_t arg1)
    {
        return stub<member_func_t<void, IntArray, int32_t>>(0x555150, this, arg1);
    }

    // 0x5551C0 | ??AIntArray@@QAEAAHH@Z
    inline int32_t& operator[](int32_t arg1)
    {
        return stub<member_func_t<int32_t&, IntArray, int32_t>>(0x5551C0, this, arg1);
    }

    // 0x555220 | ??4IntArray@@QAEXAAV0@@Z
    inline void operator=(class IntArray& arg1)
    {
        return stub<member_func_t<void, IntArray, class IntArray&>>(0x555220, this, arg1);
    }

    // 0x5552E0 | ?BlockCopy@IntArray@@QAEXAAV1@@Z
    inline void BlockCopy(class IntArray& arg1)
    {
        return stub<member_func_t<void, IntArray, class IntArray&>>(0x5552E0, this, arg1);
    }
};
#endif
