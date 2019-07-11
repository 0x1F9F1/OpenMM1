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

// mmcamcs:precamcs

#include "hooking.h"

// 0x67B6C8 | ?PreCamCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B6C8, class MetaClass, PreCamCSMetaClass);

// 0x4EC150 | ?new_PreCamCS@@YAPAXH@Z
inline void* new_PreCamCS(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4EC150, arg1);
}

// 0x4EC220 | ?delete_PreCamCS@@YAXPAXH@Z
inline void delete_PreCamCS(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4EC220, arg1, arg2);
}

struct PreCamCS : CarCamCS
{
public:
    // PreCamCS::`vftable' @ 0x594C60

    // 0x4EBFC0 | ??0PreCamCS@@QAE@XZ
    inline PreCamCS()
    {
        stub<member_func_t<void, PreCamCS>>(0x4EBFC0, this);
    }

    // 0x4EC010 | ?Init@PreCamCS@@QAEXPAVmmCar@@@Z
    inline void Init(class mmCar* arg1)
    {
        return stub<member_func_t<void, PreCamCS, class mmCar*>>(0x4EC010, this, arg1);
    }

    // 0x4EC100 | ?DeclareFields@PreCamCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4EC100);
    }

    // 0x423B90 | ??1PreCamCS@@UAE@XZ
    inline ~PreCamCS() override
    {
        stub<member_func_t<void, PreCamCS>>(0x423B90, this);
    }

    // 0x4EC270 | ?GetClass@PreCamCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, PreCamCS>>(0x4EC270, this);
    }

    // 0x4EC0A0 | ?Update@PreCamCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, PreCamCS>>(0x4EC0A0, this);
    }

    // 0x4EC040 | ?Reset@PreCamCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, PreCamCS>>(0x4EC040, this);
    }

    // 0x4EC050 | ?MakeActive@PreCamCS@@UAEXXZ
    inline void MakeActive() override
    {
        return stub<member_func_t<void, PreCamCS>>(0x4EC050, this);
    }
};
