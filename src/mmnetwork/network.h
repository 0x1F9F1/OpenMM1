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

// mmnetwork:network

#include "hooking.h"

// 0x482060 | ?EnumSessionCallback@@YGHPBUDPSESSIONDESC2@@PAKKPAX@Z
inline int32_t EnumSessionCallback(struct DPSESSIONDESC2 const* arg1, uint32_t* arg2, uint32_t arg3, void* arg4)
{
    return stub<stdcall_t<int32_t, struct DPSESSIONDESC2 const*, uint32_t*, uint32_t, void*>>(
        0x482060, arg1, arg2, arg3, arg4);
}

// 0x482120 | ?EnumConnectionsCallback@@YGHPBU_GUID@@PAXKPBUDPNAME@@K1@Z
inline int32_t EnumConnectionsCallback(
    struct _GUID const* arg1, void* arg2, uint32_t arg3, struct DPNAME const* arg4, uint32_t arg5, void* arg6)
{
    return stub<stdcall_t<int32_t, struct _GUID const*, void*, uint32_t, struct DPNAME const*, uint32_t, void*>>(
        0x482120, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x482190 | ?EnumPlayersCallback@@YGHKKPBUDPNAME@@KPAX@Z
inline int32_t EnumPlayersCallback(uint32_t arg1, uint32_t arg2, struct DPNAME const* arg3, uint32_t arg4, void* arg5)
{
    return stub<stdcall_t<int32_t, uint32_t, uint32_t, struct DPNAME const*, uint32_t, void*>>(
        0x482190, arg1, arg2, arg3, arg4, arg5);
}

// 0x4823E0 | ?EnumModemAddress@@YGHABU_GUID@@KPBXPAX@Z
inline int32_t EnumModemAddress(struct _GUID const& arg1, uint32_t arg2, void const* arg3, void* arg4)
{
    return stub<stdcall_t<int32_t, struct _GUID const&, uint32_t, void const*, void*>>(
        0x4823E0, arg1, arg2, arg3, arg4);
}

// 0x591AA0 | _MM_GUID

// 0x60ACA0 | ?NETMGR@@3VasNetwork@@A
inline extern_var(0x60ACA0, class asNetwork, NETMGR);

// 0x480000 | ?Debugf@@YAXPBDZZ
// Skipped (Variable Arguments)

class asNetwork
{
public:
    // 0x47FEB0 | ??0asNetwork@@QAE@XZ
    inline asNetwork()
    {
        stub<member_func_t<void, asNetwork>>(0x47FEB0, this);
    }

    // 0x47FF20 | ??1asNetwork@@QAE@XZ
    inline ~asNetwork()
    {
        stub<member_func_t<void, asNetwork>>(0x47FF20, this);
    }

    // 0x47FF30 | ?Initialize@asNetwork@@QAEHHHH@Z
    inline int32_t Initialize(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t, int32_t, int32_t>>(0x47FF30, this, arg1, arg2, arg3);
    }

    // 0x47FF90 | ?InitializeLobby@asNetwork@@QAEHHH@Z
    inline int32_t InitializeLobby(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t, int32_t>>(0x47FF90, this, arg1, arg2);
    }

    // 0x480010 | ?WaitForLobbyConnection@asNetwork@@QAEXH@Z
    inline void WaitForLobbyConnection(int32_t arg1)
    {
        return stub<member_func_t<void, asNetwork, int32_t>>(0x480010, this, arg1);
    }

    // 0x480070 | ?JoinLobbySession@asNetwork@@QAEHXZ
    inline int32_t JoinLobbySession()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x480070, this);
    }

    // 0x480230 | ?SendLobbyProperty@asNetwork@@QAEXPAXH@Z
    inline void SendLobbyProperty(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, asNetwork, void*, int32_t>>(0x480230, this, arg1, arg2);
    }

    // 0x480310 | ?Logout@asNetwork@@QAEXXZ
    inline void Logout()
    {
        return stub<member_func_t<void, asNetwork>>(0x480310, this);
    }

    // 0x4803E0 | ?Deallocate@asNetwork@@QAEXXZ
    inline void Deallocate()
    {
        return stub<member_func_t<void, asNetwork>>(0x4803E0, this);
    }

    // 0x480420 | ?CreateInterface@asNetwork@@QAEHXZ
    inline int32_t CreateInterface()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x480420, this);
    }

    // 0x480440 | ?GetNetworkCaps@asNetwork@@QAEHXZ
    inline int32_t GetNetworkCaps()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x480440, this);
    }

    // 0x4804D0 | ?GetProtocols@asNetwork@@QAEXXZ
    inline void GetProtocols()
    {
        return stub<member_func_t<void, asNetwork>>(0x4804D0, this);
    }

    // 0x480500 | ?SetProtocol@asNetwork@@QAEHHPAUNETCOMMPACK@@@Z
    inline int32_t SetProtocol(int32_t arg1, struct NETCOMMPACK* arg2)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t, struct NETCOMMPACK*>>(0x480500, this, arg1, arg2);
    }

    // 0x480860 | ?SetProtocol@asNetwork@@QAEHH@Z
    inline int32_t SetProtocol(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t>>(0x480860, this, arg1);
    }

    // 0x4808C0 | ?Disconnect@asNetwork@@QAEXXZ
    inline void Disconnect()
    {
        return stub<member_func_t<void, asNetwork>>(0x4808C0, this);
    }

    // 0x480910 | ?GetEnumProtocol@asNetwork@@QAEPADH@Z
    inline char* GetEnumProtocol(int32_t arg1)
    {
        return stub<member_func_t<char*, asNetwork, int32_t>>(0x480910, this, arg1);
    }

    // 0x480940 | ?GetNumProtocols@asNetwork@@QAEHXZ
    inline int32_t GetNumProtocols()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x480940, this);
    }

    // 0x480950 | ?CreatePlayer@asNetwork@@QAEHPADPAXH@Z
    inline int32_t CreatePlayer(char* arg1, void* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, asNetwork, char*, void*, int32_t>>(0x480950, this, arg1, arg2, arg3);
    }

    // 0x480A10 | ?DestroyPlayer@asNetwork@@QAEXXZ
    inline void DestroyPlayer()
    {
        return stub<member_func_t<void, asNetwork>>(0x480A10, this);
    }

    // 0x480A50 | ?GetPlayers@asNetwork@@QAEHPAU_GUID@@@Z
    inline int32_t GetPlayers(struct _GUID* arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, struct _GUID*>>(0x480A50, this, arg1);
    }

    // 0x480A80 | ?GetEnumPlayer@asNetwork@@QAEPADH@Z
    inline char* GetEnumPlayer(int32_t arg1)
    {
        return stub<member_func_t<char*, asNetwork, int32_t>>(0x480A80, this, arg1);
    }

    // 0x480AB0 | ?GetPlayerID@asNetwork@@QAEKH@Z
    inline uint32_t GetPlayerID(int32_t arg1)
    {
        return stub<member_func_t<uint32_t, asNetwork, int32_t>>(0x480AB0, this, arg1);
    }

    // 0x480AF0 | ?GetNumPlayers@asNetwork@@QAEHXZ
    inline int32_t GetNumPlayers()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x480AF0, this);
    }

    // 0x480BB0 | ?GetPlayerName@asNetwork@@QAEPADK@Z
    inline char* GetPlayerName(uint32_t arg1)
    {
        return stub<member_func_t<char*, asNetwork, uint32_t>>(0x480BB0, this, arg1);
    }

    // 0x480C70 | ?GetPlayerName@asNetwork@@QAEHKPAD@Z
    inline int32_t GetPlayerName(uint32_t arg1, char* arg2)
    {
        return stub<member_func_t<int32_t, asNetwork, uint32_t, char*>>(0x480C70, this, arg1, arg2);
    }

    // 0x480D50 | ?SetPlayerData@asNetwork@@QAEXKPAXH@Z
    inline void SetPlayerData(uint32_t arg1, void* arg2, int32_t arg3)
    {
        return stub<member_func_t<void, asNetwork, uint32_t, void*, int32_t>>(0x480D50, this, arg1, arg2, arg3);
    }

    // 0x480DF0 | ?GetEnumPlayerData@asNetwork@@QAEHHPAXH@Z
    inline int32_t GetEnumPlayerData(int32_t arg1, void* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t, void*, int32_t>>(0x480DF0, this, arg1, arg2, arg3);
    }

    // 0x480EB0 | ?GetPlayerData@asNetwork@@QAEHKPAXH@Z
    inline int32_t GetPlayerData(uint32_t arg1, void* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, asNetwork, uint32_t, void*, int32_t>>(0x480EB0, this, arg1, arg2, arg3);
    }

    // 0x480F60 | ?Ping@asNetwork@@QAEKK@Z
    inline uint32_t Ping(uint32_t arg1)
    {
        return stub<member_func_t<uint32_t, asNetwork, uint32_t>>(0x480F60, this, arg1);
    }

    // 0x481030 | ?CreateSession@asNetwork@@QAEHPAD0HPAUNETSESSION_DESC@@@Z
    inline int32_t CreateSession(char* arg1, char* arg2, int32_t arg3, struct NETSESSION_DESC* arg4)
    {
        return stub<member_func_t<int32_t, asNetwork, char*, char*, int32_t, struct NETSESSION_DESC*>>(
            0x481030, this, arg1, arg2, arg3, arg4);
    }

    // 0x481120 | ?JoinSession@asNetwork@@QAEHPADPAU_GUID@@0@Z
    inline int32_t JoinSession(char* arg1, struct _GUID* arg2, char* arg3)
    {
        return stub<member_func_t<int32_t, asNetwork, char*, struct _GUID*, char*>>(0x481120, this, arg1, arg2, arg3);
    }

    // 0x481350 | ?CloseSession@asNetwork@@QAEXXZ
    inline void CloseSession()
    {
        return stub<member_func_t<void, asNetwork>>(0x481350, this);
    }

    // 0x481390 | ?GetEnumSession@asNetwork@@QAEPADH@Z
    inline char* GetEnumSession(int32_t arg1)
    {
        return stub<member_func_t<char*, asNetwork, int32_t>>(0x481390, this, arg1);
    }

    // 0x4813C0 | ?GetEnumSessionID@asNetwork@@QAEHH@Z
    inline int32_t GetEnumSessionID(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t>>(0x4813C0, this, arg1);
    }

    // 0x4813F0 | ?GetNumSessions@asNetwork@@QAEHXZ
    inline int32_t GetNumSessions()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x4813F0, this);
    }

    // 0x481400 | ?SealSession@asNetwork@@QAEXXZ
    inline void SealSession()
    {
        return stub<member_func_t<void, asNetwork>>(0x481400, this);
    }

    // 0x481520 | ?UnSealSession@asNetwork@@QAEXXZ
    inline void UnSealSession()
    {
        return stub<member_func_t<void, asNetwork>>(0x481520, this);
    }

    // 0x481640 | ?GetSessionData@asNetwork@@QAEXPAUNETSESSION_DESC@@@Z
    inline void GetSessionData(struct NETSESSION_DESC* arg1)
    {
        return stub<member_func_t<void, asNetwork, struct NETSESSION_DESC*>>(0x481640, this, arg1);
    }

    // 0x481700 | ?SetSessionData@asNetwork@@QAEXPAUNETSESSION_DESC@@PAD@Z
    inline void SetSessionData(struct NETSESSION_DESC* arg1, char* arg2)
    {
        return stub<member_func_t<void, asNetwork, struct NETSESSION_DESC*, char*>>(0x481700, this, arg1, arg2);
    }

    // 0x481840 | ?GetSessionsSynch@asNetwork@@QAEHH@Z
    inline int32_t GetSessionsSynch(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t>>(0x481840, this, arg1);
    }

    // 0x4818F0 | ?GetSessionsAsynch@asNetwork@@QAEXXZ
    inline void GetSessionsAsynch()
    {
        return stub<member_func_t<void, asNetwork>>(0x4818F0, this);
    }

    // 0x481950 | ?StopSessionsAsynch@asNetwork@@QAEXXZ
    inline void StopSessionsAsynch()
    {
        return stub<member_func_t<void, asNetwork>>(0x481950, this);
    }

    // 0x4819D0 | ?PollLobby@asNetwork@@QAEHXZ
    inline int32_t PollLobby()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x4819D0, this);
    }

    // 0x481A70 | ?Update@asNetwork@@QAEHXZ
    inline int32_t Update()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x481A70, this);
    }

    // 0x481B70 | ?HandleAppMessage@asNetwork@@QAEXPAX@Z
    inline void HandleAppMessage(void* arg1)
    {
        return stub<member_func_t<void, asNetwork, void*>>(0x481B70, this, arg1);
    }

    // 0x481B90 | ?HandleSysMessage@asNetwork@@QAEXPAUDPMSG_GENERIC@@@Z
    inline void HandleSysMessage(struct DPMSG_GENERIC* arg1)
    {
        return stub<member_func_t<void, asNetwork, struct DPMSG_GENERIC*>>(0x481B90, this, arg1);
    }

    // 0x481DE0 | ?ChatMessage@asNetwork@@QAEXKPAD@Z
    inline void ChatMessage(uint32_t arg1, char* arg2)
    {
        return stub<member_func_t<void, asNetwork, uint32_t, char*>>(0x481DE0, this, arg1, arg2);
    }

    // 0x481EA0 | ?Send@asNetwork@@QAEXKPAXKH@Z
    inline void Send(uint32_t arg1, void* arg2, uint32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<void, asNetwork, uint32_t, void*, uint32_t, int32_t>>(
            0x481EA0, this, arg1, arg2, arg3, arg4);
    }

    // 0x481F70 | ?GetMyLogicalIndex@asNetwork@@QAEHXZ
    inline int32_t GetMyLogicalIndex()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x481F70, this);
    }

    // 0x481FB0 | ?GetGameVersion@asNetwork@@QAEHH@Z
    inline int32_t GetGameVersion(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t>>(0x481FB0, this, arg1);
    }

    // 0x481FE0 | ?GetEnumSessionStatus@asNetwork@@QAEHH@Z
    inline int32_t GetEnumSessionStatus(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t>>(0x481FE0, this, arg1);
    }

    // 0x482010 | ?GetEnumSessionLock@asNetwork@@QAEHH@Z
    inline int32_t GetEnumSessionLock(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t>>(0x482010, this, arg1);
    }

    // 0x482040 | ?SetEnumSessionLock@asNetwork@@QAEXHH@Z
    inline void SetEnumSessionLock(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, asNetwork, int32_t, int32_t>>(0x482040, this, arg1, arg2);
    }

    // 0x4821F0 | ?JoinSession@asNetwork@@QAEHHPAD@Z
    inline int32_t JoinSession(int32_t arg1, char* arg2)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t, char*>>(0x4821F0, this, arg1, arg2);
    }

    // 0x482270 | ?GetNumModems@asNetwork@@QAEHXZ
    inline int32_t GetNumModems()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x482270, this);
    }

    // 0x482280 | ?GetEnumModem@asNetwork@@QAEPADH@Z
    inline char* GetEnumModem(int32_t arg1)
    {
        return stub<member_func_t<char*, asNetwork, int32_t>>(0x482280, this, arg1);
    }

    // 0x4822B0 | ?QueryModems@asNetwork@@QAEHXZ
    inline int32_t QueryModems()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x4822B0, this);
    }
};
