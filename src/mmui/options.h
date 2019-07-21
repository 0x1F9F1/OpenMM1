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
    mmui:options

    0x4988C0 | public: __thiscall OptionsMenu::OptionsMenu(int) | ??0OptionsMenu@@QAE@H@Z
    0x498A80 | public: virtual __thiscall OptionsMenu::~OptionsMenu(void) | ??1OptionsMenu@@UAE@XZ
    0x498A90 | public: virtual void __thiscall OptionsMenu::PreSetup(void) | ?PreSetup@OptionsMenu@@UAEXXZ
    0x498AC0 | public: virtual void __thiscall OptionsMenu::PostSetup(void) | ?PostSetup@OptionsMenu@@UAEXXZ
    0x498AE0 | public: virtual void * __thiscall OptionsMenu::`vector deleting destructor'(unsigned int) | ??_EOptionsMenu@@UAEPAXI@Z
    0x498AE0 | public: virtual void * __thiscall OptionsMenu::`scalar deleting destructor'(unsigned int) | ??_GOptionsMenu@@UAEPAXI@Z
    0x592868 | const OptionsMenu::`vftable' | ??_7OptionsMenu@@6B@
*/

struct OptionsMenu : UIMenu
{
public:
    // OptionsMenu::`vftable' @ 0x592868

    // 0x4988C0 | ??0OptionsMenu@@QAE@H@Z
    inline OptionsMenu(int32_t arg1)
    {
        // stub<member_func_t<void, OptionsMenu, int32_t>>(0x4988C0, this, arg1);

        unimplemented();
    }

    // 0x498A80 | ??1OptionsMenu@@UAE@XZ
    inline ~OptionsMenu() override = 0
    {
        // stub<member_func_t<void, OptionsMenu>>(0x498A80, this);

        unimplemented();
    }

    // 0x498A90 | ?PreSetup@OptionsMenu@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, OptionsMenu>>(0x498A90, this);
    }

    // 0x498AC0 | ?PostSetup@OptionsMenu@@UAEXXZ
    inline void PostSetup() override
    {
        return stub<member_func_t<void, OptionsMenu>>(0x498AC0, this);
    }
};
