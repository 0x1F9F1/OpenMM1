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

// agi:rsys

#include "hooking.h"

// 0x5C3018 | ?ROPTS@@3UagiRenderOpts@@A
inline extern_var(0x5C3018, struct agiRenderOpts, ROPTS);

// 0x706540 | ?agiLastState@@3UagiRendStateStruct@@A
inline extern_var(0x706540, struct agiRendStateStruct, agiLastState);

// 0x706580 | ?agiCurState@@3VagiRendState@@A
inline extern_var(0x706580, class agiRendState, agiCurState);

// 0x7065C0 | ?RAST@@3PAVagiRasterizer@@A
inline extern_var(0x7065C0, class agiRasterizer*, RAST);

class agiRasterizer : agiRefreshable
{
public:
    // agiRasterizer::`vftable' @ 0x595B98

    // 0x539B20 | ??0agiRasterizer@@QAE@PAVagiPipeline@@@Z
    inline agiRasterizer(class agiPipeline* arg1)
    {
        stub<member_func_t<void, agiRasterizer, class agiPipeline*>>(0x539B20, this, arg1);
    }

    // 0x567350 | __purecall

    // 0x539C50 | ??1agiRasterizer@@UAE@XZ
    inline ~agiRasterizer() override
    {
        stub<member_func_t<void, agiRasterizer>>(0x539C50, this);
    }

    // 0x567350 | __purecall

    // 0x539C60 | ?BeginGroup@agiRasterizer@@UAEXXZ
    virtual inline void BeginGroup()
    {
        return stub<member_func_t<void, agiRasterizer>>(0x539C60, this);
    }

    // 0x539C70 | ?EndGroup@agiRasterizer@@UAEXXZ
    virtual inline void EndGroup()
    {
        return stub<member_func_t<void, agiRasterizer>>(0x539C70, this);
    }

    // 0x567350 | __purecall
    virtual inline void Verts(enum agiVtxType arg1, union agiVtx* arg2, int32_t arg3)
    {
        return stub<member_func_t<void, agiRasterizer, enum agiVtxType, union agiVtx*, int32_t>>(
            0x567350, this, arg1, arg2, arg3);
    }

    // 0x567350 | __purecall
    virtual inline void Points(enum agiVtxType arg1, union agiVtx* arg2, int32_t arg3)
    {
        return stub<member_func_t<void, agiRasterizer, enum agiVtxType, union agiVtx*, int32_t>>(
            0x567350, this, arg1, arg2, arg3);
    }

    // 0x567350 | __purecall
    virtual inline void SetVertCount(int32_t arg1)
    {
        return stub<member_func_t<void, agiRasterizer, int32_t>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline void Triangle(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, agiRasterizer, int32_t, int32_t, int32_t>>(0x567350, this, arg1, arg2, arg3);
    }

    // 0x539C80 | ?Quad@agiRasterizer@@UAEXHHHH@Z
    virtual inline void Quad(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<void, agiRasterizer, int32_t, int32_t, int32_t, int32_t>>(
            0x539C80, this, arg1, arg2, arg3, arg4);
    }

    // 0x539CB0 | ?Poly@agiRasterizer@@UAEXPAHH@Z
    virtual inline void Poly(int32_t* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, agiRasterizer, int32_t*, int32_t>>(0x539CB0, this, arg1, arg2);
    }

    // 0x567350 | __purecall
    virtual inline void Line(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, agiRasterizer, int32_t, int32_t>>(0x567350, this, arg1, arg2);
    }

    // 0x567350 | __purecall
    virtual inline void Card(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, agiRasterizer, int32_t, int32_t>>(0x567350, this, arg1, arg2);
    }

    // 0x567350 | __purecall
    virtual inline void Mesh(enum agiVtxType arg1, union agiVtx* arg2, int32_t arg3, uint16_t* arg4, int32_t arg5)
    {
        return stub<member_func_t<void, agiRasterizer, enum agiVtxType, union agiVtx*, int32_t, uint16_t*, int32_t>>(
            0x567350, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x539CF0 | ?Mesh2@agiRasterizer@@UAEXPAUagiScreenVtx2@@HPAGH@Z
    virtual inline void Mesh2(struct agiScreenVtx2* arg1, int32_t arg2, uint16_t* arg3, int32_t arg4)
    {
        return stub<member_func_t<void, agiRasterizer, struct agiScreenVtx2*, int32_t, uint16_t*, int32_t>>(
            0x539CF0, this, arg1, arg2, arg3, arg4);
    }

    // 0x539D10 | ?LineList@agiRasterizer@@UAEXW4agiVtxType@@PATagiVtx@@H@Z
    virtual inline void LineList(enum agiVtxType arg1, union agiVtx* arg2, int32_t arg3)
    {
        return stub<member_func_t<void, agiRasterizer, enum agiVtxType, union agiVtx*, int32_t>>(
            0x539D10, this, arg1, arg2, arg3);
    }
};

struct agiRendStateStruct
{
public:
    // 0x539C20 | ?Reset@agiRendStateStruct@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, agiRendStateStruct>>(0x539C20, this);
    }
};
