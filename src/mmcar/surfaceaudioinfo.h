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

// mmcar:surfaceaudioinfo

#include "hooking.h"

// 0x468A20 | ?SetClearSurfaceAudioInfos@@YAXXZ
inline void SetClearSurfaceAudioInfos()
{
    return stub<cdecl_t<void>>(0x468A20);
}

// 0x468C80 | ?SetRainSurfaceAudioInfos@@YAXXZ
inline void SetRainSurfaceAudioInfos()
{
    return stub<cdecl_t<void>>(0x468C80);
}

// 0x468EE0 | ?SetSnowSurfaceAudioInfos@@YAXXZ
inline void SetSnowSurfaceAudioInfos()
{
    return stub<cdecl_t<void>>(0x468EE0);
}

// 0x60A080 | ?SURFACEAUDIOINFO@@3PAUtagSurfaceAudioInfo@@A
inline extern_var(0x60A080, struct tagSurfaceAudioInfo*, SURFACEAUDIOINFO);
