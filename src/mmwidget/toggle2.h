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
    mmwidget:toggle2

    0x4B4E50 | public: __thiscall mmToggle2::mmToggle2(void) | ??0mmToggle2@@QAE@XZ
    0x4B4E70 | public: virtual __thiscall mmToggle2::~mmToggle2(void) | ??1mmToggle2@@UAE@XZ
    0x4B4ED0 | public: void __thiscall mmToggle2::Init(char *,float,float,int *) | ?Init@mmToggle2@@QAEXPADMMPAH@Z
    0x4B4F00 | private: void __thiscall mmToggle2::LoadBitmap(char *) | ?LoadBitmap@mmToggle2@@AAEXPAD@Z
    0x4B4F60 | public: void __thiscall mmToggle2::SetPosition(float,float) | ?SetPosition@mmToggle2@@QAEXMM@Z
    0x4B5000 | public: virtual void __thiscall mmToggle2::Update(void) | ?Update@mmToggle2@@UAEXXZ
    0x4B5020 | public: virtual void __thiscall mmToggle2::Cull(void) | ?Cull@mmToggle2@@UAEXXZ
    0x4B50E0 | public: static void __cdecl mmToggle2::DeclareFields(void) | ?DeclareFields@mmToggle2@@SAXXZ
    0x4B5240 | public: virtual class MetaClass * __thiscall mmToggle2::GetClass(void) | ?GetClass@mmToggle2@@UAEPAVMetaClass@@XZ
    0x4B5250 | public: virtual void * __thiscall mmToggle2::`vector deleting destructor'(unsigned int) | ??_EmmToggle2@@UAEPAXI@Z
    0x593E40 | const mmToggle2::`vftable' | ??_7mmToggle2@@6B@
    0x668018 | class MetaClass mmToggle2MetaClass | ?mmToggle2MetaClass@@3VMetaClass@@A
    0x4B5130 | void * __cdecl new_mmToggle2(int) | ?new_mmToggle2@@YAPAXH@Z
    0x4B51F0 | void __cdecl delete_mmToggle2(void *,int) | ?delete_mmToggle2@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x668018 | ?mmToggle2MetaClass@@3VMetaClass@@A
inline extern_var(0x668018, class MetaClass, mmToggle2MetaClass);

// 0x4B5130 | ?new_mmToggle2@@YAPAXH@Z
inline void* new_mmToggle2(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4B5130, arg1);
}

// 0x4B51F0 | ?delete_mmToggle2@@YAXPAXH@Z
inline void delete_mmToggle2(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4B51F0, arg1, arg2);
}

struct mmToggle2 : asNode
{
public:
    // mmToggle2::`vftable' @ 0x593E40

    // 0x4B4E50 | ??0mmToggle2@@QAE@XZ
    inline mmToggle2()
    {
        // stub<member_func_t<void, mmToggle2>>(0x4B4E50, this);

        unimplemented();
    }

    // 0x4B4ED0 | ?Init@mmToggle2@@QAEXPADMMPAH@Z
    inline void Init(char* arg1, float arg2, float arg3, int32_t* arg4)
    {
        return stub<member_func_t<void, mmToggle2, char*, float, float, int32_t*>>(
            0x4B4ED0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4B4F00 | ?LoadBitmap@mmToggle2@@AAEXPAD@Z
    inline void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, mmToggle2, char*>>(0x4B4F00, this, arg1);
    }

    // 0x4B4F60 | ?SetPosition@mmToggle2@@QAEXMM@Z
    inline void SetPosition(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmToggle2, float, float>>(0x4B4F60, this, arg1, arg2);
    }

    // 0x4B50E0 | ?DeclareFields@mmToggle2@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4B50E0);
    }

    // 0x4B4E70 | ??1mmToggle2@@UAE@XZ
    inline ~mmToggle2() override = 0
    {
        // stub<member_func_t<void, mmToggle2>>(0x4B4E70, this);

        unimplemented();
    }

    // 0x4B5240 | ?GetClass@mmToggle2@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmToggle2>>(0x4B5240, this);
    }

    // 0x4B5020 | ?Cull@mmToggle2@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmToggle2>>(0x4B5020, this);
    }

    // 0x4B5000 | ?Update@mmToggle2@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmToggle2>>(0x4B5000, this);
    }
};
