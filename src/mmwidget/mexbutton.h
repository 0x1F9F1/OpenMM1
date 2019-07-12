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

/*
    mmwidget:mexbutton

    0x4B1A30 | public: __thiscall UIMexButton::UIMexButton(void) | ??0UIMexButton@@QAE@XZ
    0x4B1AB0 | public: virtual __thiscall UIMexButton::~UIMexButton(void) | ??1UIMexButton@@UAE@XZ
    0x4B1AC0 | public: void __thiscall UIMexButton::Init(struct LocString *,int *,int,float,float,float,float,int,int,class Callback) | ?Init@UIMexButton@@QAEXPAULocString@@PAHHMMMMHHVCallback@@@Z
    0x4B1B90 | public: virtual void __thiscall UIMexButton::Update(void) | ?Update@UIMexButton@@UAEXXZ
    0x4B1BE0 | private: virtual void __thiscall UIMexButton::DrawOff(void) | ?DrawOff@UIMexButton@@EAEXXZ
    0x4B1BF0 | private: virtual void __thiscall UIMexButton::DrawOn(void) | ?DrawOn@UIMexButton@@EAEXXZ
    0x4B1C20 | public: virtual void __thiscall UIMexButton::DoToggle(void) | ?DoToggle@UIMexButton@@UAEXXZ
    0x4B1C40 | public: virtual void __thiscall UIMexButton::Action(union eqEvent) | ?Action@UIMexButton@@UAEXTeqEvent@@@Z
    0x4B1CB0 | public: virtual void * __thiscall UIMexButton::`scalar deleting destructor'(unsigned int) | ??_GUIMexButton@@UAEPAXI@Z
    0x4B1CB0 | public: virtual void * __thiscall UIMexButton::`vector deleting destructor'(unsigned int) | ??_EUIMexButton@@UAEPAXI@Z
    0x593C20 | const UIMexButton::`vftable' | ??_7UIMexButton@@6B@
*/

#include "hooking.h"

class UIMexButton : UIToggleButton2
{
public:
    // UIMexButton::`vftable' @ 0x593C20

    // 0x4B1A30 | ??0UIMexButton@@QAE@XZ
    inline UIMexButton()
    {
        // stub<member_func_t<void, UIMexButton>>(0x4B1A30, this);

        unimplemented();
    }

    // 0x4B1AC0 | ?Init@UIMexButton@@QAEXPAULocString@@PAHHMMMMHHVCallback@@@Z
    inline void Init(struct LocString* arg1, int32_t* arg2, int32_t arg3, float arg4, float arg5, float arg6,
        float arg7, int32_t arg8, int32_t arg9, class Callback arg10)
    {
        return stub<member_func_t<void, UIMexButton, struct LocString*, int32_t*, int32_t, float, float, float, float,
            int32_t, int32_t, class Callback>>(
            0x4B1AC0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4B1AB0 | ??1UIMexButton@@UAE@XZ
    inline ~UIMexButton() override = 0
    {
        // stub<member_func_t<void, UIMexButton>>(0x4B1AB0, this);

        unimplemented();
    }

    // 0x4B1B90 | ?Update@UIMexButton@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIMexButton>>(0x4B1B90, this);
    }

    // 0x4B1C40 | ?Action@UIMexButton@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UIMexButton, union eqEvent>>(0x4B1C40, this, arg1);
    }

    // 0x4B1C20 | ?DoToggle@UIMexButton@@UAEXXZ
    inline void DoToggle() override
    {
        return stub<member_func_t<void, UIMexButton>>(0x4B1C20, this);
    }

    // 0x4B1BE0 | ?DrawOff@UIMexButton@@EAEXXZ
    inline void DrawOff() override
    {
        return stub<member_func_t<void, UIMexButton>>(0x4B1BE0, this);
    }

    // 0x4B1BF0 | ?DrawOn@UIMexButton@@EAEXXZ
    inline void DrawOn() override
    {
        return stub<member_func_t<void, UIMexButton>>(0x4B1BF0, this);
    }
};
