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
    agisw:swrend

    0x51CE30 | void __fastcall __emitDebug(struct swSurface *,int) | ?__emitDebug@@YIXPAUswSurface@@H@Z
    0x51CE90 | void __fastcall __emitDepthComplexity(int) | ?__emitDepthComplexity@@YIXH@Z
    0x51CED0 | void __fastcall __emitSolid(int) | ?__emitSolid@@YIXH@Z
    0x51CF20 | void __fastcall __emitSolidZ(int) | ?__emitSolidZ@@YIXH@Z
    0x51CF90 | void __fastcall __emitWireframe(int) | ?__emitWireframe@@YIXH@Z
    0x51CFB0 | void __cdecl swAddEdge(int,int) | ?swAddEdge@@YAXHH@Z
    0x51D180 | void __fastcall __setupUV(struct swSurface *) | ?__setupUV@@YIXPAUswSurface@@@Z
    0x51D240 | void __fastcall __setupUVZ(struct swSurface *) | ?__setupUVZ@@YIXPAUswSurface@@@Z
    0x51D310 | void __fastcall __setupZ(struct swSurface *) | ?__setupZ@@YIXPAUswSurface@@@Z
    0x51D350 | void __fastcall __setupUVI(struct swSurface *) | ?__setupUVI@@YIXPAUswSurface@@@Z
    0x51D420 | void __fastcall __setupUVIZ(struct swSurface *) | ?__setupUVIZ@@YIXPAUswSurface@@@Z
    0x51D500 | void __fastcall __setupNone(struct swSurface *) | ?__setupNone@@YIXPAUswSurface@@@Z
    0x51D510 | void __fastcall __spanLinear(struct swSurface *,int) | ?__spanLinear@@YIXPAUswSurface@@H@Z
    0x51D540 | void __fastcall __spanLinearZwrite(struct swSurface *,int) | ?__spanLinearZwrite@@YIXPAUswSurface@@H@Z
    0x51D640 | void __fastcall __spanPerspXY(struct swSurface *,int) | ?__spanPerspXY@@YIXPAUswSurface@@H@Z
    0x51D840 | void __fastcall __spanPerspXYZwrite(struct swSurface *,int) | ?__spanPerspXYZwrite@@YIXPAUswSurface@@H@Z
    0x51D860 | void __cdecl swScanSurface(struct swSurface *) | ?swScanSurface@@YAXPAUswSurface@@@Z
    0x51DAA0 | struct swSurface * __cdecl swInitSurface(struct agiScreenVtx,struct agiScreenVtx,struct agiScreenVtx,unsigned int) | ?swInitSurface@@YAPAUswSurface@@UagiScreenVtx@@00I@Z
    0x51E540 | void __cdecl swScanSurfaces(void) | ?swScanSurfaces@@YAXXZ
    0x51E5F0 | void __cdecl swTri(struct agiScreenVtx *,struct agiScreenVtx *,struct agiScreenVtx *) | ?swTri@@YAXPAUagiScreenVtx@@00@Z
    0x51E7B0 | void __cdecl swQuad(struct agiScreenVtx *,struct agiScreenVtx *,struct agiScreenVtx *,struct agiScreenVtx *) | ?swQuad@@YAXPAUagiScreenVtx@@000@Z
    0x51EB80 | void __cdecl swPoly(struct agiScreenVtx *,int) | ?swPoly@@YAXPAUagiScreenVtx@@H@Z
    0x51EF10 | void __cdecl swLineInt(int,int,int,int,int) | ?swLineInt@@YAXHHHHH@Z
    0x51F000 | void __cdecl swLine(struct agiScreenVtx *,struct agiScreenVtx *) | ?swLine@@YAXPAUagiScreenVtx@@0@Z
    0x51F090 | void __cdecl swKill(void) | ?swKill@@YAXXZ
    0x51F0C0 | void __cdecl swSetInterlace(int) | ?swSetInterlace@@YAXH@Z
    0x51F100 | void __cdecl swInit(void) | ?swInit@@YAXXZ
    0x5BE8E8 | int swFbWidth | ?swFbWidth@@3HA
    0x5BE8EC | int swFbHeight | ?swFbHeight@@3HA
    0x5BEAFC | int FLIPWINDING | ?FLIPWINDING@@3HA
    0x5BEB00 | int BACKFACE | ?BACKFACE@@3HA
    0x5BEB04 | int XPTHRESH | ?XPTHRESH@@3HA
    0x5BEB08 | int YPTHRESH | ?YPTHRESH@@3HA
    0x5BEB0C | int PERSP2 | ?PERSP2@@3HA
    0x5BEB10 | float PERSP_THRESH | ?PERSP_THRESH@@3MA
    0x5BEB60 | int QUADS | ?QUADS@@3HA
    0x6F8078 | unsigned short * swDepthBuffer | ?swDepthBuffer@@3PAGA
    0x6F807C | int FLIPLOD | ?FLIPLOD@@3HA
    0x6F8080 | void * swScreen | ?swScreen@@3PAXA
    0x6F8084 | unsigned short * swCurrentDepthLine | ?swCurrentDepthLine@@3PAGA
    0x6F808C | union swr_sizes_t swr_sizes | ?swr_sizes@@3Tswr_sizes_t@@A
    0x6F8090 | void (__cdecl* swFbStartFrame)(void) | ?swFbStartFrame@@3P6AXXZA
    0x6F8098 | int swr_color | ?swr_color@@3HA
    0x6F809C | int swr_texmask | ?swr_texmask@@3HA
    0x6F80A0 | int EnableParabolic | ?EnableParabolic@@3HA
    0x6F80A4 | void (__cdecl* swFbEndFrame)(void) | ?swFbEndFrame@@3P6AXXZA
    0x6F80A8 | int swPixelSizeShift | ?swPixelSizeShift@@3HA
    0x6F80AC | unsigned char * swStippleTest | ?swStippleTest@@3PAEA
    0x6F80B0 | int swr_di | ?swr_di@@3HA
    0x6F80B4 | int debugTri | ?debugTri@@3HA
    0x6F80B8 | int swr_du | ?swr_du@@3HA
    0x6F80BC | int swr_dv | ?swr_dv@@3HA
    0x6F80C0 | int swr_dz | ?swr_dz@@3HA
    0x6F80C8 | unsigned short * swr_zb | ?swr_zb@@3PAGA
    0x6F80D0 | int swGreenMask | ?swGreenMask@@3HA
    0x6F80D8 | int debugTriGate | ?debugTriGate@@3HA
    0x6F80DC | unsigned int swActualScreenStride | ?swActualScreenStride@@3IA
    0x6F80E0 | unsigned int (__fastcall* swClampAdd)(unsigned int,unsigned int) | ?swClampAdd@@3P6IIII@ZA
    0x6F8128 | void (__cdecl* swFbStartScene)(void) | ?swFbStartScene@@3P6AXXZA
    0x6F812C | int swBlueMask | ?swBlueMask@@3HA
    0x6F8174 | int swIsInterlaced | ?swIsInterlaced@@3HA
    0x6F8178 | int BADEDGE | ?BADEDGE@@3HA
    0x6F817C | int swr_texstride | ?swr_texstride@@3HA
    0x6F81C0 | int swr_i | ?swr_i@@3HA
    0x6F81C4 | int swr_ddu | ?swr_ddu@@3HA
    0x6F81C8 | int swr_ddv | ?swr_ddv@@3HA
    0x6F81CC | int swr_u | ?swr_u@@3HA
    0x6F81D0 | int swr_v | ?swr_v@@3HA
    0x6F81D4 | int swr_z | ?swr_z@@3HA
    0x6F81DC | void * swCurrentScanline | ?swCurrentScanline@@3PAXA
    0x6F81E0 | int swBytesPerPixel | ?swBytesPerPixel@@3HA
    0x6F81E4 | void * swFbParent | ?swFbParent@@3PAXA
    0x6F81E8 | unsigned int swFrameOffset | ?swFrameOffset@@3IA
    0x6F81EC | void (__cdecl* swFbEnd)(void) | ?swFbEnd@@3P6AXXZA
    0x6F81F0 | int swRedMask | ?swRedMask@@3HA
    0x6F81F4 | void * swr_dest | ?swr_dest@@3PAXA
    0x6F81F8 | void (__cdecl* swFbEndScene)(void) | ?swFbEndScene@@3P6AXXZA
    0x6F81FC | void (__cdecl* swFbStart)(void) | ?swFbStart@@3P6AXXZA
    0x6F8200 | unsigned short * swCurrentLut | ?swCurrentLut@@3PAGA
    0x6FE014 | int swr_texshift | ?swr_texshift@@3HA
    0x6FE018 | int debugTriMatch | ?debugTriMatch@@3HA
    0x6FE020 | struct swRastInfo swInfo | ?swInfo@@3UswRastInfo@@A
    0x702030 | void * swr_src | ?swr_src@@3PAXA
    0x702034 | unsigned int swScreenStride | ?swScreenStride@@3IA
    0x702038 | int swFbX | ?swFbX@@3HA
    0x70203C | int swFbY | ?swFbY@@3HA
    0x702040 | int LODBIAS | ?LODBIAS@@3HA
    0x51D0D0 | void __cdecl swSetupEdgeScan(struct swEdge *,int,int) | ?swSetupEdgeScan@@YAXPAUswEdge@@HH@Z
    0x51D580 | void __fastcall __emitZwrite(struct swSurface *,int) | ?__emitZwrite@@YIXPAUswSurface@@H@Z
    0x51E480 | void __fastcall __emitSemiBlack(int) | ?__emitSemiBlack@@YIXH@Z
    0x51E4C0 | void __fastcall __emitStippleBlack(int) | ?__emitStippleBlack@@YIXH@Z
    0x51E500 | int __cdecl swComputeIntensity(struct agiScreenVtx &) | ?swComputeIntensity@@YAHAAUagiScreenVtx@@@Z
    0x51E5E0 | void __cdecl emms(void) | ?emms@@YAXXZ
    0x51F1D0 | unsigned int __cdecl swFindColor555(unsigned int) | ?swFindColor555@@YAII@Z
    0x51F210 | unsigned int __cdecl swFindColor565(unsigned int) | ?swFindColor565@@YAII@Z
    0x51F250 | unsigned int __fastcall swClampAddColor565(unsigned int) | ?swClampAddColor565@@YIII@Z
    0x51F290 | unsigned int __fastcall swClampAddColor555(unsigned int) | ?swClampAddColor555@@YIII@Z
    0x51F2D0 | unsigned int __fastcall swClampAdd565(unsigned int,unsigned int) | ?swClampAdd565@@YIIII@Z
    0x51F310 | unsigned int __fastcall swClampAdd555(unsigned int,unsigned int) | ?swClampAdd555@@YIIII@Z
*/

// 0x51CE30 | ?__emitDebug@@YIXPAUswSurface@@H@Z
inline void __emitDebug(struct swSurface* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, struct swSurface*, int32_t>>(0x51CE30, arg1, arg2);
}

// 0x51CE90 | ?__emitDepthComplexity@@YIXH@Z
inline void __emitDepthComplexity(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x51CE90, arg1);
}

// 0x51CED0 | ?__emitSolid@@YIXH@Z
inline void __emitSolid(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x51CED0, arg1);
}

// 0x51CF20 | ?__emitSolidZ@@YIXH@Z
inline void __emitSolidZ(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x51CF20, arg1);
}

// 0x51CF90 | ?__emitWireframe@@YIXH@Z
inline void __emitWireframe(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x51CF90, arg1);
}

// 0x51CFB0 | ?swAddEdge@@YAXHH@Z
inline void swAddEdge(int32_t arg1, int32_t arg2)
{
    return stub<cdecl_t<void, int32_t, int32_t>>(0x51CFB0, arg1, arg2);
}

// 0x51D180 | ?__setupUV@@YIXPAUswSurface@@@Z
inline void __setupUV(struct swSurface* arg1)
{
    return stub<cdecl_t<void, struct swSurface*>>(0x51D180, arg1);
}

// 0x51D240 | ?__setupUVZ@@YIXPAUswSurface@@@Z
inline void __setupUVZ(struct swSurface* arg1)
{
    return stub<cdecl_t<void, struct swSurface*>>(0x51D240, arg1);
}

// 0x51D310 | ?__setupZ@@YIXPAUswSurface@@@Z
inline void __setupZ(struct swSurface* arg1)
{
    return stub<cdecl_t<void, struct swSurface*>>(0x51D310, arg1);
}

// 0x51D350 | ?__setupUVI@@YIXPAUswSurface@@@Z
inline void __setupUVI(struct swSurface* arg1)
{
    return stub<cdecl_t<void, struct swSurface*>>(0x51D350, arg1);
}

// 0x51D420 | ?__setupUVIZ@@YIXPAUswSurface@@@Z
inline void __setupUVIZ(struct swSurface* arg1)
{
    return stub<cdecl_t<void, struct swSurface*>>(0x51D420, arg1);
}

// 0x51D500 | ?__setupNone@@YIXPAUswSurface@@@Z
inline void __setupNone(struct swSurface* arg1)
{
    return stub<cdecl_t<void, struct swSurface*>>(0x51D500, arg1);
}

// 0x51D510 | ?__spanLinear@@YIXPAUswSurface@@H@Z
inline void __spanLinear(struct swSurface* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, struct swSurface*, int32_t>>(0x51D510, arg1, arg2);
}

// 0x51D540 | ?__spanLinearZwrite@@YIXPAUswSurface@@H@Z
inline void __spanLinearZwrite(struct swSurface* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, struct swSurface*, int32_t>>(0x51D540, arg1, arg2);
}

// 0x51D640 | ?__spanPerspXY@@YIXPAUswSurface@@H@Z
inline void __spanPerspXY(struct swSurface* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, struct swSurface*, int32_t>>(0x51D640, arg1, arg2);
}

// 0x51D840 | ?__spanPerspXYZwrite@@YIXPAUswSurface@@H@Z
inline void __spanPerspXYZwrite(struct swSurface* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, struct swSurface*, int32_t>>(0x51D840, arg1, arg2);
}

// 0x51D860 | ?swScanSurface@@YAXPAUswSurface@@@Z
inline void swScanSurface(struct swSurface* arg1)
{
    return stub<cdecl_t<void, struct swSurface*>>(0x51D860, arg1);
}

// 0x51DAA0 | ?swInitSurface@@YAPAUswSurface@@UagiScreenVtx@@00I@Z
inline struct swSurface* swInitSurface(
    struct agiScreenVtx arg1, struct agiScreenVtx arg2, struct agiScreenVtx arg3, uint32_t arg4)
{
    return stub<cdecl_t<struct swSurface*, struct agiScreenVtx, struct agiScreenVtx, struct agiScreenVtx, uint32_t>>(
        0x51DAA0, arg1, arg2, arg3, arg4);
}

// 0x51E540 | ?swScanSurfaces@@YAXXZ
inline void swScanSurfaces()
{
    return stub<cdecl_t<void>>(0x51E540);
}

// 0x51E5F0 | ?swTri@@YAXPAUagiScreenVtx@@00@Z
inline void swTri(struct agiScreenVtx* arg1, struct agiScreenVtx* arg2, struct agiScreenVtx* arg3)
{
    return stub<cdecl_t<void, struct agiScreenVtx*, struct agiScreenVtx*, struct agiScreenVtx*>>(
        0x51E5F0, arg1, arg2, arg3);
}

// 0x51E7B0 | ?swQuad@@YAXPAUagiScreenVtx@@000@Z
inline void swQuad(
    struct agiScreenVtx* arg1, struct agiScreenVtx* arg2, struct agiScreenVtx* arg3, struct agiScreenVtx* arg4)
{
    return stub<cdecl_t<void, struct agiScreenVtx*, struct agiScreenVtx*, struct agiScreenVtx*, struct agiScreenVtx*>>(
        0x51E7B0, arg1, arg2, arg3, arg4);
}

// 0x51EB80 | ?swPoly@@YAXPAUagiScreenVtx@@H@Z
inline void swPoly(struct agiScreenVtx* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, struct agiScreenVtx*, int32_t>>(0x51EB80, arg1, arg2);
}

// 0x51EF10 | ?swLineInt@@YAXHHHHH@Z
inline void swLineInt(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    return stub<cdecl_t<void, int32_t, int32_t, int32_t, int32_t, int32_t>>(0x51EF10, arg1, arg2, arg3, arg4, arg5);
}

// 0x51F000 | ?swLine@@YAXPAUagiScreenVtx@@0@Z
inline void swLine(struct agiScreenVtx* arg1, struct agiScreenVtx* arg2)
{
    return stub<cdecl_t<void, struct agiScreenVtx*, struct agiScreenVtx*>>(0x51F000, arg1, arg2);
}

// 0x51F090 | ?swKill@@YAXXZ
inline void swKill()
{
    return stub<cdecl_t<void>>(0x51F090);
}

// 0x51F0C0 | ?swSetInterlace@@YAXH@Z
inline void swSetInterlace(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x51F0C0, arg1);
}

// 0x51F100 | ?swInit@@YAXXZ
inline void swInit()
{
    return stub<cdecl_t<void>>(0x51F100);
}

// 0x5BE8E8 | ?swFbWidth@@3HA
inline extern_var(0x5BE8E8, int32_t, swFbWidth);

// 0x5BE8EC | ?swFbHeight@@3HA
inline extern_var(0x5BE8EC, int32_t, swFbHeight);

// 0x5BEAFC | ?FLIPWINDING@@3HA
inline extern_var(0x5BEAFC, int32_t, FLIPWINDING);

// 0x5BEB00 | ?BACKFACE@@3HA
inline extern_var(0x5BEB00, int32_t, BACKFACE);

// 0x5BEB04 | ?XPTHRESH@@3HA
inline extern_var(0x5BEB04, int32_t, XPTHRESH);

// 0x5BEB08 | ?YPTHRESH@@3HA
inline extern_var(0x5BEB08, int32_t, YPTHRESH);

// 0x5BEB0C | ?PERSP2@@3HA
inline extern_var(0x5BEB0C, int32_t, PERSP2);

// 0x5BEB10 | ?PERSP_THRESH@@3MA
inline extern_var(0x5BEB10, float, PERSP_THRESH);

// 0x5BEB60 | ?QUADS@@3HA
inline extern_var(0x5BEB60, int32_t, QUADS);

// 0x6F8078 | ?swDepthBuffer@@3PAGA
inline extern_var(0x6F8078, uint16_t*, swDepthBuffer);

// 0x6F807C | ?FLIPLOD@@3HA
inline extern_var(0x6F807C, int32_t, FLIPLOD);

// 0x6F8080 | ?swScreen@@3PAXA
inline extern_var(0x6F8080, void*, swScreen);

// 0x6F8084 | ?swCurrentDepthLine@@3PAGA
inline extern_var(0x6F8084, uint16_t*, swCurrentDepthLine);

// 0x6F808C | ?swr_sizes@@3Tswr_sizes_t@@A
inline extern_var(0x6F808C, union swr_sizes_t, swr_sizes);

// 0x6F8090 | ?swFbStartFrame@@3P6AXXZA
inline extern_var(0x6F8090, void(__cdecl*)(void), swFbStartFrame);

// 0x6F8098 | ?swr_color@@3HA
inline extern_var(0x6F8098, int32_t, swr_color);

// 0x6F809C | ?swr_texmask@@3HA
inline extern_var(0x6F809C, int32_t, swr_texmask);

// 0x6F80A0 | ?EnableParabolic@@3HA
inline extern_var(0x6F80A0, int32_t, EnableParabolic);

// 0x6F80A4 | ?swFbEndFrame@@3P6AXXZA
inline extern_var(0x6F80A4, void(__cdecl*)(void), swFbEndFrame);

// 0x6F80A8 | ?swPixelSizeShift@@3HA
inline extern_var(0x6F80A8, int32_t, swPixelSizeShift);

// 0x6F80AC | ?swStippleTest@@3PAEA
inline extern_var(0x6F80AC, uint8_t*, swStippleTest);

// 0x6F80B0 | ?swr_di@@3HA
inline extern_var(0x6F80B0, int32_t, swr_di);

// 0x6F80B4 | ?debugTri@@3HA
inline extern_var(0x6F80B4, int32_t, debugTri);

// 0x6F80B8 | ?swr_du@@3HA
inline extern_var(0x6F80B8, int32_t, swr_du);

// 0x6F80BC | ?swr_dv@@3HA
inline extern_var(0x6F80BC, int32_t, swr_dv);

// 0x6F80C0 | ?swr_dz@@3HA
inline extern_var(0x6F80C0, int32_t, swr_dz);

// 0x6F80C8 | ?swr_zb@@3PAGA
inline extern_var(0x6F80C8, uint16_t*, swr_zb);

// 0x6F80D0 | ?swGreenMask@@3HA
inline extern_var(0x6F80D0, int32_t, swGreenMask);

// 0x6F80D8 | ?debugTriGate@@3HA
inline extern_var(0x6F80D8, int32_t, debugTriGate);

// 0x6F80DC | ?swActualScreenStride@@3IA
inline extern_var(0x6F80DC, uint32_t, swActualScreenStride);

// 0x6F80E0 | ?swClampAdd@@3P6IIII@ZA
inline extern_var(0x6F80E0, uint32_t(__fastcall*)(uint32_t, uint32_t), swClampAdd);

// 0x6F8128 | ?swFbStartScene@@3P6AXXZA
inline extern_var(0x6F8128, void(__cdecl*)(void), swFbStartScene);

// 0x6F812C | ?swBlueMask@@3HA
inline extern_var(0x6F812C, int32_t, swBlueMask);

// 0x6F8174 | ?swIsInterlaced@@3HA
inline extern_var(0x6F8174, int32_t, swIsInterlaced);

// 0x6F8178 | ?BADEDGE@@3HA
inline extern_var(0x6F8178, int32_t, BADEDGE);

// 0x6F817C | ?swr_texstride@@3HA
inline extern_var(0x6F817C, int32_t, swr_texstride);

// 0x6F81C0 | ?swr_i@@3HA
inline extern_var(0x6F81C0, int32_t, swr_i);

// 0x6F81C4 | ?swr_ddu@@3HA
inline extern_var(0x6F81C4, int32_t, swr_ddu);

// 0x6F81C8 | ?swr_ddv@@3HA
inline extern_var(0x6F81C8, int32_t, swr_ddv);

// 0x6F81CC | ?swr_u@@3HA
inline extern_var(0x6F81CC, int32_t, swr_u);

// 0x6F81D0 | ?swr_v@@3HA
inline extern_var(0x6F81D0, int32_t, swr_v);

// 0x6F81D4 | ?swr_z@@3HA
inline extern_var(0x6F81D4, int32_t, swr_z);

// 0x6F81DC | ?swCurrentScanline@@3PAXA
inline extern_var(0x6F81DC, void*, swCurrentScanline);

// 0x6F81E0 | ?swBytesPerPixel@@3HA
inline extern_var(0x6F81E0, int32_t, swBytesPerPixel);

// 0x6F81E4 | ?swFbParent@@3PAXA
inline extern_var(0x6F81E4, void*, swFbParent);

// 0x6F81E8 | ?swFrameOffset@@3IA
inline extern_var(0x6F81E8, uint32_t, swFrameOffset);

// 0x6F81EC | ?swFbEnd@@3P6AXXZA
inline extern_var(0x6F81EC, void(__cdecl*)(void), swFbEnd);

// 0x6F81F0 | ?swRedMask@@3HA
inline extern_var(0x6F81F0, int32_t, swRedMask);

// 0x6F81F4 | ?swr_dest@@3PAXA
inline extern_var(0x6F81F4, void*, swr_dest);

// 0x6F81F8 | ?swFbEndScene@@3P6AXXZA
inline extern_var(0x6F81F8, void(__cdecl*)(void), swFbEndScene);

// 0x6F81FC | ?swFbStart@@3P6AXXZA
inline extern_var(0x6F81FC, void(__cdecl*)(void), swFbStart);

// 0x6F8200 | ?swCurrentLut@@3PAGA
inline extern_var(0x6F8200, uint16_t*, swCurrentLut);

// 0x6FE014 | ?swr_texshift@@3HA
inline extern_var(0x6FE014, int32_t, swr_texshift);

// 0x6FE018 | ?debugTriMatch@@3HA
inline extern_var(0x6FE018, int32_t, debugTriMatch);

// 0x6FE020 | ?swInfo@@3UswRastInfo@@A
inline extern_var(0x6FE020, struct swRastInfo, swInfo);

// 0x702030 | ?swr_src@@3PAXA
inline extern_var(0x702030, void*, swr_src);

// 0x702034 | ?swScreenStride@@3IA
inline extern_var(0x702034, uint32_t, swScreenStride);

// 0x702038 | ?swFbX@@3HA
inline extern_var(0x702038, int32_t, swFbX);

// 0x70203C | ?swFbY@@3HA
inline extern_var(0x70203C, int32_t, swFbY);

// 0x702040 | ?LODBIAS@@3HA
inline extern_var(0x702040, int32_t, LODBIAS);

// 0x51D0D0 | ?swSetupEdgeScan@@YAXPAUswEdge@@HH@Z
inline void swSetupEdgeScan(struct swEdge* arg1, int32_t arg2, int32_t arg3)
{
    return stub<cdecl_t<void, struct swEdge*, int32_t, int32_t>>(0x51D0D0, arg1, arg2, arg3);
}

// 0x51D580 | ?__emitZwrite@@YIXPAUswSurface@@H@Z
inline void __emitZwrite(struct swSurface* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, struct swSurface*, int32_t>>(0x51D580, arg1, arg2);
}

// 0x51E480 | ?__emitSemiBlack@@YIXH@Z
inline void __emitSemiBlack(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x51E480, arg1);
}

// 0x51E4C0 | ?__emitStippleBlack@@YIXH@Z
inline void __emitStippleBlack(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x51E4C0, arg1);
}

// 0x51E500 | ?swComputeIntensity@@YAHAAUagiScreenVtx@@@Z
inline int32_t swComputeIntensity(struct agiScreenVtx& arg1)
{
    return stub<cdecl_t<int32_t, struct agiScreenVtx&>>(0x51E500, arg1);
}

// 0x51E5E0 | ?emms@@YAXXZ
inline void emms()
{
    return stub<cdecl_t<void>>(0x51E5E0);
}

// 0x51F1D0 | ?swFindColor555@@YAII@Z
inline uint32_t swFindColor555(uint32_t arg1)
{
    return stub<cdecl_t<uint32_t, uint32_t>>(0x51F1D0, arg1);
}

// 0x51F210 | ?swFindColor565@@YAII@Z
inline uint32_t swFindColor565(uint32_t arg1)
{
    return stub<cdecl_t<uint32_t, uint32_t>>(0x51F210, arg1);
}

// 0x51F250 | ?swClampAddColor565@@YIII@Z
inline uint32_t swClampAddColor565(uint32_t arg1)
{
    return stub<cdecl_t<uint32_t, uint32_t>>(0x51F250, arg1);
}

// 0x51F290 | ?swClampAddColor555@@YIII@Z
inline uint32_t swClampAddColor555(uint32_t arg1)
{
    return stub<cdecl_t<uint32_t, uint32_t>>(0x51F290, arg1);
}

// 0x51F2D0 | ?swClampAdd565@@YIIII@Z
inline uint32_t swClampAdd565(uint32_t arg1, uint32_t arg2)
{
    return stub<cdecl_t<uint32_t, uint32_t, uint32_t>>(0x51F2D0, arg1, arg2);
}

// 0x51F310 | ?swClampAdd555@@YIIII@Z
inline uint32_t swClampAdd555(uint32_t arg1, uint32_t arg2)
{
    return stub<cdecl_t<uint32_t, uint32_t, uint32_t>>(0x51F310, arg1, arg2);
}
