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

// arts7:linear

#include "hooking.h"

// 0x6F2BC0 | ?asLinearCSMetaClass@@3VMetaClass@@A
inline extern_var(0x6F2BC0, class MetaClass, asLinearCSMetaClass);

// 0x512D10 | ?new_asLinearCS@@YAPAXH@Z
inline void* new_asLinearCS(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x512D10, arg1);
}

// 0x512DE0 | ?delete_asLinearCS@@YAXPAXH@Z
inline void delete_asLinearCS(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x512DE0, arg1, arg2);
}

class asLinearCS : asNode
{
public:
    // asLinearCS::`vftable' @ 0x595488

    // 0x512B20 | ??0asLinearCS@@QAE@XZ
    inline asLinearCS()
    {
        stub<member_func_t<void, asLinearCS>>(0x512B20, this);
    }

    // 0x512C50 | ?FileIO@asLinearCS@@QAEXPAVMiniParser@@@Z
    inline void FileIO(class MiniParser* arg1)
    {
        return stub<member_func_t<void, asLinearCS, class MiniParser*>>(0x512C50, this, arg1);
    }

    // 0x512C60 | ?AddWidgets@asLinearCS@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, asLinearCS, class Bank*>>(0x512C60, this, arg1);
    }

    // 0x512C70 | ?DeclareFields@asLinearCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x512C70);
    }

    // 0x4284F0 | ??1asLinearCS@@UAE@XZ
    inline ~asLinearCS() override
    {
        stub<member_func_t<void, asLinearCS>>(0x4284F0, this);
    }

    // 0x512E30 | ?GetClass@asLinearCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asLinearCS>>(0x512E30, this);
    }

    // 0x512C40 | ?Cull@asLinearCS@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, asLinearCS>>(0x512C40, this);
    }

    // 0x512B90 | ?Update@asLinearCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asLinearCS>>(0x512B90, this);
    }
};
