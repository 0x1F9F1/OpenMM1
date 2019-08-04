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
    mmgame:multicircuit

    0x416780 | public: __thiscall mmMultiCircuit::mmMultiCircuit(void) | ??0mmMultiCircuit@@QAE@XZ
    0x4167F0 | public: virtual __thiscall mmMultiCircuit::~mmMultiCircuit(void) | ??1mmMultiCircuit@@UAE@XZ
    0x4168B0 | public: int __thiscall mmMultiCircuit::Init(void) | ?Init@mmMultiCircuit@@QAEHXZ
    0x4169D0 | public: virtual void __thiscall mmMultiCircuit::InitMyPlayer(void) | ?InitMyPlayer@mmMultiCircuit@@UAEXXZ
    0x416A40 | public: virtual void __thiscall mmMultiCircuit::InitHUD(void) | ?InitHUD@mmMultiCircuit@@UAEXXZ
    0x416A90 | public: virtual void __thiscall mmMultiCircuit::InitGameObjects(void) | ?InitGameObjects@mmMultiCircuit@@UAEXXZ
    0x416D00 | public: virtual void __thiscall mmMultiCircuit::InitNetworkPlayers(void) | ?InitNetworkPlayers@mmMultiCircuit@@UAEXXZ
    0x417060 | public: virtual void __thiscall mmMultiCircuit::Reset(void) | ?Reset@mmMultiCircuit@@UAEXXZ
    0x4170F0 | public: virtual void __thiscall mmMultiCircuit::UpdateGameInput(int) | ?UpdateGameInput@mmMultiCircuit@@UAEXH@Z
    0x417130 | public: virtual void __thiscall mmMultiCircuit::UpdateGame(void) | ?UpdateGame@mmMultiCircuit@@UAEXXZ
    0x4176E0 | public: virtual void __thiscall mmMultiCircuit::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmMultiCircuit@@UAEXH@Z
    0x4176F0 | public: virtual void __thiscall mmMultiCircuit::SystemMessage(struct NETSYS_MSG *) | ?SystemMessage@mmMultiCircuit@@UAEXPAUNETSYS_MSG@@@Z
    0x417890 | public: virtual void __thiscall mmMultiCircuit::GameMessage(struct NETGAME_MSG *) | ?GameMessage@mmMultiCircuit@@UAEXPAUNETGAME_MSG@@@Z
    0x417AF0 | private: void __thiscall mmMultiCircuit::SendPlayerFinish(void) | ?SendPlayerFinish@mmMultiCircuit@@AAEXXZ
    0x417B30 | public: static void __cdecl mmMultiCircuit::DeclareFields(void) | ?DeclareFields@mmMultiCircuit@@SAXXZ
    0x417CA0 | public: virtual class MetaClass * __thiscall mmMultiCircuit::GetClass(void) | ?GetClass@mmMultiCircuit@@UAEPAVMetaClass@@XZ
    0x417E00 | public: virtual void * __thiscall mmMultiCircuit::`vector deleting destructor'(unsigned int) | ??_EmmMultiCircuit@@UAEPAXI@Z
    0x417E60 | public: virtual class mmWaypoints * __thiscall mmMultiCircuit::GetWaypoints(void) | ?GetWaypoints@mmMultiCircuit@@UAEPAVmmWaypoints@@XZ
    0x58FA48 | const mmMultiCircuit::`vftable' | ??_7mmMultiCircuit@@6B@
    0x6094F0 | class MetaClass mmMultiCircuitMetaClass | ?mmMultiCircuitMetaClass@@3VMetaClass@@A
    0x417B80 | void * __cdecl new_mmMultiCircuit(int) | ?new_mmMultiCircuit@@YAPAXH@Z
    0x417C50 | void __cdecl delete_mmMultiCircuit(void *,int) | ?delete_mmMultiCircuit@@YAXPAXH@Z
*/

// 0x6094F0 | ?mmMultiCircuitMetaClass@@3VMetaClass@@A
inline extern_var(0x6094F0, class MetaClass, mmMultiCircuitMetaClass);

// 0x417B80 | ?new_mmMultiCircuit@@YAPAXH@Z
// 0x417C50 | ?delete_mmMultiCircuit@@YAXPAXH@Z

struct mmMultiCircuit : mmGameMulti
{
public:
    // mmMultiCircuit::`vftable' @ 0x58FA48

    // 0x416780 | ??0mmMultiCircuit@@QAE@XZ
    inline mmMultiCircuit()
    {
        // stub<member_func_t<void, mmMultiCircuit>>(0x416780, this);

        unimplemented();
    }

    // 0x4168B0 | ?Init@mmMultiCircuit@@QAEHXZ
    inline int32_t Init()
    {
        return stub<member_func_t<int32_t, mmMultiCircuit>>(0x4168B0, this);
    }

    // 0x417AF0 | ?SendPlayerFinish@mmMultiCircuit@@AAEXXZ
    inline void SendPlayerFinish()
    {
        return stub<member_func_t<void, mmMultiCircuit>>(0x417AF0, this);
    }

    // 0x417B30 | ?DeclareFields@mmMultiCircuit@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x417B30);
    }

    // 0x4167F0 | ??1mmMultiCircuit@@UAE@XZ
    inline ~mmMultiCircuit() override = 0
    {
        // stub<member_func_t<void, mmMultiCircuit>>(0x4167F0, this);

        unimplemented();
    }

    // 0x417CA0 | ?GetClass@mmMultiCircuit@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmMultiCircuit>>(0x417CA0, this);
    }

    // 0x417060 | ?Reset@mmMultiCircuit@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmMultiCircuit>>(0x417060, this);
    }

    // 0x4169D0 | ?InitMyPlayer@mmMultiCircuit@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmMultiCircuit>>(0x4169D0, this);
    }

    // 0x416A90 | ?InitGameObjects@mmMultiCircuit@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmMultiCircuit>>(0x416A90, this);
    }

    // 0x416A40 | ?InitHUD@mmMultiCircuit@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmMultiCircuit>>(0x416A40, this);
    }

    // 0x4170F0 | ?UpdateGameInput@mmMultiCircuit@@UAEXH@Z
    inline void UpdateGameInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmMultiCircuit, int32_t>>(0x4170F0, this, arg1);
    }

    // 0x4176E0 | ?UpdateDebugKeyInput@mmMultiCircuit@@UAEXH@Z
    inline void UpdateDebugKeyInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmMultiCircuit, int32_t>>(0x4176E0, this, arg1);
    }

    // 0x417130 | ?UpdateGame@mmMultiCircuit@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmMultiCircuit>>(0x417130, this);
    }

    // 0x417E60 | ?GetWaypoints@mmMultiCircuit@@UAEPAVmmWaypoints@@XZ
    inline class mmWaypoints* GetWaypoints() override
    {
        return stub<member_func_t<class mmWaypoints*, mmMultiCircuit>>(0x417E60, this);
    }

    // 0x416D00 | ?InitNetworkPlayers@mmMultiCircuit@@UAEXXZ
    inline void InitNetworkPlayers() override
    {
        return stub<member_func_t<void, mmMultiCircuit>>(0x416D00, this);
    }

    // 0x4176F0 | ?SystemMessage@mmMultiCircuit@@UAEXPAUNETSYS_MSG@@@Z
    inline void SystemMessage(struct NETSYS_MSG* arg1) override
    {
        return stub<member_func_t<void, mmMultiCircuit, struct NETSYS_MSG*>>(0x4176F0, this, arg1);
    }

    // 0x417890 | ?GameMessage@mmMultiCircuit@@UAEXPAUNETGAME_MSG@@@Z
    inline void GameMessage(struct NETGAME_MSG* arg1) override
    {
        return stub<member_func_t<void, mmMultiCircuit, struct NETGAME_MSG*>>(0x417890, this, arg1);
    }
};
