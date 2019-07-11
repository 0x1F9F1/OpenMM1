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

// mmui:graphics

#include "hooking.h"

// 0x48E130 | ?AutoDetect@@YAXHH@Z
inline void AutoDetect(int32_t arg1, int32_t arg2)
{
    return stub<cdecl_t<void, int32_t, int32_t>>(0x48E130, arg1, arg2);
}

// 0x667B1C | ?data1@@3HA
inline extern_var(0x667B1C, int32_t, data1);

// 0x667B20 | ?data2@@3HA
inline extern_var(0x667B20, int32_t, data2);

// 0x667B24 | ?data3@@3HA
inline extern_var(0x667B24, int32_t, data3);

// 0x667B28 | ?data4@@3HA
inline extern_var(0x667B28, int32_t, data4);

// 0x667B2C | ?data5@@3HA
inline extern_var(0x667B2C, int32_t, data5);

// 0x667B30 | ?data6@@3HA
inline extern_var(0x667B30, int32_t, data6);

// 0x667B50 | ?RenderToSystemMemory@@3HA
inline extern_var(0x667B50, int32_t, RenderToSystemMemory);

// 0x667B54 | ?TextureLevel@@3HA
inline extern_var(0x667B54, int32_t, TextureLevel);

// 0x48EA70 | ?SetTexQualString@@YAXXZ
inline void SetTexQualString()
{
    return stub<cdecl_t<void>>(0x48EA70);
}

struct GraphicsOptions : OptionsBase
{
public:
    // GraphicsOptions::`vftable' @ 0x592210

    // 0x48E390 | ??0GraphicsOptions@@QAE@H@Z
    inline GraphicsOptions(int32_t arg1)
    {
        stub<member_func_t<void, GraphicsOptions, int32_t>>(0x48E390, this, arg1);
    }

    // 0x48ED70 | ?SetResolution@GraphicsOptions@@QAEXXZ
    inline void SetResolution()
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x48ED70, this);
    }

    // 0x48ED90 | ?SetLightQuality@GraphicsOptions@@QAEXXZ
    inline void SetLightQuality()
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x48ED90, this);
    }

    // 0x48EDB0 | ?SetRenderer@GraphicsOptions@@QAEXXZ
    inline void SetRenderer()
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x48EDB0, this);
    }

    // 0x48ED10 | ??1GraphicsOptions@@UAE@XZ
    inline ~GraphicsOptions() override
    {
        stub<member_func_t<void, GraphicsOptions>>(0x48ED10, this);
    }

    // 0x48EFC0 | ?PreSetup@GraphicsOptions@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x48EFC0, this);
    }

    // 0x48F030 | ?CancelAction@GraphicsOptions@@UAEXXZ
    inline void CancelAction() override
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x48F030, this);
    }

    // 0x48F060 | ?DoneAction@GraphicsOptions@@UAEXXZ
    inline void DoneAction() override
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x48F060, this);
    }

    // 0x48EFE0 | ?ResetDefaultAction@GraphicsOptions@@UAEXXZ
    inline void ResetDefaultAction() override
    {
        return stub<member_func_t<void, GraphicsOptions>>(0x48EFE0, this);
    }
};
