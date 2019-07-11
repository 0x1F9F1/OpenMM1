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

// mmcar:stuck

#include "hooking.h"

// 0x473E00 | ?StuckCB@@YAXPAVmmStuck@@@Z
inline void StuckCB(class mmStuck* arg1)
{
    return stub<cdecl_t<void, class mmStuck*>>(0x473E00, arg1);
}

class mmStuck : asNode
{
public:
    // mmStuck::`vftable' @ 0x591520

    // 0x473D90 | ??0mmStuck@@QAE@XZ
    inline mmStuck()
    {
        stub<member_func_t<void, mmStuck>>(0x473D90, this);
    }

    // 0x473E30 | ?Init@mmStuck@@QAEXPAVmmCarSim@@@Z
    inline void Init(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, mmStuck, class mmCarSim*>>(0x473E30, this, arg1);
    }

    // 0x473E50 | ?Impact@mmStuck@@QAEXXZ
    inline void Impact()
    {
        return stub<member_func_t<void, mmStuck>>(0x473E50, this);
    }

    // 0x473E70 | ?Pegged@mmStuck@@QAEHXZ
    inline int32_t Pegged()
    {
        return stub<member_func_t<int32_t, mmStuck>>(0x473E70, this);
    }

    // 0x468270 | ??1mmStuck@@UAE@XZ
    inline ~mmStuck() override
    {
        stub<member_func_t<void, mmStuck>>(0x468270, this);
    }

    // 0x473EC0 | ?Update@mmStuck@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmStuck>>(0x473EC0, this);
    }

    // 0x473E60 | ?Reset@mmStuck@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmStuck>>(0x473E60, this);
    }
};
