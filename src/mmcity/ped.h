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
    mmcity:ped

    0x48AB80 | public: __thiscall mmPed::mmPed(void) | ??0mmPed@@QAE@XZ
    0x48ABA0 | public: void __thiscall mmPed::Init(char *,class Vector3 &) | ?Init@mmPed@@QAEXPADAAVVector3@@@Z
    0x48AC30 | public: virtual __thiscall mmPed::~mmPed(void) | ??1mmPed@@UAE@XZ
    0x48AC40 | public: void __thiscall mmPed::Update(void) | ?Update@mmPed@@QAEXXZ
    0x48AC60 | public: virtual void __fastcall mmPed::Draw(int) | ?Draw@mmPed@@UAIXH@Z
    0x48AC90 | public: virtual class Matrix34 & __fastcall mmPed::ToMatrix(class Matrix34 &) | ?ToMatrix@mmPed@@UAIAAVMatrix34@@AAV2@@Z
    0x48ACE0 | public: __thiscall mmPedManager::mmPedManager(void) | ??0mmPedManager@@QAE@XZ
    0x48AD00 | public: virtual __thiscall mmPedManager::~mmPedManager(void) | ??1mmPedManager@@UAE@XZ
    0x48AD10 | public: void __thiscall mmPedManager::Init(int) | ?Init@mmPedManager@@QAEXH@Z
    0x48ADC0 | public: virtual void __thiscall mmPedManager::Update(void) | ?Update@mmPedManager@@UAEXXZ
    0x48ADF0 | public: static void __cdecl mmPed::DeclareFields(void) | ?DeclareFields@mmPed@@SAXXZ
    0x48AF70 | public: virtual class MetaClass * __thiscall mmPed::GetClass(void) | ?GetClass@mmPed@@UAEPAVMetaClass@@XZ
    0x48AF80 | public: static void __cdecl mmPedManager::DeclareFields(void) | ?DeclareFields@mmPedManager@@SAXXZ
    0x48B0E0 | public: virtual class MetaClass * __thiscall mmPedManager::GetClass(void) | ?GetClass@mmPedManager@@UAEPAVMetaClass@@XZ
    0x48B0F0 | public: virtual void * __thiscall mmPed::`vector deleting destructor'(unsigned int) | ??_EmmPed@@UAEPAXI@Z
    0x48B150 | public: virtual void * __thiscall mmPedManager::`vector deleting destructor'(unsigned int) | ??_EmmPedManager@@UAEPAXI@Z
    0x5920C0 | const mmPed::`vftable' | ??_7mmPed@@6B@
    0x592120 | const mmPedManager::`vftable' | ??_7mmPedManager@@6B@
    0x667A40 | class MetaClass mmPedManagerMetaClass | ?mmPedManagerMetaClass@@3VMetaClass@@A
    0x667A68 | class MetaClass mmPedMetaClass | ?mmPedMetaClass@@3VMetaClass@@A
    0x48AE40 | void * __cdecl new_mmPed(int) | ?new_mmPed@@YAPAXH@Z
    0x48AF20 | void __cdecl delete_mmPed(void *,int) | ?delete_mmPed@@YAXPAXH@Z
    0x48AFD0 | void * __cdecl new_mmPedManager(int) | ?new_mmPedManager@@YAPAXH@Z
    0x48B090 | void __cdecl delete_mmPedManager(void *,int) | ?delete_mmPedManager@@YAXPAXH@Z
*/

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
        // stub<member_func_t<void, mmPed>>(0x48AB80, this);

        unimplemented();
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
    inline ~mmPed() override = 0
    {
        // stub<member_func_t<void, mmPed>>(0x48AC30, this);

        unimplemented();
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
        // stub<member_func_t<void, mmPedManager>>(0x48ACE0, this);

        unimplemented();
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
    inline ~mmPedManager() override = 0
    {
        // stub<member_func_t<void, mmPedManager>>(0x48AD00, this);

        unimplemented();
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
