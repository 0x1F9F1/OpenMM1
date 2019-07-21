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
    mmcamcs:aicamcs

    0x4EC980 | public: __thiscall AICamCS::AICamCS(void) | ??0AICamCS@@QAE@XZ
    0x4EC9B0 | public: void __thiscall AICamCS::Init(class mmCar *) | ?Init@AICamCS@@QAEXPAVmmCar@@@Z
    0x4EC9C0 | public: virtual void __thiscall AICamCS::Reset(void) | ?Reset@AICamCS@@UAEXXZ
    0x4EC9D0 | public: virtual void __thiscall AICamCS::MakeActive(void) | ?MakeActive@AICamCS@@UAEXXZ
    0x4ECAE0 | public: virtual void __thiscall AICamCS::Update(void) | ?Update@AICamCS@@UAEXXZ
    0x4ECE40 | public: static void __cdecl AICamCS::DeclareFields(void) | ?DeclareFields@AICamCS@@SAXXZ
    0x4ECFB0 | public: virtual class MetaClass * __thiscall AICamCS::GetClass(void) | ?GetClass@AICamCS@@UAEPAVMetaClass@@XZ
    0x4ECFF0 | public: virtual void * __thiscall AICamCS::`vector deleting destructor'(unsigned int) | ??_EAICamCS@@UAEPAXI@Z
    0x594D10 | const AICamCS::`vftable' | ??_7AICamCS@@6B@
    0x67B730 | class MetaClass AICamCSMetaClass | ?AICamCSMetaClass@@3VMetaClass@@A
    0x4ECE90 | void * __cdecl new_AICamCS(int) | ?new_AICamCS@@YAPAXH@Z
    0x4ECF60 | void __cdecl delete_AICamCS(void *,int) | ?delete_AICamCS@@YAXPAXH@Z
*/

// 0x67B730 | ?AICamCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B730, class MetaClass, AICamCSMetaClass);

// 0x4ECE90 | ?new_AICamCS@@YAPAXH@Z
inline void* new_AICamCS(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4ECE90, arg1);
}

// 0x4ECF60 | ?delete_AICamCS@@YAXPAXH@Z
inline void delete_AICamCS(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4ECF60, arg1, arg2);
}

struct AICamCS : CarCamCS
{
public:
    // AICamCS::`vftable' @ 0x594D10

    // 0x4EC980 | ??0AICamCS@@QAE@XZ
    inline AICamCS()
    {
        // stub<member_func_t<void, AICamCS>>(0x4EC980, this);

        unimplemented();
    }

    // 0x4EC9B0 | ?Init@AICamCS@@QAEXPAVmmCar@@@Z
    inline void Init(class mmCar* arg1)
    {
        return stub<member_func_t<void, AICamCS, class mmCar*>>(0x4EC9B0, this, arg1);
    }

    // 0x4ECE40 | ?DeclareFields@AICamCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4ECE40);
    }

    // 0x423B70 | ??1AICamCS@@UAE@XZ
    inline ~AICamCS() override = 0
    {
        // stub<member_func_t<void, AICamCS>>(0x423B70, this);

        unimplemented();
    }

    // 0x4ECFB0 | ?GetClass@AICamCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, AICamCS>>(0x4ECFB0, this);
    }

    // 0x4ECAE0 | ?Update@AICamCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, AICamCS>>(0x4ECAE0, this);
    }

    // 0x4EC9C0 | ?Reset@AICamCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, AICamCS>>(0x4EC9C0, this);
    }

    // 0x4EC9D0 | ?MakeActive@AICamCS@@UAEXXZ
    inline void MakeActive() override
    {
        return stub<member_func_t<void, AICamCS>>(0x4EC9D0, this);
    }
};
