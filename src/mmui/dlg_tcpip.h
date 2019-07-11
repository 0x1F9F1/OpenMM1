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

// mmui:dlg_tcpip

#include "hooking.h"

struct Dialog_TCPIP : PUMenuBase
{
public:
    // Dialog_TCPIP::`vftable' @ 0x5926A0

    // 0x4952E0 | ??0Dialog_TCPIP@@QAE@HMMMMPAD@Z
    inline Dialog_TCPIP(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_TCPIP, int32_t, float, float, float, float, char*>>(
            0x4952E0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x495470 | ?IPAddressCallback@Dialog_TCPIP@@QAEXXZ
    inline void IPAddressCallback()
    {
        return stub<member_func_t<void, Dialog_TCPIP>>(0x495470, this);
    }

    // 0x495450 | ??1Dialog_TCPIP@@UAE@XZ
    inline ~Dialog_TCPIP() override
    {
        stub<member_func_t<void, Dialog_TCPIP>>(0x495450, this);
    }

    // 0x495460 | ?PreSetup@Dialog_TCPIP@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_TCPIP>>(0x495460, this);
    }
};
