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

// mmui:vselect

#include "hooking.h"

struct VehicleSelectBase : UIMenu
{
public:
    // VehicleSelectBase::`vftable' @ 0x5922D0

    // 0x48F5B0 | ??0VehicleSelectBase@@QAE@H@Z
    inline VehicleSelectBase(int32_t arg1)
    {
        stub<member_func_t<void, VehicleSelectBase, int32_t>>(0x48F5B0, this, arg1);
    }

    // 0x48F710 | ?IncColor@VehicleSelectBase@@QAEXXZ
    inline void IncColor()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x48F710, this);
    }

    // 0x48F7D0 | ?DecColor@VehicleSelectBase@@QAEXXZ
    inline void DecColor()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x48F7D0, this);
    }

    // 0x48F890 | ?ColorCB@VehicleSelectBase@@QAEXXZ
    inline void ColorCB()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x48F890, this);
    }

    // 0x48F8B0 | ?InitCarSelection@VehicleSelectBase@@QAEXHMMMM@Z
    inline void InitCarSelection(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        return stub<member_func_t<void, VehicleSelectBase, int32_t, float, float, float, float>>(
            0x48F8B0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x490790 | ?AllSetCar@VehicleSelectBase@@QAEXPADH@Z
    inline void AllSetCar(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, VehicleSelectBase, char*, int32_t>>(0x490790, this, arg1, arg2);
    }

    // 0x4907E0 | ?TDPickCB@VehicleSelectBase@@QAEXXZ
    inline void TDPickCB()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4907E0, this);
    }

    // 0x4908A0 | ?GetCarTitle@VehicleSelectBase@@QAEPADHPADFPAVstring@@@Z
    inline char* GetCarTitle(int32_t arg1, char* arg2, int16_t arg3, class string* arg4)
    {
        return stub<member_func_t<char*, VehicleSelectBase, int32_t, char*, int16_t, class string*>>(
            0x4908A0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4909D0 | ?CurrentVehicleIsLocked@VehicleSelectBase@@QAEHXZ
    inline int32_t CurrentVehicleIsLocked()
    {
        return stub<member_func_t<int32_t, VehicleSelectBase>>(0x4909D0, this);
    }

    // 0x4909F0 | ?SetLastUnlockedVehicle@VehicleSelectBase@@QAEXXZ
    inline void SetLastUnlockedVehicle()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4909F0, this);
    }

    // 0x490A50 | ?CarMod@VehicleSelectBase@@QAEXAAH@Z
    inline void CarMod(int32_t& arg1)
    {
        return stub<member_func_t<void, VehicleSelectBase, int32_t&>>(0x490A50, this, arg1);
    }

    // 0x490A80 | ?SetPick@VehicleSelectBase@@QAEXHF@Z
    inline void SetPick(int32_t arg1, int16_t arg2)
    {
        return stub<member_func_t<void, VehicleSelectBase, int32_t, int16_t>>(0x490A80, this, arg1, arg2);
    }

    // 0x490D60 | ?LoadStats@VehicleSelectBase@@QAEHPAD@Z
    inline int32_t LoadStats(char* arg1)
    {
        return stub<member_func_t<int32_t, VehicleSelectBase, char*>>(0x490D60, this, arg1);
    }

    // 0x490E00 | ?AssignVehicleStats@VehicleSelectBase@@QAEXHMMMM@Z
    inline void AssignVehicleStats(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        return stub<member_func_t<void, VehicleSelectBase, int32_t, float, float, float, float>>(
            0x490E00, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x490FE0 | ?FillStats@VehicleSelectBase@@QAEXXZ
    inline void FillStats()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x490FE0, this);
    }

    // 0x491030 | ?SetLockedLabel@VehicleSelectBase@@QAEXXZ
    inline void SetLockedLabel()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x491030, this);
    }

    // 0x4912F0 | ?DecCar@VehicleSelectBase@@QAEXXZ
    inline void DecCar()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4912F0, this);
    }

    // 0x491300 | ?IncCar@VehicleSelectBase@@QAEXXZ
    inline void IncCar()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x491300, this);
    }

    // 0x491310 | ?SetShowcaseFlag@VehicleSelectBase@@QAEXXZ
    inline void SetShowcaseFlag()
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x491310, this);
    }

    // 0x4905E0 | ??1VehicleSelectBase@@UAE@XZ
    inline ~VehicleSelectBase() override
    {
        stub<member_func_t<void, VehicleSelectBase>>(0x4905E0, this);
    }

    // 0x490800 | ?Update@VehicleSelectBase@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x490800, this);
    }

    // 0x4907F0 | ?Reset@VehicleSelectBase@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x4907F0, this);
    }

    // 0x490680 | ?PreSetup@VehicleSelectBase@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x490680, this);
    }

    // 0x490770 | ?PostSetup@VehicleSelectBase@@UAEXXZ
    inline void PostSetup() override
    {
        return stub<member_func_t<void, VehicleSelectBase>>(0x490770, this);
    }
};
