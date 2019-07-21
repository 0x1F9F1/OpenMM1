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
    mmui:dlg_newp

    0x494410 | public: __thiscall Dialog_NewPlayer::Dialog_NewPlayer(int,float,float,float,float,char *) | ??0Dialog_NewPlayer@@QAE@HMMMMPAD@Z
    0x494730 | public: virtual __thiscall Dialog_NewPlayer::~Dialog_NewPlayer(void) | ??1Dialog_NewPlayer@@UAE@XZ
    0x494740 | public: void __thiscall Dialog_NewPlayer::EnterNewPlayer(void) | ?EnterNewPlayer@Dialog_NewPlayer@@QAEXXZ
    0x494750 | public: virtual void __thiscall Dialog_NewPlayer::PreSetup(void) | ?PreSetup@Dialog_NewPlayer@@UAEXXZ
    0x494780 | public: virtual void * __thiscall Dialog_NewPlayer::`vector deleting destructor'(unsigned int) | ??_EDialog_NewPlayer@@UAEPAXI@Z
    0x494780 | public: virtual void * __thiscall Dialog_NewPlayer::`scalar deleting destructor'(unsigned int) | ??_GDialog_NewPlayer@@UAEPAXI@Z
    0x5925C8 | const Dialog_NewPlayer::`vftable' | ??_7Dialog_NewPlayer@@6B@
*/

struct Dialog_NewPlayer : PUMenuBase
{
public:
    // Dialog_NewPlayer::`vftable' @ 0x5925C8

    // 0x494410 | ??0Dialog_NewPlayer@@QAE@HMMMMPAD@Z
    inline Dialog_NewPlayer(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_NewPlayer, int32_t, float, float, float, float, char*>>(
            0x494410, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x494740 | ?EnterNewPlayer@Dialog_NewPlayer@@QAEXXZ
    inline void EnterNewPlayer()
    {
        return stub<member_func_t<void, Dialog_NewPlayer>>(0x494740, this);
    }

    // 0x494730 | ??1Dialog_NewPlayer@@UAE@XZ
    inline ~Dialog_NewPlayer() override = 0
    {
        stub<member_func_t<void, Dialog_NewPlayer>>(0x494730, this);
    }

    // 0x494750 | ?PreSetup@Dialog_NewPlayer@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_NewPlayer>>(0x494750, this);
    }
};
