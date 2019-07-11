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
    mmwidget:bm_label

    0x4A8F50 | public: __thiscall UIBMLabel::UIBMLabel(void) | ??0UIBMLabel@@QAE@XZ
    0x4A8FC0 | public: virtual __thiscall UIBMLabel::~UIBMLabel(void) | ??1UIBMLabel@@UAE@XZ
    0x4A9030 | public: void __thiscall UIBMLabel::Init(class string *,float,float,int *) | ?Init@UIBMLabel@@QAEXPAVstring@@MMPAH@Z
    0x4A9110 | public: void __thiscall UIBMLabel::SetBitmapName(class string *) | ?SetBitmapName@UIBMLabel@@QAEXPAVstring@@@Z
    0x4A91B0 | private: void __thiscall UIBMLabel::LoadBitmap(void) | ?LoadBitmap@UIBMLabel@@AAEXXZ
    0x4A9290 | public: class agiBitmap * __thiscall UIBMLabel::CreateDummyBitmap(void) | ?CreateDummyBitmap@UIBMLabel@@QAEPAVagiBitmap@@XZ
    0x4A92E0 | public: virtual void __thiscall UIBMLabel::Update(void) | ?Update@UIBMLabel@@UAEXXZ
    0x4A9310 | public: virtual void __thiscall UIBMLabel::Cull(void) | ?Cull@UIBMLabel@@UAEXXZ
    0x4A9340 | public: static void __cdecl UIBMLabel::DeclareFields(void) | ?DeclareFields@UIBMLabel@@SAXXZ
    0x4A94B0 | public: virtual class MetaClass * __thiscall UIBMLabel::GetClass(void) | ?GetClass@UIBMLabel@@UAEPAVMetaClass@@XZ
    0x4A94C0 | public: virtual void * __thiscall UIBMLabel::`vector deleting destructor'(unsigned int) | ??_EUIBMLabel@@UAEPAXI@Z
    0x593348 | const UIBMLabel::`vftable' | ??_7UIBMLabel@@6B@
    0x667CD0 | class MetaClass UIBMLabelMetaClass | ?UIBMLabelMetaClass@@3VMetaClass@@A
    0x4A9390 | void * __cdecl new_UIBMLabel(int) | ?new_UIBMLabel@@YAPAXH@Z
    0x4A9460 | void __cdecl delete_UIBMLabel(void *,int) | ?delete_UIBMLabel@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x667CD0 | ?UIBMLabelMetaClass@@3VMetaClass@@A
inline extern_var(0x667CD0, class MetaClass, UIBMLabelMetaClass);

// 0x4A9390 | ?new_UIBMLabel@@YAPAXH@Z
inline void* new_UIBMLabel(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4A9390, arg1);
}

// 0x4A9460 | ?delete_UIBMLabel@@YAXPAXH@Z
inline void delete_UIBMLabel(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4A9460, arg1, arg2);
}

class UIBMLabel : uiWidget
{
public:
    // UIBMLabel::`vftable' @ 0x593348

    // 0x4A8F50 | ??0UIBMLabel@@QAE@XZ
    inline UIBMLabel()
    {
        stub<member_func_t<void, UIBMLabel>>(0x4A8F50, this);
    }

    // 0x4A9030 | ?Init@UIBMLabel@@QAEXPAVstring@@MMPAH@Z
    inline void Init(class string* arg1, float arg2, float arg3, int32_t* arg4)
    {
        return stub<member_func_t<void, UIBMLabel, class string*, float, float, int32_t*>>(
            0x4A9030, this, arg1, arg2, arg3, arg4);
    }

    // 0x4A9110 | ?SetBitmapName@UIBMLabel@@QAEXPAVstring@@@Z
    inline void SetBitmapName(class string* arg1)
    {
        return stub<member_func_t<void, UIBMLabel, class string*>>(0x4A9110, this, arg1);
    }

    // 0x4A91B0 | ?LoadBitmap@UIBMLabel@@AAEXXZ
    inline void LoadBitmap()
    {
        return stub<member_func_t<void, UIBMLabel>>(0x4A91B0, this);
    }

    // 0x4A9290 | ?CreateDummyBitmap@UIBMLabel@@QAEPAVagiBitmap@@XZ
    inline class agiBitmap* CreateDummyBitmap()
    {
        return stub<member_func_t<class agiBitmap*, UIBMLabel>>(0x4A9290, this);
    }

    // 0x4A9340 | ?DeclareFields@UIBMLabel@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4A9340);
    }

    // 0x4A8FC0 | ??1UIBMLabel@@UAE@XZ
    inline ~UIBMLabel() override
    {
        stub<member_func_t<void, UIBMLabel>>(0x4A8FC0, this);
    }

    // 0x4A94B0 | ?GetClass@UIBMLabel@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, UIBMLabel>>(0x4A94B0, this);
    }

    // 0x4A9310 | ?Cull@UIBMLabel@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, UIBMLabel>>(0x4A9310, this);
    }

    // 0x4A92E0 | ?Update@UIBMLabel@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIBMLabel>>(0x4A92E0, this);
    }
};
