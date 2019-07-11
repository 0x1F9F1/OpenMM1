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

// mmcar:splash

#include "hooking.h"

// 0x478120 | ?SplashCB@@YAXPAVmmSplash@@@Z
inline void SplashCB(class mmSplash* arg1)
{
    return stub<cdecl_t<void, class mmSplash*>>(0x478120, arg1);
}

class mmSplash : asNode
{
public:
    // mmSplash::`vftable' @ 0x591820

    // 0x4780C0 | ??0mmSplash@@QAE@XZ
    inline mmSplash()
    {
        stub<member_func_t<void, mmSplash>>(0x4780C0, this);
    }

    // 0x478140 | ?Init@mmSplash@@QAEXPAVasInertialCS@@VVector3@@1@Z
    inline void Init(class asInertialCS* arg1, class Vector3 arg2, class Vector3 arg3)
    {
        return stub<member_func_t<void, mmSplash, class asInertialCS*, class Vector3, class Vector3>>(
            0x478140, this, arg1, arg2, arg3);
    }

    // 0x4782A0 | ?Activate@mmSplash@@QAEXM@Z
    inline void Activate(float arg1)
    {
        return stub<member_func_t<void, mmSplash, float>>(0x4782A0, this, arg1);
    }

    // 0x468280 | ??1mmSplash@@UAE@XZ
    inline ~mmSplash() override
    {
        stub<member_func_t<void, mmSplash>>(0x468280, this);
    }

    // 0x4782C0 | ?Update@mmSplash@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmSplash>>(0x4782C0, this);
    }

    // 0x478130 | ?Reset@mmSplash@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmSplash>>(0x478130, this);
    }
};
