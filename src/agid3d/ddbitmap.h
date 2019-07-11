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
    agid3d:ddbitmap

    0x51BAA0 | public: __thiscall agiDDBitmap::agiDDBitmap(class agiPipeline *) | ??0agiDDBitmap@@QAE@PAVagiPipeline@@@Z
    0x51BAD0 | public: virtual int __thiscall agiDDBitmap::BeginGfx(void) | ?BeginGfx@agiDDBitmap@@UAEHXZ
    0x51BD30 | public: virtual void __thiscall agiDDBitmap::UpdateFlags(void) | ?UpdateFlags@agiDDBitmap@@UAEXXZ
    0x51BD70 | public: virtual void __thiscall agiDDBitmap::EndGfx(void) | ?EndGfx@agiDDBitmap@@UAEXXZ
    0x51BDA0 | public: virtual __thiscall agiDDBitmap::~agiDDBitmap(void) | ??1agiDDBitmap@@UAE@XZ
    0x51BDF0 | void __cdecl breakme(void) | ?breakme@@YAXXZ
    0x51BE00 | public: virtual void __thiscall agiDDBitmap::Restore(void) | ?Restore@agiDDBitmap@@UAEXXZ
    0x51BE40 | public: virtual void * __thiscall agiDDBitmap::`vector deleting destructor'(unsigned int) | ??_EagiDDBitmap@@UAEPAXI@Z
    0x51BE40 | public: virtual void * __thiscall agiDDBitmap::`scalar deleting destructor'(unsigned int) | ??_GagiDDBitmap@@UAEPAXI@Z
    0x5958C0 | const agiDDBitmap::`vftable' | ??_7agiDDBitmap@@6B@
*/

#include "hooking.h"

// 0x51BDF0 | ?breakme@@YAXXZ
inline void breakme()
{
    return stub<cdecl_t<void>>(0x51BDF0);
}

struct agiDDBitmap : agiBitmap
{
public:
    // agiDDBitmap::`vftable' @ 0x5958C0

    // 0x51BAA0 | ??0agiDDBitmap@@QAE@PAVagiPipeline@@@Z
    inline agiDDBitmap(class agiPipeline* arg1)
    {
        stub<member_func_t<void, agiDDBitmap, class agiPipeline*>>(0x51BAA0, this, arg1);
    }

    // 0x51BD70 | ?EndGfx@agiDDBitmap@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiDDBitmap>>(0x51BD70, this);
    }

    // 0x51BE00 | ?Restore@agiDDBitmap@@UAEXXZ
    inline void Restore() override
    {
        return stub<member_func_t<void, agiDDBitmap>>(0x51BE00, this);
    }

    // 0x51BDA0 | ??1agiDDBitmap@@UAE@XZ
    inline ~agiDDBitmap() override
    {
        stub<member_func_t<void, agiDDBitmap>>(0x51BDA0, this);
    }

    // 0x51BAD0 | ?BeginGfx@agiDDBitmap@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiDDBitmap>>(0x51BAD0, this);
    }

    // 0x51BD30 | ?UpdateFlags@agiDDBitmap@@UAEXXZ
    inline void UpdateFlags() override
    {
        return stub<member_func_t<void, agiDDBitmap>>(0x51BD30, this);
    }
};
