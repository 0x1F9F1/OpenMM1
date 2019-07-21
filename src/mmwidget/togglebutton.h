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
    mmwidget:togglebutton

    0x4B1410 | public: __thiscall UIToggleButton::UIToggleButton(void) | ??0UIToggleButton@@QAE@XZ
    0x4B1490 | public: virtual __thiscall UIToggleButton::~UIToggleButton(void) | ??1UIToggleButton@@UAE@XZ
    0x4B1500 | public: void __thiscall UIToggleButton::Init(struct LocString *,int *,float,float,float,float,int,int,class Callback) | ?Init@UIToggleButton@@QAEXPAULocString@@PAHMMMMHHVCallback@@@Z
    0x4B15A0 | protected: virtual void __thiscall UIToggleButton::DrawOff(void) | ?DrawOff@UIToggleButton@@MAEXXZ
    0x4B15C0 | protected: virtual void __thiscall UIToggleButton::DrawOn(void) | ?DrawOn@UIToggleButton@@MAEXXZ
    0x4B15E0 | public: virtual void __thiscall UIToggleButton::DoToggle(void) | ?DoToggle@UIToggleButton@@UAEXXZ
    0x4B1600 | public: virtual void __thiscall UIToggleButton::Action(union eqEvent) | ?Action@UIToggleButton@@UAEXTeqEvent@@@Z
    0x4B1670 | public: virtual void * __thiscall UIToggleButton::`scalar deleting destructor'(unsigned int) | ??_GUIToggleButton@@UAEPAXI@Z
    0x4B1670 | public: virtual void * __thiscall UIToggleButton::`vector deleting destructor'(unsigned int) | ??_EUIToggleButton@@UAEPAXI@Z
    0x4B16A0 | public: virtual void __thiscall UIToggleButton::Update(void) | ?Update@UIToggleButton@@UAEXXZ
    0x593B20 | const UIToggleButton::`vftable' | ??_7UIToggleButton@@6B@
    0x667F44 | protected: static int UIToggleButton::ToggleBMLoaded | ?ToggleBMLoaded@UIToggleButton@@1HA
*/

class UIToggleButton : UIButton
{
public:
    // UIToggleButton::`vftable' @ 0x593B20

    // 0x4B1410 | ??0UIToggleButton@@QAE@XZ
    inline UIToggleButton()
    {
        // stub<member_func_t<void, UIToggleButton>>(0x4B1410, this);

        unimplemented();
    }

    // 0x4B1500 | ?Init@UIToggleButton@@QAEXPAULocString@@PAHMMMMHHVCallback@@@Z
    inline void Init(struct LocString* arg1, int32_t* arg2, float arg3, float arg4, float arg5, float arg6,
        int32_t arg7, int32_t arg8, class Callback arg9)
    {
        return stub<member_func_t<void, UIToggleButton, struct LocString*, int32_t*, float, float, float, float,
            int32_t, int32_t, class Callback>>(0x4B1500, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x667F44 | ?ToggleBMLoaded@UIToggleButton@@1HA
    static inline extern_var(0x667F44, int32_t, ToggleBMLoaded);

    // 0x4B1490 | ??1UIToggleButton@@UAE@XZ
    inline ~UIToggleButton() override = 0
    {
        // stub<member_func_t<void, UIToggleButton>>(0x4B1490, this);

        unimplemented();
    }

    // 0x4B16A0 | ?Update@UIToggleButton@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIToggleButton>>(0x4B16A0, this);
    }

    // 0x4B1600 | ?Action@UIToggleButton@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UIToggleButton, union eqEvent>>(0x4B1600, this, arg1);
    }

    // 0x4B15E0 | ?DoToggle@UIToggleButton@@UAEXXZ
    virtual inline void DoToggle()
    {
        return stub<member_func_t<void, UIToggleButton>>(0x4B15E0, this);
    }

    // 0x4B15A0 | ?DrawOff@UIToggleButton@@MAEXXZ
    virtual inline void DrawOff()
    {
        return stub<member_func_t<void, UIToggleButton>>(0x4B15A0, this);
    }

    // 0x4B15C0 | ?DrawOn@UIToggleButton@@MAEXXZ
    virtual inline void DrawOn()
    {
        return stub<member_func_t<void, UIToggleButton>>(0x4B15C0, this);
    }
};
