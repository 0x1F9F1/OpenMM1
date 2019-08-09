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
    agi:print

    0x539DB0 | void __cdecl agiPrint(int,int,int,char const *) | ?agiPrint@@YAXHHHPBD@Z
    0x539DD0 | void __cdecl agiPrintf(int,int,int,char const *,...) | ?agiPrintf@@YAXHHHPBDZZ
    0x539E30 | int __cdecl agiPrintIs3D(void) | ?agiPrintIs3D@@YAHXZ
    0x539E40 | void __cdecl agiPrintInit(void) | ?agiPrintInit@@YAXXZ
    0x539E50 | void __cdecl agiPrintShutdown(void) | ?agiPrintShutdown@@YAXXZ
    0x539E60 | public: virtual void __thiscall agiPipeline::Print(int,int,int,char const *) | ?Print@agiPipeline@@UAEXHHHPBD@Z
    0x53A050 | public: virtual int __thiscall agiPipeline::PrintIs3D(void) | ?PrintIs3D@agiPipeline@@UAEHXZ
    0x53A070 | public: virtual void __thiscall agiPipeline::PrintInit(void) | ?PrintInit@agiPipeline@@UAEXXZ
    0x53A080 | public: virtual void __thiscall agiPipeline::PrintShutdown(void) | ?PrintShutdown@agiPipeline@@UAEXXZ
    0x5C3078 | unsigned char * CharSet | ?CharSet@@3PAEA
    0x539F20 | void __cdecl InitBuiltin(void) | ?InitBuiltin@@YAXXZ
*/

// 0x539DB0 | ?agiPrint@@YAXHHHPBD@Z
inline void agiPrint(int32_t arg1, int32_t arg2, int32_t arg3, char const* arg4)
{
    return stub<cdecl_t<void, int32_t, int32_t, int32_t, char const*>>(0x539DB0, arg1, arg2, arg3, arg4);
}

// 0x539DD0 | ?agiPrintf@@YAXHHHPBDZZ
// Skipped (Variable Arguments)

// 0x539E30 | ?agiPrintIs3D@@YAHXZ
inline int32_t agiPrintIs3D()
{
    return stub<cdecl_t<int32_t>>(0x539E30);
}

// 0x539E40 | ?agiPrintInit@@YAXXZ
inline void agiPrintInit()
{
    return stub<cdecl_t<void>>(0x539E40);
}

// 0x539E50 | ?agiPrintShutdown@@YAXXZ
inline void agiPrintShutdown()
{
    return stub<cdecl_t<void>>(0x539E50);
}

// 0x5C3078 | ?CharSet@@3PAEA
inline extern_var(0x5C3078, uint8_t[768], CharSet);

// 0x539F20 | ?InitBuiltin@@YAXXZ
inline void InitBuiltin()
{
    return stub<cdecl_t<void>>(0x539F20);
}
