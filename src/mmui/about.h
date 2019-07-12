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
    mmui:about

    0x48F1B0 | void __cdecl GetMidtownRegString(char *,int,char *,char *) | ?GetMidtownRegString@@YAXPADH00@Z
    0x48F230 | public: __thiscall AboutMenu::AboutMenu(int) | ??0AboutMenu@@QAE@H@Z
    0x48F400 | public: virtual __thiscall AboutMenu::~AboutMenu(void) | ??1AboutMenu@@UAE@XZ
    0x48F410 | public: virtual void __thiscall AboutMenu::PreSetup(void) | ?PreSetup@AboutMenu@@UAEXXZ
    0x48F430 | public: virtual void __thiscall AboutMenu::Update(void) | ?Update@AboutMenu@@UAEXXZ
    0x48F4B0 | public: virtual void __thiscall AboutMenu::Cull(void) | ?Cull@AboutMenu@@UAEXXZ
    0x48F570 | public: virtual void * __thiscall AboutMenu::`scalar deleting destructor'(unsigned int) | ??_GAboutMenu@@UAEPAXI@Z
    0x48F570 | public: virtual void * __thiscall AboutMenu::`vector deleting destructor'(unsigned int) | ??_EAboutMenu@@UAEPAXI@Z
    0x48F5A0 | public: virtual int __thiscall UIMenu::IsAnOptionMenu(void) | ?IsAnOptionMenu@UIMenu@@UAEHXZ
    0x592268 | const AboutMenu::`vftable' | ??_7AboutMenu@@6B@
*/

#include "hooking.h"

// 0x48F1B0 | ?GetMidtownRegString@@YAXPADH00@Z
inline void GetMidtownRegString(char* arg1, int32_t arg2, char* arg3, char* arg4)
{
    return stub<cdecl_t<void, char*, int32_t, char*, char*>>(0x48F1B0, arg1, arg2, arg3, arg4);
}

struct AboutMenu : UIMenu
{
public:
    // AboutMenu::`vftable' @ 0x592268

    // 0x48F230 | ??0AboutMenu@@QAE@H@Z
    inline AboutMenu(int32_t arg1)
    {
        // stub<member_func_t<void, AboutMenu, int32_t>>(0x48F230, this, arg1);

        unimplemented();
    }

    // 0x48F400 | ??1AboutMenu@@UAE@XZ
    inline ~AboutMenu() override = 0
    {
        // stub<member_func_t<void, AboutMenu>>(0x48F400, this);

        unimplemented();
    }

    // 0x48F4B0 | ?Cull@AboutMenu@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, AboutMenu>>(0x48F4B0, this);
    }

    // 0x48F430 | ?Update@AboutMenu@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, AboutMenu>>(0x48F430, this);
    }

    // 0x48F410 | ?PreSetup@AboutMenu@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, AboutMenu>>(0x48F410, this);
    }
};
