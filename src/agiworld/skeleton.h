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
    agiworld:skeleton

    0x503670 | public: __thiscall bnSkeleton::bnSkeleton(void) | ??0bnSkeleton@@QAE@XZ
    0x503680 | public: __thiscall bnSkeleton::~bnSkeleton(void) | ??1bnSkeleton@@QAE@XZ
    0x5036A0 | public: int __thiscall bnSkeleton::Load(char const *) | ?Load@bnSkeleton@@QAEHPBD@Z
    0x5039D0 | public: int __thiscall bnSkeleton::Save(char const *) | ?Save@bnSkeleton@@QAEHPBD@Z
    0x503A80 | public: void __thiscall bnSkeleton::Transform(class Matrix34 *) | ?Transform@bnSkeleton@@QAEXPAVMatrix34@@@Z
    0x503AA0 | public: void __thiscall bnSkeleton::Draw(void) | ?Draw@bnSkeleton@@QAEXXZ
    0x503AB0 | public: void __thiscall bnSkeleton::Attach(class Matrix34 * const) | ?Attach@bnSkeleton@@QAEXQAVMatrix34@@@Z
    0x503AE0 | public: void __thiscall bnSkeleton::Pose(class Vector3 const *) | ?Pose@bnSkeleton@@QAEXPBVVector3@@@Z
    0x503B30 | public: class bnBone * __thiscall bnSkeleton::FindBone(char *,int,char) | ?FindBone@bnSkeleton@@QAEPAVbnBone@@PADHD@Z
    0x503C50 | public: int __thiscall bnSkeleton::HowMany(char *,char) | ?HowMany@bnSkeleton@@QAEHPADD@Z
    0x503C90 | public: int __thiscall bnAnimation::Load(char *) | ?Load@bnAnimation@@QAEHPAD@Z
    0x503E20 | public: static class bnAnimation * __cdecl bnAnimation::Lookup(char *) | ?Lookup@bnAnimation@@SAPAV1@PAD@Z
*/

#include "hooking.h"

class bnAnimation
{
public:
    // 0x503C90 | ?Load@bnAnimation@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, bnAnimation, char*>>(0x503C90, this, arg1);
    }

    // 0x503E20 | ?Lookup@bnAnimation@@SAPAV1@PAD@Z
    static inline class bnAnimation* Lookup(char* arg1)
    {
        return stub<cdecl_t<class bnAnimation*, char*>>(0x503E20, arg1);
    }
};

struct bnSkeleton
{
public:
    // 0x503670 | ??0bnSkeleton@@QAE@XZ
    inline bnSkeleton()
    {
        stub<member_func_t<void, bnSkeleton>>(0x503670, this);
    }

    // 0x503680 | ??1bnSkeleton@@QAE@XZ
    inline ~bnSkeleton()
    {
        stub<member_func_t<void, bnSkeleton>>(0x503680, this);
    }

    // 0x5036A0 | ?Load@bnSkeleton@@QAEHPBD@Z
    inline int32_t Load(char const* arg1)
    {
        return stub<member_func_t<int32_t, bnSkeleton, char const*>>(0x5036A0, this, arg1);
    }

    // 0x5039D0 | ?Save@bnSkeleton@@QAEHPBD@Z
    inline int32_t Save(char const* arg1)
    {
        return stub<member_func_t<int32_t, bnSkeleton, char const*>>(0x5039D0, this, arg1);
    }

    // 0x503A80 | ?Transform@bnSkeleton@@QAEXPAVMatrix34@@@Z
    inline void Transform(class Matrix34* arg1)
    {
        return stub<member_func_t<void, bnSkeleton, class Matrix34*>>(0x503A80, this, arg1);
    }

    // 0x503AA0 | ?Draw@bnSkeleton@@QAEXXZ
    inline void Draw()
    {
        return stub<member_func_t<void, bnSkeleton>>(0x503AA0, this);
    }

    // 0x503AB0 | ?Attach@bnSkeleton@@QAEXQAVMatrix34@@@Z
    inline void Attach(class Matrix34* const arg1)
    {
        return stub<member_func_t<void, bnSkeleton, class Matrix34* const>>(0x503AB0, this, arg1);
    }

    // 0x503AE0 | ?Pose@bnSkeleton@@QAEXPBVVector3@@@Z
    inline void Pose(class Vector3 const* arg1)
    {
        return stub<member_func_t<void, bnSkeleton, class Vector3 const*>>(0x503AE0, this, arg1);
    }

    // 0x503B30 | ?FindBone@bnSkeleton@@QAEPAVbnBone@@PADHD@Z
    inline class bnBone* FindBone(char* arg1, int32_t arg2, char arg3)
    {
        return stub<member_func_t<class bnBone*, bnSkeleton, char*, int32_t, char>>(0x503B30, this, arg1, arg2, arg3);
    }

    // 0x503C50 | ?HowMany@bnSkeleton@@QAEHPADD@Z
    inline int32_t HowMany(char* arg1, char arg2)
    {
        return stub<member_func_t<int32_t, bnSkeleton, char*, char>>(0x503C50, this, arg1, arg2);
    }
};
