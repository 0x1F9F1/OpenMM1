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
    mmwidget:controlwidget

    0x4B0A20 | public: __thiscall UIControlWidget::UIControlWidget(void) | ??0UIControlWidget@@QAE@XZ
    0x4B0B30 | public: virtual __thiscall UIControlWidget::~UIControlWidget(void) | ??1UIControlWidget@@UAE@XZ
    0x4B0BD0 | public: void __thiscall UIControlWidget::Init(float,float,float,float,float,class mmIO *,class Callback) | ?Init@UIControlWidget@@QAEXMMMMMPAVmmIO@@VCallback@@@Z
    0x4B0D80 | public: void __thiscall UIControlWidget::SetPosition(float,float,float,float) | ?SetPosition@UIControlWidget@@QAEXMMMM@Z
    0x4B0E40 | public: virtual void __thiscall UIControlWidget::Update(void) | ?Update@UIControlWidget@@UAEXXZ
    0x4B0E60 | public: void __thiscall UIControlWidget::UpdateField(void) | ?UpdateField@UIControlWidget@@QAEXXZ
    0x4B0E90 | public: virtual void __thiscall UIControlWidget::Action(union eqEvent) | ?Action@UIControlWidget@@UAEXTeqEvent@@@Z
    0x4B0EE0 | public: virtual void __thiscall UIControlWidget::Switch(int) | ?Switch@UIControlWidget@@UAEXH@Z
    0x4B0F60 | public: void __thiscall UIControlWidget::EnableField(void) | ?EnableField@UIControlWidget@@QAEXXZ
    0x4B0FD0 | public: void __thiscall UIControlWidget::DisableField(void) | ?DisableField@UIControlWidget@@QAEXXZ
    0x4B1020 | public: virtual void * __thiscall UIControlWidget::`scalar deleting destructor'(unsigned int) | ??_GUIControlWidget@@UAEPAXI@Z
    0x4B1050 | public: virtual void __thiscall UIControlWidget::TurnOn(void) | ?TurnOn@UIControlWidget@@UAEXXZ
    0x4B1060 | public: virtual void __thiscall UIControlWidget::TurnOff(void) | ?TurnOff@UIControlWidget@@UAEXXZ
    0x593A30 | const UIControlWidget::`vftable' | ??_7UIControlWidget@@6B@
*/

#include "hooking.h"

class UIControlWidget : uiWidget
{
public:
    // UIControlWidget::`vftable' @ 0x593A30

    // 0x4B0A20 | ??0UIControlWidget@@QAE@XZ
    inline UIControlWidget()
    {
        stub<member_func_t<void, UIControlWidget>>(0x4B0A20, this);
    }

    // 0x4B0BD0 | ?Init@UIControlWidget@@QAEXMMMMMPAVmmIO@@VCallback@@@Z
    inline void Init(float arg1, float arg2, float arg3, float arg4, float arg5, class mmIO* arg6, class Callback arg7)
    {
        return stub<
            member_func_t<void, UIControlWidget, float, float, float, float, float, class mmIO*, class Callback>>(
            0x4B0BD0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4B0D80 | ?SetPosition@UIControlWidget@@QAEXMMMM@Z
    inline void SetPosition(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, UIControlWidget, float, float, float, float>>(
            0x4B0D80, this, arg1, arg2, arg3, arg4);
    }

    // 0x4B0E60 | ?UpdateField@UIControlWidget@@QAEXXZ
    inline void UpdateField()
    {
        return stub<member_func_t<void, UIControlWidget>>(0x4B0E60, this);
    }

    // 0x4B0F60 | ?EnableField@UIControlWidget@@QAEXXZ
    inline void EnableField()
    {
        return stub<member_func_t<void, UIControlWidget>>(0x4B0F60, this);
    }

    // 0x4B0FD0 | ?DisableField@UIControlWidget@@QAEXXZ
    inline void DisableField()
    {
        return stub<member_func_t<void, UIControlWidget>>(0x4B0FD0, this);
    }

    // 0x4B0B30 | ??1UIControlWidget@@UAE@XZ
    inline ~UIControlWidget() override
    {
        stub<member_func_t<void, UIControlWidget>>(0x4B0B30, this);
    }

    // 0x4B0E40 | ?Update@UIControlWidget@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIControlWidget>>(0x4B0E40, this);
    }

    // 0x4B1050 | ?TurnOn@UIControlWidget@@UAEXXZ
    inline void TurnOn() override
    {
        return stub<member_func_t<void, UIControlWidget>>(0x4B1050, this);
    }

    // 0x4B1060 | ?TurnOff@UIControlWidget@@UAEXXZ
    inline void TurnOff() override
    {
        return stub<member_func_t<void, UIControlWidget>>(0x4B1060, this);
    }

    // 0x4B0E90 | ?Action@UIControlWidget@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UIControlWidget, union eqEvent>>(0x4B0E90, this, arg1);
    }

    // 0x4B0EE0 | ?Switch@UIControlWidget@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UIControlWidget, int32_t>>(0x4B0EE0, this, arg1);
    }
};
