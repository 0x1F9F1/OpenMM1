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

// mmcityinfo:vehlist

#include "hooking.h"

// 0x66A814 | ?VehicleListPtr@@3PAVmmVehList@@A
inline extern_var(0x66A814, class mmVehList*, VehicleListPtr);

class mmVehList
{
public:
    // mmVehList::`vftable' @ 0x594408

    // 0x4C0580 | ??0mmVehList@@QAE@XZ
    inline mmVehList()
    {
        stub<member_func_t<void, mmVehList>>(0x4C0580, this);
    }

    // 0x4C0600 | ?Init@mmVehList@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, mmVehList, int32_t>>(0x4C0600, this, arg1);
    }

    // 0x4C0610 | ?GetVehicleInfo@mmVehList@@QAEPAVmmVehInfo@@H@Z
    inline class mmVehInfo* GetVehicleInfo(int32_t arg1)
    {
        return stub<member_func_t<class mmVehInfo*, mmVehList, int32_t>>(0x4C0610, this, arg1);
    }

    // 0x4C0640 | ?GetVehicleInfo@mmVehList@@QAEPAVmmVehInfo@@PAD@Z
    inline class mmVehInfo* GetVehicleInfo(char* arg1)
    {
        return stub<member_func_t<class mmVehInfo*, mmVehList, char*>>(0x4C0640, this, arg1);
    }

    // 0x4C06C0 | ?SetDefaultVehicle@mmVehList@@QAEXPAD@Z
    inline void SetDefaultVehicle(char* arg1)
    {
        return stub<member_func_t<void, mmVehList, char*>>(0x4C06C0, this, arg1);
    }

    // 0x4C0700 | ?GetVehicleID@mmVehList@@QAEHPAD@Z
    inline int32_t GetVehicleID(char* arg1)
    {
        return stub<member_func_t<int32_t, mmVehList, char*>>(0x4C0700, this, arg1);
    }

    // 0x4C0780 | ?Load@mmVehList@@QAEXPAD@Z
    inline void Load(char* arg1)
    {
        return stub<member_func_t<void, mmVehList, char*>>(0x4C0780, this, arg1);
    }

    // 0x4C08B0 | ?Print@mmVehList@@QAEXXZ
    inline void Print()
    {
        return stub<member_func_t<void, mmVehList>>(0x4C08B0, this);
    }

    // 0x4C0900 | ?LoadAll@mmVehList@@QAEXXZ
    inline void LoadAll()
    {
        return stub<member_func_t<void, mmVehList>>(0x4C0900, this);
    }

    // 0x4C05A0 | ??1mmVehList@@UAE@XZ
    virtual inline ~mmVehList()
    {
        stub<member_func_t<void, mmVehList>>(0x4C05A0, this);
    }
};
