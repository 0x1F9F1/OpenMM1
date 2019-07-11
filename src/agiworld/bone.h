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

// agiworld:bone

#include "hooking.h"

// 0x506330 | ?Matrix34__FromEulersXZY@@YAXAAVMatrix34@@ABVVector3@@@Z
inline void Matrix34__FromEulersXZY(class Matrix34& arg1, class Vector3 const& arg2)
{
    return stub<cdecl_t<void, class Matrix34&, class Vector3 const&>>(0x506330, arg1, arg2);
}

class bnBone
{
public:
    // 0x506080 | ??0bnBone@@QAE@XZ
    inline bnBone()
    {
        stub<member_func_t<void, bnBone>>(0x506080, this);
    }

    // 0x5060E0 | ?AddChild@bnBone@@QAEXPAV1@@Z
    inline void AddChild(class bnBone* arg1)
    {
        return stub<member_func_t<void, bnBone, class bnBone*>>(0x5060E0, this, arg1);
    }

    // 0x506120 | ?Load@bnBone@@QAEHPAVTokenizer@@PAPAV1@@Z
    inline int32_t Load(class Tokenizer* arg1, class bnBone** arg2)
    {
        return stub<member_func_t<int32_t, bnBone, class Tokenizer*, class bnBone**>>(0x506120, this, arg1, arg2);
    }

    // 0x506210 | ?Transform@bnBone@@QAEXPAVMatrix34@@@Z
    inline void Transform(class Matrix34* arg1)
    {
        return stub<member_func_t<void, bnBone, class Matrix34*>>(0x506210, this, arg1);
    }

    // 0x506260 | ?Draw@bnBone@@QAEXXZ
    inline void Draw()
    {
        return stub<member_func_t<void, bnBone>>(0x506260, this);
    }

    // 0x506270 | ?Attach@bnBone@@QAEXQAVMatrix34@@AAH@Z
    inline void Attach(class Matrix34* const arg1, int32_t& arg2)
    {
        return stub<member_func_t<void, bnBone, class Matrix34* const, int32_t&>>(0x506270, this, arg1, arg2);
    }

    // 0x5062D0 | ?Pose@bnBone@@QAEXPBVVector3@@AAH@Z
    inline void Pose(class Vector3 const* arg1, int32_t& arg2)
    {
        return stub<member_func_t<void, bnBone, class Vector3 const*, int32_t&>>(0x5062D0, this, arg1, arg2);
    }
};
