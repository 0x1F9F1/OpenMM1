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

// mmai:aiTrafficLight

#include "hooking.h"

struct aiTrafficLightSet : asNode
{
public:
    // aiTrafficLightSet::`vftable' @ 0x590578

    // 0x43E5D0 | ??0aiTrafficLightSet@@QAE@PAVaiIntersection@@@Z
    inline aiTrafficLightSet(class aiIntersection* arg1)
    {
        stub<member_func_t<void, aiTrafficLightSet, class aiIntersection*>>(0x43E5D0, this, arg1);
    }

    // 0x609D10 | ?ObjCount@aiTrafficLightSet@@0FA
    static inline extern_var(0x609D10, int16_t, ObjCount);

    // 0x43E7C0 | ??1aiTrafficLightSet@@UAE@XZ
    inline ~aiTrafficLightSet() override
    {
        stub<member_func_t<void, aiTrafficLightSet>>(0x43E7C0, this);
    }

    // 0x43E8C0 | ?Update@aiTrafficLightSet@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiTrafficLightSet>>(0x43E8C0, this);
    }

    // 0x43E820 | ?Reset@aiTrafficLightSet@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiTrafficLightSet>>(0x43E820, this);
    }
};

struct aiTrafficLightInstance : mmUnhitBangerInstance
{
public:
    // aiTrafficLightInstance::`vftable' @ 0x590520

    // 0x43EDA0 | ??1aiTrafficLightInstance@@UAE@XZ
    inline ~aiTrafficLightInstance() override
    {
        stub<member_func_t<void, aiTrafficLightInstance>>(0x43EDA0, this);
    }

    // 0x43EBA0 | ?Draw@aiTrafficLightInstance@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, aiTrafficLightInstance, int32_t>>(0x43EBA0, this, arg1);
    }

    // 0x43E9A0 | ?Init@aiTrafficLightInstance@@UAEHPADAAVVector3@@1H0@Z
    inline int32_t Init(char* arg1, class Vector3& arg2, class Vector3& arg3, int32_t arg4, char* arg5) override
    {
        return stub<
            member_func_t<int32_t, aiTrafficLightInstance, char*, class Vector3&, class Vector3&, int32_t, char*>>(
            0x43E9A0, this, arg1, arg2, arg3, arg4, arg5);
    }
};
