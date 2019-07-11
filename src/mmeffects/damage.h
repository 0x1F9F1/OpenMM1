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
    mmeffects:damage

    0x4F33D0 | public: __thiscall mmDamage::mmDamage(void) | ??0mmDamage@@QAE@XZ
    0x4F33E0 | public: __thiscall mmDamage::~mmDamage(void) | ??1mmDamage@@QAE@XZ
    0x4F33F0 | public: void __thiscall mmDamage::Init(class agiMeshSet *) | ?Init@mmDamage@@QAEXPAVagiMeshSet@@@Z
    0x4F35D0 | public: void __thiscall mmDamage::Reset(int) | ?Reset@mmDamage@@QAEXH@Z
    0x4F3620 | public: void __thiscall mmDamage::Apply(class Vector3 &,float) | ?Apply@mmDamage@@QAEXAAVVector3@@M@Z
*/

#include "hooking.h"

struct mmDamage
{
public:
    // 0x4F33D0 | ??0mmDamage@@QAE@XZ
    inline mmDamage()
    {
        stub<member_func_t<void, mmDamage>>(0x4F33D0, this);
    }

    // 0x4F33E0 | ??1mmDamage@@QAE@XZ
    inline ~mmDamage()
    {
        stub<member_func_t<void, mmDamage>>(0x4F33E0, this);
    }

    // 0x4F33F0 | ?Init@mmDamage@@QAEXPAVagiMeshSet@@@Z
    inline void Init(class agiMeshSet* arg1)
    {
        return stub<member_func_t<void, mmDamage, class agiMeshSet*>>(0x4F33F0, this, arg1);
    }

    // 0x4F35D0 | ?Reset@mmDamage@@QAEXH@Z
    inline void Reset(int32_t arg1)
    {
        return stub<member_func_t<void, mmDamage, int32_t>>(0x4F35D0, this, arg1);
    }

    // 0x4F3620 | ?Apply@mmDamage@@QAEXAAVVector3@@M@Z
    inline void Apply(class Vector3& arg1, float arg2)
    {
        return stub<member_func_t<void, mmDamage, class Vector3&, float>>(0x4F3620, this, arg1, arg2);
    }
};
