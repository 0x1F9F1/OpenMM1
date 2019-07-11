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

// arts7:lamp

#include "hooking.h"

// 0x6F2B98 | ?asLampMetaClass@@3VMetaClass@@A
inline extern_var(0x6F2B98, class MetaClass, asLampMetaClass);

// 0x512A00 | ?new_asLamp@@YAPAXH@Z
inline void* new_asLamp(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x512A00, arg1);
}

// 0x512AC0 | ?delete_asLamp@@YAXPAXH@Z
inline void delete_asLamp(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x512AC0, arg1, arg2);
}

struct asLamp : asNode
{
public:
    // asLamp::`vftable' @ 0x595458

    // 0x5126A0 | ??0asLamp@@QAE@XZ
    inline asLamp()
    {
        stub<member_func_t<void, asLamp>>(0x5126A0, this);
    }

    // 0x5127D0 | ?SetColor@asLamp@@QAEXABVVector3@@M@Z
    inline void SetColor(class Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, asLamp, class Vector3 const&, float>>(0x5127D0, this, arg1, arg2);
    }

    // 0x512810 | ?SetDistant@asLamp@@QAEXXZ
    inline void SetDistant()
    {
        return stub<member_func_t<void, asLamp>>(0x512810, this);
    }

    // 0x512820 | ?SetPoint@asLamp@@QAEXXZ
    inline void SetPoint()
    {
        return stub<member_func_t<void, asLamp>>(0x512820, this);
    }

    // 0x512970 | ?FileIO@asLamp@@QAEXPAVMiniParser@@@Z
    inline void FileIO(class MiniParser* arg1)
    {
        return stub<member_func_t<void, asLamp, class MiniParser*>>(0x512970, this, arg1);
    }

    // 0x512980 | ?Regen@asLamp@@AAEXXZ
    inline void Regen()
    {
        return stub<member_func_t<void, asLamp>>(0x512980, this);
    }

    // 0x5129A0 | ?AddWidgets@asLamp@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, asLamp, class Bank*>>(0x5129A0, this, arg1);
    }

    // 0x5129B0 | ?DeclareFields@asLamp@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x5129B0);
    }

    // 0x512760 | ??1asLamp@@UAE@XZ
    inline ~asLamp() override
    {
        stub<member_func_t<void, asLamp>>(0x512760, this);
    }

    // 0x512B10 | ?GetClass@asLamp@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asLamp>>(0x512B10, this);
    }

    // 0x512920 | ?Cull@asLamp@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, asLamp>>(0x512920, this);
    }

    // 0x512830 | ?Update@asLamp@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asLamp>>(0x512830, this);
    }
};
