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
    agisw:swpipe

    0x51BE70 | public: virtual int __thiscall agiSWPipeline::Validate(void) | ?Validate@agiSWPipeline@@UAEHXZ
    0x51BE80 | public: __thiscall agiSWPipeline::agiSWPipeline(int,char * *) | ??0agiSWPipeline@@QAE@HPAPAD@Z
    0x51BF00 | public: virtual __thiscall agiSWPipeline::~agiSWPipeline(void) | ??1agiSWPipeline@@UAE@XZ
    0x51BF10 | public: virtual int __thiscall agiSWPipeline::BeginGfx(void) | ?BeginGfx@agiSWPipeline@@UAEHXZ
    0x51C0A0 | public: virtual void __thiscall agiSWPipeline::EndGfx(void) | ?EndGfx@agiSWPipeline@@UAEXXZ
    0x51C0C0 | public: virtual void __thiscall agiSWPipeline::BeginFrame(void) | ?BeginFrame@agiSWPipeline@@UAEXXZ
    0x51C100 | public: virtual void __thiscall agiSWPipeline::BeginScene(void) | ?BeginScene@agiSWPipeline@@UAEXXZ
    0x51C120 | public: virtual void __thiscall agiSWPipeline::EndScene(void) | ?EndScene@agiSWPipeline@@UAEXXZ
    0x51C140 | public: virtual void __thiscall agiSWPipeline::EndFrame(void) | ?EndFrame@agiSWPipeline@@UAEXXZ
    0x51C160 | public: virtual class DLP * __thiscall agiSWPipeline::CreateDLP(void) | ?CreateDLP@agiSWPipeline@@UAEPAVDLP@@XZ
    0x51C170 | public: virtual class agiLight * __thiscall agiSWPipeline::CreateLight(void) | ?CreateLight@agiSWPipeline@@UAEPAVagiLight@@XZ
    0x51C180 | public: virtual void __thiscall agiSWPipeline::ClearAll(int) | ?ClearAll@agiSWPipeline@@UAEXH@Z
    0x51C210 | public: virtual void __thiscall agiSWPipeline::ClearRect(int,int,int,int,unsigned int) | ?ClearRect@agiSWPipeline@@UAEXHHHHI@Z
    0x51C270 | public: virtual class agiViewport * __thiscall agiSWPipeline::CreateViewport(void) | ?CreateViewport@agiSWPipeline@@UAEPAVagiViewport@@XZ
    0x51C300 | public: virtual class agiLightModel * __thiscall agiSWPipeline::CreateLightModel(void) | ?CreateLightModel@agiSWPipeline@@UAEPAVagiLightModel@@XZ
    0x51C310 | public: virtual class agiTexDef * __thiscall agiSWPipeline::CreateTexDef(void) | ?CreateTexDef@agiSWPipeline@@UAEPAVagiTexDef@@XZ
    0x51C370 | public: virtual class agiTexLut * __thiscall agiSWPipeline::CreateTexLut(void) | ?CreateTexLut@agiSWPipeline@@UAEPAVagiTexLut@@XZ
    0x51C3D0 | public: virtual class agiMtlDef * __thiscall agiSWPipeline::CreateMtlDef(void) | ?CreateMtlDef@agiSWPipeline@@UAEPAVagiMtlDef@@XZ
    0x51C3E0 | public: virtual class agiBitmap * __thiscall agiSWPipeline::CreateBitmap(void) | ?CreateBitmap@agiSWPipeline@@UAEPAVagiBitmap@@XZ
    0x51C450 | public: virtual void __thiscall agiSWPipeline::CopyBitmap(int,int,class agiBitmap *,int,int,int,int) | ?CopyBitmap@agiSWPipeline@@UAEXHHPAVagiBitmap@@HHHH@Z
    0x51C540 | class agiPipeline * __cdecl swCreatePipeline(int,char * *) | ?swCreatePipeline@@YAPAVagiPipeline@@HPAPAD@Z
    0x51C5E0 | public: virtual void * __thiscall agiSWPipeline::`vector deleting destructor'(unsigned int) | ??_EagiSWPipeline@@UAEPAXI@Z
    0x51C5E0 | public: virtual void * __thiscall agiSWPipeline::`scalar deleting destructor'(unsigned int) | ??_GagiSWPipeline@@UAEPAXI@Z
    0x51C610 | public: virtual void __thiscall agiSWViewport::Activate(void) | ?Activate@agiSWViewport@@UAEXXZ
    0x51C630 | public: virtual void __thiscall agiSWViewport::SetBackground(class Vector3 &) | ?SetBackground@agiSWViewport@@UAEXAAVVector3@@@Z
    0x51C690 | public: virtual void __thiscall agiSWViewport::Clear(int) | ?Clear@agiSWViewport@@UAEXH@Z
    0x51C880 | public: virtual int __thiscall agiSWViewport::BeginGfx(void) | ?BeginGfx@agiSWViewport@@UAEHXZ
    0x51C890 | public: virtual void __thiscall agiSWViewport::EndGfx(void) | ?EndGfx@agiSWViewport@@UAEXXZ
    0x51C8A0 | public: virtual void * __thiscall agiSWViewport::`vector deleting destructor'(unsigned int) | ??_EagiSWViewport@@UAEPAXI@Z
    0x51C8A0 | public: virtual void * __thiscall agiSWViewport::`scalar deleting destructor'(unsigned int) | ??_GagiSWViewport@@UAEPAXI@Z
    0x51C8D0 | public: virtual __thiscall agiSWViewport::~agiSWViewport(void) | ??1agiSWViewport@@UAE@XZ
    0x51C8E0 | public: virtual int __thiscall agiSWBitmap::BeginGfx(void) | ?BeginGfx@agiSWBitmap@@UAEHXZ
    0x51CA60 | public: virtual void __thiscall agiSWBitmap::UpdateFlags(void) | ?UpdateFlags@agiSWBitmap@@UAEXXZ
    0x51CA80 | public: virtual void __thiscall agiSWBitmap::EndGfx(void) | ?EndGfx@agiSWBitmap@@UAEXXZ
    0x51CAA0 | public: virtual void __thiscall agiSWBitmap::Restore(void) | ?Restore@agiSWBitmap@@UAEXXZ
    0x51CAB0 | public: virtual void * __thiscall agiSWBitmap::`scalar deleting destructor'(unsigned int) | ??_GagiSWBitmap@@UAEPAXI@Z
    0x51CAB0 | public: virtual void * __thiscall agiSWBitmap::`vector deleting destructor'(unsigned int) | ??_EagiSWBitmap@@UAEPAXI@Z
    0x51CAE0 | public: virtual __thiscall agiSWBitmap::~agiSWBitmap(void) | ??1agiSWBitmap@@UAE@XZ
    0x5958E8 | const agiSWPipeline::`vftable' | ??_7agiSWPipeline@@6B@
    0x595958 | const agiSWViewport::`vftable' | ??_7agiSWViewport@@6B@
    0x595998 | const agiSWBitmap::`vftable' | ??_7agiSWBitmap@@6B@
    0x51C2D0 | void __cdecl zmemset(unsigned short *,unsigned int) | ?zmemset@@YAXPAGI@Z
*/

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
        // stub<member_func_t<void, agiSWPipeline, int32_t, char**>>(0x51BE80, this, arg1, arg2);

        unimplemented();
    }

    // 0x51BF00 | ??1agiSWPipeline@@UAE@XZ
    inline ~agiSWPipeline() override = 0
    {
        // stub<member_func_t<void, agiSWPipeline>>(0x51BF00, this);

        unimplemented();
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
    inline ~agiSWViewport() override = 0
    {
        // stub<member_func_t<void, agiSWViewport>>(0x51C8D0, this);

        unimplemented();
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
    inline ~agiSWBitmap() override = 0
    {
        // stub<member_func_t<void, agiSWBitmap>>(0x51CAE0, this);

        unimplemented();
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
