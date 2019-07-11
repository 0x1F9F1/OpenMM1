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

// mmui:vehicle

#include "hooking.h"

struct Vehicle : VehicleSelectBase
{
public:
    // Vehicle::`vftable' @ 0x5929B0

    // 0x49A140 | ??0Vehicle@@QAE@H@Z
    inline Vehicle(int32_t arg1)
    {
        stub<member_func_t<void, Vehicle, int32_t>>(0x49A140, this, arg1);
    }

    // 0x49A230 | ?SetSubMenu@Vehicle@@QAEXH@Z
    inline void SetSubMenu(int32_t arg1)
    {
        return stub<member_func_t<void, Vehicle, int32_t>>(0x49A230, this, arg1);
    }

    // 0x49A250 | ?SetSubMenuButtons@Vehicle@@QAEXXZ
    inline void SetSubMenuButtons()
    {
        return stub<member_func_t<void, Vehicle>>(0x49A250, this);
    }

    // 0x49A220 | ??1Vehicle@@UAE@XZ
    inline ~Vehicle() override
    {
        stub<member_func_t<void, Vehicle>>(0x49A220, this);
    }

    // 0x49A270 | ?PreSetup@Vehicle@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Vehicle>>(0x49A270, this);
    }

    // 0x49A280 | ?PostSetup@Vehicle@@UAEXXZ
    inline void PostSetup() override
    {
        return stub<member_func_t<void, Vehicle>>(0x49A280, this);
    }
};
