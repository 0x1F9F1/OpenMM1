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

// agid3d:d3dpipe

#include "hooking.h"

// 0x517B40 | ?RestoreCallback@@YGJPAUIDirectDrawSurface4@@PAU_DDSURFACEDESC2@@PAX@Z
inline int32_t RestoreCallback(struct IDirectDrawSurface4* arg1, struct _DDSURFACEDESC2* arg2, void* arg3)
{
    return stub<stdcall_t<int32_t, struct IDirectDrawSurface4*, struct _DDSURFACEDESC2*, void*>>(
        0x517B40, arg1, arg2, arg3);
}

// 0x517DD0 | ?callb@@YGJPAUIDirectDrawSurface4@@PAU_DDSURFACEDESC2@@PAX@Z
inline int32_t callb(struct IDirectDrawSurface4* arg1, struct _DDSURFACEDESC2* arg2, void* arg3)
{
    return stub<stdcall_t<int32_t, struct IDirectDrawSurface4*, struct _DDSURFACEDESC2*, void*>>(
        0x517DD0, arg1, arg2, arg3);
}

// 0x5BAD80 | ?NoTextureCompression@@3HA
inline extern_var(0x5BAD80, int32_t, NoTextureCompression);

// 0x6F3328 | ?agiFOURCC@@3KA
inline extern_var(0x6F3328, uint32_t, agiFOURCC);

// 0x6F335C | ?SeparateTextureMemories@@3HA
inline extern_var(0x6F335C, int32_t, SeparateTextureMemories);

// 0x6F3364 | ?dummyGlobal@@3IA
inline extern_var(0x6F3364, uint32_t, dummyGlobal);

// 0x6F3368 | ?AlphaPalette@@3HA
inline extern_var(0x6F3368, int32_t, AlphaPalette);

// 0x6F3370 | ?NotIndependentUV@@3HA
inline extern_var(0x6F3370, int32_t, NotIndependentUV);

// 0x5178D0 | ?EnumCallback@@YGJPAU_GUID@@PAD1PAU_D3DDeviceDesc@@2PAX@Z
inline int32_t EnumCallback(
    struct _GUID* arg1, char* arg2, char* arg3, struct _D3DDeviceDesc* arg4, struct _D3DDeviceDesc* arg5, void* arg6)
{
    return stub<stdcall_t<int32_t, struct _GUID*, char*, char*, struct _D3DDeviceDesc*, struct _D3DDeviceDesc*, void*>>(
        0x5178D0, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x5179D0 | ?EnumTextureCallback@@YGJPAU_DDPIXELFORMAT@@PAX@Z
inline int32_t EnumTextureCallback(struct _DDPIXELFORMAT* arg1, void* arg2)
{
    return stub<stdcall_t<int32_t, struct _DDPIXELFORMAT*, void*>>(0x5179D0, arg1, arg2);
}

// 0x517AA0 | ?EnumZ@@YGJPAU_DDPIXELFORMAT@@PAX@Z
inline int32_t EnumZ(struct _DDPIXELFORMAT* arg1, void* arg2)
{
    return stub<stdcall_t<int32_t, struct _DDPIXELFORMAT*, void*>>(0x517AA0, arg1, arg2);
}

struct agiD3DPipeline : agiDDPipeline
{
public:
    // agiD3DPipeline::`vftable' @ 0x5956A0

    // 0x516C70 | ??0agiD3DPipeline@@QAE@XZ
    inline agiD3DPipeline()
    {
        stub<member_func_t<void, agiD3DPipeline>>(0x516C70, this);
    }

    // 0x517AF0 | ??1agiD3DPipeline@@UAE@XZ
    inline ~agiD3DPipeline() override
    {
        stub<member_func_t<void, agiD3DPipeline>>(0x517AF0, this);
    }

    // 0x516CB0 | ?BeginGfx@agiD3DPipeline@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiD3DPipeline>>(0x516CB0, this);
    }

    // 0x5181A0 | ?EndGfx@agiD3DPipeline@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiD3DPipeline>>(0x5181A0, this);
    }

    // 0x517B60 | ?BeginFrame@agiD3DPipeline@@UAEXXZ
    inline void BeginFrame() override
    {
        return stub<member_func_t<void, agiD3DPipeline>>(0x517B60, this);
    }

    // 0x517BF0 | ?BeginScene@agiD3DPipeline@@UAEXXZ
    inline void BeginScene() override
    {
        return stub<member_func_t<void, agiD3DPipeline>>(0x517BF0, this);
    }

    // 0x517C40 | ?EndScene@agiD3DPipeline@@UAEXXZ
    inline void EndScene() override
    {
        return stub<member_func_t<void, agiD3DPipeline>>(0x517C40, this);
    }

    // 0x517C90 | ?EndFrame@agiD3DPipeline@@UAEXXZ
    inline void EndFrame() override
    {
        return stub<member_func_t<void, agiD3DPipeline>>(0x517C90, this);
    }

    // 0x518350 | ?CreateTexDef@agiD3DPipeline@@UAEPAVagiTexDef@@XZ
    inline class agiTexDef* CreateTexDef() override
    {
        return stub<member_func_t<class agiTexDef*, agiD3DPipeline>>(0x518350, this);
    }

    // 0x5183B0 | ?CreateTexLut@agiD3DPipeline@@UAEPAVagiTexLut@@XZ
    inline class agiTexLut* CreateTexLut() override
    {
        return stub<member_func_t<class agiTexLut*, agiD3DPipeline>>(0x5183B0, this);
    }

    // 0x5182F0 | ?CreateMtlDef@agiD3DPipeline@@UAEPAVagiMtlDef@@XZ
    inline class agiMtlDef* CreateMtlDef() override
    {
        return stub<member_func_t<class agiMtlDef*, agiD3DPipeline>>(0x5182F0, this);
    }

    // 0x567350 | __purecall
    inline class DLP* CreateDLP() override
    {
        return stub<member_func_t<class DLP*, agiD3DPipeline>>(0x567350, this);
    }

    // 0x518290 | ?CreateViewport@agiD3DPipeline@@UAEPAVagiViewport@@XZ
    inline class agiViewport* CreateViewport() override
    {
        return stub<member_func_t<class agiViewport*, agiD3DPipeline>>(0x518290, this);
    }

    // 0x518440 | ?CreateLight@agiD3DPipeline@@UAEPAVagiLight@@XZ
    inline class agiLight* CreateLight() override
    {
        return stub<member_func_t<class agiLight*, agiD3DPipeline>>(0x518440, this);
    }

    // 0x518560 | ?CreateBitmap@agiD3DPipeline@@UAEPAVagiBitmap@@XZ
    inline class agiBitmap* CreateBitmap() override
    {
        return stub<member_func_t<class agiBitmap*, agiD3DPipeline>>(0x518560, this);
    }

    // 0x5185C0 | ?CopyBitmap@agiD3DPipeline@@UAEXHHPAVagiBitmap@@HHHH@Z
    inline void CopyBitmap(int32_t arg1, int32_t arg2, class agiBitmap* arg3, int32_t arg4, int32_t arg5, int32_t arg6,
        int32_t arg7) override
    {
        return stub<member_func_t<void, agiD3DPipeline, int32_t, int32_t, class agiBitmap*, int32_t, int32_t, int32_t,
            int32_t>>(0x5185C0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x5184A0 | ?ClearAll@agiD3DPipeline@@UAEXH@Z
    inline void ClearAll(int32_t arg1) override
    {
        return stub<member_func_t<void, agiD3DPipeline, int32_t>>(0x5184A0, this, arg1);
    }

    // 0x518600 | ?Defragment@agiD3DPipeline@@UAEXXZ
    inline void Defragment() override
    {
        return stub<member_func_t<void, agiD3DPipeline>>(0x518600, this);
    }

    // 0x518080 | ?DumpStatus@agiD3DPipeline@@UAEXAAUagiMemStatus@@@Z
    inline void DumpStatus(struct agiMemStatus& arg1) override
    {
        return stub<member_func_t<void, agiD3DPipeline, struct agiMemStatus&>>(0x518080, this, arg1);
    }
};

struct agiD3DTexLut : agiTexLut
{
public:
    // agiD3DTexLut::`vftable' @ 0x595720

    // 0x51B7E0 | ?EndGfx@agiD3DTexLut@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiD3DTexLut>>(0x51B7E0, this);
    }

    // 0x518670 | ??1agiD3DTexLut@@UAE@XZ
    inline ~agiD3DTexLut() override
    {
        stub<member_func_t<void, agiD3DTexLut>>(0x518670, this);
    }

    // 0x51B790 | ?BeginGfx@agiD3DTexLut@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiD3DTexLut>>(0x51B790, this);
    }
};
