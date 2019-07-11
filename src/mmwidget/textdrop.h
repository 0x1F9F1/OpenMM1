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

// mmwidget:textdrop

#include "hooking.h"

class UITextDropdown : uiWidget
{
public:
    // UITextDropdown::`vftable' @ 0x5931E0

    // 0x4A7900 | ??0UITextDropdown@@QAE@XZ
    inline UITextDropdown()
    {
        stub<member_func_t<void, UITextDropdown>>(0x4A7900, this);
    }

    // 0x4A7A00 | ?Init@UITextDropdown@@QAEXPAULocString@@PAHMMMMVstring@@HHHVCallback@@PAD@Z
    inline void Init(struct LocString* arg1, int32_t* arg2, float arg3, float arg4, float arg5, float arg6,
        class string arg7, int32_t arg8, int32_t arg9, int32_t arg10, class Callback arg11, char* arg12)
    {
        return stub<member_func_t<void, UITextDropdown, struct LocString*, int32_t*, float, float, float, float,
            class string, int32_t, int32_t, int32_t, class Callback, char*>>(
            0x4A7A00, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }

    // 0x4A7DD0 | ?SetPos@UITextDropdown@@QAEXMM@Z
    inline void SetPos(float arg1, float arg2)
    {
        return stub<member_func_t<void, UITextDropdown, float, float>>(0x4A7DD0, this, arg1, arg2);
    }

    // 0x4A7DE0 | ?AssignString@UITextDropdown@@QAEXVstring@@@Z
    inline void AssignString(class string arg1)
    {
        return stub<member_func_t<void, UITextDropdown, class string>>(0x4A7DE0, this, arg1);
    }

    // 0x4A7E90 | ?SetData@UITextDropdown@@QAEXPAH@Z
    inline void SetData(int32_t* arg1)
    {
        return stub<member_func_t<void, UITextDropdown, int32_t*>>(0x4A7E90, this, arg1);
    }

    // 0x4A7F30 | ?SetText@UITextDropdown@@QAEXPAULocString@@@Z
    inline void SetText(struct LocString* arg1)
    {
        return stub<member_func_t<void, UITextDropdown, struct LocString*>>(0x4A7F30, this, arg1);
    }

    // 0x4A8260 | ?SetSliderFocus@UITextDropdown@@QAEXH@Z
    inline void SetSliderFocus(int32_t arg1)
    {
        return stub<member_func_t<void, UITextDropdown, int32_t>>(0x4A8260, this, arg1);
    }

    // 0x4A82E0 | ?GetValue@UITextDropdown@@QAEHXZ
    inline int32_t GetValue()
    {
        return stub<member_func_t<int32_t, UITextDropdown>>(0x4A82E0, this);
    }

    // 0x4A82F0 | ?SetValue@UITextDropdown@@QAEHH@Z
    inline int32_t SetValue(int32_t arg1)
    {
        return stub<member_func_t<int32_t, UITextDropdown, int32_t>>(0x4A82F0, this, arg1);
    }

    // 0x4A8320 | ?SetDisabledMask@UITextDropdown@@QAEXJ@Z
    inline void SetDisabledMask(int32_t arg1)
    {
        return stub<member_func_t<void, UITextDropdown, int32_t>>(0x4A8320, this, arg1);
    }

    // 0x4A8340 | ?AnyEnabled@UITextDropdown@@QAEHXZ
    inline int32_t AnyEnabled()
    {
        return stub<member_func_t<int32_t, UITextDropdown>>(0x4A8340, this);
    }

    // 0x4A7990 | ??1UITextDropdown@@UAE@XZ
    inline ~UITextDropdown() override
    {
        stub<member_func_t<void, UITextDropdown>>(0x4A7990, this);
    }

    // 0x4A8350 | ?Cull@UITextDropdown@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, UITextDropdown>>(0x4A8350, this);
    }

    // 0x4A7EC0 | ?Update@UITextDropdown@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UITextDropdown>>(0x4A7EC0, this);
    }

    // 0x4A80B0 | ?Action@UITextDropdown@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextDropdown, union eqEvent>>(0x4A80B0, this, arg1);
    }

    // 0x4A7F40 | ?CaptureAction@UITextDropdown@@UAEXTeqEvent@@@Z
    inline void CaptureAction(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextDropdown, union eqEvent>>(0x4A7F40, this, arg1);
    }

    // 0x4A81E0 | ?Switch@UITextDropdown@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UITextDropdown, int32_t>>(0x4A81E0, this, arg1);
    }

    // 0x4A7DC0 | ?GetScreenHeight@UITextDropdown@@UAEMXZ
    inline float GetScreenHeight() override
    {
        return stub<member_func_t<float, UITextDropdown>>(0x4A7DC0, this);
    }
};
