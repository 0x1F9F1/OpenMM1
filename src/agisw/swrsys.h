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
    agisw:swrsys

    0x51F350 | public: __thiscall agiSWRasterizer::agiSWRasterizer(class agiPipeline *) | ??0agiSWRasterizer@@QAE@PAVagiPipeline@@@Z
    0x51F370 | public: virtual __thiscall agiSWRasterizer::~agiSWRasterizer(void) | ??1agiSWRasterizer@@UAE@XZ
    0x51F380 | public: virtual int __thiscall agiSWRasterizer::BeginGfx(void) | ?BeginGfx@agiSWRasterizer@@UAEHXZ
    0x51F390 | public: virtual void __thiscall agiSWRasterizer::EndGfx(void) | ?EndGfx@agiSWRasterizer@@UAEXXZ
    0x51F3A0 | public: virtual void __thiscall agiSWRasterizer::BeginGroup(void) | ?BeginGroup@agiSWRasterizer@@UAEXXZ
    0x51F3B0 | public: virtual void __thiscall agiSWRasterizer::EndGroup(void) | ?EndGroup@agiSWRasterizer@@UAEXXZ
    0x51F3C0 | public: virtual void __thiscall agiSWRasterizer::Verts(enum agiVtxType,union agiVtx *,int) | ?Verts@agiSWRasterizer@@UAEXW4agiVtxType@@PATagiVtx@@H@Z
    0x51F3D0 | public: virtual void __thiscall agiSWRasterizer::SetVertCount(int) | ?SetVertCount@agiSWRasterizer@@UAEXH@Z
    0x51F3E0 | public: virtual void __thiscall agiSWRasterizer::Triangle(int,int,int) | ?Triangle@agiSWRasterizer@@UAEXHHH@Z
    0x51F410 | public: virtual void __thiscall agiSWRasterizer::Quad(int,int,int,int) | ?Quad@agiSWRasterizer@@UAEXHHHH@Z
    0x51F450 | public: virtual void __thiscall agiSWRasterizer::Line(int,int) | ?Line@agiSWRasterizer@@UAEXHH@Z
    0x51F490 | public: virtual void __thiscall agiSWRasterizer::Card(int,int) | ?Card@agiSWRasterizer@@UAEXHH@Z
    0x51F4A0 | public: virtual void __thiscall agiSWRasterizer::Points(enum agiVtxType,union agiVtx *,int) | ?Points@agiSWRasterizer@@UAEXW4agiVtxType@@PATagiVtx@@H@Z
    0x51F4B0 | public: virtual void __thiscall agiSWRasterizer::Mesh(enum agiVtxType,union agiVtx *,int,unsigned short *,int) | ?Mesh@agiSWRasterizer@@UAEXW4agiVtxType@@PATagiVtx@@HPAGH@Z
    0x51F560 | public: virtual void * __thiscall agiSWRasterizer::`scalar deleting destructor'(unsigned int) | ??_GagiSWRasterizer@@UAEPAXI@Z
    0x51F560 | public: virtual void * __thiscall agiSWRasterizer::`vector deleting destructor'(unsigned int) | ??_EagiSWRasterizer@@UAEPAXI@Z
    0x5959E8 | const agiSWRasterizer::`vftable' | ??_7agiSWRasterizer@@6B@
*/

#include "hooking.h"

struct agiSWRasterizer : agiRasterizer
{
public:
    // agiSWRasterizer::`vftable' @ 0x5959E8

    // 0x51F350 | ??0agiSWRasterizer@@QAE@PAVagiPipeline@@@Z
    inline agiSWRasterizer(class agiPipeline* arg1)
    {
        // stub<member_func_t<void, agiSWRasterizer, class agiPipeline*>>(0x51F350, this, arg1);

        unimplemented();
    }

    // 0x51F390 | ?EndGfx@agiSWRasterizer@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiSWRasterizer>>(0x51F390, this);
    }

    // 0x51F370 | ??1agiSWRasterizer@@UAE@XZ
    inline ~agiSWRasterizer() override = 0
    {
        // stub<member_func_t<void, agiSWRasterizer>>(0x51F370, this);

        unimplemented();
    }

    // 0x51F380 | ?BeginGfx@agiSWRasterizer@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiSWRasterizer>>(0x51F380, this);
    }

    // 0x51F3A0 | ?BeginGroup@agiSWRasterizer@@UAEXXZ
    inline void BeginGroup() override
    {
        return stub<member_func_t<void, agiSWRasterizer>>(0x51F3A0, this);
    }

    // 0x51F3B0 | ?EndGroup@agiSWRasterizer@@UAEXXZ
    inline void EndGroup() override
    {
        return stub<member_func_t<void, agiSWRasterizer>>(0x51F3B0, this);
    }

    // 0x51F3C0 | ?Verts@agiSWRasterizer@@UAEXW4agiVtxType@@PATagiVtx@@H@Z
    inline void Verts(enum agiVtxType arg1, union agiVtx* arg2, int32_t arg3) override
    {
        return stub<member_func_t<void, agiSWRasterizer, enum agiVtxType, union agiVtx*, int32_t>>(
            0x51F3C0, this, arg1, arg2, arg3);
    }

    // 0x51F4A0 | ?Points@agiSWRasterizer@@UAEXW4agiVtxType@@PATagiVtx@@H@Z
    inline void Points(enum agiVtxType arg1, union agiVtx* arg2, int32_t arg3) override
    {
        return stub<member_func_t<void, agiSWRasterizer, enum agiVtxType, union agiVtx*, int32_t>>(
            0x51F4A0, this, arg1, arg2, arg3);
    }

    // 0x51F3D0 | ?SetVertCount@agiSWRasterizer@@UAEXH@Z
    inline void SetVertCount(int32_t arg1) override
    {
        return stub<member_func_t<void, agiSWRasterizer, int32_t>>(0x51F3D0, this, arg1);
    }

    // 0x51F3E0 | ?Triangle@agiSWRasterizer@@UAEXHHH@Z
    inline void Triangle(int32_t arg1, int32_t arg2, int32_t arg3) override
    {
        return stub<member_func_t<void, agiSWRasterizer, int32_t, int32_t, int32_t>>(0x51F3E0, this, arg1, arg2, arg3);
    }

    // 0x51F410 | ?Quad@agiSWRasterizer@@UAEXHHHH@Z
    inline void Quad(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) override
    {
        return stub<member_func_t<void, agiSWRasterizer, int32_t, int32_t, int32_t, int32_t>>(
            0x51F410, this, arg1, arg2, arg3, arg4);
    }

    // 0x51F450 | ?Line@agiSWRasterizer@@UAEXHH@Z
    inline void Line(int32_t arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, agiSWRasterizer, int32_t, int32_t>>(0x51F450, this, arg1, arg2);
    }

    // 0x51F490 | ?Card@agiSWRasterizer@@UAEXHH@Z
    inline void Card(int32_t arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, agiSWRasterizer, int32_t, int32_t>>(0x51F490, this, arg1, arg2);
    }

    // 0x51F4B0 | ?Mesh@agiSWRasterizer@@UAEXW4agiVtxType@@PATagiVtx@@HPAGH@Z
    inline void Mesh(enum agiVtxType arg1, union agiVtx* arg2, int32_t arg3, uint16_t* arg4, int32_t arg5) override
    {
        return stub<member_func_t<void, agiSWRasterizer, enum agiVtxType, union agiVtx*, int32_t, uint16_t*, int32_t>>(
            0x51F4B0, this, arg1, arg2, arg3, arg4, arg5);
    }
};
