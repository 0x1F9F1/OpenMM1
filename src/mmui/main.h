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

// mmui:main

#include "hooking.h"

struct MainMenu : UIMenu
{
public:
    // MainMenu::`vftable' @ 0x592A70

    // 0x49ADA0 | ??0MainMenu@@QAE@H@Z
    inline MainMenu(int32_t arg1)
    {
        stub<member_func_t<void, MainMenu, int32_t>>(0x49ADA0, this, arg1);
    }

    // 0x49AF20 | ??1MainMenu@@UAE@XZ
    inline ~MainMenu() override
    {
        stub<member_func_t<void, MainMenu>>(0x49AF20, this);
    }

    // 0x49AF30 | ?PreSetup@MainMenu@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, MainMenu>>(0x49AF30, this);
    }
};
