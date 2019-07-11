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
    mmcar:force

    0x477CC0 | public: __thiscall mmForce::mmForce(void) | ??0mmForce@@QAE@XZ
    0x477CE0 | public: virtual void __thiscall mmForce::Update(void) | ?Update@mmForce@@UAEXXZ
    0x477EE0 | public: void __thiscall mmForce::AddWidgets(class Bank *) | ?AddWidgets@mmForce@@QAEXPAVBank@@@Z
    0x477EF0 | public: static void __cdecl mmForce::DeclareFields(void) | ?DeclareFields@mmForce@@SAXXZ
    0x478050 | public: virtual class MetaClass * __thiscall mmForce::GetClass(void) | ?GetClass@mmForce@@UAEPAVMetaClass@@XZ
    0x478060 | public: virtual void * __thiscall mmForce::`vector deleting destructor'(unsigned int) | ??_EmmForce@@UAEPAXI@Z
    0x5917D0 | const mmForce::`vftable' | ??_7mmForce@@6B@
    0x5AB6F8 | float YDownForceMinHeight | ?YDownForceMinHeight@@3MA
    0x5AB6FC | float YDownForceMaxHeight | ?YDownForceMaxHeight@@3MA
    0x5AB700 | float YDownForceMin | ?YDownForceMin@@3MA
    0x5AB704 | float YDownForceMax | ?YDownForceMax@@3MA
    0x60A4D0 | class MetaClass mmForceMetaClass | ?mmForceMetaClass@@3VMetaClass@@A
    0x477F40 | void * __cdecl new_mmForce(int) | ?new_mmForce@@YAPAXH@Z
    0x478000 | void __cdecl delete_mmForce(void *,int) | ?delete_mmForce@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x5AB6F8 | ?YDownForceMinHeight@@3MA
inline extern_var(0x5AB6F8, float, YDownForceMinHeight);

// 0x5AB6FC | ?YDownForceMaxHeight@@3MA
inline extern_var(0x5AB6FC, float, YDownForceMaxHeight);

// 0x5AB700 | ?YDownForceMin@@3MA
inline extern_var(0x5AB700, float, YDownForceMin);

// 0x5AB704 | ?YDownForceMax@@3MA
inline extern_var(0x5AB704, float, YDownForceMax);

// 0x60A4D0 | ?mmForceMetaClass@@3VMetaClass@@A
inline extern_var(0x60A4D0, class MetaClass, mmForceMetaClass);

// 0x477F40 | ?new_mmForce@@YAPAXH@Z
inline void* new_mmForce(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x477F40, arg1);
}

// 0x478000 | ?delete_mmForce@@YAXPAXH@Z
inline void delete_mmForce(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x478000, arg1, arg2);
}

struct mmForce : asNode
{
public:
    // mmForce::`vftable' @ 0x5917D0

    // 0x477CC0 | ??0mmForce@@QAE@XZ
    inline mmForce()
    {
        stub<member_func_t<void, mmForce>>(0x477CC0, this);
    }

    // 0x477EE0 | ?AddWidgets@mmForce@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, mmForce, class Bank*>>(0x477EE0, this, arg1);
    }

    // 0x477EF0 | ?DeclareFields@mmForce@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x477EF0);
    }

    // 0x4682A0 | ??1mmForce@@UAE@XZ
    inline ~mmForce() override
    {
        stub<member_func_t<void, mmForce>>(0x4682A0, this);
    }

    // 0x478050 | ?GetClass@mmForce@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmForce>>(0x478050, this);
    }

    // 0x477CE0 | ?Update@mmForce@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmForce>>(0x477CE0, this);
    }
};
