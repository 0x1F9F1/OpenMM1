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

// D3DFVF_TLVERTEX
struct agiScreenVtx
{
    float x;
    float y;
    float z;
    float w;
    uint32_t color;
    uint32_t specular;
    float tu;
    float tv;
};

check_size(agiScreenVtx, 0x20);

// (D3DFVF_TLVERTEX | D3DFVF_TEX2) & ~D3DFVF_TEX1
struct agiScreenVtx2
{
    float x;
    float y;
    float z;
    float w;
    uint32_t specular;
    uint32_t diffuse;
    float tu1;
    float tv1;
    float tu2;
    float tv2;
};

check_size(agiScreenVtx2, 0x28);

union agiVtx
{
    agiScreenVtx Vtx;
    agiScreenVtx2 Vtx2;
};
