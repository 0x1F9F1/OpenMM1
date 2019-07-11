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

// mmui:pu_roster

#include "hooking.h"

struct PURoster : PUMenuBase
{
public:
    // PURoster::`vftable' @ 0x592BA8

    // 0x49D870 | ??0PURoster@@QAE@HMMMM@Z
    inline PURoster(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        stub<member_func_t<void, PURoster, int32_t, float, float, float, float>>(
            0x49D870, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x49DA00 | ?BootButtonCB@PURoster@@QAEXXZ
    inline void BootButtonCB()
    {
        return stub<member_func_t<void, PURoster>>(0x49DA00, this);
    }

    // 0x49DA60 | ?SetHost@PURoster@@QAEXH@Z
    inline void SetHost(int32_t arg1)
    {
        return stub<member_func_t<void, PURoster, int32_t>>(0x49DA60, this, arg1);
    }

    // 0x49DAD0 | ?AddName@PURoster@@QAEXPADKH@Z
    inline void AddName(char* arg1, uint32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, PURoster, char*, uint32_t, int32_t>>(0x49DAD0, this, arg1, arg2, arg3);
    }

    // 0x49DBA0 | ?RemoveName@PURoster@@QAEXPADK@Z
    inline void RemoveName(char* arg1, uint32_t arg2)
    {
        return stub<member_func_t<void, PURoster, char*, uint32_t>>(0x49DBA0, this, arg1, arg2);
    }

    // 0x49DCE0 | ?RemoveName@PURoster@@QAEXK@Z
    inline void RemoveName(uint32_t arg1)
    {
        return stub<member_func_t<void, PURoster, uint32_t>>(0x49DCE0, this, arg1);
    }

    // 0x49DE10 | ?ClearNames@PURoster@@QAEXXZ
    inline void ClearNames()
    {
        return stub<member_func_t<void, PURoster>>(0x49DE10, this);
    }

    // 0x49DE90 | ?PostNames@PURoster@@QAEXXZ
    inline void PostNames()
    {
        return stub<member_func_t<void, PURoster>>(0x49DE90, this);
    }

    // 0x49DEC0 | ?SetBootCB@PURoster@@QAEXVCallback@@@Z
    inline void SetBootCB(class Callback arg1)
    {
        return stub<member_func_t<void, PURoster, class Callback>>(0x49DEC0, this, arg1);
    }

    // 0x49DEE0 | ?FindRosterName@PURoster@@QAEHPAD@Z
    inline int32_t FindRosterName(char* arg1)
    {
        return stub<member_func_t<int32_t, PURoster, char*>>(0x49DEE0, this, arg1);
    }

    // 0x49DF50 | ?FindRosterName@PURoster@@QAEHK@Z
    inline int32_t FindRosterName(uint32_t arg1)
    {
        return stub<member_func_t<int32_t, PURoster, uint32_t>>(0x49DF50, this, arg1);
    }

    // 0x49D9E0 | ??1PURoster@@UAE@XZ
    inline ~PURoster() override
    {
        stub<member_func_t<void, PURoster>>(0x49D9E0, this);
    }

    // 0x49D9F0 | ?Reset@PURoster@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, PURoster>>(0x49D9F0, this);
    }
};
