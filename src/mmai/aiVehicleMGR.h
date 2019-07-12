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
    mmai:aiVehicleMGR

    0x44B150 | void __cdecl AMBIENTCB(class aiVehicleActive *,class asBound *,class mmIntersection *,class Vector3 *,float) | ?AMBIENTCB@@YAXPAVaiVehicleActive@@PAVasBound@@PAVmmIntersection@@PAVVector3@@M@Z
    0x44B2E0 | public: virtual void __fastcall aiVehicleInstance::Draw(int) | ?Draw@aiVehicleInstance@@UAIXH@Z
    0x44BAE0 | public: virtual void __fastcall aiVehicleInstance::DrawGlow(void) | ?DrawGlow@aiVehicleInstance@@UAIXXZ
    0x44BB30 | public: virtual void __fastcall aiVehicleInstance::DrawShadow(void) | ?DrawShadow@aiVehicleInstance@@UAIXXZ
    0x44BBD0 | public: virtual class mmPhysEntity * __thiscall aiVehicleInstance::GetEntity(void) | ?GetEntity@aiVehicleInstance@@UAEPAVmmPhysEntity@@XZ
    0x44BC00 | public: virtual void __thiscall aiVehicleInstance::Detach(void) | ?Detach@aiVehicleInstance@@UAEXXZ
    0x44BC30 | public: virtual class mmPhysEntity * __thiscall aiVehicleInstance::AttachEntity(void) | ?AttachEntity@aiVehicleInstance@@UAEPAVmmPhysEntity@@XZ
    0x44BC90 | public: virtual class Vector3 __thiscall aiVehicleInstance::GetVelocity(void) | ?GetVelocity@aiVehicleInstance@@UAE?AVVector3@@XZ
    0x44BD50 | public: virtual void __fastcall aiVehicleInstance::FromMatrix(class Matrix34 const &) | ?FromMatrix@aiVehicleInstance@@UAIXABVMatrix34@@@Z
    0x44BD60 | public: virtual class Matrix34 & __fastcall aiVehicleInstance::ToMatrix(class Matrix34 &) | ?ToMatrix@aiVehicleInstance@@UAIAAVMatrix34@@AAV2@@Z
    0x44BD70 | public: virtual class Vector3 & __fastcall aiVehicleInstance::GetPos(void) | ?GetPos@aiVehicleInstance@@UAIAAVVector3@@XZ
    0x44BD80 | public: __thiscall aiVehicleActive::aiVehicleActive(void) | ??0aiVehicleActive@@QAE@XZ
    0x44BE70 | public: void __thiscall aiVehicleActive::Init(char *) | ?Init@aiVehicleActive@@QAEXPAD@Z
    0x44C120 | public: virtual __thiscall aiVehicleActive::~aiVehicleActive(void) | ??1aiVehicleActive@@UAE@XZ
    0x44C210 | public: void __thiscall aiVehicleActive::Attach(class aiVehicleInstance *) | ?Attach@aiVehicleActive@@QAEXPAVaiVehicleInstance@@@Z
    0x44C3C0 | public: virtual void __thiscall aiVehicleActive::DetachMe(void) | ?DetachMe@aiVehicleActive@@UAEXXZ
    0x44C3E0 | public: void __thiscall aiVehicleActive::Detach(void) | ?Detach@aiVehicleActive@@QAEXXZ
    0x44C5B0 | public: virtual void __thiscall aiVehicleActive::Update(void) | ?Update@aiVehicleActive@@UAEXXZ
    0x44C620 | public: virtual void __thiscall aiVehicleActive::PostUpdate(void) | ?PostUpdate@aiVehicleActive@@UAEXXZ
    0x44C6A0 | public: void __thiscall aiVehicleActive::UpdateDamage(void) | ?UpdateDamage@aiVehicleActive@@QAEXXZ
    0x44C700 | public: __thiscall aiVehicleManager::aiVehicleManager(void) | ??0aiVehicleManager@@QAE@XZ
    0x44C7E0 | public: virtual __thiscall aiVehicleManager::~aiVehicleManager(void) | ??1aiVehicleManager@@UAE@XZ
    0x44C880 | public: void __thiscall aiVehicleManager::Init(char *) | ?Init@aiVehicleManager@@QAEXPAD@Z
    0x44C8B0 | public: virtual void __thiscall aiVehicleManager::Reset(void) | ?Reset@aiVehicleManager@@UAEXXZ
    0x44C8F0 | public: class aiVehicleActive * __thiscall aiVehicleManager::Attach(class aiVehicleInstance *) | ?Attach@aiVehicleManager@@QAEPAVaiVehicleActive@@PAVaiVehicleInstance@@@Z
    0x44C9B0 | public: void __thiscall aiVehicleManager::Detach(class aiVehicleActive *) | ?Detach@aiVehicleManager@@QAEXPAVaiVehicleActive@@@Z
    0x44CA40 | public: virtual void __thiscall aiVehicleManager::Update(void) | ?Update@aiVehicleManager@@UAEXXZ
    0x44CB30 | public: int __thiscall aiVehicleData::LoadEntry(char *) | ?LoadEntry@aiVehicleData@@QAEHPAD@Z
    0x44CCF0 | public: class aiVehicleData * __thiscall aiVehicleInstance::GetData(void) | ?GetData@aiVehicleInstance@@QAEPAVaiVehicleData@@XZ
    0x44CD10 | public: int __thiscall aiVehicleManager::AddVehicleDataEntry(char *) | ?AddVehicleDataEntry@aiVehicleManager@@QAEHPAD@Z
    0x44D010 | public: virtual void __thiscall aiVehicleManager::Save(void) | ?Save@aiVehicleManager@@UAEXXZ
    0x44D040 | public: static void __cdecl aiVehicleInstance::DeclareFields(void) | ?DeclareFields@aiVehicleInstance@@SAXXZ
    0x44D0E0 | public: virtual class MetaClass * __thiscall aiVehicleInstance::GetClass(void) | ?GetClass@aiVehicleInstance@@UAEPAVMetaClass@@XZ
    0x44D0F0 | public: static void __cdecl aiVehicleData::DeclareFields(void) | ?DeclareFields@aiVehicleData@@SAXXZ
    0x44D430 | public: virtual class MetaClass * __thiscall aiVehicleData::GetClass(void) | ?GetClass@aiVehicleData@@UAEPAVMetaClass@@XZ
    0x44D440 | public: virtual void * __thiscall aiVehicleActive::`scalar deleting destructor'(unsigned int) | ??_GaiVehicleActive@@UAEPAXI@Z
    0x44D440 | public: virtual void * __thiscall aiVehicleActive::`vector deleting destructor'(unsigned int) | ??_EaiVehicleActive@@UAEPAXI@Z
    0x44D470 | public: virtual __thiscall asInertialCS::~asInertialCS(void) | ??1asInertialCS@@UAE@XZ
    0x44D480 | public: virtual __thiscall asBound::~asBound(void) | ??1asBound@@UAE@XZ
    0x44D490 | public: virtual __thiscall mmWheelCheap::~mmWheelCheap(void) | ??1mmWheelCheap@@UAE@XZ
    0x44D4A0 | public: virtual void * __thiscall aiVehicleManager::`vector deleting destructor'(unsigned int) | ??_EaiVehicleManager@@UAEPAXI@Z
    0x44D4A0 | public: virtual void * __thiscall aiVehicleManager::`scalar deleting destructor'(unsigned int) | ??_GaiVehicleManager@@UAEPAXI@Z
    0x44D4D0 | public: virtual void * __thiscall aiVehicleData::`vector deleting destructor'(unsigned int) | ??_EaiVehicleData@@UAEPAXI@Z
    0x44D530 | public: virtual void __thiscall mmPhysEntity::Update(void) | ?Update@mmPhysEntity@@UAEXXZ
    0x44D540 | public: virtual void __thiscall mmPhysEntity::PostUpdate(void) | ?PostUpdate@mmPhysEntity@@UAEXXZ
    0x44D550 | public: virtual class asBound * __thiscall mmPhysEntity::GetBound(void) | ?GetBound@mmPhysEntity@@UAEPAVasBound@@XZ
    0x44D560 | public: virtual class asInertialCS * __thiscall mmPhysEntity::GetICS(void) | ?GetICS@mmPhysEntity@@UAEPAVasInertialCS@@XZ
    0x44D570 | public: virtual void __thiscall mmPhysEntity::DetachMe(void) | ?DetachMe@mmPhysEntity@@UAEXXZ
    0x44D580 | public: virtual void * __thiscall mmPhysEntity::`vector deleting destructor'(unsigned int) | ??_EmmPhysEntity@@UAEPAXI@Z
    0x44D580 | public: virtual void * __thiscall mmPhysEntity::`scalar deleting destructor'(unsigned int) | ??_GmmPhysEntity@@UAEPAXI@Z
    0x44D5B0 | public: __thiscall aiVehicleData::aiVehicleData(void) | ??0aiVehicleData@@QAE@XZ
    0x44D5D0 | public: virtual __thiscall aiVehicleData::~aiVehicleData(void) | ??1aiVehicleData@@UAE@XZ
    0x44D5E0 | public: virtual class asBound * __thiscall aiVehicleActive::GetBound(void) | ?GetBound@aiVehicleActive@@UAEPAVasBound@@XZ
    0x44D5F0 | public: virtual class asInertialCS * __thiscall aiVehicleActive::GetICS(void) | ?GetICS@aiVehicleActive@@UAEPAVasInertialCS@@XZ
    0x44D600 | public: virtual __thiscall asBirthRule::~asBirthRule(void) | ??1asBirthRule@@UAE@XZ
    0x590940 | const aiVehicleActive::`vftable' | ??_7aiVehicleActive@@6B@
    0x590980 | const mmPhysEntity::`vftable' | ??_7mmPhysEntity@@6B@
    0x5909C0 | const aiVehicleManager::`vftable' | ??_7aiVehicleManager@@6B@
    0x5909F0 | const aiVehicleData::`vftable' | ??_7aiVehicleData@@6B@
    0x609E78 | public: static class aiVehicleManager * aiVehicleManager::Instance | ?Instance@aiVehicleManager@@2PAV1@A
    0x609E80 | class HashTable VehicleDataHash | ?VehicleDataHash@@3VHashTable@@A
    0x609E90 | class MetaClass aiVehicleDataMetaClass | ?aiVehicleDataMetaClass@@3VMetaClass@@A
    0x609EB8 | class MetaClass aiVehicleInstanceMetaClass | ?aiVehicleInstanceMetaClass@@3VMetaClass@@A
    0x609EE0 | class HashTable NoDataWhined | ?NoDataWhined@@3VHashTable@@A
    0x609EF0 | public: static float aiVehicleManager::FloatClock | ?FloatClock@aiVehicleManager@@2MA
    0x609EF4 | public: static int aiVehicleManager::SignalClock | ?SignalClock@aiVehicleManager@@2HA
    0x44D090 | void __cdecl delete_aiVehicleInstance(void *,int) | ?delete_aiVehicleInstance@@YAXPAXH@Z
    0x44D300 | void * __cdecl new_aiVehicleData(int) | ?new_aiVehicleData@@YAPAXH@Z
    0x44D3E0 | void __cdecl delete_aiVehicleData(void *,int) | ?delete_aiVehicleData@@YAXPAXH@Z
*/

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
    inline ~mmPhysEntity() override = 0
    {
        // stub<member_func_t<void, mmPhysEntity>>(0x423DC0, this);

        unimplemented();
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
        // stub<member_func_t<void, aiVehicleData>>(0x44D5B0, this);

        unimplemented();
    }

    // 0x44D5D0 | ??1aiVehicleData@@UAE@XZ
    inline ~aiVehicleData() override = 0
    {
        // stub<member_func_t<void, aiVehicleData>>(0x44D5D0, this);

        unimplemented();
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
        // stub<member_func_t<void, aiVehicleManager>>(0x44C700, this);

        unimplemented();
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
    inline ~aiVehicleManager() override = 0
    {
        // stub<member_func_t<void, aiVehicleManager>>(0x44C7E0, this);

        unimplemented();
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
        // stub<member_func_t<void, aiVehicleActive>>(0x44BD80, this);

        unimplemented();
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
    inline ~aiVehicleActive() override = 0
    {
        // stub<member_func_t<void, aiVehicleActive>>(0x44C120, this);

        unimplemented();
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
    inline ~aiVehicleInstance() override = 0
    {
        // stub<member_func_t<void, aiVehicleInstance>>(0x4551B0, this);

        unimplemented();
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
