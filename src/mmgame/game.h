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

// mmgame:game

#include "hooking.h"

// 0x5A56B8 | ?ProjectileY@@3MA
inline extern_var(0x5A56B8, float, ProjectileY);

// 0x5A56C0 | ?IconColor@@3PAIA
inline extern_var(0x5A56C0, uint32_t*, IconColor);

// 0x609268 | ?LocPlayerName@@3PADA
inline extern_var(0x609268, char*, LocPlayerName);

// 0x609298 | ?mmGameMetaClass@@3VMetaClass@@A
inline extern_var(0x609298, class MetaClass, mmGameMetaClass);

// 0x6092C8 | ?ProjectileV@@3VVector3@@A
inline extern_var(0x6092C8, class Vector3, ProjectileV);

// 0x6092EC | ?masscycle@@3HA
inline extern_var(0x6092EC, int32_t, masscycle);

// 0x6092F0 | ?BangerProjectile@@3PAVmmBangerData@@A
inline extern_var(0x6092F0, class mmBangerData*, BangerProjectile);

// 0x40E6D0 | ?delete_mmGame@@YAXPAXH@Z
inline void delete_mmGame(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x40E6D0, arg1, arg2);
}

class mmGame : asNode
{
public:
    // mmGame::`vftable' @ 0x58F600

    // 0x40B860 | ??0mmGame@@QAE@XZ
    inline mmGame()
    {
        stub<member_func_t<void, mmGame>>(0x40B860, this);
    }

    // 0x40B9F0 | ?Init@mmGame@@QAEHXZ
    inline int32_t Init()
    {
        return stub<member_func_t<int32_t, mmGame>>(0x40B9F0, this);
    }

    // 0x40C9B0 | ?CollideAIOpponents@mmGame@@QAEXXZ
    inline void CollideAIOpponents()
    {
        return stub<member_func_t<void, mmGame>>(0x40C9B0, this);
    }

    // 0x40CF80 | ?Stats@mmGame@@QAEXXZ
    inline void Stats()
    {
        return stub<member_func_t<void, mmGame>>(0x40CF80, this);
    }

    // 0x40D060 | ?RespawnXYZ@mmGame@@IAEXAAVVector3@@AAM@Z
    inline void RespawnXYZ(class Vector3& arg1, float& arg2)
    {
        return stub<member_func_t<void, mmGame, class Vector3&, float&>>(0x40D060, this, arg1, arg2);
    }

    // 0x40D160 | ?IsPopupEnabled@mmGame@@QAEHXZ
    inline int32_t IsPopupEnabled()
    {
        return stub<member_func_t<int32_t, mmGame>>(0x40D160, this);
    }

    // 0x40D630 | ?UpdateGameInput@mmGame@@QAEXXZ
    inline void UpdateGameInput()
    {
        return stub<member_func_t<void, mmGame>>(0x40D630, this);
    }

    // 0x40DAB0 | ?UpdateSteeringBrakes@mmGame@@QAEXXZ
    inline void UpdateSteeringBrakes()
    {
        return stub<member_func_t<void, mmGame>>(0x40DAB0, this);
    }

    // 0x40DB90 | ?SetIconsState@mmGame@@QAEXXZ
    inline void SetIconsState()
    {
        return stub<member_func_t<void, mmGame>>(0x40DB90, this);
    }

    // 0x40DBB0 | ?PlayerSetState@mmGame@@QAEXXZ
    inline void PlayerSetState()
    {
        return stub<member_func_t<void, mmGame>>(0x40DBB0, this);
    }

    // 0x40DCB0 | ?CalculateRaceScore@mmGame@@IAEHHH@Z
    inline int32_t CalculateRaceScore(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmGame, int32_t, int32_t>>(0x40DCB0, this, arg1, arg2);
    }

    // 0x40E170 | ?GetCDTrack@mmGame@@QAEHF@Z
    inline int32_t GetCDTrack(int16_t arg1)
    {
        return stub<member_func_t<int32_t, mmGame, int16_t>>(0x40E170, this, arg1);
    }

    // 0x40E680 | ?DeclareFields@mmGame@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x40E680);
    }

    // 0x40CD90 | ??1mmGame@@UAE@XZ
    inline ~mmGame() override
    {
        stub<member_func_t<void, mmGame>>(0x40CD90, this);
    }

    // 0x40E720 | ?GetClass@mmGame@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmGame>>(0x40E720, this);
    }

    // 0x40D1D0 | ?Update@mmGame@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmGame>>(0x40D1D0, this);
    }

    // 0x40D170 | ?Reset@mmGame@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmGame>>(0x40D170, this);
    }

    // 0x40D540 | ?UpdatePaused@mmGame@@UAEXXZ
    inline void UpdatePaused() override
    {
        return stub<member_func_t<void, mmGame>>(0x40D540, this);
    }

    // 0x40CAB0 | ?InitGameStrings@mmGame@@UAEXXZ
    virtual inline void InitGameStrings()
    {
        return stub<member_func_t<void, mmGame>>(0x40CAB0, this);
    }

    // 0x567350 | __purecall
    virtual inline void InitMyPlayer()
    {
        return stub<member_func_t<void, mmGame>>(0x567350, this);
    }

    // 0x40C8B0 | ?InitOtherPlayers@mmGame@@UAEXXZ
    virtual inline void InitOtherPlayers()
    {
        return stub<member_func_t<void, mmGame>>(0x40C8B0, this);
    }

    // 0x567350 | __purecall
    virtual inline void InitGameObjects()
    {
        return stub<member_func_t<void, mmGame>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline void InitHUD()
    {
        return stub<member_func_t<void, mmGame>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline void UpdateGameInput(int32_t arg1)
    {
        return stub<member_func_t<void, mmGame, int32_t>>(0x567350, this, arg1);
    }

    // 0x40D380 | ?UpdateDebugInput@mmGame@@UAEXXZ
    virtual inline void UpdateDebugInput()
    {
        return stub<member_func_t<void, mmGame>>(0x40D380, this);
    }

    // 0x567350 | __purecall
    virtual inline void UpdateDebugKeyInput(int32_t arg1)
    {
        return stub<member_func_t<void, mmGame, int32_t>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline void UpdateGame()
    {
        return stub<member_func_t<void, mmGame>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline void NextRace()
    {
        return stub<member_func_t<void, mmGame>>(0x567350, this);
    }

    // 0x40D370 | ?HitWaterHandler@mmGame@@UAEXXZ
    virtual inline void HitWaterHandler()
    {
        return stub<member_func_t<void, mmGame>>(0x40D370, this);
    }

    // 0x40D360 | ?DropThruCityHandler@mmGame@@UAEXXZ
    virtual inline void DropThruCityHandler()
    {
        return stub<member_func_t<void, mmGame>>(0x40D360, this);
    }

    // 0x40DD20 | ?SendChatMessage@mmGame@@UAEXPAD@Z
    virtual inline void SendChatMessage(char* arg1)
    {
        return stub<member_func_t<void, mmGame, char*>>(0x40DD20, this, arg1);
    }

    // 0x40E8B0 | ?BeDone@mmGame@@UAEXXZ
    virtual inline void BeDone()
    {
        return stub<member_func_t<void, mmGame>>(0x40E8B0, this);
    }

    // 0x567350 | __purecall
    virtual inline class mmWaypoints* GetWaypoints()
    {
        return stub<member_func_t<class mmWaypoints*, mmGame>>(0x567350, this);
    }
};
