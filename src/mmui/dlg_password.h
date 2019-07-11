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

// mmui:dlg_password

#include "hooking.h"

struct Dialog_Password : PUMenuBase
{
public:
    // Dialog_Password::`vftable' @ 0x592420

    // 0x492A10 | ??0Dialog_Password@@QAE@HMMMMPAD@Z
    inline Dialog_Password(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_Password, int32_t, float, float, float, float, char*>>(
            0x492A10, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x492BA0 | ?PasswordCallback@Dialog_Password@@QAEXXZ
    inline void PasswordCallback()
    {
        return stub<member_func_t<void, Dialog_Password>>(0x492BA0, this);
    }

    // 0x492B80 | ??1Dialog_Password@@UAE@XZ
    inline ~Dialog_Password() override
    {
        stub<member_func_t<void, Dialog_Password>>(0x492B80, this);
    }

    // 0x492B90 | ?PreSetup@Dialog_Password@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_Password>>(0x492B90, this);
    }
};
