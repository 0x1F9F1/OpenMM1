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
    mmui:vshow

    0x499EE0 | public: __thiscall VehShowcase::VehShowcase(int) | ??0VehShowcase@@QAE@H@Z
    0x49A030 | public: virtual __thiscall VehShowcase::~VehShowcase(void) | ??1VehShowcase@@UAE@XZ
    0x49A090 | public: virtual void __thiscall VehShowcase::PreSetup(void) | ?PreSetup@VehShowcase@@UAEXXZ
    0x49A100 | public: virtual void __thiscall VehShowcase::PostSetup(void) | ?PostSetup@VehShowcase@@UAEXXZ
    0x49A110 | public: virtual void * __thiscall VehShowcase::`scalar deleting destructor'(unsigned int) | ??_GVehShowcase@@UAEPAXI@Z
    0x49A110 | public: virtual void * __thiscall VehShowcase::`vector deleting destructor'(unsigned int) | ??_EVehShowcase@@UAEPAXI@Z
    0x592968 | const VehShowcase::`vftable' | ??_7VehShowcase@@6B@
*/

#include "hooking.h"

struct VehShowcase : UIMenu
{
public:
    // VehShowcase::`vftable' @ 0x592968

    // 0x499EE0 | ??0VehShowcase@@QAE@H@Z
    inline VehShowcase(int32_t arg1)
    {
        stub<member_func_t<void, VehShowcase, int32_t>>(0x499EE0, this, arg1);
    }

    // 0x49A030 | ??1VehShowcase@@UAE@XZ
    inline ~VehShowcase() override
    {
        stub<member_func_t<void, VehShowcase>>(0x49A030, this);
    }

    // 0x49A090 | ?PreSetup@VehShowcase@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, VehShowcase>>(0x49A090, this);
    }

    // 0x49A100 | ?PostSetup@VehShowcase@@UAEXXZ
    inline void PostSetup() override
    {
        return stub<member_func_t<void, VehShowcase>>(0x49A100, this);
    }
};
