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
    mmcar:trailer

    0x470C60 | public: __thiscall mmTrailer::mmTrailer(void) | ??0mmTrailer@@QAE@XZ
    0x470EB0 | public: void __thiscall mmTrailer::Init(char *,class mmCarSim *,class Vector3) | ?Init@mmTrailer@@QAEXPADPAVmmCarSim@@VVector3@@@Z
    0x471100 | public: virtual void __fastcall mmTrailerInstance::FromMatrix(class Matrix34 const &) | ?FromMatrix@mmTrailerInstance@@UAIXABVMatrix34@@@Z
    0x471120 | public: virtual class Matrix34 & __fastcall mmTrailerInstance::ToMatrix(class Matrix34 &) | ?ToMatrix@mmTrailerInstance@@UAIAAVMatrix34@@AAV2@@Z
    0x471140 | public: virtual class Vector3 & __fastcall mmTrailerInstance::GetPos(void) | ?GetPos@mmTrailerInstance@@UAIAAVVector3@@XZ
    0x471150 | public: virtual class mmPhysEntity * __thiscall mmTrailerInstance::GetEntity(void) | ?GetEntity@mmTrailerInstance@@UAEPAVmmPhysEntity@@XZ
    0x471160 | public: virtual class mmPhysEntity * __thiscall mmTrailerInstance::AttachEntity(void) | ?AttachEntity@mmTrailerInstance@@UAEPAVmmPhysEntity@@XZ
    0x471170 | public: virtual class Vector3 __thiscall mmTrailerInstance::GetVelocity(void) | ?GetVelocity@mmTrailerInstance@@UAE?AVVector3@@XZ
    0x4711A0 | public: void __thiscall mmTrailerInstance::Init(char *,class Vector3 *) | ?Init@mmTrailerInstance@@QAEXPADPAVVector3@@@Z
    0x471330 | public: virtual void __fastcall mmTrailerInstance::Draw(int) | ?Draw@mmTrailerInstance@@UAIXH@Z
    0x471520 | public: virtual void __fastcall mmTrailerInstance::DrawShadow(void) | ?DrawShadow@mmTrailerInstance@@UAIXXZ
    0x471540 | public: virtual void __thiscall mmTrailer::AfterLoad(void) | ?AfterLoad@mmTrailer@@UAEXXZ
    0x4715B0 | public: void __thiscall mmTrailer::Activate(void) | ?Activate@mmTrailer@@QAEXXZ
    0x4715C0 | public: void __thiscall mmTrailer::Deactivate(void) | ?Deactivate@mmTrailer@@QAEXXZ
    0x4715D0 | public: virtual void __thiscall mmTrailer::BeforeSave(void) | ?BeforeSave@mmTrailer@@UAEXXZ
    0x471600 | public: void __thiscall mmTrailer::UpdateICSParams(void) | ?UpdateICSParams@mmTrailer@@QAEXXZ
    0x471630 | public: void __thiscall mmTrailer::RestoreImpactParams(void) | ?RestoreImpactParams@mmTrailer@@QAEXXZ
    0x471660 | public: void __thiscall mmTrailer::SetHackedImpactParams(void) | ?SetHackedImpactParams@mmTrailer@@QAEXXZ
    0x471680 | public: virtual void __thiscall mmTrailer::Reset(void) | ?Reset@mmTrailer@@UAEXXZ
    0x471760 | public: virtual void __thiscall mmTrailer::Update(void) | ?Update@mmTrailer@@UAEXXZ
    0x471830 | public: virtual void __thiscall mmTrailer::PostUpdate(void) | ?PostUpdate@mmTrailer@@UAEXXZ
    0x471840 | public: void __thiscall mmTrailer::AddWidgets(class Bank *) | ?AddWidgets@mmTrailer@@QAEXPAVBank@@@Z
    0x471850 | public: static void __cdecl mmTrailer::DeclareFields(void) | ?DeclareFields@mmTrailer@@SAXXZ
    0x471A50 | public: virtual class MetaClass * __thiscall mmTrailer::GetClass(void) | ?GetClass@mmTrailer@@UAEPAVMetaClass@@XZ
    0x471A60 | public: virtual __thiscall mmTrailerInstance::~mmTrailerInstance(void) | ??1mmTrailerInstance@@UAE@XZ
    0x471A70 | public: virtual void * __thiscall mmTrailerInstance::`vector deleting destructor'(unsigned int) | ??_EmmTrailerInstance@@UAEPAXI@Z
    0x471A70 | public: virtual void * __thiscall mmTrailerInstance::`scalar deleting destructor'(unsigned int) | ??_GmmTrailerInstance@@UAEPAXI@Z
    0x471A90 | public: virtual void * __thiscall mmTrailer::`vector deleting destructor'(unsigned int) | ??_EmmTrailer@@UAEPAXI@Z
    0x471AF0 | public: virtual __thiscall mmTrailer::~mmTrailer(void) | ??1mmTrailer@@UAE@XZ
    0x471C20 | public: virtual class asInertialCS * __thiscall mmTrailer::GetICS(void) | ?GetICS@mmTrailer@@UAEPAVasInertialCS@@XZ
    0x471C30 | public: virtual class asBound * __thiscall mmTrailer::GetBound(void) | ?GetBound@mmTrailer@@UAEPAVasBound@@XZ
    0x591398 | const mmTrailer::`vftable' | ??_7mmTrailer@@6B@
    0x5913D8 | const mmTrailerInstance::`vftable' | ??_7mmTrailerInstance@@6B@
    0x60A328 | class MetaClass mmTrailerMetaClass | ?mmTrailerMetaClass@@3VMetaClass@@A
    0x471930 | void * __cdecl new_mmTrailer(int) | ?new_mmTrailer@@YAPAXH@Z
    0x471A00 | void __cdecl delete_mmTrailer(void *,int) | ?delete_mmTrailer@@YAXPAXH@Z
*/

// 0x60A328 | ?mmTrailerMetaClass@@3VMetaClass@@A
inline extern_var(0x60A328, class MetaClass, mmTrailerMetaClass);

// 0x471930 | ?new_mmTrailer@@YAPAXH@Z
// 0x471A00 | ?delete_mmTrailer@@YAXPAXH@Z

struct mmTrailer : mmPhysEntity
{
public:
    // mmTrailer::`vftable' @ 0x591398

    // 0x470C60 | ??0mmTrailer@@QAE@XZ
    inline mmTrailer()
    {
        // stub<member_func_t<void, mmTrailer>>(0x470C60, this);

        unimplemented();
    }

    // 0x470EB0 | ?Init@mmTrailer@@QAEXPADPAVmmCarSim@@VVector3@@@Z
    inline void Init(char* arg1, class mmCarSim* arg2, class Vector3 arg3)
    {
        return stub<member_func_t<void, mmTrailer, char*, class mmCarSim*, class Vector3>>(
            0x470EB0, this, arg1, arg2, arg3);
    }

    // 0x4715B0 | ?Activate@mmTrailer@@QAEXXZ
    inline void Activate()
    {
        return stub<member_func_t<void, mmTrailer>>(0x4715B0, this);
    }

    // 0x4715C0 | ?Deactivate@mmTrailer@@QAEXXZ
    inline void Deactivate()
    {
        return stub<member_func_t<void, mmTrailer>>(0x4715C0, this);
    }

    // 0x471600 | ?UpdateICSParams@mmTrailer@@QAEXXZ
    inline void UpdateICSParams()
    {
        return stub<member_func_t<void, mmTrailer>>(0x471600, this);
    }

    // 0x471630 | ?RestoreImpactParams@mmTrailer@@QAEXXZ
    inline void RestoreImpactParams()
    {
        return stub<member_func_t<void, mmTrailer>>(0x471630, this);
    }

    // 0x471660 | ?SetHackedImpactParams@mmTrailer@@QAEXXZ
    inline void SetHackedImpactParams()
    {
        return stub<member_func_t<void, mmTrailer>>(0x471660, this);
    }

    // 0x471840 | ?AddWidgets@mmTrailer@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, mmTrailer, class Bank*>>(0x471840, this, arg1);
    }

    // 0x471850 | ?DeclareFields@mmTrailer@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x471850);
    }

    // 0x471AF0 | ??1mmTrailer@@UAE@XZ
    inline ~mmTrailer() override = 0
    {
        // stub<member_func_t<void, mmTrailer>>(0x471AF0, this);

        unimplemented();
    }

    // 0x471A50 | ?GetClass@mmTrailer@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmTrailer>>(0x471A50, this);
    }

    // 0x4715D0 | ?BeforeSave@mmTrailer@@UAEXXZ
    inline void BeforeSave() override
    {
        return stub<member_func_t<void, mmTrailer>>(0x4715D0, this);
    }

    // 0x471540 | ?AfterLoad@mmTrailer@@UAEXXZ
    inline void AfterLoad() override
    {
        return stub<member_func_t<void, mmTrailer>>(0x471540, this);
    }

    // 0x471760 | ?Update@mmTrailer@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmTrailer>>(0x471760, this);
    }

    // 0x471680 | ?Reset@mmTrailer@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmTrailer>>(0x471680, this);
    }

    // 0x471830 | ?PostUpdate@mmTrailer@@UAEXXZ
    inline void PostUpdate() override
    {
        return stub<member_func_t<void, mmTrailer>>(0x471830, this);
    }

    // 0x471C30 | ?GetBound@mmTrailer@@UAEPAVasBound@@XZ
    inline class asBound* GetBound() override
    {
        return stub<member_func_t<class asBound*, mmTrailer>>(0x471C30, this);
    }

    // 0x471C20 | ?GetICS@mmTrailer@@UAEPAVasInertialCS@@XZ
    inline class asInertialCS* GetICS() override
    {
        return stub<member_func_t<class asInertialCS*, mmTrailer>>(0x471C20, this);
    }
};

struct mmTrailerInstance : mmInstance
{
public:
    // mmTrailerInstance::`vftable' @ 0x5913D8

    // 0x4711A0 | ?Init@mmTrailerInstance@@QAEXPADPAVVector3@@@Z
    inline void Init(char* arg1, class Vector3* arg2)
    {
        return stub<member_func_t<void, mmTrailerInstance, char*, class Vector3*>>(0x4711A0, this, arg1, arg2);
    }

    // 0x471A60 | ??1mmTrailerInstance@@UAE@XZ
    inline ~mmTrailerInstance() override = 0
    {
        // stub<member_func_t<void, mmTrailerInstance>>(0x471A60, this);

        unimplemented();
    }

    // 0x471100 | ?FromMatrix@mmTrailerInstance@@UAIXABVMatrix34@@@Z
    inline void FromMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, mmTrailerInstance, class Matrix34 const&>>(0x471100, this, arg1);
    }

    // 0x471120 | ?ToMatrix@mmTrailerInstance@@UAIAAVMatrix34@@AAV2@@Z
    inline class Matrix34& ToMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34&, mmTrailerInstance, class Matrix34&>>(0x471120, this, arg1);
    }

    // 0x471140 | ?GetPos@mmTrailerInstance@@UAIAAVVector3@@XZ
    inline class Vector3& GetPos() override
    {
        return stub<member_func_t<class Vector3&, mmTrailerInstance>>(0x471140, this);
    }

    // 0x471150 | ?GetEntity@mmTrailerInstance@@UAEPAVmmPhysEntity@@XZ
    inline class mmPhysEntity* GetEntity() override
    {
        return stub<member_func_t<class mmPhysEntity*, mmTrailerInstance>>(0x471150, this);
    }

    // 0x471160 | ?AttachEntity@mmTrailerInstance@@UAEPAVmmPhysEntity@@XZ
    inline class mmPhysEntity* AttachEntity() override
    {
        return stub<member_func_t<class mmPhysEntity*, mmTrailerInstance>>(0x471160, this);
    }

    // 0x471170 | ?GetVelocity@mmTrailerInstance@@UAE?AVVector3@@XZ
    inline class Vector3 GetVelocity() override
    {
        return stub<member_func_t<class Vector3, mmTrailerInstance>>(0x471170, this);
    }

    // 0x471330 | ?Draw@mmTrailerInstance@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmTrailerInstance, int32_t>>(0x471330, this, arg1);
    }

    // 0x471520 | ?DrawShadow@mmTrailerInstance@@UAIXXZ
    inline void DrawShadow() override
    {
        return stub<member_func_t<void, mmTrailerInstance>>(0x471520, this);
    }
};
