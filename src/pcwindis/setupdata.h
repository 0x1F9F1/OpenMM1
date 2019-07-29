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
    pcwindis:setupdata

    0x556460 | int __cdecl dxiResClosestMatch(int,int,int) | ?dxiResClosestMatch@@YAHHHH@Z
    0x556510 | int __cdecl dxiResGetRecommended(int,int) | ?dxiResGetRecommended@@YAHHH@Z
    0x5565B0 | int __cdecl dxiReadConfigFile(void) | ?dxiReadConfigFile@@YAHXZ
    0x556920 | void __cdecl dxiWriteConfigFile(void) | ?dxiWriteConfigFile@@YAXXZ
    0x5CD880 | int dxiRendererChoice | ?dxiRendererChoice@@3HA
    0x710AC0 | struct dxiRendererInfo_t * dxiInfo | ?dxiInfo@@3PAUdxiRendererInfo_t@@A
    0x711790 | int dxiRendererCount | ?dxiRendererCount@@3HA
    0x556880 | void __cdecl strtoguid(struct _GUID *,char *) | ?strtoguid@@YAXPAU_GUID@@PAD@Z
    0x556B20 | void __cdecl guidtostr(char *,struct _GUID *) | ?guidtostr@@YAXPADPAU_GUID@@@Z
*/

#include <rpc.h>

// 0x556460 | ?dxiResClosestMatch@@YAHHHH@Z
inline int32_t dxiResClosestMatch(int32_t arg1, int32_t arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, int32_t, int32_t, int32_t>>(0x556460, arg1, arg2, arg3);
}

// 0x556510 | ?dxiResGetRecommended@@YAHHH@Z
inline int32_t dxiResGetRecommended(int32_t arg1, int32_t arg2)
{
    return stub<cdecl_t<int32_t, int32_t, int32_t>>(0x556510, arg1, arg2);
}

// 0x5565B0 | ?dxiReadConfigFile@@YAHXZ
inline int32_t dxiReadConfigFile()
{
    return stub<cdecl_t<int32_t>>(0x5565B0);
}

// 0x556920 | ?dxiWriteConfigFile@@YAXXZ
inline void dxiWriteConfigFile()
{
    return stub<cdecl_t<void>>(0x556920);
}

// 0x5CD880 | ?dxiRendererChoice@@3HA
inline extern_var(0x5CD880, int32_t, dxiRendererChoice);

// 0x710AC0 | ?dxiInfo@@3PAUdxiRendererInfo_t@@A
inline extern_var(0x710AC0, struct dxiRendererInfo_t[8], dxiInfo);

// 0x711790 | ?dxiRendererCount@@3HA
inline extern_var(0x711790, int32_t, dxiRendererCount);

// 0x556880 | ?strtoguid@@YAXPAU_GUID@@PAD@Z
inline void strtoguid(struct _GUID* arg1, char* arg2)
{
    return stub<cdecl_t<void, struct _GUID*, char*>>(0x556880, arg1, arg2);
}

// 0x556B20 | ?guidtostr@@YAXPADPAU_GUID@@@Z
inline void guidtostr(char* arg1, struct _GUID* arg2)
{
    return stub<cdecl_t<void, char*, struct _GUID*>>(0x556B20, arg1, arg2);
}

struct dxiResolution
{
    uint16_t uWidth;
    uint16_t uHeight;
    uint32_t dword4;
};

check_size(dxiResolution, 8);

struct dxiRendererInfo_t
{
    uint16_t m_Width;
    uint16_t m_word2;
    int32_t m_CurrentIndex;
    int32_t m_Hardware2;
    int32_t m_field_C;
    int32_t m_field_10;
    int32_t m_field_14;
    int32_t m_field_18;
    int32_t m_field_1C;
    int32_t m_field_20;
    int32_t m_field_24;
    int32_t m_field_28;
    char m_Name[64];
    int32_t m_field_6C;
    int32_t m_field_70;
    int32_t m_field_74;
    int32_t m_field_78;
    GUID m_GUID;
    uint32_t m_UseHardware;
    dxiResolution m_Resolutions[32];
    int32_t m_ResCount;
    uint32_t m_ResolutionIndex;
};

check_size(dxiRendererInfo_t, 0x198);
