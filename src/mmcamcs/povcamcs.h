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
    mmcamcs:povcamcs

    0x4E8E30 | public: __thiscall PovCamCS::PovCamCS(void) | ??0PovCamCS@@QAE@XZ
    0x4E8F30 | public: virtual __thiscall PovCamCS::~PovCamCS(void) | ??1PovCamCS@@UAE@XZ
    0x4E8F40 | public: virtual void __thiscall PovCamCS::MakeActive(void) | ?MakeActive@PovCamCS@@UAEXXZ
    0x4E8F90 | public: virtual void __thiscall PovCamCS::AfterLoad(void) | ?AfterLoad@PovCamCS@@UAEXXZ
    0x4E8FA0 | public: virtual void __thiscall PovCamCS::Reset(void) | ?Reset@PovCamCS@@UAEXXZ
    0x4E8FE0 | public: virtual void __thiscall PovCamCS::Update(void) | ?Update@PovCamCS@@UAEXXZ
    0x4E9000 | public: virtual void __thiscall PovCamCS::UpdateInput(void) | ?UpdateInput@PovCamCS@@UAEXXZ
    0x4E9010 | private: void __thiscall PovCamCS::UpdatePOV(void) | ?UpdatePOV@PovCamCS@@AAEXXZ
    0x4E92B0 | public: static void __cdecl PovCamCS::DeclareFields(void) | ?DeclareFields@PovCamCS@@SAXXZ
    0x4E9460 | public: virtual class MetaClass * __thiscall PovCamCS::GetClass(void) | ?GetClass@PovCamCS@@UAEPAVMetaClass@@XZ
    0x4E94A0 | public: virtual void * __thiscall PovCamCS::`vector deleting destructor'(unsigned int) | ??_EPovCamCS@@UAEPAXI@Z
    0x4E9500 | public: virtual void __thiscall BaseCamCS::SetST(float *) | ?SetST@BaseCamCS@@UAEXPAM@Z
    0x594AB0 | const PovCamCS::`vftable' | ??_7PovCamCS@@6B@
    0x67B618 | class MetaClass PovCamCSMetaClass | ?PovCamCSMetaClass@@3VMetaClass@@A
    0x4E9340 | void * __cdecl new_PovCamCS(int) | ?new_PovCamCS@@YAPAXH@Z
    0x4E9410 | void __cdecl delete_PovCamCS(void *,int) | ?delete_PovCamCS@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x67B618 | ?PovCamCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B618, class MetaClass, PovCamCSMetaClass);

// 0x4E9340 | ?new_PovCamCS@@YAPAXH@Z
inline void* new_PovCamCS(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4E9340, arg1);
}

// 0x4E9410 | ?delete_PovCamCS@@YAXPAXH@Z
inline void delete_PovCamCS(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4E9410, arg1, arg2);
}

struct PovCamCS : CarCamCS
{
public:
    // PovCamCS::`vftable' @ 0x594AB0

    // 0x4E8E30 | ??0PovCamCS@@QAE@XZ
    inline PovCamCS()
    {
        stub<member_func_t<void, PovCamCS>>(0x4E8E30, this);
    }

    // 0x4E9010 | ?UpdatePOV@PovCamCS@@AAEXXZ
    inline void UpdatePOV()
    {
        return stub<member_func_t<void, PovCamCS>>(0x4E9010, this);
    }

    // 0x4E92B0 | ?DeclareFields@PovCamCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4E92B0);
    }

    // 0x4E8F30 | ??1PovCamCS@@UAE@XZ
    inline ~PovCamCS() override
    {
        stub<member_func_t<void, PovCamCS>>(0x4E8F30, this);
    }

    // 0x4E9460 | ?GetClass@PovCamCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, PovCamCS>>(0x4E9460, this);
    }

    // 0x4E8F90 | ?AfterLoad@PovCamCS@@UAEXXZ
    inline void AfterLoad() override
    {
        return stub<member_func_t<void, PovCamCS>>(0x4E8F90, this);
    }

    // 0x4E8FE0 | ?Update@PovCamCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, PovCamCS>>(0x4E8FE0, this);
    }

    // 0x4E8FA0 | ?Reset@PovCamCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, PovCamCS>>(0x4E8FA0, this);
    }

    // 0x4E8F40 | ?MakeActive@PovCamCS@@UAEXXZ
    inline void MakeActive() override
    {
        return stub<member_func_t<void, PovCamCS>>(0x4E8F40, this);
    }

    // 0x4E9000 | ?UpdateInput@PovCamCS@@UAEXXZ
    inline void UpdateInput() override
    {
        return stub<member_func_t<void, PovCamCS>>(0x4E9000, this);
    }
};
