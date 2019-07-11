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

// mmgame:multiblitz

#include "hooking.h"

// 0x6094A8 | ?mmMultiBlitzMetaClass@@3VMetaClass@@A
inline extern_var(0x6094A8, class MetaClass, mmMultiBlitzMetaClass);

// 0x416470 | ?new_mmMultiBlitz@@YAPAXH@Z
inline void* new_mmMultiBlitz(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x416470, arg1);
}

// 0x416550 | ?delete_mmMultiBlitz@@YAXPAXH@Z
inline void delete_mmMultiBlitz(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x416550, arg1, arg2);
}

struct mmMultiBlitz : mmGameMulti
{
public:
    // mmMultiBlitz::`vftable' @ 0x58F998

    // 0x414DB0 | ??0mmMultiBlitz@@QAE@XZ
    inline mmMultiBlitz()
    {
        stub<member_func_t<void, mmMultiBlitz>>(0x414DB0, this);
    }

    // 0x414EE0 | ?Init@mmMultiBlitz@@QAEHXZ
    inline int32_t Init()
    {
        return stub<member_func_t<int32_t, mmMultiBlitz>>(0x414EE0, this);
    }

    // 0x4162F0 | ?SendPlayerFinish@mmMultiBlitz@@AAEXXZ
    inline void SendPlayerFinish()
    {
        return stub<member_func_t<void, mmMultiBlitz>>(0x4162F0, this);
    }

    // 0x416340 | ?PlayTimerWarning@mmMultiBlitz@@QAEXM@Z
    inline void PlayTimerWarning(float arg1)
    {
        return stub<member_func_t<void, mmMultiBlitz, float>>(0x416340, this, arg1);
    }

    // 0x416420 | ?DeclareFields@mmMultiBlitz@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x416420);
    }

    // 0x414E20 | ??1mmMultiBlitz@@UAE@XZ
    inline ~mmMultiBlitz() override
    {
        stub<member_func_t<void, mmMultiBlitz>>(0x414E20, this);
    }

    // 0x4165A0 | ?GetClass@mmMultiBlitz@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmMultiBlitz>>(0x4165A0, this);
    }

    // 0x4156F0 | ?Reset@mmMultiBlitz@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmMultiBlitz>>(0x4156F0, this);
    }

    // 0x415010 | ?InitMyPlayer@mmMultiBlitz@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmMultiBlitz>>(0x415010, this);
    }

    // 0x415100 | ?InitGameObjects@mmMultiBlitz@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmMultiBlitz>>(0x415100, this);
    }

    // 0x415080 | ?InitHUD@mmMultiBlitz@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmMultiBlitz>>(0x415080, this);
    }

    // 0x415790 | ?UpdateGameInput@mmMultiBlitz@@UAEXH@Z
    inline void UpdateGameInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmMultiBlitz, int32_t>>(0x415790, this, arg1);
    }

    // 0x4157D0 | ?UpdateGame@mmMultiBlitz@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmMultiBlitz>>(0x4157D0, this);
    }

    // 0x416770 | ?GetWaypoints@mmMultiBlitz@@UAEPAVmmWaypoints@@XZ
    inline class mmWaypoints* GetWaypoints() override
    {
        return stub<member_func_t<class mmWaypoints*, mmMultiBlitz>>(0x416770, this);
    }

    // 0x415390 | ?InitNetworkPlayers@mmMultiBlitz@@UAEXXZ
    inline void InitNetworkPlayers() override
    {
        return stub<member_func_t<void, mmMultiBlitz>>(0x415390, this);
    }

    // 0x415EF0 | ?SystemMessage@mmMultiBlitz@@UAEXPAUNETSYS_MSG@@@Z
    inline void SystemMessage(struct NETSYS_MSG* arg1) override
    {
        return stub<member_func_t<void, mmMultiBlitz, struct NETSYS_MSG*>>(0x415EF0, this, arg1);
    }

    // 0x416090 | ?GameMessage@mmMultiBlitz@@UAEXPAUNETGAME_MSG@@@Z
    inline void GameMessage(struct NETGAME_MSG* arg1) override
    {
        return stub<member_func_t<void, mmMultiBlitz, struct NETGAME_MSG*>>(0x416090, this, arg1);
    }
};
