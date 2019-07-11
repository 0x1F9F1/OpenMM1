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

// mmui:netarena

#include "hooking.h"

struct NetArena : UIMenu
{
public:
    // NetArena::`vftable' @ 0x592768

    // 0x4966F0 | ??0NetArena@@QAE@H@Z
    inline NetArena(int32_t arg1)
    {
        stub<member_func_t<void, NetArena, int32_t>>(0x4966F0, this, arg1);
    }

    // 0x496DB0 | ?EnablePlayButton@NetArena@@QAEXXZ
    inline void EnablePlayButton()
    {
        return stub<member_func_t<void, NetArena>>(0x496DB0, this);
    }

    // 0x496DC0 | ?DisablePlayButton@NetArena@@QAEXXZ
    inline void DisablePlayButton()
    {
        return stub<member_func_t<void, NetArena>>(0x496DC0, this);
    }

    // 0x496DD0 | ?ResetGameChat@NetArena@@QAEXXZ
    inline void ResetGameChat()
    {
        return stub<member_func_t<void, NetArena>>(0x496DD0, this);
    }

    // 0x496E90 | ?AddGameChatLine@NetArena@@QAEXPAD@Z
    inline void AddGameChatLine(char* arg1)
    {
        return stub<member_func_t<void, NetArena, char*>>(0x496E90, this, arg1);
    }

    // 0x496F40 | ?PostChatMessages@NetArena@@QAEXXZ
    inline void PostChatMessages()
    {
        return stub<member_func_t<void, NetArena>>(0x496F40, this);
    }

    // 0x497010 | ?ChatEntry@NetArena@@QAEXXZ
    inline void ChatEntry()
    {
        return stub<member_func_t<void, NetArena>>(0x497010, this);
    }

    // 0x4970E0 | ?RetrieveChatLine@NetArena@@QAEHPAD@Z
    inline int32_t RetrieveChatLine(char* arg1)
    {
        return stub<member_func_t<int32_t, NetArena, char*>>(0x4970E0, this, arg1);
    }

    // 0x497130 | ?FindRosterName@NetArena@@QAEHPAD@Z
    inline int32_t FindRosterName(char* arg1)
    {
        return stub<member_func_t<int32_t, NetArena, char*>>(0x497130, this, arg1);
    }

    // 0x4971A0 | ?AddRosterName@NetArena@@QAEXPAD@Z
    inline void AddRosterName(char* arg1)
    {
        return stub<member_func_t<void, NetArena, char*>>(0x4971A0, this, arg1);
    }

    // 0x4971C0 | ?AddRosterName@NetArena@@QAEXPAULocString@@00K@Z
    inline void AddRosterName(struct LocString* arg1, struct LocString* arg2, struct LocString* arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, NetArena, struct LocString*, struct LocString*, struct LocString*, uint32_t>>(
            0x4971C0, this, arg1, arg2, arg3, arg4);
    }

    // 0x497360 | ?RemoveRosterEntry@NetArena@@QAEXH@Z
    inline void RemoveRosterEntry(int32_t arg1)
    {
        return stub<member_func_t<void, NetArena, int32_t>>(0x497360, this, arg1);
    }

    // 0x497430 | ?ResetRoster@NetArena@@QAEXXZ
    inline void ResetRoster()
    {
        return stub<member_func_t<void, NetArena>>(0x497430, this);
    }

    // 0x497550 | ?RemoveRosterName@NetArena@@QAEXPAD@Z
    inline void RemoveRosterName(char* arg1)
    {
        return stub<member_func_t<void, NetArena, char*>>(0x497550, this, arg1);
    }

    // 0x497590 | ?SetReady@NetArena@@QAEXKH@Z
    inline void SetReady(uint32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, NetArena, uint32_t, int32_t>>(0x497590, this, arg1, arg2);
    }

    // 0x4975E0 | ?GetRaceName@NetArena@@QAEPADXZ
    inline char* GetRaceName()
    {
        return stub<member_func_t<char*, NetArena>>(0x4975E0, this);
    }

    // 0x4977F0 | ?PostHostSettings@NetArena@@QAEXXZ
    inline void PostHostSettings()
    {
        return stub<member_func_t<void, NetArena>>(0x4977F0, this);
    }

    // 0x4979B0 | ?PostPlayerInfo@NetArena@@QAEXPAULocString@@00@Z
    inline void PostPlayerInfo(struct LocString* arg1, struct LocString* arg2, struct LocString* arg3)
    {
        return stub<member_func_t<void, NetArena, struct LocString*, struct LocString*, struct LocString*>>(
            0x4979B0, this, arg1, arg2, arg3);
    }

    // 0x497A60 | ?SetHost@NetArena@@QAEXH@Z
    inline void SetHost(int32_t arg1)
    {
        return stub<member_func_t<void, NetArena, int32_t>>(0x497A60, this, arg1);
    }

    // 0x496CE0 | ??1NetArena@@UAE@XZ
    inline ~NetArena() override
    {
        stub<member_func_t<void, NetArena>>(0x496CE0, this);
    }

    // 0x496DA0 | ?PreSetup@NetArena@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, NetArena>>(0x496DA0, this);
    }
};
