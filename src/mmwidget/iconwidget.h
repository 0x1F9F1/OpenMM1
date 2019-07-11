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

// mmwidget:iconwidget

#include "hooking.h"

class UIIconW : uiWidget
{
public:
    // UIIconW::`vftable' @ 0x593AB0

    // 0x4B1070 | ??0UIIconW@@QAE@XZ
    inline UIIconW()
    {
        stub<member_func_t<void, UIIconW>>(0x4B1070, this);
    }

    // 0x4B11A0 | ?Init@UIIconW@@QAEXPAULocString@@PADMMMMVCallback@@@Z
    inline void Init(
        struct LocString* arg1, char* arg2, float arg3, float arg4, float arg5, float arg6, class Callback arg7)
    {
        return stub<member_func_t<void, UIIconW, struct LocString*, char*, float, float, float, float, class Callback>>(
            0x4B11A0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4B1130 | ??1UIIconW@@UAE@XZ
    inline ~UIIconW() override
    {
        stub<member_func_t<void, UIIconW>>(0x4B1130, this);
    }

    // 0x4B12E0 | ?Update@UIIconW@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIIconW>>(0x4B12E0, this);
    }

    // 0x4B1280 | ?Action@UIIconW@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UIIconW, union eqEvent>>(0x4B1280, this, arg1);
    }

    // 0x4B1360 | ?Switch@UIIconW@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UIIconW, int32_t>>(0x4B1360, this, arg1);
    }
};
