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
    mmcar:transmission

    0x4683A0 | public: __thiscall mmTransmission::mmTransmission(void) | ??0mmTransmission@@QAE@XZ
    0x468470 | public: void __thiscall mmTransmission::Init(class mmCarSim *) | ?Init@mmTransmission@@QAEXPAVmmCarSim@@@Z
    0x4684B0 | public: virtual void __thiscall mmTransmission::Reset(void) | ?Reset@mmTransmission@@UAEXXZ
    0x4684E0 | public: int __thiscall mmTransmission::Upshift(void) | ?Upshift@mmTransmission@@QAEHXZ
    0x468510 | public: int __thiscall mmTransmission::Downshift(void) | ?Downshift@mmTransmission@@QAEHXZ
    0x468530 | public: virtual void __thiscall mmTransmission::Update(void) | ?Update@mmTransmission@@UAEXXZ
    0x468630 | public: void __thiscall mmTransmission::CopyTrans(void) | ?CopyTrans@mmTransmission@@QAEXXZ
    0x468660 | public: void __thiscall mmTransmission::Automatic(int) | ?Automatic@mmTransmission@@QAEXH@Z
    0x468680 | public: void __thiscall mmTransmission::SetReverse(void) | ?SetReverse@mmTransmission@@QAEXXZ
    0x468690 | public: void __thiscall mmTransmission::SetDrive(void) | ?SetDrive@mmTransmission@@QAEXXZ
    0x4686B0 | public: int __thiscall mmTransmission::GetCurrentGear(void) | ?GetCurrentGear@mmTransmission@@QAEHXZ
    0x4686C0 | public: int __thiscall mmTransmission::SetCurrentGear(int) | ?SetCurrentGear@mmTransmission@@QAEHH@Z
    0x468700 | public: static void __cdecl mmTransmission::DeclareFields(void) | ?DeclareFields@mmTransmission@@SAXXZ
    0x468950 | public: virtual class MetaClass * __thiscall mmTransmission::GetClass(void) | ?GetClass@mmTransmission@@UAEPAVMetaClass@@XZ
    0x468990 | struct MetaType * __cdecl ArrayOf(struct MetaType *,int) | ?ArrayOf@@YAPAUMetaType@@PAU1@H@Z
    0x4689C0 | public: virtual void * __thiscall mmTransmission::`vector deleting destructor'(unsigned int) | ??_EmmTransmission@@UAEPAXI@Z
    0x590F88 | const mmTransmission::`vftable' | ??_7mmTransmission@@6B@
    0x590FB8 | const ArrayOfType::`vftable' | ??_7ArrayOfType@@6B@
    0x60A058 | class MetaClass mmTransmissionMetaClass | ?mmTransmissionMetaClass@@3VMetaClass@@A
    0x468830 | void * __cdecl new_mmTransmission(int) | ?new_mmTransmission@@YAPAXH@Z
    0x468900 | void __cdecl delete_mmTransmission(void *,int) | ?delete_mmTransmission@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x468990 | ?ArrayOf@@YAPAUMetaType@@PAU1@H@Z
inline struct MetaType* ArrayOf(struct MetaType* arg1, int32_t arg2)
{
    return stub<cdecl_t<struct MetaType*, struct MetaType*, int32_t>>(0x468990, arg1, arg2);
}

// 0x60A058 | ?mmTransmissionMetaClass@@3VMetaClass@@A
inline extern_var(0x60A058, class MetaClass, mmTransmissionMetaClass);

// 0x468830 | ?new_mmTransmission@@YAPAXH@Z
inline void* new_mmTransmission(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x468830, arg1);
}

// 0x468900 | ?delete_mmTransmission@@YAXPAXH@Z
inline void delete_mmTransmission(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x468900, arg1, arg2);
}

struct mmTransmission : asNode
{
public:
    // mmTransmission::`vftable' @ 0x590F88

    // 0x4683A0 | ??0mmTransmission@@QAE@XZ
    inline mmTransmission()
    {
        // stub<member_func_t<void, mmTransmission>>(0x4683A0, this);

        unimplemented();
    }

    // 0x468470 | ?Init@mmTransmission@@QAEXPAVmmCarSim@@@Z
    inline void Init(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, mmTransmission, class mmCarSim*>>(0x468470, this, arg1);
    }

    // 0x4684E0 | ?Upshift@mmTransmission@@QAEHXZ
    inline int32_t Upshift()
    {
        return stub<member_func_t<int32_t, mmTransmission>>(0x4684E0, this);
    }

    // 0x468510 | ?Downshift@mmTransmission@@QAEHXZ
    inline int32_t Downshift()
    {
        return stub<member_func_t<int32_t, mmTransmission>>(0x468510, this);
    }

    // 0x468630 | ?CopyTrans@mmTransmission@@QAEXXZ
    inline void CopyTrans()
    {
        return stub<member_func_t<void, mmTransmission>>(0x468630, this);
    }

    // 0x468660 | ?Automatic@mmTransmission@@QAEXH@Z
    inline void Automatic(int32_t arg1)
    {
        return stub<member_func_t<void, mmTransmission, int32_t>>(0x468660, this, arg1);
    }

    // 0x468680 | ?SetReverse@mmTransmission@@QAEXXZ
    inline void SetReverse()
    {
        return stub<member_func_t<void, mmTransmission>>(0x468680, this);
    }

    // 0x468690 | ?SetDrive@mmTransmission@@QAEXXZ
    inline void SetDrive()
    {
        return stub<member_func_t<void, mmTransmission>>(0x468690, this);
    }

    // 0x4686B0 | ?GetCurrentGear@mmTransmission@@QAEHXZ
    inline int32_t GetCurrentGear()
    {
        return stub<member_func_t<int32_t, mmTransmission>>(0x4686B0, this);
    }

    // 0x4686C0 | ?SetCurrentGear@mmTransmission@@QAEHH@Z
    inline int32_t SetCurrentGear(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmTransmission, int32_t>>(0x4686C0, this, arg1);
    }

    // 0x468700 | ?DeclareFields@mmTransmission@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x468700);
    }

    // 0x468300 | ??1mmTransmission@@UAE@XZ
    inline ~mmTransmission() override = 0
    {
        // stub<member_func_t<void, mmTransmission>>(0x468300, this);

        unimplemented();
    }

    // 0x468950 | ?GetClass@mmTransmission@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmTransmission>>(0x468950, this);
    }

    // 0x468530 | ?Update@mmTransmission@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmTransmission>>(0x468530, this);
    }

    // 0x4684B0 | ?Reset@mmTransmission@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmTransmission>>(0x4684B0, this);
    }
};
