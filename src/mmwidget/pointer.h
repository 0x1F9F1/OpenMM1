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
    mmwidget:pointer

    0x4B28D0 | public: __thiscall sfPointer::sfPointer(void) | ??0sfPointer@@QAE@XZ
    0x4B2900 | public: virtual __thiscall sfPointer::~sfPointer(void) | ??1sfPointer@@UAE@XZ
    0x4B2960 | public: void __thiscall sfPointer::Init(void) | ?Init@sfPointer@@QAEXXZ
    0x4B2980 | public: virtual void __thiscall sfPointer::ResChange(int,int) | ?ResChange@sfPointer@@UAEXHH@Z
    0x4B29E0 | public: float __thiscall sfPointer::GetPointerHeight(void) | ?GetPointerHeight@sfPointer@@QAEMXZ
    0x4B29F0 | public: virtual void __thiscall sfPointer::Update(void) | ?Update@sfPointer@@UAEXXZ
    0x4B2C70 | private: void __thiscall sfPointer::UpdateAttached(void) | ?UpdateAttached@sfPointer@@AAEXXZ
    0x4B2C80 | public: void __thiscall sfPointer::WaitForRelease(void) | ?WaitForRelease@sfPointer@@QAEXXZ
    0x4B2C90 | public: virtual void __thiscall sfPointer::Cull(void) | ?Cull@sfPointer@@UAEXXZ
    0x4B2D10 | public: static void __cdecl sfPointer::DeclareFields(void) | ?DeclareFields@sfPointer@@SAXXZ
    0x4B2E70 | public: virtual class MetaClass * __thiscall sfPointer::GetClass(void) | ?GetClass@sfPointer@@UAEPAVMetaClass@@XZ
    0x4B2E80 | public: virtual void * __thiscall sfPointer::`vector deleting destructor'(unsigned int) | ??_EsfPointer@@UAEPAXI@Z
    0x593D08 | const sfPointer::`vftable' | ??_7sfPointer@@6B@
    0x667F78 | class MetaClass sfPointerMetaClass | ?sfPointerMetaClass@@3VMetaClass@@A
    0x4B2D60 | void * __cdecl new_sfPointer(int) | ?new_sfPointer@@YAPAXH@Z
    0x4B2E20 | void __cdecl delete_sfPointer(void *,int) | ?delete_sfPointer@@YAXPAXH@Z
*/

// 0x667F78 | ?sfPointerMetaClass@@3VMetaClass@@A
inline extern_var(0x667F78, class MetaClass, sfPointerMetaClass);

// 0x4B2D60 | ?new_sfPointer@@YAPAXH@Z
inline void* new_sfPointer(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4B2D60, arg1);
}

// 0x4B2E20 | ?delete_sfPointer@@YAXPAXH@Z
inline void delete_sfPointer(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4B2E20, arg1, arg2);
}

struct sfPointer : asNode
{
public:
    // sfPointer::`vftable' @ 0x593D08

    // 0x4B28D0 | ??0sfPointer@@QAE@XZ
    inline sfPointer()
    {
        // stub<member_func_t<void, sfPointer>>(0x4B28D0, this);

        unimplemented();
    }

    // 0x4B2960 | ?Init@sfPointer@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, sfPointer>>(0x4B2960, this);
    }

    // 0x4B29E0 | ?GetPointerHeight@sfPointer@@QAEMXZ
    inline float GetPointerHeight()
    {
        return stub<member_func_t<float, sfPointer>>(0x4B29E0, this);
    }

    // 0x4B2C70 | ?UpdateAttached@sfPointer@@AAEXXZ
    inline void UpdateAttached()
    {
        return stub<member_func_t<void, sfPointer>>(0x4B2C70, this);
    }

    // 0x4B2C80 | ?WaitForRelease@sfPointer@@QAEXXZ
    inline void WaitForRelease()
    {
        return stub<member_func_t<void, sfPointer>>(0x4B2C80, this);
    }

    // 0x4B2D10 | ?DeclareFields@sfPointer@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4B2D10);
    }

    // 0x4B2900 | ??1sfPointer@@UAE@XZ
    inline ~sfPointer() override = 0
    {
        // stub<member_func_t<void, sfPointer>>(0x4B2900, this);

        unimplemented();
    }

    // 0x4B2E70 | ?GetClass@sfPointer@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, sfPointer>>(0x4B2E70, this);
    }

    // 0x4B2C90 | ?Cull@sfPointer@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, sfPointer>>(0x4B2C90, this);
    }

    // 0x4B29F0 | ?Update@sfPointer@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, sfPointer>>(0x4B29F0, this);
    }

    // 0x4B2980 | ?ResChange@sfPointer@@UAEXHH@Z
    inline void ResChange(int32_t arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, sfPointer, int32_t, int32_t>>(0x4B2980, this, arg1, arg2);
    }
};
