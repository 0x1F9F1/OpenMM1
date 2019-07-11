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
    mmcar:drivetrain

    0x477040 | public: __thiscall mmDrivetrain::mmDrivetrain(void) | ??0mmDrivetrain@@QAE@XZ
    0x477070 | public: void __thiscall mmDrivetrain::Init(class mmCarSim *) | ?Init@mmDrivetrain@@QAEXPAVmmCarSim@@@Z
    0x4770A0 | public: void __thiscall mmDrivetrain::Attach(void) | ?Attach@mmDrivetrain@@QAEXXZ
    0x4770C0 | public: void __thiscall mmDrivetrain::Detach(void) | ?Detach@mmDrivetrain@@QAEXXZ
    0x4770D0 | public: int __thiscall mmDrivetrain::AddWheel(class mmWheel *) | ?AddWheel@mmDrivetrain@@QAEHPAVmmWheel@@@Z
    0x477110 | public: virtual void __thiscall mmDrivetrain::Update(void) | ?Update@mmDrivetrain@@UAEXXZ
    0x4775C0 | public: static void __cdecl mmDrivetrain::DeclareFields(void) | ?DeclareFields@mmDrivetrain@@SAXXZ
    0x477750 | public: virtual class MetaClass * __thiscall mmDrivetrain::GetClass(void) | ?GetClass@mmDrivetrain@@UAEPAVMetaClass@@XZ
    0x477760 | public: virtual void * __thiscall mmDrivetrain::`vector deleting destructor'(unsigned int) | ??_EmmDrivetrain@@UAEPAXI@Z
    0x4777C0 | public: virtual void __thiscall mmDrivetrain::Reset(void) | ?Reset@mmDrivetrain@@UAEXXZ
    0x591718 | const mmDrivetrain::`vftable' | ??_7mmDrivetrain@@6B@
    0x60A480 | class MetaClass mmDrivetrainMetaClass | ?mmDrivetrainMetaClass@@3VMetaClass@@A
    0x477630 | void * __cdecl new_mmDrivetrain(int) | ?new_mmDrivetrain@@YAPAXH@Z
    0x477700 | void __cdecl delete_mmDrivetrain(void *,int) | ?delete_mmDrivetrain@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x60A480 | ?mmDrivetrainMetaClass@@3VMetaClass@@A
inline extern_var(0x60A480, class MetaClass, mmDrivetrainMetaClass);

// 0x477630 | ?new_mmDrivetrain@@YAPAXH@Z
inline void* new_mmDrivetrain(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x477630, arg1);
}

// 0x477700 | ?delete_mmDrivetrain@@YAXPAXH@Z
inline void delete_mmDrivetrain(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x477700, arg1, arg2);
}

struct mmDrivetrain : asNode
{
public:
    // mmDrivetrain::`vftable' @ 0x591718

    // 0x477040 | ??0mmDrivetrain@@QAE@XZ
    inline mmDrivetrain()
    {
        stub<member_func_t<void, mmDrivetrain>>(0x477040, this);
    }

    // 0x477070 | ?Init@mmDrivetrain@@QAEXPAVmmCarSim@@@Z
    inline void Init(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, mmDrivetrain, class mmCarSim*>>(0x477070, this, arg1);
    }

    // 0x4770A0 | ?Attach@mmDrivetrain@@QAEXXZ
    inline void Attach()
    {
        return stub<member_func_t<void, mmDrivetrain>>(0x4770A0, this);
    }

    // 0x4770C0 | ?Detach@mmDrivetrain@@QAEXXZ
    inline void Detach()
    {
        return stub<member_func_t<void, mmDrivetrain>>(0x4770C0, this);
    }

    // 0x4770D0 | ?AddWheel@mmDrivetrain@@QAEHPAVmmWheel@@@Z
    inline int32_t AddWheel(class mmWheel* arg1)
    {
        return stub<member_func_t<int32_t, mmDrivetrain, class mmWheel*>>(0x4770D0, this, arg1);
    }

    // 0x4775C0 | ?DeclareFields@mmDrivetrain@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4775C0);
    }

    // 0x4682C0 | ??1mmDrivetrain@@UAE@XZ
    inline ~mmDrivetrain() override
    {
        stub<member_func_t<void, mmDrivetrain>>(0x4682C0, this);
    }

    // 0x477750 | ?GetClass@mmDrivetrain@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmDrivetrain>>(0x477750, this);
    }

    // 0x477110 | ?Update@mmDrivetrain@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmDrivetrain>>(0x477110, this);
    }

    // 0x4777C0 | ?Reset@mmDrivetrain@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmDrivetrain>>(0x4777C0, this);
    }
};
