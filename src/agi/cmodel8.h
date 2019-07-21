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
    agi:cmodel8

    0x53DDD0 | public: __thiscall agiColorModel8::agiColorModel8(class agiPalette *) | ??0agiColorModel8@@QAE@PAVagiPalette@@@Z
    0x53DE20 | public: virtual __thiscall agiColorModel8::~agiColorModel8(void) | ??1agiColorModel8@@UAE@XZ
    0x53DE30 | public: virtual unsigned int __thiscall agiColorModel8::GetColor(struct agiRgba) | ?GetColor@agiColorModel8@@UAEIUagiRgba@@@Z
    0x53DE50 | public: virtual unsigned int __thiscall agiColorModel8::FindColor(struct agiRgba) | ?FindColor@agiColorModel8@@UAEIUagiRgba@@@Z
    0x53DE70 | public: virtual unsigned int __thiscall agiColorModel8::Filter(unsigned int,unsigned int,unsigned int,unsigned int) | ?Filter@agiColorModel8@@UAEIIIII@Z
    0x53DF20 | public: virtual unsigned int __thiscall agiColorModel8::GetPixel(class agiSurfaceDesc *,int,int) | ?GetPixel@agiColorModel8@@UAEIPAVagiSurfaceDesc@@HH@Z
    0x53DF40 | public: virtual void __thiscall agiColorModel8::SetPixel(class agiSurfaceDesc *,int,int,unsigned int) | ?SetPixel@agiColorModel8@@UAEXPAVagiSurfaceDesc@@HHI@Z
    0x53DF60 | public: virtual void * __thiscall agiColorModel8::`vector deleting destructor'(unsigned int) | ??_EagiColorModel8@@UAEPAXI@Z
    0x53DF60 | public: virtual void * __thiscall agiColorModel8::`scalar deleting destructor'(unsigned int) | ??_GagiColorModel8@@UAEPAXI@Z
    0x595CD0 | const agiColorModel8::`vftable' | ??_7agiColorModel8@@6B@
*/

#include "cmodel.h"

class agiPalette;

struct agiColorModel8 : agiColorModel
{
public:
    agiPalette* m_Palette {nullptr};

    // agiColorModel8::`vftable' @ 0x595CD0

    // 0x53DDD0 | ??0agiColorModel8@@QAE@PAVagiPalette@@@Z
    agiColorModel8(class agiPalette* arg1);

    // 0x53DE20 | ??1agiColorModel8@@UAE@XZ
    inline ~agiColorModel8() override = default;

    // 0x53DE30 | ?GetColor@agiColorModel8@@UAEIUagiRgba@@@Z
    inline uint32_t GetColor(struct agiRgba arg1) override
    {
        return stub<member_func_t<uint32_t, agiColorModel8, struct agiRgba>>(0x53DE30, this, arg1);
    }

    // 0x53DE50 | ?FindColor@agiColorModel8@@UAEIUagiRgba@@@Z
    inline uint32_t FindColor(struct agiRgba arg1) override
    {
        return stub<member_func_t<uint32_t, agiColorModel8, struct agiRgba>>(0x53DE50, this, arg1);
    }

    // 0x53DE70 | ?Filter@agiColorModel8@@UAEIIIII@Z
    inline uint32_t Filter(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) override
    {
        return stub<member_func_t<uint32_t, agiColorModel8, uint32_t, uint32_t, uint32_t, uint32_t>>(
            0x53DE70, this, arg1, arg2, arg3, arg4);
    }

    // 0x53DF40 | ?SetPixel@agiColorModel8@@UAEXPAVagiSurfaceDesc@@HHI@Z
    inline void SetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3, uint32_t arg4) override
    {
        return stub<member_func_t<void, agiColorModel8, class agiSurfaceDesc*, int32_t, int32_t, uint32_t>>(
            0x53DF40, this, arg1, arg2, arg3, arg4);
    }

    // 0x53DF20 | ?GetPixel@agiColorModel8@@UAEIPAVagiSurfaceDesc@@HH@Z
    inline uint32_t GetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3) override
    {
        return stub<member_func_t<uint32_t, agiColorModel8, class agiSurfaceDesc*, int32_t, int32_t>>(
            0x53DF20, this, arg1, arg2, arg3);
    }
};
