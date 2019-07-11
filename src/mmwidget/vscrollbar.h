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

// mmwidget:vscrollbar

#include "hooking.h"

// 0x667F50 | ?UIVScrollBarMetaClass@@3VMetaClass@@A
inline extern_var(0x667F50, class MetaClass, UIVScrollBarMetaClass);

// 0x4B26E0 | ?new_UIVScrollBar@@YAPAXH@Z
inline void* new_UIVScrollBar(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4B26E0, arg1);
}

// 0x4B27B0 | ?delete_UIVScrollBar@@YAXPAXH@Z
inline void delete_UIVScrollBar(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4B27B0, arg1, arg2);
}

class UIVScrollBar : uiWidget
{
public:
    // UIVScrollBar::`vftable' @ 0x593CA0

    // 0x4B1CE0 | ??0UIVScrollBar@@QAE@XZ
    inline UIVScrollBar()
    {
        stub<member_func_t<void, UIVScrollBar>>(0x4B1CE0, this);
    }

    // 0x4B1E00 | ?Init@UIVScrollBar@@QAEXMMMMHMMPAHVCallback@@H@Z
    inline void Init(float arg1, float arg2, float arg3, float arg4, int32_t arg5, float arg6, float arg7,
        int32_t* arg8, class Callback arg9, int32_t arg10)
    {
        return stub<member_func_t<void, UIVScrollBar, float, float, float, float, int32_t, float, float, int32_t*,
            class Callback, int32_t>>(0x4B1E00, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4B1E70 | ?LoadBitmap@UIVScrollBar@@QAEXXZ
    inline void LoadBitmap()
    {
        return stub<member_func_t<void, UIVScrollBar>>(0x4B1E70, this);
    }

    // 0x4B1FA0 | ?SetHotSpots@UIVScrollBar@@QAEXXZ
    inline void SetHotSpots()
    {
        return stub<member_func_t<void, UIVScrollBar>>(0x4B1FA0, this);
    }

    // 0x4B2060 | ?Inc@UIVScrollBar@@QAEMXZ
    inline float Inc()
    {
        return stub<member_func_t<float, UIVScrollBar>>(0x4B2060, this);
    }

    // 0x4B20C0 | ?Dec@UIVScrollBar@@QAEMXZ
    inline float Dec()
    {
        return stub<member_func_t<float, UIVScrollBar>>(0x4B20C0, this);
    }

    // 0x4B2120 | ?SetStep@UIVScrollBar@@QAEXHM@Z
    inline void SetStep(int32_t arg1, float arg2)
    {
        return stub<member_func_t<void, UIVScrollBar, int32_t, float>>(0x4B2120, this, arg1, arg2);
    }

    // 0x4B2180 | ?SetRange@UIVScrollBar@@QAEXMM@Z
    inline void SetRange(float arg1, float arg2)
    {
        return stub<member_func_t<void, UIVScrollBar, float, float>>(0x4B2180, this, arg1, arg2);
    }

    // 0x4B21F0 | ?SetTrough@UIVScrollBar@@QAEXMM@Z
    inline void SetTrough(float arg1, float arg2)
    {
        return stub<member_func_t<void, UIVScrollBar, float, float>>(0x4B21F0, this, arg1, arg2);
    }

    // 0x4B23A0 | ?EvalMouseXY@UIVScrollBar@@QAEXMM@Z
    inline void EvalMouseXY(float arg1, float arg2)
    {
        return stub<member_func_t<void, UIVScrollBar, float, float>>(0x4B23A0, this, arg1, arg2);
    }

    // 0x4B2690 | ?DeclareFields@UIVScrollBar@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4B2690);
    }

    // 0x4B1D80 | ??1UIVScrollBar@@UAE@XZ
    inline ~UIVScrollBar() override
    {
        stub<member_func_t<void, UIVScrollBar>>(0x4B1D80, this);
    }

    // 0x4B2800 | ?GetClass@UIVScrollBar@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, UIVScrollBar>>(0x4B2800, this);
    }

    // 0x4B2520 | ?Cull@UIVScrollBar@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, UIVScrollBar>>(0x4B2520, this);
    }

    // 0x4B2270 | ?Update@UIVScrollBar@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIVScrollBar>>(0x4B2270, this);
    }

    // 0x4B28B0 | ?Disable@UIVScrollBar@@UAEXXZ
    inline void Disable() override
    {
        return stub<member_func_t<void, UIVScrollBar>>(0x4B28B0, this);
    }

    // 0x4B2890 | ?Enable@UIVScrollBar@@UAEXXZ
    inline void Enable() override
    {
        return stub<member_func_t<void, UIVScrollBar>>(0x4B2890, this);
    }

    // 0x4B22E0 | ?Action@UIVScrollBar@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UIVScrollBar, union eqEvent>>(0x4B22E0, this, arg1);
    }

    // 0x4B2290 | ?Switch@UIVScrollBar@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UIVScrollBar, int32_t>>(0x4B2290, this, arg1);
    }

    // 0x4B2870 | ?SetPosition@UIVScrollBar@@UAEXMM@Z
    inline void SetPosition(float arg1, float arg2) override
    {
        return stub<member_func_t<void, UIVScrollBar, float, float>>(0x4B2870, this, arg1, arg2);
    }
};
