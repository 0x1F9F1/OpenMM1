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

// mmai:aiVehicleMGR

#include "hooking.h"

// 0x44B150 | ?AMBIENTCB@@YAXPAVaiVehicleActive@@PAVasBound@@PAVmmIntersection@@PAVVector3@@M@Z
inline void AMBIENTCB(
    class aiVehicleActive* arg1, class asBound* arg2, class mmIntersection* arg3, class Vector3* arg4, float arg5)
{
    return stub<cdecl_t<void, class aiVehicleActive*, class asBound*, class mmIntersection*, class Vector3*, float>>(
        0x44B150, arg1, arg2, arg3, arg4, arg5);
}

// 0x609E80 | ?VehicleDataHash@@3VHashTable@@A
inline extern_var(0x609E80, class HashTable, VehicleDataHash);

// 0x609E90 | ?aiVehicleDataMetaClass@@3VMetaClass@@A
inline extern_var(0x609E90, class MetaClass, aiVehicleDataMetaClass);

// 0x609EB8 | ?aiVehicleInstanceMetaClass@@3VMetaClass@@A
inline extern_var(0x609EB8, class MetaClass, aiVehicleInstanceMetaClass);

// 0x609EE0 | ?NoDataWhined@@3VHashTable@@A
inline extern_var(0x609EE0, class HashTable, NoDataWhined);

// 0x44D090 | ?delete_aiVehicleInstance@@YAXPAXH@Z
inline void delete_aiVehicleInstance(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x44D090, arg1, arg2);
}

// 0x44D300 | ?new_aiVehicleData@@YAPAXH@Z
inline void* new_aiVehicleData(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x44D300, arg1);
}

// 0x44D3E0 | ?delete_aiVehicleData@@YAXPAXH@Z
inline void delete_aiVehicleData(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x44D3E0, arg1, arg2);
}

class mmPhysEntity : asNode
{
public:
    // mmPhysEntity::`vftable' @ 0x590980

    // 0x423DC0 | ??1mmPhysEntity@@UAE@XZ
    inline ~mmPhysEntity() override
    {
        stub<member_func_t<void, mmPhysEntity>>(0x423DC0, this);
    }

    // 0x44D530 | ?Update@mmPhysEntity@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmPhysEntity>>(0x44D530, this);
    }

    // 0x44D540 | ?PostUpdate@mmPhysEntity@@UAEXXZ
    virtual inline void PostUpdate()
    {
        return stub<member_func_t<void, mmPhysEntity>>(0x44D540, this);
    }

    // 0x44D550 | ?GetBound@mmPhysEntity@@UAEPAVasBound@@XZ
    virtual inline class asBound* GetBound()
    {
        return stub<member_func_t<class asBound*, mmPhysEntity>>(0x44D550, this);
    }

    // 0x44D560 | ?GetICS@mmPhysEntity@@UAEPAVasInertialCS@@XZ
    virtual inline class asInertialCS* GetICS()
    {
        return stub<member_func_t<class asInertialCS*, mmPhysEntity>>(0x44D560, this);
    }

    // 0x44D570 | ?DetachMe@mmPhysEntity@@UAEXXZ
    virtual inline void DetachMe()
    {
        return stub<member_func_t<void, mmPhysEntity>>(0x44D570, this);
    }
};

class aiVehicleData : asNode
{
public:
    // aiVehicleData::`vftable' @ 0x5909F0

    // 0x44CB30 | ?LoadEntry@aiVehicleData@@QAEHPAD@Z
    inline int32_t LoadEntry(char* arg1)
    {
        return stub<member_func_t<int32_t, aiVehicleData, char*>>(0x44CB30, this, arg1);
    }

    // 0x44D0F0 | ?DeclareFields@aiVehicleData@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x44D0F0);
    }

    // 0x44D5B0 | ??0aiVehicleData@@QAE@XZ
    inline aiVehicleData()
    {
        stub<member_func_t<void, aiVehicleData>>(0x44D5B0, this);
    }

    // 0x44D5D0 | ??1aiVehicleData@@UAE@XZ
    inline ~aiVehicleData() override
    {
        stub<member_func_t<void, aiVehicleData>>(0x44D5D0, this);
    }

    // 0x44D430 | ?GetClass@aiVehicleData@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, aiVehicleData>>(0x44D430, this);
    }
};

class aiVehicleManager : asNode
{
public:
    // aiVehicleManager::`vftable' @ 0x5909C0

    // 0x44C700 | ??0aiVehicleManager@@QAE@XZ
    inline aiVehicleManager()
    {
        stub<member_func_t<void, aiVehicleManager>>(0x44C700, this);
    }

    // 0x44C880 | ?Init@aiVehicleManager@@QAEXPAD@Z
    inline void Init(char* arg1)
    {
        return stub<member_func_t<void, aiVehicleManager, char*>>(0x44C880, this, arg1);
    }

    // 0x44C8F0 | ?Attach@aiVehicleManager@@QAEPAVaiVehicleActive@@PAVaiVehicleInstance@@@Z
    inline class aiVehicleActive* Attach(class aiVehicleInstance* arg1)
    {
        return stub<member_func_t<class aiVehicleActive*, aiVehicleManager, class aiVehicleInstance*>>(
            0x44C8F0, this, arg1);
    }

    // 0x44C9B0 | ?Detach@aiVehicleManager@@QAEXPAVaiVehicleActive@@@Z
    inline void Detach(class aiVehicleActive* arg1)
    {
        return stub<member_func_t<void, aiVehicleManager, class aiVehicleActive*>>(0x44C9B0, this, arg1);
    }

    // 0x44CD10 | ?AddVehicleDataEntry@aiVehicleManager@@QAEHPAD@Z
    inline int32_t AddVehicleDataEntry(char* arg1)
    {
        return stub<member_func_t<int32_t, aiVehicleManager, char*>>(0x44CD10, this, arg1);
    }

    // 0x609E78 | ?Instance@aiVehicleManager@@2PAV1@A
    static inline extern_var(0x609E78, class aiVehicleManager*, Instance);

    // 0x609EF0 | ?FloatClock@aiVehicleManager@@2MA
    static inline extern_var(0x609EF0, float, FloatClock);

    // 0x609EF4 | ?SignalClock@aiVehicleManager@@2HA
    static inline extern_var(0x609EF4, int32_t, SignalClock);

    // 0x44C7E0 | ??1aiVehicleManager@@UAE@XZ
    inline ~aiVehicleManager() override
    {
        stub<member_func_t<void, aiVehicleManager>>(0x44C7E0, this);
    }

    // 0x44CA40 | ?Update@aiVehicleManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiVehicleManager>>(0x44CA40, this);
    }

    // 0x44C8B0 | ?Reset@aiVehicleManager@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiVehicleManager>>(0x44C8B0, this);
    }

    // 0x44D010 | ?Save@aiVehicleManager@@UAEXXZ
    inline void Save() override
    {
        return stub<member_func_t<void, aiVehicleManager>>(0x44D010, this);
    }
};

class aiVehicleActive : mmPhysEntity
{
public:
    // aiVehicleActive::`vftable' @ 0x590940

    // 0x44BD80 | ??0aiVehicleActive@@QAE@XZ
    inline aiVehicleActive()
    {
        stub<member_func_t<void, aiVehicleActive>>(0x44BD80, this);
    }

    // 0x44BE70 | ?Init@aiVehicleActive@@QAEXPAD@Z
    inline void Init(char* arg1)
    {
        return stub<member_func_t<void, aiVehicleActive, char*>>(0x44BE70, this, arg1);
    }

    // 0x44C210 | ?Attach@aiVehicleActive@@QAEXPAVaiVehicleInstance@@@Z
    inline void Attach(class aiVehicleInstance* arg1)
    {
        return stub<member_func_t<void, aiVehicleActive, class aiVehicleInstance*>>(0x44C210, this, arg1);
    }

    // 0x44C3E0 | ?Detach@aiVehicleActive@@QAEXXZ
    inline void Detach()
    {
        return stub<member_func_t<void, aiVehicleActive>>(0x44C3E0, this);
    }

    // 0x44C6A0 | ?UpdateDamage@aiVehicleActive@@QAEXXZ
    inline void UpdateDamage()
    {
        return stub<member_func_t<void, aiVehicleActive>>(0x44C6A0, this);
    }

    // 0x44C120 | ??1aiVehicleActive@@UAE@XZ
    inline ~aiVehicleActive() override
    {
        stub<member_func_t<void, aiVehicleActive>>(0x44C120, this);
    }

    // 0x44C5B0 | ?Update@aiVehicleActive@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiVehicleActive>>(0x44C5B0, this);
    }

    // 0x44C620 | ?PostUpdate@aiVehicleActive@@UAEXXZ
    inline void PostUpdate() override
    {
        return stub<member_func_t<void, aiVehicleActive>>(0x44C620, this);
    }

    // 0x44D5E0 | ?GetBound@aiVehicleActive@@UAEPAVasBound@@XZ
    inline class asBound* GetBound() override
    {
        return stub<member_func_t<class asBound*, aiVehicleActive>>(0x44D5E0, this);
    }

    // 0x44D5F0 | ?GetICS@aiVehicleActive@@UAEPAVasInertialCS@@XZ
    inline class asInertialCS* GetICS() override
    {
        return stub<member_func_t<class asInertialCS*, aiVehicleActive>>(0x44D5F0, this);
    }

    // 0x44C3C0 | ?DetachMe@aiVehicleActive@@UAEXXZ
    inline void DetachMe() override
    {
        return stub<member_func_t<void, aiVehicleActive>>(0x44C3C0, this);
    }
};

class aiVehicleInstance : mmInstance
{
public:
    // aiVehicleInstance::`vftable' @ 0x590AA8

    // 0x44CCF0 | ?GetData@aiVehicleInstance@@QAEPAVaiVehicleData@@XZ
    inline class aiVehicleData* GetData()
    {
        return stub<member_func_t<class aiVehicleData*, aiVehicleInstance>>(0x44CCF0, this);
    }

    // 0x44D040 | ?DeclareFields@aiVehicleInstance@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x44D040);
    }

    // 0x4551B0 | ??1aiVehicleInstance@@UAE@XZ
    inline ~aiVehicleInstance() override
    {
        stub<member_func_t<void, aiVehicleInstance>>(0x4551B0, this);
    }

    // 0x44D0E0 | ?GetClass@aiVehicleInstance@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, aiVehicleInstance>>(0x44D0E0, this);
    }

    // 0x44BD50 | ?FromMatrix@aiVehicleInstance@@UAIXABVMatrix34@@@Z
    inline void FromMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, aiVehicleInstance, class Matrix34 const&>>(0x44BD50, this, arg1);
    }

    // 0x44BD60 | ?ToMatrix@aiVehicleInstance@@UAIAAVMatrix34@@AAV2@@Z
    inline class Matrix34& ToMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34&, aiVehicleInstance, class Matrix34&>>(0x44BD60, this, arg1);
    }

    // 0x44BD70 | ?GetPos@aiVehicleInstance@@UAIAAVVector3@@XZ
    inline class Vector3& GetPos() override
    {
        return stub<member_func_t<class Vector3&, aiVehicleInstance>>(0x44BD70, this);
    }

    // 0x44BBD0 | ?GetEntity@aiVehicleInstance@@UAEPAVmmPhysEntity@@XZ
    inline class mmPhysEntity* GetEntity() override
    {
        return stub<member_func_t<class mmPhysEntity*, aiVehicleInstance>>(0x44BBD0, this);
    }

    // 0x44BC30 | ?AttachEntity@aiVehicleInstance@@UAEPAVmmPhysEntity@@XZ
    inline class mmPhysEntity* AttachEntity() override
    {
        return stub<member_func_t<class mmPhysEntity*, aiVehicleInstance>>(0x44BC30, this);
    }

    // 0x44BC90 | ?GetVelocity@aiVehicleInstance@@UAE?AVVector3@@XZ
    inline class Vector3 GetVelocity() override
    {
        return stub<member_func_t<class Vector3, aiVehicleInstance>>(0x44BC90, this);
    }

    // 0x44BC00 | ?Detach@aiVehicleInstance@@UAEXXZ
    inline void Detach() override
    {
        return stub<member_func_t<void, aiVehicleInstance>>(0x44BC00, this);
    }

    // 0x44B2E0 | ?Draw@aiVehicleInstance@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, aiVehicleInstance, int32_t>>(0x44B2E0, this, arg1);
    }

    // 0x44BB30 | ?DrawShadow@aiVehicleInstance@@UAIXXZ
    inline void DrawShadow() override
    {
        return stub<member_func_t<void, aiVehicleInstance>>(0x44BB30, this);
    }

    // 0x44BAE0 | ?DrawGlow@aiVehicleInstance@@UAIXXZ
    inline void DrawGlow() override
    {
        return stub<member_func_t<void, aiVehicleInstance>>(0x44BAE0, this);
    }
};
