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
    mmwidget:dropdown

    0x4B5740 | public: __thiscall mmDropDown::mmDropDown(void) | ??0mmDropDown@@QAE@XZ
    0x4B57A0 | public: virtual __thiscall mmDropDown::~mmDropDown(void) | ??1mmDropDown@@UAE@XZ
    0x4B5820 | public: void __thiscall mmDropDown::Init(class asCamera *,void *,float,float,float,float,class string,int) | ?Init@mmDropDown@@QAEXPAVasCamera@@PAXMMMMVstring@@H@Z
    0x4B5920 | public: void __thiscall mmDropDown::InitString(class string) | ?InitString@mmDropDown@@QAEXVstring@@@Z
    0x4B5B80 | private: void __thiscall mmDropDown::SetString(class string) | ?SetString@mmDropDown@@AAEXVstring@@@Z
    0x4B5C70 | public: void __thiscall mmDropDown::GetCurrentString(char *,int) | ?GetCurrentString@mmDropDown@@QAEXPADH@Z
    0x4B5CC0 | public: void __thiscall mmDropDown::SetDisabledColors(void) | ?SetDisabledColors@mmDropDown@@QAEXXZ
    0x4B5D40 | public: int __thiscall mmDropDown::FindFirstEnabled(void) | ?FindFirstEnabled@mmDropDown@@QAEHXZ
    0x4B5D70 | public: void __thiscall mmDropDown::SetHighlight(int) | ?SetHighlight@mmDropDown@@QAEXH@Z
    0x4B5DD0 | public: int __thiscall mmDropDown::GetHit(float,float) | ?GetHit@mmDropDown@@QAEHMM@Z
    0x4B5E30 | public: virtual void __thiscall mmDropDown::Update(void) | ?Update@mmDropDown@@UAEXXZ
    0x4B5E40 | public: static void __cdecl mmDropDown::DeclareFields(void) | ?DeclareFields@mmDropDown@@SAXXZ
    0x4B5FB0 | public: virtual class MetaClass * __thiscall mmDropDown::GetClass(void) | ?GetClass@mmDropDown@@UAEPAVMetaClass@@XZ
    0x4B5FC0 | public: virtual void * __thiscall mmDropDown::`vector deleting destructor'(unsigned int) | ??_EmmDropDown@@UAEPAXI@Z
    0x593EB0 | const mmDropDown::`vftable' | ??_7mmDropDown@@6B@
    0x668068 | class MetaClass mmDropDownMetaClass | ?mmDropDownMetaClass@@3VMetaClass@@A
    0x4B5E90 | void * __cdecl new_mmDropDown(int) | ?new_mmDropDown@@YAPAXH@Z
    0x4B5F60 | void __cdecl delete_mmDropDown(void *,int) | ?delete_mmDropDown@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x668068 | ?mmDropDownMetaClass@@3VMetaClass@@A
inline extern_var(0x668068, class MetaClass, mmDropDownMetaClass);

// 0x4B5E90 | ?new_mmDropDown@@YAPAXH@Z
inline void* new_mmDropDown(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4B5E90, arg1);
}

// 0x4B5F60 | ?delete_mmDropDown@@YAXPAXH@Z
inline void delete_mmDropDown(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4B5F60, arg1, arg2);
}

struct mmDropDown : asNode
{
public:
    // mmDropDown::`vftable' @ 0x593EB0

    // 0x4B5740 | ??0mmDropDown@@QAE@XZ
    inline mmDropDown()
    {
        // stub<member_func_t<void, mmDropDown>>(0x4B5740, this);

        unimplemented();
    }

    // 0x4B5820 | ?Init@mmDropDown@@QAEXPAVasCamera@@PAXMMMMVstring@@H@Z
    inline void Init(class asCamera* arg1, void* arg2, float arg3, float arg4, float arg5, float arg6,
        class string arg7, int32_t arg8)
    {
        return stub<
            member_func_t<void, mmDropDown, class asCamera*, void*, float, float, float, float, class string, int32_t>>(
            0x4B5820, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x4B5920 | ?InitString@mmDropDown@@QAEXVstring@@@Z
    inline void InitString(class string arg1)
    {
        return stub<member_func_t<void, mmDropDown, class string>>(0x4B5920, this, arg1);
    }

    // 0x4B5B80 | ?SetString@mmDropDown@@AAEXVstring@@@Z
    inline void SetString(class string arg1)
    {
        return stub<member_func_t<void, mmDropDown, class string>>(0x4B5B80, this, arg1);
    }

    // 0x4B5C70 | ?GetCurrentString@mmDropDown@@QAEXPADH@Z
    inline void GetCurrentString(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmDropDown, char*, int32_t>>(0x4B5C70, this, arg1, arg2);
    }

    // 0x4B5CC0 | ?SetDisabledColors@mmDropDown@@QAEXXZ
    inline void SetDisabledColors()
    {
        return stub<member_func_t<void, mmDropDown>>(0x4B5CC0, this);
    }

    // 0x4B5D40 | ?FindFirstEnabled@mmDropDown@@QAEHXZ
    inline int32_t FindFirstEnabled()
    {
        return stub<member_func_t<int32_t, mmDropDown>>(0x4B5D40, this);
    }

    // 0x4B5D70 | ?SetHighlight@mmDropDown@@QAEXH@Z
    inline void SetHighlight(int32_t arg1)
    {
        return stub<member_func_t<void, mmDropDown, int32_t>>(0x4B5D70, this, arg1);
    }

    // 0x4B5DD0 | ?GetHit@mmDropDown@@QAEHMM@Z
    inline int32_t GetHit(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, mmDropDown, float, float>>(0x4B5DD0, this, arg1, arg2);
    }

    // 0x4B5E40 | ?DeclareFields@mmDropDown@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4B5E40);
    }

    // 0x4B57A0 | ??1mmDropDown@@UAE@XZ
    inline ~mmDropDown() override = 0
    {
        // stub<member_func_t<void, mmDropDown>>(0x4B57A0, this);

        unimplemented();
    }

    // 0x4B5FB0 | ?GetClass@mmDropDown@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmDropDown>>(0x4B5FB0, this);
    }

    // 0x4B5E30 | ?Update@mmDropDown@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmDropDown>>(0x4B5E30, this);
    }
};
