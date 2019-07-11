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

// mmcityinfo:playercfg

#include "hooking.h"

// 0x66A848 | ?mmPlayerConfigMetaClass@@3VMetaClass@@A
inline extern_var(0x66A848, class MetaClass, mmPlayerConfigMetaClass);

// 0x4C32A0 | ?new_mmPlayerConfig@@YAPAXH@Z
inline void* new_mmPlayerConfig(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4C32A0, arg1);
}

// 0x4C3370 | ?delete_mmPlayerConfig@@YAXPAXH@Z
inline void delete_mmPlayerConfig(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4C3370, arg1, arg2);
}

class mmPlayerConfig : mmInfoBase
{
public:
    // mmPlayerConfig::`vftable' @ 0x594440

    // 0x4C1F50 | ??0mmPlayerConfig@@QAE@XZ
    inline mmPlayerConfig()
    {
        stub<member_func_t<void, mmPlayerConfig>>(0x4C1F50, this);
    }

    // 0x4C2060 | ??4mmPlayerConfig@@QAEXAAV0@@Z
    inline void operator=(class mmPlayerConfig& arg1)
    {
        return stub<member_func_t<void, mmPlayerConfig, class mmPlayerConfig&>>(0x4C2060, this, arg1);
    }

    // 0x4C21E0 | ?Load@mmPlayerConfig@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerConfig, char*>>(0x4C21E0, this, arg1);
    }

    // 0x4C22B0 | ?LoadBinary@mmPlayerConfig@@QAEHPAD@Z
    inline int32_t LoadBinary(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerConfig, char*>>(0x4C22B0, this, arg1);
    }

    // 0x4C2530 | ?SaveBinary@mmPlayerConfig@@QAEHPAD@Z
    inline int32_t SaveBinary(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerConfig, char*>>(0x4C2530, this, arg1);
    }

    // 0x4C2780 | ?SetDefaults@mmPlayerConfig@@QAEXXZ
    inline void SetDefaults()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C2780, this);
    }

    // 0x4C2790 | ?Save@mmPlayerConfig@@QAEHPADH@Z
    inline int32_t Save(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmPlayerConfig, char*, int32_t>>(0x4C2790, this, arg1, arg2);
    }

    // 0x4C2830 | ?SetAudio@mmPlayerConfig@@QAEXXZ
    inline void SetAudio()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C2830, this);
    }

    // 0x4C29A0 | ?SetControls@mmPlayerConfig@@QAEXXZ
    inline void SetControls()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C29A0, this);
    }

    // 0x4C2B80 | ?GetGraphics@mmPlayerConfig@@QAEXXZ
    inline void GetGraphics()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C2B80, this);
    }

    // 0x4C2B90 | ?SetGraphics@mmPlayerConfig@@QAEXXZ
    inline void SetGraphics()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C2B90, this);
    }

    // 0x4C2BA0 | ?GetAudio@mmPlayerConfig@@QAEXXZ
    inline void GetAudio()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C2BA0, this);
    }

    // 0x4C2C10 | ?GetControls@mmPlayerConfig@@QAEXXZ
    inline void GetControls()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C2C10, this);
    }

    // 0x4C2CF0 | ?GetViewSettings@mmPlayerConfig@@QAEXXZ
    inline void GetViewSettings()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C2CF0, this);
    }

    // 0x4C2D20 | ?SetViewSettings@mmPlayerConfig@@QAEXXZ
    inline void SetViewSettings()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C2D20, this);
    }

    // 0x4C2D50 | ?DefaultAudio@mmPlayerConfig@@QAEXXZ
    inline void DefaultAudio()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C2D50, this);
    }

    // 0x4C2E60 | ?DefaultControls@mmPlayerConfig@@QAEXXZ
    inline void DefaultControls()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C2E60, this);
    }

    // 0x4C2EC0 | ?DefaultViewSettings@mmPlayerConfig@@QAEXXZ
    inline void DefaultViewSettings()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C2EC0, this);
    }

    // 0x4C2F00 | ?Reset@mmPlayerConfig@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C2F00, this);
    }

    // 0x4C2F10 | ?DefaultGraphics@mmPlayerConfig@@QAEXXZ
    inline void DefaultGraphics()
    {
        return stub<member_func_t<void, mmPlayerConfig>>(0x4C2F10, this);
    }

    // 0x4C2F30 | ?DeclareFields@mmPlayerConfig@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4C2F30);
    }

    // 0x4C1FF0 | ??1mmPlayerConfig@@UAE@XZ
    inline ~mmPlayerConfig() override
    {
        stub<member_func_t<void, mmPlayerConfig>>(0x4C1FF0, this);
    }

    // 0x4C33C0 | ?GetClass@mmPlayerConfig@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmPlayerConfig>>(0x4C33C0, this);
    }
};

struct mmGfxCFG
{
public:
    // 0x4C2A90 | ?Get@mmGfxCFG@@QAEXXZ
    inline void Get()
    {
        return stub<member_func_t<void, mmGfxCFG>>(0x4C2A90, this);
    }

    // 0x4C2B00 | ?Set@mmGfxCFG@@QAEXXZ
    inline void Set()
    {
        return stub<member_func_t<void, mmGfxCFG>>(0x4C2B00, this);
    }
};

struct mmCtrlCFG
{
public:
    // 0x4C33D0 | ??1mmCtrlCFG@@QAE@XZ
    inline ~mmCtrlCFG()
    {
        stub<member_func_t<void, mmCtrlCFG>>(0x4C33D0, this);
    }
};
