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
    mmai:aiVehicle

    0x45E4F0 | public: __thiscall aiVehicle::aiVehicle(void) | ??0aiVehicle@@QAE@XZ
    0x45E510 | public: __thiscall aiVehicle::~aiVehicle(void) | ??1aiVehicle@@QAE@XZ
    0x45E520 | public: void __thiscall aiVehicle::Init(int) | ?Init@aiVehicle@@QAEXH@Z
    0x45E530 | public: virtual void __thiscall aiVehicle::Reset(void) | ?Reset@aiVehicle@@UAEXXZ
    0x45E540 | public: virtual void __thiscall aiVehicle::Update(void) | ?Update@aiVehicle@@UAEXXZ
    0x590CC8 | const aiVehicle::`vftable' | ??_7aiVehicle@@6B@
*/

#include "hooking.h"

struct aiVehicle
{
public:
    // aiVehicle::`vftable' @ 0x590CC8

    // 0x45E4F0 | ??0aiVehicle@@QAE@XZ
    inline aiVehicle()
    {
        stub<member_func_t<void, aiVehicle>>(0x45E4F0, this);
    }

    // 0x45E510 | ??1aiVehicle@@QAE@XZ
    inline ~aiVehicle()
    {
        stub<member_func_t<void, aiVehicle>>(0x45E510, this);
    }

    // 0x45E520 | ?Init@aiVehicle@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, aiVehicle, int32_t>>(0x45E520, this, arg1);
    }

    // 0x45E540 | ?Update@aiVehicle@@UAEXXZ
    virtual inline void Update()
    {
        return stub<member_func_t<void, aiVehicle>>(0x45E540, this);
    }

    // 0x45E530 | ?Reset@aiVehicle@@UAEXXZ
    virtual inline void Reset()
    {
        return stub<member_func_t<void, aiVehicle>>(0x45E530, this);
    }

    // 0x567350 | __purecall
    virtual inline int32_t Type()
    {
        return stub<member_func_t<int32_t, aiVehicle>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline void DrawId()
    {
        return stub<member_func_t<void, aiVehicle>>(0x567350, this);
    }
};
