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
    mmgame:gamemulti

    0x42B350 | public: __thiscall mmGameMulti::mmGameMulti(void) | ??0mmGameMulti@@QAE@XZ
    0x42B460 | public: virtual __thiscall mmGameMulti::~mmGameMulti(void) | ??1mmGameMulti@@UAE@XZ
    0x42B520 | public: int __thiscall mmGameMulti::Init(void) | ?Init@mmGameMulti@@QAEHXZ
    0x42B650 | public: virtual void __thiscall mmGameMulti::HitWaterHandler(void) | ?HitWaterHandler@mmGameMulti@@UAEXXZ
    0x42B740 | public: virtual void __thiscall mmGameMulti::DropThruCityHandler(void) | ?DropThruCityHandler@mmGameMulti@@UAEXXZ
    0x42B750 | public: virtual void __thiscall mmGameMulti::InitGameStrings(void) | ?InitGameStrings@mmGameMulti@@UAEXXZ
    0x42B970 | protected: void __thiscall mmGameMulti::StartXYZ(int,class Vector3 &,class Vector3 &,float,float) | ?StartXYZ@mmGameMulti@@IAEXHAAVVector3@@0MM@Z
    0x42BBA0 | public: void __thiscall mmGameMulti::SystemMessageCB(void *,void *) | ?SystemMessageCB@mmGameMulti@@QAEXPAX0@Z
    0x42BDB0 | public: void __thiscall mmGameMulti::GameMessageCB(void *,void *) | ?GameMessageCB@mmGameMulti@@QAEXPAX0@Z
    0x42C140 | public: void __thiscall mmGameMulti::BootStrapCars(void) | ?BootStrapCars@mmGameMulti@@QAEXXZ
    0x42C2E0 | public: virtual void __thiscall mmGameMulti::BeDone(void) | ?BeDone@mmGameMulti@@UAEXXZ
    0x42C310 | public: virtual void __thiscall mmGameMulti::Reset(void) | ?Reset@mmGameMulti@@UAEXXZ
    0x42C390 | public: void __thiscall mmGameMulti::ClearNetObjects(void) | ?ClearNetObjects@mmGameMulti@@QAEXXZ
    0x42C3D0 | public: virtual void __thiscall mmGameMulti::InitOtherPlayers(void) | ?InitOtherPlayers@mmGameMulti@@UAEXXZ
    0x42C650 | public: virtual void __thiscall mmGameMulti::InitRoster(void) | ?InitRoster@mmGameMulti@@UAEXXZ
    0x42C6E0 | public: virtual void __thiscall mmGameMulti::Update(void) | ?Update@mmGameMulti@@UAEXXZ
    0x42C700 | public: virtual void __thiscall mmGameMulti::UpdateGame(void) | ?UpdateGame@mmGameMulti@@UAEXXZ
    0x42C790 | public: void __thiscall mmGameMulti::UpdateScore(void) | ?UpdateScore@mmGameMulti@@QAEXXZ
    0x42CBC0 | public: virtual void __thiscall mmGameMulti::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmGameMulti@@UAEXH@Z
    0x42CBD0 | public: void __thiscall mmGameMulti::RegisterMapNetObjects(int) | ?RegisterMapNetObjects@mmGameMulti@@QAEXH@Z
    0x42CCF0 | public: void __thiscall mmGameMulti::DeactivateMapNetObject(int) | ?DeactivateMapNetObject@mmGameMulti@@QAEXH@Z
    0x42CD20 | public: void __thiscall mmGameMulti::ActivateMapNetObject(int) | ?ActivateMapNetObject@mmGameMulti@@QAEXH@Z
    0x42CD60 | protected: void __thiscall mmGameMulti::EnableRacers(void) | ?EnableRacers@mmGameMulti@@IAEXXZ
    0x42CDE0 | protected: void __thiscall mmGameMulti::DisableRacers(void) | ?DisableRacers@mmGameMulti@@IAEXXZ
    0x42CE30 | public: void __thiscall mmGameMulti::QuitNetwork(void) | ?QuitNetwork@mmGameMulti@@QAEXXZ
    0x42CE60 | public: int __thiscall mmGameMulti::ParseChatMessage(char *,int) | ?ParseChatMessage@mmGameMulti@@QAEHPADH@Z
    0x42CF20 | public: virtual void __thiscall mmGameMulti::SendChatMessage(char *) | ?SendChatMessage@mmGameMulti@@UAEXPAD@Z
    0x42CFE0 | public: void __thiscall mmGameMulti::SendToChatMessage(char *,unsigned long) | ?SendToChatMessage@mmGameMulti@@QAEXPADK@Z
    0x42D0B0 | public: void __thiscall mmGameMulti::FinishMessage(int) | ?FinishMessage@mmGameMulti@@QAEXH@Z
    0x42D170 | public: void __thiscall mmGameMulti::BootPlayerCB(void *,void *) | ?BootPlayerCB@mmGameMulti@@QAEXPAX0@Z
    0x42D1B0 | public: void __thiscall mmGameMulti::UpdateNetWorkAudio(void) | ?UpdateNetWorkAudio@mmGameMulti@@QAEXXZ
    0x42D200 | public: void __thiscall mmGameMulti::SendMsg(int) | ?SendMsg@mmGameMulti@@QAEXH@Z
    0x42D230 | public: void __thiscall mmGameMulti::SendBootMsg(unsigned long) | ?SendBootMsg@mmGameMulti@@QAEXK@Z
    0x42D270 | public: static void __cdecl mmGameMulti::DeclareFields(void) | ?DeclareFields@mmGameMulti@@SAXXZ
    0x42D310 | public: virtual class MetaClass * __thiscall mmGameMulti::GetClass(void) | ?GetClass@mmGameMulti@@UAEPAVMetaClass@@XZ
    0x42D470 | public: virtual void * __thiscall mmGameMulti::`scalar deleting destructor'(unsigned int) | ??_GmmGameMulti@@UAEPAXI@Z
    0x42D470 | public: virtual void * __thiscall mmGameMulti::`vector deleting destructor'(unsigned int) | ??_EmmGameMulti@@UAEPAXI@Z
    0x590178 | const mmGameMulti::`vftable' | ??_7mmGameMulti@@6B@
    0x609B08 | class MetaClass mmGameMultiMetaClass | ?mmGameMultiMetaClass@@3VMetaClass@@A
    0x42C130 | void __cdecl Debugf(char const *,...) | ?Debugf@@YAXPBDZZ
    0x42D2C0 | void __cdecl delete_mmGameMulti(void *,int) | ?delete_mmGameMulti@@YAXPAXH@Z
*/

// 0x609B08 | ?mmGameMultiMetaClass@@3VMetaClass@@A
inline extern_var(0x609B08, class MetaClass, mmGameMultiMetaClass);

// 0x42C130 | ?Debugf@@YAXPBDZZ
// Skipped (Variable Arguments)

// 0x42D2C0 | ?delete_mmGameMulti@@YAXPAXH@Z
inline void delete_mmGameMulti(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x42D2C0, arg1, arg2);
}

struct mmGameMulti : mmGame
{
public:
    // mmGameMulti::`vftable' @ 0x590178

    // 0x42B350 | ??0mmGameMulti@@QAE@XZ
    inline mmGameMulti()
    {
        // stub<member_func_t<void, mmGameMulti>>(0x42B350, this);

        unimplemented();
    }

    // 0x42B520 | ?Init@mmGameMulti@@QAEHXZ
    inline int32_t Init()
    {
        return stub<member_func_t<int32_t, mmGameMulti>>(0x42B520, this);
    }

    // 0x42B970 | ?StartXYZ@mmGameMulti@@IAEXHAAVVector3@@0MM@Z
    inline void StartXYZ(int32_t arg1, class Vector3& arg2, class Vector3& arg3, float arg4, float arg5)
    {
        return stub<member_func_t<void, mmGameMulti, int32_t, class Vector3&, class Vector3&, float, float>>(
            0x42B970, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x42BBA0 | ?SystemMessageCB@mmGameMulti@@QAEXPAX0@Z
    inline void SystemMessageCB(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, mmGameMulti, void*, void*>>(0x42BBA0, this, arg1, arg2);
    }

    // 0x42BDB0 | ?GameMessageCB@mmGameMulti@@QAEXPAX0@Z
    inline void GameMessageCB(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, mmGameMulti, void*, void*>>(0x42BDB0, this, arg1, arg2);
    }

    // 0x42C140 | ?BootStrapCars@mmGameMulti@@QAEXXZ
    inline void BootStrapCars()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42C140, this);
    }

    // 0x42C390 | ?ClearNetObjects@mmGameMulti@@QAEXXZ
    inline void ClearNetObjects()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42C390, this);
    }

    // 0x42C790 | ?UpdateScore@mmGameMulti@@QAEXXZ
    inline void UpdateScore()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42C790, this);
    }

    // 0x42CBD0 | ?RegisterMapNetObjects@mmGameMulti@@QAEXH@Z
    inline void RegisterMapNetObjects(int32_t arg1)
    {
        return stub<member_func_t<void, mmGameMulti, int32_t>>(0x42CBD0, this, arg1);
    }

    // 0x42CCF0 | ?DeactivateMapNetObject@mmGameMulti@@QAEXH@Z
    inline void DeactivateMapNetObject(int32_t arg1)
    {
        return stub<member_func_t<void, mmGameMulti, int32_t>>(0x42CCF0, this, arg1);
    }

    // 0x42CD20 | ?ActivateMapNetObject@mmGameMulti@@QAEXH@Z
    inline void ActivateMapNetObject(int32_t arg1)
    {
        return stub<member_func_t<void, mmGameMulti, int32_t>>(0x42CD20, this, arg1);
    }

    // 0x42CD60 | ?EnableRacers@mmGameMulti@@IAEXXZ
    inline void EnableRacers()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42CD60, this);
    }

    // 0x42CDE0 | ?DisableRacers@mmGameMulti@@IAEXXZ
    inline void DisableRacers()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42CDE0, this);
    }

    // 0x42CE30 | ?QuitNetwork@mmGameMulti@@QAEXXZ
    inline void QuitNetwork()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42CE30, this);
    }

    // 0x42CE60 | ?ParseChatMessage@mmGameMulti@@QAEHPADH@Z
    inline int32_t ParseChatMessage(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmGameMulti, char*, int32_t>>(0x42CE60, this, arg1, arg2);
    }

    // 0x42CFE0 | ?SendToChatMessage@mmGameMulti@@QAEXPADK@Z
    inline void SendToChatMessage(char* arg1, uint32_t arg2)
    {
        return stub<member_func_t<void, mmGameMulti, char*, uint32_t>>(0x42CFE0, this, arg1, arg2);
    }

    // 0x42D0B0 | ?FinishMessage@mmGameMulti@@QAEXH@Z
    inline void FinishMessage(int32_t arg1)
    {
        return stub<member_func_t<void, mmGameMulti, int32_t>>(0x42D0B0, this, arg1);
    }

    // 0x42D170 | ?BootPlayerCB@mmGameMulti@@QAEXPAX0@Z
    inline void BootPlayerCB(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, mmGameMulti, void*, void*>>(0x42D170, this, arg1, arg2);
    }

    // 0x42D1B0 | ?UpdateNetWorkAudio@mmGameMulti@@QAEXXZ
    inline void UpdateNetWorkAudio()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42D1B0, this);
    }

    // 0x42D200 | ?SendMsg@mmGameMulti@@QAEXH@Z
    inline void SendMsg(int32_t arg1)
    {
        return stub<member_func_t<void, mmGameMulti, int32_t>>(0x42D200, this, arg1);
    }

    // 0x42D230 | ?SendBootMsg@mmGameMulti@@QAEXK@Z
    inline void SendBootMsg(uint32_t arg1)
    {
        return stub<member_func_t<void, mmGameMulti, uint32_t>>(0x42D230, this, arg1);
    }

    // 0x42D270 | ?DeclareFields@mmGameMulti@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x42D270);
    }

    // 0x42B460 | ??1mmGameMulti@@UAE@XZ
    inline ~mmGameMulti() override = 0
    {
        // stub<member_func_t<void, mmGameMulti>>(0x42B460, this);

        unimplemented();
    }

    // 0x42D310 | ?GetClass@mmGameMulti@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmGameMulti>>(0x42D310, this);
    }

    // 0x42C6E0 | ?Update@mmGameMulti@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42C6E0, this);
    }

    // 0x42C310 | ?Reset@mmGameMulti@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42C310, this);
    }

    // 0x42B750 | ?InitGameStrings@mmGameMulti@@UAEXXZ
    inline void InitGameStrings() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42B750, this);
    }

    // 0x42C3D0 | ?InitOtherPlayers@mmGameMulti@@UAEXXZ
    inline void InitOtherPlayers() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42C3D0, this);
    }

    // 0x42CBC0 | ?UpdateDebugKeyInput@mmGameMulti@@UAEXH@Z
    inline void UpdateDebugKeyInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmGameMulti, int32_t>>(0x42CBC0, this, arg1);
    }

    // 0x42C700 | ?UpdateGame@mmGameMulti@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42C700, this);
    }

    // 0x416760 | ?NextRace@mmGameMulti@@UAEXXZ
    inline void NextRace() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x416760, this);
    }

    // 0x42B650 | ?HitWaterHandler@mmGameMulti@@UAEXXZ
    inline void HitWaterHandler() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42B650, this);
    }

    // 0x42B740 | ?DropThruCityHandler@mmGameMulti@@UAEXXZ
    inline void DropThruCityHandler() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42B740, this);
    }

    // 0x42CF20 | ?SendChatMessage@mmGameMulti@@UAEXPAD@Z
    inline void SendChatMessage(char* arg1) override
    {
        return stub<member_func_t<void, mmGameMulti, char*>>(0x42CF20, this, arg1);
    }

    // 0x42C2E0 | ?BeDone@mmGameMulti@@UAEXXZ
    inline void BeDone() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42C2E0, this);
    }

    // 0x567350 | __purecall
    virtual inline void InitNetworkPlayers() = 0;

    // 0x42C650 | ?InitRoster@mmGameMulti@@UAEXXZ
    virtual inline void InitRoster()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42C650, this);
    }

    // 0x567350 | __purecall
    virtual inline void SystemMessage(struct NETSYS_MSG* arg1) = 0;

    // 0x567350 | __purecall
    virtual inline void GameMessage(struct NETGAME_MSG* arg1) = 0;
};
