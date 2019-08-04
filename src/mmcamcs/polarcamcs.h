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
    mmcamcs:polarcamcs

    0x4ED050 | public: __thiscall PolarCamCS::PolarCamCS(void) | ??0PolarCamCS@@QAE@XZ
    0x4ED0A0 | public: void __thiscall PolarCamCS::Init(class mmCar *) | ?Init@PolarCamCS@@QAEXPAVmmCar@@@Z
    0x4ED0D0 | public: virtual void __thiscall PolarCamCS::Reset(void) | ?Reset@PolarCamCS@@UAEXXZ
    0x4ED0E0 | public: virtual void __thiscall PolarCamCS::MakeActive(void) | ?MakeActive@PolarCamCS@@UAEXXZ
    0x4ED110 | public: virtual void __thiscall PolarCamCS::Update(void) | ?Update@PolarCamCS@@UAEXXZ
    0x4ED540 | public: static void __cdecl PolarCamCS::DeclareFields(void) | ?DeclareFields@PolarCamCS@@SAXXZ
    0x4ED6B0 | public: virtual class MetaClass * __thiscall PolarCamCS::GetClass(void) | ?GetClass@PolarCamCS@@UAEPAVMetaClass@@XZ
    0x4ED6F0 | public: virtual void * __thiscall PolarCamCS::`vector deleting destructor'(unsigned int) | ??_EPolarCamCS@@UAEPAXI@Z
    0x594D98 | const PolarCamCS::`vftable' | ??_7PolarCamCS@@6B@
    0x67B760 | class MetaClass PolarCamCSMetaClass | ?PolarCamCSMetaClass@@3VMetaClass@@A
    0x4ED590 | void * __cdecl new_PolarCamCS(int) | ?new_PolarCamCS@@YAPAXH@Z
    0x4ED660 | void __cdecl delete_PolarCamCS(void *,int) | ?delete_PolarCamCS@@YAXPAXH@Z
*/

// 0x67B760 | ?PolarCamCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B760, class MetaClass, PolarCamCSMetaClass);

// 0x4ED590 | ?new_PolarCamCS@@YAPAXH@Z
// 0x4ED660 | ?delete_PolarCamCS@@YAXPAXH@Z

struct PolarCamCS : CarCamCS
{
public:
    // PolarCamCS::`vftable' @ 0x594D98

    // 0x4ED050 | ??0PolarCamCS@@QAE@XZ
    inline PolarCamCS()
    {
        // stub<member_func_t<void, PolarCamCS>>(0x4ED050, this);

        unimplemented();
    }

    // 0x4ED0A0 | ?Init@PolarCamCS@@QAEXPAVmmCar@@@Z
    inline void Init(class mmCar* arg1)
    {
        return stub<member_func_t<void, PolarCamCS, class mmCar*>>(0x4ED0A0, this, arg1);
    }

    // 0x4ED540 | ?DeclareFields@PolarCamCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4ED540);
    }

    // 0x423B60 | ??1PolarCamCS@@UAE@XZ
    inline ~PolarCamCS() override = 0
    {
        // stub<member_func_t<void, PolarCamCS>>(0x423B60, this);

        unimplemented();
    }

    // 0x4ED6B0 | ?GetClass@PolarCamCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, PolarCamCS>>(0x4ED6B0, this);
    }

    // 0x4ED110 | ?Update@PolarCamCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, PolarCamCS>>(0x4ED110, this);
    }

    // 0x4ED0D0 | ?Reset@PolarCamCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, PolarCamCS>>(0x4ED0D0, this);
    }

    // 0x4ED0E0 | ?MakeActive@PolarCamCS@@UAEXXZ
    inline void MakeActive() override
    {
        return stub<member_func_t<void, PolarCamCS>>(0x4ED0E0, this);
    }
};
