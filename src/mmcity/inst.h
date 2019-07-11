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

// mmcity:inst

#include "hooking.h"

// 0x488100 | ?formatf@@YAPADPBDZZ
// Skipped (Variable Arguments)

// 0x488620 | ?GetPolyInfo@@YAHPAVagiMeshSet@@@Z
inline int32_t GetPolyInfo(class agiMeshSet* arg1)
{
    return stub<cdecl_t<int32_t, class agiMeshSet*>>(0x488620, arg1);
}

// 0x653838 | ?mmInstanceMetaClass@@3VMetaClass@@A
inline extern_var(0x653838, class MetaClass, mmInstanceMetaClass);

// 0x653860 | ?mmInstanceHeap@@3V?$mmHeap@H@@A
inline extern_var(0x653860, class mmHeap<int32_t>, mmInstanceHeap);

// 0x667870 | ?mmMatrixInstanceMetaClass@@3VMetaClass@@A
inline extern_var(0x667870, class MetaClass, mmMatrixInstanceMetaClass);

// 0x6678B0 | ?mmFacadeInstanceMetaClass@@3VMetaClass@@A
inline extern_var(0x6678B0, class MetaClass, mmFacadeInstanceMetaClass);

// 0x6678D8 | ?mmYInstanceMetaClass@@3VMetaClass@@A
inline extern_var(0x6678D8, class MetaClass, mmYInstanceMetaClass);

// 0x667910 | ?mmBuildingInstanceMetaClass@@3VMetaClass@@A
inline extern_var(0x667910, class MetaClass, mmBuildingInstanceMetaClass);

// 0x6679C8 | ?mmShearInstanceMetaClass@@3VMetaClass@@A
inline extern_var(0x6679C8, class MetaClass, mmShearInstanceMetaClass);

// 0x6679F8 | ?mmStaticInstanceMetaClass@@3VMetaClass@@A
inline extern_var(0x6679F8, class MetaClass, mmStaticInstanceMetaClass);

// 0x488B50 | ?MatrixFromPoints@@YAXAAVMatrix34@@AAVVector3@@1M@Z
inline void MatrixFromPoints(class Matrix34& arg1, class Vector3& arg2, class Vector3& arg3, float arg4)
{
    return stub<cdecl_t<void, class Matrix34&, class Vector3&, class Vector3&, float>>(
        0x488B50, arg1, arg2, arg3, arg4);
}

// 0x489E10 | ?delete_mmInstance@@YAXPAXH@Z
inline void delete_mmInstance(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x489E10, arg1, arg2);
}

// 0x489EC0 | ?delete_mmYInstance@@YAXPAXH@Z
inline void delete_mmYInstance(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x489EC0, arg1, arg2);
}

// 0x489F70 | ?new_mmMatrixInstance@@YAPAXH@Z
inline void* new_mmMatrixInstance(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x489F70, arg1);
}

// 0x48A050 | ?delete_mmMatrixInstance@@YAXPAXH@Z
inline void delete_mmMatrixInstance(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x48A050, arg1, arg2);
}

// 0x48A100 | ?new_mmShearInstance@@YAPAXH@Z
inline void* new_mmShearInstance(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x48A100, arg1);
}

// 0x48A1F0 | ?delete_mmShearInstance@@YAXPAXH@Z
inline void delete_mmShearInstance(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x48A1F0, arg1, arg2);
}

// 0x48A2A0 | ?new_mmBuildingInstance@@YAPAXH@Z
inline void* new_mmBuildingInstance(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x48A2A0, arg1);
}

// 0x48A390 | ?delete_mmBuildingInstance@@YAXPAXH@Z
inline void delete_mmBuildingInstance(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x48A390, arg1, arg2);
}

// 0x48A440 | ?new_mmStaticInstance@@YAPAXH@Z
inline void* new_mmStaticInstance(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x48A440, arg1);
}

// 0x48A520 | ?delete_mmStaticInstance@@YAXPAXH@Z
inline void delete_mmStaticInstance(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x48A520, arg1, arg2);
}

// 0x48A5D0 | ?new_mmFacadeInstance@@YAPAXH@Z
inline void* new_mmFacadeInstance(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x48A5D0, arg1);
}

// 0x48A6B0 | ?delete_mmFacadeInstance@@YAXPAXH@Z
inline void delete_mmFacadeInstance(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x48A6B0, arg1, arg2);
}

class mmInstance : Base
{
public:
    // mmInstance::`vftable' @ 0x591EC0

    // 0x4263D0 | ??3mmInstance@@SAXPAX@Z
    static inline void operator delete(void* arg1)
    {
        return stub<cdecl_t<void, void*>>(0x4263D0, arg1);
    }

    // 0x487F20 | ??0mmInstance@@QAE@XZ
    inline mmInstance()
    {
        stub<member_func_t<void, mmInstance>>(0x487F20, this);
    }

    // 0x488120 | ?GetResidentMeshSet@mmInstance@@QAEPAVagiMeshSet@@HHH@Z
    inline class agiMeshSet* GetResidentMeshSet(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<class agiMeshSet*, mmInstance, int32_t, int32_t, int32_t>>(
            0x488120, this, arg1, arg2, arg3);
    }

    // 0x4881B0 | ?GetMeshSetSet@mmInstance@@SAHPADH0PAVVector3@@@Z
    static inline int32_t GetMeshSetSet(char* arg1, int32_t arg2, char* arg3, class Vector3* arg4)
    {
        return stub<cdecl_t<int32_t, char*, int32_t, char*, class Vector3*>>(0x4881B0, arg1, arg2, arg3, arg4);
    }

    // 0x488680 | ?ResetAll@mmInstance@@SAXXZ
    static inline void ResetAll()
    {
        return stub<cdecl_t<void>>(0x488680);
    }

    // 0x488790 | ?InitMeshes@mmInstance@@QAEXPADH0PAVVector3@@@Z
    inline void InitMeshes(char* arg1, int32_t arg2, char* arg3, class Vector3* arg4)
    {
        return stub<member_func_t<void, mmInstance, char*, int32_t, char*, class Vector3*>>(
            0x488790, this, arg1, arg2, arg3, arg4);
    }

    // 0x4887D0 | ?AddMeshes@mmInstance@@QAEXPADH0PAVVector3@@@Z
    inline void AddMeshes(char* arg1, int32_t arg2, char* arg3, class Vector3* arg4)
    {
        return stub<member_func_t<void, mmInstance, char*, int32_t, char*, class Vector3*>>(
            0x4887D0, this, arg1, arg2, arg3, arg4);
    }

    // 0x489B20 | ?DrawDropShadow@mmInstance@@QAEXHHABVMatrix34@@@Z
    inline void DrawDropShadow(int32_t arg1, int32_t arg2, class Matrix34 const& arg3)
    {
        return stub<member_func_t<void, mmInstance, int32_t, int32_t, class Matrix34 const&>>(
            0x489B20, this, arg1, arg2, arg3);
    }

    // 0x489DC0 | ?DeclareFields@mmInstance@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x489DC0);
    }

    // 0x5ADF08 | ?LodTable@mmInstance@@2PAY132MA
    static inline extern_var(0x5ADF08, float (*)[3][4], LodTable);

    // 0x64F830 | ?MeshSetNames@mmInstance@@2PAPADA
    static inline extern_var(0x64F830, char**, MeshSetNames);

    // 0x653830 | ?DynamicLighter@mmInstance@@2P6AXPAEPAI1PAVagiMeshSet@@@ZA
    static inline extern_var(
        0x653830, void(__cdecl*)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*), DynamicLighter);

    // 0x653870 | ?MeshSetTable@mmInstance@@2PAUMeshSetTableEntry@1@A
    static inline extern_var(0x653870, struct mmInstance::MeshSetTableEntry*, MeshSetTable);

    // 0x667898 | ?ShowLights@mmInstance@@2HA
    static inline extern_var(0x667898, int32_t, ShowLights);

    // 0x667908 | ?LodTableIndex@mmInstance@@2HA
    static inline extern_var(0x667908, int32_t, LodTableIndex);

    // 0x6679C0 | ?StaticLighter@mmInstance@@2P6AXPAEPAI1PAVagiMeshSet@@@ZA
    static inline extern_var(
        0x6679C0, void(__cdecl*)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*), StaticLighter);

    // 0x667A30 | ?MeshSetSetCount@mmInstance@@2HA
    static inline extern_var(0x667A30, int32_t, MeshSetSetCount);

    // 0x487F50 | ??1mmInstance@@UAE@XZ
    inline ~mmInstance() override
    {
        stub<member_func_t<void, mmInstance>>(0x487F50, this);
    }

    // 0x489E60 | ?GetClass@mmInstance@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmInstance>>(0x489E60, this);
    }

    // 0x567350 | __purecall
    virtual inline void FromMatrix(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, mmInstance, class Matrix34 const&>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline class Matrix34& ToMatrix(class Matrix34& arg1)
    {
        return stub<member_func_t<class Matrix34&, mmInstance, class Matrix34&>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline class Vector3& GetPos()
    {
        return stub<member_func_t<class Vector3&, mmInstance>>(0x567350, this);
    }

    // 0x430710 | ?GetEntity@mmInstance@@UAEPAVmmPhysEntity@@XZ
    virtual inline class mmPhysEntity* GetEntity()
    {
        return stub<member_func_t<class mmPhysEntity*, mmInstance>>(0x430710, this);
    }

    // 0x430720 | ?AttachEntity@mmInstance@@UAEPAVmmPhysEntity@@XZ
    virtual inline class mmPhysEntity* AttachEntity()
    {
        return stub<member_func_t<class mmPhysEntity*, mmInstance>>(0x430720, this);
    }

    // 0x430730 | ?GetVelocity@mmInstance@@UAE?AVVector3@@XZ
    virtual inline class Vector3 GetVelocity()
    {
        return stub<member_func_t<class Vector3, mmInstance>>(0x430730, this);
    }

    // 0x430750 | ?Impact@mmInstance@@UAEXPAV1@PAVVector3@@@Z
    virtual inline void Impact(class mmInstance* arg1, class Vector3* arg2)
    {
        return stub<member_func_t<void, mmInstance, class mmInstance*, class Vector3*>>(0x430750, this, arg1, arg2);
    }

    // 0x430760 | ?Detach@mmInstance@@UAEXXZ
    virtual inline void Detach()
    {
        return stub<member_func_t<void, mmInstance>>(0x430760, this);
    }

    // 0x487FF0 | ?Draw@mmInstance@@UAIXH@Z
    virtual inline void Draw(int32_t arg1)
    {
        return stub<member_func_t<void, mmInstance, int32_t>>(0x487FF0, this, arg1);
    }

    // 0x488040 | ?DrawShadow@mmInstance@@UAIXXZ
    virtual inline void DrawShadow()
    {
        return stub<member_func_t<void, mmInstance>>(0x488040, this);
    }

    // 0x488050 | ?DrawGlow@mmInstance@@UAIXXZ
    virtual inline void DrawGlow()
    {
        return stub<member_func_t<void, mmInstance>>(0x488050, this);
    }

    // 0x487F60 | ?Relight@mmInstance@@UAIXXZ
    virtual inline void Relight()
    {
        return stub<member_func_t<void, mmInstance>>(0x487F60, this);
    }

    // 0x488660 | ?SizeOf@mmInstance@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, mmInstance>>(0x488660, this);
    }

    // 0x488670 | ?Reset@mmInstance@@UAEXXZ
    virtual inline void Reset()
    {
        return stub<member_func_t<void, mmInstance>>(0x488670, this);
    }

    // 0x488060 | ?Init@mmInstance@@UAEHPADAAVVector3@@1H0@Z
    virtual inline int32_t Init(char* arg1, class Vector3& arg2, class Vector3& arg3, int32_t arg4, char* arg5)
    {
        return stub<member_func_t<int32_t, mmInstance, char*, class Vector3&, class Vector3&, int32_t, char*>>(
            0x488060, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x487F70 | ?GetScale@mmInstance@@UAIMXZ
    virtual inline float GetScale()
    {
        return stub<member_func_t<float, mmInstance>>(0x487F70, this);
    }

    // 0x487F80 | ?ComputeLod@mmInstance@@UAEHMM@Z
    virtual inline int32_t ComputeLod(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, mmInstance, float, float>>(0x487F80, this, arg1, arg2);
    }
};

struct mmShearInstance : mmMatrixInstance
{
public:
    // mmShearInstance::`vftable' @ 0x591D88

    // 0x489720 | ?Init@mmShearInstance@@QAEHPADAAVVector3@@1MH0@Z
    inline int32_t Init(char* arg1, class Vector3& arg2, class Vector3& arg3, float arg4, int32_t arg5, char* arg6)
    {
        return stub<
            member_func_t<int32_t, mmShearInstance, char*, class Vector3&, class Vector3&, float, int32_t, char*>>(
            0x489720, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x48A0B0 | ?DeclareFields@mmShearInstance@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x48A0B0);
    }

    // 0x48A810 | ??0mmShearInstance@@QAE@XZ
    inline mmShearInstance()
    {
        stub<member_func_t<void, mmShearInstance>>(0x48A810, this);
    }

    // 0x485570 | ??1mmShearInstance@@UAE@XZ
    inline ~mmShearInstance() override
    {
        stub<member_func_t<void, mmShearInstance>>(0x485570, this);
    }

    // 0x48A240 | ?GetClass@mmShearInstance@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmShearInstance>>(0x48A240, this);
    }

    // 0x4898E0 | ?Draw@mmShearInstance@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmShearInstance, int32_t>>(0x4898E0, this, arg1);
    }

    // 0x489710 | ?SizeOf@mmShearInstance@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, mmShearInstance>>(0x489710, this);
    }

    // 0x489900 | ?GetScale@mmShearInstance@@UAIMXZ
    inline float GetScale() override
    {
        return stub<member_func_t<float, mmShearInstance>>(0x489900, this);
    }
};

struct mmBuildingInstance : mmMatrixInstance
{
public:
    // mmBuildingInstance::`vftable' @ 0x591D28

    // 0x489920 | ?Init@mmBuildingInstance@@QAEHPADAAVVector3@@11@Z
    inline int32_t Init(char* arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
    {
        return stub<member_func_t<int32_t, mmBuildingInstance, char*, class Vector3&, class Vector3&, class Vector3&>>(
            0x489920, this, arg1, arg2, arg3, arg4);
    }

    // 0x48A250 | ?DeclareFields@mmBuildingInstance@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x48A250);
    }

    // 0x48A890 | ??0mmBuildingInstance@@QAE@XZ
    inline mmBuildingInstance()
    {
        stub<member_func_t<void, mmBuildingInstance>>(0x48A890, this);
    }

    // 0x4855A0 | ??1mmBuildingInstance@@UAE@XZ
    inline ~mmBuildingInstance() override
    {
        stub<member_func_t<void, mmBuildingInstance>>(0x4855A0, this);
    }

    // 0x48A3E0 | ?GetClass@mmBuildingInstance@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmBuildingInstance>>(0x48A3E0, this);
    }

    // 0x489A70 | ?Draw@mmBuildingInstance@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmBuildingInstance, int32_t>>(0x489A70, this, arg1);
    }

    // 0x489910 | ?SizeOf@mmBuildingInstance@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, mmBuildingInstance>>(0x489910, this);
    }

    // 0x489A60 | ?GetScale@mmBuildingInstance@@UAIMXZ
    inline float GetScale() override
    {
        return stub<member_func_t<float, mmBuildingInstance>>(0x489A60, this);
    }
};

struct mmYInstance : mmInstance
{
public:
    // mmYInstance::`vftable' @ 0x591F48

    // 0x4887F0 | ??0mmYInstance@@QAE@XZ
    inline mmYInstance()
    {
        stub<member_func_t<void, mmYInstance>>(0x4887F0, this);
    }

    // 0x489E70 | ?DeclareFields@mmYInstance@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x489E70);
    }

    // 0x488820 | ??1mmYInstance@@UAE@XZ
    inline ~mmYInstance() override
    {
        stub<member_func_t<void, mmYInstance>>(0x488820, this);
    }

    // 0x489F10 | ?GetClass@mmYInstance@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmYInstance>>(0x489F10, this);
    }

    // 0x488830 | ?FromMatrix@mmYInstance@@UAIXABVMatrix34@@@Z
    inline void FromMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, mmYInstance, class Matrix34 const&>>(0x488830, this, arg1);
    }

    // 0x488880 | ?ToMatrix@mmYInstance@@UAIAAVMatrix34@@AAV2@@Z
    inline class Matrix34& ToMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34&, mmYInstance, class Matrix34&>>(0x488880, this, arg1);
    }

    // 0x4888D0 | ?GetPos@mmYInstance@@UAIAAVVector3@@XZ
    inline class Vector3& GetPos() override
    {
        return stub<member_func_t<class Vector3&, mmYInstance>>(0x4888D0, this);
    }

    // 0x4888E0 | ?SizeOf@mmYInstance@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, mmYInstance>>(0x4888E0, this);
    }
};

struct mmMatrixInstance : mmInstance
{
public:
    // mmMatrixInstance::`vftable' @ 0x591FA0

    // 0x4888F0 | ??0mmMatrixInstance@@QAE@XZ
    inline mmMatrixInstance()
    {
        stub<member_func_t<void, mmMatrixInstance>>(0x4888F0, this);
    }

    // 0x488970 | ?Init@mmMatrixInstance@@QAEHPADAAVVector3@@11H0@Z
    inline int32_t Init(
        char* arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4, int32_t arg5, char* arg6)
    {
        return stub<member_func_t<int32_t, mmMatrixInstance, char*, class Vector3&, class Vector3&, class Vector3&,
            int32_t, char*>>(0x488970, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x489F20 | ?DeclareFields@mmMatrixInstance@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x489F20);
    }

    // 0x488920 | ??1mmMatrixInstance@@UAE@XZ
    inline ~mmMatrixInstance() override
    {
        stub<member_func_t<void, mmMatrixInstance>>(0x488920, this);
    }

    // 0x48A0A0 | ?GetClass@mmMatrixInstance@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmMatrixInstance>>(0x48A0A0, this);
    }

    // 0x488930 | ?FromMatrix@mmMatrixInstance@@UAIXABVMatrix34@@@Z
    inline void FromMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, mmMatrixInstance, class Matrix34 const&>>(0x488930, this, arg1);
    }

    // 0x488950 | ?ToMatrix@mmMatrixInstance@@UAIAAVMatrix34@@AAV2@@Z
    inline class Matrix34& ToMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34&, mmMatrixInstance, class Matrix34&>>(0x488950, this, arg1);
    }

    // 0x488960 | ?GetPos@mmMatrixInstance@@UAIAAVVector3@@XZ
    inline class Vector3& GetPos() override
    {
        return stub<member_func_t<class Vector3&, mmMatrixInstance>>(0x488960, this);
    }

    // 0x488AB0 | ?SizeOf@mmMatrixInstance@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, mmMatrixInstance>>(0x488AB0, this);
    }

    // 0x488AA0 | ?Hit@mmMatrixInstance@@UAEXPAVmmInstance@@@Z
    virtual inline void Hit(class mmInstance* arg1)
    {
        return stub<member_func_t<void, mmMatrixInstance, class mmInstance*>>(0x488AA0, this, arg1);
    }
};

struct mmStaticInstance : mmYInstance
{
public:
    // mmStaticInstance::`vftable' @ 0x592000

    // 0x488AC0 | ??0mmStaticInstance@@QAE@XZ
    inline mmStaticInstance()
    {
        stub<member_func_t<void, mmStaticInstance>>(0x488AC0, this);
    }

    // 0x488AF0 | ?Init@mmStaticInstance@@QAEHPADAAVVector3@@1MH0@Z
    inline int32_t Init(char* arg1, class Vector3& arg2, class Vector3& arg3, float arg4, int32_t arg5, char* arg6)
    {
        return stub<
            member_func_t<int32_t, mmStaticInstance, char*, class Vector3&, class Vector3&, float, int32_t, char*>>(
            0x488AF0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x48A3F0 | ?DeclareFields@mmStaticInstance@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x48A3F0);
    }

    // 0x488AE0 | ??1mmStaticInstance@@UAE@XZ
    inline ~mmStaticInstance() override
    {
        stub<member_func_t<void, mmStaticInstance>>(0x488AE0, this);
    }

    // 0x48A570 | ?GetClass@mmStaticInstance@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmStaticInstance>>(0x48A570, this);
    }

    // 0x4896C0 | ?Draw@mmStaticInstance@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmStaticInstance, int32_t>>(0x4896C0, this, arg1);
    }

    // 0x4896B0 | ?Relight@mmStaticInstance@@UAIXXZ
    inline void Relight() override
    {
        return stub<member_func_t<void, mmStaticInstance>>(0x4896B0, this);
    }

    // 0x4896A0 | ?SizeOf@mmStaticInstance@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, mmStaticInstance>>(0x4896A0, this);
    }
};

struct mmFacadeInstance : mmStaticInstance
{
public:
    // mmFacadeInstance::`vftable' @ 0x592058

    // 0x488C70 | ??0mmFacadeInstance@@QAE@XZ
    inline mmFacadeInstance()
    {
        stub<member_func_t<void, mmFacadeInstance>>(0x488C70, this);
    }

    // 0x4891A0 | ?InitFacade@mmFacadeInstance@@QAEHPADAAVVector3@@1MHABV2@@Z
    inline int32_t InitFacade(
        char* arg1, class Vector3& arg2, class Vector3& arg3, float arg4, int32_t arg5, class Vector3 const& arg6)
    {
        return stub<member_func_t<int32_t, mmFacadeInstance, char*, class Vector3&, class Vector3&, float, int32_t,
            class Vector3 const&>>(0x4891A0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x48A580 | ?DeclareFields@mmFacadeInstance@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x48A580);
    }

    // 0x488C90 | ??1mmFacadeInstance@@UAE@XZ
    inline ~mmFacadeInstance() override
    {
        stub<member_func_t<void, mmFacadeInstance>>(0x488C90, this);
    }

    // 0x48A700 | ?GetClass@mmFacadeInstance@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmFacadeInstance>>(0x48A700, this);
    }

    // 0x4894F0 | ?Draw@mmFacadeInstance@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmFacadeInstance, int32_t>>(0x4894F0, this, arg1);
    }

    // 0x4894E0 | ?SizeOf@mmFacadeInstance@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, mmFacadeInstance>>(0x4894E0, this);
    }

    // 0x4894D0 | ?GetScale@mmFacadeInstance@@UAIMXZ
    inline float GetScale() override
    {
        return stub<member_func_t<float, mmFacadeInstance>>(0x4894D0, this);
    }
};

struct mmFacadeQuad
{
public:
    // 0x488CA0 | ?DoubleArea@mmFacadeQuad@@SAMPAVagiMeshSet@@@Z
    static inline float DoubleArea(class agiMeshSet* arg1)
    {
        return stub<cdecl_t<float, class agiMeshSet*>>(0x488CA0, arg1);
    }

    // 0x488D00 | ?Valid@mmFacadeQuad@@SAHPAVagiMeshSet@@@Z
    static inline int32_t Valid(class agiMeshSet* arg1)
    {
        return stub<cdecl_t<int32_t, class agiMeshSet*>>(0x488D00, arg1);
    }

    // 0x488D30 | ??0mmFacadeQuad@@QAE@PAVagiMeshSet@@MM@Z
    inline mmFacadeQuad(class agiMeshSet* arg1, float arg2, float arg3)
    {
        stub<member_func_t<void, mmFacadeQuad, class agiMeshSet*, float, float>>(0x488D30, this, arg1, arg2, arg3);
    }

    // 0x489050 | ?DrawLit@mmFacadeQuad@@QAEXP6AXPAEPAI1PAVagiMeshSet@@@Z2@Z
    inline void DrawLit(void(__cdecl* arg1)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*), class agiMeshSet* arg2)
    {
        return stub<member_func_t<void, mmFacadeQuad, void(__cdecl*)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*),
            class agiMeshSet*>>(0x489050, this, arg1, arg2);
    }
};
