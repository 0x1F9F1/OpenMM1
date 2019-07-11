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
    mmcar:skid

    0x46F420 | public: __thiscall mmSkid::mmSkid(void) | ??0mmSkid@@QAE@XZ
    0x46F440 | public: void __thiscall mmSkid::Init(char *) | ?Init@mmSkid@@QAEXPAD@Z
    0x46F460 | public: virtual __thiscall mmSkid::~mmSkid(void) | ??1mmSkid@@UAE@XZ
    0x46F470 | public: void __thiscall mmSkid::AddSkid(class Matrix34 &,class Vector3 *,class agiPhysParameters *,float) | ?AddSkid@mmSkid@@QAEXAAVMatrix34@@PAVVector3@@PAVagiPhysParameters@@M@Z
    0x46F630 | public: virtual void __fastcall mmSkid::FromMatrix(class Matrix34 const &) | ?FromMatrix@mmSkid@@UAIXABVMatrix34@@@Z
    0x46F640 | public: virtual class Matrix34 & __fastcall mmSkid::ToMatrix(class Matrix34 &) | ?ToMatrix@mmSkid@@UAIAAVMatrix34@@AAV2@@Z
    0x46F650 | public: virtual class Vector3 & __fastcall mmSkid::GetPos(void) | ?GetPos@mmSkid@@UAIAAVVector3@@XZ
    0x46F660 | public: void __thiscall mmSkid::Update(void) | ?Update@mmSkid@@QAEXXZ
    0x46F670 | public: virtual void __fastcall mmSkid::Draw(int) | ?Draw@mmSkid@@UAIXH@Z
    0x46F700 | public: virtual void __fastcall mmSkid::DrawShadow(void) | ?DrawShadow@mmSkid@@UAIXXZ
    0x46F710 | public: __thiscall mmSkidManager::mmSkidManager(void) | ??0mmSkidManager@@QAE@XZ
    0x46F740 | public: virtual __thiscall mmSkidManager::~mmSkidManager(void) | ??1mmSkidManager@@UAE@XZ
    0x46F7A0 | public: void __thiscall mmSkidManager::Init(char *,int,class mmWheel *) | ?Init@mmSkidManager@@QAEXPADHPAVmmWheel@@@Z
    0x46F860 | public: void __thiscall mmSkidManager::ReInit(class mmWheel *) | ?ReInit@mmSkidManager@@QAEXPAVmmWheel@@@Z
    0x46F890 | public: virtual void __thiscall mmSkidManager::Reset(void) | ?Reset@mmSkidManager@@UAEXXZ
    0x46F8E0 | public: void __thiscall mmSkidManager::LayTrack(void) | ?LayTrack@mmSkidManager@@QAEXXZ
    0x46FC70 | public: virtual void __thiscall mmSkidManager::Update(void) | ?Update@mmSkidManager@@UAEXXZ
    0x46FD50 | public: static void __cdecl mmSkid::DeclareFields(void) | ?DeclareFields@mmSkid@@SAXXZ
    0x46FED0 | public: virtual class MetaClass * __thiscall mmSkid::GetClass(void) | ?GetClass@mmSkid@@UAEPAVMetaClass@@XZ
    0x46FEE0 | public: static void __cdecl mmSkidManager::DeclareFields(void) | ?DeclareFields@mmSkidManager@@SAXXZ
    0x470040 | public: virtual class MetaClass * __thiscall mmSkidManager::GetClass(void) | ?GetClass@mmSkidManager@@UAEPAVMetaClass@@XZ
    0x470050 | public: virtual void * __thiscall mmSkid::`vector deleting destructor'(unsigned int) | ??_EmmSkid@@UAEPAXI@Z
    0x4700B0 | public: virtual void * __thiscall mmSkidManager::`vector deleting destructor'(unsigned int) | ??_EmmSkidManager@@UAEPAXI@Z
    0x470110 | public: __thiscall Matrix34::Matrix34(void) | ??0Matrix34@@QAE@XZ
    0x470120 | public: virtual void __thiscall mmSkid::AddWidgets(class Bank *) | ?AddWidgets@mmSkid@@UAEXPAVBank@@@Z
    0x591230 | const mmSkid::`vftable' | ??_7mmSkid@@6B@
    0x5912A8 | const mmSkidManager::`vftable' | ??_7mmSkidManager@@6B@
    0x60A230 | class MetaClass mmSkidMetaClass | ?mmSkidMetaClass@@3VMetaClass@@A
    0x60A258 | class MetaClass mmSkidManagerMetaClass | ?mmSkidManagerMetaClass@@3VMetaClass@@A
    0x46FDA0 | void * __cdecl new_mmSkid(int) | ?new_mmSkid@@YAPAXH@Z
    0x46FE80 | void __cdecl delete_mmSkid(void *,int) | ?delete_mmSkid@@YAXPAXH@Z
    0x46FF30 | void * __cdecl new_mmSkidManager(int) | ?new_mmSkidManager@@YAPAXH@Z
    0x46FFF0 | void __cdecl delete_mmSkidManager(void *,int) | ?delete_mmSkidManager@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x60A230 | ?mmSkidMetaClass@@3VMetaClass@@A
inline extern_var(0x60A230, class MetaClass, mmSkidMetaClass);

// 0x60A258 | ?mmSkidManagerMetaClass@@3VMetaClass@@A
inline extern_var(0x60A258, class MetaClass, mmSkidManagerMetaClass);

// 0x46FDA0 | ?new_mmSkid@@YAPAXH@Z
inline void* new_mmSkid(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x46FDA0, arg1);
}

// 0x46FE80 | ?delete_mmSkid@@YAXPAXH@Z
inline void delete_mmSkid(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x46FE80, arg1, arg2);
}

// 0x46FF30 | ?new_mmSkidManager@@YAPAXH@Z
inline void* new_mmSkidManager(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x46FF30, arg1);
}

// 0x46FFF0 | ?delete_mmSkidManager@@YAXPAXH@Z
inline void delete_mmSkidManager(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x46FFF0, arg1, arg2);
}

struct mmSkid : mmInstance
{
public:
    // mmSkid::`vftable' @ 0x591230

    // 0x46F420 | ??0mmSkid@@QAE@XZ
    inline mmSkid()
    {
        stub<member_func_t<void, mmSkid>>(0x46F420, this);
    }

    // 0x46F440 | ?Init@mmSkid@@QAEXPAD@Z
    inline void Init(char* arg1)
    {
        return stub<member_func_t<void, mmSkid, char*>>(0x46F440, this, arg1);
    }

    // 0x46F470 | ?AddSkid@mmSkid@@QAEXAAVMatrix34@@PAVVector3@@PAVagiPhysParameters@@M@Z
    inline void AddSkid(class Matrix34& arg1, class Vector3* arg2, class agiPhysParameters* arg3, float arg4)
    {
        return stub<member_func_t<void, mmSkid, class Matrix34&, class Vector3*, class agiPhysParameters*, float>>(
            0x46F470, this, arg1, arg2, arg3, arg4);
    }

    // 0x46F660 | ?Update@mmSkid@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmSkid>>(0x46F660, this);
    }

    // 0x46FD50 | ?DeclareFields@mmSkid@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x46FD50);
    }

    // 0x46F460 | ??1mmSkid@@UAE@XZ
    inline ~mmSkid() override
    {
        stub<member_func_t<void, mmSkid>>(0x46F460, this);
    }

    // 0x46FED0 | ?GetClass@mmSkid@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmSkid>>(0x46FED0, this);
    }

    // 0x46F630 | ?FromMatrix@mmSkid@@UAIXABVMatrix34@@@Z
    inline void FromMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, mmSkid, class Matrix34 const&>>(0x46F630, this, arg1);
    }

    // 0x46F640 | ?ToMatrix@mmSkid@@UAIAAVMatrix34@@AAV2@@Z
    inline class Matrix34& ToMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34&, mmSkid, class Matrix34&>>(0x46F640, this, arg1);
    }

    // 0x46F650 | ?GetPos@mmSkid@@UAIAAVVector3@@XZ
    inline class Vector3& GetPos() override
    {
        return stub<member_func_t<class Vector3&, mmSkid>>(0x46F650, this);
    }

    // 0x46F670 | ?Draw@mmSkid@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmSkid, int32_t>>(0x46F670, this, arg1);
    }

    // 0x46F700 | ?DrawShadow@mmSkid@@UAIXXZ
    inline void DrawShadow() override
    {
        return stub<member_func_t<void, mmSkid>>(0x46F700, this);
    }

    // 0x470120 | ?AddWidgets@mmSkid@@UAEXPAVBank@@@Z
    virtual inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, mmSkid, class Bank*>>(0x470120, this, arg1);
    }
};

struct mmSkidManager : asNode
{
public:
    // mmSkidManager::`vftable' @ 0x5912A8

    // 0x46F710 | ??0mmSkidManager@@QAE@XZ
    inline mmSkidManager()
    {
        stub<member_func_t<void, mmSkidManager>>(0x46F710, this);
    }

    // 0x46F7A0 | ?Init@mmSkidManager@@QAEXPADHPAVmmWheel@@@Z
    inline void Init(char* arg1, int32_t arg2, class mmWheel* arg3)
    {
        return stub<member_func_t<void, mmSkidManager, char*, int32_t, class mmWheel*>>(
            0x46F7A0, this, arg1, arg2, arg3);
    }

    // 0x46F860 | ?ReInit@mmSkidManager@@QAEXPAVmmWheel@@@Z
    inline void ReInit(class mmWheel* arg1)
    {
        return stub<member_func_t<void, mmSkidManager, class mmWheel*>>(0x46F860, this, arg1);
    }

    // 0x46F8E0 | ?LayTrack@mmSkidManager@@QAEXXZ
    inline void LayTrack()
    {
        return stub<member_func_t<void, mmSkidManager>>(0x46F8E0, this);
    }

    // 0x46FEE0 | ?DeclareFields@mmSkidManager@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x46FEE0);
    }

    // 0x46F740 | ??1mmSkidManager@@UAE@XZ
    inline ~mmSkidManager() override
    {
        stub<member_func_t<void, mmSkidManager>>(0x46F740, this);
    }

    // 0x470040 | ?GetClass@mmSkidManager@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmSkidManager>>(0x470040, this);
    }

    // 0x46FC70 | ?Update@mmSkidManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmSkidManager>>(0x46FC70, this);
    }

    // 0x46F890 | ?Reset@mmSkidManager@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmSkidManager>>(0x46F890, this);
    }
};
