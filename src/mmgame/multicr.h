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

// mmgame:multicr

#include "hooking.h"

// 0x609548 | ?mmMultiCRMetaClass@@3VMetaClass@@A
inline extern_var(0x609548, class MetaClass, mmMultiCRMetaClass);

// 0x609578 | ?TwoPlayers@@3HA
inline extern_var(0x609578, int32_t, TwoPlayers);

// 0x41B530 | ?new_mmMultiCR@@YAPAXH@Z
inline void* new_mmMultiCR(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x41B530, arg1);
}

// 0x41B600 | ?delete_mmMultiCR@@YAXPAXH@Z
inline void delete_mmMultiCR(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x41B600, arg1, arg2);
}

struct mmMultiCR : mmGameMulti
{
public:
    // mmMultiCR::`vftable' @ 0x58FB10

    // 0x417E70 | ??0mmMultiCR@@QAE@XZ
    inline mmMultiCR()
    {
        stub<member_func_t<void, mmMultiCR>>(0x417E70, this);
    }

    // 0x418000 | ?Init@mmMultiCR@@QAEHXZ
    inline int32_t Init()
    {
        return stub<member_func_t<int32_t, mmMultiCR>>(0x418000, this);
    }

    // 0x418D60 | ?LoadSets@mmMultiCR@@QAEHPAD@Z
    inline int32_t LoadSets(char* arg1)
    {
        return stub<member_func_t<int32_t, mmMultiCR, char*>>(0x418D60, this, arg1);
    }

    // 0x418E00 | ?LoadCSV@mmMultiCR@@QAEHPAD@Z
    inline int32_t LoadCSV(char* arg1)
    {
        return stub<member_func_t<int32_t, mmMultiCR, char*>>(0x418E00, this, arg1);
    }

    // 0x418F50 | ?ImpactCallback@mmMultiCR@@QAEXXZ
    inline void ImpactCallback()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x418F50, this);
    }

    // 0x419040 | ?FondleCarMass@mmMultiCR@@QAEXPAVmmCar@@M@Z
    inline void FondleCarMass(class mmCar* arg1, float arg2)
    {
        return stub<member_func_t<void, mmMultiCR, class mmCar*, float>>(0x419040, this, arg1, arg2);
    }

    // 0x419060 | ?ChangePlayerData@mmMultiCR@@QAEXXZ
    inline void ChangePlayerData()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x419060, this);
    }

    // 0x4190B0 | ?GetRandomIndex@mmMultiCR@@AAEHXZ
    inline int32_t GetRandomIndex()
    {
        return stub<member_func_t<int32_t, mmMultiCR>>(0x4190B0, this);
    }

    // 0x4190D0 | ?ResetPositions@mmMultiCR@@QAEXH@Z
    inline void ResetPositions(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x4190D0, this, arg1);
    }

    // 0x4191F0 | ?SelectTeams@mmMultiCR@@AAEHXZ
    inline int32_t SelectTeams()
    {
        return stub<member_func_t<int32_t, mmMultiCR>>(0x4191F0, this);
    }

    // 0x4197A0 | ?StealGold@mmMultiCR@@AAEXPAVmmCar@@@Z
    inline void StealGold(class mmCar* arg1)
    {
        return stub<member_func_t<void, mmMultiCR, class mmCar*>>(0x4197A0, this, arg1);
    }

    // 0x4197E0 | ?OppStealGold@mmMultiCR@@AAEXH@Z
    inline void OppStealGold(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x4197E0, this, arg1);
    }

    // 0x419850 | ?FindGround@mmMultiCR@@AAEXVVector3@@AAV2@@Z
    inline void FindGround(class Vector3 arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, mmMultiCR, class Vector3, class Vector3&>>(0x419850, this, arg1, arg2);
    }

    // 0x419910 | ?DropGold@mmMultiCR@@AAEXVVector3@@H@Z
    inline void DropGold(class Vector3 arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmMultiCR, class Vector3, int32_t>>(0x419910, this, arg1, arg2);
    }

    // 0x419B00 | ?UpdateGold@mmMultiCR@@AAEXXZ
    inline void UpdateGold()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x419B00, this);
    }

    // 0x419D30 | ?UpdateHideout@mmMultiCR@@AAEXXZ
    inline void UpdateHideout()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x419D30, this);
    }

    // 0x419E80 | ?UpdateBank@mmMultiCR@@AAEXXZ
    inline void UpdateBank()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x419E80, this);
    }

    // 0x419FD0 | ?UpdateLimit@mmMultiCR@@AAEXXZ
    inline void UpdateLimit()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x419FD0, this);
    }

    // 0x41A170 | ?FillResults@mmMultiCR@@AAEXXZ
    inline void FillResults()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x41A170, this);
    }

    // 0x41AED0 | ?UpdateTimeWarning@mmMultiCR@@AAEXXZ
    inline void UpdateTimeWarning()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x41AED0, this);
    }

    // 0x41B040 | ?DisplayTimeWarning@mmMultiCR@@AAEXH@Z
    inline void DisplayTimeWarning(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x41B040, this, arg1);
    }

    // 0x41B0D0 | ?SendGameState@mmMultiCR@@AAEXK@Z
    inline void SendGameState(uint32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, uint32_t>>(0x41B0D0, this, arg1);
    }

    // 0x41B170 | ?SendSetup@mmMultiCR@@AAEXK@Z
    inline void SendSetup(uint32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, uint32_t>>(0x41B170, this, arg1);
    }

    // 0x41B180 | ?SendGoldDrop@mmMultiCR@@AAEXVVector3@@@Z
    inline void SendGoldDrop(class Vector3 arg1)
    {
        return stub<member_func_t<void, mmMultiCR, class Vector3>>(0x41B180, this, arg1);
    }

    // 0x41B1D0 | ?SendGoldAck@mmMultiCR@@AAEXK@Z
    inline void SendGoldAck(uint32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, uint32_t>>(0x41B1D0, this, arg1);
    }

    // 0x41B210 | ?SendGoldDeliver@mmMultiCR@@AAEXXZ
    inline void SendGoldDeliver()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x41B210, this);
    }

    // 0x41B260 | ?SendChangeSet@mmMultiCR@@AAEXH@Z
    inline void SendChangeSet(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x41B260, this, arg1);
    }

    // 0x41B2A0 | ?SendLimitReached@mmMultiCR@@AAEXH@Z
    inline void SendLimitReached(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x41B2A0, this, arg1);
    }

    // 0x41B2E0 | ?SendTimeWarning@mmMultiCR@@AAEXH@Z
    inline void SendTimeWarning(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x41B2E0, this, arg1);
    }

    // 0x41B320 | ?UpdateHUD@mmMultiCR@@AAEXXZ
    inline void UpdateHUD()
    {
        return stub<member_func_t<void, mmMultiCR>>(0x41B320, this);
    }

    // 0x41B440 | ?Score@mmMultiCR@@AAEXH@Z
    inline void Score(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x41B440, this, arg1);
    }

    // 0x41B480 | ?CycleInterest@mmMultiCR@@AAEXH@Z
    inline void CycleInterest(int32_t arg1)
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x41B480, this, arg1);
    }

    // 0x41B4E0 | ?DeclareFields@mmMultiCR@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x41B4E0);
    }

    // 0x417F30 | ??1mmMultiCR@@UAE@XZ
    inline ~mmMultiCR() override
    {
        stub<member_func_t<void, mmMultiCR>>(0x417F30, this);
    }

    // 0x41B650 | ?GetClass@mmMultiCR@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmMultiCR>>(0x41B650, this);
    }

    // 0x418B80 | ?Reset@mmMultiCR@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x418B80, this);
    }

    // 0x418160 | ?InitMyPlayer@mmMultiCR@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x418160, this);
    }

    // 0x4183A0 | ?InitGameObjects@mmMultiCR@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x4183A0, this);
    }

    // 0x418260 | ?InitHUD@mmMultiCR@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x418260, this);
    }

    // 0x419200 | ?UpdateGameInput@mmMultiCR@@UAEXH@Z
    inline void UpdateGameInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x419200, this, arg1);
    }

    // 0x41B470 | ?UpdateDebugKeyInput@mmMultiCR@@UAEXH@Z
    inline void UpdateDebugKeyInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmMultiCR, int32_t>>(0x41B470, this, arg1);
    }

    // 0x419240 | ?UpdateGame@mmMultiCR@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x419240, this);
    }

    // 0x419620 | ?HitWaterHandler@mmMultiCR@@UAEXXZ
    inline void HitWaterHandler() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x419620, this);
    }

    // 0x4196E0 | ?DropThruCityHandler@mmMultiCR@@UAEXXZ
    inline void DropThruCityHandler() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x4196E0, this);
    }

    // 0x41B810 | ?GetWaypoints@mmMultiCR@@UAEPAVmmWaypoints@@XZ
    inline class mmWaypoints* GetWaypoints() override
    {
        return stub<member_func_t<class mmWaypoints*, mmMultiCR>>(0x41B810, this);
    }

    // 0x418800 | ?InitNetworkPlayers@mmMultiCR@@UAEXXZ
    inline void InitNetworkPlayers() override
    {
        return stub<member_func_t<void, mmMultiCR>>(0x418800, this);
    }

    // 0x41A3A0 | ?SystemMessage@mmMultiCR@@UAEXPAUNETSYS_MSG@@@Z
    inline void SystemMessage(struct NETSYS_MSG* arg1) override
    {
        return stub<member_func_t<void, mmMultiCR, struct NETSYS_MSG*>>(0x41A3A0, this, arg1);
    }

    // 0x41A5F0 | ?GameMessage@mmMultiCR@@UAEXPAUNETGAME_MSG@@@Z
    inline void GameMessage(struct NETGAME_MSG* arg1) override
    {
        return stub<member_func_t<void, mmMultiCR, struct NETGAME_MSG*>>(0x41A5F0, this, arg1);
    }
};
