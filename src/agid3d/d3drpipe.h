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
    agid3d:d3drpipe

    0x5169E0 | public: __thiscall agiD3DRPipeline::agiD3DRPipeline(void) | ??0agiD3DRPipeline@@QAE@XZ
    0x516A00 | public: virtual __thiscall agiD3DRPipeline::~agiD3DRPipeline(void) | ??1agiD3DRPipeline@@UAE@XZ
    0x516A10 | public: virtual int __thiscall agiD3DRPipeline::BeginGfx(void) | ?BeginGfx@agiD3DRPipeline@@UAEHXZ
    0x516A90 | public: virtual void __thiscall agiD3DRPipeline::EndGfx(void) | ?EndGfx@agiD3DRPipeline@@UAEXXZ
    0x516AC0 | public: virtual class agiViewport * __thiscall agiD3DRPipeline::CreateViewport(void) | ?CreateViewport@agiD3DRPipeline@@UAEPAVagiViewport@@XZ
    0x516B20 | public: virtual class DLP * __thiscall agiD3DRPipeline::CreateDLP(void) | ?CreateDLP@agiD3DRPipeline@@UAEPAVDLP@@XZ
    0x516B30 | public: virtual void __thiscall agiD3DRPipeline::BeginScene(void) | ?BeginScene@agiD3DRPipeline@@UAEXXZ
    0x516B40 | public: virtual void __thiscall agiD3DRPipeline::EndScene(void) | ?EndScene@agiD3DRPipeline@@UAEXXZ
    0x516B60 | public: virtual class agiLightModel * __thiscall agiD3DRPipeline::CreateLightModel(void) | ?CreateLightModel@agiD3DRPipeline@@UAEPAVagiLightModel@@XZ
    0x516B70 | public: virtual class agiLight * __thiscall agiD3DRPipeline::CreateLight(void) | ?CreateLight@agiD3DRPipeline@@UAEPAVagiLight@@XZ
    0x516B80 | public: virtual void * __thiscall agiD3DRPipeline::`vector deleting destructor'(unsigned int) | ??_EagiD3DRPipeline@@UAEPAXI@Z
    0x516B80 | public: virtual void * __thiscall agiD3DRPipeline::`scalar deleting destructor'(unsigned int) | ??_GagiD3DRPipeline@@UAEPAXI@Z
    0x595630 | const agiD3DRPipeline::`vftable' | ??_7agiD3DRPipeline@@6B@
    0x6F2F24 | int UseSimpleRenderer | ?UseSimpleRenderer@@3HA
*/

#include "hooking.h"

// 0x6F2F24 | ?UseSimpleRenderer@@3HA
inline extern_var(0x6F2F24, int32_t, UseSimpleRenderer);

struct agiD3DRPipeline : agiD3DPipeline
{
public:
    // agiD3DRPipeline::`vftable' @ 0x595630

    // 0x5169E0 | ??0agiD3DRPipeline@@QAE@XZ
    inline agiD3DRPipeline()
    {
        // stub<member_func_t<void, agiD3DRPipeline>>(0x5169E0, this);

        unimplemented();
    }

    // 0x516A00 | ??1agiD3DRPipeline@@UAE@XZ
    inline ~agiD3DRPipeline() override = 0
    {
        // stub<member_func_t<void, agiD3DRPipeline>>(0x516A00, this);

        unimplemented();
    }

    // 0x516A10 | ?BeginGfx@agiD3DRPipeline@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiD3DRPipeline>>(0x516A10, this);
    }

    // 0x516A90 | ?EndGfx@agiD3DRPipeline@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiD3DRPipeline>>(0x516A90, this);
    }

    // 0x516B30 | ?BeginScene@agiD3DRPipeline@@UAEXXZ
    inline void BeginScene() override
    {
        return stub<member_func_t<void, agiD3DRPipeline>>(0x516B30, this);
    }

    // 0x516B40 | ?EndScene@agiD3DRPipeline@@UAEXXZ
    inline void EndScene() override
    {
        return stub<member_func_t<void, agiD3DRPipeline>>(0x516B40, this);
    }

    // 0x516B20 | ?CreateDLP@agiD3DRPipeline@@UAEPAVDLP@@XZ
    inline class DLP* CreateDLP() override
    {
        return stub<member_func_t<class DLP*, agiD3DRPipeline>>(0x516B20, this);
    }

    // 0x516AC0 | ?CreateViewport@agiD3DRPipeline@@UAEPAVagiViewport@@XZ
    inline class agiViewport* CreateViewport() override
    {
        return stub<member_func_t<class agiViewport*, agiD3DRPipeline>>(0x516AC0, this);
    }

    // 0x516B70 | ?CreateLight@agiD3DRPipeline@@UAEPAVagiLight@@XZ
    inline class agiLight* CreateLight() override
    {
        return stub<member_func_t<class agiLight*, agiD3DRPipeline>>(0x516B70, this);
    }

    // 0x516B60 | ?CreateLightModel@agiD3DRPipeline@@UAEPAVagiLightModel@@XZ
    inline class agiLightModel* CreateLightModel() override
    {
        return stub<member_func_t<class agiLightModel*, agiD3DRPipeline>>(0x516B60, this);
    }
};
