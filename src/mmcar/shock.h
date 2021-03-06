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
    mmcar:shock

    0x474870 | public: __thiscall mmShock::mmShock(void) | ??0mmShock@@QAE@XZ
    0x474890 | public: void __thiscall mmShock::Init(char *,char *,class mmWheel *) | ?Init@mmShock@@QAEXPAD0PAVmmWheel@@@Z
    0x4748F0 | public: virtual void __thiscall mmShock::Update(void) | ?Update@mmShock@@UAEXXZ
    0x474900 | public: static void __cdecl mmShock::DeclareFields(void) | ?DeclareFields@mmShock@@SAXXZ
    0x474A70 | public: virtual class MetaClass * __thiscall mmShock::GetClass(void) | ?GetClass@mmShock@@UAEPAVMetaClass@@XZ
    0x474A80 | public: virtual void * __thiscall mmShock::`vector deleting destructor'(unsigned int) | ??_EmmShock@@UAEPAXI@Z
    0x591600 | const mmShock::`vftable' | ??_7mmShock@@6B@
    0x60A3E8 | class MetaClass mmShockMetaClass | ?mmShockMetaClass@@3VMetaClass@@A
    0x474950 | void * __cdecl new_mmShock(int) | ?new_mmShock@@YAPAXH@Z
    0x474A20 | void __cdecl delete_mmShock(void *,int) | ?delete_mmShock@@YAXPAXH@Z
*/

// 0x60A3E8 | ?mmShockMetaClass@@3VMetaClass@@A
inline extern_var(0x60A3E8, class MetaClass, mmShockMetaClass);

// 0x474950 | ?new_mmShock@@YAPAXH@Z
// 0x474A20 | ?delete_mmShock@@YAXPAXH@Z

struct mmShock : asLinearCS
{
public:
    // mmShock::`vftable' @ 0x591600

    // 0x474870 | ??0mmShock@@QAE@XZ
    inline mmShock()
    {
        // stub<member_func_t<void, mmShock>>(0x474870, this);

        unimplemented();
    }

    // 0x474890 | ?Init@mmShock@@QAEXPAD0PAVmmWheel@@@Z
    inline void Init(char* arg1, char* arg2, class mmWheel* arg3)
    {
        return stub<member_func_t<void, mmShock, char*, char*, class mmWheel*>>(0x474890, this, arg1, arg2, arg3);
    }

    // 0x474900 | ?DeclareFields@mmShock@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x474900);
    }

    // 0x4682F0 | ??1mmShock@@UAE@XZ
    inline ~mmShock() override = 0
    {
        // stub<member_func_t<void, mmShock>>(0x4682F0, this);

        unimplemented();
    }

    // 0x474A70 | ?GetClass@mmShock@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmShock>>(0x474A70, this);
    }

    // 0x4748F0 | ?Update@mmShock@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmShock>>(0x4748F0, this);
    }
};
