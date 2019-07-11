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

// mmui:dlg_city2

#include "hooking.h"

struct Dialog_City2 : PUMenuBase
{
public:
    // Dialog_City2::`vftable' @ 0x5923D8

    // 0x492540 | ??0Dialog_City2@@QAE@HMMMMPAD@Z
    inline Dialog_City2(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_City2, int32_t, float, float, float, float, char*>>(
            0x492540, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4928C0 | ?ScrollCB@Dialog_City2@@QAEXXZ
    inline void ScrollCB()
    {
        return stub<member_func_t<void, Dialog_City2>>(0x4928C0, this);
    }

    // 0x4928E0 | ?CancelCB@Dialog_City2@@QAEXXZ
    inline void CancelCB()
    {
        return stub<member_func_t<void, Dialog_City2>>(0x4928E0, this);
    }

    // 0x492910 | ?DoneCB@Dialog_City2@@QAEXXZ
    inline void DoneCB()
    {
        return stub<member_func_t<void, Dialog_City2>>(0x492910, this);
    }

    // 0x492840 | ??1Dialog_City2@@UAE@XZ
    inline ~Dialog_City2() override
    {
        stub<member_func_t<void, Dialog_City2>>(0x492840, this);
    }

    // 0x4928A0 | ?PreSetup@Dialog_City2@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_City2>>(0x4928A0, this);
    }

    // 0x4928B0 | ?PostSetup@Dialog_City2@@UAEXXZ
    inline void PostSetup() override
    {
        return stub<member_func_t<void, Dialog_City2>>(0x4928B0, this);
    }
};
