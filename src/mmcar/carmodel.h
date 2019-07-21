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
    mmcar:carmodel

    0x469160 | public: __thiscall mmCarModel::mmCarModel(void) | ??0mmCarModel@@QAE@XZ
    0x469210 | public: virtual __thiscall mmCarModel::~mmCarModel(void) | ??1mmCarModel@@UAE@XZ
    0x469270 | public: virtual void __fastcall mmCarModel::FromMatrix(class Matrix34 const &) | ?FromMatrix@mmCarModel@@UAIXABVMatrix34@@@Z
    0x469290 | public: virtual class Matrix34 & __fastcall mmCarModel::ToMatrix(class Matrix34 &) | ?ToMatrix@mmCarModel@@UAIAAVMatrix34@@AAV2@@Z
    0x4692A0 | public: virtual class Vector3 & __fastcall mmCarModel::GetPos(void) | ?GetPos@mmCarModel@@UAIAAVVector3@@XZ
    0x469310 | public: void __thiscall mmCarModel::Impact(class Vector3 *) | ?Impact@mmCarModel@@QAEXPAVVector3@@@Z
    0x469450 | public: void __thiscall mmCarModel::EjectWheels(int) | ?EjectWheels@mmCarModel@@QAEXH@Z
    0x4695A0 | public: void __thiscall mmCarModel::EjectPart(class mmWheel *,short,short,int) | ?EjectPart@mmCarModel@@QAEXPAVmmWheel@@FFH@Z
    0x469830 | public: virtual void __fastcall mmCarModel::Draw(int) | ?Draw@mmCarModel@@UAIXH@Z
    0x46A790 | public: virtual void __fastcall mmCarModel::DrawGlow(void) | ?DrawGlow@mmCarModel@@UAIXXZ
    0x46A820 | public: virtual void __fastcall mmCarModel::DrawShadow(void) | ?DrawShadow@mmCarModel@@UAIXXZ
    0x46A870 | public: int __thiscall mmCarModel::GetCarFlags(char *) | ?GetCarFlags@mmCarModel@@QAEHPAD@Z
    0x46A880 | public: void __thiscall mmCarModel::InitDamage(void) | ?InitDamage@mmCarModel@@QAEXXZ
    0x46A8E0 | public: class mmHitBangerInstance * __thiscall mmCarModel::GetPart(int) | ?GetPart@mmCarModel@@QAEPAVmmHitBangerInstance@@H@Z
    0x46A930 | public: void __thiscall mmCarModel::ClearDamage(int) | ?ClearDamage@mmCarModel@@QAEXH@Z
    0x46AA20 | public: void __thiscall mmCarModel::ApplyDamage(class Vector3 &,float) | ?ApplyDamage@mmCarModel@@QAEXAAVVector3@@M@Z
    0x46AA50 | public: void __thiscall mmCarModel::Init(char *,class mmCar *,int) | ?Init@mmCarModel@@QAEXPADPAVmmCar@@H@Z
    0x46AD10 | public: void __thiscall mmCarModel::DashActivated(void) | ?DashActivated@mmCarModel@@QAEXXZ
    0x46AD20 | public: void __thiscall mmCarModel::DashDeactivated(void) | ?DashDeactivated@mmCarModel@@QAEXXZ
    0x46AD30 | public: void __thiscall mmCarModel::Activate(void) | ?Activate@mmCarModel@@QAEXXZ
    0x46AD40 | public: void __thiscall mmCarModel::Deactivate(void) | ?Deactivate@mmCarModel@@QAEXXZ
    0x46AD60 | public: void __thiscall mmCarModel::Kill(void) | ?Kill@mmCarModel@@QAEXXZ
    0x46AD70 | public: static void __cdecl mmCarModel::DeclareFields(void) | ?DeclareFields@mmCarModel@@SAXXZ
    0x46AEF0 | public: virtual class MetaClass * __thiscall mmCarModel::GetClass(void) | ?GetClass@mmCarModel@@UAEPAVMetaClass@@XZ
    0x46AF30 | public: virtual void * __thiscall mmCarModel::`vector deleting destructor'(unsigned int) | ??_EmmCarModel@@UAEPAXI@Z
    0x46AF90 | public: virtual class mmPhysEntity * __thiscall mmCarModel::GetEntity(void) | ?GetEntity@mmCarModel@@UAEPAVmmPhysEntity@@XZ
    0x46AFA0 | public: virtual class mmPhysEntity * __thiscall mmCarModel::AttachEntity(void) | ?AttachEntity@mmCarModel@@UAEPAVmmPhysEntity@@XZ
    0x46AFB0 | public: virtual class Vector3 __thiscall mmCarModel::GetVelocity(void) | ?GetVelocity@mmCarModel@@UAE?AVVector3@@XZ
    0x46AFE0 | public: virtual void __thiscall mmCarModel::Reset(void) | ?Reset@mmCarModel@@UAEXXZ
    0x591070 | const mmCarModel::`vftable' | ??_7mmCarModel@@6B@
    0x60A198 | class MetaClass mmCarModelMetaClass | ?mmCarModelMetaClass@@3VMetaClass@@A
    0x60A1CC | int IsPlayerAutoCam | ?IsPlayerAutoCam@@3HA
    0x46ADC0 | void * __cdecl new_mmCarModel(int) | ?new_mmCarModel@@YAPAXH@Z
    0x46AEA0 | void __cdecl delete_mmCarModel(void *,int) | ?delete_mmCarModel@@YAXPAXH@Z
*/

// 0x60A198 | ?mmCarModelMetaClass@@3VMetaClass@@A
inline extern_var(0x60A198, class MetaClass, mmCarModelMetaClass);

// 0x60A1CC | ?IsPlayerAutoCam@@3HA
inline extern_var(0x60A1CC, int32_t, IsPlayerAutoCam);

// 0x46ADC0 | ?new_mmCarModel@@YAPAXH@Z
inline void* new_mmCarModel(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x46ADC0, arg1);
}

// 0x46AEA0 | ?delete_mmCarModel@@YAXPAXH@Z
inline void delete_mmCarModel(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x46AEA0, arg1, arg2);
}

struct mmCarModel : mmInstance
{
public:
    // mmCarModel::`vftable' @ 0x591070

    // 0x469160 | ??0mmCarModel@@QAE@XZ
    inline mmCarModel()
    {
        // stub<member_func_t<void, mmCarModel>>(0x469160, this);

        unimplemented();
    }

    // 0x469310 | ?Impact@mmCarModel@@QAEXPAVVector3@@@Z
    inline void Impact(class Vector3* arg1)
    {
        return stub<member_func_t<void, mmCarModel, class Vector3*>>(0x469310, this, arg1);
    }

    // 0x469450 | ?EjectWheels@mmCarModel@@QAEXH@Z
    inline void EjectWheels(int32_t arg1)
    {
        return stub<member_func_t<void, mmCarModel, int32_t>>(0x469450, this, arg1);
    }

    // 0x4695A0 | ?EjectPart@mmCarModel@@QAEXPAVmmWheel@@FFH@Z
    inline void EjectPart(class mmWheel* arg1, int16_t arg2, int16_t arg3, int32_t arg4)
    {
        return stub<member_func_t<void, mmCarModel, class mmWheel*, int16_t, int16_t, int32_t>>(
            0x4695A0, this, arg1, arg2, arg3, arg4);
    }

    // 0x46A870 | ?GetCarFlags@mmCarModel@@QAEHPAD@Z
    inline int32_t GetCarFlags(char* arg1)
    {
        return stub<member_func_t<int32_t, mmCarModel, char*>>(0x46A870, this, arg1);
    }

    // 0x46A880 | ?InitDamage@mmCarModel@@QAEXXZ
    inline void InitDamage()
    {
        return stub<member_func_t<void, mmCarModel>>(0x46A880, this);
    }

    // 0x46A8E0 | ?GetPart@mmCarModel@@QAEPAVmmHitBangerInstance@@H@Z
    inline class mmHitBangerInstance* GetPart(int32_t arg1)
    {
        return stub<member_func_t<class mmHitBangerInstance*, mmCarModel, int32_t>>(0x46A8E0, this, arg1);
    }

    // 0x46A930 | ?ClearDamage@mmCarModel@@QAEXH@Z
    inline void ClearDamage(int32_t arg1)
    {
        return stub<member_func_t<void, mmCarModel, int32_t>>(0x46A930, this, arg1);
    }

    // 0x46AA20 | ?ApplyDamage@mmCarModel@@QAEXAAVVector3@@M@Z
    inline void ApplyDamage(class Vector3& arg1, float arg2)
    {
        return stub<member_func_t<void, mmCarModel, class Vector3&, float>>(0x46AA20, this, arg1, arg2);
    }

    // 0x46AA50 | ?Init@mmCarModel@@QAEXPADPAVmmCar@@H@Z
    inline void Init(char* arg1, class mmCar* arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmCarModel, char*, class mmCar*, int32_t>>(0x46AA50, this, arg1, arg2, arg3);
    }

    // 0x46AD10 | ?DashActivated@mmCarModel@@QAEXXZ
    inline void DashActivated()
    {
        return stub<member_func_t<void, mmCarModel>>(0x46AD10, this);
    }

    // 0x46AD20 | ?DashDeactivated@mmCarModel@@QAEXXZ
    inline void DashDeactivated()
    {
        return stub<member_func_t<void, mmCarModel>>(0x46AD20, this);
    }

    // 0x46AD30 | ?Activate@mmCarModel@@QAEXXZ
    inline void Activate()
    {
        return stub<member_func_t<void, mmCarModel>>(0x46AD30, this);
    }

    // 0x46AD40 | ?Deactivate@mmCarModel@@QAEXXZ
    inline void Deactivate()
    {
        return stub<member_func_t<void, mmCarModel>>(0x46AD40, this);
    }

    // 0x46AD60 | ?Kill@mmCarModel@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, mmCarModel>>(0x46AD60, this);
    }

    // 0x46AD70 | ?DeclareFields@mmCarModel@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x46AD70);
    }

    // 0x469210 | ??1mmCarModel@@UAE@XZ
    inline ~mmCarModel() override = 0
    {
        // stub<member_func_t<void, mmCarModel>>(0x469210, this);

        unimplemented();
    }

    // 0x46AEF0 | ?GetClass@mmCarModel@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmCarModel>>(0x46AEF0, this);
    }

    // 0x469270 | ?FromMatrix@mmCarModel@@UAIXABVMatrix34@@@Z
    inline void FromMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, mmCarModel, class Matrix34 const&>>(0x469270, this, arg1);
    }

    // 0x469290 | ?ToMatrix@mmCarModel@@UAIAAVMatrix34@@AAV2@@Z
    inline class Matrix34& ToMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34&, mmCarModel, class Matrix34&>>(0x469290, this, arg1);
    }

    // 0x4692A0 | ?GetPos@mmCarModel@@UAIAAVVector3@@XZ
    inline class Vector3& GetPos() override
    {
        return stub<member_func_t<class Vector3&, mmCarModel>>(0x4692A0, this);
    }

    // 0x46AF90 | ?GetEntity@mmCarModel@@UAEPAVmmPhysEntity@@XZ
    inline class mmPhysEntity* GetEntity() override
    {
        return stub<member_func_t<class mmPhysEntity*, mmCarModel>>(0x46AF90, this);
    }

    // 0x46AFA0 | ?AttachEntity@mmCarModel@@UAEPAVmmPhysEntity@@XZ
    inline class mmPhysEntity* AttachEntity() override
    {
        return stub<member_func_t<class mmPhysEntity*, mmCarModel>>(0x46AFA0, this);
    }

    // 0x46AFB0 | ?GetVelocity@mmCarModel@@UAE?AVVector3@@XZ
    inline class Vector3 GetVelocity() override
    {
        return stub<member_func_t<class Vector3, mmCarModel>>(0x46AFB0, this);
    }

    // 0x469830 | ?Draw@mmCarModel@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmCarModel, int32_t>>(0x469830, this, arg1);
    }

    // 0x46A820 | ?DrawShadow@mmCarModel@@UAIXXZ
    inline void DrawShadow() override
    {
        return stub<member_func_t<void, mmCarModel>>(0x46A820, this);
    }

    // 0x46A790 | ?DrawGlow@mmCarModel@@UAIXXZ
    inline void DrawGlow() override
    {
        return stub<member_func_t<void, mmCarModel>>(0x46A790, this);
    }

    // 0x46AFE0 | ?Reset@mmCarModel@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCarModel>>(0x46AFE0, this);
    }
};
