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

// mmcity:ped

#include "hooking.h"

// 0x667A40 | ?mmPedManagerMetaClass@@3VMetaClass@@A
inline extern_var(0x667A40, class MetaClass, mmPedManagerMetaClass);

// 0x667A68 | ?mmPedMetaClass@@3VMetaClass@@A
inline extern_var(0x667A68, class MetaClass, mmPedMetaClass);

// 0x48AE40 | ?new_mmPed@@YAPAXH@Z
inline void* new_mmPed(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x48AE40, arg1);
}

// 0x48AF20 | ?delete_mmPed@@YAXPAXH@Z
inline void delete_mmPed(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x48AF20, arg1, arg2);
}

// 0x48AFD0 | ?new_mmPedManager@@YAPAXH@Z
inline void* new_mmPedManager(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x48AFD0, arg1);
}

// 0x48B090 | ?delete_mmPedManager@@YAXPAXH@Z
inline void delete_mmPedManager(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x48B090, arg1, arg2);
}

struct mmPed : mmYInstance
{
public:
    // mmPed::`vftable' @ 0x5920C0

    // 0x48AB80 | ??0mmPed@@QAE@XZ
    inline mmPed()
    {
        stub<member_func_t<void, mmPed>>(0x48AB80, this);
    }

    // 0x48ABA0 | ?Init@mmPed@@QAEXPADAAVVector3@@@Z
    inline void Init(char* arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, mmPed, char*, class Vector3&>>(0x48ABA0, this, arg1, arg2);
    }

    // 0x48AC40 | ?Update@mmPed@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmPed>>(0x48AC40, this);
    }

    // 0x48ADF0 | ?DeclareFields@mmPed@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x48ADF0);
    }

    // 0x48AC30 | ??1mmPed@@UAE@XZ
    inline ~mmPed() override
    {
        stub<member_func_t<void, mmPed>>(0x48AC30, this);
    }

    // 0x48AF70 | ?GetClass@mmPed@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmPed>>(0x48AF70, this);
    }

    // 0x48AC90 | ?ToMatrix@mmPed@@UAIAAVMatrix34@@AAV2@@Z
    inline class Matrix34& ToMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34&, mmPed, class Matrix34&>>(0x48AC90, this, arg1);
    }

    // 0x48AC60 | ?Draw@mmPed@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmPed, int32_t>>(0x48AC60, this, arg1);
    }
};

struct mmPedManager : asNode
{
public:
    // mmPedManager::`vftable' @ 0x592120

    // 0x48ACE0 | ??0mmPedManager@@QAE@XZ
    inline mmPedManager()
    {
        stub<member_func_t<void, mmPedManager>>(0x48ACE0, this);
    }

    // 0x48AD10 | ?Init@mmPedManager@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, mmPedManager, int32_t>>(0x48AD10, this, arg1);
    }

    // 0x48AF80 | ?DeclareFields@mmPedManager@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x48AF80);
    }

    // 0x48AD00 | ??1mmPedManager@@UAE@XZ
    inline ~mmPedManager() override
    {
        stub<member_func_t<void, mmPedManager>>(0x48AD00, this);
    }

    // 0x48B0E0 | ?GetClass@mmPedManager@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmPedManager>>(0x48B0E0, this);
    }

    // 0x48ADC0 | ?Update@mmPedManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmPedManager>>(0x48ADC0, this);
    }
};
