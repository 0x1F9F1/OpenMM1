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

// mmui:race

#include "hooking.h"

struct RaceMenu : RaceMenuBase
{
public:
    // RaceMenu::`vftable' @ 0x592920

    // 0x499BA0 | ??0RaceMenu@@QAE@H@Z
    inline RaceMenu(int32_t arg1)
    {
        stub<member_func_t<void, RaceMenu, int32_t>>(0x499BA0, this, arg1);
    }

    // 0x499C70 | ?GetRaceID@RaceMenu@@QAEHXZ
    inline int32_t GetRaceID()
    {
        return stub<member_func_t<int32_t, RaceMenu>>(0x499C70, this);
    }

    // 0x499D00 | ?SetProgressMask@RaceMenu@@QAEXH@Z
    inline void SetProgressMask(int32_t arg1)
    {
        return stub<member_func_t<void, RaceMenu, int32_t>>(0x499D00, this, arg1);
    }

    // 0x499D20 | ?SetBlitzMask@RaceMenu@@QAEXH@Z
    inline void SetBlitzMask(int32_t arg1)
    {
        return stub<member_func_t<void, RaceMenu, int32_t>>(0x499D20, this, arg1);
    }

    // 0x499D40 | ?SetCheckpointMask@RaceMenu@@QAEXH@Z
    inline void SetCheckpointMask(int32_t arg1)
    {
        return stub<member_func_t<void, RaceMenu, int32_t>>(0x499D40, this, arg1);
    }

    // 0x499D60 | ?SetCircuitMask@RaceMenu@@QAEXH@Z
    inline void SetCircuitMask(int32_t arg1)
    {
        return stub<member_func_t<void, RaceMenu, int32_t>>(0x499D60, this, arg1);
    }

    // 0x499D80 | ?GetRaceName@RaceMenu@@QAEPADW4mmGameMode@@H@Z
    inline char* GetRaceName(enum mmGameMode arg1, int32_t arg2)
    {
        return stub<member_func_t<char*, RaceMenu, enum mmGameMode, int32_t>>(0x499D80, this, arg1, arg2);
    }

    // 0x499C60 | ??1RaceMenu@@UAE@XZ
    inline ~RaceMenu() override
    {
        stub<member_func_t<void, RaceMenu>>(0x499C60, this);
    }
};
