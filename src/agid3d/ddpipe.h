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

// agid3d:ddpipe

#include "hooking.h"

// 0x518690 | ?DDCallback@@YGHPAU_GUID@@PAD1PAX@Z
inline int32_t DDCallback(struct _GUID* arg1, char* arg2, char* arg3, void* arg4)
{
    return stub<stdcall_t<int32_t, struct _GUID*, char*, char*, void*>>(0x518690, arg1, arg2, arg3, arg4);
}

// 0x518710 | ?EnumModesCallback@@YGJPAU_DDSURFACEDESC2@@PAX@Z
inline int32_t EnumModesCallback(struct _DDSURFACEDESC2* arg1, void* arg2)
{
    return stub<stdcall_t<int32_t, struct _DDSURFACEDESC2*, void*>>(0x518710, arg1, arg2);
}

// 0x5187C0 | ?EnumSurfsCallback@@YGJPAUIDirectDrawSurface@@PAU_DDSURFACEDESC@@PAX@Z
inline int32_t EnumSurfsCallback(struct IDirectDrawSurface* arg1, struct _DDSURFACEDESC* arg2, void* arg3)
{
    return stub<stdcall_t<int32_t, struct IDirectDrawSurface*, struct _DDSURFACEDESC*, void*>>(
        0x5187C0, arg1, arg2, arg3);
}

struct agiDDPipeline : agiPipeline
{
public:
    // agiDDPipeline::`vftable' @ 0x595738

    // 0x518800 | ??0agiDDPipeline@@QAE@XZ
    inline agiDDPipeline()
    {
        stub<member_func_t<void, agiDDPipeline>>(0x518800, this);
    }

    // 0x518CB0 | ??1agiDDPipeline@@UAE@XZ
    inline ~agiDDPipeline() override
    {
        stub<member_func_t<void, agiDDPipeline>>(0x518CB0, this);
    }

    // 0x518680 | ?Validate@agiDDPipeline@@UAEHXZ
    inline int32_t Validate() override
    {
        return stub<member_func_t<int32_t, agiDDPipeline>>(0x518680, this);
    }

    // 0x5188A0 | ?BeginGfx@agiDDPipeline@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiDDPipeline>>(0x5188A0, this);
    }

    // 0x518BF0 | ?EndGfx@agiDDPipeline@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiDDPipeline>>(0x518BF0, this);
    }

    // 0x518D00 | ?BeginFrame@agiDDPipeline@@UAEXXZ
    inline void BeginFrame() override
    {
        return stub<member_func_t<void, agiDDPipeline>>(0x518D00, this);
    }

    // 0x518D60 | ?BeginScene@agiDDPipeline@@UAEXXZ
    inline void BeginScene() override
    {
        return stub<member_func_t<void, agiDDPipeline>>(0x518D60, this);
    }

    // 0x518DB0 | ?EndScene@agiDDPipeline@@UAEXXZ
    inline void EndScene() override
    {
        return stub<member_func_t<void, agiDDPipeline>>(0x518DB0, this);
    }

    // 0x518DC0 | ?EndFrame@agiDDPipeline@@UAEXXZ
    inline void EndFrame() override
    {
        return stub<member_func_t<void, agiDDPipeline>>(0x518DC0, this);
    }

    // 0x567350 | __purecall

    // 0x567350 | __purecall

    // 0x567350 | __purecall

    // 0x567350 | __purecall

    // 0x518DD0 | ?CreateBitmap@agiDDPipeline@@UAEPAVagiBitmap@@XZ
    inline class agiBitmap* CreateBitmap() override
    {
        return stub<member_func_t<class agiBitmap*, agiDDPipeline>>(0x518DD0, this);
    }

    // 0x518E30 | ?CopyBitmap@agiDDPipeline@@UAEXHHPAVagiBitmap@@HHHH@Z
    inline void CopyBitmap(int32_t arg1, int32_t arg2, class agiBitmap* arg3, int32_t arg4, int32_t arg5, int32_t arg6,
        int32_t arg7) override
    {
        return stub<
            member_func_t<void, agiDDPipeline, int32_t, int32_t, class agiBitmap*, int32_t, int32_t, int32_t, int32_t>>(
            0x518E30, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x567350 | __purecall

    // 0x518F40 | ?ClearRect@agiDDPipeline@@UAEXHHHHI@Z
    inline void ClearRect(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, uint32_t arg5) override
    {
        return stub<member_func_t<void, agiDDPipeline, int32_t, int32_t, int32_t, int32_t, uint32_t>>(
            0x518F40, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x518EE0 | ?LockFrameBuffer@agiDDPipeline@@UAEHAAVagiSurfaceDesc@@@Z
    inline int32_t LockFrameBuffer(class agiSurfaceDesc& arg1) override
    {
        return stub<member_func_t<int32_t, agiDDPipeline, class agiSurfaceDesc&>>(0x518EE0, this, arg1);
    }

    // 0x518F20 | ?UnlockFrameBuffer@agiDDPipeline@@UAEXXZ
    inline void UnlockFrameBuffer() override
    {
        return stub<member_func_t<void, agiDDPipeline>>(0x518F20, this);
    }
};
