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
    mmeffects:mmnumber

    0x4F1440 | public: __thiscall mmNumberFont::mmNumberFont(char *) | ??0mmNumberFont@@QAE@PAD@Z
    0x4F1470 | public: __thiscall mmNumberFont::~mmNumberFont(void) | ??1mmNumberFont@@QAE@XZ
    0x4F14C0 | public: void __thiscall mmNumberFont::LoadFont(char *,int,unsigned int) | ?LoadFont@mmNumberFont@@QAEXPADHI@Z
    0x4F1530 | public: void __thiscall mmNumberFont::LoadLocFont(char *,struct LocString *,int,unsigned int) | ?LoadLocFont@mmNumberFont@@QAEXPADPAULocString@@HI@Z
    0x4F15A0 | public: __thiscall mmNumber::mmNumber(void) | ??0mmNumber@@QAE@XZ
    0x4F15C0 | public: virtual __thiscall mmNumber::~mmNumber(void) | ??1mmNumber@@UAE@XZ
    0x4F15D0 | public: void __thiscall mmNumber::Init(class mmNumberFont *,float,float) | ?Init@mmNumber@@QAEXPAVmmNumberFont@@MM@Z
    0x4F15F0 | public: void __thiscall mmNumber::SetString(char *) | ?SetString@mmNumber@@QAEXPAD@Z
    0x4F1620 | public: void __cdecl mmNumber::Printf(char const *,...) | ?Printf@mmNumber@@QAAXPBDZZ
    0x4F1640 | public: virtual void __thiscall mmNumber::Update(void) | ?Update@mmNumber@@UAEXXZ
    0x4F1660 | public: virtual void __thiscall mmNumber::Cull(void) | ?Cull@mmNumber@@UAEXXZ
    0x4F1740 | public: void __thiscall mmNumber::AddWidgets(class Bank *) | ?AddWidgets@mmNumber@@QAEXPAVBank@@@Z
    0x4F1750 | public: static void __cdecl mmNumber::DeclareFields(void) | ?DeclareFields@mmNumber@@SAXXZ
    0x4F18B0 | public: virtual class MetaClass * __thiscall mmNumber::GetClass(void) | ?GetClass@mmNumber@@UAEPAVMetaClass@@XZ
    0x595030 | const mmNumber::`vftable' | ??_7mmNumber@@6B@
    0x67B848 | class MetaClass mmNumberMetaClass | ?mmNumberMetaClass@@3VMetaClass@@A
    0x4F17A0 | void * __cdecl new_mmNumber(int) | ?new_mmNumber@@YAPAXH@Z
    0x4F1860 | void __cdecl delete_mmNumber(void *,int) | ?delete_mmNumber@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x67B848 | ?mmNumberMetaClass@@3VMetaClass@@A
inline extern_var(0x67B848, class MetaClass, mmNumberMetaClass);

// 0x4F17A0 | ?new_mmNumber@@YAPAXH@Z
inline void* new_mmNumber(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4F17A0, arg1);
}

// 0x4F1860 | ?delete_mmNumber@@YAXPAXH@Z
inline void delete_mmNumber(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4F1860, arg1, arg2);
}

class mmNumberFont
{
public:
    // 0x4F1440 | ??0mmNumberFont@@QAE@PAD@Z
    inline mmNumberFont(char* arg1)
    {
        stub<member_func_t<void, mmNumberFont, char*>>(0x4F1440, this, arg1);
    }

    // 0x4F1470 | ??1mmNumberFont@@QAE@XZ
    inline ~mmNumberFont()
    {
        stub<member_func_t<void, mmNumberFont>>(0x4F1470, this);
    }

    // 0x4F14C0 | ?LoadFont@mmNumberFont@@QAEXPADHI@Z
    inline void LoadFont(char* arg1, int32_t arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, mmNumberFont, char*, int32_t, uint32_t>>(0x4F14C0, this, arg1, arg2, arg3);
    }

    // 0x4F1530 | ?LoadLocFont@mmNumberFont@@QAEXPADPAULocString@@HI@Z
    inline void LoadLocFont(char* arg1, struct LocString* arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, mmNumberFont, char*, struct LocString*, int32_t, uint32_t>>(
            0x4F1530, this, arg1, arg2, arg3, arg4);
    }
};

struct mmNumber : asNode
{
public:
    // mmNumber::`vftable' @ 0x595030

    // 0x4F15A0 | ??0mmNumber@@QAE@XZ
    inline mmNumber()
    {
        stub<member_func_t<void, mmNumber>>(0x4F15A0, this);
    }

    // 0x4F15D0 | ?Init@mmNumber@@QAEXPAVmmNumberFont@@MM@Z
    inline void Init(class mmNumberFont* arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, mmNumber, class mmNumberFont*, float, float>>(0x4F15D0, this, arg1, arg2, arg3);
    }

    // 0x4F15F0 | ?SetString@mmNumber@@QAEXPAD@Z
    inline void SetString(char* arg1)
    {
        return stub<member_func_t<void, mmNumber, char*>>(0x4F15F0, this, arg1);
    }

    // 0x4F1620 | ?Printf@mmNumber@@QAAXPBDZZ
    // Skipped (Variable Arguments)

    // 0x4F1740 | ?AddWidgets@mmNumber@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, mmNumber, class Bank*>>(0x4F1740, this, arg1);
    }

    // 0x4F1750 | ?DeclareFields@mmNumber@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4F1750);
    }

    // 0x4F15C0 | ??1mmNumber@@UAE@XZ
    inline ~mmNumber() override
    {
        stub<member_func_t<void, mmNumber>>(0x4F15C0, this);
    }

    // 0x4F18B0 | ?GetClass@mmNumber@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmNumber>>(0x4F18B0, this);
    }

    // 0x4F1660 | ?Cull@mmNumber@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmNumber>>(0x4F1660, this);
    }

    // 0x4F1640 | ?Update@mmNumber@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmNumber>>(0x4F1640, this);
    }
};
