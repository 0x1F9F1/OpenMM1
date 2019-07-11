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

// mmgame:netobject

#include "hooking.h"

// 0x609B50 | ?time_delta@@3MA
inline extern_var(0x609B50, float, time_delta);

struct mmNetObject : asNetObject
{
public:
    // mmNetObject::`vftable' @ 0x590228

    // 0x42D4A0 | ??0mmNetObject@@QAE@XZ
    inline mmNetObject()
    {
        stub<member_func_t<void, mmNetObject>>(0x42D4A0, this);
    }

    // 0x42D560 | ?Clear@mmNetObject@@QAEXXZ
    inline void Clear()
    {
        return stub<member_func_t<void, mmNetObject>>(0x42D560, this);
    }

    // 0x42D5B0 | ?Activate@mmNetObject@@QAEXXZ
    inline void Activate()
    {
        return stub<member_func_t<void, mmNetObject>>(0x42D5B0, this);
    }

    // 0x42D600 | ?Deactivate@mmNetObject@@QAEXXZ
    inline void Deactivate()
    {
        return stub<member_func_t<void, mmNetObject>>(0x42D600, this);
    }

    // 0x42D650 | ?Init@mmNetObject@@QAEXPAVmmCar@@PADHK1@Z
    inline void Init(class mmCar* arg1, char* arg2, int32_t arg3, uint32_t arg4, char* arg5)
    {
        return stub<member_func_t<void, mmNetObject, class mmCar*, char*, int32_t, uint32_t, char*>>(
            0x42D650, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x42D6C0 | ?ReInit@mmNetObject@@QAEXPAVmmCar@@PADHK1@Z
    inline void ReInit(class mmCar* arg1, char* arg2, int32_t arg3, uint32_t arg4, char* arg5)
    {
        return stub<member_func_t<void, mmNetObject, class mmCar*, char*, int32_t, uint32_t, char*>>(
            0x42D6C0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x42D770 | ?SetCar@mmNetObject@@QAEXPAVmmCar@@@Z
    inline void SetCar(class mmCar* arg1)
    {
        return stub<member_func_t<void, mmNetObject, class mmCar*>>(0x42D770, this, arg1);
    }

    // 0x42D780 | ?SetActive@mmNetObject@@QAEXH@Z
    inline void SetActive(int32_t arg1)
    {
        return stub<member_func_t<void, mmNetObject, int32_t>>(0x42D780, this, arg1);
    }

    // 0x42D7A0 | ?SetScore@mmNetObject@@QAEXH@Z
    inline void SetScore(int32_t arg1)
    {
        return stub<member_func_t<void, mmNetObject, int32_t>>(0x42D7A0, this, arg1);
    }

    // 0x42D8F0 | ?PositionUpdate@mmNetObject@@QAEXPAUNETGAME_MSG@@@Z
    inline void PositionUpdate(struct NETGAME_MSG* arg1)
    {
        return stub<member_func_t<void, mmNetObject, struct NETGAME_MSG*>>(0x42D8F0, this, arg1);
    }

    // 0x42DC70 | ?Predict@mmNetObject@@QAEXXZ
    inline void Predict()
    {
        return stub<member_func_t<void, mmNetObject>>(0x42DC70, this);
    }

    // 0x42D550 | ??1mmNetObject@@UAE@XZ
    inline ~mmNetObject() override
    {
        stub<member_func_t<void, mmNetObject>>(0x42D550, this);
    }

    // 0x42DE10 | ?Update@mmNetObject@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmNetObject>>(0x42DE10, this);
    }

    // 0x42D7B0 | ?SetLocalData@mmNetObject@@UAEXXZ
    inline void SetLocalData() override
    {
        return stub<member_func_t<void, mmNetObject>>(0x42D7B0, this);
    }
};
