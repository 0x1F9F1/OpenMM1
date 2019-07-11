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

// pcwindis:dxsetup

#include "hooking.h"

// 0x556DB0 | ?MultiMonCallback@@YGHPAU_GUID@@PAD1PAX2@Z
inline int32_t MultiMonCallback(struct _GUID* arg1, char* arg2, char* arg3, void* arg4, void* arg5)
{
    return stub<stdcall_t<int32_t, struct _GUID*, char*, char*, void*, void*>>(0x556DB0, arg1, arg2, arg3, arg4, arg5);
}

// 0x556DF0 | ?dxiConfig@@YAXHPAPAD@Z
inline void dxiConfig(int32_t arg1, char** arg2)
{
    return stub<cdecl_t<void, int32_t, char**>>(0x556DF0, arg1, arg2);
}

// 0x7119A0 | ?dxiCpuSpeed@@3HA
inline extern_var(0x7119A0, int32_t, dxiCpuSpeed);

// 0x5570C0 | ?NeedDX6@@YAXXZ
inline void NeedDX6()
{
    return stub<cdecl_t<void>>(0x5570C0);
}

// 0x5570F0 | ?EnumCounter@@YGHPAU_GUID@@PAD1PAX@Z
inline int32_t EnumCounter(struct _GUID* arg1, char* arg2, char* arg3, void* arg4)
{
    return stub<stdcall_t<int32_t, struct _GUID*, char*, char*, void*>>(0x5570F0, arg1, arg2, arg3, arg4);
}

// 0x557110 | ?MyDirectDrawEnumerate@@YAXP6GHPAU_GUID@@PAD1PAX@Z2@Z
inline void MyDirectDrawEnumerate(int32_t(__stdcall* arg1)(struct _GUID*, char*, char*, void*), void* arg2)
{
    return stub<cdecl_t<void, int32_t(__stdcall*)(struct _GUID*, char*, char*, void*), void*>>(0x557110, arg1, arg2);
}

// 0x557180 | ?EnumerateRenderers2@@YAXXZ
inline void EnumerateRenderers2()
{
    return stub<cdecl_t<void>>(0x557180);
}

// 0x5572D0 | ?CheckSoftwareRenderer@@YAHPAUIDirectDraw4@@PAU_GUID@@@Z
inline int32_t CheckSoftwareRenderer(struct IDirectDraw4* arg1, struct _GUID* arg2)
{
    return stub<cdecl_t<int32_t, struct IDirectDraw4*, struct _GUID*>>(0x5572D0, arg1, arg2);
}

// 0x5573C0 | ?LockScreen@@YAJPAUIDirectDraw4@@@Z
inline int32_t LockScreen(struct IDirectDraw4* arg1)
{
    return stub<cdecl_t<int32_t, struct IDirectDraw4*>>(0x5573C0, arg1);
}

// 0x557480 | ?UnlockScreen@@YAXXZ
inline void UnlockScreen()
{
    return stub<cdecl_t<void>>(0x557480);
}

// 0x5574A0 | ?TestResolution@@YAHPAUIDirectDraw4@@AAUdxiRendererInfo_t@@@Z
inline int32_t TestResolution(struct IDirectDraw4* arg1, struct dxiRendererInfo_t& arg2)
{
    return stub<cdecl_t<int32_t, struct IDirectDraw4*, struct dxiRendererInfo_t&>>(0x5574A0, arg1, arg2);
}

// 0x5578F0 | ?ModeCallback@@YGJPAU_DDSURFACEDESC2@@PAX@Z
inline int32_t ModeCallback(struct _DDSURFACEDESC2* arg1, void* arg2)
{
    return stub<stdcall_t<int32_t, struct _DDSURFACEDESC2*, void*>>(0x5578F0, arg1, arg2);
}

// 0x557980 | ?EnumZ@@YGJPAU_DDPIXELFORMAT@@PAX@Z
inline int32_t EnumZ(struct _DDPIXELFORMAT* arg1, void* arg2)
{
    return stub<stdcall_t<int32_t, struct _DDPIXELFORMAT*, void*>>(0x557980, arg1, arg2);
}

// 0x5579B0 | ?AddRenderer@@YAXPAUIDirectDraw4@@PAU_GUID@@PAD@Z
inline void AddRenderer(struct IDirectDraw4* arg1, struct _GUID* arg2, char* arg3)
{
    return stub<cdecl_t<void, struct IDirectDraw4*, struct _GUID*, char*>>(0x5579B0, arg1, arg2, arg3);
}

// 0x557E00 | ?EnumTextures@@YGJPAU_DDPIXELFORMAT@@PAX@Z
inline int32_t EnumTextures(struct _DDPIXELFORMAT* arg1, void* arg2)
{
    return stub<stdcall_t<int32_t, struct _DDPIXELFORMAT*, void*>>(0x557E00, arg1, arg2);
}

// 0x557E30 | ?NotLameChipset@@YAHKK@Z
inline int32_t NotLameChipset(uint32_t arg1, uint32_t arg2)
{
    return stub<cdecl_t<int32_t, uint32_t, uint32_t>>(0x557E30, arg1, arg2);
}

// 0x557E40 | ?GetSpecialFlags@@YAIKK@Z
inline uint32_t GetSpecialFlags(uint32_t arg1, uint32_t arg2)
{
    return stub<cdecl_t<uint32_t, uint32_t, uint32_t>>(0x557E40, arg1, arg2);
}

// 0x557F20 | ?Enumerator@@YGHPAU_GUID@@PAD1PAX@Z
inline int32_t Enumerator(struct _GUID* arg1, char* arg2, char* arg3, void* arg4)
{
    return stub<stdcall_t<int32_t, struct _GUID*, char*, char*, void*>>(0x557F20, arg1, arg2, arg3, arg4);
}
