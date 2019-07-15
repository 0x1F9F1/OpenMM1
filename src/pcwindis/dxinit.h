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
    pcwindis:dxinit

    0x5556D0 | void __cdecl dxiWindowCreate(char *) | ?dxiWindowCreate@@YAXPAD@Z
    0x5557B0 | int __cdecl dxiChangeDisplaySettings(int,int,int) | ?dxiChangeDisplaySettings@@YAHHHH@Z
    0x555810 | void __cdecl dxiDirectDrawCreate(void) | ?dxiDirectDrawCreate@@YAXXZ
    0x5558D0 | void __cdecl dxiSetDisplayMode(void) | ?dxiSetDisplayMode@@YAXXZ
    0x555A10 | void __cdecl dxiDirectDrawSurfaceCreate(void) | ?dxiDirectDrawSurfaceCreate@@YAXXZ
    0x555CE0 | void __cdecl dxiDirectDrawSurfaceDestroy(void) | ?dxiDirectDrawSurfaceDestroy@@YAXXZ
    0x555D50 | void __cdecl dxiDirectInputCreate(void) | ?dxiDirectInputCreate@@YAXXZ
    0x555D90 | void __cdecl dxiShutdown(void) | ?dxiShutdown@@YAXXZ
    0x555E10 | void * __cdecl dxiMemoryAllocate(struct IDirectDrawSurface4 * *,unsigned int) | ?dxiMemoryAllocate@@YAPAXPAPAUIDirectDrawSurface4@@I@Z
    0x556030 | void __cdecl dxiMemoryFree(struct IDirectDrawSurface4 *) | ?dxiMemoryFree@@YAXPAUIDirectDrawSurface4@@@Z
    0x5560A0 | void __cdecl dxiInit(char *,int,char * *) | ?dxiInit@@YAXPADHPAPAD@Z
    0x556140 | void __cdecl dxiScreenShot(char *) | ?dxiScreenShot@@YAXPAD@Z
    0x5CD428 | int dxiWidth | ?dxiWidth@@3HA
    0x5CD42C | int dxiHeight | ?dxiHeight@@3HA
    0x5CD430 | int dxiDepth | ?dxiDepth@@3HA
    0x5CD434 | int dxiFlags | ?dxiFlags@@3HA
    0x710A90 | int dxiIcon | ?dxiIcon@@3HA
    0x710A98 | struct IDirectDrawSurface4 * lpdsBack2 | ?lpdsBack2@@3PAUIDirectDrawSurface4@@A
    0x710A9C | struct IDirectInputA * lpDI | ?lpDI@@3PAUIDirectInputA@@A
    0x710AA0 | struct IDirectDraw4 * lpDD4 | ?lpDD4@@3PAUIDirectDraw4@@A
    0x710AA4 | struct IDirectDrawSurface4 * lpdsFront | ?lpdsFront@@3PAUIDirectDrawSurface4@@A
    0x710AA8 | struct HWND__ * hwndMain | ?hwndMain@@3PAUHWND__@@A
    0x710AB0 | struct IDirectDrawSurface4 * lpdsBack | ?lpdsBack@@3PAUIDirectDrawSurface4@@A
    0x710AB4 | struct IDirectDrawClipper * lpClip | ?lpClip@@3PAUIDirectDrawClipper@@A
    0x710AB8 | struct IDirectDrawSurface4 * lpdsRend | ?lpdsRend@@3PAUIDirectDrawSurface4@@A
    0x556380 | void __cdecl translate565(unsigned char *,unsigned short *,unsigned int) | ?translate565@@YAXPAEPAGI@Z
    0x5563F0 | void __cdecl translate555(unsigned char *,unsigned short *,unsigned int) | ?translate555@@YAXPAEPAGI@Z
*/

#include "hooking.h"

// 0x5556D0 | ?dxiWindowCreate@@YAXPAD@Z
inline void dxiWindowCreate(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x5556D0, arg1);
}

// 0x5557B0 | ?dxiChangeDisplaySettings@@YAHHHH@Z
int32_t dxiChangeDisplaySettings(int32_t width, int32_t height, int32_t bpp);

// 0x555810 | ?dxiDirectDrawCreate@@YAXXZ
inline void dxiDirectDrawCreate()
{
    return stub<cdecl_t<void>>(0x555810);
}

// 0x5558D0 | ?dxiSetDisplayMode@@YAXXZ
inline void dxiSetDisplayMode()
{
    return stub<cdecl_t<void>>(0x5558D0);
}

// 0x555A10 | ?dxiDirectDrawSurfaceCreate@@YAXXZ
inline void dxiDirectDrawSurfaceCreate()
{
    return stub<cdecl_t<void>>(0x555A10);
}

// 0x555CE0 | ?dxiDirectDrawSurfaceDestroy@@YAXXZ
inline void dxiDirectDrawSurfaceDestroy()
{
    return stub<cdecl_t<void>>(0x555CE0);
}

// 0x555D50 | ?dxiDirectInputCreate@@YAXXZ
inline void dxiDirectInputCreate()
{
    return stub<cdecl_t<void>>(0x555D50);
}

// 0x555D90 | ?dxiShutdown@@YAXXZ
inline void dxiShutdown()
{
    return stub<cdecl_t<void>>(0x555D90);
}

// 0x555E10 | ?dxiMemoryAllocate@@YAPAXPAPAUIDirectDrawSurface4@@I@Z
inline void* dxiMemoryAllocate(struct IDirectDrawSurface4** arg1, uint32_t arg2)
{
    return stub<cdecl_t<void*, struct IDirectDrawSurface4**, uint32_t>>(0x555E10, arg1, arg2);
}

// 0x556030 | ?dxiMemoryFree@@YAXPAUIDirectDrawSurface4@@@Z
inline void dxiMemoryFree(struct IDirectDrawSurface4* arg1)
{
    return stub<cdecl_t<void, struct IDirectDrawSurface4*>>(0x556030, arg1);
}

// 0x5560A0 | ?dxiInit@@YAXPADHPAPAD@Z
void dxiInit(char* window_name, int32_t argc, char** argv);

// 0x556140 | ?dxiScreenShot@@YAXPAD@Z
inline void dxiScreenShot(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x556140, arg1);
}

// 0x5CD428 | ?dxiWidth@@3HA
inline extern_var(0x5CD428, int32_t, dxiWidth);

// 0x5CD42C | ?dxiHeight@@3HA
inline extern_var(0x5CD42C, int32_t, dxiHeight);

// 0x5CD430 | ?dxiDepth@@3HA
inline extern_var(0x5CD430, int32_t, dxiDepth);

// 0x5CD434 | ?dxiFlags@@3HA
inline extern_var(0x5CD434, int32_t, dxiFlags);

// 0x710A90 | ?dxiIcon@@3HA
inline extern_var(0x710A90, int32_t, dxiIcon);

// 0x710A98 | ?lpdsBack2@@3PAUIDirectDrawSurface4@@A
inline extern_var(0x710A98, struct IDirectDrawSurface4*, lpdsBack2);

// 0x710A9C | ?lpDI@@3PAUIDirectInputA@@A
inline extern_var(0x710A9C, struct IDirectInputA*, lpDI);

// 0x710AA0 | ?lpDD4@@3PAUIDirectDraw4@@A
inline extern_var(0x710AA0, struct IDirectDraw4*, lpDD4);

// 0x710AA4 | ?lpdsFront@@3PAUIDirectDrawSurface4@@A
inline extern_var(0x710AA4, struct IDirectDrawSurface4*, lpdsFront);

// 0x710AA8 | ?hwndMain@@3PAUHWND__@@A
inline extern_var(0x710AA8, struct HWND__*, hwndMain);

// 0x710AB0 | ?lpdsBack@@3PAUIDirectDrawSurface4@@A
inline extern_var(0x710AB0, struct IDirectDrawSurface4*, lpdsBack);

// 0x710AB4 | ?lpClip@@3PAUIDirectDrawClipper@@A
inline extern_var(0x710AB4, struct IDirectDrawClipper*, lpClip);

// 0x710AB8 | ?lpdsRend@@3PAUIDirectDrawSurface4@@A
inline extern_var(0x710AB8, struct IDirectDrawSurface4*, lpdsRend);

// 0x556380 | ?translate565@@YAXPAEPAGI@Z
inline void translate565(uint8_t* arg1, uint16_t* arg2, uint32_t arg3)
{
    return stub<cdecl_t<void, uint8_t*, uint16_t*, uint32_t>>(0x556380, arg1, arg2, arg3);
}

// 0x5563F0 | ?translate555@@YAXPAEPAGI@Z
inline void translate555(uint8_t* arg1, uint16_t* arg2, uint32_t arg3)
{
    return stub<cdecl_t<void, uint8_t*, uint16_t*, uint32_t>>(0x5563F0, arg1, arg2, arg3);
}
