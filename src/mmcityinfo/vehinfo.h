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
    mmcityinfo:vehinfo

    0x4C7D10 | public: __thiscall mmVehInfo::mmVehInfo(void) | ??0mmVehInfo@@QAE@XZ
    0x4C7D30 | public: virtual __thiscall mmVehInfo::~mmVehInfo(void) | ??1mmVehInfo@@UAE@XZ
    0x4C7D40 | public: int __thiscall mmVehInfo::Load(char *) | ?Load@mmVehInfo@@QAEHPAD@Z
    0x4C7F20 | public: int __thiscall mmVehInfo::HasColorVariations(void) | ?HasColorVariations@mmVehInfo@@QAEHXZ
    0x4C7F40 | public: void __thiscall mmVehInfo::Print(void) | ?Print@mmVehInfo@@QAEXXZ
    0x4C7FD0 | public: virtual void * __thiscall mmVehInfo::`scalar deleting destructor'(unsigned int) | ??_GmmVehInfo@@UAEPAXI@Z
    0x4C7FD0 | public: virtual void * __thiscall mmVehInfo::`vector deleting destructor'(unsigned int) | ??_EmmVehInfo@@UAEPAXI@Z
    0x5944B8 | const mmVehInfo::`vftable' | ??_7mmVehInfo@@6B@
*/

#include "hooking.h"

class mmVehInfo
{
public:
    // mmVehInfo::`vftable' @ 0x5944B8

    // 0x491380 | ?IsValid@mmVehInfo@@QAEHXZ
    inline int32_t IsValid()
    {
        return stub<member_func_t<int32_t, mmVehInfo>>(0x491380, this);
    }

    // 0x4C7D10 | ??0mmVehInfo@@QAE@XZ
    inline mmVehInfo()
    {
        stub<member_func_t<void, mmVehInfo>>(0x4C7D10, this);
    }

    // 0x4C7D40 | ?Load@mmVehInfo@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, mmVehInfo, char*>>(0x4C7D40, this, arg1);
    }

    // 0x4C7F20 | ?HasColorVariations@mmVehInfo@@QAEHXZ
    inline int32_t HasColorVariations()
    {
        return stub<member_func_t<int32_t, mmVehInfo>>(0x4C7F20, this);
    }

    // 0x4C7F40 | ?Print@mmVehInfo@@QAEXXZ
    inline void Print()
    {
        return stub<member_func_t<void, mmVehInfo>>(0x4C7F40, this);
    }

    // 0x4C7D30 | ??1mmVehInfo@@UAE@XZ
    virtual inline ~mmVehInfo()
    {
        stub<member_func_t<void, mmVehInfo>>(0x4C7D30, this);
    }
};
