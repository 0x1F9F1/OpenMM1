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

// mmwidget:tscroll

#include "hooking.h"

class UITextScroll : uiWidget
{
public:
    // UITextScroll::`vftable' @ 0x5937F0

    // 0x4ADAD0 | ??0UITextScroll@@QAE@XZ
    inline UITextScroll()
    {
        stub<member_func_t<void, UITextScroll>>(0x4ADAD0, this);
    }

    // 0x4ADC60 | ?Init@UITextScroll@@QAEXPAXMMMMVstring@@HPAHVCallback@@@Z
    inline void Init(void* arg1, float arg2, float arg3, float arg4, float arg5, class string arg6, int32_t arg7,
        int32_t* arg8, class Callback arg9)
    {
        return stub<member_func_t<void, UITextScroll, void*, float, float, float, float, class string, int32_t,
            int32_t*, class Callback>>(0x4ADC60, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x4ADFD0 | ?InitVScroll@UITextScroll@@QAEXMMM@Z
    inline void InitVScroll(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, UITextScroll, float, float, float>>(0x4ADFD0, this, arg1, arg2, arg3);
    }

    // 0x4ADFE0 | ?VScrollCB@UITextScroll@@QAEXXZ
    inline void VScrollCB()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4ADFE0, this);
    }

    // 0x4AE020 | ?SetVScrollVals@UITextScroll@@QAEXXZ
    inline void SetVScrollVals()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4AE020, this);
    }

    // 0x4AE040 | ?SetVScrollPos@UITextScroll@@QAEXXZ
    inline void SetVScrollPos()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4AE040, this);
    }

    // 0x4AE070 | ?Recalc@UITextScroll@@QAEXVstring@@@Z
    inline void Recalc(class string arg1)
    {
        return stub<member_func_t<void, UITextScroll, class string>>(0x4AE070, this, arg1);
    }

    // 0x4AE1E0 | ?FillScroll@UITextScroll@@AAEXXZ
    inline void FillScroll()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4AE1E0, this);
    }

    // 0x4AE2C0 | ?GetCurrentString@UITextScroll@@QAEXPADH@Z
    inline void GetCurrentString(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, UITextScroll, char*, int32_t>>(0x4AE2C0, this, arg1, arg2);
    }

    // 0x4AE310 | ?SetHighlight@UITextScroll@@QAEXH@Z
    inline void SetHighlight(int32_t arg1)
    {
        return stub<member_func_t<void, UITextScroll, int32_t>>(0x4AE310, this, arg1);
    }

    // 0x4AE360 | ?GetHit@UITextScroll@@QAEHMM@Z
    inline int32_t GetHit(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, UITextScroll, float, float>>(0x4AE360, this, arg1, arg2);
    }

    // 0x4AE3E0 | ?KeyAction@UITextScroll@@AAEXXZ
    inline void KeyAction()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4AE3E0, this);
    }

    // 0x4AE530 | ?SetTextColor@UITextScroll@@AAEXXZ
    inline void SetTextColor()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4AE530, this);
    }

    // 0x4AE590 | ?SetText@UITextScroll@@QAEXHPAULocString@@@Z
    inline void SetText(int32_t arg1, struct LocString* arg2)
    {
        return stub<member_func_t<void, UITextScroll, int32_t, struct LocString*>>(0x4AE590, this, arg1, arg2);
    }

    // 0x4AE5D0 | ?ResetTextScroll@UITextScroll@@AAEXXZ
    inline void ResetTextScroll()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4AE5D0, this);
    }

    // 0x4AE650 | ?InitTextScroll@UITextScroll@@AAEXVstring@@@Z
    inline void InitTextScroll(class string arg1)
    {
        return stub<member_func_t<void, UITextScroll, class string>>(0x4AE650, this, arg1);
    }

    // 0x4AE780 | ?AddTextScrollLine@UITextScroll@@AAEXPADH@Z
    inline void AddTextScrollLine(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, UITextScroll, char*, int32_t>>(0x4AE780, this, arg1, arg2);
    }

    // 0x4AE810 | ?AddTextScrollLine@UITextScroll@@AAEXPAD@Z
    inline void AddTextScrollLine(char* arg1)
    {
        return stub<member_func_t<void, UITextScroll, char*>>(0x4AE810, this, arg1);
    }

    // 0x4ADBE0 | ??1UITextScroll@@UAE@XZ
    inline ~UITextScroll() override
    {
        stub<member_func_t<void, UITextScroll>>(0x4ADBE0, this);
    }

    // 0x4AE440 | ?Action@UITextScroll@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextScroll, union eqEvent>>(0x4AE440, this, arg1);
    }

    // 0x4AE4F0 | ?Switch@UITextScroll@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UITextScroll, int32_t>>(0x4AE4F0, this, arg1);
    }
};
