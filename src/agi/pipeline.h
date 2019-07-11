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

// agi:pipeline

#include "hooking.h"

// 0x5381F0 | ?GetRootWindow@@YAPAXXZ
inline void* GetRootWindow()
{
    return stub<cdecl_t<void*>>(0x5381F0);
}

// 0x538200 | ?CreatePipelineAttachableWindow@@YAPAXPADHHHHPAX@Z
inline void* CreatePipelineAttachableWindow(
    char* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, void* arg6)
{
    return stub<cdecl_t<void*, char*, int32_t, int32_t, int32_t, int32_t, void*>>(
        0x538200, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x538210 | ?DestroyPipelineAttachableWindow@@YAXXZ
inline void DestroyPipelineAttachableWindow()
{
    return stub<cdecl_t<void>>(0x538210);
}

// 0x5C2BE8 | ?ZFill@@3HA
inline extern_var(0x5C2BE8, int32_t, ZFill);

// 0x5C2BEC | ?agiEnableZBuffer@@3DA
inline extern_var(0x5C2BEC, char, agiEnableZBuffer);

// 0x702148 | ?STATS@@3UagiStats@@A
inline extern_var(0x702148, struct agiStats, STATS);

// 0x70218C | ?agiBitmapPixels@@3HA
inline extern_var(0x70218C, int32_t, agiBitmapPixels);

// 0x702190 | ?agiBitmapCount@@3HA
inline extern_var(0x702190, int32_t, agiBitmapCount);

// 0x7021C8 | ?PROBER@@3P6AXPAX@ZA
inline extern_var(0x7021C8, void(__cdecl*)(void*), PROBER);

// 0x7021CC | ?LightCount@@3HA
inline extern_var(0x7021CC, int32_t, LightCount);

// 0x7021D0 | ?DrawModeOr@@3HA
inline extern_var(0x7021D0, int32_t, DrawModeOr);

// 0x7021D4 | ?DrawModeAnd@@3HA
inline extern_var(0x7021D4, int32_t, DrawModeAnd);

class agiPipeline
{
public:
    // agiPipeline::`vftable' @ 0x595A98

    // 0x537700 | ??0agiPipeline@@IAE@XZ
    inline agiPipeline()
    {
        stub<member_func_t<void, agiPipeline>>(0x537700, this);
    }

    // 0x5377D0 | ?Init@agiPipeline@@QAEHPADHHHHHHPAX@Z
    inline int32_t Init(
        char* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, void* arg8)
    {
        return stub<
            member_func_t<int32_t, agiPipeline, char*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, void*>>(
            0x5377D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x537840 | ?GetTexture@agiPipeline@@QAEPAVagiTexDef@@PADH@Z
    inline class agiTexDef* GetTexture(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<class agiTexDef*, agiPipeline, char*, int32_t>>(0x537840, this, arg1, arg2);
    }

    // 0x5378A0 | ?GetTexture@agiPipeline@@QAEPAVagiTexDef@@HH@Z
    inline class agiTexDef* GetTexture(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<class agiTexDef*, agiPipeline, int32_t, int32_t>>(0x5378A0, this, arg1, arg2);
    }

    // 0x5379D0 | ?GetBitmap@agiPipeline@@QAEPAVagiBitmap@@PADMMH@Z
    inline class agiBitmap* GetBitmap(char* arg1, float arg2, float arg3, int32_t arg4)
    {
        return stub<member_func_t<class agiBitmap*, agiPipeline, char*, float, float, int32_t>>(
            0x5379D0, this, arg1, arg2, arg3, arg4);
    }

    // 0x537A70 | ?GetTexLut@agiPipeline@@QAEPAVagiTexLut@@PAD@Z
    inline class agiTexLut* GetTexLut(char* arg1)
    {
        return stub<member_func_t<class agiTexLut*, agiPipeline, char*>>(0x537A70, this, arg1);
    }

    // 0x537AE0 | ?GetMaterial@agiPipeline@@QAEPAVagiMtlDef@@PAD@Z
    inline class agiMtlDef* GetMaterial(char* arg1)
    {
        return stub<member_func_t<class agiMtlDef*, agiPipeline, char*>>(0x537AE0, this, arg1);
    }

    // 0x537B40 | ?GetMaterial@agiPipeline@@QAEPAVagiMtlDef@@H@Z
    inline class agiMtlDef* GetMaterial(int32_t arg1)
    {
        return stub<member_func_t<class agiMtlDef*, agiPipeline, int32_t>>(0x537B40, this, arg1);
    }

    // 0x537BD0 | ?GetDLP@agiPipeline@@QAEPAVDLP@@PAD0PAVVector3@@HH@Z
    inline class DLP* GetDLP(char* arg1, char* arg2, class Vector3* arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<class DLP*, agiPipeline, char*, char*, class Vector3*, int32_t, int32_t>>(
            0x537BD0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x537DC0 | ?BeginAllGfx@agiPipeline@@QAEHXZ
    inline int32_t BeginAllGfx()
    {
        return stub<member_func_t<int32_t, agiPipeline>>(0x537DC0, this);
    }

    // 0x537EC0 | ?EndAllGfx@agiPipeline@@QAEXXZ
    inline void EndAllGfx()
    {
        return stub<member_func_t<void, agiPipeline>>(0x537EC0, this);
    }

    // 0x537F50 | ?RestoreAll@agiPipeline@@QAEXXZ
    inline void RestoreAll()
    {
        return stub<member_func_t<void, agiPipeline>>(0x537F50, this);
    }

    // 0x537FD0 | ?CopyClippedBitmap@agiPipeline@@QAEHHHPAVagiBitmap@@HHHH@Z
    inline int32_t CopyClippedBitmap(
        int32_t arg1, int32_t arg2, class agiBitmap* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
    {
        return stub<member_func_t<int32_t, agiPipeline, int32_t, int32_t, class agiBitmap*, int32_t, int32_t, int32_t,
            int32_t>>(0x537FD0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x538010 | ?CopyClippedBitmap@agiPipeline@@QAEHHHPAVagiBitmap@@HHHHHHHH@Z
    inline int32_t CopyClippedBitmap(int32_t arg1, int32_t arg2, class agiBitmap* arg3, int32_t arg4, int32_t arg5,
        int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11)
    {
        return stub<member_func_t<int32_t, agiPipeline, int32_t, int32_t, class agiBitmap*, int32_t, int32_t, int32_t,
            int32_t, int32_t, int32_t, int32_t, int32_t>>(
            0x538010, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x5380C0 | ?NotifyNew@agiPipeline@@QAEXPAVagiRefreshable@@@Z
    inline void NotifyNew(class agiRefreshable* arg1)
    {
        return stub<member_func_t<void, agiPipeline, class agiRefreshable*>>(0x5380C0, this, arg1);
    }

    // 0x5380F0 | ?NotifyDelete@agiPipeline@@QAEXPAVagiRefreshable@@@Z
    inline void NotifyDelete(class agiRefreshable* arg1)
    {
        return stub<member_func_t<void, agiPipeline, class agiRefreshable*>>(0x5380F0, this, arg1);
    }

    // 0x538130 | ?ValidateObject@agiPipeline@@QAEXPAVagiRefreshable@@@Z
    inline void ValidateObject(class agiRefreshable* arg1)
    {
        return stub<member_func_t<void, agiPipeline, class agiRefreshable*>>(0x538130, this, arg1);
    }

    // 0x538180 | ?DumpStatus@agiPipeline@@QAEXXZ
    inline void DumpStatus()
    {
        return stub<member_func_t<void, agiPipeline>>(0x538180, this);
    }

    // 0x7021C0 | ?CurrentRenderer@agiPipeline@@2PAVagiRenderer@@A
    static inline extern_var(0x7021C0, class agiRenderer*, CurrentRenderer);

    // 0x7021C4 | ?CurrentPipe@agiPipeline@@2PAV1@A
    static inline extern_var(0x7021C4, class agiPipeline*, CurrentPipe);

    // 0x567350 | __purecall
    virtual inline ~agiPipeline()
    {
        stub<member_func_t<void, agiPipeline>>(0x567350, this);
    }

    // 0x5377C0 | ?Validate@agiPipeline@@UAEHXZ
    virtual inline int32_t Validate()
    {
        return stub<member_func_t<int32_t, agiPipeline>>(0x5377C0, this);
    }

    // 0x567350 | __purecall
    virtual inline int32_t BeginGfx()
    {
        return stub<member_func_t<int32_t, agiPipeline>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline void EndGfx()
    {
        return stub<member_func_t<void, agiPipeline>>(0x567350, this);
    }

    // 0x537F90 | ?BeginFrame@agiPipeline@@UAEXXZ
    virtual inline void BeginFrame()
    {
        return stub<member_func_t<void, agiPipeline>>(0x537F90, this);
    }

    // 0x538280 | ?BeginScene@agiPipeline@@UAEXXZ
    virtual inline void BeginScene()
    {
        return stub<member_func_t<void, agiPipeline>>(0x538280, this);
    }

    // 0x5382A0 | ?EndScene@agiPipeline@@UAEXXZ
    virtual inline void EndScene()
    {
        return stub<member_func_t<void, agiPipeline>>(0x5382A0, this);
    }

    // 0x5382B0 | ?EndFrame@agiPipeline@@UAEXXZ
    virtual inline void EndFrame()
    {
        return stub<member_func_t<void, agiPipeline>>(0x5382B0, this);
    }

    // 0x567350 | __purecall
    virtual inline class agiTexDef* CreateTexDef()
    {
        return stub<member_func_t<class agiTexDef*, agiPipeline>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline class agiTexLut* CreateTexLut()
    {
        return stub<member_func_t<class agiTexLut*, agiPipeline>>(0x567350, this);
    }

    // 0x537D90 | ?CreateMtlDef@agiPipeline@@UAEPAVagiMtlDef@@XZ
    virtual inline class agiMtlDef* CreateMtlDef()
    {
        return stub<member_func_t<class agiMtlDef*, agiPipeline>>(0x537D90, this);
    }

    // 0x567350 | __purecall
    virtual inline class DLP* CreateDLP()
    {
        return stub<member_func_t<class DLP*, agiPipeline>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline class agiViewport* CreateViewport()
    {
        return stub<member_func_t<class agiViewport*, agiPipeline>>(0x567350, this);
    }

    // 0x537DA0 | ?CreateLight@agiPipeline@@UAEPAVagiLight@@XZ
    virtual inline class agiLight* CreateLight()
    {
        return stub<member_func_t<class agiLight*, agiPipeline>>(0x537DA0, this);
    }

    // 0x537DB0 | ?CreateLightModel@agiPipeline@@UAEPAVagiLightModel@@XZ
    virtual inline class agiLightModel* CreateLightModel()
    {
        return stub<member_func_t<class agiLightModel*, agiPipeline>>(0x537DB0, this);
    }

    // 0x537FB0 | ?CreateBitmap@agiPipeline@@UAEPAVagiBitmap@@XZ
    virtual inline class agiBitmap* CreateBitmap()
    {
        return stub<member_func_t<class agiBitmap*, agiPipeline>>(0x537FB0, this);
    }

    // 0x537FC0 | ?CopyBitmap@agiPipeline@@UAEXHHPAVagiBitmap@@HHHH@Z
    virtual inline void CopyBitmap(
        int32_t arg1, int32_t arg2, class agiBitmap* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
    {
        return stub<
            member_func_t<void, agiPipeline, int32_t, int32_t, class agiBitmap*, int32_t, int32_t, int32_t, int32_t>>(
            0x537FC0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x567350 | __purecall
    virtual inline void ClearAll(int32_t arg1)
    {
        return stub<member_func_t<void, agiPipeline, int32_t>>(0x567350, this, arg1);
    }

    // 0x5382F0 | ?ClearRect@agiPipeline@@UAEXHHHHI@Z
    virtual inline void ClearRect(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, uint32_t arg5)
    {
        return stub<member_func_t<void, agiPipeline, int32_t, int32_t, int32_t, int32_t, uint32_t>>(
            0x5382F0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x539E60 | ?Print@agiPipeline@@UAEXHHHPBD@Z
    virtual inline void Print(int32_t arg1, int32_t arg2, int32_t arg3, char const* arg4)
    {
        return stub<member_func_t<void, agiPipeline, int32_t, int32_t, int32_t, char const*>>(
            0x539E60, this, arg1, arg2, arg3, arg4);
    }

    // 0x53A050 | ?PrintIs3D@agiPipeline@@UAEHXZ
    virtual inline int32_t PrintIs3D()
    {
        return stub<member_func_t<int32_t, agiPipeline>>(0x53A050, this);
    }

    // 0x53A070 | ?PrintInit@agiPipeline@@UAEXXZ
    virtual inline void PrintInit()
    {
        return stub<member_func_t<void, agiPipeline>>(0x53A070, this);
    }

    // 0x53A080 | ?PrintShutdown@agiPipeline@@UAEXXZ
    virtual inline void PrintShutdown()
    {
        return stub<member_func_t<void, agiPipeline>>(0x53A080, this);
    }

    // 0x538300 | ?Defragment@agiPipeline@@UAEXXZ
    virtual inline void Defragment()
    {
        return stub<member_func_t<void, agiPipeline>>(0x538300, this);
    }

    // 0x5382C0 | ?LockFrameBuffer@agiPipeline@@UAEHAAVagiSurfaceDesc@@@Z
    virtual inline int32_t LockFrameBuffer(class agiSurfaceDesc& arg1)
    {
        return stub<member_func_t<int32_t, agiPipeline, class agiSurfaceDesc&>>(0x5382C0, this, arg1);
    }

    // 0x5382D0 | ?UnlockFrameBuffer@agiPipeline@@UAEXXZ
    virtual inline void UnlockFrameBuffer()
    {
        return stub<member_func_t<void, agiPipeline>>(0x5382D0, this);
    }

    // 0x5382E0 | ?DumpStatus@agiPipeline@@UAEXAAUagiMemStatus@@@Z
    virtual inline void DumpStatus(struct agiMemStatus& arg1)
    {
        return stub<member_func_t<void, agiPipeline, struct agiMemStatus&>>(0x5382E0, this, arg1);
    }
};
