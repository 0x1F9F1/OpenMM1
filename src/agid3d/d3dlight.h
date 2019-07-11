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
    agid3d:d3dlight

    0x51B850 | public: __thiscall agiD3DLight::agiD3DLight(class agiPipeline *) | ??0agiD3DLight@@QAE@PAVagiPipeline@@@Z
    0x51B890 | public: virtual __thiscall agiD3DLight::~agiD3DLight(void) | ??1agiD3DLight@@UAE@XZ
    0x51B8F0 | public: virtual int __thiscall agiD3DLight::BeginGfx(void) | ?BeginGfx@agiD3DLight@@UAEHXZ
    0x51B970 | public: virtual void __thiscall agiD3DLight::EndGfx(void) | ?EndGfx@agiD3DLight@@UAEXXZ
    0x51B9C0 | public: virtual int __thiscall agiD3DLight::Update(void) | ?Update@agiD3DLight@@UAEHXZ
    0x51BA70 | public: virtual void * __thiscall agiD3DLight::`scalar deleting destructor'(unsigned int) | ??_GagiD3DLight@@UAEPAXI@Z
    0x51BA70 | public: virtual void * __thiscall agiD3DLight::`vector deleting destructor'(unsigned int) | ??_EagiD3DLight@@UAEPAXI@Z
    0x595898 | const agiD3DLight::`vftable' | ??_7agiD3DLight@@6B@
*/

#include "hooking.h"

struct agiD3DLight : agiLight
{
public:
    // agiD3DLight::`vftable' @ 0x595898

    // 0x51B850 | ??0agiD3DLight@@QAE@PAVagiPipeline@@@Z
    inline agiD3DLight(class agiPipeline* arg1)
    {
        stub<member_func_t<void, agiD3DLight, class agiPipeline*>>(0x51B850, this, arg1);
    }

    // 0x51B970 | ?EndGfx@agiD3DLight@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiD3DLight>>(0x51B970, this);
    }

    // 0x51B890 | ??1agiD3DLight@@UAE@XZ
    inline ~agiD3DLight() override
    {
        stub<member_func_t<void, agiD3DLight>>(0x51B890, this);
    }

    // 0x51B8F0 | ?BeginGfx@agiD3DLight@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiD3DLight>>(0x51B8F0, this);
    }

    // 0x51B9C0 | ?Update@agiD3DLight@@UAEHXZ
    inline int32_t Update() override
    {
        return stub<member_func_t<int32_t, agiD3DLight>>(0x51B9C0, this);
    }
};
