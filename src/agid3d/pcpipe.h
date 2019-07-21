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
    agid3d:pcpipe

    0x516930 | class agiPipeline * __cdecl d3dCreatePipeline(int,char * *) | ?d3dCreatePipeline@@YAPAVagiPipeline@@HPAPAD@Z
    0x6F2EFC | int NoMultiTexture | ?NoMultiTexture@@3HA
    0x6F2F00 | int MaxTexMem | ?MaxTexMem@@3HA
    0x6F2F04 | int AutoMip | ?AutoMip@@3HA
    0x6F2F08 | int DrawLabelFArg | ?DrawLabelFArg@@3HA
    0x6F2F0C | int NoMip | ?NoMip@@3HA
    0x6F2F10 | int NormalizedFog | ?NormalizedFog@@3HA
    0x6F2F14 | int FullMip | ?FullMip@@3HA
    0x6F2F18 | int ForceSquare | ?ForceSquare@@3HA
    0x6F2F1C | int NoBlitHack | ?NoBlitHack@@3HA
    0x6F2F20 | int DrawLabelPArg | ?DrawLabelPArg@@3HA
*/

// 0x516930 | ?d3dCreatePipeline@@YAPAVagiPipeline@@HPAPAD@Z
inline class agiPipeline* d3dCreatePipeline(int32_t arg1, char** arg2)
{
    return stub<cdecl_t<class agiPipeline*, int32_t, char**>>(0x516930, arg1, arg2);
}

// 0x6F2EFC | ?NoMultiTexture@@3HA
inline extern_var(0x6F2EFC, int32_t, NoMultiTexture);

// 0x6F2F00 | ?MaxTexMem@@3HA
inline extern_var(0x6F2F00, int32_t, MaxTexMem);

// 0x6F2F04 | ?AutoMip@@3HA
inline extern_var(0x6F2F04, int32_t, AutoMip);

// 0x6F2F08 | ?DrawLabelFArg@@3HA
inline extern_var(0x6F2F08, int32_t, DrawLabelFArg);

// 0x6F2F0C | ?NoMip@@3HA
inline extern_var(0x6F2F0C, int32_t, NoMip);

// 0x6F2F10 | ?NormalizedFog@@3HA
inline extern_var(0x6F2F10, int32_t, NormalizedFog);

// 0x6F2F14 | ?FullMip@@3HA
inline extern_var(0x6F2F14, int32_t, FullMip);

// 0x6F2F18 | ?ForceSquare@@3HA
inline extern_var(0x6F2F18, int32_t, ForceSquare);

// 0x6F2F1C | ?NoBlitHack@@3HA
inline extern_var(0x6F2F1C, int32_t, NoBlitHack);

// 0x6F2F20 | ?DrawLabelPArg@@3HA
inline extern_var(0x6F2F20, int32_t, DrawLabelPArg);
