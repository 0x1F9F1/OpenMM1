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
    mmcar:carsimcheap

    0x46C440 | public: __thiscall mmWheelCheap::mmWheelCheap(void) | ??0mmWheelCheap@@QAE@XZ
    0x46C510 | public: void __thiscall mmWheelCheap::Init(class Vector3 *,class aiVehicleData *,class asInertialCS *) | ?Init@mmWheelCheap@@QAEXPAVVector3@@PAVaiVehicleData@@PAVasInertialCS@@@Z
    0x46C5E0 | public: virtual void __thiscall mmWheelCheap::Update(void) | ?Update@mmWheelCheap@@UAEXXZ
    0x46CD50 | public: virtual void __thiscall mmWheelCheap::Reset(void) | ?Reset@mmWheelCheap@@UAEXXZ
    0x46CD70 | public: virtual void * __thiscall mmWheelCheap::`scalar deleting destructor'(unsigned int) | ??_GmmWheelCheap@@UAEPAXI@Z
    0x46CD70 | public: virtual void * __thiscall mmWheelCheap::`vector deleting destructor'(unsigned int) | ??_EmmWheelCheap@@UAEPAXI@Z
    0x5911B8 | const mmWheelCheap::`vftable' | ??_7mmWheelCheap@@6B@
    0x60A20C | float EggFriction | ?EggFriction@@3MA
*/

// 0x60A20C | ?EggFriction@@3MA
inline extern_var(0x60A20C, float, EggFriction);

struct mmWheelCheap : asLinearCS
{
public:
    // mmWheelCheap::`vftable' @ 0x5911B8

    // 0x46C440 | ??0mmWheelCheap@@QAE@XZ
    inline mmWheelCheap()
    {
        // stub<member_func_t<void, mmWheelCheap>>(0x46C440, this);

        unimplemented();
    }

    // 0x46C510 | ?Init@mmWheelCheap@@QAEXPAVVector3@@PAVaiVehicleData@@PAVasInertialCS@@@Z
    inline void Init(class Vector3* arg1, class aiVehicleData* arg2, class asInertialCS* arg3)
    {
        return stub<member_func_t<void, mmWheelCheap, class Vector3*, class aiVehicleData*, class asInertialCS*>>(
            0x46C510, this, arg1, arg2, arg3);
    }

    // 0x44D490 | ??1mmWheelCheap@@UAE@XZ
    inline ~mmWheelCheap() override = 0
    {
        // stub<member_func_t<void, mmWheelCheap>>(0x44D490, this);

        unimplemented();
    }

    // 0x46C5E0 | ?Update@mmWheelCheap@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmWheelCheap>>(0x46C5E0, this);
    }

    // 0x46CD50 | ?Reset@mmWheelCheap@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmWheelCheap>>(0x46CD50, this);
    }
};
