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
    mmui:pu_main

    0x49F990 | public: __thiscall PUMain::PUMain(int,float,float,float,float,char *) | ??0PUMain@@QAE@HMMMMPAD@Z
    0x49FB90 | public: virtual __thiscall PUMain::~PUMain(void) | ??1PUMain@@UAE@XZ
    0x49FBA0 | public: virtual void * __thiscall PUMain::`scalar deleting destructor'(unsigned int) | ??_GPUMain@@UAEPAXI@Z
    0x49FBA0 | public: virtual void * __thiscall PUMain::`vector deleting destructor'(unsigned int) | ??_EPUMain@@UAEPAXI@Z
    0x592EE0 | const PUMain::`vftable' | ??_7PUMain@@6B@
*/

#include "hooking.h"

struct PUMain : PUMenuBase
{
public:
    // PUMain::`vftable' @ 0x592EE0

    // 0x49F990 | ??0PUMain@@QAE@HMMMMPAD@Z
    inline PUMain(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, PUMain, int32_t, float, float, float, float, char*>>(
            0x49F990, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x49FB90 | ??1PUMain@@UAE@XZ
    inline ~PUMain() override = 0
    {
        // stub<member_func_t<void, PUMain>>(0x49FB90, this);

        unimplemented();
    }
};
