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
    agid3d:d3dmtldef

    0x51AF20 | public: __thiscall agiD3DMtlDef::agiD3DMtlDef(class agiPipeline *) | ??0agiD3DMtlDef@@QAE@PAVagiPipeline@@@Z
    0x51AF50 | public: virtual int __thiscall agiD3DMtlDef::BeginGfx(void) | ?BeginGfx@agiD3DMtlDef@@UAEHXZ
    0x51AFE0 | public: virtual void __thiscall agiD3DMtlDef::EndGfx(void) | ?EndGfx@agiD3DMtlDef@@UAEXXZ
    0x51B020 | public: virtual __thiscall agiD3DMtlDef::~agiD3DMtlDef(void) | ??1agiD3DMtlDef@@UAE@XZ
    0x51B030 | public: void __thiscall agiD3DMtlDef::Activate(void) | ?Activate@agiD3DMtlDef@@QAEXXZ
    0x51B110 | public: unsigned long __thiscall agiD3DMtlDef::GetHandle(void) | ?GetHandle@agiD3DMtlDef@@QAEKXZ
    0x51B130 | public: virtual void * __thiscall agiD3DMtlDef::`vector deleting destructor'(unsigned int) | ??_EagiD3DMtlDef@@UAEPAXI@Z
    0x51B130 | public: virtual void * __thiscall agiD3DMtlDef::`scalar deleting destructor'(unsigned int) | ??_GagiD3DMtlDef@@UAEPAXI@Z
    0x595850 | const agiD3DMtlDef::`vftable' | ??_7agiD3DMtlDef@@6B@
    0x51B0E0 | void __cdecl xlat(struct _D3DCOLORVALUE &,class Vector4 &) | ?xlat@@YAXAAU_D3DCOLORVALUE@@AAVVector4@@@Z
*/

#include "hooking.h"

// 0x51B0E0 | ?xlat@@YAXAAU_D3DCOLORVALUE@@AAVVector4@@@Z
inline void xlat(struct _D3DCOLORVALUE& arg1, class Vector4& arg2)
{
    return stub<cdecl_t<void, struct _D3DCOLORVALUE&, class Vector4&>>(0x51B0E0, arg1, arg2);
}

struct agiD3DMtlDef : agiMtlDef
{
public:
    // agiD3DMtlDef::`vftable' @ 0x595850

    // 0x51AF20 | ??0agiD3DMtlDef@@QAE@PAVagiPipeline@@@Z
    inline agiD3DMtlDef(class agiPipeline* arg1)
    {
        stub<member_func_t<void, agiD3DMtlDef, class agiPipeline*>>(0x51AF20, this, arg1);
    }

    // 0x51B030 | ?Activate@agiD3DMtlDef@@QAEXXZ
    inline void Activate()
    {
        return stub<member_func_t<void, agiD3DMtlDef>>(0x51B030, this);
    }

    // 0x51B110 | ?GetHandle@agiD3DMtlDef@@QAEKXZ
    inline uint32_t GetHandle()
    {
        return stub<member_func_t<uint32_t, agiD3DMtlDef>>(0x51B110, this);
    }

    // 0x51AFE0 | ?EndGfx@agiD3DMtlDef@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiD3DMtlDef>>(0x51AFE0, this);
    }

    // 0x51B020 | ??1agiD3DMtlDef@@UAE@XZ
    inline ~agiD3DMtlDef() override
    {
        stub<member_func_t<void, agiD3DMtlDef>>(0x51B020, this);
    }

    // 0x51AF50 | ?BeginGfx@agiD3DMtlDef@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiD3DMtlDef>>(0x51AF50, this);
    }
};
