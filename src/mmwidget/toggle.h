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

// mmwidget:toggle

#include "hooking.h"

// 0x668040 | ?mmToggleMetaClass@@3VMetaClass@@A
inline extern_var(0x668040, class MetaClass, mmToggleMetaClass);

// 0x4B55C0 | ?new_mmToggle@@YAPAXH@Z
inline void* new_mmToggle(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4B55C0, arg1);
}

// 0x4B5680 | ?delete_mmToggle@@YAXPAXH@Z
inline void delete_mmToggle(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4B5680, arg1, arg2);
}

struct mmToggle : asNode
{
public:
    // mmToggle::`vftable' @ 0x593E78

    // 0x4B52B0 | ??0mmToggle@@QAE@XZ
    inline mmToggle()
    {
        stub<member_func_t<void, mmToggle>>(0x4B52B0, this);
    }

    // 0x4B5330 | ?Init@mmToggle@@QAEXPADMMMM@Z
    inline void Init(char* arg1, float arg2, float arg3, float arg4, float arg5)
    {
        return stub<member_func_t<void, mmToggle, char*, float, float, float, float>>(
            0x4B5330, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4B53D0 | ?LoadBitmap@mmToggle@@AAEXPAD@Z
    inline void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, mmToggle, char*>>(0x4B53D0, this, arg1);
    }

    // 0x4B5420 | ?SetSize@mmToggle@@AAEXMM@Z
    inline void SetSize(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmToggle, float, float>>(0x4B5420, this, arg1, arg2);
    }

    // 0x4B5570 | ?DeclareFields@mmToggle@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4B5570);
    }

    // 0x4B52D0 | ??1mmToggle@@UAE@XZ
    inline ~mmToggle() override
    {
        stub<member_func_t<void, mmToggle>>(0x4B52D0, this);
    }

    // 0x4B56D0 | ?GetClass@mmToggle@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmToggle>>(0x4B56D0, this);
    }

    // 0x4B54F0 | ?Cull@mmToggle@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmToggle>>(0x4B54F0, this);
    }

    // 0x4B54D0 | ?Update@mmToggle@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmToggle>>(0x4B54D0, this);
    }
};
