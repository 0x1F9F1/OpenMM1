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
    mmui:pu_options

    0x49F1D0 | public: __thiscall PUOptions::PUOptions(int,float,float,float,float) | ??0PUOptions@@QAE@HMMMM@Z
    0x49F340 | public: virtual __thiscall PUOptions::~PUOptions(void) | ??1PUOptions@@UAE@XZ
    0x49F350 | public: virtual void * __thiscall PUOptions::`scalar deleting destructor'(unsigned int) | ??_GPUOptions@@UAEPAXI@Z
    0x49F350 | public: virtual void * __thiscall PUOptions::`vector deleting destructor'(unsigned int) | ??_EPUOptions@@UAEPAXI@Z
    0x592DB8 | const PUOptions::`vftable' | ??_7PUOptions@@6B@
*/

#include "hooking.h"

struct PUOptions : PUMenuBase
{
public:
    // PUOptions::`vftable' @ 0x592DB8

    // 0x49F1D0 | ??0PUOptions@@QAE@HMMMM@Z
    inline PUOptions(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        stub<member_func_t<void, PUOptions, int32_t, float, float, float, float>>(
            0x49F1D0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x49F340 | ??1PUOptions@@UAE@XZ
    inline ~PUOptions() override
    {
        stub<member_func_t<void, PUOptions>>(0x49F340, this);
    }
};
