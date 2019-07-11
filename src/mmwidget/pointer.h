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

// mmwidget:pointer

#include "hooking.h"

// 0x667F78 | ?sfPointerMetaClass@@3VMetaClass@@A
inline extern_var(0x667F78, class MetaClass, sfPointerMetaClass);

// 0x4B2D60 | ?new_sfPointer@@YAPAXH@Z
inline void* new_sfPointer(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4B2D60, arg1);
}

// 0x4B2E20 | ?delete_sfPointer@@YAXPAXH@Z
inline void delete_sfPointer(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4B2E20, arg1, arg2);
}

struct sfPointer : asNode
{
public:
    // sfPointer::`vftable' @ 0x593D08

    // 0x4B28D0 | ??0sfPointer@@QAE@XZ
    inline sfPointer()
    {
        stub<member_func_t<void, sfPointer>>(0x4B28D0, this);
    }

    // 0x4B2960 | ?Init@sfPointer@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, sfPointer>>(0x4B2960, this);
    }

    // 0x4B29E0 | ?GetPointerHeight@sfPointer@@QAEMXZ
    inline float GetPointerHeight()
    {
        return stub<member_func_t<float, sfPointer>>(0x4B29E0, this);
    }

    // 0x4B2C70 | ?UpdateAttached@sfPointer@@AAEXXZ
    inline void UpdateAttached()
    {
        return stub<member_func_t<void, sfPointer>>(0x4B2C70, this);
    }

    // 0x4B2C80 | ?WaitForRelease@sfPointer@@QAEXXZ
    inline void WaitForRelease()
    {
        return stub<member_func_t<void, sfPointer>>(0x4B2C80, this);
    }

    // 0x4B2D10 | ?DeclareFields@sfPointer@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4B2D10);
    }

    // 0x4B2900 | ??1sfPointer@@UAE@XZ
    inline ~sfPointer() override
    {
        stub<member_func_t<void, sfPointer>>(0x4B2900, this);
    }

    // 0x4B2E70 | ?GetClass@sfPointer@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, sfPointer>>(0x4B2E70, this);
    }

    // 0x4B2C90 | ?Cull@sfPointer@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, sfPointer>>(0x4B2C90, this);
    }

    // 0x4B29F0 | ?Update@sfPointer@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, sfPointer>>(0x4B29F0, this);
    }

    // 0x4B2980 | ?ResChange@sfPointer@@UAEXHH@Z
    inline void ResChange(int32_t arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, sfPointer, int32_t, int32_t>>(0x4B2980, this, arg1, arg2);
    }
};
