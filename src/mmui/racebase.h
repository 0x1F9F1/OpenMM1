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

// mmui:racebase

#include "hooking.h"

// 0x5AF708 | ?GoldHPScale@@3MA
inline extern_var(0x5AF708, float, GoldHPScale);

// 0x5AF70C | ?GoldDamageScale@@3MA
inline extern_var(0x5AF70C, float, GoldDamageScale);

struct RaceMenuBase : UIMenu
{
public:
    // RaceMenuBase::`vftable' @ 0x592AB8

    // 0x49AF70 | ??0RaceMenuBase@@QAE@H@Z
    inline RaceMenuBase(int32_t arg1)
    {
        stub<member_func_t<void, RaceMenuBase, int32_t>>(0x49AF70, this, arg1);
    }

    // 0x49B0B0 | ?Init@RaceMenuBase@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, RaceMenuBase, int32_t>>(0x49B0B0, this, arg1);
    }

    // 0x49BEF0 | ?FocusDescription@RaceMenuBase@@QAEXH@Z
    inline void FocusDescription(int32_t arg1)
    {
        return stub<member_func_t<void, RaceMenuBase, int32_t>>(0x49BEF0, this, arg1);
    }

    // 0x49BF20 | ?WidgetOnOff@RaceMenuBase@@QAEXHPAVuiWidget@@@Z
    inline void WidgetOnOff(int32_t arg1, class uiWidget* arg2)
    {
        return stub<member_func_t<void, RaceMenuBase, int32_t, class uiWidget*>>(0x49BF20, this, arg1, arg2);
    }

    // 0x49BF50 | ?SetRW@RaceMenuBase@@QAEXXZ
    inline void SetRW()
    {
        return stub<member_func_t<void, RaceMenuBase>>(0x49BF50, this);
    }

    // 0x49C220 | ?IsEnvEnabled@RaceMenuBase@@QAEHXZ
    inline int32_t IsEnvEnabled()
    {
        return stub<member_func_t<int32_t, RaceMenuBase>>(0x49C220, this);
    }

    // 0x49C240 | ?CheatCallback@RaceMenuBase@@QAEXXZ
    inline void CheatCallback()
    {
        return stub<member_func_t<void, RaceMenuBase>>(0x49C240, this);
    }

    // 0x49C250 | ?SyncRaceState@RaceMenuBase@@QAEXXZ
    inline void SyncRaceState()
    {
        return stub<member_func_t<void, RaceMenuBase>>(0x49C250, this);
    }

    // 0x49C300 | ?CityChange@RaceMenuBase@@QAEXXZ
    inline void CityChange()
    {
        return stub<member_func_t<void, RaceMenuBase>>(0x49C300, this);
    }

    // 0x49C4A0 | ?GameCallback@RaceMenuBase@@QAEXXZ
    inline void GameCallback()
    {
        return stub<member_func_t<void, RaceMenuBase>>(0x49C4A0, this);
    }

    // 0x49C520 | ?LapsCallback@RaceMenuBase@@QAEXXZ
    inline void LapsCallback()
    {
        return stub<member_func_t<void, RaceMenuBase>>(0x49C520, this);
    }

    // 0x49C530 | ?WPCallback@RaceMenuBase@@QAEXXZ
    inline void WPCallback()
    {
        return stub<member_func_t<void, RaceMenuBase>>(0x49C530, this);
    }

    // 0x49C580 | ?AICallback@RaceMenuBase@@QAEXXZ
    inline void AICallback()
    {
        return stub<member_func_t<void, RaceMenuBase>>(0x49C580, this);
    }

    // 0x49C5D0 | ?WeatherCallback@RaceMenuBase@@QAEXXZ
    inline void WeatherCallback()
    {
        return stub<member_func_t<void, RaceMenuBase>>(0x49C5D0, this);
    }

    // 0x49C5E0 | ?TimeCallback@RaceMenuBase@@QAEXXZ
    inline void TimeCallback()
    {
        return stub<member_func_t<void, RaceMenuBase>>(0x49C5E0, this);
    }

    // 0x49C5F0 | ?ChangeLocalVals@RaceMenuBase@@QAEXXZ
    inline void ChangeLocalVals()
    {
        return stub<member_func_t<void, RaceMenuBase>>(0x49C5F0, this);
    }

    // 0x49C880 | ?SetStateRace@RaceMenuBase@@QAEXXZ
    inline void SetStateRace()
    {
        return stub<member_func_t<void, RaceMenuBase>>(0x49C880, this);
    }

    // 0x49BE70 | ??1RaceMenuBase@@UAE@XZ
    inline ~RaceMenuBase() override
    {
        stub<member_func_t<void, RaceMenuBase>>(0x49BE70, this);
    }

    // 0x499ED0 | ?UsesLobby@RaceMenuBase@@UAEXH@Z
    virtual inline void UsesLobby(int32_t arg1)
    {
        return stub<member_func_t<void, RaceMenuBase, int32_t>>(0x499ED0, this, arg1);
    }
};
