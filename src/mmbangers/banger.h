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
    mmbangers:banger

    0x4BE1F0 | public: virtual int __thiscall mmBangerInstance::ComputeLod(float,float) | ?ComputeLod@mmBangerInstance@@UAEHMM@Z
    0x4BE210 | public: virtual void __fastcall mmBangerInstance::Draw(int) | ?Draw@mmBangerInstance@@UAIXH@Z
    0x4BE3E0 | public: virtual void __fastcall mmBangerInstance::DrawGlow(void) | ?DrawGlow@mmBangerInstance@@UAIXXZ
    0x4BE4C0 | public: virtual void __fastcall mmHitBangerInstance::Draw(int) | ?Draw@mmHitBangerInstance@@UAIXH@Z
    0x4BE680 | public: virtual void __fastcall mmBangerInstance::DrawShadow(void) | ?DrawShadow@mmBangerInstance@@UAIXXZ
    0x4BE9A0 | public: class mmBangerData * __thiscall mmBangerInstance::GetData(void) | ?GetData@mmBangerInstance@@QAEPAVmmBangerData@@XZ
    0x4BE9C0 | public: virtual class mmPhysEntity * __thiscall mmBangerInstance::GetEntity(void) | ?GetEntity@mmBangerInstance@@UAEPAVmmPhysEntity@@XZ
    0x4BE9D0 | public: virtual class mmPhysEntity * __thiscall mmBangerInstance::AttachEntity(void) | ?AttachEntity@mmBangerInstance@@UAEPAVmmPhysEntity@@XZ
    0x4BEA10 | public: virtual class Vector3 __thiscall mmBangerInstance::GetVelocity(void) | ?GetVelocity@mmBangerInstance@@UAE?AVVector3@@XZ
    0x4BEA60 | public: virtual void __fastcall mmHitBangerInstance::FromMatrix(class Matrix34 const &) | ?FromMatrix@mmHitBangerInstance@@UAIXABVMatrix34@@@Z
    0x4BEA80 | public: virtual class Matrix34 & __fastcall mmHitBangerInstance::ToMatrix(class Matrix34 &) | ?ToMatrix@mmHitBangerInstance@@UAIAAVMatrix34@@AAV2@@Z
    0x4BEA90 | public: virtual class Vector3 & __fastcall mmHitBangerInstance::GetPos(void) | ?GetPos@mmHitBangerInstance@@UAIAAVVector3@@XZ
    0x4BEAA0 | public: void __thiscall mmUnhitBangerInstance::InitBreakables(char *,char *,class mmBangerData *) | ?InitBreakables@mmUnhitBangerInstance@@QAEXPAD0PAVmmBangerData@@@Z
    0x4BEB30 | public: virtual int __thiscall mmUnhitBangerInstance::Init(char *,class Vector3 &,class Vector3 &,int,char *) | ?Init@mmUnhitBangerInstance@@UAEHPADAAVVector3@@1H0@Z
    0x4BED50 | public: virtual void __fastcall mmUnhitBangerInstance::FromMatrix(class Matrix34 const &) | ?FromMatrix@mmUnhitBangerInstance@@UAIXABVMatrix34@@@Z
    0x4BED70 | public: virtual void __thiscall mmUnhitBangerInstance::Reset(void) | ?Reset@mmUnhitBangerInstance@@UAEXXZ
    0x4BEDC0 | public: virtual class Matrix34 & __fastcall mmUnhitBangerInstance::ToMatrix(class Matrix34 &) | ?ToMatrix@mmUnhitBangerInstance@@UAIAAVMatrix34@@AAV2@@Z
    0x4BEE10 | public: virtual class Vector3 & __fastcall mmUnhitBangerInstance::GetPos(void) | ?GetPos@mmUnhitBangerInstance@@UAIAAVVector3@@XZ
    0x4BEE20 | public: virtual void __thiscall mmUnhitBangerInstance::Impact(class mmInstance *,class Vector3 *) | ?Impact@mmUnhitBangerInstance@@UAEXPAVmmInstance@@PAVVector3@@@Z
    0x4BF180 | public: virtual void __thiscall mmHitBangerInstance::Detach(void) | ?Detach@mmHitBangerInstance@@UAEXXZ
    0x4BF1B0 | public: class mmHitBangerInstance * __thiscall mmBangerManager::GetBanger(void) | ?GetBanger@mmBangerManager@@QAEPAVmmHitBangerInstance@@XZ
    0x4BF210 | public: void __thiscall mmBangerManager::Init(int) | ?Init@mmBangerManager@@QAEXH@Z
    0x4BF2D0 | public: virtual void __thiscall mmBangerManager::Reset(void) | ?Reset@mmBangerManager@@UAEXXZ
    0x4BF340 | public: virtual void * __thiscall mmHitBangerInstance::`vector deleting destructor'(unsigned int) | ??_EmmHitBangerInstance@@UAEPAXI@Z
    0x4BF3A0 | public: __thiscall mmHitBangerInstance::mmHitBangerInstance(void) | ??0mmHitBangerInstance@@QAE@XZ
    0x4BF400 | public: virtual unsigned int __thiscall mmHitBangerInstance::SizeOf(void) | ?SizeOf@mmHitBangerInstance@@UAEIXZ
    0x4BF410 | public: virtual __thiscall mmHitBangerInstance::~mmHitBangerInstance(void) | ??1mmHitBangerInstance@@UAE@XZ
    0x594318 | const mmHitBangerInstance::`vftable' | ??_7mmHitBangerInstance@@6B@
    0x5B0FD4 | int ExpensiveShadows | ?ExpensiveShadows@@3HA
    0x668370 | protected: static class mmBangerManager * mmBangerManager::Instance | ?Instance@mmBangerManager@@1PAV1@A
*/

#include "hooking.h"

// 0x5B0FD4 | ?ExpensiveShadows@@3HA
inline extern_var(0x5B0FD4, int32_t, ExpensiveShadows);

class mmBangerInstance : mmInstance
{
public:
    // mmBangerInstance::`vftable' @ 0x5905B8

    // 0x43ED20 | ??0mmBangerInstance@@QAE@XZ
    inline mmBangerInstance()
    {
        // stub<member_func_t<void, mmBangerInstance>>(0x43ED20, this);

        unimplemented();
    }

    // 0x4BE9A0 | ?GetData@mmBangerInstance@@QAEPAVmmBangerData@@XZ
    inline class mmBangerData* GetData()
    {
        return stub<member_func_t<class mmBangerData*, mmBangerInstance>>(0x4BE9A0, this);
    }

    // 0x43ED60 | ??1mmBangerInstance@@UAE@XZ
    inline ~mmBangerInstance() override = 0
    {
        // stub<member_func_t<void, mmBangerInstance>>(0x43ED60, this);

        unimplemented();
    }

    // 0x4BE9C0 | ?GetEntity@mmBangerInstance@@UAEPAVmmPhysEntity@@XZ
    inline class mmPhysEntity* GetEntity() override
    {
        return stub<member_func_t<class mmPhysEntity*, mmBangerInstance>>(0x4BE9C0, this);
    }

    // 0x4BE9D0 | ?AttachEntity@mmBangerInstance@@UAEPAVmmPhysEntity@@XZ
    inline class mmPhysEntity* AttachEntity() override
    {
        return stub<member_func_t<class mmPhysEntity*, mmBangerInstance>>(0x4BE9D0, this);
    }

    // 0x4BEA10 | ?GetVelocity@mmBangerInstance@@UAE?AVVector3@@XZ
    inline class Vector3 GetVelocity() override
    {
        return stub<member_func_t<class Vector3, mmBangerInstance>>(0x4BEA10, this);
    }

    // 0x4BE210 | ?Draw@mmBangerInstance@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmBangerInstance, int32_t>>(0x4BE210, this, arg1);
    }

    // 0x4BE680 | ?DrawShadow@mmBangerInstance@@UAIXXZ
    inline void DrawShadow() override
    {
        return stub<member_func_t<void, mmBangerInstance>>(0x4BE680, this);
    }

    // 0x4BE3E0 | ?DrawGlow@mmBangerInstance@@UAIXXZ
    inline void DrawGlow() override
    {
        return stub<member_func_t<void, mmBangerInstance>>(0x4BE3E0, this);
    }

    // 0x4BE1F0 | ?ComputeLod@mmBangerInstance@@UAEHMM@Z
    inline int32_t ComputeLod(float arg1, float arg2) override
    {
        return stub<member_func_t<int32_t, mmBangerInstance, float, float>>(0x4BE1F0, this, arg1, arg2);
    }
};

class mmBangerManager : asNode
{
public:
    // mmBangerManager::`vftable' @ 0x591C38

    // 0x4BF1B0 | ?GetBanger@mmBangerManager@@QAEPAVmmHitBangerInstance@@XZ
    inline class mmHitBangerInstance* GetBanger()
    {
        return stub<member_func_t<class mmHitBangerInstance*, mmBangerManager>>(0x4BF1B0, this);
    }

    // 0x4BF210 | ?Init@mmBangerManager@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, mmBangerManager, int32_t>>(0x4BF210, this, arg1);
    }

    // 0x668370 | ?Instance@mmBangerManager@@1PAV1@A
    static inline extern_var(0x668370, class mmBangerManager*, Instance);

    // 0x485610 | ??1mmBangerManager@@UAE@XZ
    inline ~mmBangerManager() override = 0
    {
        // stub<member_func_t<void, mmBangerManager>>(0x485610, this);

        unimplemented();
    }

    // 0x4BF2D0 | ?Reset@mmBangerManager@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmBangerManager>>(0x4BF2D0, this);
    }
};

class mmHitBangerInstance : mmBangerInstance
{
public:
    // mmHitBangerInstance::`vftable' @ 0x594318

    // 0x4BF3A0 | ??0mmHitBangerInstance@@QAE@XZ
    inline mmHitBangerInstance()
    {
        // stub<member_func_t<void, mmHitBangerInstance>>(0x4BF3A0, this);

        unimplemented();
    }

    // 0x4BF410 | ??1mmHitBangerInstance@@UAE@XZ
    inline ~mmHitBangerInstance() override = 0
    {
        // stub<member_func_t<void, mmHitBangerInstance>>(0x4BF410, this);

        unimplemented();
    }

    // 0x4BEA60 | ?FromMatrix@mmHitBangerInstance@@UAIXABVMatrix34@@@Z
    inline void FromMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, mmHitBangerInstance, class Matrix34 const&>>(0x4BEA60, this, arg1);
    }

    // 0x4BEA80 | ?ToMatrix@mmHitBangerInstance@@UAIAAVMatrix34@@AAV2@@Z
    inline class Matrix34& ToMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34&, mmHitBangerInstance, class Matrix34&>>(0x4BEA80, this, arg1);
    }

    // 0x4BEA90 | ?GetPos@mmHitBangerInstance@@UAIAAVVector3@@XZ
    inline class Vector3& GetPos() override
    {
        return stub<member_func_t<class Vector3&, mmHitBangerInstance>>(0x4BEA90, this);
    }

    // 0x4BF180 | ?Detach@mmHitBangerInstance@@UAEXXZ
    inline void Detach() override
    {
        return stub<member_func_t<void, mmHitBangerInstance>>(0x4BF180, this);
    }

    // 0x4BE4C0 | ?Draw@mmHitBangerInstance@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmHitBangerInstance, int32_t>>(0x4BE4C0, this, arg1);
    }

    // 0x4BF400 | ?SizeOf@mmHitBangerInstance@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, mmHitBangerInstance>>(0x4BF400, this);
    }
};

struct mmUnhitBangerInstance : mmBangerInstance
{
public:
    // mmUnhitBangerInstance::`vftable' @ 0x591DE8

    // 0x4B98C0 | ??0mmUnhitBangerInstance@@QAE@XZ
    inline mmUnhitBangerInstance()
    {
        // stub<member_func_t<void, mmUnhitBangerInstance>>(0x4B98C0, this);

        unimplemented();
    }

    // 0x4BEAA0 | ?InitBreakables@mmUnhitBangerInstance@@QAEXPAD0PAVmmBangerData@@@Z
    inline void InitBreakables(char* arg1, char* arg2, class mmBangerData* arg3)
    {
        return stub<member_func_t<void, mmUnhitBangerInstance, char*, char*, class mmBangerData*>>(
            0x4BEAA0, this, arg1, arg2, arg3);
    }

    // 0x4855D0 | ??1mmUnhitBangerInstance@@UAE@XZ
    inline ~mmUnhitBangerInstance() override = 0
    {
        // stub<member_func_t<void, mmUnhitBangerInstance>>(0x4855D0, this);

        unimplemented();
    }

    // 0x4BED50 | ?FromMatrix@mmUnhitBangerInstance@@UAIXABVMatrix34@@@Z
    inline void FromMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, mmUnhitBangerInstance, class Matrix34 const&>>(0x4BED50, this, arg1);
    }

    // 0x4BEDC0 | ?ToMatrix@mmUnhitBangerInstance@@UAIAAVMatrix34@@AAV2@@Z
    inline class Matrix34& ToMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34&, mmUnhitBangerInstance, class Matrix34&>>(0x4BEDC0, this, arg1);
    }

    // 0x4BEE10 | ?GetPos@mmUnhitBangerInstance@@UAIAAVVector3@@XZ
    inline class Vector3& GetPos() override
    {
        return stub<member_func_t<class Vector3&, mmUnhitBangerInstance>>(0x4BEE10, this);
    }

    // 0x4BEE20 | ?Impact@mmUnhitBangerInstance@@UAEXPAVmmInstance@@PAVVector3@@@Z
    inline void Impact(class mmInstance* arg1, class Vector3* arg2) override
    {
        return stub<member_func_t<void, mmUnhitBangerInstance, class mmInstance*, class Vector3*>>(
            0x4BEE20, this, arg1, arg2);
    }

    // 0x43ED70 | ?SizeOf@mmUnhitBangerInstance@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, mmUnhitBangerInstance>>(0x43ED70, this);
    }

    // 0x4BED70 | ?Reset@mmUnhitBangerInstance@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmUnhitBangerInstance>>(0x4BED70, this);
    }

    // 0x4BEB30 | ?Init@mmUnhitBangerInstance@@UAEHPADAAVVector3@@1H0@Z
    inline int32_t Init(char* arg1, class Vector3& arg2, class Vector3& arg3, int32_t arg4, char* arg5) override
    {
        return stub<
            member_func_t<int32_t, mmUnhitBangerInstance, char*, class Vector3&, class Vector3&, int32_t, char*>>(
            0x4BEB30, this, arg1, arg2, arg3, arg4, arg5);
    }
};
