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

#include "refresh.h"
#include "vector7/vector4.h"

class agiLightParameters
{
public:
    uint32_t m_dword0 {3};
    uint32_t m_dword4 {1};
    uint32_t m_dword8 {0};
    uint32_t m_dwordC {0};
    uint32_t m_dword10 {0};
    float m_dword14 {1.0f};
    float m_dword18 {1.0f};
    float m_dword1C {1.0f};
    float m_dword20 {1.0f};
    float m_dword24 {1.0f};
    float m_dword28 {1.0f};
    float m_dword2C {1.0f};
    float m_dword30 {1.0f};
    float m_dword34 {1.0f};
    Vector4 m_dword38 {0.0f, 0.0f, 0.0f, 1.0f};
    uint32_t m_dword48 {0};
    uint32_t m_dword4C {0};
    float m_dword50 {-1.0f};
    uint32_t m_dword54 {0};
    float m_dword58 {180.0f};
    float m_dword5C {1.0f};
    uint32_t m_dword60 {0};
    uint32_t m_dword64 {0};
    uint32_t m_dword68 {0};
    int32_t m_dword6C {-1};

    // 0x53D890 | ??0agiLightParameters@@QAE@XZ
    inline agiLightParameters() = default;

    // 0x53D910 | ??4agiLightParameters@@QAEXABV0@@Z
    inline void operator=(class agiLightParameters const& arg1)
    {
        return stub<member_func_t<void, agiLightParameters, class agiLightParameters const&>>(0x53D910, this, arg1);
    }
};

check_size(agiLightParameters, 0x70);

class agiLight : public agiRefreshable
{
public:
    agiLightParameters m_Parameters;

    // agiLight::`vftable' @ 0x595C70

    // 0x53D930 | ??0agiLight@@QAE@PAVagiPipeline@@@Z
    agiLight(class agiPipeline* pipe);

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
    inline ~agiLight() override = default;

    // 0x567350 | __purecall
    virtual inline int32_t Update() = 0;

    // 0x53D9B0 | ?Remove@agiLight@@UAEXXZ
    virtual inline void Remove()
    {
        return stub<member_func_t<void, agiLight>>(0x53D9B0, this);
    }
};

check_size(agiLight, 0x88);
