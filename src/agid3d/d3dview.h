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
    agid3d:d3dview

    0x51A480 | public: __thiscall agiD3DViewport::agiD3DViewport(class agiPipeline *) | ??0agiD3DViewport@@QAE@PAVagiPipeline@@@Z
    0x51A4B0 | public: virtual int __thiscall agiD3DViewport::BeginGfx(void) | ?BeginGfx@agiD3DViewport@@UAEHXZ
    0x51A4E0 | public: virtual void __thiscall agiD3DViewport::EndGfx(void) | ?EndGfx@agiD3DViewport@@UAEXXZ
    0x51A4F0 | public: virtual __thiscall agiD3DViewport::~agiD3DViewport(void) | ??1agiD3DViewport@@UAE@XZ
    0x51A500 | public: virtual void __thiscall agiD3DViewport::Activate(void) | ?Activate@agiD3DViewport@@UAEXXZ
    0x51A5C0 | public: virtual void __thiscall agiD3DViewport::SetBackground(class Vector3 &) | ?SetBackground@agiD3DViewport@@UAEXAAVVector3@@@Z
    0x51A610 | public: virtual void __thiscall agiD3DViewport::Clear(int) | ?Clear@agiD3DViewport@@UAEXH@Z
    0x51A6C0 | public: virtual void * __thiscall agiD3DViewport::`vector deleting destructor'(unsigned int) | ??_EagiD3DViewport@@UAEPAXI@Z
    0x51A6C0 | public: virtual void * __thiscall agiD3DViewport::`scalar deleting destructor'(unsigned int) | ??_GagiD3DViewport@@UAEPAXI@Z
    0x595810 | const agiD3DViewport::`vftable' | ??_7agiD3DViewport@@6B@
*/

struct agiD3DViewport : agiViewport
{
public:
    // agiD3DViewport::`vftable' @ 0x595810

    // 0x51A480 | ??0agiD3DViewport@@QAE@PAVagiPipeline@@@Z
    inline agiD3DViewport(class agiPipeline* arg1)
    {
        // stub<member_func_t<void, agiD3DViewport, class agiPipeline*>>(0x51A480, this, arg1);

        unimplemented();
    }

    // 0x51A4E0 | ?EndGfx@agiD3DViewport@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiD3DViewport>>(0x51A4E0, this);
    }

    // 0x51A4F0 | ??1agiD3DViewport@@UAE@XZ
    inline ~agiD3DViewport() override = 0
    {
        // stub<member_func_t<void, agiD3DViewport>>(0x51A4F0, this);

        unimplemented();
    }

    // 0x51A4B0 | ?BeginGfx@agiD3DViewport@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiD3DViewport>>(0x51A4B0, this);
    }

    // 0x51A500 | ?Activate@agiD3DViewport@@UAEXXZ
    inline void Activate() override
    {
        return stub<member_func_t<void, agiD3DViewport>>(0x51A500, this);
    }

    // 0x51A5C0 | ?SetBackground@agiD3DViewport@@UAEXAAVVector3@@@Z
    inline void SetBackground(class Vector3& arg1) override
    {
        return stub<member_func_t<void, agiD3DViewport, class Vector3&>>(0x51A5C0, this, arg1);
    }

    // 0x51A610 | ?Clear@agiD3DViewport@@UAEXH@Z
    inline void Clear(int32_t arg1) override
    {
        return stub<member_func_t<void, agiD3DViewport, int32_t>>(0x51A610, this, arg1);
    }
};
