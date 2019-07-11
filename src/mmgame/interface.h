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

// mmgame:interface

#include "hooking.h"

// 0x4037F0 | ?ReportTimeAlloc@@YAXM@Z
inline void ReportTimeAlloc(float arg1)
{
    return stub<cdecl_t<void, float>>(0x4037F0, arg1);
}

// 0x609150 | ?mmInterfaceMetaClass@@3VMetaClass@@A
inline extern_var(0x609150, class MetaClass, mmInterfaceMetaClass);

// 0x609178 | ?szSearchPath@@3PADA
inline extern_var(0x609178, char*, szSearchPath);

// 0x609200 | ?defcarname@@3PADA
inline extern_var(0x609200, char*, defcarname);

// 0x4053F0 | ?Debugf@@YAXPBDZZ
// Skipped (Variable Arguments)

// 0x406B60 | ?IsModemDialin@@YA_NXZ
inline bool IsModemDialin()
{
    return stub<cdecl_t<bool>>(0x406B60);
}

// 0x406BE0 | ?ZoneWatcher@@YGKPAX@Z
inline uint32_t ZoneWatcher(void* arg1)
{
    return stub<stdcall_t<uint32_t, void*>>(0x406BE0, arg1);
}

// 0x40B690 | ?new_mmInterface@@YAPAXH@Z
inline void* new_mmInterface(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x40B690, arg1);
}

// 0x40B760 | ?delete_mmInterface@@YAXPAXH@Z
inline void delete_mmInterface(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x40B760, arg1, arg2);
}

class mmInterface : asNode
{
public:
    // mmInterface::`vftable' @ 0x58F4D8

    // 0x403830 | ??0mmInterface@@QAE@XZ
    inline mmInterface()
    {
        stub<member_func_t<void, mmInterface>>(0x403830, this);
    }

    // 0x404800 | ?InitPlayerInfo@mmInterface@@QAEXXZ
    inline void InitPlayerInfo()
    {
        return stub<member_func_t<void, mmInterface>>(0x404800, this);
    }

    // 0x404D00 | ?MessageCallback@mmInterface@@QAEXPAX0@Z
    inline void MessageCallback(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, mmInterface, void*, void*>>(0x404D00, this, arg1, arg2);
    }

    // 0x4051D0 | ?MessageCallback2@mmInterface@@QAEXPAX0@Z
    inline void MessageCallback2(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, mmInterface, void*, void*>>(0x4051D0, this, arg1, arg2);
    }

    // 0x405410 | ?ShowMain@mmInterface@@QAEXH@Z
    inline void ShowMain(int32_t arg1)
    {
        return stub<member_func_t<void, mmInterface, int32_t>>(0x405410, this, arg1);
    }

    // 0x4055D0 | ?ShowLockedVehicleMessage@mmInterface@@QAEXXZ
    inline void ShowLockedVehicleMessage()
    {
        return stub<member_func_t<void, mmInterface>>(0x4055D0, this);
    }

    // 0x4055F0 | ?BeDone@mmInterface@@QAEXXZ
    inline void BeDone()
    {
        return stub<member_func_t<void, mmInterface>>(0x4055F0, this);
    }

    // 0x406D90 | ?NetJoinCB@mmInterface@@AAEXXZ
    inline void NetJoinCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x406D90, this);
    }

    // 0x406DF0 | ?NetNameCB@mmInterface@@AAEXXZ
    inline void NetNameCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x406DF0, this);
    }

    // 0x406E20 | ?JoinGame@mmInterface@@AAEXXZ
    inline void JoinGame()
    {
        return stub<member_func_t<void, mmInterface>>(0x406E20, this);
    }

    // 0x406EA0 | ?JoinLAN@mmInterface@@AAEXXZ
    inline void JoinLAN()
    {
        return stub<member_func_t<void, mmInterface>>(0x406EA0, this);
    }

    // 0x406F00 | ?JoinSerial@mmInterface@@AAEHXZ
    inline int32_t JoinSerial()
    {
        return stub<member_func_t<int32_t, mmInterface>>(0x406F00, this);
    }

    // 0x406F90 | ?JoinModem@mmInterface@@AAEHXZ
    inline int32_t JoinModem()
    {
        return stub<member_func_t<int32_t, mmInterface>>(0x406F90, this);
    }

    // 0x407080 | ?UpdateLobby@mmInterface@@QAEXXZ
    inline void UpdateLobby()
    {
        return stub<member_func_t<void, mmInterface>>(0x407080, this);
    }

    // 0x4076C0 | ?Switch@mmInterface@@QAEXHH@Z
    inline void Switch(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmInterface, int32_t, int32_t>>(0x4076C0, this, arg1, arg2);
    }

    // 0x407A60 | ?LobbySwitch@mmInterface@@QAEXHH@Z
    inline void LobbySwitch(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmInterface, int32_t, int32_t>>(0x407A60, this, arg1, arg2);
    }

    // 0x407BD0 | ?RefreshCRPlayers@mmInterface@@AAEXXZ
    inline void RefreshCRPlayers()
    {
        return stub<member_func_t<void, mmInterface>>(0x407BD0, this);
    }

    // 0x407C70 | ?FillCRRoster@mmInterface@@AAEXXZ
    inline void FillCRRoster()
    {
        return stub<member_func_t<void, mmInterface>>(0x407C70, this);
    }

    // 0x407D70 | ?GetUnlockedCar@mmInterface@@AAEXXZ
    inline void GetUnlockedCar()
    {
        return stub<member_func_t<void, mmInterface>>(0x407D70, this);
    }

    // 0x407DC0 | ?RequestProverb@mmInterface@@AAEXXZ
    inline void RequestProverb()
    {
        return stub<member_func_t<void, mmInterface>>(0x407DC0, this);
    }

    // 0x407F20 | ?PlayerRemoveCB@mmInterface@@AAEXXZ
    inline void PlayerRemoveCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x407F20, this);
    }

    // 0x407F50 | ?PlayerRemove@mmInterface@@AAEXPAD@Z
    inline void PlayerRemove(char* arg1)
    {
        return stub<member_func_t<void, mmInterface, char*>>(0x407F50, this, arg1);
    }

    // 0x4080E0 | ?PlayerCreateCB@mmInterface@@AAEXXZ
    inline void PlayerCreateCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x4080E0, this);
    }

    // 0x408130 | ?PlayerCreate@mmInterface@@AAEHPAD@Z
    inline int32_t PlayerCreate(char* arg1)
    {
        return stub<member_func_t<int32_t, mmInterface, char*>>(0x408130, this, arg1);
    }

    // 0x4082C0 | ?PlayerLoadCB@mmInterface@@AAEXXZ
    inline void PlayerLoadCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x4082C0, this);
    }

    // 0x4082F0 | ?PlayerGraphicsCB@mmInterface@@AAEXXZ
    inline void PlayerGraphicsCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x4082F0, this);
    }

    // 0x408360 | ?PlayerLoad@mmInterface@@AAEXPAD@Z
    inline void PlayerLoad(char* arg1)
    {
        return stub<member_func_t<void, mmInterface, char*>>(0x408360, this, arg1);
    }

    // 0x408410 | ?PlayerSetState@mmInterface@@AAEXXZ
    inline void PlayerSetState()
    {
        return stub<member_func_t<void, mmInterface>>(0x408410, this);
    }

    // 0x408600 | ?CitySetupCB@mmInterface@@AAEXXZ
    inline void CitySetupCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x408600, this);
    }

    // 0x4086C0 | ?GetTimeString@mmInterface@@AAEXMPAD@Z
    inline void GetTimeString(float arg1, char* arg2)
    {
        return stub<member_func_t<void, mmInterface, float, char*>>(0x4086C0, this, arg1, arg2);
    }

    // 0x408720 | ?GetScoreString@mmInterface@@AAEXHPAD@Z
    inline void GetScoreString(int32_t arg1, char* arg2)
    {
        return stub<member_func_t<void, mmInterface, int32_t, char*>>(0x408720, this, arg1, arg2);
    }

    // 0x408760 | ?GetRaceString@mmInterface@@AAEXHPAD@Z
    inline void GetRaceString(int32_t arg1, char* arg2)
    {
        return stub<member_func_t<void, mmInterface, int32_t, char*>>(0x408760, this, arg1, arg2);
    }

    // 0x4087C0 | ?GetRaceName@mmInterface@@AAEPADW4mmGameMode@@H@Z
    inline char* GetRaceName(enum mmGameMode arg1, int32_t arg2)
    {
        return stub<member_func_t<char*, mmInterface, enum mmGameMode, int32_t>>(0x4087C0, this, arg1, arg2);
    }

    // 0x408920 | ?RaceFillRecords@mmInterface@@AAEXXZ
    inline void RaceFillRecords()
    {
        return stub<member_func_t<void, mmInterface>>(0x408920, this);
    }

    // 0x409210 | ?PlayerFillStats@mmInterface@@AAEXXZ
    inline void PlayerFillStats()
    {
        return stub<member_func_t<void, mmInterface>>(0x409210, this);
    }

    // 0x409740 | ?PlayerResolveScore@mmInterface@@AAEXXZ
    inline void PlayerResolveScore()
    {
        return stub<member_func_t<void, mmInterface>>(0x409740, this);
    }

    // 0x409880 | ?PlayerResolveCars@mmInterface@@AAEXXZ
    inline void PlayerResolveCars()
    {
        return stub<member_func_t<void, mmInterface>>(0x409880, this);
    }

    // 0x409AA0 | ?PlayerReadState@mmInterface@@AAEXXZ
    inline void PlayerReadState()
    {
        return stub<member_func_t<void, mmInterface>>(0x409AA0, this);
    }

    // 0x409AC0 | ?RefreshDriverList@mmInterface@@AAEXXZ
    inline void RefreshDriverList()
    {
        return stub<member_func_t<void, mmInterface>>(0x409AC0, this);
    }

    // 0x409B70 | ?SetStateRace@mmInterface@@AAEXH@Z
    inline void SetStateRace(int32_t arg1)
    {
        return stub<member_func_t<void, mmInterface, int32_t>>(0x409B70, this, arg1);
    }

    // 0x409B80 | ?SetStateDefaults@mmInterface@@AAEXXZ
    inline void SetStateDefaults()
    {
        return stub<member_func_t<void, mmInterface>>(0x409B80, this);
    }

    // 0x409BA0 | ?InitNetwork@mmInterface@@AAEXXZ
    inline void InitNetwork()
    {
        return stub<member_func_t<void, mmInterface>>(0x409BA0, this);
    }

    // 0x409C90 | ?InitLobby@mmInterface@@QAEXXZ
    inline void InitLobby()
    {
        return stub<member_func_t<void, mmInterface>>(0x409C90, this);
    }

    // 0x409D20 | ?InitProtocols@mmInterface@@AAEXXZ
    inline void InitProtocols()
    {
        return stub<member_func_t<void, mmInterface>>(0x409D20, this);
    }

    // 0x409D40 | ?ShowSessions@mmInterface@@AAEXXZ
    inline void ShowSessions()
    {
        return stub<member_func_t<void, mmInterface>>(0x409D40, this);
    }

    // 0x409F40 | ?ClearSessions@mmInterface@@AAEXXZ
    inline void ClearSessions()
    {
        return stub<member_func_t<void, mmInterface>>(0x409F40, this);
    }

    // 0x409F60 | ?RefreshSessions@mmInterface@@AAEXXZ
    inline void RefreshSessions()
    {
        return stub<member_func_t<void, mmInterface>>(0x409F60, this);
    }

    // 0x409FA0 | ?JoinSession@mmInterface@@AAEHH@Z
    inline int32_t JoinSession(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmInterface, int32_t>>(0x409FA0, this, arg1);
    }

    // 0x40A1A0 | ?JoinPasswordSession@mmInterface@@AAEHH@Z
    inline int32_t JoinPasswordSession(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmInterface, int32_t>>(0x40A1A0, this, arg1);
    }

    // 0x40A350 | ?MultiStartGame@mmInterface@@AAEXXZ
    inline void MultiStartGame()
    {
        return stub<member_func_t<void, mmInterface>>(0x40A350, this);
    }

    // 0x40A3E0 | ?SetProtocol@mmInterface@@AAEXXZ
    inline void SetProtocol()
    {
        return stub<member_func_t<void, mmInterface>>(0x40A3E0, this);
    }

    // 0x40A490 | ?SetProtocol2@mmInterface@@AAEHXZ
    inline int32_t SetProtocol2()
    {
        return stub<member_func_t<int32_t, mmInterface>>(0x40A490, this);
    }

    // 0x40A4E0 | ?CreatePlayer@mmInterface@@AAEHH@Z
    inline int32_t CreatePlayer(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmInterface, int32_t>>(0x40A4E0, this, arg1);
    }

    // 0x40A710 | ?GetHostPlayerData@mmInterface@@AAEHAAUmmPlayerInfo@@@Z
    inline int32_t GetHostPlayerData(struct mmPlayerInfo& arg1)
    {
        return stub<member_func_t<int32_t, mmInterface, struct mmPlayerInfo&>>(0x40A710, this, arg1);
    }

    // 0x40A770 | ?GetUniquePlayerName@mmInterface@@AAEXXZ
    inline void GetUniquePlayerName()
    {
        return stub<member_func_t<void, mmInterface>>(0x40A770, this);
    }

    // 0x40A860 | ?ChangePlayerData@mmInterface@@AAEXXZ
    inline void ChangePlayerData()
    {
        return stub<member_func_t<void, mmInterface>>(0x40A860, this);
    }

    // 0x40A930 | ?RefreshPlayers@mmInterface@@AAEXXZ
    inline void RefreshPlayers()
    {
        return stub<member_func_t<void, mmInterface>>(0x40A930, this);
    }

    // 0x40AB30 | ?GetSessionData@mmInterface@@AAEXUNETSESSION_DESC@@@Z
    inline void GetSessionData(struct NETSESSION_DESC arg1)
    {
        return stub<member_func_t<void, mmInterface, struct NETSESSION_DESC>>(0x40AB30, this, arg1);
    }

    // 0x40ABF0 | ?CreateSession@mmInterface@@AAEHXZ
    inline int32_t CreateSession()
    {
        return stub<member_func_t<int32_t, mmInterface>>(0x40ABF0, this);
    }

    // 0x40AD70 | ?SetSessionData@mmInterface@@AAEXPAUNETSESSION_DESC@@@Z
    inline void SetSessionData(struct NETSESSION_DESC* arg1)
    {
        return stub<member_func_t<void, mmInterface, struct NETSESSION_DESC*>>(0x40AD70, this, arg1);
    }

    // 0x40AE30 | ?SetCRStateData@mmInterface@@AAEXXZ
    inline void SetCRStateData()
    {
        return stub<member_func_t<void, mmInterface>>(0x40AE30, this);
    }

    // 0x40AEA0 | ?LobbyCreate@mmInterface@@AAEHXZ
    inline int32_t LobbyCreate()
    {
        return stub<member_func_t<int32_t, mmInterface>>(0x40AEA0, this);
    }

    // 0x40B230 | ?SendChatMessage@mmInterface@@AAEXPAX@Z
    inline void SendChatMessage(void* arg1)
    {
        return stub<member_func_t<void, mmInterface, void*>>(0x40B230, this, arg1);
    }

    // 0x40B2D0 | ?SendMsg@mmInterface@@AAEXH@Z
    inline void SendMsg(int32_t arg1)
    {
        return stub<member_func_t<void, mmInterface, int32_t>>(0x40B2D0, this, arg1);
    }

    // 0x40B310 | ?SendBootMsg@mmInterface@@AAEXK@Z
    inline void SendBootMsg(uint32_t arg1)
    {
        return stub<member_func_t<void, mmInterface, uint32_t>>(0x40B310, this, arg1);
    }

    // 0x40B350 | ?SendReadyStatus@mmInterface@@AAEXXZ
    inline void SendReadyStatus()
    {
        return stub<member_func_t<void, mmInterface>>(0x40B350, this);
    }

    // 0x40B390 | ?SendReadyReq@mmInterface@@AAEXXZ
    inline void SendReadyReq()
    {
        return stub<member_func_t<void, mmInterface>>(0x40B390, this);
    }

    // 0x40B3C0 | ?SetupArchiveTest@mmInterface@@QAEXAAH@Z
    inline void SetupArchiveTest(int32_t& arg1)
    {
        return stub<member_func_t<void, mmInterface, int32_t&>>(0x40B3C0, this, arg1);
    }

    // 0x40B640 | ?DeclareFields@mmInterface@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x40B640);
    }

    // 0x404B70 | ??1mmInterface@@UAE@XZ
    inline ~mmInterface() override
    {
        stub<member_func_t<void, mmInterface>>(0x404B70, this);
    }

    // 0x40B7B0 | ?GetClass@mmInterface@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmInterface>>(0x40B7B0, this);
    }

    // 0x4056E0 | ?Update@mmInterface@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmInterface>>(0x4056E0, this);
    }

    // 0x405400 | ?Reset@mmInterface@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmInterface>>(0x405400, this);
    }
};
