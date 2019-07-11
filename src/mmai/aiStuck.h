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
    mmai:aiStuck

    0x4641F0 | public: __thiscall aiStuck::aiStuck(void) | ??0aiStuck@@QAE@XZ
    0x464290 | public: void __thiscall aiStuck::Init(class mmCarSim *) | ?Init@aiStuck@@QAEXPAVmmCarSim@@@Z
    0x4642B0 | public: void __thiscall aiStuck::Impact(void) | ?Impact@aiStuck@@QAEXXZ
    0x4642C0 | public: virtual void __thiscall aiStuck::Reset(void) | ?Reset@aiStuck@@UAEXXZ
    0x4642D0 | public: int __thiscall aiStuck::Pegged(void) | ?Pegged@aiStuck@@QAEHXZ
    0x464340 | public: virtual void __thiscall aiStuck::Update(void) | ?Update@aiStuck@@UAEXXZ
    0x464560 | public: virtual void * __thiscall aiStuck::`scalar deleting destructor'(unsigned int) | ??_GaiStuck@@UAEPAXI@Z
    0x464560 | public: virtual void * __thiscall aiStuck::`vector deleting destructor'(unsigned int) | ??_EaiStuck@@UAEPAXI@Z
    0x590DF0 | const aiStuck::`vftable' | ??_7aiStuck@@6B@
    0x464260 | void __cdecl StuckCB(class aiStuck *) | ?StuckCB@@YAXPAVaiStuck@@@Z
*/

#include "hooking.h"

// 0x464260 | ?StuckCB@@YAXPAVaiStuck@@@Z
inline void StuckCB(class aiStuck* arg1)
{
    return stub<cdecl_t<void, class aiStuck*>>(0x464260, arg1);
}

class aiStuck : asNode
{
public:
    // aiStuck::`vftable' @ 0x590DF0

    // 0x4641F0 | ??0aiStuck@@QAE@XZ
    inline aiStuck()
    {
        stub<member_func_t<void, aiStuck>>(0x4641F0, this);
    }

    // 0x464290 | ?Init@aiStuck@@QAEXPAVmmCarSim@@@Z
    inline void Init(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, aiStuck, class mmCarSim*>>(0x464290, this, arg1);
    }

    // 0x4642B0 | ?Impact@aiStuck@@QAEXXZ
    inline void Impact()
    {
        return stub<member_func_t<void, aiStuck>>(0x4642B0, this);
    }

    // 0x4642D0 | ?Pegged@aiStuck@@QAEHXZ
    inline int32_t Pegged()
    {
        return stub<member_func_t<int32_t, aiStuck>>(0x4642D0, this);
    }

    // 0x45E4E0 | ??1aiStuck@@UAE@XZ
    inline ~aiStuck() override
    {
        stub<member_func_t<void, aiStuck>>(0x45E4E0, this);
    }

    // 0x464340 | ?Update@aiStuck@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiStuck>>(0x464340, this);
    }

    // 0x4642C0 | ?Reset@aiStuck@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiStuck>>(0x4642C0, this);
    }
};
