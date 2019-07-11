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

// mmcity:instchn

#include "hooking.h"

// 0x5ADAA4 | ?EnableSphereCull@@3HA
inline extern_var(0x5ADAA4, int32_t, EnableSphereCull);

// 0x64F7B0 | ?WorstRoom@@3HA
inline extern_var(0x64F7B0, int32_t, WorstRoom);

// 0x64F7B4 | ?LabelInstances@@3HA
inline extern_var(0x64F7B4, int32_t, LabelInstances);

// 0x64F7B8 | ?WorstCount@@3HA
inline extern_var(0x64F7B8, int32_t, WorstCount);

// 0x64F7BC | ?NormalsOnInstances@@3HA
inline extern_var(0x64F7BC, int32_t, NormalsOnInstances);

struct mmInstChain
{
public:
    // 0x485FA0 | ??0mmInstChain@@QAE@XZ
    inline mmInstChain()
    {
        stub<member_func_t<void, mmInstChain>>(0x485FA0, this);
    }

    // 0x485FB0 | ??1mmInstChain@@QAE@XZ
    inline ~mmInstChain()
    {
        stub<member_func_t<void, mmInstChain>>(0x485FB0, this);
    }

    // 0x485FD0 | ?Init@mmInstChain@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, mmInstChain, int32_t>>(0x485FD0, this, arg1);
    }

    // 0x486030 | ?Parent@mmInstChain@@QAEXPAVmmInstance@@F@Z
    inline void Parent(class mmInstance* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, mmInstChain, class mmInstance*, int16_t>>(0x486030, this, arg1, arg2);
    }

    // 0x4860C0 | ?Unparent@mmInstChain@@QAEXPAVmmInstance@@@Z
    inline void Unparent(class mmInstance* arg1)
    {
        return stub<member_func_t<void, mmInstChain, class mmInstance*>>(0x4860C0, this, arg1);
    }

    // 0x486160 | ?Reparent@mmInstChain@@QAEXPAVmmInstance@@F@Z
    inline void Reparent(class mmInstance* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, mmInstChain, class mmInstance*, int16_t>>(0x486160, this, arg1, arg2);
    }

    // 0x486190 | ?RelightEverything@mmInstChain@@QAEXXZ
    inline void RelightEverything()
    {
        return stub<member_func_t<void, mmInstChain>>(0x486190, this);
    }

    // 0x4861B0 | ?Relight@mmInstChain@@QAEXF@Z
    inline void Relight(int16_t arg1)
    {
        return stub<member_func_t<void, mmInstChain, int16_t>>(0x4861B0, this, arg1);
    }

    // 0x4861E0 | ?Draw@mmInstChain@@QAEXFFIHM@Z
    inline void Draw(int16_t arg1, int16_t arg2, uint32_t arg3, int32_t arg4, float arg5)
    {
        return stub<member_func_t<void, mmInstChain, int16_t, int16_t, uint32_t, int32_t, float>>(
            0x4861E0, this, arg1, arg2, arg3, arg4, arg5);
    }
};
