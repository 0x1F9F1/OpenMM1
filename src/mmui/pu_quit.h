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
    mmui:pu_quit

    0x49F810 | public: __thiscall PUQuit::PUQuit(int,float,float,float,float,char *) | ??0PUQuit@@QAE@HMMMMPAD@Z
    0x49F950 | public: virtual __thiscall PUQuit::~PUQuit(void) | ??1PUQuit@@UAE@XZ
    0x49F960 | public: virtual void * __thiscall PUQuit::`vector deleting destructor'(unsigned int) | ??_EPUQuit@@UAEPAXI@Z
    0x49F960 | public: virtual void * __thiscall PUQuit::`scalar deleting destructor'(unsigned int) | ??_GPUQuit@@UAEPAXI@Z
    0x592E98 | const PUQuit::`vftable' | ??_7PUQuit@@6B@
*/

struct PUQuit : PUMenuBase
{
public:
    // PUQuit::`vftable' @ 0x592E98

    // 0x49F810 | ??0PUQuit@@QAE@HMMMMPAD@Z
    inline PUQuit(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, PUQuit, int32_t, float, float, float, float, char*>>(
            0x49F810, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x49F950 | ??1PUQuit@@UAE@XZ
    inline ~PUQuit() override = 0
    {
        // stub<member_func_t<void, PUQuit>>(0x49F950, this);

        unimplemented();
    }
};
