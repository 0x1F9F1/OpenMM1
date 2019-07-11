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

// mmcity:anim

#include "hooking.h"

// 0x48BA20 | ?GetAnimation@@YAPAVmmAnimation@@PAD@Z
inline class mmAnimation* GetAnimation(char* arg1)
{
    return stub<cdecl_t<class mmAnimation*, char*>>(0x48BA20, arg1);
}

class mmAnimation
{
public:
    // 0x48B1B0 | ?LookupSequence@mmAnimation@@QAEHPAD@Z
    inline int32_t LookupSequence(char* arg1)
    {
        return stub<member_func_t<int32_t, mmAnimation, char*>>(0x48B1B0, this, arg1);
    }

    // 0x48B210 | ?Load@mmAnimation@@QAEXPADPAVStream@@@Z
    inline void Load(char* arg1, class Stream* arg2)
    {
        return stub<member_func_t<void, mmAnimation, char*, class Stream*>>(0x48B210, this, arg1, arg2);
    }
};

struct mmAnimInstState
{
public:
    // 0x48BB50 | ?PreUpdate@mmAnimInstState@@SAXM@Z
    static inline void PreUpdate(float arg1)
    {
        return stub<cdecl_t<void, float>>(0x48BB50, arg1);
    }

    // 0x48BBA0 | ?Update@mmAnimInstState@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmAnimInstState>>(0x48BBA0, this);
    }

    // 0x667AB0 | ?FrameFraction@mmAnimInstState@@2MA
    static inline extern_var(0x667AB0, float, FrameFraction);

    // 0x667AB4 | ?FrameDelta@mmAnimInstState@@2HA
    static inline extern_var(0x667AB4, int32_t, FrameDelta);
};
