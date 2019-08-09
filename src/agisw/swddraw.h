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
    agisw:swddraw

    0x51CAF0 | void __cdecl ddAttach(int,int) | ?ddAttach@@YAXHH@Z
    0x6F7DE0 | class agiSurfaceDesc swScreenDesc | ?swScreenDesc@@3VagiSurfaceDesc@@A
    0x6F7E68 | unsigned char * swNibbleLut | ?swNibbleLut@@3PAEA
    0x6F8070 | int bRenderToSystem | ?bRenderToSystem@@3HA
    0x51CB60 | void __cdecl ddStart(void) | ?ddStart@@YAXXZ
    0x51CC60 | void __cdecl ddEnd(void) | ?ddEnd@@YAXXZ
    0x51CC80 | void __cdecl ddStartFrame(void) | ?ddStartFrame@@YAXXZ
    0x51CC90 | void __cdecl ddStartScene(void) | ?ddStartScene@@YAXXZ
    0x51CCD0 | void __cdecl ddEndScene(void) | ?ddEndScene@@YAXXZ
    0x51CCF0 | void __cdecl ddEndFrame(void) | ?ddEndFrame@@YAXXZ
*/

// 0x51CAF0 | ?ddAttach@@YAXHH@Z
inline void ddAttach(int32_t arg1, int32_t arg2)
{
    return stub<cdecl_t<void, int32_t, int32_t>>(0x51CAF0, arg1, arg2);
}

// 0x6F7DE0 | ?swScreenDesc@@3VagiSurfaceDesc@@A
inline extern_var(0x6F7DE0, class agiSurfaceDesc, swScreenDesc);

// 0x6F7E68 | ?swNibbleLut@@3PAEA
inline extern_var(0x6F7E68, uint8_t[512], swNibbleLut);

// 0x6F8070 | ?bRenderToSystem@@3HA
inline extern_var(0x6F8070, int32_t, bRenderToSystem);

// 0x51CB60 | ?ddStart@@YAXXZ
inline void ddStart()
{
    return stub<cdecl_t<void>>(0x51CB60);
}

// 0x51CC60 | ?ddEnd@@YAXXZ
inline void ddEnd()
{
    return stub<cdecl_t<void>>(0x51CC60);
}

// 0x51CC80 | ?ddStartFrame@@YAXXZ
inline void ddStartFrame()
{
    return stub<cdecl_t<void>>(0x51CC80);
}

// 0x51CC90 | ?ddStartScene@@YAXXZ
inline void ddStartScene()
{
    return stub<cdecl_t<void>>(0x51CC90);
}

// 0x51CCD0 | ?ddEndScene@@YAXXZ
inline void ddEndScene()
{
    return stub<cdecl_t<void>>(0x51CCD0);
}

// 0x51CCF0 | ?ddEndFrame@@YAXXZ
inline void ddEndFrame()
{
    return stub<cdecl_t<void>>(0x51CCF0);
}
