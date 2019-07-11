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

// mmui:driver

#include "hooking.h"

struct DriverMenu : UIMenu
{
public:
    // DriverMenu::`vftable' @ 0x592A28

    // 0x49A2C0 | ??0DriverMenu@@QAE@H@Z
    inline DriverMenu(int32_t arg1)
    {
        stub<member_func_t<void, DriverMenu, int32_t>>(0x49A2C0, this, arg1);
    }

    // 0x49A3D0 | ?InitPlayerSelection@DriverMenu@@QAEXXZ
    inline void InitPlayerSelection()
    {
        return stub<member_func_t<void, DriverMenu>>(0x49A3D0, this);
    }

    // 0x49A830 | ?RemovePlayer@DriverMenu@@QAEXPAD@Z
    inline void RemovePlayer(char* arg1)
    {
        return stub<member_func_t<void, DriverMenu, char*>>(0x49A830, this, arg1);
    }

    // 0x49AA70 | ?SetPlayerPick@DriverMenu@@QAEXH@Z
    inline void SetPlayerPick(int32_t arg1)
    {
        return stub<member_func_t<void, DriverMenu, int32_t>>(0x49AA70, this, arg1);
    }

    // 0x49AA80 | ?DecPlayer@DriverMenu@@QAEXXZ
    inline void DecPlayer()
    {
        return stub<member_func_t<void, DriverMenu>>(0x49AA80, this);
    }

    // 0x49AAB0 | ?IncPlayer@DriverMenu@@QAEXXZ
    inline void IncPlayer()
    {
        return stub<member_func_t<void, DriverMenu>>(0x49AAB0, this);
    }

    // 0x49AAE0 | ?RemoveAllPlayers@DriverMenu@@QAEXXZ
    inline void RemoveAllPlayers()
    {
        return stub<member_func_t<void, DriverMenu>>(0x49AAE0, this);
    }

    // 0x49AAF0 | ?AddPlayer@DriverMenu@@QAEXPAD@Z
    inline void AddPlayer(char* arg1)
    {
        return stub<member_func_t<void, DriverMenu, char*>>(0x49AAF0, this, arg1);
    }

    // 0x49AC00 | ?TDPickCB@DriverMenu@@QAEXXZ
    inline void TDPickCB()
    {
        return stub<member_func_t<void, DriverMenu>>(0x49AC00, this);
    }

    // 0x49AC10 | ?DeleteCB@DriverMenu@@QAEXXZ
    inline void DeleteCB()
    {
        return stub<member_func_t<void, DriverMenu>>(0x49AC10, this);
    }

    // 0x49AC20 | ?NewPlayer@DriverMenu@@QAEXXZ
    inline void NewPlayer()
    {
        return stub<member_func_t<void, DriverMenu>>(0x49AC20, this);
    }

    // 0x49AC30 | ?GetNewDriverName@DriverMenu@@QAEPADXZ
    inline char* GetNewDriverName()
    {
        return stub<member_func_t<char*, DriverMenu>>(0x49AC30, this);
    }

    // 0x49AC40 | ?EnterNewPlayer@DriverMenu@@QAEXXZ
    inline void EnterNewPlayer()
    {
        return stub<member_func_t<void, DriverMenu>>(0x49AC40, this);
    }

    // 0x49AC50 | ?DisplayDriverInfo@DriverMenu@@QAEXPAD0000H@Z
    inline void DisplayDriverInfo(char* arg1, char* arg2, char* arg3, char* arg4, char* arg5, int32_t arg6)
    {
        return stub<member_func_t<void, DriverMenu, char*, char*, char*, char*, char*, int32_t>>(
            0x49AC50, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x49AD10 | ?SetController@DriverMenu@@QAEXPAD@Z
    inline void SetController(char* arg1)
    {
        return stub<member_func_t<void, DriverMenu, char*>>(0x49AD10, this, arg1);
    }

    // 0x49AD30 | ?SetNetName@DriverMenu@@QAEXPAD@Z
    inline void SetNetName(char* arg1)
    {
        return stub<member_func_t<void, DriverMenu, char*>>(0x49AD30, this, arg1);
    }

    // 0x49A7C0 | ??1DriverMenu@@UAE@XZ
    inline ~DriverMenu() override
    {
        stub<member_func_t<void, DriverMenu>>(0x49A7C0, this);
    }

    // 0x49A3A0 | ?PreSetup@DriverMenu@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, DriverMenu>>(0x49A3A0, this);
    }
};
