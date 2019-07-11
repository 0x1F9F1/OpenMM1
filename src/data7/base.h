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

// data7:base

#include "hooking.h"

// 0x712218 | ?BaseMetaClass@@3VMetaClass@@A
inline extern_var(0x712218, class MetaClass, BaseMetaClass);

// 0x55ABA0 | ?delete_Base@@YAXPAXH@Z
inline void delete_Base(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x55ABA0, arg1, arg2);
}

class Base
{
public:
    // Base::`vftable' @ 0x58F808

    // 0x55AB10 | ?GetTypeName@Base@@QAEPADXZ
    inline char* GetTypeName()
    {
        return stub<member_func_t<char*, Base>>(0x55AB10, this);
    }

    // 0x55AB50 | ?DeclareFields@Base@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x55AB50);
    }

    // 0x55AB40 | ??1Base@@UAE@XZ
    virtual inline ~Base()
    {
        stub<member_func_t<void, Base>>(0x55AB40, this);
    }

    // 0x55ABF0 | ?GetClass@Base@@UAEPAVMetaClass@@XZ
    virtual inline class MetaClass* GetClass()
    {
        return stub<member_func_t<class MetaClass*, Base>>(0x55ABF0, this);
    }

    // 0x55AB00 | ?GetTypeNameV@Base@@UAEPADXZ
    virtual inline char* GetTypeNameV()
    {
        return stub<member_func_t<char*, Base>>(0x55AB00, this);
    }

    // 0x55AB20 | ?BeforeSave@Base@@UAEXXZ
    virtual inline void BeforeSave()
    {
        return stub<member_func_t<void, Base>>(0x55AB20, this);
    }

    // 0x55AB30 | ?AfterLoad@Base@@UAEXXZ
    virtual inline void AfterLoad()
    {
        return stub<member_func_t<void, Base>>(0x55AB30, this);
    }
};
