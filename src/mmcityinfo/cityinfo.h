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

// mmcityinfo:cityinfo

#include "hooking.h"

class mmCityInfo
{
public:
    // mmCityInfo::`vftable' @ 0x5944B4

    // 0x4C7960 | ??0mmCityInfo@@QAE@XZ
    inline mmCityInfo()
    {
        stub<member_func_t<void, mmCityInfo>>(0x4C7960, this);
    }

    // 0x4C7990 | ?Load@mmCityInfo@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, mmCityInfo, char*>>(0x4C7990, this, arg1);
    }

    // 0x4C7980 | ??1mmCityInfo@@UAE@XZ
    virtual inline ~mmCityInfo()
    {
        stub<member_func_t<void, mmCityInfo>>(0x4C7980, this);
    }
};
