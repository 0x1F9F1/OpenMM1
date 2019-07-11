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

// mmwidget:navbar

#include "hooking.h"

struct uiNavBar : UIMenu
{
public:
    // uiNavBar::`vftable' @ 0x5930C8

    // 0x4A6730 | ??0uiNavBar@@QAE@H@Z
    inline uiNavBar(int32_t arg1)
    {
        stub<member_func_t<void, uiNavBar, int32_t>>(0x4A6730, this, arg1);
    }

    // 0x4A6940 | ?Help@uiNavBar@@QAEXXZ
    inline void Help()
    {
        return stub<member_func_t<void, uiNavBar>>(0x4A6940, this);
    }

    // 0x4A6950 | ?Minimize@uiNavBar@@QAEXXZ
    inline void Minimize()
    {
        return stub<member_func_t<void, uiNavBar>>(0x4A6950, this);
    }

    // 0x4A69B0 | ?ResetState@uiNavBar@@QAEXXZ
    inline void ResetState()
    {
        return stub<member_func_t<void, uiNavBar>>(0x4A69B0, this);
    }

    // 0x4A69C0 | ?OptionActive@uiNavBar@@QAEXXZ
    inline void OptionActive()
    {
        return stub<member_func_t<void, uiNavBar>>(0x4A69C0, this);
    }

    // 0x4A69E0 | ?OptionInActive@uiNavBar@@QAEXXZ
    inline void OptionInActive()
    {
        return stub<member_func_t<void, uiNavBar>>(0x4A69E0, this);
    }

    // 0x4A6AA0 | ?SetPrevPos@uiNavBar@@QAEXMM@Z
    inline void SetPrevPos(float arg1, float arg2)
    {
        return stub<member_func_t<void, uiNavBar, float, float>>(0x4A6AA0, this, arg1, arg2);
    }

    // 0x4A6AF0 | ?TurnOnPrev@uiNavBar@@QAEXXZ
    inline void TurnOnPrev()
    {
        return stub<member_func_t<void, uiNavBar>>(0x4A6AF0, this);
    }

    // 0x4A6B10 | ?TurnOffPrev@uiNavBar@@QAEXXZ
    inline void TurnOffPrev()
    {
        return stub<member_func_t<void, uiNavBar>>(0x4A6B10, this);
    }

    // 0x4A6B30 | ?SetPrevBitmap@uiNavBar@@QAEXPAD@Z
    inline void SetPrevBitmap(char* arg1)
    {
        return stub<member_func_t<void, uiNavBar, char*>>(0x4A6B30, this, arg1);
    }

    // 0x4A69A0 | ??1uiNavBar@@UAE@XZ
    inline ~uiNavBar() override
    {
        stub<member_func_t<void, uiNavBar>>(0x4A69A0, this);
    }

    // 0x4A6A00 | ?Update@uiNavBar@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, uiNavBar>>(0x4A6A00, this);
    }

    // 0x4A6B80 | ?BackUp@uiNavBar@@UAEXXZ
    inline void BackUp() override
    {
        return stub<member_func_t<void, uiNavBar>>(0x4A6B80, this);
    }
};
