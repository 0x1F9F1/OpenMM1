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

// mmwidget:togglebutton2

#include "hooking.h"

class UIToggleButton2 : UIButton
{
public:
    // UIToggleButton2::`vftable' @ 0x593BA0

    // 0x4B16B0 | ??0UIToggleButton2@@QAE@XZ
    inline UIToggleButton2()
    {
        stub<member_func_t<void, UIToggleButton2>>(0x4B16B0, this);
    }

    // 0x4B1740 | ?Init@UIToggleButton2@@QAEXPAULocString@@PAHMMMMHHVCallback@@@Z
    inline void Init(struct LocString* arg1, int32_t* arg2, float arg3, float arg4, float arg5, float arg6,
        int32_t arg7, int32_t arg8, class Callback arg9)
    {
        return stub<member_func_t<void, UIToggleButton2, struct LocString*, int32_t*, float, float, float, float,
            int32_t, int32_t, class Callback>>(0x4B1740, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x4B1890 | ?Unkill@UIToggleButton2@@QAEXXZ
    inline void Unkill()
    {
        return stub<member_func_t<void, UIToggleButton2>>(0x4B1890, this);
    }

    // 0x667F48 | ?ToggleBMLoaded@UIToggleButton2@@1HA
    static inline extern_var(0x667F48, int32_t, ToggleBMLoaded);

    // 0x4B1730 | ??1UIToggleButton2@@UAE@XZ
    inline ~UIToggleButton2() override
    {
        stub<member_func_t<void, UIToggleButton2>>(0x4B1730, this);
    }

    // 0x4B1A00 | ?Update@UIToggleButton2@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIToggleButton2>>(0x4B1A00, this);
    }

    // 0x4B1A20 | ?Disable@UIToggleButton2@@UAEXXZ
    inline void Disable() override
    {
        return stub<member_func_t<void, UIToggleButton2>>(0x4B1A20, this);
    }

    // 0x4B1A10 | ?Enable@UIToggleButton2@@UAEXXZ
    inline void Enable() override
    {
        return stub<member_func_t<void, UIToggleButton2>>(0x4B1A10, this);
    }

    // 0x4B18E0 | ?Action@UIToggleButton2@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UIToggleButton2, union eqEvent>>(0x4B18E0, this, arg1);
    }

    // 0x4B1960 | ?Switch@UIToggleButton2@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UIToggleButton2, int32_t>>(0x4B1960, this, arg1);
    }

    // 0x4B18C0 | ?DoToggle@UIToggleButton2@@UAEXXZ
    virtual inline void DoToggle()
    {
        return stub<member_func_t<void, UIToggleButton2>>(0x4B18C0, this);
    }

    // 0x4B1810 | ?DrawOff@UIToggleButton2@@MAEXXZ
    virtual inline void DrawOff()
    {
        return stub<member_func_t<void, UIToggleButton2>>(0x4B1810, this);
    }

    // 0x4B1850 | ?DrawOn@UIToggleButton2@@MAEXXZ
    virtual inline void DrawOn()
    {
        return stub<member_func_t<void, UIToggleButton2>>(0x4B1850, this);
    }
};
