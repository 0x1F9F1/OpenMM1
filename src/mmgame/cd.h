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

// mmgame:cd

#include "hooking.h"

struct mmCDPlayer : asNode
{
public:
    // mmCDPlayer::`vftable' @ 0x58FF48

    // 0x425AF0 | ??0mmCDPlayer@@QAE@XZ
    inline mmCDPlayer()
    {
        stub<member_func_t<void, mmCDPlayer>>(0x425AF0, this);
    }

    // 0x425B80 | ?Init@mmCDPlayer@@QAEXPAVmmHUD@@@Z
    inline void Init(class mmHUD* arg1)
    {
        return stub<member_func_t<void, mmCDPlayer, class mmHUD*>>(0x425B80, this, arg1);
    }

    // 0x425F00 | ?PlayStop@mmCDPlayer@@QAEXXZ
    inline void PlayStop()
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x425F00, this);
    }

    // 0x425F50 | ?NextTrack@mmCDPlayer@@QAEXXZ
    inline void NextTrack()
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x425F50, this);
    }

    // 0x425FC0 | ?PrevTrack@mmCDPlayer@@QAEXXZ
    inline void PrevTrack()
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x425FC0, this);
    }

    // 0x426030 | ?Toggle@mmCDPlayer@@QAEXXZ
    inline void Toggle()
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x426030, this);
    }

    // 0x4259D0 | ??1mmCDPlayer@@UAE@XZ
    inline ~mmCDPlayer() override
    {
        stub<member_func_t<void, mmCDPlayer>>(0x4259D0, this);
    }

    // 0x425D10 | ?Cull@mmCDPlayer@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x425D10, this);
    }

    // 0x425CA0 | ?Update@mmCDPlayer@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x425CA0, this);
    }

    // 0x425C90 | ?Reset@mmCDPlayer@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCDPlayer>>(0x425C90, this);
    }
};
