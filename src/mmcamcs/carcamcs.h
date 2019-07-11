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

// mmcamcs:carcamcs

#include "hooking.h"

// 0x67B790 | ?CarCamCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B790, class MetaClass, CarCamCSMetaClass);

// 0x4ED800 | ?new_CarCamCS@@YAPAXH@Z
inline void* new_CarCamCS(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4ED800, arg1);
}

// 0x4ED8D0 | ?delete_CarCamCS@@YAXPAXH@Z
inline void delete_CarCamCS(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4ED8D0, arg1, arg2);
}

class CarCamCS : AppCamCS
{
public:
    // CarCamCS::`vftable' @ 0x594DE0

    // 0x4ED750 | ??0CarCamCS@@QAE@XZ
    inline CarCamCS()
    {
        stub<member_func_t<void, CarCamCS>>(0x4ED750, this);
    }

    // 0x4ED780 | ?Init@CarCamCS@@QAEXPAVmmCar@@PAD@Z
    inline void Init(class mmCar* arg1, char* arg2)
    {
        return stub<member_func_t<void, CarCamCS, class mmCar*, char*>>(0x4ED780, this, arg1, arg2);
    }

    // 0x4ED7B0 | ?DeclareFields@CarCamCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4ED7B0);
    }

    // 0x4ED770 | ??1CarCamCS@@UAE@XZ
    inline ~CarCamCS() override
    {
        stub<member_func_t<void, CarCamCS>>(0x4ED770, this);
    }

    // 0x4ED920 | ?GetClass@CarCamCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, CarCamCS>>(0x4ED920, this);
    }
};
