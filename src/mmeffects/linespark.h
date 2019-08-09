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
    mmeffects:linespark

    0x4F2AF0 | class asSparkLut * __cdecl GetSparkLut(char *) | ?GetSparkLut@@YAPAVasSparkLut@@PAD@Z
    0x4F2B30 | public: void __thiscall asSparkLut::Init(char *) | ?Init@asSparkLut@@QAEXPAD@Z
    0x4F2D00 | public: void __thiscall asLineSparks::Init(int,class asSparkLut *) | ?Init@asLineSparks@@QAEXHPAVasSparkLut@@@Z
    0x4F2DF0 | public: void __thiscall asLineSparks::RadialBlast(int,class Vector3 &,class Vector3 &) | ?RadialBlast@asLineSparks@@QAEXHAAVVector3@@0@Z
    0x4F3130 | public: void __thiscall asLineSparks::Update(void) | ?Update@asLineSparks@@QAEXXZ
    0x4F3170 | public: void __thiscall asLineSparks::Update(float) | ?Update@asLineSparks@@QAEXM@Z
    0x4F3340 | public: void __thiscall asLineSparks::Draw(void) | ?Draw@asLineSparks@@QAEXXZ
    0x5B7B30 | private: static unsigned int * asSparkLut::BuiltinClut | ?BuiltinClut@asSparkLut@@0PAIA
    0x67B8D0 | class HashTable SLH | ?SLH@@3VHashTable@@A
*/

// 0x4F2AF0 | ?GetSparkLut@@YAPAVasSparkLut@@PAD@Z
inline class asSparkLut* GetSparkLut(char* arg1)
{
    return stub<cdecl_t<class asSparkLut*, char*>>(0x4F2AF0, arg1);
}

// 0x67B8D0 | ?SLH@@3VHashTable@@A
inline extern_var(0x67B8D0, class HashTable, SLH);

class asSparkLut
{
public:
    // 0x4F2B30 | ?Init@asSparkLut@@QAEXPAD@Z
    inline void Init(char* arg1)
    {
        return stub<member_func_t<void, asSparkLut, char*>>(0x4F2B30, this, arg1);
    }

    // 0x5B7B30 | ?BuiltinClut@asSparkLut@@0PAIA
    static inline extern_var(0x5B7B30, uint32_t[32], BuiltinClut);
};

struct asLineSparks
{
public:
    // 0x4F2D00 | ?Init@asLineSparks@@QAEXHPAVasSparkLut@@@Z
    inline void Init(int32_t arg1, class asSparkLut* arg2)
    {
        return stub<member_func_t<void, asLineSparks, int32_t, class asSparkLut*>>(0x4F2D00, this, arg1, arg2);
    }

    // 0x4F2DF0 | ?RadialBlast@asLineSparks@@QAEXHAAVVector3@@0@Z
    inline void RadialBlast(int32_t arg1, class Vector3& arg2, class Vector3& arg3)
    {
        return stub<member_func_t<void, asLineSparks, int32_t, class Vector3&, class Vector3&>>(
            0x4F2DF0, this, arg1, arg2, arg3);
    }

    // 0x4F3130 | ?Update@asLineSparks@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, asLineSparks>>(0x4F3130, this);
    }

    // 0x4F3170 | ?Update@asLineSparks@@QAEXM@Z
    inline void Update(float arg1)
    {
        return stub<member_func_t<void, asLineSparks, float>>(0x4F3170, this, arg1);
    }

    // 0x4F3340 | ?Draw@asLineSparks@@QAEXXZ
    inline void Draw()
    {
        return stub<member_func_t<void, asLineSparks>>(0x4F3340, this);
    }
};
