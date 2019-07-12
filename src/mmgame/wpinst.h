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
    mmgame:wpinst

    0x430090 | public: __thiscall mmWaypointInstance::mmWaypointInstance(int,float,float) | ??0mmWaypointInstance@@QAE@HMM@Z
    0x4300E0 | public: virtual __thiscall mmWaypointInstance::~mmWaypointInstance(void) | ??1mmWaypointInstance@@UAE@XZ
    0x4300F0 | public: virtual float __fastcall mmWaypointInstance::GetScale(void) | ?GetScale@mmWaypointInstance@@UAIMXZ
    0x430100 | public: virtual int __thiscall mmWaypointInstance::ComputeLod(float,float) | ?ComputeLod@mmWaypointInstance@@UAEHMM@Z
    0x430120 | public: virtual void __fastcall mmWaypointInstance::Draw(int) | ?Draw@mmWaypointInstance@@UAIXH@Z
    0x4304F0 | public: void __thiscall mmWaypointInstance::AddWidgets(class Bank *) | ?AddWidgets@mmWaypointInstance@@QAEXPAVBank@@@Z
    0x430500 | public: static void __cdecl mmWaypointInstance::DeclareFields(void) | ?DeclareFields@mmWaypointInstance@@SAXXZ
    0x430680 | public: virtual class MetaClass * __thiscall mmWaypointInstance::GetClass(void) | ?GetClass@mmWaypointInstance@@UAEPAVMetaClass@@XZ
    0x430690 | public: virtual void * __thiscall mmWaypointInstance::`vector deleting destructor'(unsigned int) | ??_EmmWaypointInstance@@UAEPAXI@Z
    0x4306F0 | public: void __thiscall mmWaypointInstance::`default constructor closure'(void) | ??_FmmWaypointInstance@@QAEXXZ
    0x430710 | public: virtual class mmPhysEntity * __thiscall mmInstance::GetEntity(void) | ?GetEntity@mmInstance@@UAEPAVmmPhysEntity@@XZ
    0x430720 | public: virtual class mmPhysEntity * __thiscall mmInstance::AttachEntity(void) | ?AttachEntity@mmInstance@@UAEPAVmmPhysEntity@@XZ
    0x430730 | public: virtual class Vector3 __thiscall mmInstance::GetVelocity(void) | ?GetVelocity@mmInstance@@UAE?AVVector3@@XZ
    0x430750 | public: virtual void __thiscall mmInstance::Impact(class mmInstance *,class Vector3 *) | ?Impact@mmInstance@@UAEXPAV1@PAVVector3@@@Z
    0x430760 | public: virtual void __thiscall mmInstance::Detach(void) | ?Detach@mmInstance@@UAEXXZ
    0x590330 | const mmWaypointInstance::`vftable' | ??_7mmWaypointInstance@@6B@
    0x609BA0 | class MetaClass mmWaypointInstanceMetaClass | ?mmWaypointInstanceMetaClass@@3VMetaClass@@A
    0x430550 | void * __cdecl new_mmWaypointInstance(int) | ?new_mmWaypointInstance@@YAPAXH@Z
    0x430630 | void __cdecl delete_mmWaypointInstance(void *,int) | ?delete_mmWaypointInstance@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x609BA0 | ?mmWaypointInstanceMetaClass@@3VMetaClass@@A
inline extern_var(0x609BA0, class MetaClass, mmWaypointInstanceMetaClass);

// 0x430550 | ?new_mmWaypointInstance@@YAPAXH@Z
inline void* new_mmWaypointInstance(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x430550, arg1);
}

// 0x430630 | ?delete_mmWaypointInstance@@YAXPAXH@Z
inline void delete_mmWaypointInstance(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x430630, arg1, arg2);
}

struct mmWaypointInstance : mmStaticInstance
{
public:
    // mmWaypointInstance::`vftable' @ 0x590330

    // 0x430090 | ??0mmWaypointInstance@@QAE@HMM@Z
    inline mmWaypointInstance(int32_t arg1, float arg2, float arg3)
    {
        // stub<member_func_t<void, mmWaypointInstance, int32_t, float, float>>(0x430090, this, arg1, arg2, arg3);

        unimplemented();
    }

    // 0x4304F0 | ?AddWidgets@mmWaypointInstance@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, mmWaypointInstance, class Bank*>>(0x4304F0, this, arg1);
    }

    // 0x430500 | ?DeclareFields@mmWaypointInstance@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x430500);
    }

    // 0x4300E0 | ??1mmWaypointInstance@@UAE@XZ
    inline ~mmWaypointInstance() override = 0
    {
        // stub<member_func_t<void, mmWaypointInstance>>(0x4300E0, this);

        unimplemented();
    }

    // 0x430680 | ?GetClass@mmWaypointInstance@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmWaypointInstance>>(0x430680, this);
    }

    // 0x430120 | ?Draw@mmWaypointInstance@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmWaypointInstance, int32_t>>(0x430120, this, arg1);
    }

    // 0x4300F0 | ?GetScale@mmWaypointInstance@@UAIMXZ
    inline float GetScale() override
    {
        return stub<member_func_t<float, mmWaypointInstance>>(0x4300F0, this);
    }

    // 0x430100 | ?ComputeLod@mmWaypointInstance@@UAEHMM@Z
    inline int32_t ComputeLod(float arg1, float arg2) override
    {
        return stub<member_func_t<int32_t, mmWaypointInstance, float, float>>(0x430100, this, arg1, arg2);
    }
};
