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
    mmui:dlg_msg

    0x494240 | public: __thiscall Dialog_Message::Dialog_Message(int,float,float,float,float,char *) | ??0Dialog_Message@@QAE@HMMMMPAD@Z
    0x494350 | public: void __thiscall Dialog_Message::Init(int,char *,char *) | ?Init@Dialog_Message@@QAEXHPAD0@Z
    0x4943C0 | public: virtual __thiscall Dialog_Message::~Dialog_Message(void) | ??1Dialog_Message@@UAE@XZ
    0x4943D0 | public: virtual void __thiscall Dialog_Message::PreSetup(void) | ?PreSetup@Dialog_Message@@UAEXXZ
    0x4943E0 | public: virtual void * __thiscall Dialog_Message::`scalar deleting destructor'(unsigned int) | ??_GDialog_Message@@UAEPAXI@Z
    0x4943E0 | public: virtual void * __thiscall Dialog_Message::`vector deleting destructor'(unsigned int) | ??_EDialog_Message@@UAEPAXI@Z
    0x592578 | const Dialog_Message::`vftable' | ??_7Dialog_Message@@6B@
*/

struct Dialog_Message : PUMenuBase
{
public:
    // Dialog_Message::`vftable' @ 0x592578

    // 0x494240 | ??0Dialog_Message@@QAE@HMMMMPAD@Z
    inline Dialog_Message(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_Message, int32_t, float, float, float, float, char*>>(
            0x494240, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x494350 | ?Init@Dialog_Message@@QAEXHPAD0@Z
    inline void Init(int32_t arg1, char* arg2, char* arg3)
    {
        return stub<member_func_t<void, Dialog_Message, int32_t, char*, char*>>(0x494350, this, arg1, arg2, arg3);
    }

    // 0x4943C0 | ??1Dialog_Message@@UAE@XZ
    inline ~Dialog_Message() override = 0
    {
        stub<member_func_t<void, Dialog_Message>>(0x4943C0, this);
    }

    // 0x4943D0 | ?PreSetup@Dialog_Message@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_Message>>(0x4943D0, this);
    }
};
