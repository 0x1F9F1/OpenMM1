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

// mmanim:AnimDOF

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
