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
    mmcity:position

    0x485620 | public: __thiscall mmPositions::mmPositions(void) | ??0mmPositions@@QAE@XZ
    0x485630 | public: void __thiscall mmPositions::Init(int) | ?Init@mmPositions@@QAEXH@Z
    0x485660 | public: int __thiscall mmPositions::Load(char *) | ?Load@mmPositions@@QAEHPAD@Z
    0x485830 | public: int __thiscall mmPositions::GetCount(void) | ?GetCount@mmPositions@@QAEHXZ
    0x485840 | public: class Vector4 & __thiscall mmPositions::GetVector4(int) | ?GetVector4@mmPositions@@QAEAAVVector4@@H@Z
    0x485870 | public: void __thiscall mmPositions::Dump(char *) | ?Dump@mmPositions@@QAEXPAD@Z
    0x485910 | public: int __thiscall mmPositions::Recall(int,class Matrix34 *,int *,char *) | ?Recall@mmPositions@@QAEHHPAVMatrix34@@PAHPAD@Z
    0x4859A0 | public: int __thiscall mmPositions::Register(class Vector4 &,int,int,int,int,char *) | ?Register@mmPositions@@QAEHAAVVector4@@HHHHPAD@Z
*/

#include "hooking.h"

struct mmPositions
{
public:
    // 0x485620 | ??0mmPositions@@QAE@XZ
    inline mmPositions()
    {
        // stub<member_func_t<void, mmPositions>>(0x485620, this);

        unimplemented();
    }

    // 0x485630 | ?Init@mmPositions@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, mmPositions, int32_t>>(0x485630, this, arg1);
    }

    // 0x485660 | ?Load@mmPositions@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPositions, char*>>(0x485660, this, arg1);
    }

    // 0x485830 | ?GetCount@mmPositions@@QAEHXZ
    inline int32_t GetCount()
    {
        return stub<member_func_t<int32_t, mmPositions>>(0x485830, this);
    }

    // 0x485840 | ?GetVector4@mmPositions@@QAEAAVVector4@@H@Z
    inline class Vector4& GetVector4(int32_t arg1)
    {
        return stub<member_func_t<class Vector4&, mmPositions, int32_t>>(0x485840, this, arg1);
    }

    // 0x485870 | ?Dump@mmPositions@@QAEXPAD@Z
    inline void Dump(char* arg1)
    {
        return stub<member_func_t<void, mmPositions, char*>>(0x485870, this, arg1);
    }

    // 0x485910 | ?Recall@mmPositions@@QAEHHPAVMatrix34@@PAHPAD@Z
    inline int32_t Recall(int32_t arg1, class Matrix34* arg2, int32_t* arg3, char* arg4)
    {
        return stub<member_func_t<int32_t, mmPositions, int32_t, class Matrix34*, int32_t*, char*>>(
            0x485910, this, arg1, arg2, arg3, arg4);
    }

    // 0x4859A0 | ?Register@mmPositions@@QAEHAAVVector4@@HHHHPAD@Z
    inline int32_t Register(class Vector4& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, char* arg6)
    {
        return stub<member_func_t<int32_t, mmPositions, class Vector4&, int32_t, int32_t, int32_t, int32_t, char*>>(
            0x4859A0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }
};
