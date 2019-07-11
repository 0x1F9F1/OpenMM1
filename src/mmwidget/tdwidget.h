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
    mmwidget:tdwidget

    0x4B2EE0 | public: __thiscall TextDropWidget::TextDropWidget(void) | ??0TextDropWidget@@QAE@XZ
    0x4B2F90 | public: virtual __thiscall TextDropWidget::~TextDropWidget(void) | ??1TextDropWidget@@UAE@XZ
    0x4B3000 | public: void __thiscall TextDropWidget::Init(class asCamera *,void *,float,float,float,float,float,class string,int) | ?Init@TextDropWidget@@QAEXPAVasCamera@@PAXMMMMMVstring@@H@Z
    0x4B30F0 | public: int __thiscall TextDropWidget::GetCount(void) | ?GetCount@TextDropWidget@@QAEHXZ
    0x4B3100 | public: void __thiscall TextDropWidget::SetString(class string) | ?SetString@TextDropWidget@@QAEXVstring@@@Z
    0x4B31C0 | public: int __thiscall TextDropWidget::SetValue(int) | ?SetValue@TextDropWidget@@QAEHH@Z
    0x4B3260 | public: int __thiscall TextDropWidget::SetHighlight(int) | ?SetHighlight@TextDropWidget@@QAEHH@Z
    0x4B32D0 | public: int __thiscall TextDropWidget::Inc(void) | ?Inc@TextDropWidget@@QAEHXZ
    0x4B32E0 | public: int __thiscall TextDropWidget::Dec(void) | ?Dec@TextDropWidget@@QAEHXZ
    0x4B32F0 | public: int __thiscall TextDropWidget::IncDrop(void) | ?IncDrop@TextDropWidget@@QAEHXZ
    0x4B3320 | public: int __thiscall TextDropWidget::DecDrop(void) | ?DecDrop@TextDropWidget@@QAEHXZ
    0x4B3350 | public: int __thiscall TextDropWidget::Capture(float,float) | ?Capture@TextDropWidget@@QAEHMM@Z
    0x4B3390 | public: void __thiscall TextDropWidget::Switch(int,class Vector4 &) | ?Switch@TextDropWidget@@QAEXHAAVVector4@@@Z
    0x4B33B0 | public: virtual void __thiscall TextDropWidget::Update(void) | ?Update@TextDropWidget@@UAEXXZ
    0x4B33C0 | public: int __thiscall TextDropWidget::IsActive(void) | ?IsActive@TextDropWidget@@QAEHXZ
    0x4B33D0 | public: void __thiscall TextDropWidget::SetActive(int) | ?SetActive@TextDropWidget@@QAEXH@Z
    0x4B33E0 | public: void __thiscall TextDropWidget::SetDisabledMask(long) | ?SetDisabledMask@TextDropWidget@@QAEXJ@Z
    0x4B3400 | public: long __thiscall TextDropWidget::GetDisabledMask(void) | ?GetDisabledMask@TextDropWidget@@QAEJXZ
    0x4B3410 | public: static void __cdecl TextDropWidget::DeclareFields(void) | ?DeclareFields@TextDropWidget@@SAXXZ
    0x4B3570 | public: virtual class MetaClass * __thiscall TextDropWidget::GetClass(void) | ?GetClass@TextDropWidget@@UAEPAVMetaClass@@XZ
    0x4B3580 | public: virtual void * __thiscall TextDropWidget::`vector deleting destructor'(unsigned int) | ??_ETextDropWidget@@UAEPAXI@Z
    0x593D48 | const TextDropWidget::`vftable' | ??_7TextDropWidget@@6B@
    0x667FA0 | class MetaClass TextDropWidgetMetaClass | ?TextDropWidgetMetaClass@@3VMetaClass@@A
    0x4B3460 | void * __cdecl new_TextDropWidget(int) | ?new_TextDropWidget@@YAPAXH@Z
    0x4B3520 | void __cdecl delete_TextDropWidget(void *,int) | ?delete_TextDropWidget@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x667FA0 | ?TextDropWidgetMetaClass@@3VMetaClass@@A
inline extern_var(0x667FA0, class MetaClass, TextDropWidgetMetaClass);

// 0x4B3460 | ?new_TextDropWidget@@YAPAXH@Z
inline void* new_TextDropWidget(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4B3460, arg1);
}

// 0x4B3520 | ?delete_TextDropWidget@@YAXPAXH@Z
inline void delete_TextDropWidget(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4B3520, arg1, arg2);
}

struct TextDropWidget : asNode
{
public:
    // TextDropWidget::`vftable' @ 0x593D48

    // 0x4B2EE0 | ??0TextDropWidget@@QAE@XZ
    inline TextDropWidget()
    {
        stub<member_func_t<void, TextDropWidget>>(0x4B2EE0, this);
    }

    // 0x4B3000 | ?Init@TextDropWidget@@QAEXPAVasCamera@@PAXMMMMMVstring@@H@Z
    inline void Init(class asCamera* arg1, void* arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
        class string arg8, int32_t arg9)
    {
        return stub<member_func_t<void, TextDropWidget, class asCamera*, void*, float, float, float, float, float,
            class string, int32_t>>(0x4B3000, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x4B30F0 | ?GetCount@TextDropWidget@@QAEHXZ
    inline int32_t GetCount()
    {
        return stub<member_func_t<int32_t, TextDropWidget>>(0x4B30F0, this);
    }

    // 0x4B3100 | ?SetString@TextDropWidget@@QAEXVstring@@@Z
    inline void SetString(class string arg1)
    {
        return stub<member_func_t<void, TextDropWidget, class string>>(0x4B3100, this, arg1);
    }

    // 0x4B31C0 | ?SetValue@TextDropWidget@@QAEHH@Z
    inline int32_t SetValue(int32_t arg1)
    {
        return stub<member_func_t<int32_t, TextDropWidget, int32_t>>(0x4B31C0, this, arg1);
    }

    // 0x4B3260 | ?SetHighlight@TextDropWidget@@QAEHH@Z
    inline int32_t SetHighlight(int32_t arg1)
    {
        return stub<member_func_t<int32_t, TextDropWidget, int32_t>>(0x4B3260, this, arg1);
    }

    // 0x4B32D0 | ?Inc@TextDropWidget@@QAEHXZ
    inline int32_t Inc()
    {
        return stub<member_func_t<int32_t, TextDropWidget>>(0x4B32D0, this);
    }

    // 0x4B32E0 | ?Dec@TextDropWidget@@QAEHXZ
    inline int32_t Dec()
    {
        return stub<member_func_t<int32_t, TextDropWidget>>(0x4B32E0, this);
    }

    // 0x4B32F0 | ?IncDrop@TextDropWidget@@QAEHXZ
    inline int32_t IncDrop()
    {
        return stub<member_func_t<int32_t, TextDropWidget>>(0x4B32F0, this);
    }

    // 0x4B3320 | ?DecDrop@TextDropWidget@@QAEHXZ
    inline int32_t DecDrop()
    {
        return stub<member_func_t<int32_t, TextDropWidget>>(0x4B3320, this);
    }

    // 0x4B3350 | ?Capture@TextDropWidget@@QAEHMM@Z
    inline int32_t Capture(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, TextDropWidget, float, float>>(0x4B3350, this, arg1, arg2);
    }

    // 0x4B3390 | ?Switch@TextDropWidget@@QAEXHAAVVector4@@@Z
    inline void Switch(int32_t arg1, class Vector4& arg2)
    {
        return stub<member_func_t<void, TextDropWidget, int32_t, class Vector4&>>(0x4B3390, this, arg1, arg2);
    }

    // 0x4B33C0 | ?IsActive@TextDropWidget@@QAEHXZ
    inline int32_t IsActive()
    {
        return stub<member_func_t<int32_t, TextDropWidget>>(0x4B33C0, this);
    }

    // 0x4B33D0 | ?SetActive@TextDropWidget@@QAEXH@Z
    inline void SetActive(int32_t arg1)
    {
        return stub<member_func_t<void, TextDropWidget, int32_t>>(0x4B33D0, this, arg1);
    }

    // 0x4B33E0 | ?SetDisabledMask@TextDropWidget@@QAEXJ@Z
    inline void SetDisabledMask(int32_t arg1)
    {
        return stub<member_func_t<void, TextDropWidget, int32_t>>(0x4B33E0, this, arg1);
    }

    // 0x4B3400 | ?GetDisabledMask@TextDropWidget@@QAEJXZ
    inline int32_t GetDisabledMask()
    {
        return stub<member_func_t<int32_t, TextDropWidget>>(0x4B3400, this);
    }

    // 0x4B3410 | ?DeclareFields@TextDropWidget@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4B3410);
    }

    // 0x4B2F90 | ??1TextDropWidget@@UAE@XZ
    inline ~TextDropWidget() override
    {
        stub<member_func_t<void, TextDropWidget>>(0x4B2F90, this);
    }

    // 0x4B3570 | ?GetClass@TextDropWidget@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, TextDropWidget>>(0x4B3570, this);
    }

    // 0x4B33B0 | ?Update@TextDropWidget@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, TextDropWidget>>(0x4B33B0, this);
    }
};
