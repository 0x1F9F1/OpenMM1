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

// mmcar:gyro

#include "hooking.h"

// 0x60A4A8 | ?VehGyroMetaClass@@3VMetaClass@@A
inline extern_var(0x60A4A8, class MetaClass, VehGyroMetaClass);

// 0x477B40 | ?new_VehGyro@@YAPAXH@Z
inline void* new_VehGyro(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x477B40, arg1);
}

// 0x477C00 | ?delete_VehGyro@@YAXPAXH@Z
inline void delete_VehGyro(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x477C00, arg1, arg2);
}

struct VehGyro : asNode
{
public:
    // VehGyro::`vftable' @ 0x591798

    // 0x4777D0 | ??0VehGyro@@QAE@XZ
    inline VehGyro()
    {
        stub<member_func_t<void, VehGyro>>(0x4777D0, this);
    }

    // 0x477800 | ?Load@VehGyro@@QAEXPAVStream@@@Z
    inline void Load(class Stream* arg1)
    {
        return stub<member_func_t<void, VehGyro, class Stream*>>(0x477800, this, arg1);
    }

    // 0x477870 | ?Save@VehGyro@@QAEXPAVStream@@@Z
    inline void Save(class Stream* arg1)
    {
        return stub<member_func_t<void, VehGyro, class Stream*>>(0x477870, this, arg1);
    }

    // 0x477AB0 | ?AddWidgets@VehGyro@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, VehGyro, class Bank*>>(0x477AB0, this, arg1);
    }

    // 0x477AC0 | ?DeclareFields@VehGyro@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x477AC0);
    }

    // 0x4682B0 | ??1VehGyro@@UAE@XZ
    inline ~VehGyro() override
    {
        stub<member_func_t<void, VehGyro>>(0x4682B0, this);
    }

    // 0x477C50 | ?GetClass@VehGyro@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, VehGyro>>(0x477C50, this);
    }

    // 0x4778F0 | ?Update@VehGyro@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, VehGyro>>(0x4778F0, this);
    }
};
