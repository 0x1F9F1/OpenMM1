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

// mmcar:shock

#include "hooking.h"

// 0x60A3E8 | ?mmShockMetaClass@@3VMetaClass@@A
inline extern_var(0x60A3E8, class MetaClass, mmShockMetaClass);

// 0x474950 | ?new_mmShock@@YAPAXH@Z
inline void* new_mmShock(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x474950, arg1);
}

// 0x474A20 | ?delete_mmShock@@YAXPAXH@Z
inline void delete_mmShock(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x474A20, arg1, arg2);
}

struct mmShock : asLinearCS
{
public:
    // mmShock::`vftable' @ 0x591600

    // 0x474870 | ??0mmShock@@QAE@XZ
    inline mmShock()
    {
        stub<member_func_t<void, mmShock>>(0x474870, this);
    }

    // 0x474890 | ?Init@mmShock@@QAEXPAD0PAVmmWheel@@@Z
    inline void Init(char* arg1, char* arg2, class mmWheel* arg3)
    {
        return stub<member_func_t<void, mmShock, char*, char*, class mmWheel*>>(0x474890, this, arg1, arg2, arg3);
    }

    // 0x474900 | ?DeclareFields@mmShock@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x474900);
    }

    // 0x4682F0 | ??1mmShock@@UAE@XZ
    inline ~mmShock() override
    {
        stub<member_func_t<void, mmShock>>(0x4682F0, this);
    }

    // 0x474A70 | ?GetClass@mmShock@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmShock>>(0x474A70, this);
    }

    // 0x4748F0 | ?Update@mmShock@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmShock>>(0x4748F0, this);
    }
};
