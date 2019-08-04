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
    mmcamcs:basecamcs

    0x4EE320 | public: __thiscall BaseCamCS::BaseCamCS(void) | ??0BaseCamCS@@QAE@XZ
    0x4EE3C0 | public: virtual __thiscall BaseCamCS::~BaseCamCS(void) | ??1BaseCamCS@@UAE@XZ
    0x4EE3D0 | public: virtual void __thiscall BaseCamCS::AfterLoad(void) | ?AfterLoad@BaseCamCS@@UAEXXZ
    0x4EE3E0 | public: int __thiscall BaseCamCS::IsViewCSInTransition(void) | ?IsViewCSInTransition@BaseCamCS@@QAEHXZ
    0x4EE410 | public: void __thiscall BaseCamCS::UpdateView(void) | ?UpdateView@BaseCamCS@@QAEXXZ
    0x4EE460 | public: virtual void __thiscall BaseCamCS::ForceMatrixDelta(class Vector3 const &) | ?ForceMatrixDelta@BaseCamCS@@UAEXABVVector3@@@Z
    0x4EE4B0 | public: static void __cdecl BaseCamCS::DeclareFields(void) | ?DeclareFields@BaseCamCS@@SAXXZ
    0x4EE690 | public: virtual class MetaClass * __thiscall BaseCamCS::GetClass(void) | ?GetClass@BaseCamCS@@UAEPAVMetaClass@@XZ
    0x4EE6A0 | public: virtual void * __thiscall BaseCamCS::`vector deleting destructor'(unsigned int) | ??_EBaseCamCS@@UAEPAXI@Z
    0x594EA8 | const BaseCamCS::`vftable' | ??_7BaseCamCS@@6B@
    0x67B7C0 | class MetaClass BaseCamCSMetaClass | ?BaseCamCSMetaClass@@3VMetaClass@@A
    0x4EE570 | void * __cdecl new_BaseCamCS(int) | ?new_BaseCamCS@@YAPAXH@Z
    0x4EE640 | void __cdecl delete_BaseCamCS(void *,int) | ?delete_BaseCamCS@@YAXPAXH@Z
*/

// 0x67B7C0 | ?BaseCamCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B7C0, class MetaClass, BaseCamCSMetaClass);

// 0x4EE570 | ?new_BaseCamCS@@YAPAXH@Z
// 0x4EE640 | ?delete_BaseCamCS@@YAXPAXH@Z

struct BaseCamCS : asNode
{
public:
    // BaseCamCS::`vftable' @ 0x594EA8

    // 0x4EE320 | ??0BaseCamCS@@QAE@XZ
    inline BaseCamCS()
    {
        // stub<member_func_t<void, BaseCamCS>>(0x4EE320, this);

        unimplemented();
    }

    // 0x4EE3E0 | ?IsViewCSInTransition@BaseCamCS@@QAEHXZ
    inline int32_t IsViewCSInTransition()
    {
        return stub<member_func_t<int32_t, BaseCamCS>>(0x4EE3E0, this);
    }

    // 0x4EE410 | ?UpdateView@BaseCamCS@@QAEXXZ
    inline void UpdateView()
    {
        return stub<member_func_t<void, BaseCamCS>>(0x4EE410, this);
    }

    // 0x4EE4B0 | ?DeclareFields@BaseCamCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4EE4B0);
    }

    // 0x4EE3C0 | ??1BaseCamCS@@UAE@XZ
    inline ~BaseCamCS() override = 0
    {
        // stub<member_func_t<void, BaseCamCS>>(0x4EE3C0, this);

        unimplemented();
    }

    // 0x4EE690 | ?GetClass@BaseCamCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, BaseCamCS>>(0x4EE690, this);
    }

    // 0x4EE3D0 | ?AfterLoad@BaseCamCS@@UAEXXZ
    inline void AfterLoad() override
    {
        return stub<member_func_t<void, BaseCamCS>>(0x4EE3D0, this);
    }

    // 0x4ED9C0 | ?MakeActive@BaseCamCS@@UAEXXZ
    virtual inline void MakeActive()
    {
        return stub<member_func_t<void, BaseCamCS>>(0x4ED9C0, this);
    }

    // 0x4EBFB0 | ?UpdateInput@BaseCamCS@@UAEXXZ
    virtual inline void UpdateInput()
    {
        return stub<member_func_t<void, BaseCamCS>>(0x4EBFB0, this);
    }

    // 0x4EE460 | ?ForceMatrixDelta@BaseCamCS@@UAEXABVVector3@@@Z
    virtual inline void ForceMatrixDelta(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, BaseCamCS, class Vector3 const&>>(0x4EE460, this, arg1);
    }

    // 0x4E9500 | ?SetST@BaseCamCS@@UAEXPAM@Z
    virtual inline void SetST(float* arg1)
    {
        return stub<member_func_t<void, BaseCamCS, float*>>(0x4E9500, this, arg1);
    }
};
