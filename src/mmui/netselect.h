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
    mmui:netselect

    0x498B10 | public: __thiscall NetSelectMenu::NetSelectMenu(int) | ??0NetSelectMenu@@QAE@H@Z
    0x499260 | public: virtual __thiscall NetSelectMenu::~NetSelectMenu(void) | ??1NetSelectMenu@@UAE@XZ
    0x4992D0 | public: virtual void __thiscall NetSelectMenu::PreSetup(void) | ?PreSetup@NetSelectMenu@@UAEXXZ
    0x499340 | public: virtual void __thiscall NetSelectMenu::PostSetup(void) | ?PostSetup@NetSelectMenu@@UAEXXZ
    0x499360 | public: void __thiscall NetSelectMenu::HostCB(void) | ?HostCB@NetSelectMenu@@QAEXXZ
    0x499370 | public: void __thiscall NetSelectMenu::JoinCB(void) | ?JoinCB@NetSelectMenu@@QAEXXZ
    0x499380 | public: int __thiscall NetSelectMenu::GetHostJoin(void) | ?GetHostJoin@NetSelectMenu@@QAEHXZ
    0x499390 | public: void __thiscall NetSelectMenu::FocusDescription(int) | ?FocusDescription@NetSelectMenu@@QAEXH@Z
    0x499410 | public: void __thiscall NetSelectMenu::SetDescription(struct LocString *) | ?SetDescription@NetSelectMenu@@QAEXPAULocString@@@Z
    0x499420 | public: void __thiscall NetSelectMenu::JoinCallback(void) | ?JoinCallback@NetSelectMenu@@QAEXXZ
    0x499430 | public: void __thiscall NetSelectMenu::ShowTCPIPNetSessions(void) | ?ShowTCPIPNetSessions@NetSelectMenu@@QAEXXZ
    0x499440 | public: void __thiscall NetSelectMenu::DisableSessions(void) | ?DisableSessions@NetSelectMenu@@QAEXXZ
    0x499450 | public: void __thiscall NetSelectMenu::ProtocolBack(void) | ?ProtocolBack@NetSelectMenu@@QAEXXZ
    0x499470 | public: void __thiscall NetSelectMenu::SetNetname(char *) | ?SetNetname@NetSelectMenu@@QAEXPAD@Z
    0x4994B0 | public: void __thiscall NetSelectMenu::SetPhoneNumber(char *) | ?SetPhoneNumber@NetSelectMenu@@QAEXPAD@Z
    0x4994D0 | public: void __thiscall NetSelectMenu::SetIPAddress(char *) | ?SetIPAddress@NetSelectMenu@@QAEXPAD@Z
    0x4994F0 | public: void __thiscall NetSelectMenu::BuildAllTheModemWidgets(float,float,float,float,char *) | ?BuildAllTheModemWidgets@NetSelectMenu@@QAEXMMMMPAD@Z
    0x499600 | public: void __thiscall NetSelectMenu::BuildAllTheIPXWidgets(float,float,float,float) | ?BuildAllTheIPXWidgets@NetSelectMenu@@QAEXMMMM@Z
    0x499610 | public: void __thiscall NetSelectMenu::BuildAllTheTCPWidgets(float,float,float,float) | ?BuildAllTheTCPWidgets@NetSelectMenu@@QAEXMMMM@Z
    0x499620 | public: class UITextScroll * __thiscall NetSelectMenu::GetSessions(void) | ?GetSessions@NetSelectMenu@@QAEPAVUITextScroll@@XZ
    0x499630 | public: int __thiscall NetSelectMenu::GetSessionID(void) | ?GetSessionID@NetSelectMenu@@QAEHXZ
    0x499640 | public: void __thiscall NetSelectMenu::SetSession(char *,int) | ?SetSession@NetSelectMenu@@QAEXPADH@Z
    0x499670 | public: void __thiscall NetSelectMenu::IPAddressCallback(void) | ?IPAddressCallback@NetSelectMenu@@QAEXXZ
    0x499690 | public: void __thiscall NetSelectMenu::BuildComs(void) | ?BuildComs@NetSelectMenu@@QAEXXZ
    0x499790 | public: void __thiscall NetSelectMenu::SetComs(void) | ?SetComs@NetSelectMenu@@QAEXXZ
    0x4998A0 | public: void __thiscall NetSelectMenu::ReparentWidgets(int) | ?ReparentWidgets@NetSelectMenu@@QAEXH@Z
    0x4998B0 | public: void __thiscall NetSelectMenu::WidgetSwitch(int,int) | ?WidgetSwitch@NetSelectMenu@@QAEXHH@Z
    0x4998C0 | public: void __thiscall NetSelectMenu::AddWidgetToList(int,class uiWidget *) | ?AddWidgetToList@NetSelectMenu@@QAEXHPAVuiWidget@@@Z
    0x4998D0 | public: void __thiscall NetSelectMenu::AddModem(char *,int) | ?AddModem@NetSelectMenu@@QAEXPADH@Z
    0x4999D0 | public: void __thiscall NetSelectMenu::ClearProtocol(void) | ?ClearProtocol@NetSelectMenu@@QAEXXZ
    0x4999E0 | public: void __thiscall NetSelectMenu::SetIPXButton(int) | ?SetIPXButton@NetSelectMenu@@QAEXH@Z
    0x499A10 | public: void __thiscall NetSelectMenu::SetTCPLocalButton(int) | ?SetTCPLocalButton@NetSelectMenu@@QAEXH@Z
    0x499A20 | public: void __thiscall NetSelectMenu::SetTCPNetButton(int) | ?SetTCPNetButton@NetSelectMenu@@QAEXH@Z
    0x499A50 | public: void __thiscall NetSelectMenu::SetModemButton(int) | ?SetModemButton@NetSelectMenu@@QAEXH@Z
    0x499A80 | public: void __thiscall NetSelectMenu::SetSerialButton(int) | ?SetSerialButton@NetSelectMenu@@QAEXH@Z
    0x499AB0 | public: struct NETCOMMPACK * __thiscall NetSelectMenu::GetCommPack(void) | ?GetCommPack@NetSelectMenu@@QAEPAUNETCOMMPACK@@XZ
    0x499AE0 | public: void __thiscall NetSelectMenu::NetNameCB(void) | ?NetNameCB@NetSelectMenu@@QAEXXZ
    0x499B10 | public: __thiscall string::string(char const *) | ??0string@@QAE@PBD@Z
    0x499B70 | public: virtual void * __thiscall NetSelectMenu::`vector deleting destructor'(unsigned int) | ??_ENetSelectMenu@@UAEPAXI@Z
    0x499B70 | public: virtual void * __thiscall NetSelectMenu::`scalar deleting destructor'(unsigned int) | ??_GNetSelectMenu@@UAEPAXI@Z
    0x5928D8 | const NetSelectMenu::`vftable' | ??_7NetSelectMenu@@6B@
*/

#include "hooking.h"

struct NetSelectMenu : UIMenu
{
public:
    // NetSelectMenu::`vftable' @ 0x5928D8

    // 0x498B10 | ??0NetSelectMenu@@QAE@H@Z
    inline NetSelectMenu(int32_t arg1)
    {
        // stub<member_func_t<void, NetSelectMenu, int32_t>>(0x498B10, this, arg1);

        unimplemented();
    }

    // 0x499360 | ?HostCB@NetSelectMenu@@QAEXXZ
    inline void HostCB()
    {
        return stub<member_func_t<void, NetSelectMenu>>(0x499360, this);
    }

    // 0x499370 | ?JoinCB@NetSelectMenu@@QAEXXZ
    inline void JoinCB()
    {
        return stub<member_func_t<void, NetSelectMenu>>(0x499370, this);
    }

    // 0x499380 | ?GetHostJoin@NetSelectMenu@@QAEHXZ
    inline int32_t GetHostJoin()
    {
        return stub<member_func_t<int32_t, NetSelectMenu>>(0x499380, this);
    }

    // 0x499390 | ?FocusDescription@NetSelectMenu@@QAEXH@Z
    inline void FocusDescription(int32_t arg1)
    {
        return stub<member_func_t<void, NetSelectMenu, int32_t>>(0x499390, this, arg1);
    }

    // 0x499410 | ?SetDescription@NetSelectMenu@@QAEXPAULocString@@@Z
    inline void SetDescription(struct LocString* arg1)
    {
        return stub<member_func_t<void, NetSelectMenu, struct LocString*>>(0x499410, this, arg1);
    }

    // 0x499420 | ?JoinCallback@NetSelectMenu@@QAEXXZ
    inline void JoinCallback()
    {
        return stub<member_func_t<void, NetSelectMenu>>(0x499420, this);
    }

    // 0x499430 | ?ShowTCPIPNetSessions@NetSelectMenu@@QAEXXZ
    inline void ShowTCPIPNetSessions()
    {
        return stub<member_func_t<void, NetSelectMenu>>(0x499430, this);
    }

    // 0x499440 | ?DisableSessions@NetSelectMenu@@QAEXXZ
    inline void DisableSessions()
    {
        return stub<member_func_t<void, NetSelectMenu>>(0x499440, this);
    }

    // 0x499450 | ?ProtocolBack@NetSelectMenu@@QAEXXZ
    inline void ProtocolBack()
    {
        return stub<member_func_t<void, NetSelectMenu>>(0x499450, this);
    }

    // 0x499470 | ?SetNetname@NetSelectMenu@@QAEXPAD@Z
    inline void SetNetname(char* arg1)
    {
        return stub<member_func_t<void, NetSelectMenu, char*>>(0x499470, this, arg1);
    }

    // 0x4994B0 | ?SetPhoneNumber@NetSelectMenu@@QAEXPAD@Z
    inline void SetPhoneNumber(char* arg1)
    {
        return stub<member_func_t<void, NetSelectMenu, char*>>(0x4994B0, this, arg1);
    }

    // 0x4994D0 | ?SetIPAddress@NetSelectMenu@@QAEXPAD@Z
    inline void SetIPAddress(char* arg1)
    {
        return stub<member_func_t<void, NetSelectMenu, char*>>(0x4994D0, this, arg1);
    }

    // 0x4994F0 | ?BuildAllTheModemWidgets@NetSelectMenu@@QAEXMMMMPAD@Z
    inline void BuildAllTheModemWidgets(float arg1, float arg2, float arg3, float arg4, char* arg5)
    {
        return stub<member_func_t<void, NetSelectMenu, float, float, float, float, char*>>(
            0x4994F0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x499600 | ?BuildAllTheIPXWidgets@NetSelectMenu@@QAEXMMMM@Z
    inline void BuildAllTheIPXWidgets(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, NetSelectMenu, float, float, float, float>>(
            0x499600, this, arg1, arg2, arg3, arg4);
    }

    // 0x499610 | ?BuildAllTheTCPWidgets@NetSelectMenu@@QAEXMMMM@Z
    inline void BuildAllTheTCPWidgets(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, NetSelectMenu, float, float, float, float>>(
            0x499610, this, arg1, arg2, arg3, arg4);
    }

    // 0x499620 | ?GetSessions@NetSelectMenu@@QAEPAVUITextScroll@@XZ
    inline class UITextScroll* GetSessions()
    {
        return stub<member_func_t<class UITextScroll*, NetSelectMenu>>(0x499620, this);
    }

    // 0x499630 | ?GetSessionID@NetSelectMenu@@QAEHXZ
    inline int32_t GetSessionID()
    {
        return stub<member_func_t<int32_t, NetSelectMenu>>(0x499630, this);
    }

    // 0x499640 | ?SetSession@NetSelectMenu@@QAEXPADH@Z
    inline void SetSession(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, NetSelectMenu, char*, int32_t>>(0x499640, this, arg1, arg2);
    }

    // 0x499670 | ?IPAddressCallback@NetSelectMenu@@QAEXXZ
    inline void IPAddressCallback()
    {
        return stub<member_func_t<void, NetSelectMenu>>(0x499670, this);
    }

    // 0x499690 | ?BuildComs@NetSelectMenu@@QAEXXZ
    inline void BuildComs()
    {
        return stub<member_func_t<void, NetSelectMenu>>(0x499690, this);
    }

    // 0x499790 | ?SetComs@NetSelectMenu@@QAEXXZ
    inline void SetComs()
    {
        return stub<member_func_t<void, NetSelectMenu>>(0x499790, this);
    }

    // 0x4998A0 | ?ReparentWidgets@NetSelectMenu@@QAEXH@Z
    inline void ReparentWidgets(int32_t arg1)
    {
        return stub<member_func_t<void, NetSelectMenu, int32_t>>(0x4998A0, this, arg1);
    }

    // 0x4998B0 | ?WidgetSwitch@NetSelectMenu@@QAEXHH@Z
    inline void WidgetSwitch(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, NetSelectMenu, int32_t, int32_t>>(0x4998B0, this, arg1, arg2);
    }

    // 0x4998C0 | ?AddWidgetToList@NetSelectMenu@@QAEXHPAVuiWidget@@@Z
    inline void AddWidgetToList(int32_t arg1, class uiWidget* arg2)
    {
        return stub<member_func_t<void, NetSelectMenu, int32_t, class uiWidget*>>(0x4998C0, this, arg1, arg2);
    }

    // 0x4998D0 | ?AddModem@NetSelectMenu@@QAEXPADH@Z
    inline void AddModem(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, NetSelectMenu, char*, int32_t>>(0x4998D0, this, arg1, arg2);
    }

    // 0x4999D0 | ?ClearProtocol@NetSelectMenu@@QAEXXZ
    inline void ClearProtocol()
    {
        return stub<member_func_t<void, NetSelectMenu>>(0x4999D0, this);
    }

    // 0x4999E0 | ?SetIPXButton@NetSelectMenu@@QAEXH@Z
    inline void SetIPXButton(int32_t arg1)
    {
        return stub<member_func_t<void, NetSelectMenu, int32_t>>(0x4999E0, this, arg1);
    }

    // 0x499A10 | ?SetTCPLocalButton@NetSelectMenu@@QAEXH@Z
    inline void SetTCPLocalButton(int32_t arg1)
    {
        return stub<member_func_t<void, NetSelectMenu, int32_t>>(0x499A10, this, arg1);
    }

    // 0x499A20 | ?SetTCPNetButton@NetSelectMenu@@QAEXH@Z
    inline void SetTCPNetButton(int32_t arg1)
    {
        return stub<member_func_t<void, NetSelectMenu, int32_t>>(0x499A20, this, arg1);
    }

    // 0x499A50 | ?SetModemButton@NetSelectMenu@@QAEXH@Z
    inline void SetModemButton(int32_t arg1)
    {
        return stub<member_func_t<void, NetSelectMenu, int32_t>>(0x499A50, this, arg1);
    }

    // 0x499A80 | ?SetSerialButton@NetSelectMenu@@QAEXH@Z
    inline void SetSerialButton(int32_t arg1)
    {
        return stub<member_func_t<void, NetSelectMenu, int32_t>>(0x499A80, this, arg1);
    }

    // 0x499AB0 | ?GetCommPack@NetSelectMenu@@QAEPAUNETCOMMPACK@@XZ
    inline struct NETCOMMPACK* GetCommPack()
    {
        return stub<member_func_t<struct NETCOMMPACK*, NetSelectMenu>>(0x499AB0, this);
    }

    // 0x499AE0 | ?NetNameCB@NetSelectMenu@@QAEXXZ
    inline void NetNameCB()
    {
        return stub<member_func_t<void, NetSelectMenu>>(0x499AE0, this);
    }

    // 0x499260 | ??1NetSelectMenu@@UAE@XZ
    inline ~NetSelectMenu() override = 0
    {
        // stub<member_func_t<void, NetSelectMenu>>(0x499260, this);

        unimplemented();
    }

    // 0x4992D0 | ?PreSetup@NetSelectMenu@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, NetSelectMenu>>(0x4992D0, this);
    }

    // 0x499340 | ?PostSetup@NetSelectMenu@@UAEXXZ
    inline void PostSetup() override
    {
        return stub<member_func_t<void, NetSelectMenu>>(0x499340, this);
    }
};
