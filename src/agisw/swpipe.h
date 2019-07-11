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

// agisw:swpipe

#include "hooking.h"

// 0x51C540 | ?swCreatePipeline@@YAPAVagiPipeline@@HPAPAD@Z
inline class agiPipeline* swCreatePipeline(int32_t arg1, char** arg2)
{
    return stub<cdecl_t<class agiPipeline*, int32_t, char**>>(0x51C540, arg1, arg2);
}

// 0x51C2D0 | ?zmemset@@YAXPAGI@Z
inline void zmemset(uint16_t* arg1, uint32_t arg2)
{
    return stub<cdecl_t<void, uint16_t*, uint32_t>>(0x51C2D0, arg1, arg2);
}

class agiSWPipeline : agiPipeline
{
public:
    // agiSWPipeline::`vftable' @ 0x5958E8

    // 0x51BE80 | ??0agiSWPipeline@@QAE@HPAPAD@Z
    inline agiSWPipeline(int32_t arg1, char** arg2)
    {
        stub<member_func_t<void, agiSWPipeline, int32_t, char**>>(0x51BE80, this, arg1, arg2);
    }

    // 0x51BF00 | ??1agiSWPipeline@@UAE@XZ
    inline ~agiSWPipeline() override
    {
        stub<member_func_t<void, agiSWPipeline>>(0x51BF00, this);
    }

    // 0x51BE70 | ?Validate@agiSWPipeline@@UAEHXZ
    inline int32_t Validate() override
    {
        return stub<member_func_t<int32_t, agiSWPipeline>>(0x51BE70, this);
    }

    // 0x51BF10 | ?BeginGfx@agiSWPipeline@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiSWPipeline>>(0x51BF10, this);
    }

    // 0x51C0A0 | ?EndGfx@agiSWPipeline@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiSWPipeline>>(0x51C0A0, this);
    }

    // 0x51C0C0 | ?BeginFrame@agiSWPipeline@@UAEXXZ
    inline void BeginFrame() override
    {
        return stub<member_func_t<void, agiSWPipeline>>(0x51C0C0, this);
    }

    // 0x51C100 | ?BeginScene@agiSWPipeline@@UAEXXZ
    inline void BeginScene() override
    {
        return stub<member_func_t<void, agiSWPipeline>>(0x51C100, this);
    }

    // 0x51C120 | ?EndScene@agiSWPipeline@@UAEXXZ
    inline void EndScene() override
    {
        return stub<member_func_t<void, agiSWPipeline>>(0x51C120, this);
    }

    // 0x51C140 | ?EndFrame@agiSWPipeline@@UAEXXZ
    inline void EndFrame() override
    {
        return stub<member_func_t<void, agiSWPipeline>>(0x51C140, this);
    }

    // 0x51C310 | ?CreateTexDef@agiSWPipeline@@UAEPAVagiTexDef@@XZ
    inline class agiTexDef* CreateTexDef() override
    {
        return stub<member_func_t<class agiTexDef*, agiSWPipeline>>(0x51C310, this);
    }

    // 0x51C370 | ?CreateTexLut@agiSWPipeline@@UAEPAVagiTexLut@@XZ
    inline class agiTexLut* CreateTexLut() override
    {
        return stub<member_func_t<class agiTexLut*, agiSWPipeline>>(0x51C370, this);
    }

    // 0x51C3D0 | ?CreateMtlDef@agiSWPipeline@@UAEPAVagiMtlDef@@XZ
    inline class agiMtlDef* CreateMtlDef() override
    {
        return stub<member_func_t<class agiMtlDef*, agiSWPipeline>>(0x51C3D0, this);
    }

    // 0x51C160 | ?CreateDLP@agiSWPipeline@@UAEPAVDLP@@XZ
    inline class DLP* CreateDLP() override
    {
        return stub<member_func_t<class DLP*, agiSWPipeline>>(0x51C160, this);
    }

    // 0x51C270 | ?CreateViewport@agiSWPipeline@@UAEPAVagiViewport@@XZ
    inline class agiViewport* CreateViewport() override
    {
        return stub<member_func_t<class agiViewport*, agiSWPipeline>>(0x51C270, this);
    }

    // 0x51C170 | ?CreateLight@agiSWPipeline@@UAEPAVagiLight@@XZ
    inline class agiLight* CreateLight() override
    {
        return stub<member_func_t<class agiLight*, agiSWPipeline>>(0x51C170, this);
    }

    // 0x51C300 | ?CreateLightModel@agiSWPipeline@@UAEPAVagiLightModel@@XZ
    inline class agiLightModel* CreateLightModel() override
    {
        return stub<member_func_t<class agiLightModel*, agiSWPipeline>>(0x51C300, this);
    }

    // 0x51C3E0 | ?CreateBitmap@agiSWPipeline@@UAEPAVagiBitmap@@XZ
    inline class agiBitmap* CreateBitmap() override
    {
        return stub<member_func_t<class agiBitmap*, agiSWPipeline>>(0x51C3E0, this);
    }

    // 0x51C450 | ?CopyBitmap@agiSWPipeline@@UAEXHHPAVagiBitmap@@HHHH@Z
    inline void CopyBitmap(int32_t arg1, int32_t arg2, class agiBitmap* arg3, int32_t arg4, int32_t arg5, int32_t arg6,
        int32_t arg7) override
    {
        return stub<
            member_func_t<void, agiSWPipeline, int32_t, int32_t, class agiBitmap*, int32_t, int32_t, int32_t, int32_t>>(
            0x51C450, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x51C180 | ?ClearAll@agiSWPipeline@@UAEXH@Z
    inline void ClearAll(int32_t arg1) override
    {
        return stub<member_func_t<void, agiSWPipeline, int32_t>>(0x51C180, this, arg1);
    }

    // 0x51C210 | ?ClearRect@agiSWPipeline@@UAEXHHHHI@Z
    inline void ClearRect(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, uint32_t arg5) override
    {
        return stub<member_func_t<void, agiSWPipeline, int32_t, int32_t, int32_t, int32_t, uint32_t>>(
            0x51C210, this, arg1, arg2, arg3, arg4, arg5);
    }
};

struct agiSWViewport : agiViewport
{
public:
    // agiSWViewport::`vftable' @ 0x595958

    // 0x51C890 | ?EndGfx@agiSWViewport@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiSWViewport>>(0x51C890, this);
    }

    // 0x51C8D0 | ??1agiSWViewport@@UAE@XZ
    inline ~agiSWViewport() override
    {
        stub<member_func_t<void, agiSWViewport>>(0x51C8D0, this);
    }

    // 0x51C880 | ?BeginGfx@agiSWViewport@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiSWViewport>>(0x51C880, this);
    }

    // 0x51C610 | ?Activate@agiSWViewport@@UAEXXZ
    inline void Activate() override
    {
        return stub<member_func_t<void, agiSWViewport>>(0x51C610, this);
    }

    // 0x51C630 | ?SetBackground@agiSWViewport@@UAEXAAVVector3@@@Z
    inline void SetBackground(class Vector3& arg1) override
    {
        return stub<member_func_t<void, agiSWViewport, class Vector3&>>(0x51C630, this, arg1);
    }

    // 0x51C690 | ?Clear@agiSWViewport@@UAEXH@Z
    inline void Clear(int32_t arg1) override
    {
        return stub<member_func_t<void, agiSWViewport, int32_t>>(0x51C690, this, arg1);
    }
};

struct agiSWBitmap : agiBitmap
{
public:
    // agiSWBitmap::`vftable' @ 0x595998

    // 0x51CA80 | ?EndGfx@agiSWBitmap@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiSWBitmap>>(0x51CA80, this);
    }

    // 0x51CAA0 | ?Restore@agiSWBitmap@@UAEXXZ
    inline void Restore() override
    {
        return stub<member_func_t<void, agiSWBitmap>>(0x51CAA0, this);
    }

    // 0x51CAE0 | ??1agiSWBitmap@@UAE@XZ
    inline ~agiSWBitmap() override
    {
        stub<member_func_t<void, agiSWBitmap>>(0x51CAE0, this);
    }

    // 0x51C8E0 | ?BeginGfx@agiSWBitmap@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiSWBitmap>>(0x51C8E0, this);
    }

    // 0x51CA60 | ?UpdateFlags@agiSWBitmap@@UAEXXZ
    inline void UpdateFlags() override
    {
        return stub<member_func_t<void, agiSWBitmap>>(0x51CA60, this);
    }
};
