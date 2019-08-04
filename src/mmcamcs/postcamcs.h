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
    mmcamcs:postcamcs

    0x4EBB70 | public: __thiscall PostCamCS::PostCamCS(void) | ??0PostCamCS@@QAE@XZ
    0x4EBBC0 | public: void __thiscall PostCamCS::Init(class mmCar *) | ?Init@PostCamCS@@QAEXPAVmmCar@@@Z
    0x4EBBE0 | public: virtual void __thiscall PostCamCS::Reset(void) | ?Reset@PostCamCS@@UAEXXZ
    0x4EBBF0 | public: virtual void __thiscall PostCamCS::MakeActive(void) | ?MakeActive@PostCamCS@@UAEXXZ
    0x4EBC70 | public: virtual void __thiscall PostCamCS::Update(void) | ?Update@PostCamCS@@UAEXXZ
    0x4EBDA0 | public: static void __cdecl PostCamCS::DeclareFields(void) | ?DeclareFields@PostCamCS@@SAXXZ
    0x4EBF10 | public: virtual class MetaClass * __thiscall PostCamCS::GetClass(void) | ?GetClass@PostCamCS@@UAEPAVMetaClass@@XZ
    0x4EBF50 | public: virtual void * __thiscall PostCamCS::`vector deleting destructor'(unsigned int) | ??_EPostCamCS@@UAEPAXI@Z
    0x4EBFB0 | public: virtual void __thiscall BaseCamCS::UpdateInput(void) | ?UpdateInput@BaseCamCS@@UAEXXZ
    0x594C18 | const PostCamCS::`vftable' | ??_7PostCamCS@@6B@
    0x67B6A0 | class MetaClass PostCamCSMetaClass | ?PostCamCSMetaClass@@3VMetaClass@@A
    0x4EBDF0 | void * __cdecl new_PostCamCS(int) | ?new_PostCamCS@@YAPAXH@Z
    0x4EBEC0 | void __cdecl delete_PostCamCS(void *,int) | ?delete_PostCamCS@@YAXPAXH@Z
*/

// 0x67B6A0 | ?PostCamCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B6A0, class MetaClass, PostCamCSMetaClass);

// 0x4EBDF0 | ?new_PostCamCS@@YAPAXH@Z
// 0x4EBEC0 | ?delete_PostCamCS@@YAXPAXH@Z

struct PostCamCS : CarCamCS
{
public:
    // PostCamCS::`vftable' @ 0x594C18

    // 0x4EBB70 | ??0PostCamCS@@QAE@XZ
    inline PostCamCS()
    {
        // stub<member_func_t<void, PostCamCS>>(0x4EBB70, this);

        unimplemented();
    }

    // 0x4EBBC0 | ?Init@PostCamCS@@QAEXPAVmmCar@@@Z
    inline void Init(class mmCar* arg1)
    {
        return stub<member_func_t<void, PostCamCS, class mmCar*>>(0x4EBBC0, this, arg1);
    }

    // 0x4EBDA0 | ?DeclareFields@PostCamCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4EBDA0);
    }

    // 0x423BA0 | ??1PostCamCS@@UAE@XZ
    inline ~PostCamCS() override = 0
    {
        // stub<member_func_t<void, PostCamCS>>(0x423BA0, this);

        unimplemented();
    }

    // 0x4EBF10 | ?GetClass@PostCamCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, PostCamCS>>(0x4EBF10, this);
    }

    // 0x4EBC70 | ?Update@PostCamCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, PostCamCS>>(0x4EBC70, this);
    }

    // 0x4EBBE0 | ?Reset@PostCamCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, PostCamCS>>(0x4EBBE0, this);
    }

    // 0x4EBBF0 | ?MakeActive@PostCamCS@@UAEXXZ
    inline void MakeActive() override
    {
        return stub<member_func_t<void, PostCamCS>>(0x4EBBF0, this);
    }
};
