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
    mmgame:gameedit

    0x40E8C0 | public: __thiscall mmGameEdit::mmGameEdit(void) | ??0mmGameEdit@@QAE@XZ
    0x40E990 | public: virtual __thiscall mmGameEdit::~mmGameEdit(void) | ??1mmGameEdit@@UAE@XZ
    0x40EA40 | public: int __thiscall mmGameEdit::Init(void) | ?Init@mmGameEdit@@QAEHXZ
    0x40EAF0 | public: virtual void __thiscall mmGameEdit::InitMyPlayer(void) | ?InitMyPlayer@mmGameEdit@@UAEXXZ
    0x40EB60 | public: virtual void __thiscall mmGameEdit::InitHUD(void) | ?InitHUD@mmGameEdit@@UAEXXZ
    0x40EBA0 | public: virtual void __thiscall mmGameEdit::InitGameObjects(void) | ?InitGameObjects@mmGameEdit@@UAEXXZ
    0x40EC90 | public: void __thiscall mmGameEdit::RegisterMapObjects(void) | ?RegisterMapObjects@mmGameEdit@@QAEXXZ
    0x40ECA0 | public: virtual void __thiscall mmGameEdit::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmGameEdit@@UAEXH@Z
    0x40ECB0 | public: virtual void __thiscall mmGameEdit::Reset(void) | ?Reset@mmGameEdit@@UAEXXZ
    0x40ED40 | public: virtual void __thiscall mmGameEdit::Update(void) | ?Update@mmGameEdit@@UAEXXZ
    0x40ED60 | public: virtual void __thiscall mmGameEdit::UpdateGameInput(int) | ?UpdateGameInput@mmGameEdit@@UAEXH@Z
    0x40ED70 | public: virtual void __thiscall mmGameEdit::UpdateGame(void) | ?UpdateGame@mmGameEdit@@UAEXXZ
    0x40EDB0 | public: static void __cdecl mmGameEdit::DeclareFields(void) | ?DeclareFields@mmGameEdit@@SAXXZ
    0x40EF20 | public: virtual class MetaClass * __thiscall mmGameEdit::GetClass(void) | ?GetClass@mmGameEdit@@UAEPAVMetaClass@@XZ
    0x40F080 | public: virtual void * __thiscall mmGameEdit::`vector deleting destructor'(unsigned int) | ??_EmmGameEdit@@UAEPAXI@Z
    0x40F0E0 | public: virtual void __thiscall mmGameEdit::InitOtherPlayers(void) | ?InitOtherPlayers@mmGameEdit@@UAEXXZ
    0x40F0F0 | public: virtual void __thiscall mmGameEdit::NextRace(void) | ?NextRace@mmGameEdit@@UAEXXZ
    0x40F100 | public: virtual class mmWaypoints * __thiscall mmGameEdit::GetWaypoints(void) | ?GetWaypoints@mmGameEdit@@UAEPAVmmWaypoints@@XZ
    0x58F690 | const mmGameEdit::`vftable' | ??_7mmGameEdit@@6B@
    0x609318 | class MetaClass mmGameEditMetaClass | ?mmGameEditMetaClass@@3VMetaClass@@A
    0x40EE00 | void * __cdecl new_mmGameEdit(int) | ?new_mmGameEdit@@YAPAXH@Z
    0x40EED0 | void __cdecl delete_mmGameEdit(void *,int) | ?delete_mmGameEdit@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x609318 | ?mmGameEditMetaClass@@3VMetaClass@@A
inline extern_var(0x609318, class MetaClass, mmGameEditMetaClass);

// 0x40EE00 | ?new_mmGameEdit@@YAPAXH@Z
inline void* new_mmGameEdit(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x40EE00, arg1);
}

// 0x40EED0 | ?delete_mmGameEdit@@YAXPAXH@Z
inline void delete_mmGameEdit(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x40EED0, arg1, arg2);
}

struct mmGameEdit : mmGame
{
public:
    // mmGameEdit::`vftable' @ 0x58F690

    // 0x40E8C0 | ??0mmGameEdit@@QAE@XZ
    inline mmGameEdit()
    {
        // stub<member_func_t<void, mmGameEdit>>(0x40E8C0, this);

        unimplemented();
    }

    // 0x40EA40 | ?Init@mmGameEdit@@QAEHXZ
    inline int32_t Init()
    {
        return stub<member_func_t<int32_t, mmGameEdit>>(0x40EA40, this);
    }

    // 0x40EC90 | ?RegisterMapObjects@mmGameEdit@@QAEXXZ
    inline void RegisterMapObjects()
    {
        return stub<member_func_t<void, mmGameEdit>>(0x40EC90, this);
    }

    // 0x40EDB0 | ?DeclareFields@mmGameEdit@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x40EDB0);
    }

    // 0x40E990 | ??1mmGameEdit@@UAE@XZ
    inline ~mmGameEdit() override = 0
    {
        // stub<member_func_t<void, mmGameEdit>>(0x40E990, this);

        unimplemented();
    }

    // 0x40EF20 | ?GetClass@mmGameEdit@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmGameEdit>>(0x40EF20, this);
    }

    // 0x40ED40 | ?Update@mmGameEdit@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmGameEdit>>(0x40ED40, this);
    }

    // 0x40ECB0 | ?Reset@mmGameEdit@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmGameEdit>>(0x40ECB0, this);
    }

    // 0x40EAF0 | ?InitMyPlayer@mmGameEdit@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmGameEdit>>(0x40EAF0, this);
    }

    // 0x40F0E0 | ?InitOtherPlayers@mmGameEdit@@UAEXXZ
    inline void InitOtherPlayers() override
    {
        return stub<member_func_t<void, mmGameEdit>>(0x40F0E0, this);
    }

    // 0x40EBA0 | ?InitGameObjects@mmGameEdit@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmGameEdit>>(0x40EBA0, this);
    }

    // 0x40EB60 | ?InitHUD@mmGameEdit@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmGameEdit>>(0x40EB60, this);
    }

    // 0x40ED60 | ?UpdateGameInput@mmGameEdit@@UAEXH@Z
    inline void UpdateGameInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmGameEdit, int32_t>>(0x40ED60, this, arg1);
    }

    // 0x40ECA0 | ?UpdateDebugKeyInput@mmGameEdit@@UAEXH@Z
    inline void UpdateDebugKeyInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmGameEdit, int32_t>>(0x40ECA0, this, arg1);
    }

    // 0x40ED70 | ?UpdateGame@mmGameEdit@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmGameEdit>>(0x40ED70, this);
    }

    // 0x40F0F0 | ?NextRace@mmGameEdit@@UAEXXZ
    inline void NextRace() override
    {
        return stub<member_func_t<void, mmGameEdit>>(0x40F0F0, this);
    }

    // 0x40F100 | ?GetWaypoints@mmGameEdit@@UAEPAVmmWaypoints@@XZ
    inline class mmWaypoints* GetWaypoints() override
    {
        return stub<member_func_t<class mmWaypoints*, mmGameEdit>>(0x40F100, this);
    }
};
