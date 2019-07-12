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
    agi:light

    0x53D890 | public: __thiscall agiLightParameters::agiLightParameters(void) | ??0agiLightParameters@@QAE@XZ
    0x53D910 | public: void __thiscall agiLightParameters::operator=(class agiLightParameters const &) | ??4agiLightParameters@@QAEXABV0@@Z
    0x53D930 | public: __thiscall agiLight::agiLight(class agiPipeline *) | ??0agiLight@@QAE@PAVagiPipeline@@@Z
    0x53D980 | public: int __thiscall agiLight::Init(class agiLightParameters const &) | ?Init@agiLight@@QAEHABVagiLightParameters@@@Z
    0x53D9B0 | public: virtual void __thiscall agiLight::Remove(void) | ?Remove@agiLight@@UAEXXZ
    0x53D9C0 | public: virtual __thiscall agiLight::~agiLight(void) | ??1agiLight@@UAE@XZ
    0x53D9D0 | public: virtual char * __thiscall agiLight::GetName(void) | ?GetName@agiLight@@UAEPADXZ
    0x53D9F0 | public: virtual void * __thiscall agiLight::`vector deleting destructor'(unsigned int) | ??_EagiLight@@UAEPAXI@Z
    0x53D9F0 | public: virtual void * __thiscall agiLight::`scalar deleting destructor'(unsigned int) | ??_GagiLight@@UAEPAXI@Z
    0x595C70 | const agiLight::`vftable' | ??_7agiLight@@6B@
*/

#include "hooking.h"

class agiLightParameters
{
public:
    // 0x53D890 | ??0agiLightParameters@@QAE@XZ
    inline agiLightParameters()
    {
        // stub<member_func_t<void, agiLightParameters>>(0x53D890, this);

        unimplemented();
    }

    // 0x53D910 | ??4agiLightParameters@@QAEXABV0@@Z
    inline void operator=(class agiLightParameters const& arg1)
    {
        return stub<member_func_t<void, agiLightParameters, class agiLightParameters const&>>(0x53D910, this, arg1);
    }
};

class agiLight : agiRefreshable
{
public:
    // agiLight::`vftable' @ 0x595C70

    // 0x53D930 | ??0agiLight@@QAE@PAVagiPipeline@@@Z
    inline agiLight(class agiPipeline* arg1)
    {
        // stub<member_func_t<void, agiLight, class agiPipeline*>>(0x53D930, this, arg1);

        unimplemented();
    }

    // 0x53D980 | ?Init@agiLight@@QAEHABVagiLightParameters@@@Z
    inline int32_t Init(class agiLightParameters const& arg1)
    {
        return stub<member_func_t<int32_t, agiLight, class agiLightParameters const&>>(0x53D980, this, arg1);
    }

    // 0x53D9D0 | ?GetName@agiLight@@UAEPADXZ
    inline char* GetName() override
    {
        return stub<member_func_t<char*, agiLight>>(0x53D9D0, this);
    }

    // 0x53D9C0 | ??1agiLight@@UAE@XZ
    inline ~agiLight() override = 0
    {
        // stub<member_func_t<void, agiLight>>(0x53D9C0, this);

        unimplemented();
    }

    // 0x567350 | __purecall
    virtual inline int32_t Update() = 0;

    // 0x53D9B0 | ?Remove@agiLight@@UAEXXZ
    virtual inline void Remove()
    {
        return stub<member_func_t<void, agiLight>>(0x53D9B0, this);
    }
};
