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
    mmcar:axle

    0x474AE0 | public: __thiscall mmAxle::mmAxle(void) | ??0mmAxle@@QAE@XZ
    0x474B00 | public: void __thiscall mmAxle::Init(char *,char *,class mmWheel *,class mmWheel *) | ?Init@mmAxle@@QAEXPAD0PAVmmWheel@@1@Z
    0x474B50 | public: virtual void __thiscall mmAxle::Update(void) | ?Update@mmAxle@@UAEXXZ
    0x474BF0 | public: static void __cdecl mmAxle::DeclareFields(void) | ?DeclareFields@mmAxle@@SAXXZ
    0x474D60 | public: virtual class MetaClass * __thiscall mmAxle::GetClass(void) | ?GetClass@mmAxle@@UAEPAVMetaClass@@XZ
    0x474D70 | public: virtual void * __thiscall mmAxle::`vector deleting destructor'(unsigned int) | ??_EmmAxle@@UAEPAXI@Z
    0x591630 | const mmAxle::`vftable' | ??_7mmAxle@@6B@
    0x60A410 | class MetaClass mmAxleMetaClass | ?mmAxleMetaClass@@3VMetaClass@@A
    0x474C40 | void * __cdecl new_mmAxle(int) | ?new_mmAxle@@YAPAXH@Z
    0x474D10 | void __cdecl delete_mmAxle(void *,int) | ?delete_mmAxle@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x60A410 | ?mmAxleMetaClass@@3VMetaClass@@A
inline extern_var(0x60A410, class MetaClass, mmAxleMetaClass);

// 0x474C40 | ?new_mmAxle@@YAPAXH@Z
inline void* new_mmAxle(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x474C40, arg1);
}

// 0x474D10 | ?delete_mmAxle@@YAXPAXH@Z
inline void delete_mmAxle(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x474D10, arg1, arg2);
}

struct mmAxle : asLinearCS
{
public:
    // mmAxle::`vftable' @ 0x591630

    // 0x474AE0 | ??0mmAxle@@QAE@XZ
    inline mmAxle()
    {
        stub<member_func_t<void, mmAxle>>(0x474AE0, this);
    }

    // 0x474B00 | ?Init@mmAxle@@QAEXPAD0PAVmmWheel@@1@Z
    inline void Init(char* arg1, char* arg2, class mmWheel* arg3, class mmWheel* arg4)
    {
        return stub<member_func_t<void, mmAxle, char*, char*, class mmWheel*, class mmWheel*>>(
            0x474B00, this, arg1, arg2, arg3, arg4);
    }

    // 0x474BF0 | ?DeclareFields@mmAxle@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x474BF0);
    }

    // 0x4682E0 | ??1mmAxle@@UAE@XZ
    inline ~mmAxle() override
    {
        stub<member_func_t<void, mmAxle>>(0x4682E0, this);
    }

    // 0x474D60 | ?GetClass@mmAxle@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmAxle>>(0x474D60, this);
    }

    // 0x474B50 | ?Update@mmAxle@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmAxle>>(0x474B50, this);
    }
};
