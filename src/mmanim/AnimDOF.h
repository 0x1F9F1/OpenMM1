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
    mmanim:AnimDOF

    0x4B8EF0 | public: virtual void __fastcall mmDrawbridgeInstance::Draw(int) | ?Draw@mmDrawbridgeInstance@@UAIXH@Z
    0x4B8FB0 | public: int __thiscall mmDrawbridgeInstance::InitBridge(char *,char *,int,class Matrix34 *,class Vector3 *) | ?InitBridge@mmDrawbridgeInstance@@QAEHPAD0HPAVMatrix34@@PAVVector3@@@Z
    0x4B8FF0 | public: __thiscall mmAnimDOF::mmAnimDOF(void) | ??0mmAnimDOF@@QAE@XZ
    0x4B9010 | public: __thiscall mmAnimDOF::~mmAnimDOF(void) | ??1mmAnimDOF@@QAE@XZ
    0x4B9020 | public: int __thiscall mmAnimDOF::Init(class mmAnimTrigger *,char *,class Vector3 &,class Vector3 &,int,int *) | ?Init@mmAnimDOF@@QAEHPAVmmAnimTrigger@@PADAAVVector3@@2HPAH@Z
    0x4B93A0 | public: void __thiscall mmAnimDOF::Reset(void) | ?Reset@mmAnimDOF@@QAEXXZ
    0x4B93E0 | public: void __thiscall mmAnimDOF::Update(void) | ?Update@mmAnimDOF@@QAEXXZ
    0x4B9600 | public: void __thiscall mmAnimDOF::SetSwitch(int) | ?SetSwitch@mmAnimDOF@@QAEXH@Z
    0x4B9650 | public: void __thiscall mmAnimDOF::SetState(int) | ?SetState@mmAnimDOF@@QAEXH@Z
    0x4B9690 | public: static void __cdecl mmAnimDOF::DeclareFields(void) | ?DeclareFields@mmAnimDOF@@SAXXZ
    0x4B9820 | public: virtual class MetaClass * __thiscall mmAnimDOF::GetClass(void) | ?GetClass@mmAnimDOF@@UAEPAVMetaClass@@XZ
    0x4B9830 | public: virtual void * __thiscall mmDrawbridgeInstance::`vector deleting destructor'(unsigned int) | ??_EmmDrawbridgeInstance@@UAEPAXI@Z
    0x4B9830 | public: virtual void * __thiscall mmDrawbridgeInstance::`scalar deleting destructor'(unsigned int) | ??_GmmDrawbridgeInstance@@UAEPAXI@Z
    0x4B9850 | public: virtual __thiscall mmDrawbridgeInstance::~mmDrawbridgeInstance(void) | ??1mmDrawbridgeInstance@@UAE@XZ
    0x4B9860 | public: void * __thiscall mmAnimDOF::`vector deleting destructor'(unsigned int) | ??_EmmAnimDOF@@QAEPAXI@Z
    0x4B98C0 | public: __thiscall mmUnhitBangerInstance::mmUnhitBangerInstance(void) | ??0mmUnhitBangerInstance@@QAE@XZ
    0x4B98F0 | public: virtual void __fastcall mmDofBangerInstance::FromMatrix(class Matrix34 const &) | ?FromMatrix@mmDofBangerInstance@@UAIXABVMatrix34@@@Z
    0x4B9900 | public: virtual class Matrix34 & __fastcall mmDofBangerInstance::ToMatrix(class Matrix34 &) | ?ToMatrix@mmDofBangerInstance@@UAIAAVMatrix34@@AAV2@@Z
    0x4B9930 | public: virtual class Vector3 & __fastcall mmDofBangerInstance::GetPos(void) | ?GetPos@mmDofBangerInstance@@UAIAAVVector3@@XZ
    0x4B9960 | public: virtual void * __thiscall mmDofBangerInstance::`scalar deleting destructor'(unsigned int) | ??_GmmDofBangerInstance@@UAEPAXI@Z
    0x4B9960 | public: virtual void * __thiscall mmDofBangerInstance::`vector deleting destructor'(unsigned int) | ??_EmmDofBangerInstance@@UAEPAXI@Z
    0x4B9980 | public: virtual __thiscall mmDofBangerInstance::~mmDofBangerInstance(void) | ??1mmDofBangerInstance@@UAE@XZ
    0x594024 | const mmAnimDOF::`vftable' | ??_7mmAnimDOF@@6B@
    0x594028 | const mmDofBangerInstance::`vftable' | ??_7mmDofBangerInstance@@6B@
    0x594080 | const mmDrawbridgeInstance::`vftable' | ??_7mmDrawbridgeInstance@@6B@
    0x668148 | class MetaClass mmAnimDOFMetaClass | ?mmAnimDOFMetaClass@@3VMetaClass@@A
    0x4B96E0 | void * __cdecl new_mmAnimDOF(int) | ?new_mmAnimDOF@@YAPAXH@Z
    0x4B97B0 | void __cdecl delete_mmAnimDOF(void *,int) | ?delete_mmAnimDOF@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x668148 | ?mmAnimDOFMetaClass@@3VMetaClass@@A
inline extern_var(0x668148, class MetaClass, mmAnimDOFMetaClass);

// 0x4B96E0 | ?new_mmAnimDOF@@YAPAXH@Z
inline void* new_mmAnimDOF(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4B96E0, arg1);
}

// 0x4B97B0 | ?delete_mmAnimDOF@@YAXPAXH@Z
inline void delete_mmAnimDOF(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4B97B0, arg1, arg2);
}

struct mmDrawbridgeInstance : mmDofBangerInstance
{
public:
    // mmDrawbridgeInstance::`vftable' @ 0x594080

    // 0x4B8FB0 | ?InitBridge@mmDrawbridgeInstance@@QAEHPAD0HPAVMatrix34@@PAVVector3@@@Z
    inline int32_t InitBridge(char* arg1, char* arg2, int32_t arg3, class Matrix34* arg4, class Vector3* arg5)
    {
        return stub<
            member_func_t<int32_t, mmDrawbridgeInstance, char*, char*, int32_t, class Matrix34*, class Vector3*>>(
            0x4B8FB0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4B9850 | ??1mmDrawbridgeInstance@@UAE@XZ
    inline ~mmDrawbridgeInstance() override
    {
        stub<member_func_t<void, mmDrawbridgeInstance>>(0x4B9850, this);
    }

    // 0x4B8EF0 | ?Draw@mmDrawbridgeInstance@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmDrawbridgeInstance, int32_t>>(0x4B8EF0, this, arg1);
    }
};

struct mmAnimDOF
{
public:
    // mmAnimDOF::`vftable' @ 0x594024

    // 0x4B8FF0 | ??0mmAnimDOF@@QAE@XZ
    inline mmAnimDOF()
    {
        stub<member_func_t<void, mmAnimDOF>>(0x4B8FF0, this);
    }

    // 0x4B9010 | ??1mmAnimDOF@@QAE@XZ
    inline ~mmAnimDOF()
    {
        stub<member_func_t<void, mmAnimDOF>>(0x4B9010, this);
    }

    // 0x4B9020 | ?Init@mmAnimDOF@@QAEHPAVmmAnimTrigger@@PADAAVVector3@@2HPAH@Z
    inline int32_t Init(
        class mmAnimTrigger* arg1, char* arg2, class Vector3& arg3, class Vector3& arg4, int32_t arg5, int32_t* arg6)
    {
        return stub<member_func_t<int32_t, mmAnimDOF, class mmAnimTrigger*, char*, class Vector3&, class Vector3&,
            int32_t, int32_t*>>(0x4B9020, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4B93A0 | ?Reset@mmAnimDOF@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmAnimDOF>>(0x4B93A0, this);
    }

    // 0x4B93E0 | ?Update@mmAnimDOF@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmAnimDOF>>(0x4B93E0, this);
    }

    // 0x4B9600 | ?SetSwitch@mmAnimDOF@@QAEXH@Z
    inline void SetSwitch(int32_t arg1)
    {
        return stub<member_func_t<void, mmAnimDOF, int32_t>>(0x4B9600, this, arg1);
    }

    // 0x4B9650 | ?SetState@mmAnimDOF@@QAEXH@Z
    inline void SetState(int32_t arg1)
    {
        return stub<member_func_t<void, mmAnimDOF, int32_t>>(0x4B9650, this, arg1);
    }

    // 0x4B9690 | ?DeclareFields@mmAnimDOF@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4B9690);
    }

    // 0x4B9860 | ??_EmmAnimDOF@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x4B9820 | ?GetClass@mmAnimDOF@@UAEPAVMetaClass@@XZ
    virtual inline class MetaClass* GetClass()
    {
        return stub<member_func_t<class MetaClass*, mmAnimDOF>>(0x4B9820, this);
    }
};

struct mmDofBangerInstance : mmUnhitBangerInstance
{
public:
    // mmDofBangerInstance::`vftable' @ 0x594028

    // 0x4BFD20 | ?Init@mmDofBangerInstance@@QAEHPAD0HPAVMatrix34@@PAVVector3@@@Z
    inline int32_t Init(char* arg1, char* arg2, int32_t arg3, class Matrix34* arg4, class Vector3* arg5)
    {
        return stub<
            member_func_t<int32_t, mmDofBangerInstance, char*, char*, int32_t, class Matrix34*, class Vector3*>>(
            0x4BFD20, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4B9980 | ??1mmDofBangerInstance@@UAE@XZ
    inline ~mmDofBangerInstance() override
    {
        stub<member_func_t<void, mmDofBangerInstance>>(0x4B9980, this);
    }

    // 0x4B98F0 | ?FromMatrix@mmDofBangerInstance@@UAIXABVMatrix34@@@Z
    inline void FromMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, mmDofBangerInstance, class Matrix34 const&>>(0x4B98F0, this, arg1);
    }

    // 0x4B9900 | ?ToMatrix@mmDofBangerInstance@@UAIAAVMatrix34@@AAV2@@Z
    inline class Matrix34& ToMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34&, mmDofBangerInstance, class Matrix34&>>(0x4B9900, this, arg1);
    }

    // 0x4B9930 | ?GetPos@mmDofBangerInstance@@UAIAAVVector3@@XZ
    inline class Vector3& GetPos() override
    {
        return stub<member_func_t<class Vector3&, mmDofBangerInstance>>(0x4B9930, this);
    }

    // 0x4BFD10 | ?SizeOf@mmDofBangerInstance@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, mmDofBangerInstance>>(0x4BFD10, this);
    }
};
