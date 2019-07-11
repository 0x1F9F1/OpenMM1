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

// mmai:aiPoliceForce

#include "hooking.h"

struct aiPoliceForce
{
public:
    // 0x448890 | ??0aiPoliceForce@@QAE@XZ
    inline aiPoliceForce()
    {
        stub<member_func_t<void, aiPoliceForce>>(0x448890, this);
    }

    // 0x4488B0 | ??1aiPoliceForce@@QAE@XZ
    inline ~aiPoliceForce()
    {
        stub<member_func_t<void, aiPoliceForce>>(0x4488B0, this);
    }

    // 0x4488C0 | ?Reset@aiPoliceForce@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, aiPoliceForce>>(0x4488C0, this);
    }

    // 0x448900 | ?Update@aiPoliceForce@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, aiPoliceForce>>(0x448900, this);
    }

    // 0x448910 | ?Find@aiPoliceForce@@QAEHPAVmmCar@@0@Z
    inline int32_t Find(class mmCar* arg1, class mmCar* arg2)
    {
        return stub<member_func_t<int32_t, aiPoliceForce, class mmCar*, class mmCar*>>(0x448910, this, arg1, arg2);
    }

    // 0x448980 | ?RegisterPerp@aiPoliceForce@@QAEHPAVmmCar@@0@Z
    inline int32_t RegisterPerp(class mmCar* arg1, class mmCar* arg2)
    {
        return stub<member_func_t<int32_t, aiPoliceForce, class mmCar*, class mmCar*>>(0x448980, this, arg1, arg2);
    }

    // 0x448A20 | ?UnRegisterCop@aiPoliceForce@@QAEHPAVmmCar@@0@Z
    inline int32_t UnRegisterCop(class mmCar* arg1, class mmCar* arg2)
    {
        return stub<member_func_t<int32_t, aiPoliceForce, class mmCar*, class mmCar*>>(0x448A20, this, arg1, arg2);
    }

    // 0x448B10 | ?State@aiPoliceForce@@QAEHPAVmmCar@@0M@Z
    inline int32_t State(class mmCar* arg1, class mmCar* arg2, float arg3)
    {
        return stub<member_func_t<int32_t, aiPoliceForce, class mmCar*, class mmCar*, float>>(
            0x448B10, this, arg1, arg2, arg3);
    }
};
