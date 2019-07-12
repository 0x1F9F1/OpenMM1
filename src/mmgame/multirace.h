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
    mmgame:multirace

    0x41B820 | public: __thiscall mmMultiRace::mmMultiRace(void) | ??0mmMultiRace@@QAE@XZ
    0x41B890 | public: virtual __thiscall mmMultiRace::~mmMultiRace(void) | ??1mmMultiRace@@UAE@XZ
    0x41B950 | public: int __thiscall mmMultiRace::Init(void) | ?Init@mmMultiRace@@QAEHXZ
    0x41BA90 | public: virtual void __thiscall mmMultiRace::InitMyPlayer(void) | ?InitMyPlayer@mmMultiRace@@UAEXXZ
    0x41BB00 | public: virtual void __thiscall mmMultiRace::InitHUD(void) | ?InitHUD@mmMultiRace@@UAEXXZ
    0x41BB60 | public: virtual void __thiscall mmMultiRace::InitGameObjects(void) | ?InitGameObjects@mmMultiRace@@UAEXXZ
    0x41BE30 | public: virtual void __thiscall mmMultiRace::InitNetworkPlayers(void) | ?InitNetworkPlayers@mmMultiRace@@UAEXXZ
    0x41C290 | public: virtual void __thiscall mmMultiRace::Reset(void) | ?Reset@mmMultiRace@@UAEXXZ
    0x41C390 | public: void __thiscall mmMultiRace::ChangePlayerData(void) | ?ChangePlayerData@mmMultiRace@@QAEXXZ
    0x41C3E0 | public: virtual void __thiscall mmMultiRace::UpdateGameInput(int) | ?UpdateGameInput@mmMultiRace@@UAEXH@Z
    0x41C420 | public: virtual void __thiscall mmMultiRace::UpdateGame(void) | ?UpdateGame@mmMultiRace@@UAEXXZ
    0x41CC10 | public: virtual void __thiscall mmMultiRace::SystemMessage(struct NETSYS_MSG *) | ?SystemMessage@mmMultiRace@@UAEXPAUNETSYS_MSG@@@Z
    0x41CDF0 | public: virtual void __thiscall mmMultiRace::GameMessage(struct NETGAME_MSG *) | ?GameMessage@mmMultiRace@@UAEXPAUNETGAME_MSG@@@Z
    0x41D150 | private: void __thiscall mmMultiRace::SendPlayerFinish(void) | ?SendPlayerFinish@mmMultiRace@@AAEXXZ
    0x41D190 | public: static void __cdecl mmMultiRace::DeclareFields(void) | ?DeclareFields@mmMultiRace@@SAXXZ
    0x41D300 | public: virtual class MetaClass * __thiscall mmMultiRace::GetClass(void) | ?GetClass@mmMultiRace@@UAEPAVMetaClass@@XZ
    0x41D460 | public: virtual void * __thiscall mmMultiRace::`vector deleting destructor'(unsigned int) | ??_EmmMultiRace@@UAEPAXI@Z
    0x41D4C0 | public: virtual class mmWaypoints * __thiscall mmMultiRace::GetWaypoints(void) | ?GetWaypoints@mmMultiRace@@UAEPAVmmWaypoints@@XZ
    0x58FBC0 | const mmMultiRace::`vftable' | ??_7mmMultiRace@@6B@
    0x6095B8 | class MetaClass mmMultiRaceMetaClass | ?mmMultiRaceMetaClass@@3VMetaClass@@A
    0x41D1E0 | void * __cdecl new_mmMultiRace(int) | ?new_mmMultiRace@@YAPAXH@Z
    0x41D2B0 | void __cdecl delete_mmMultiRace(void *,int) | ?delete_mmMultiRace@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x6095B8 | ?mmMultiRaceMetaClass@@3VMetaClass@@A
inline extern_var(0x6095B8, class MetaClass, mmMultiRaceMetaClass);

// 0x41D1E0 | ?new_mmMultiRace@@YAPAXH@Z
inline void* new_mmMultiRace(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x41D1E0, arg1);
}

// 0x41D2B0 | ?delete_mmMultiRace@@YAXPAXH@Z
inline void delete_mmMultiRace(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x41D2B0, arg1, arg2);
}

struct mmMultiRace : mmGameMulti
{
public:
    // mmMultiRace::`vftable' @ 0x58FBC0

    // 0x41B820 | ??0mmMultiRace@@QAE@XZ
    inline mmMultiRace()
    {
        // stub<member_func_t<void, mmMultiRace>>(0x41B820, this);

        unimplemented();
    }

    // 0x41B950 | ?Init@mmMultiRace@@QAEHXZ
    inline int32_t Init()
    {
        return stub<member_func_t<int32_t, mmMultiRace>>(0x41B950, this);
    }

    // 0x41C390 | ?ChangePlayerData@mmMultiRace@@QAEXXZ
    inline void ChangePlayerData()
    {
        return stub<member_func_t<void, mmMultiRace>>(0x41C390, this);
    }

    // 0x41D150 | ?SendPlayerFinish@mmMultiRace@@AAEXXZ
    inline void SendPlayerFinish()
    {
        return stub<member_func_t<void, mmMultiRace>>(0x41D150, this);
    }

    // 0x41D190 | ?DeclareFields@mmMultiRace@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x41D190);
    }

    // 0x41B890 | ??1mmMultiRace@@UAE@XZ
    inline ~mmMultiRace() override = 0
    {
        // stub<member_func_t<void, mmMultiRace>>(0x41B890, this);

        unimplemented();
    }

    // 0x41D300 | ?GetClass@mmMultiRace@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmMultiRace>>(0x41D300, this);
    }

    // 0x41C290 | ?Reset@mmMultiRace@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmMultiRace>>(0x41C290, this);
    }

    // 0x41BA90 | ?InitMyPlayer@mmMultiRace@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmMultiRace>>(0x41BA90, this);
    }

    // 0x41BB60 | ?InitGameObjects@mmMultiRace@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmMultiRace>>(0x41BB60, this);
    }

    // 0x41BB00 | ?InitHUD@mmMultiRace@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmMultiRace>>(0x41BB00, this);
    }

    // 0x41C3E0 | ?UpdateGameInput@mmMultiRace@@UAEXH@Z
    inline void UpdateGameInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmMultiRace, int32_t>>(0x41C3E0, this, arg1);
    }

    // 0x41C420 | ?UpdateGame@mmMultiRace@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmMultiRace>>(0x41C420, this);
    }

    // 0x41D4C0 | ?GetWaypoints@mmMultiRace@@UAEPAVmmWaypoints@@XZ
    inline class mmWaypoints* GetWaypoints() override
    {
        return stub<member_func_t<class mmWaypoints*, mmMultiRace>>(0x41D4C0, this);
    }

    // 0x41BE30 | ?InitNetworkPlayers@mmMultiRace@@UAEXXZ
    inline void InitNetworkPlayers() override
    {
        return stub<member_func_t<void, mmMultiRace>>(0x41BE30, this);
    }

    // 0x41CC10 | ?SystemMessage@mmMultiRace@@UAEXPAUNETSYS_MSG@@@Z
    inline void SystemMessage(struct NETSYS_MSG* arg1) override
    {
        return stub<member_func_t<void, mmMultiRace, struct NETSYS_MSG*>>(0x41CC10, this, arg1);
    }

    // 0x41CDF0 | ?GameMessage@mmMultiRace@@UAEXPAUNETGAME_MSG@@@Z
    inline void GameMessage(struct NETGAME_MSG* arg1) override
    {
        return stub<member_func_t<void, mmMultiRace, struct NETGAME_MSG*>>(0x41CDF0, this, arg1);
    }
};
