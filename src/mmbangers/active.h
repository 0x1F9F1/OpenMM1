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

// mmbangers:active

#include "hooking.h"

// 0x5B118C | ?ParticleMultiplier@@3MA
inline extern_var(0x5B118C, float, ParticleMultiplier);

class mmBangerActiveManager : asNode
{
public:
    // mmBangerActiveManager::`vftable' @ 0x5943B8

    // 0x4BF920 | ??0mmBangerActiveManager@@QAE@XZ
    inline mmBangerActiveManager()
    {
        stub<member_func_t<void, mmBangerActiveManager>>(0x4BF920, this);
    }

    // 0x4BFA30 | ?GetActive@mmBangerActiveManager@@QAEPAVmmBangerActive@@PAVmmBangerInstance@@@Z
    inline class mmBangerActive* GetActive(class mmBangerInstance* arg1)
    {
        return stub<member_func_t<class mmBangerActive*, mmBangerActiveManager, class mmBangerInstance*>>(
            0x4BFA30, this, arg1);
    }

    // 0x4BFA60 | ?Attach@mmBangerActiveManager@@QAEPAVmmBangerActive@@PAVmmBangerInstance@@@Z
    inline class mmBangerActive* Attach(class mmBangerInstance* arg1)
    {
        return stub<member_func_t<class mmBangerActive*, mmBangerActiveManager, class mmBangerInstance*>>(
            0x4BFA60, this, arg1);
    }

    // 0x4BFB30 | ?Detach@mmBangerActiveManager@@QAEXPAVmmBangerActive@@@Z
    inline void Detach(class mmBangerActive* arg1)
    {
        return stub<member_func_t<void, mmBangerActiveManager, class mmBangerActive*>>(0x4BFB30, this, arg1);
    }

    // 0x668388 | ?Instance@mmBangerActiveManager@@1PAV1@A
    static inline extern_var(0x668388, class mmBangerActiveManager*, Instance);

    // 0x4BF9D0 | ??1mmBangerActiveManager@@UAE@XZ
    inline ~mmBangerActiveManager() override
    {
        stub<member_func_t<void, mmBangerActiveManager>>(0x4BF9D0, this);
    }

    // 0x4BFB80 | ?Update@mmBangerActiveManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmBangerActiveManager>>(0x4BFB80, this);
    }

    // 0x4BFC60 | ?Reset@mmBangerActiveManager@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmBangerActiveManager>>(0x4BFC60, this);
    }
};

class mmBangerActive : mmPhysEntity
{
public:
    // mmBangerActive::`vftable' @ 0x594370

    // 0x4BF420 | ??0mmBangerActive@@QAE@XZ
    inline mmBangerActive()
    {
        stub<member_func_t<void, mmBangerActive>>(0x4BF420, this);
    }

    // 0x4BF570 | ?Attach@mmBangerActive@@QAEXPAVmmBangerInstance@@@Z
    inline void Attach(class mmBangerInstance* arg1)
    {
        return stub<member_func_t<void, mmBangerActive, class mmBangerInstance*>>(0x4BF570, this, arg1);
    }

    // 0x4BF760 | ?Detach@mmBangerActive@@QAEXXZ
    inline void Detach()
    {
        return stub<member_func_t<void, mmBangerActive>>(0x4BF760, this);
    }

    // 0x4BF500 | ??1mmBangerActive@@UAE@XZ
    inline ~mmBangerActive() override
    {
        stub<member_func_t<void, mmBangerActive>>(0x4BF500, this);
    }

    // 0x4BF7E0 | ?Update@mmBangerActive@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmBangerActive>>(0x4BF7E0, this);
    }

    // 0x4BF890 | ?PostUpdate@mmBangerActive@@UAEXXZ
    inline void PostUpdate() override
    {
        return stub<member_func_t<void, mmBangerActive>>(0x4BF890, this);
    }

    // 0x4BFCF0 | ?GetBound@mmBangerActive@@UAEPAVasBound@@XZ
    inline class asBound* GetBound() override
    {
        return stub<member_func_t<class asBound*, mmBangerActive>>(0x4BFCF0, this);
    }

    // 0x4BFD00 | ?GetICS@mmBangerActive@@UAEPAVasInertialCS@@XZ
    inline class asInertialCS* GetICS() override
    {
        return stub<member_func_t<class asInertialCS*, mmBangerActive>>(0x4BFD00, this);
    }

    // 0x4BF7C0 | ?DetachMe@mmBangerActive@@UAEXXZ
    inline void DetachMe() override
    {
        return stub<member_func_t<void, mmBangerActive>>(0x4BF7C0, this);
    }
};
