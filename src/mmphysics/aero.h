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
    mmphysics:aero

    0x4D2D00 | public: __thiscall asAero::asAero(void) | ??0asAero@@QAE@XZ
    0x4D2D60 | public: virtual void __thiscall asAero::Update(void) | ?Update@asAero@@UAEXXZ
    0x4D3220 | public: void __thiscall asAero::Load(class Stream *) | ?Load@asAero@@QAEXPAVStream@@@Z
    0x4D32F0 | public: void __thiscall asAero::Save(class Stream *) | ?Save@asAero@@QAEXPAVStream@@@Z
    0x4D3420 | public: void __thiscall asAero::AddWidgets(class Bank *) | ?AddWidgets@asAero@@QAEXPAVBank@@@Z
    0x4D3430 | public: static void __cdecl asAero::DeclareFields(void) | ?DeclareFields@asAero@@SAXXZ
    0x4D3600 | public: virtual class MetaClass * __thiscall asAero::GetClass(void) | ?GetClass@asAero@@UAEPAVMetaClass@@XZ
    0x4D3610 | public: virtual void * __thiscall asAero::`vector deleting destructor'(unsigned int) | ??_EasAero@@UAEPAXI@Z
    0x594700 | const asAero::`vftable' | ??_7asAero@@6B@
    0x67B4C8 | class MetaClass asAeroMetaClass | ?asAeroMetaClass@@3VMetaClass@@A
    0x4D34F0 | void * __cdecl new_asAero(int) | ?new_asAero@@YAPAXH@Z
    0x4D35B0 | void __cdecl delete_asAero(void *,int) | ?delete_asAero@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x67B4C8 | ?asAeroMetaClass@@3VMetaClass@@A
inline extern_var(0x67B4C8, class MetaClass, asAeroMetaClass);

// 0x4D34F0 | ?new_asAero@@YAPAXH@Z
inline void* new_asAero(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4D34F0, arg1);
}

// 0x4D35B0 | ?delete_asAero@@YAXPAXH@Z
inline void delete_asAero(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4D35B0, arg1, arg2);
}

struct asAero : asNode
{
public:
    // asAero::`vftable' @ 0x594700

    // 0x4D2D00 | ??0asAero@@QAE@XZ
    inline asAero()
    {
        stub<member_func_t<void, asAero>>(0x4D2D00, this);
    }

    // 0x4D3220 | ?Load@asAero@@QAEXPAVStream@@@Z
    inline void Load(class Stream* arg1)
    {
        return stub<member_func_t<void, asAero, class Stream*>>(0x4D3220, this, arg1);
    }

    // 0x4D32F0 | ?Save@asAero@@QAEXPAVStream@@@Z
    inline void Save(class Stream* arg1)
    {
        return stub<member_func_t<void, asAero, class Stream*>>(0x4D32F0, this, arg1);
    }

    // 0x4D3420 | ?AddWidgets@asAero@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, asAero, class Bank*>>(0x4D3420, this, arg1);
    }

    // 0x4D3430 | ?DeclareFields@asAero@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4D3430);
    }

    // 0x468290 | ??1asAero@@UAE@XZ
    inline ~asAero() override
    {
        stub<member_func_t<void, asAero>>(0x468290, this);
    }

    // 0x4D3600 | ?GetClass@asAero@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asAero>>(0x4D3600, this);
    }

    // 0x4D2D60 | ?Update@asAero@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asAero>>(0x4D2D60, this);
    }
};
