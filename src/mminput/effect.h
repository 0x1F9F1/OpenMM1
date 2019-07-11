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

// mminput:effect

#include "hooking.h"

// 0x4DA0B0 | ?inputEnumEffectTypeProc@@YGHPBUDIEFFECTINFOA@@PAX@Z
inline int32_t inputEnumEffectTypeProc(struct DIEFFECTINFOA const* arg1, void* arg2)
{
    return stub<stdcall_t<int32_t, struct DIEFFECTINFOA const*, void*>>(0x4DA0B0, arg1, arg2);
}

class mmEffectFF
{
public:
    // mmEffectFF::`vftable' @ 0x594808

    // 0x4DA110 | ??0mmEffectFF@@QAE@XZ
    inline mmEffectFF()
    {
        stub<member_func_t<void, mmEffectFF>>(0x4DA110, this);
    }

    // 0x4DA180 | ??1mmEffectFF@@QAE@XZ
    inline ~mmEffectFF()
    {
        stub<member_func_t<void, mmEffectFF>>(0x4DA180, this);
    }

    // 0x567350 | __purecall

    // 0x4DA1A0 | ?Play@mmEffectFF@@UAEHXZ
    virtual inline int32_t Play()
    {
        return stub<member_func_t<int32_t, mmEffectFF>>(0x4DA1A0, this);
    }

    // 0x4DA1B0 | ?Stop@mmEffectFF@@UAEHXZ
    virtual inline int32_t Stop()
    {
        return stub<member_func_t<int32_t, mmEffectFF>>(0x4DA1B0, this);
    }

    // 0x4DA1C0 | ?SetValues@mmEffectFF@@UAEHMM@Z
    virtual inline int32_t SetValues(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, mmEffectFF, float, float>>(0x4DA1C0, this, arg1, arg2);
    }
};
