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

// mmwidget:label

#include "hooking.h"

class UILabel : uiWidget
{
public:
    // UILabel::`vftable' @ 0x593268

    // 0x4A83E0 | ??0UILabel@@QAE@XZ
    inline UILabel()
    {
        stub<member_func_t<void, UILabel>>(0x4A83E0, this);
    }

    // 0x4A84D0 | ?Init@UILabel@@QAEXPAULocString@@HMMMMH@Z
    inline void Init(struct LocString* arg1, int32_t arg2, float arg3, float arg4, float arg5, float arg6, int32_t arg7)
    {
        return stub<member_func_t<void, UILabel, struct LocString*, int32_t, float, float, float, float, int32_t>>(
            0x4A84D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4A8590 | ?SetText@UILabel@@QAEXPAULocString@@@Z
    inline void SetText(struct LocString* arg1)
    {
        return stub<member_func_t<void, UILabel, struct LocString*>>(0x4A8590, this, arg1);
    }

    // 0x4A8600 | ?SetBlink@UILabel@@QAEXH@Z
    inline void SetBlink(int32_t arg1)
    {
        return stub<member_func_t<void, UILabel, int32_t>>(0x4A8600, this, arg1);
    }

    // 0x4A8640 | ?SwitchState@UILabel@@QAEXH@Z
    inline void SwitchState(int32_t arg1)
    {
        return stub<member_func_t<void, UILabel, int32_t>>(0x4A8640, this, arg1);
    }

    // 0x667CC8 | ?TextHeight@UILabel@@2MA
    static inline extern_var(0x667CC8, float, TextHeight);

    // 0x4A8470 | ??1UILabel@@UAE@XZ
    inline ~UILabel() override
    {
        stub<member_func_t<void, UILabel>>(0x4A8470, this);
    }

    // 0x4A85B0 | ?Update@UILabel@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UILabel>>(0x4A85B0, this);
    }

    // 0x4A86C0 | ?Action@UILabel@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UILabel, union eqEvent>>(0x4A86C0, this, arg1);
    }

    // 0x4A8630 | ?Switch@UILabel@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UILabel, int32_t>>(0x4A8630, this, arg1);
    }
};
