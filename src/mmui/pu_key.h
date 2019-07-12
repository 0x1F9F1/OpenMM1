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
    mmui:pu_key

    0x49DFB0 | public: __thiscall PUKey::PUKey(int,float,float,float,float) | ??0PUKey@@QAE@HMMMM@Z
    0x49E050 | public: virtual __thiscall PUKey::~PUKey(void) | ??1PUKey@@UAE@XZ
    0x49E060 | private: virtual void __thiscall PUKey::PreSetup(void) | ?PreSetup@PUKey@@EAEXXZ
    0x49E300 | private: virtual void __thiscall PUKey::PostSetup(void) | ?PostSetup@PUKey@@EAEXXZ
    0x49E340 | public: virtual void * __thiscall PUKey::`vector deleting destructor'(unsigned int) | ??_EPUKey@@UAEPAXI@Z
    0x49E340 | public: virtual void * __thiscall PUKey::`scalar deleting destructor'(unsigned int) | ??_GPUKey@@UAEPAXI@Z
    0x592BF0 | const PUKey::`vftable' | ??_7PUKey@@6B@
*/

#include "hooking.h"

struct PUKey : PUMenuBase
{
public:
    // PUKey::`vftable' @ 0x592BF0

    // 0x49DFB0 | ??0PUKey@@QAE@HMMMM@Z
    inline PUKey(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        stub<member_func_t<void, PUKey, int32_t, float, float, float, float>>(
            0x49DFB0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x49E050 | ??1PUKey@@UAE@XZ
    inline ~PUKey() override = 0
    {
        // stub<member_func_t<void, PUKey>>(0x49E050, this);

        unimplemented();
    }

    // 0x49E060 | ?PreSetup@PUKey@@EAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, PUKey>>(0x49E060, this);
    }

    // 0x49E300 | ?PostSetup@PUKey@@EAEXXZ
    inline void PostSetup() override
    {
        return stub<member_func_t<void, PUKey>>(0x49E300, this);
    }
};
