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
    mmui:pu_exit

    0x49F690 | public: __thiscall PUExit::PUExit(int,float,float,float,float,char *) | ??0PUExit@@QAE@HMMMMPAD@Z
    0x49F7D0 | public: virtual __thiscall PUExit::~PUExit(void) | ??1PUExit@@UAE@XZ
    0x49F7E0 | public: virtual void * __thiscall PUExit::`vector deleting destructor'(unsigned int) | ??_EPUExit@@UAEPAXI@Z
    0x49F7E0 | public: virtual void * __thiscall PUExit::`scalar deleting destructor'(unsigned int) | ??_GPUExit@@UAEPAXI@Z
    0x592E50 | const PUExit::`vftable' | ??_7PUExit@@6B@
*/

#include "hooking.h"

struct PUExit : PUMenuBase
{
public:
    // PUExit::`vftable' @ 0x592E50

    // 0x49F690 | ??0PUExit@@QAE@HMMMMPAD@Z
    inline PUExit(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, PUExit, int32_t, float, float, float, float, char*>>(
            0x49F690, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x49F7D0 | ??1PUExit@@UAE@XZ
    inline ~PUExit() override = 0
    {
        // stub<member_func_t<void, PUExit>>(0x49F7D0, this);

        unimplemented();
    }
};
