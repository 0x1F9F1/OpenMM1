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
    mmgame:icons

    0x41D4D0 | public: __thiscall mmIcons::mmIcons(void) | ??0mmIcons@@QAE@XZ
    0x41D550 | public: virtual __thiscall mmIcons::~mmIcons(void) | ??1mmIcons@@UAE@XZ
    0x41D5B0 | public: void __thiscall mmIcons::Init(class Matrix34 *,float,float) | ?Init@mmIcons@@QAEXPAVMatrix34@@MM@Z
    0x41D5F0 | public: void __thiscall mmIcons::RegisterOpponents(struct OppIconInfo *,int,void *) | ?RegisterOpponents@mmIcons@@QAEXPAUOppIconInfo@@HPAX@Z
    0x41D670 | public: virtual void __thiscall mmIcons::Update(void) | ?Update@mmIcons@@UAEXXZ
    0x41D6B0 | public: virtual void __thiscall mmIcons::Cull(void) | ?Cull@mmIcons@@UAEXXZ
    0x41DCB0 | public: virtual void * __thiscall mmIcons::`vector deleting destructor'(unsigned int) | ??_EmmIcons@@UAEPAXI@Z
    0x41DCB0 | public: virtual void * __thiscall mmIcons::`scalar deleting destructor'(unsigned int) | ??_GmmIcons@@UAEPAXI@Z
    0x58FC70 | const mmIcons::`vftable' | ??_7mmIcons@@6B@
*/

#include "hooking.h"

struct mmIcons : asNode
{
public:
    // mmIcons::`vftable' @ 0x58FC70

    // 0x41D4D0 | ??0mmIcons@@QAE@XZ
    inline mmIcons()
    {
        // stub<member_func_t<void, mmIcons>>(0x41D4D0, this);

        unimplemented();
    }

    // 0x41D5B0 | ?Init@mmIcons@@QAEXPAVMatrix34@@MM@Z
    inline void Init(class Matrix34* arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, mmIcons, class Matrix34*, float, float>>(0x41D5B0, this, arg1, arg2, arg3);
    }

    // 0x41D5F0 | ?RegisterOpponents@mmIcons@@QAEXPAUOppIconInfo@@HPAX@Z
    inline void RegisterOpponents(struct OppIconInfo* arg1, int32_t arg2, void* arg3)
    {
        return stub<member_func_t<void, mmIcons, struct OppIconInfo*, int32_t, void*>>(
            0x41D5F0, this, arg1, arg2, arg3);
    }

    // 0x41D550 | ??1mmIcons@@UAE@XZ
    inline ~mmIcons() override = 0
    {
        // stub<member_func_t<void, mmIcons>>(0x41D550, this);

        unimplemented();
    }

    // 0x41D6B0 | ?Cull@mmIcons@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmIcons>>(0x41D6B0, this);
    }

    // 0x41D670 | ?Update@mmIcons@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmIcons>>(0x41D670, this);
    }
};
