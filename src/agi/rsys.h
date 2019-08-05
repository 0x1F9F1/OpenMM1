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
    agi:rsys

    0x539B20 | public: __thiscall agiRasterizer::agiRasterizer(class agiPipeline *) | ??0agiRasterizer@@QAE@PAVagiPipeline@@@Z
    0x539C20 | public: void __thiscall agiRendStateStruct::Reset(void) | ?Reset@agiRendStateStruct@@QAEXXZ
    0x539C50 | public: virtual __thiscall agiRasterizer::~agiRasterizer(void) | ??1agiRasterizer@@UAE@XZ
    0x539C60 | public: virtual void __thiscall agiRasterizer::BeginGroup(void) | ?BeginGroup@agiRasterizer@@UAEXXZ
    0x539C70 | public: virtual void __thiscall agiRasterizer::EndGroup(void) | ?EndGroup@agiRasterizer@@UAEXXZ
    0x539C80 | public: virtual void __thiscall agiRasterizer::Quad(int,int,int,int) | ?Quad@agiRasterizer@@UAEXHHHH@Z
    0x539CB0 | public: virtual void __thiscall agiRasterizer::Poly(int *,int) | ?Poly@agiRasterizer@@UAEXPAHH@Z
    0x539CF0 | public: virtual void __thiscall agiRasterizer::Mesh2(struct agiScreenVtx2 *,int,unsigned short *,int) | ?Mesh2@agiRasterizer@@UAEXPAUagiScreenVtx2@@HPAGH@Z
    0x539D10 | public: virtual void __thiscall agiRasterizer::LineList(enum agiVtxType,union agiVtx *,int) | ?LineList@agiRasterizer@@UAEXW4agiVtxType@@PATagiVtx@@H@Z
    0x539D80 | public: virtual void * __thiscall agiRasterizer::`vector deleting destructor'(unsigned int) | ??_EagiRasterizer@@UAEPAXI@Z
    0x539D80 | public: virtual void * __thiscall agiRasterizer::`scalar deleting destructor'(unsigned int) | ??_GagiRasterizer@@UAEPAXI@Z
    0x595B98 | const agiRasterizer::`vftable' | ??_7agiRasterizer@@6B@
    0x5C3018 | struct agiRenderOpts ROPTS | ?ROPTS@@3UagiRenderOpts@@A
    0x706540 | struct agiRendStateStruct agiLastState | ?agiLastState@@3UagiRendStateStruct@@A
    0x706580 | class agiRendState agiCurState | ?agiCurState@@3VagiRendState@@A
    0x7065C0 | class agiRasterizer * RAST | ?RAST@@3PAVagiRasterizer@@A
*/

#include "refresh.h"

// 0x5C3018 | ?ROPTS@@3UagiRenderOpts@@A
inline extern_var(0x5C3018, struct agiRenderOpts, ROPTS);

// 0x706540 | ?agiLastState@@3UagiRendStateStruct@@A
inline extern_var(0x706540, struct agiRendStateStruct, agiLastState);

// 0x706580 | ?agiCurState@@3VagiRendState@@A
inline extern_var(0x706580, class agiRendState, agiCurState);

// 0x7065C0 | ?RAST@@3PAVagiRasterizer@@A
inline extern_var(0x7065C0, class agiRasterizer*, RAST);

enum agiVtxType
{
    VtxType0,
    VtxType1,
    VtxType2,
    VtxType3,
};

class agiRasterizer : public agiRefreshable
{
public:
    // agiRasterizer::`vftable' @ 0x595B98

    // 0x539B20 | ??0agiRasterizer@@QAE@PAVagiPipeline@@@Z
    agiRasterizer(class agiPipeline* pipe);

    // 0x539C50 | ??1agiRasterizer@@UAE@XZ
    ~agiRasterizer() override = default;

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
    virtual inline void Verts(enum agiVtxType arg1, union agiVtx* arg2, int32_t arg3) = 0;

    // 0x567350 | __purecall
    virtual inline void Points(enum agiVtxType arg1, union agiVtx* arg2, int32_t arg3) = 0;

    // 0x567350 | __purecall
    virtual inline void SetVertCount(int32_t arg1) = 0;

    // 0x567350 | __purecall
    virtual inline void Triangle(int32_t arg1, int32_t arg2, int32_t arg3) = 0;

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
    virtual inline void Line(int32_t arg1, int32_t arg2) = 0;

    // 0x567350 | __purecall
    virtual inline void Card(int32_t arg1, int32_t arg2) = 0;

    // 0x567350 | __purecall
    virtual inline void Mesh(enum agiVtxType arg1, union agiVtx* arg2, int32_t arg3, uint16_t* arg4, int32_t arg5) = 0;

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

check_size(agiRasterizer, 0x18);

class agiTexDef;

struct agiRendStateStruct
{
public:
    uint32_t dword0;
    agiTexDef* CurrentTexture;
    uint32_t dword8;
    uint8_t BlendMode;
    uint8_t ShaderModel;
    uint8_t PolyMode;
    uint8_t TexFilter;
    uint8_t byte10;
    uint8_t CullMode;
    uint8_t byte12;
    uint8_t byte13;
    uint8_t PerspectiveCorrection;
    uint8_t AlphaMode;
    uint8_t byte16;
    uint8_t byte17;
    uint8_t DepthTest;
    uint8_t DepthMask;
    uint8_t byte1A;
    uint8_t byte1B;
    uint8_t byte1C;
    uint8_t byte1D;
    uint8_t byte1E;
    uint8_t byte1F;
    float float20;
    float float24;
    float float28;
    uint8_t byte2C;
    uint8_t byte2D;
    uint8_t byte2E;
    uint8_t byte2F;
    uint8_t byte30;
    int8_t VertType;
    uint8_t byte32;
    uint8_t byte33;
    float float34;
    uint32_t dword38;

    agiRendStateStruct();

    // 0x539C20 | ?Reset@agiRendStateStruct@@QAEXXZ
    void Reset();
};

check_size(agiRendStateStruct, 0x3C);

class agiRendState
{
public:
    uint32_t m_Touched {0};
    agiRendStateStruct m_State {};

#define X(NAME, TYPE, MEMBER)                  \
    inline TYPE Get##NAME() const noexcept     \
    {                                          \
        return m_State.MEMBER;                 \
    }                                          \
    inline void Set##NAME(TYPE value) noexcept \
    {                                          \
        if (m_State.MEMBER != value)           \
        {                                      \
            m_State.MEMBER = value;            \
            m_Touched = 1;                     \
        }                                      \
    }

    X(PerspectiveCorrection, uint8_t, PerspectiveCorrection);
    X(BlendMode, uint8_t, BlendMode);
    X(DepthMask, uint8_t, DepthMask);
    X(Byte12, uint8_t, byte12);
    X(Byte2F, uint8_t, byte2F);
    X(Byte30, uint8_t, byte30);
    X(Byte10, uint8_t, byte10);
    X(Byte33, uint8_t, byte33);
    X(PolyMode, uint8_t, PolyMode);
    X(CullMode, uint8_t, CullMode);
    X(Texture, agiTexDef*, CurrentTexture);
    X(DepthTest, uint8_t, DepthTest);
    X(TexFilter, uint8_t, TexFilter);
    X(ShaderModel, uint8_t, ShaderModel);
    X(AlphaMode, uint8_t, AlphaMode);
    X(VertType, int8_t, VertType);

#undef X

    bool IsTouched()
    {
        return m_Touched != 0;
    }

    void ClearTouched()
    {
        m_Touched = 0;
    }
};

check_size(agiRendState, 0x40);
