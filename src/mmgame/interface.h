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
    mmgame:interface

    0x4037F0 | void __cdecl ReportTimeAlloc(float) | ?ReportTimeAlloc@@YAXM@Z
    0x403830 | public: __thiscall mmInterface::mmInterface(void) | ??0mmInterface@@QAE@XZ
    0x404800 | public: void __thiscall mmInterface::InitPlayerInfo(void) | ?InitPlayerInfo@mmInterface@@QAEXXZ
    0x404B70 | public: virtual __thiscall mmInterface::~mmInterface(void) | ??1mmInterface@@UAE@XZ
    0x404D00 | public: void __thiscall mmInterface::MessageCallback(void *,void *) | ?MessageCallback@mmInterface@@QAEXPAX0@Z
    0x4051D0 | public: void __thiscall mmInterface::MessageCallback2(void *,void *) | ?MessageCallback2@mmInterface@@QAEXPAX0@Z
    0x405400 | public: virtual void __thiscall mmInterface::Reset(void) | ?Reset@mmInterface@@UAEXXZ
    0x405410 | public: void __thiscall mmInterface::ShowMain(int) | ?ShowMain@mmInterface@@QAEXH@Z
    0x4055D0 | public: void __thiscall mmInterface::ShowLockedVehicleMessage(void) | ?ShowLockedVehicleMessage@mmInterface@@QAEXXZ
    0x4055F0 | public: void __thiscall mmInterface::BeDone(void) | ?BeDone@mmInterface@@QAEXXZ
    0x4056E0 | public: virtual void __thiscall mmInterface::Update(void) | ?Update@mmInterface@@UAEXXZ
    0x406D90 | private: void __thiscall mmInterface::NetJoinCB(void) | ?NetJoinCB@mmInterface@@AAEXXZ
    0x406DF0 | private: void __thiscall mmInterface::NetNameCB(void) | ?NetNameCB@mmInterface@@AAEXXZ
    0x406E20 | private: void __thiscall mmInterface::JoinGame(void) | ?JoinGame@mmInterface@@AAEXXZ
    0x406EA0 | private: void __thiscall mmInterface::JoinLAN(void) | ?JoinLAN@mmInterface@@AAEXXZ
    0x406F00 | private: int __thiscall mmInterface::JoinSerial(void) | ?JoinSerial@mmInterface@@AAEHXZ
    0x406F90 | private: int __thiscall mmInterface::JoinModem(void) | ?JoinModem@mmInterface@@AAEHXZ
    0x407080 | public: void __thiscall mmInterface::UpdateLobby(void) | ?UpdateLobby@mmInterface@@QAEXXZ
    0x4076C0 | public: void __thiscall mmInterface::Switch(int,int) | ?Switch@mmInterface@@QAEXHH@Z
    0x407A60 | public: void __thiscall mmInterface::LobbySwitch(int,int) | ?LobbySwitch@mmInterface@@QAEXHH@Z
    0x407BD0 | private: void __thiscall mmInterface::RefreshCRPlayers(void) | ?RefreshCRPlayers@mmInterface@@AAEXXZ
    0x407C70 | private: void __thiscall mmInterface::FillCRRoster(void) | ?FillCRRoster@mmInterface@@AAEXXZ
    0x407D70 | private: void __thiscall mmInterface::GetUnlockedCar(void) | ?GetUnlockedCar@mmInterface@@AAEXXZ
    0x407DC0 | private: void __thiscall mmInterface::RequestProverb(void) | ?RequestProverb@mmInterface@@AAEXXZ
    0x407F20 | private: void __thiscall mmInterface::PlayerRemoveCB(void) | ?PlayerRemoveCB@mmInterface@@AAEXXZ
    0x407F50 | private: void __thiscall mmInterface::PlayerRemove(char *) | ?PlayerRemove@mmInterface@@AAEXPAD@Z
    0x4080E0 | private: void __thiscall mmInterface::PlayerCreateCB(void) | ?PlayerCreateCB@mmInterface@@AAEXXZ
    0x408130 | private: int __thiscall mmInterface::PlayerCreate(char *) | ?PlayerCreate@mmInterface@@AAEHPAD@Z
    0x4082C0 | private: void __thiscall mmInterface::PlayerLoadCB(void) | ?PlayerLoadCB@mmInterface@@AAEXXZ
    0x4082F0 | private: void __thiscall mmInterface::PlayerGraphicsCB(void) | ?PlayerGraphicsCB@mmInterface@@AAEXXZ
    0x408360 | private: void __thiscall mmInterface::PlayerLoad(char *) | ?PlayerLoad@mmInterface@@AAEXPAD@Z
    0x408410 | private: void __thiscall mmInterface::PlayerSetState(void) | ?PlayerSetState@mmInterface@@AAEXXZ
    0x408600 | private: void __thiscall mmInterface::CitySetupCB(void) | ?CitySetupCB@mmInterface@@AAEXXZ
    0x4086C0 | private: void __thiscall mmInterface::GetTimeString(float,char *) | ?GetTimeString@mmInterface@@AAEXMPAD@Z
    0x408720 | private: void __thiscall mmInterface::GetScoreString(int,char *) | ?GetScoreString@mmInterface@@AAEXHPAD@Z
    0x408760 | private: void __thiscall mmInterface::GetRaceString(int,char *) | ?GetRaceString@mmInterface@@AAEXHPAD@Z
    0x4087C0 | private: char * __thiscall mmInterface::GetRaceName(enum mmGameMode,int) | ?GetRaceName@mmInterface@@AAEPADW4mmGameMode@@H@Z
    0x408920 | private: void __thiscall mmInterface::RaceFillRecords(void) | ?RaceFillRecords@mmInterface@@AAEXXZ
    0x409210 | private: void __thiscall mmInterface::PlayerFillStats(void) | ?PlayerFillStats@mmInterface@@AAEXXZ
    0x409740 | private: void __thiscall mmInterface::PlayerResolveScore(void) | ?PlayerResolveScore@mmInterface@@AAEXXZ
    0x409880 | private: void __thiscall mmInterface::PlayerResolveCars(void) | ?PlayerResolveCars@mmInterface@@AAEXXZ
    0x409AA0 | private: void __thiscall mmInterface::PlayerReadState(void) | ?PlayerReadState@mmInterface@@AAEXXZ
    0x409AC0 | private: void __thiscall mmInterface::RefreshDriverList(void) | ?RefreshDriverList@mmInterface@@AAEXXZ
    0x409B70 | private: void __thiscall mmInterface::SetStateRace(int) | ?SetStateRace@mmInterface@@AAEXH@Z
    0x409B80 | private: void __thiscall mmInterface::SetStateDefaults(void) | ?SetStateDefaults@mmInterface@@AAEXXZ
    0x409BA0 | private: void __thiscall mmInterface::InitNetwork(void) | ?InitNetwork@mmInterface@@AAEXXZ
    0x409C90 | public: void __thiscall mmInterface::InitLobby(void) | ?InitLobby@mmInterface@@QAEXXZ
    0x409D20 | private: void __thiscall mmInterface::InitProtocols(void) | ?InitProtocols@mmInterface@@AAEXXZ
    0x409D40 | private: void __thiscall mmInterface::ShowSessions(void) | ?ShowSessions@mmInterface@@AAEXXZ
    0x409F40 | private: void __thiscall mmInterface::ClearSessions(void) | ?ClearSessions@mmInterface@@AAEXXZ
    0x409F60 | private: void __thiscall mmInterface::RefreshSessions(void) | ?RefreshSessions@mmInterface@@AAEXXZ
    0x409FA0 | private: int __thiscall mmInterface::JoinSession(int) | ?JoinSession@mmInterface@@AAEHH@Z
    0x40A1A0 | private: int __thiscall mmInterface::JoinPasswordSession(int) | ?JoinPasswordSession@mmInterface@@AAEHH@Z
    0x40A350 | private: void __thiscall mmInterface::MultiStartGame(void) | ?MultiStartGame@mmInterface@@AAEXXZ
    0x40A3E0 | private: void __thiscall mmInterface::SetProtocol(void) | ?SetProtocol@mmInterface@@AAEXXZ
    0x40A490 | private: int __thiscall mmInterface::SetProtocol2(void) | ?SetProtocol2@mmInterface@@AAEHXZ
    0x40A4E0 | private: int __thiscall mmInterface::CreatePlayer(int) | ?CreatePlayer@mmInterface@@AAEHH@Z
    0x40A710 | private: int __thiscall mmInterface::GetHostPlayerData(struct mmPlayerInfo &) | ?GetHostPlayerData@mmInterface@@AAEHAAUmmPlayerInfo@@@Z
    0x40A770 | private: void __thiscall mmInterface::GetUniquePlayerName(void) | ?GetUniquePlayerName@mmInterface@@AAEXXZ
    0x40A860 | private: void __thiscall mmInterface::ChangePlayerData(void) | ?ChangePlayerData@mmInterface@@AAEXXZ
    0x40A930 | private: void __thiscall mmInterface::RefreshPlayers(void) | ?RefreshPlayers@mmInterface@@AAEXXZ
    0x40AB30 | private: void __thiscall mmInterface::GetSessionData(struct NETSESSION_DESC) | ?GetSessionData@mmInterface@@AAEXUNETSESSION_DESC@@@Z
    0x40ABF0 | private: int __thiscall mmInterface::CreateSession(void) | ?CreateSession@mmInterface@@AAEHXZ
    0x40AD70 | private: void __thiscall mmInterface::SetSessionData(struct NETSESSION_DESC *) | ?SetSessionData@mmInterface@@AAEXPAUNETSESSION_DESC@@@Z
    0x40AE30 | private: void __thiscall mmInterface::SetCRStateData(void) | ?SetCRStateData@mmInterface@@AAEXXZ
    0x40AEA0 | private: int __thiscall mmInterface::LobbyCreate(void) | ?LobbyCreate@mmInterface@@AAEHXZ
    0x40B230 | private: void __thiscall mmInterface::SendChatMessage(void *) | ?SendChatMessage@mmInterface@@AAEXPAX@Z
    0x40B2D0 | private: void __thiscall mmInterface::SendMsg(int) | ?SendMsg@mmInterface@@AAEXH@Z
    0x40B310 | private: void __thiscall mmInterface::SendBootMsg(unsigned long) | ?SendBootMsg@mmInterface@@AAEXK@Z
    0x40B350 | private: void __thiscall mmInterface::SendReadyStatus(void) | ?SendReadyStatus@mmInterface@@AAEXXZ
    0x40B390 | private: void __thiscall mmInterface::SendReadyReq(void) | ?SendReadyReq@mmInterface@@AAEXXZ
    0x40B3C0 | public: void __thiscall mmInterface::SetupArchiveTest(int &) | ?SetupArchiveTest@mmInterface@@QAEXAAH@Z
    0x40B640 | public: static void __cdecl mmInterface::DeclareFields(void) | ?DeclareFields@mmInterface@@SAXXZ
    0x40B7B0 | public: virtual class MetaClass * __thiscall mmInterface::GetClass(void) | ?GetClass@mmInterface@@UAEPAVMetaClass@@XZ
    0x40B7C0 | public: __thiscall string::~string(void) | ??1string@@QAE@XZ
    0x40B7D0 | public: virtual void * __thiscall mmInterface::`vector deleting destructor'(unsigned int) | ??_EmmInterface@@UAEPAXI@Z
    0x58F4D8 | const mmInterface::`vftable' | ??_7mmInterface@@6B@
    0x609150 | class MetaClass mmInterfaceMetaClass | ?mmInterfaceMetaClass@@3VMetaClass@@A
    0x609178 | char * szSearchPath | ?szSearchPath@@3PADA
    0x609200 | char * defcarname | ?defcarname@@3PADA
    0x4053F0 | void __cdecl Debugf(char const *,...) | ?Debugf@@YAXPBDZZ
    0x406B60 | bool __cdecl IsModemDialin(void) | ?IsModemDialin@@YA_NXZ
    0x406BE0 | unsigned long __stdcall ZoneWatcher(void *) | ?ZoneWatcher@@YGKPAX@Z
    0x40B690 | void * __cdecl new_mmInterface(int) | ?new_mmInterface@@YAPAXH@Z
    0x40B760 | void __cdecl delete_mmInterface(void *,int) | ?delete_mmInterface@@YAXPAXH@Z
*/

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
inline uint32_t __stdcall ZoneWatcher(void* arg1)
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
        // stub<member_func_t<void, mmInterface>>(0x403830, this);

        unimplemented();
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
    inline ~mmInterface() override = 0
    {
        // stub<member_func_t<void, mmInterface>>(0x404B70, this);

        unimplemented();
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
