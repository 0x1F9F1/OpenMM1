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

// mmwidget:textfield

#include "hooking.h"

class uiWidget : asNode
{
public:
    // uiWidget::`vftable' @ 0x593170

    // 0x4AA7F0 | ??0uiWidget@@QAE@XZ
    inline uiWidget()
    {
        stub<member_func_t<void, uiWidget>>(0x4AA7F0, this);
    }

    // 0x4AA820 | ?AddToolTip@uiWidget@@QAEXPAVUIMenu@@PAULocString@@@Z
    inline void AddToolTip(class UIMenu* arg1, struct LocString* arg2)
    {
        return stub<member_func_t<void, uiWidget, class UIMenu*, struct LocString*>>(0x4AA820, this, arg1, arg2);
    }

    // 0x4AA850 | ?ResetToolTip@uiWidget@@QAEXXZ
    inline void ResetToolTip()
    {
        return stub<member_func_t<void, uiWidget>>(0x4AA850, this);
    }

    // 0x4AA860 | ?SetToolTipText@uiWidget@@QAEXPAULocString@@@Z
    inline void SetToolTipText(struct LocString* arg1)
    {
        return stub<member_func_t<void, uiWidget, struct LocString*>>(0x4AA860, this, arg1);
    }

    // 0x4A77E0 | ??1uiWidget@@UAE@XZ
    inline ~uiWidget() override
    {
        stub<member_func_t<void, uiWidget>>(0x4A77E0, this);
    }

    // 0x4A77F0 | ?Disable@uiWidget@@UAEXXZ
    virtual inline void Disable()
    {
        return stub<member_func_t<void, uiWidget>>(0x4A77F0, this);
    }

    // 0x4A7800 | ?Enable@uiWidget@@UAEXXZ
    virtual inline void Enable()
    {
        return stub<member_func_t<void, uiWidget>>(0x4A7800, this);
    }

    // 0x4A7810 | ?TurnOn@uiWidget@@UAEXXZ
    virtual inline void TurnOn()
    {
        return stub<member_func_t<void, uiWidget>>(0x4A7810, this);
    }

    // 0x4A7830 | ?TurnOff@uiWidget@@UAEXXZ
    virtual inline void TurnOff()
    {
        return stub<member_func_t<void, uiWidget>>(0x4A7830, this);
    }

    // 0x4A7840 | ?SetReadOnly@uiWidget@@UAEXH@Z
    virtual inline void SetReadOnly(int32_t arg1)
    {
        return stub<member_func_t<void, uiWidget, int32_t>>(0x4A7840, this, arg1);
    }

    // 0x4A7860 | ?Action@uiWidget@@UAEXTeqEvent@@@Z
    virtual inline void Action(union eqEvent arg1)
    {
        return stub<member_func_t<void, uiWidget, union eqEvent>>(0x4A7860, this, arg1);
    }

    // 0x4A7870 | ?CaptureAction@uiWidget@@UAEXTeqEvent@@@Z
    virtual inline void CaptureAction(union eqEvent arg1)
    {
        return stub<member_func_t<void, uiWidget, union eqEvent>>(0x4A7870, this, arg1);
    }

    // 0x4AA830 | ?Switch@uiWidget@@UAEXH@Z
    virtual inline void Switch(int32_t arg1)
    {
        return stub<member_func_t<void, uiWidget, int32_t>>(0x4AA830, this, arg1);
    }

    // 0x4A7880 | ?EvalMouseX@uiWidget@@UAEXM@Z
    virtual inline void EvalMouseX(float arg1)
    {
        return stub<member_func_t<void, uiWidget, float>>(0x4A7880, this, arg1);
    }

    // 0x4A7890 | ?ReturnDescription@uiWidget@@UAEPADXZ
    virtual inline char* ReturnDescription()
    {
        return stub<member_func_t<char*, uiWidget>>(0x4A7890, this);
    }

    // 0x4A78A0 | ?SetPosition@uiWidget@@UAEXMM@Z
    virtual inline void SetPosition(float arg1, float arg2)
    {
        return stub<member_func_t<void, uiWidget, float, float>>(0x4A78A0, this, arg1, arg2);
    }

    // 0x4A78B0 | ?GetScreenHeight@uiWidget@@UAEMXZ
    virtual inline float GetScreenHeight()
    {
        return stub<member_func_t<float, uiWidget>>(0x4A78B0, this);
    }
};

class UITextField : uiWidget
{
public:
    // UITextField::`vftable' @ 0x593110

    // 0x4A6B90 | ??0UITextField@@QAE@XZ
    inline UITextField()
    {
        stub<member_func_t<void, UITextField>>(0x4A6B90, this);
    }

    // 0x4A6D10 | ?Init@UITextField@@QAEXPAULocString@@PADMMMMHHHHHVCallback@@PAVUIMenu@@@Z
    inline void Init(struct LocString* arg1, char* arg2, float arg3, float arg4, float arg5, float arg6, int32_t arg7,
        int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, class Callback arg12, class UIMenu* arg13)
    {
        return stub<member_func_t<void, UITextField, struct LocString*, char*, float, float, float, float, int32_t,
            int32_t, int32_t, int32_t, int32_t, class Callback, class UIMenu*>>(
            0x4A6D10, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4A7010 | ?SetText@UITextField@@QAEXPAULocString@@@Z
    inline void SetText(struct LocString* arg1)
    {
        return stub<member_func_t<void, UITextField, struct LocString*>>(0x4A7010, this, arg1);
    }

    // 0x4A7030 | ?SetField@UITextField@@QAEXPAD@Z
    inline void SetField(char* arg1)
    {
        return stub<member_func_t<void, UITextField, char*>>(0x4A7030, this, arg1);
    }

    // 0x4A70F0 | ?ClearField@UITextField@@QAEXXZ
    inline void ClearField()
    {
        return stub<member_func_t<void, UITextField>>(0x4A70F0, this);
    }

    // 0x4A7150 | ?SetTextField@UITextField@@QAEXXZ
    inline void SetTextField()
    {
        return stub<member_func_t<void, UITextField>>(0x4A7150, this);
    }

    // 0x4A71A0 | ?ToggleField@UITextField@@QAEXH@Z
    inline void ToggleField(int32_t arg1)
    {
        return stub<member_func_t<void, UITextField, int32_t>>(0x4A71A0, this, arg1);
    }

    // 0x4A73B0 | ?IsValidChar@UITextField@@QAEHG@Z
    inline int32_t IsValidChar(uint16_t arg1)
    {
        return stub<member_func_t<int32_t, UITextField, uint16_t>>(0x4A73B0, this, arg1);
    }

    // 0x4A7440 | ?WmCharHandler@UITextField@@QAEXE@Z
    inline void WmCharHandler(uint8_t arg1)
    {
        return stub<member_func_t<void, UITextField, uint8_t>>(0x4A7440, this, arg1);
    }

    // 0x4A75B0 | ?KeyAction@UITextField@@QAEXPATeqEvent@@@Z
    inline void KeyAction(union eqEvent* arg1)
    {
        return stub<member_func_t<void, UITextField, union eqEvent*>>(0x4A75B0, this, arg1);
    }

    // 0x4A76C0 | ?SetCompositionWindow@UITextField@@QAEXXZ
    inline void SetCompositionWindow()
    {
        return stub<member_func_t<void, UITextField>>(0x4A76C0, this);
    }

    // 0x4A6CA0 | ??1UITextField@@UAE@XZ
    inline ~UITextField() override
    {
        stub<member_func_t<void, UITextField>>(0x4A6CA0, this);
    }

    // 0x4A78F0 | ?Update@UITextField@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UITextField>>(0x4A78F0, this);
    }

    // 0x4A70A0 | ?Action@UITextField@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextField, union eqEvent>>(0x4A70A0, this, arg1);
    }

    // 0x4A7090 | ?CaptureAction@UITextField@@UAEXTeqEvent@@@Z
    inline void CaptureAction(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextField, union eqEvent>>(0x4A7090, this, arg1);
    }

    // 0x4A7300 | ?Switch@UITextField@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UITextField, int32_t>>(0x4A7300, this, arg1);
    }
};
