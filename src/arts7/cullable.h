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

// arts7:cullable

#include "hooking.h"

#include "data7/base.h"

// 0x6F2B70 | ?asCullableMetaClass@@3VMetaClass@@A
inline extern_var(0x6F2B70, class MetaClass, asCullableMetaClass);

// 0x512520 | ?new_asCullable@@YAPAXH@Z
inline void* new_asCullable(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x512520, arg1);
}

// 0x5125D0 | ?delete_asCullable@@YAXPAXH@Z
inline void delete_asCullable(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x5125D0, arg1, arg2);
}

class asCullable : Base
{
public:
    // asCullable::`vftable' @ 0x591B00

    // 0x5124D0 | ?DeclareFields@asCullable@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x5124D0);
    }

    // 0x512690 | ??0asCullable@@QAE@XZ
    inline asCullable()
    {
        stub<member_func_t<void, asCullable>>(0x512690, this);
    }

    // 0x482B30 | ??1asCullable@@UAE@XZ
    inline ~asCullable() override
    {
        stub<member_func_t<void, asCullable>>(0x482B30, this);
    }

    // 0x512620 | ?GetClass@asCullable@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asCullable>>(0x512620, this);
    }

    // 0x5124C0 | ?Cull@asCullable@@UAEXXZ
    virtual inline void Cull()
    {
        return stub<member_func_t<void, asCullable>>(0x5124C0, this);
    }
};
