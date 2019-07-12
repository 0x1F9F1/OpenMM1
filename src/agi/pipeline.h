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
    agi:pipeline

    0x537700 | protected: __thiscall agiPipeline::agiPipeline(void) | ??0agiPipeline@@IAE@XZ
    0x5377C0 | public: virtual int __thiscall agiPipeline::Validate(void) | ?Validate@agiPipeline@@UAEHXZ
    0x5377D0 | public: int __thiscall agiPipeline::Init(char *,int,int,int,int,int,int,void *) | ?Init@agiPipeline@@QAEHPADHHHHHHPAX@Z
    0x537840 | public: class agiTexDef * __thiscall agiPipeline::GetTexture(char *,int) | ?GetTexture@agiPipeline@@QAEPAVagiTexDef@@PADH@Z
    0x5378A0 | public: class agiTexDef * __thiscall agiPipeline::GetTexture(int,int) | ?GetTexture@agiPipeline@@QAEPAVagiTexDef@@HH@Z
    0x5379D0 | public: class agiBitmap * __thiscall agiPipeline::GetBitmap(char *,float,float,int) | ?GetBitmap@agiPipeline@@QAEPAVagiBitmap@@PADMMH@Z
    0x537A70 | public: class agiTexLut * __thiscall agiPipeline::GetTexLut(char *) | ?GetTexLut@agiPipeline@@QAEPAVagiTexLut@@PAD@Z
    0x537AE0 | public: class agiMtlDef * __thiscall agiPipeline::GetMaterial(char *) | ?GetMaterial@agiPipeline@@QAEPAVagiMtlDef@@PAD@Z
    0x537B40 | public: class agiMtlDef * __thiscall agiPipeline::GetMaterial(int) | ?GetMaterial@agiPipeline@@QAEPAVagiMtlDef@@H@Z
    0x537BD0 | public: class DLP * __thiscall agiPipeline::GetDLP(char *,char *,class Vector3 *,int,int) | ?GetDLP@agiPipeline@@QAEPAVDLP@@PAD0PAVVector3@@HH@Z
    0x537D90 | public: virtual class agiMtlDef * __thiscall agiPipeline::CreateMtlDef(void) | ?CreateMtlDef@agiPipeline@@UAEPAVagiMtlDef@@XZ
    0x537DA0 | public: virtual class agiLight * __thiscall agiPipeline::CreateLight(void) | ?CreateLight@agiPipeline@@UAEPAVagiLight@@XZ
    0x537DB0 | public: virtual class agiLightModel * __thiscall agiPipeline::CreateLightModel(void) | ?CreateLightModel@agiPipeline@@UAEPAVagiLightModel@@XZ
    0x537DC0 | public: int __thiscall agiPipeline::BeginAllGfx(void) | ?BeginAllGfx@agiPipeline@@QAEHXZ
    0x537EC0 | public: void __thiscall agiPipeline::EndAllGfx(void) | ?EndAllGfx@agiPipeline@@QAEXXZ
    0x537F50 | public: void __thiscall agiPipeline::RestoreAll(void) | ?RestoreAll@agiPipeline@@QAEXXZ
    0x537F90 | public: virtual void __thiscall agiPipeline::BeginFrame(void) | ?BeginFrame@agiPipeline@@UAEXXZ
    0x537FB0 | public: virtual class agiBitmap * __thiscall agiPipeline::CreateBitmap(void) | ?CreateBitmap@agiPipeline@@UAEPAVagiBitmap@@XZ
    0x537FC0 | public: virtual void __thiscall agiPipeline::CopyBitmap(int,int,class agiBitmap *,int,int,int,int) | ?CopyBitmap@agiPipeline@@UAEXHHPAVagiBitmap@@HHHH@Z
    0x537FD0 | public: int __thiscall agiPipeline::CopyClippedBitmap(int,int,class agiBitmap *,int,int,int,int) | ?CopyClippedBitmap@agiPipeline@@QAEHHHPAVagiBitmap@@HHHH@Z
    0x538010 | public: int __thiscall agiPipeline::CopyClippedBitmap(int,int,class agiBitmap *,int,int,int,int,int,int,int,int) | ?CopyClippedBitmap@agiPipeline@@QAEHHHPAVagiBitmap@@HHHHHHHH@Z
    0x5380C0 | public: void __thiscall agiPipeline::NotifyNew(class agiRefreshable *) | ?NotifyNew@agiPipeline@@QAEXPAVagiRefreshable@@@Z
    0x5380F0 | public: void __thiscall agiPipeline::NotifyDelete(class agiRefreshable *) | ?NotifyDelete@agiPipeline@@QAEXPAVagiRefreshable@@@Z
    0x538130 | public: void __thiscall agiPipeline::ValidateObject(class agiRefreshable *) | ?ValidateObject@agiPipeline@@QAEXPAVagiRefreshable@@@Z
    0x538180 | public: void __thiscall agiPipeline::DumpStatus(void) | ?DumpStatus@agiPipeline@@QAEXXZ
    0x5381F0 | void * __cdecl GetRootWindow(void) | ?GetRootWindow@@YAPAXXZ
    0x538200 | void * __cdecl CreatePipelineAttachableWindow(char *,int,int,int,int,void *) | ?CreatePipelineAttachableWindow@@YAPAXPADHHHHPAX@Z
    0x538210 | void __cdecl DestroyPipelineAttachableWindow(void) | ?DestroyPipelineAttachableWindow@@YAXXZ
    0x538220 | public: virtual __thiscall agiPipeline::~agiPipeline(void) | ??1agiPipeline@@UAE@XZ
    0x538280 | public: virtual void __thiscall agiPipeline::BeginScene(void) | ?BeginScene@agiPipeline@@UAEXXZ
    0x5382A0 | public: virtual void __thiscall agiPipeline::EndScene(void) | ?EndScene@agiPipeline@@UAEXXZ
    0x5382B0 | public: virtual void __thiscall agiPipeline::EndFrame(void) | ?EndFrame@agiPipeline@@UAEXXZ
    0x5382C0 | public: virtual int __thiscall agiPipeline::LockFrameBuffer(class agiSurfaceDesc &) | ?LockFrameBuffer@agiPipeline@@UAEHAAVagiSurfaceDesc@@@Z
    0x5382D0 | public: virtual void __thiscall agiPipeline::UnlockFrameBuffer(void) | ?UnlockFrameBuffer@agiPipeline@@UAEXXZ
    0x5382E0 | public: virtual void __thiscall agiPipeline::DumpStatus(struct agiMemStatus &) | ?DumpStatus@agiPipeline@@UAEXAAUagiMemStatus@@@Z
    0x5382F0 | public: virtual void __thiscall agiPipeline::ClearRect(int,int,int,int,unsigned int) | ?ClearRect@agiPipeline@@UAEXHHHHI@Z
    0x538300 | public: virtual void __thiscall agiPipeline::Defragment(void) | ?Defragment@agiPipeline@@UAEXXZ
    0x595A98 | const agiPipeline::`vftable' | ??_7agiPipeline@@6B@
    0x5C2BE8 | int ZFill | ?ZFill@@3HA
    0x5C2BEC | char agiEnableZBuffer | ?agiEnableZBuffer@@3DA
    0x702148 | struct agiStats STATS | ?STATS@@3UagiStats@@A
    0x70218C | int agiBitmapPixels | ?agiBitmapPixels@@3HA
    0x702190 | int agiBitmapCount | ?agiBitmapCount@@3HA
    0x7021C0 | public: static class agiRenderer * agiPipeline::CurrentRenderer | ?CurrentRenderer@agiPipeline@@2PAVagiRenderer@@A
    0x7021C4 | public: static class agiPipeline * agiPipeline::CurrentPipe | ?CurrentPipe@agiPipeline@@2PAV1@A
    0x7021C8 | void (__cdecl* PROBER)(void *) | ?PROBER@@3P6AXPAX@ZA
    0x7021CC | int LightCount | ?LightCount@@3HA
    0x7021D0 | int DrawModeOr | ?DrawModeOr@@3HA
    0x7021D4 | int DrawModeAnd | ?DrawModeAnd@@3HA
*/

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
        // stub<member_func_t<void, agiPipeline>>(0x537700, this);

        unimplemented();
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
    virtual inline ~agiPipeline() = 0;

    // 0x5377C0 | ?Validate@agiPipeline@@UAEHXZ
    virtual inline int32_t Validate()
    {
        return stub<member_func_t<int32_t, agiPipeline>>(0x5377C0, this);
    }

    // 0x567350 | __purecall
    virtual inline int32_t BeginGfx() = 0;

    // 0x567350 | __purecall
    virtual inline void EndGfx() = 0;

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
    virtual inline class agiTexDef* CreateTexDef() = 0;

    // 0x567350 | __purecall
    virtual inline class agiTexLut* CreateTexLut() = 0;

    // 0x537D90 | ?CreateMtlDef@agiPipeline@@UAEPAVagiMtlDef@@XZ
    virtual inline class agiMtlDef* CreateMtlDef()
    {
        return stub<member_func_t<class agiMtlDef*, agiPipeline>>(0x537D90, this);
    }

    // 0x567350 | __purecall
    virtual inline class DLP* CreateDLP() = 0;

    // 0x567350 | __purecall
    virtual inline class agiViewport* CreateViewport() = 0;

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
    virtual inline void ClearAll(int32_t arg1) = 0;

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
