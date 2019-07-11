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

// mmui:dlg_ctrl

#include "hooking.h"

struct Dialog_ControlAssign : PUMenuBase
{
public:
    // Dialog_ControlAssign::`vftable' @ 0x592658

    // 0x495190 | ??0Dialog_ControlAssign@@QAE@HMMMMPAD@Z
    inline Dialog_ControlAssign(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_ControlAssign, int32_t, float, float, float, float, char*>>(
            0x495190, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x495290 | ??1Dialog_ControlAssign@@UAE@XZ
    inline ~Dialog_ControlAssign() override
    {
        stub<member_func_t<void, Dialog_ControlAssign>>(0x495290, this);
    }

    // 0x4952A0 | ?PreSetup@Dialog_ControlAssign@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_ControlAssign>>(0x4952A0, this);
    }
};
