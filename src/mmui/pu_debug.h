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
    mmui:pu_debug

    0x49EFE0 | public: __thiscall PUDebug::PUDebug(int,float,float,float,float) | ??0PUDebug@@QAE@HMMMM@Z
    0x49F180 | public: virtual __thiscall PUDebug::~PUDebug(void) | ??1PUDebug@@UAE@XZ
    0x49F190 | public: void __thiscall PUDebug::RecordCB(void) | ?RecordCB@PUDebug@@QAEXXZ
    0x49F1A0 | public: virtual void * __thiscall PUDebug::`scalar deleting destructor'(unsigned int) | ??_GPUDebug@@UAEPAXI@Z
    0x49F1A0 | public: virtual void * __thiscall PUDebug::`vector deleting destructor'(unsigned int) | ??_EPUDebug@@UAEPAXI@Z
    0x592D70 | const PUDebug::`vftable' | ??_7PUDebug@@6B@
*/

#include "hooking.h"

struct PUDebug : PUMenuBase
{
public:
    // PUDebug::`vftable' @ 0x592D70

    // 0x49EFE0 | ??0PUDebug@@QAE@HMMMM@Z
    inline PUDebug(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        stub<member_func_t<void, PUDebug, int32_t, float, float, float, float>>(
            0x49EFE0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x49F190 | ?RecordCB@PUDebug@@QAEXXZ
    inline void RecordCB()
    {
        return stub<member_func_t<void, PUDebug>>(0x49F190, this);
    }

    // 0x49F180 | ??1PUDebug@@UAE@XZ
    inline ~PUDebug() override
    {
        stub<member_func_t<void, PUDebug>>(0x49F180, this);
    }
};
