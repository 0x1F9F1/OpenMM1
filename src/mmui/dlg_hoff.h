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

// mmui:dlg_hoff

#include "hooking.h"

struct Dialog_HallOfFame : PUMenuBase
{
public:
    // Dialog_HallOfFame::`vftable' @ 0x5924D8

    // 0x493340 | ??0Dialog_HallOfFame@@QAE@HMMMMPAD@Z
    inline Dialog_HallOfFame(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_HallOfFame, int32_t, float, float, float, float, char*>>(
            0x493340, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x493760 | ?AddRaceRecord@Dialog_HallOfFame@@QAEXHPAD00H00@Z
    inline void AddRaceRecord(int32_t arg1, char* arg2, char* arg3, char* arg4, int32_t arg5, char* arg6, char* arg7)
    {
        return stub<member_func_t<void, Dialog_HallOfFame, int32_t, char*, char*, char*, int32_t, char*, char*>>(
            0x493760, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4938A0 | ?ResetRaceRecord@Dialog_HallOfFame@@QAEXXZ
    inline void ResetRaceRecord()
    {
        return stub<member_func_t<void, Dialog_HallOfFame>>(0x4938A0, this);
    }

    // 0x493930 | ?SetSortState@Dialog_HallOfFame@@QAEXXZ
    inline void SetSortState()
    {
        return stub<member_func_t<void, Dialog_HallOfFame>>(0x493930, this);
    }

    // 0x4939B0 | ?InitRaceRecord@Dialog_HallOfFame@@QAEXXZ
    inline void InitRaceRecord()
    {
        return stub<member_func_t<void, Dialog_HallOfFame>>(0x4939B0, this);
    }

    // 0x493740 | ??1Dialog_HallOfFame@@UAE@XZ
    inline ~Dialog_HallOfFame() override
    {
        stub<member_func_t<void, Dialog_HallOfFame>>(0x493740, this);
    }

    // 0x493750 | ?PreSetup@Dialog_HallOfFame@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_HallOfFame>>(0x493750, this);
    }
};
