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
    mmwidget:ttip

    0x4B4C60 | public: __thiscall mmToolTip::mmToolTip(void) | ??0mmToolTip@@QAE@XZ
    0x4B4CD0 | public: virtual __thiscall mmToolTip::~mmToolTip(void) | ??1mmToolTip@@UAE@XZ
    0x4B4D30 | public: void __thiscall mmToolTip::Init(class UIMenu *,struct LocString *) | ?Init@mmToolTip@@QAEXPAVUIMenu@@PAULocString@@@Z
    0x4B4DE0 | public: void __thiscall mmToolTip::SetText(struct LocString *) | ?SetText@mmToolTip@@QAEXPAULocString@@@Z
    0x4B4E00 | public: void __thiscall mmToolTip::Switch(int) | ?Switch@mmToolTip@@QAEXH@Z
    0x4B4E10 | public: virtual void __thiscall mmToolTip::Update(void) | ?Update@mmToolTip@@UAEXXZ
    0x4B4E20 | public: virtual void * __thiscall mmToolTip::`scalar deleting destructor'(unsigned int) | ??_GmmToolTip@@UAEPAXI@Z
    0x4B4E20 | public: virtual void * __thiscall mmToolTip::`vector deleting destructor'(unsigned int) | ??_EmmToolTip@@UAEPAXI@Z
    0x593E00 | const mmToolTip::`vftable' | ??_7mmToolTip@@6B@
*/

#include "hooking.h"

struct mmToolTip : asNode
{
public:
    // mmToolTip::`vftable' @ 0x593E00

    // 0x4B4C60 | ??0mmToolTip@@QAE@XZ
    inline mmToolTip()
    {
        stub<member_func_t<void, mmToolTip>>(0x4B4C60, this);
    }

    // 0x4B4D30 | ?Init@mmToolTip@@QAEXPAVUIMenu@@PAULocString@@@Z
    inline void Init(class UIMenu* arg1, struct LocString* arg2)
    {
        return stub<member_func_t<void, mmToolTip, class UIMenu*, struct LocString*>>(0x4B4D30, this, arg1, arg2);
    }

    // 0x4B4DE0 | ?SetText@mmToolTip@@QAEXPAULocString@@@Z
    inline void SetText(struct LocString* arg1)
    {
        return stub<member_func_t<void, mmToolTip, struct LocString*>>(0x4B4DE0, this, arg1);
    }

    // 0x4B4E00 | ?Switch@mmToolTip@@QAEXH@Z
    inline void Switch(int32_t arg1)
    {
        return stub<member_func_t<void, mmToolTip, int32_t>>(0x4B4E00, this, arg1);
    }

    // 0x4B4CD0 | ??1mmToolTip@@UAE@XZ
    inline ~mmToolTip() override
    {
        stub<member_func_t<void, mmToolTip>>(0x4B4CD0, this);
    }

    // 0x4B4E10 | ?Update@mmToolTip@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmToolTip>>(0x4B4E10, this);
    }
};
