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

/*
    mmui:racehost

    0x497AD0 | public: __thiscall HostRaceMenu::HostRaceMenu(int) | ??0HostRaceMenu@@QAE@H@Z
    0x497BA0 | public: virtual __thiscall HostRaceMenu::~HostRaceMenu(void) | ??1HostRaceMenu@@UAE@XZ
    0x497BB0 | public: void __thiscall HostRaceMenu::EnableStart(void) | ?EnableStart@HostRaceMenu@@QAEXXZ
    0x497BC0 | public: void __thiscall HostRaceMenu::DisableStart(void) | ?DisableStart@HostRaceMenu@@QAEXXZ
    0x497BD0 | public: virtual void __thiscall HostRaceMenu::UsesLobby(int) | ?UsesLobby@HostRaceMenu@@UAEXH@Z
    0x497BE0 | public: virtual void * __thiscall HostRaceMenu::`vector deleting destructor'(unsigned int) | ??_EHostRaceMenu@@UAEPAXI@Z
    0x497BE0 | public: virtual void * __thiscall HostRaceMenu::`scalar deleting destructor'(unsigned int) | ??_GHostRaceMenu@@UAEPAXI@Z
    0x5927B0 | const HostRaceMenu::`vftable' | ??_7HostRaceMenu@@6B@
*/

#include "hooking.h"

struct HostRaceMenu : RaceMenuBase
{
public:
    // HostRaceMenu::`vftable' @ 0x5927B0

    // 0x497AD0 | ??0HostRaceMenu@@QAE@H@Z
    inline HostRaceMenu(int32_t arg1)
    {
        // stub<member_func_t<void, HostRaceMenu, int32_t>>(0x497AD0, this, arg1);

        unimplemented();
    }

    // 0x497BB0 | ?EnableStart@HostRaceMenu@@QAEXXZ
    inline void EnableStart()
    {
        return stub<member_func_t<void, HostRaceMenu>>(0x497BB0, this);
    }

    // 0x497BC0 | ?DisableStart@HostRaceMenu@@QAEXXZ
    inline void DisableStart()
    {
        return stub<member_func_t<void, HostRaceMenu>>(0x497BC0, this);
    }

    // 0x497BA0 | ??1HostRaceMenu@@UAE@XZ
    inline ~HostRaceMenu() override = 0
    {
        // stub<member_func_t<void, HostRaceMenu>>(0x497BA0, this);

        unimplemented();
    }

    // 0x497BD0 | ?UsesLobby@HostRaceMenu@@UAEXH@Z
    inline void UsesLobby(int32_t arg1) override
    {
        return stub<member_func_t<void, HostRaceMenu, int32_t>>(0x497BD0, this, arg1);
    }
};
