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
    mmcityinfo:infobase

    0x4C5800 | public: __thiscall mmInfoBase::mmInfoBase(void) | ??0mmInfoBase@@QAE@XZ
    0x4C5830 | public: int __thiscall mmInfoBase::Load(char *) | ?Load@mmInfoBase@@QAEHPAD@Z
    0x4C58E0 | public: int __thiscall mmInfoBase::Save(char *) | ?Save@mmInfoBase@@QAEHPAD@Z
    0x4C5990 | public: void __thiscall mmInfoBase::SetIOPath(char *) | ?SetIOPath@mmInfoBase@@QAEXPAD@Z
    0x4C59B0 | public: static void __cdecl mmInfoBase::DeclareFields(void) | ?DeclareFields@mmInfoBase@@SAXXZ
    0x4C5B20 | public: virtual class MetaClass * __thiscall mmInfoBase::GetClass(void) | ?GetClass@mmInfoBase@@UAEPAVMetaClass@@XZ
    0x4C5B30 | public: virtual void * __thiscall mmInfoBase::`vector deleting destructor'(unsigned int) | ??_EmmInfoBase@@UAEPAXI@Z
    0x66A8F0 | class MetaClass mmInfoBaseMetaClass | ?mmInfoBaseMetaClass@@3VMetaClass@@A
    0x4C5A00 | void * __cdecl new_mmInfoBase(int) | ?new_mmInfoBase@@YAPAXH@Z
    0x4C5AD0 | void __cdecl delete_mmInfoBase(void *,int) | ?delete_mmInfoBase@@YAXPAXH@Z
*/

// 0x66A8F0 | ?mmInfoBaseMetaClass@@3VMetaClass@@A
inline extern_var(0x66A8F0, class MetaClass, mmInfoBaseMetaClass);

// 0x4C5A00 | ?new_mmInfoBase@@YAPAXH@Z
// 0x4C5AD0 | ?delete_mmInfoBase@@YAXPAXH@Z

struct mmInfoBase : Base
{
public:
    // mmInfoBase::`vftable' @ 0x58F7F0

    // 0x4C5800 | ??0mmInfoBase@@QAE@XZ
    inline mmInfoBase()
    {
        // stub<member_func_t<void, mmInfoBase>>(0x4C5800, this);

        unimplemented();
    }

    // 0x4C5830 | ?Load@mmInfoBase@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, mmInfoBase, char*>>(0x4C5830, this, arg1);
    }

    // 0x4C58E0 | ?Save@mmInfoBase@@QAEHPAD@Z
    inline int32_t Save(char* arg1)
    {
        return stub<member_func_t<int32_t, mmInfoBase, char*>>(0x4C58E0, this, arg1);
    }

    // 0x4C5990 | ?SetIOPath@mmInfoBase@@QAEXPAD@Z
    inline void SetIOPath(char* arg1)
    {
        return stub<member_func_t<void, mmInfoBase, char*>>(0x4C5990, this, arg1);
    }

    // 0x4C59B0 | ?DeclareFields@mmInfoBase@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4C59B0);
    }

    // 0x410DD0 | ??1mmInfoBase@@UAE@XZ
    inline ~mmInfoBase() override = 0
    {
        // stub<member_func_t<void, mmInfoBase>>(0x410DD0, this);

        unimplemented();
    }

    // 0x4C5B20 | ?GetClass@mmInfoBase@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmInfoBase>>(0x4C5B20, this);
    }
};
