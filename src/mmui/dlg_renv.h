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
    mmui:dlg_renv

    0x492BE0 | public: __thiscall Dialog_RaceEnvironment::Dialog_RaceEnvironment(int,float,float,float,float,char *) | ??0Dialog_RaceEnvironment@@QAE@HMMMMPAD@Z
    0x4931F0 | public: virtual __thiscall Dialog_RaceEnvironment::~Dialog_RaceEnvironment(void) | ??1Dialog_RaceEnvironment@@UAE@XZ
    0x493200 | public: virtual void __thiscall Dialog_RaceEnvironment::PreSetup(void) | ?PreSetup@Dialog_RaceEnvironment@@UAEXXZ
    0x493250 | public: void __thiscall Dialog_RaceEnvironment::ControlPedSlider(void) | ?ControlPedSlider@Dialog_RaceEnvironment@@QAEXXZ
    0x493270 | public: void __thiscall Dialog_RaceEnvironment::SetMultiRaceOptions(int) | ?SetMultiRaceOptions@Dialog_RaceEnvironment@@QAEXH@Z
    0x4932B0 | public: void __thiscall Dialog_RaceEnvironment::DoneCallback(void) | ?DoneCallback@Dialog_RaceEnvironment@@QAEXXZ
    0x493300 | public: void __thiscall Dialog_RaceEnvironment::CancelCallback(void) | ?CancelCallback@Dialog_RaceEnvironment@@QAEXXZ
    0x493310 | public: virtual void * __thiscall Dialog_RaceEnvironment::`scalar deleting destructor'(unsigned int) | ??_GDialog_RaceEnvironment@@UAEPAXI@Z
    0x493310 | public: virtual void * __thiscall Dialog_RaceEnvironment::`vector deleting destructor'(unsigned int) | ??_EDialog_RaceEnvironment@@UAEPAXI@Z
    0x592480 | const Dialog_RaceEnvironment::`vftable' | ??_7Dialog_RaceEnvironment@@6B@
*/

#include "hooking.h"

struct Dialog_RaceEnvironment : PUMenuBase
{
public:
    // Dialog_RaceEnvironment::`vftable' @ 0x592480

    // 0x492BE0 | ??0Dialog_RaceEnvironment@@QAE@HMMMMPAD@Z
    inline Dialog_RaceEnvironment(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_RaceEnvironment, int32_t, float, float, float, float, char*>>(
            0x492BE0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x493250 | ?ControlPedSlider@Dialog_RaceEnvironment@@QAEXXZ
    inline void ControlPedSlider()
    {
        return stub<member_func_t<void, Dialog_RaceEnvironment>>(0x493250, this);
    }

    // 0x493270 | ?SetMultiRaceOptions@Dialog_RaceEnvironment@@QAEXH@Z
    inline void SetMultiRaceOptions(int32_t arg1)
    {
        return stub<member_func_t<void, Dialog_RaceEnvironment, int32_t>>(0x493270, this, arg1);
    }

    // 0x4932B0 | ?DoneCallback@Dialog_RaceEnvironment@@QAEXXZ
    inline void DoneCallback()
    {
        return stub<member_func_t<void, Dialog_RaceEnvironment>>(0x4932B0, this);
    }

    // 0x493300 | ?CancelCallback@Dialog_RaceEnvironment@@QAEXXZ
    inline void CancelCallback()
    {
        return stub<member_func_t<void, Dialog_RaceEnvironment>>(0x493300, this);
    }

    // 0x4931F0 | ??1Dialog_RaceEnvironment@@UAE@XZ
    inline ~Dialog_RaceEnvironment() override = 0
    {
        stub<member_func_t<void, Dialog_RaceEnvironment>>(0x4931F0, this);
    }

    // 0x493200 | ?PreSetup@Dialog_RaceEnvironment@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_RaceEnvironment>>(0x493200, this);
    }
};
