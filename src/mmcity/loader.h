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

// mmcity:loader

#include "hooking.h"

// 0x60B130 | ?IntroFont@@3PAXA
inline extern_var(0x60B130, void*, IntroFont);

// 0x60B134 | ?myFont@@3PAXA
inline extern_var(0x60B134, void*, myFont);

class mmLoader : asCullable
{
public:
    // mmLoader::`vftable' @ 0x591AE8

    // 0x4824E0 | ??0mmLoader@@QAE@XZ
    inline mmLoader()
    {
        stub<member_func_t<void, mmLoader>>(0x4824E0, this);
    }

    // 0x4826D0 | ?Init@mmLoader@@QAEXPADMM@Z
    inline void Init(char* arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, mmLoader, char*, float, float>>(0x4826D0, this, arg1, arg2, arg3);
    }

    // 0x4827C0 | ?Shutdown@mmLoader@@QAEXXZ
    inline void Shutdown()
    {
        return stub<member_func_t<void, mmLoader>>(0x4827C0, this);
    }

    // 0x4827D0 | ?SetIntroText@mmLoader@@QAEXPAULocString@@@Z
    inline void SetIntroText(struct LocString* arg1)
    {
        return stub<member_func_t<void, mmLoader, struct LocString*>>(0x4827D0, this, arg1);
    }

    // 0x482800 | ?BeginTask@mmLoader@@QAEXPAULocString@@M@Z
    inline void BeginTask(struct LocString* arg1, float arg2)
    {
        return stub<member_func_t<void, mmLoader, struct LocString*, float>>(0x482800, this, arg1, arg2);
    }

    // 0x482880 | ?EndTask@mmLoader@@QAEXM@Z
    inline void EndTask(float arg1)
    {
        return stub<member_func_t<void, mmLoader, float>>(0x482880, this, arg1);
    }

    // 0x482920 | ?Percent@mmLoader@@QAEXH@Z
    inline void Percent(int32_t arg1)
    {
        return stub<member_func_t<void, mmLoader, int32_t>>(0x482920, this, arg1);
    }

    // 0x482970 | ?Reset@mmLoader@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmLoader>>(0x482970, this);
    }

    // 0x482990 | ?Update@mmLoader@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmLoader>>(0x482990, this);
    }

    // 0x60B12C | ?Current@mmLoader@@0PAV1@A
    static inline extern_var(0x60B12C, class mmLoader*, Current);

    // 0x482630 | ??1mmLoader@@UAE@XZ
    inline ~mmLoader() override
    {
        stub<member_func_t<void, mmLoader>>(0x482630, this);
    }

    // 0x482A20 | ?Cull@mmLoader@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmLoader>>(0x482A20, this);
    }
};
