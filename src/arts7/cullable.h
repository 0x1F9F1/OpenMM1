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
    arts7:cullable

    0x5124C0 | public: virtual void __thiscall asCullable::Cull(void) | ?Cull@asCullable@@UAEXXZ
    0x5124D0 | public: static void __cdecl asCullable::DeclareFields(void) | ?DeclareFields@asCullable@@SAXXZ
    0x512620 | public: virtual class MetaClass * __thiscall asCullable::GetClass(void) | ?GetClass@asCullable@@UAEPAVMetaClass@@XZ
    0x512630 | public: virtual void * __thiscall asCullable::`vector deleting destructor'(unsigned int) | ??_EasCullable@@UAEPAXI@Z
    0x512690 | public: __thiscall asCullable::asCullable(void) | ??0asCullable@@QAE@XZ
    0x6F2B70 | class MetaClass asCullableMetaClass | ?asCullableMetaClass@@3VMetaClass@@A
    0x512520 | void * __cdecl new_asCullable(int) | ?new_asCullable@@YAPAXH@Z
    0x5125D0 | void __cdecl delete_asCullable(void *,int) | ?delete_asCullable@@YAXPAXH@Z
*/

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
    static void DeclareFields();

    // 0x512690 | ??0asCullable@@QAE@XZ
    asCullable();

    // 0x482B30 | ??1asCullable@@UAE@XZ
    ~asCullable() override;

    // 0x512620 | ?GetClass@asCullable@@UAEPAVMetaClass@@XZ
    class MetaClass* GetClass() override;

    // 0x5124C0 | ?Cull@asCullable@@UAEXXZ
    virtual void Cull();
};

inline asCullable::asCullable() = default;
inline asCullable::~asCullable() = default;

check_size(asCullable, 4);
