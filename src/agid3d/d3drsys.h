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

// agid3d:d3drsys

#include "hooking.h"

// 0x519040 | ?d3d_state_init@@YAXXZ
inline void d3d_state_init()
{
    return stub<cdecl_t<void>>(0x519040);
}

// 0x6F33A0 | ?NoOutput@@3HA
inline extern_var(0x6F33A0, int32_t, NoOutput);

// 0x6F73AC | ?d3ddev@@3PAUIDirect3DDevice3@@A
inline extern_var(0x6F73AC, struct IDirect3DDevice3*, d3ddev);

// 0x6F73C0 | ?VtxBase@@3PAXA
inline extern_var(0x6F73C0, void*, VtxBase);

// 0x6F74C8 | ?OneTexture@@3HA
inline extern_var(0x6F74C8, int32_t, OneTexture);

// 0x6F74CC | ?OrthoFix@@3HA
inline extern_var(0x6F74CC, int32_t, OrthoFix);

struct agiD3DRasterizer : agiRasterizer
{
public:
    // agiD3DRasterizer::`vftable' @ 0x5957A8

    // 0x518FD0 | ??0agiD3DRasterizer@@QAE@PAVagiPipeline@@@Z
    inline agiD3DRasterizer(class agiPipeline* arg1)
    {
        stub<member_func_t<void, agiD3DRasterizer, class agiPipeline*>>(0x518FD0, this, arg1);
    }

    // 0x5190B0 | ?FlushState@agiD3DRasterizer@@IAEXXZ
    inline void FlushState()
    {
        return stub<member_func_t<void, agiD3DRasterizer>>(0x5190B0, this);
    }

    // 0x519000 | ?EndGfx@agiD3DRasterizer@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiD3DRasterizer>>(0x519000, this);
    }

    // 0x519010 | ??1agiD3DRasterizer@@UAE@XZ
    inline ~agiD3DRasterizer() override
    {
        stub<member_func_t<void, agiD3DRasterizer>>(0x519010, this);
    }

    // 0x518FF0 | ?BeginGfx@agiD3DRasterizer@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiD3DRasterizer>>(0x518FF0, this);
    }

    // 0x519020 | ?BeginGroup@agiD3DRasterizer@@UAEXXZ
    inline void BeginGroup() override
    {
        return stub<member_func_t<void, agiD3DRasterizer>>(0x519020, this);
    }

    // 0x519030 | ?EndGroup@agiD3DRasterizer@@UAEXXZ
    inline void EndGroup() override
    {
        return stub<member_func_t<void, agiD3DRasterizer>>(0x519030, this);
    }

    // 0x51A180 | ?Verts@agiD3DRasterizer@@UAEXW4agiVtxType@@PATagiVtx@@H@Z
    inline void Verts(enum agiVtxType arg1, union agiVtx* arg2, int32_t arg3) override
    {
        return stub<member_func_t<void, agiD3DRasterizer, enum agiVtxType, union agiVtx*, int32_t>>(
            0x51A180, this, arg1, arg2, arg3);
    }

    // 0x51A300 | ?Points@agiD3DRasterizer@@UAEXW4agiVtxType@@PATagiVtx@@H@Z
    inline void Points(enum agiVtxType arg1, union agiVtx* arg2, int32_t arg3) override
    {
        return stub<member_func_t<void, agiD3DRasterizer, enum agiVtxType, union agiVtx*, int32_t>>(
            0x51A300, this, arg1, arg2, arg3);
    }

    // 0x51A1D0 | ?SetVertCount@agiD3DRasterizer@@UAEXH@Z
    inline void SetVertCount(int32_t arg1) override
    {
        return stub<member_func_t<void, agiD3DRasterizer, int32_t>>(0x51A1D0, this, arg1);
    }

    // 0x51A1E0 | ?Triangle@agiD3DRasterizer@@UAEXHHH@Z
    inline void Triangle(int32_t arg1, int32_t arg2, int32_t arg3) override
    {
        return stub<member_func_t<void, agiD3DRasterizer, int32_t, int32_t, int32_t>>(0x51A1E0, this, arg1, arg2, arg3);
    }

    // 0x51A270 | ?Line@agiD3DRasterizer@@UAEXHH@Z
    inline void Line(int32_t arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, agiD3DRasterizer, int32_t, int32_t>>(0x51A270, this, arg1, arg2);
    }

    // 0x51A2F0 | ?Card@agiD3DRasterizer@@UAEXHH@Z
    inline void Card(int32_t arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, agiD3DRasterizer, int32_t, int32_t>>(0x51A2F0, this, arg1, arg2);
    }

    // 0x51A360 | ?Mesh@agiD3DRasterizer@@UAEXW4agiVtxType@@PATagiVtx@@HPAGH@Z
    inline void Mesh(enum agiVtxType arg1, union agiVtx* arg2, int32_t arg3, uint16_t* arg4, int32_t arg5) override
    {
        return stub<member_func_t<void, agiD3DRasterizer, enum agiVtxType, union agiVtx*, int32_t, uint16_t*, int32_t>>(
            0x51A360, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x51A3D0 | ?Mesh2@agiD3DRasterizer@@UAEXPAUagiScreenVtx2@@HPAGH@Z
    inline void Mesh2(struct agiScreenVtx2* arg1, int32_t arg2, uint16_t* arg3, int32_t arg4) override
    {
        return stub<member_func_t<void, agiD3DRasterizer, struct agiScreenVtx2*, int32_t, uint16_t*, int32_t>>(
            0x51A3D0, this, arg1, arg2, arg3, arg4);
    }
};
