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
    mmgame:multiblitz

    0x414DB0 | public: __thiscall mmMultiBlitz::mmMultiBlitz(void) | ??0mmMultiBlitz@@QAE@XZ
    0x414E20 | public: virtual __thiscall mmMultiBlitz::~mmMultiBlitz(void) | ??1mmMultiBlitz@@UAE@XZ
    0x414EE0 | public: int __thiscall mmMultiBlitz::Init(void) | ?Init@mmMultiBlitz@@QAEHXZ
    0x415010 | public: virtual void __thiscall mmMultiBlitz::InitMyPlayer(void) | ?InitMyPlayer@mmMultiBlitz@@UAEXXZ
    0x415080 | public: virtual void __thiscall mmMultiBlitz::InitHUD(void) | ?InitHUD@mmMultiBlitz@@UAEXXZ
    0x415100 | public: virtual void __thiscall mmMultiBlitz::InitGameObjects(void) | ?InitGameObjects@mmMultiBlitz@@UAEXXZ
    0x415390 | public: virtual void __thiscall mmMultiBlitz::InitNetworkPlayers(void) | ?InitNetworkPlayers@mmMultiBlitz@@UAEXXZ
    0x4156F0 | public: virtual void __thiscall mmMultiBlitz::Reset(void) | ?Reset@mmMultiBlitz@@UAEXXZ
    0x415790 | public: virtual void __thiscall mmMultiBlitz::UpdateGameInput(int) | ?UpdateGameInput@mmMultiBlitz@@UAEXH@Z
    0x4157D0 | public: virtual void __thiscall mmMultiBlitz::UpdateGame(void) | ?UpdateGame@mmMultiBlitz@@UAEXXZ
    0x415EF0 | public: virtual void __thiscall mmMultiBlitz::SystemMessage(struct NETSYS_MSG *) | ?SystemMessage@mmMultiBlitz@@UAEXPAUNETSYS_MSG@@@Z
    0x416090 | public: virtual void __thiscall mmMultiBlitz::GameMessage(struct NETGAME_MSG *) | ?GameMessage@mmMultiBlitz@@UAEXPAUNETGAME_MSG@@@Z
    0x4162F0 | private: void __thiscall mmMultiBlitz::SendPlayerFinish(void) | ?SendPlayerFinish@mmMultiBlitz@@AAEXXZ
    0x416340 | public: void __thiscall mmMultiBlitz::PlayTimerWarning(float) | ?PlayTimerWarning@mmMultiBlitz@@QAEXM@Z
    0x416420 | public: static void __cdecl mmMultiBlitz::DeclareFields(void) | ?DeclareFields@mmMultiBlitz@@SAXXZ
    0x4165A0 | public: virtual class MetaClass * __thiscall mmMultiBlitz::GetClass(void) | ?GetClass@mmMultiBlitz@@UAEPAVMetaClass@@XZ
    0x416700 | public: virtual void * __thiscall mmMultiBlitz::`vector deleting destructor'(unsigned int) | ??_EmmMultiBlitz@@UAEPAXI@Z
    0x416760 | public: virtual void __thiscall mmGameMulti::NextRace(void) | ?NextRace@mmGameMulti@@UAEXXZ
    0x416770 | public: virtual class mmWaypoints * __thiscall mmMultiBlitz::GetWaypoints(void) | ?GetWaypoints@mmMultiBlitz@@UAEPAVmmWaypoints@@XZ
    0x58F998 | const mmMultiBlitz::`vftable' | ??_7mmMultiBlitz@@6B@
    0x6094A8 | class MetaClass mmMultiBlitzMetaClass | ?mmMultiBlitzMetaClass@@3VMetaClass@@A
    0x416470 | void * __cdecl new_mmMultiBlitz(int) | ?new_mmMultiBlitz@@YAPAXH@Z
    0x416550 | void __cdecl delete_mmMultiBlitz(void *,int) | ?delete_mmMultiBlitz@@YAXPAXH@Z
*/

// 0x6094A8 | ?mmMultiBlitzMetaClass@@3VMetaClass@@A
inline extern_var(0x6094A8, class MetaClass, mmMultiBlitzMetaClass);

// 0x416470 | ?new_mmMultiBlitz@@YAPAXH@Z
// 0x416550 | ?delete_mmMultiBlitz@@YAXPAXH@Z

struct mmMultiBlitz : mmGameMulti
{
public:
    // mmMultiBlitz::`vftable' @ 0x58F998

    // 0x414DB0 | ??0mmMultiBlitz@@QAE@XZ
    inline mmMultiBlitz()
    {
        // stub<member_func_t<void, mmMultiBlitz>>(0x414DB0, this);

        unimplemented();
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
    inline ~mmMultiBlitz() override = 0
    {
        // stub<member_func_t<void, mmMultiBlitz>>(0x414E20, this);

        unimplemented();
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
