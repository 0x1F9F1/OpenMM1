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
    arts7:dof

    0x514980 | public: __thiscall asDofCS::asDofCS(void) | ??0asDofCS@@QAE@XZ
    0x514A70 | public: void __thiscall asDofCS::operator=(class asDofCS const &) | ??4asDofCS@@QAEXABV0@@Z
    0x514BB0 | public: virtual void __thiscall asDofCS::Reset(void) | ?Reset@asDofCS@@UAEXXZ
    0x514BE0 | public: void __thiscall asDofCS::SetTime(float,float,int) | ?SetTime@asDofCS@@QAEXMMH@Z
    0x514C50 | public: virtual void __thiscall asDofCS::Update(void) | ?Update@asDofCS@@UAEXXZ
    0x515250 | public: void __thiscall asDofCS::FileIO(class MiniParser *) | ?FileIO@asDofCS@@QAEXPAVMiniParser@@@Z
    0x515260 | public: void __thiscall asDofCS::AddWidgets(class Bank *) | ?AddWidgets@asDofCS@@QAEXPAVBank@@@Z
    0x515270 | public: static void __cdecl asDofCS::DeclareFields(void) | ?DeclareFields@asDofCS@@SAXXZ
    0x5153E0 | public: virtual class MetaClass * __thiscall asDofCS::GetClass(void) | ?GetClass@asDofCS@@UAEPAVMetaClass@@XZ
    0x5153F0 | public: void __thiscall Vector3::Add(class Vector3 const &,class Vector3 const &) | ?Add@Vector3@@QAEXABV1@0@Z
    0x595558 | const asDofCS::`vftable' | ??_7asDofCS@@6B@
    0x6F2C40 | class MetaClass asDofCSMetaClass | ?asDofCSMetaClass@@3VMetaClass@@A
    0x5152C0 | void * __cdecl new_asDofCS(int) | ?new_asDofCS@@YAPAXH@Z
    0x515390 | void __cdecl delete_asDofCS(void *,int) | ?delete_asDofCS@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x6F2C40 | ?asDofCSMetaClass@@3VMetaClass@@A
inline extern_var(0x6F2C40, class MetaClass, asDofCSMetaClass);

// 0x5152C0 | ?new_asDofCS@@YAPAXH@Z
inline void* new_asDofCS(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x5152C0, arg1);
}

// 0x515390 | ?delete_asDofCS@@YAXPAXH@Z
inline void delete_asDofCS(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x515390, arg1, arg2);
}

class asDofCS : asLinearCS
{
public:
    // asDofCS::`vftable' @ 0x595558

    // 0x514980 | ??0asDofCS@@QAE@XZ
    inline asDofCS()
    {
        stub<member_func_t<void, asDofCS>>(0x514980, this);
    }

    // 0x514A70 | ??4asDofCS@@QAEXABV0@@Z
    inline void operator=(class asDofCS const& arg1)
    {
        return stub<member_func_t<void, asDofCS, class asDofCS const&>>(0x514A70, this, arg1);
    }

    // 0x514BE0 | ?SetTime@asDofCS@@QAEXMMH@Z
    inline void SetTime(float arg1, float arg2, int32_t arg3)
    {
        return stub<member_func_t<void, asDofCS, float, float, int32_t>>(0x514BE0, this, arg1, arg2, arg3);
    }

    // 0x515250 | ?FileIO@asDofCS@@QAEXPAVMiniParser@@@Z
    inline void FileIO(class MiniParser* arg1)
    {
        return stub<member_func_t<void, asDofCS, class MiniParser*>>(0x515250, this, arg1);
    }

    // 0x515260 | ?AddWidgets@asDofCS@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, asDofCS, class Bank*>>(0x515260, this, arg1);
    }

    // 0x515270 | ?DeclareFields@asDofCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x515270);
    }

    // 0x491230 | ??1asDofCS@@UAE@XZ
    inline ~asDofCS() override
    {
        stub<member_func_t<void, asDofCS>>(0x491230, this);
    }

    // 0x5153E0 | ?GetClass@asDofCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asDofCS>>(0x5153E0, this);
    }

    // 0x514C50 | ?Update@asDofCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asDofCS>>(0x514C50, this);
    }

    // 0x514BB0 | ?Reset@asDofCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, asDofCS>>(0x514BB0, this);
    }
};
