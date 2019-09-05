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
    pcwindis:dxsetup

    0x556DB0 | int __stdcall MultiMonCallback(struct _GUID *,char *,char *,void *,void *) | ?MultiMonCallback@@YGHPAU_GUID@@PAD1PAX2@Z
    0x556DF0 | void __cdecl dxiConfig(int,char * *) | ?dxiConfig@@YAXHPAPAD@Z
    0x7119A0 | int dxiCpuSpeed | ?dxiCpuSpeed@@3HA
    0x5570C0 | void __cdecl NeedDX6(void) | ?NeedDX6@@YAXXZ
    0x5570F0 | int __stdcall EnumCounter(struct _GUID *,char *,char *,void *) | ?EnumCounter@@YGHPAU_GUID@@PAD1PAX@Z
    0x557110 | void __cdecl MyDirectDrawEnumerate(int (__stdcall*)(struct _GUID *,char *,char *,void *),void *) | ?MyDirectDrawEnumerate@@YAXP6GHPAU_GUID@@PAD1PAX@Z2@Z
    0x557180 | void __cdecl EnumerateRenderers2(void) | ?EnumerateRenderers2@@YAXXZ
    0x5572D0 | int __cdecl CheckSoftwareRenderer(struct IDirectDraw4 *,struct _GUID *) | ?CheckSoftwareRenderer@@YAHPAUIDirectDraw4@@PAU_GUID@@@Z
    0x5573C0 | long __cdecl LockScreen(struct IDirectDraw4 *) | ?LockScreen@@YAJPAUIDirectDraw4@@@Z
    0x557480 | void __cdecl UnlockScreen(void) | ?UnlockScreen@@YAXXZ
    0x5574A0 | int __cdecl TestResolution(struct IDirectDraw4 *,struct dxiRendererInfo_t &) | ?TestResolution@@YAHPAUIDirectDraw4@@AAUdxiRendererInfo_t@@@Z
    0x5578F0 | long __stdcall ModeCallback(struct _DDSURFACEDESC2 *,void *) | ?ModeCallback@@YGJPAU_DDSURFACEDESC2@@PAX@Z
    0x557980 | long __stdcall EnumZ(struct _DDPIXELFORMAT *,void *) | ?EnumZ@@YGJPAU_DDPIXELFORMAT@@PAX@Z
    0x5579B0 | void __cdecl AddRenderer(struct IDirectDraw4 *,struct _GUID *,char *) | ?AddRenderer@@YAXPAUIDirectDraw4@@PAU_GUID@@PAD@Z
    0x557E00 | long __stdcall EnumTextures(struct _DDPIXELFORMAT *,void *) | ?EnumTextures@@YGJPAU_DDPIXELFORMAT@@PAX@Z
    0x557E30 | int __cdecl NotLameChipset(unsigned long,unsigned long) | ?NotLameChipset@@YAHKK@Z
    0x557E40 | unsigned int __cdecl GetSpecialFlags(unsigned long,unsigned long) | ?GetSpecialFlags@@YAIKK@Z
    0x557F20 | int __stdcall Enumerator(struct _GUID *,char *,char *,void *) | ?Enumerator@@YGHPAU_GUID@@PAD1PAX@Z
*/

#include <ddraw.h>

// 0x556DB0 | ?MultiMonCallback@@YGHPAU_GUID@@PAD1PAX2@Z
inline BOOL __stdcall MultiMonCallback(GUID* arg1, LPSTR arg2, LPSTR arg3, LPVOID arg4, HMONITOR arg5)
{
    return stub<stdcall_t<BOOL, GUID*, LPSTR, LPSTR, LPVOID, HMONITOR>>(0x556DB0, arg1, arg2, arg3, arg4, arg5);
}

// 0x556DF0 | ?dxiConfig@@YAXHPAPAD@Z
void dxiConfig(int32_t argc, char** argv);

// 0x7119A0 | ?dxiCpuSpeed@@3HA
inline extern_var(0x7119A0, int32_t, dxiCpuSpeed);

// 0x5570C0 | ?NeedDX6@@YAXXZ
inline void NeedDX6()
{
    return stub<cdecl_t<void>>(0x5570C0);
}

// 0x5570F0 | ?EnumCounter@@YGHPAU_GUID@@PAD1PAX@Z
inline int32_t __stdcall EnumCounter(struct _GUID* arg1, char* arg2, char* arg3, void* arg4)
{
    return stub<stdcall_t<int32_t, struct _GUID*, char*, char*, void*>>(0x5570F0, arg1, arg2, arg3, arg4);
}

// 0x557110 | ?MyDirectDrawEnumerate@@YAXP6GHPAU_GUID@@PAD1PAX@Z2@Z
void MyDirectDrawEnumerate(int32_t(__stdcall* callback)(struct _GUID*, char*, char*, void*), void* context);

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
int32_t __stdcall ModeCallback(DDSURFACEDESC2* sd, void* context);

// 0x557980 | ?EnumZ@@YGJPAU_DDPIXELFORMAT@@PAX@Z
inline int32_t __stdcall EnumZ(struct _DDPIXELFORMAT* arg1, void* arg2)
{
    return stub<stdcall_t<int32_t, struct _DDPIXELFORMAT*, void*>>(0x557980, arg1, arg2);
}

// 0x5579B0 | ?AddRenderer@@YAXPAUIDirectDraw4@@PAU_GUID@@PAD@Z
inline void AddRenderer(struct IDirectDraw4* arg1, struct _GUID* arg2, char* arg3)
{
    return stub<cdecl_t<void, struct IDirectDraw4*, struct _GUID*, char*>>(0x5579B0, arg1, arg2, arg3);
}

// 0x557E00 | ?EnumTextures@@YGJPAU_DDPIXELFORMAT@@PAX@Z
inline int32_t __stdcall EnumTextures(struct _DDPIXELFORMAT* arg1, void* arg2)
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
inline int32_t __stdcall Enumerator(struct _GUID* arg1, char* arg2, char* arg3, void* arg4)
{
    return stub<stdcall_t<int32_t, struct _GUID*, char*, char*, void*>>(0x557F20, arg1, arg2, arg3, arg4);
}
