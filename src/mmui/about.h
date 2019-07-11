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

// mmui:about

#include "hooking.h"

// 0x48F1B0 | ?GetMidtownRegString@@YAXPADH00@Z
inline void GetMidtownRegString(char* arg1, int32_t arg2, char* arg3, char* arg4)
{
    return stub<cdecl_t<void, char*, int32_t, char*, char*>>(0x48F1B0, arg1, arg2, arg3, arg4);
}

struct AboutMenu : UIMenu
{
public:
    // AboutMenu::`vftable' @ 0x592268

    // 0x48F230 | ??0AboutMenu@@QAE@H@Z
    inline AboutMenu(int32_t arg1)
    {
        stub<member_func_t<void, AboutMenu, int32_t>>(0x48F230, this, arg1);
    }

    // 0x48F400 | ??1AboutMenu@@UAE@XZ
    inline ~AboutMenu() override
    {
        stub<member_func_t<void, AboutMenu>>(0x48F400, this);
    }

    // 0x48F4B0 | ?Cull@AboutMenu@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, AboutMenu>>(0x48F4B0, this);
    }

    // 0x48F430 | ?Update@AboutMenu@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, AboutMenu>>(0x48F430, this);
    }

    // 0x48F410 | ?PreSetup@AboutMenu@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, AboutMenu>>(0x48F410, this);
    }
};
