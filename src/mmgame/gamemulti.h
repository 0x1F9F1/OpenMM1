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

// mmgame:gamemulti

#include "hooking.h"

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
        stub<member_func_t<void, mmGameMulti>>(0x42B350, this);
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
    inline ~mmGameMulti() override
    {
        stub<member_func_t<void, mmGameMulti>>(0x42B460, this);
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

    // 0x567350 | __purecall

    // 0x42C3D0 | ?InitOtherPlayers@mmGameMulti@@UAEXXZ
    inline void InitOtherPlayers() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42C3D0, this);
    }

    // 0x567350 | __purecall

    // 0x567350 | __purecall

    // 0x567350 | __purecall

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

    // 0x567350 | __purecall
    virtual inline void InitNetworkPlayers()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x567350, this);
    }

    // 0x42C650 | ?InitRoster@mmGameMulti@@UAEXXZ
    virtual inline void InitRoster()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x42C650, this);
    }

    // 0x567350 | __purecall
    virtual inline void SystemMessage(struct NETSYS_MSG* arg1)
    {
        return stub<member_func_t<void, mmGameMulti, struct NETSYS_MSG*>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline void GameMessage(struct NETGAME_MSG* arg1)
    {
        return stub<member_func_t<void, mmGameMulti, struct NETGAME_MSG*>>(0x567350, this, arg1);
    }
};
