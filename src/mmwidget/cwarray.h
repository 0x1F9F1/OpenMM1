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

// mmwidget:cwarray

#include "hooking.h"

class UICWArray : uiWidget
{
public:
    // UICWArray::`vftable' @ 0x593758

    // 0x4ACF50 | ??0UICWArray@@QAE@XZ
    inline UICWArray()
    {
        stub<member_func_t<void, UICWArray>>(0x4ACF50, this);
    }

    // 0x4AD030 | ?Init@UICWArray@@QAEXMMMMHVCallback@@@Z
    inline void Init(float arg1, float arg2, float arg3, float arg4, int32_t arg5, class Callback arg6)
    {
        return stub<member_func_t<void, UICWArray, float, float, float, float, int32_t, class Callback>>(
            0x4AD030, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4AD280 | ?VScrollCB@UICWArray@@QAEXXZ
    inline void VScrollCB()
    {
        return stub<member_func_t<void, UICWArray>>(0x4AD280, this);
    }

    // 0x4AD2F0 | ?SetVScrollVals@UICWArray@@QAEXXZ
    inline void SetVScrollVals()
    {
        return stub<member_func_t<void, UICWArray>>(0x4AD2F0, this);
    }

    // 0x4AD360 | ?SetVScrollPos@UICWArray@@QAEXXZ
    inline void SetVScrollPos()
    {
        return stub<member_func_t<void, UICWArray>>(0x4AD360, this);
    }

    // 0x4AD390 | ?SetStartOffset@UICWArray@@QAEXH@Z
    inline void SetStartOffset(int32_t arg1)
    {
        return stub<member_func_t<void, UICWArray, int32_t>>(0x4AD390, this, arg1);
    }

    // 0x4AD3D0 | ?Redraw@UICWArray@@QAEXXZ
    inline void Redraw()
    {
        return stub<member_func_t<void, UICWArray>>(0x4AD3D0, this);
    }

    // 0x4AD790 | ?EnterCapture@UICWArray@@QAEXH@Z
    inline void EnterCapture(int32_t arg1)
    {
        return stub<member_func_t<void, UICWArray, int32_t>>(0x4AD790, this, arg1);
    }

    // 0x4AD800 | ?ForceCapture@UICWArray@@QAEXXZ
    inline void ForceCapture()
    {
        return stub<member_func_t<void, UICWArray>>(0x4AD800, this);
    }

    // 0x4AD830 | ?AcceptCapture@UICWArray@@QAEXXZ
    inline void AcceptCapture()
    {
        return stub<member_func_t<void, UICWArray>>(0x4AD830, this);
    }

    // 0x4AD880 | ?ResetCapture@UICWArray@@QAEXXZ
    inline void ResetCapture()
    {
        return stub<member_func_t<void, UICWArray>>(0x4AD880, this);
    }

    // 0x4AD8B0 | ?CheckCapture@UICWArray@@QAEXXZ
    inline void CheckCapture()
    {
        return stub<member_func_t<void, UICWArray>>(0x4AD8B0, this);
    }

    // 0x4AD960 | ?SaveCFG@UICWArray@@QAEXXZ
    inline void SaveCFG()
    {
        return stub<member_func_t<void, UICWArray>>(0x4AD960, this);
    }

    // 0x4AD9A0 | ?LoadCFG@UICWArray@@QAEXXZ
    inline void LoadCFG()
    {
        return stub<member_func_t<void, UICWArray>>(0x4AD9A0, this);
    }

    // 0x4AD9F0 | ?DefaultCFG@UICWArray@@QAEXXZ
    inline void DefaultCFG()
    {
        return stub<member_func_t<void, UICWArray>>(0x4AD9F0, this);
    }

    // 0x4ADA20 | ?DebugForceSetting@UICWArray@@QAEXXZ
    inline void DebugForceSetting()
    {
        return stub<member_func_t<void, UICWArray>>(0x4ADA20, this);
    }

    // 0x4AD010 | ??1UICWArray@@UAE@XZ
    inline ~UICWArray() override
    {
        stub<member_func_t<void, UICWArray>>(0x4AD010, this);
    }

    // 0x4AD710 | ?Update@UICWArray@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UICWArray>>(0x4AD710, this);
    }

    // 0x4AD020 | ?Reset@UICWArray@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, UICWArray>>(0x4AD020, this);
    }

    // 0x4AD570 | ?Action@UICWArray@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UICWArray, union eqEvent>>(0x4AD570, this, arg1);
    }

    // 0x4AD6A0 | ?CaptureAction@UICWArray@@UAEXTeqEvent@@@Z
    inline void CaptureAction(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UICWArray, union eqEvent>>(0x4AD6A0, this, arg1);
    }

    // 0x4AD530 | ?Switch@UICWArray@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UICWArray, int32_t>>(0x4AD530, this, arg1);
    }
};
