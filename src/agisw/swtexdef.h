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
    agisw:swtexdef

    0x51F590 | public: __thiscall agiSWTexDef::agiSWTexDef(class agiSWPipeline *) | ??0agiSWTexDef@@QAE@PAVagiSWPipeline@@@Z
    0x51F5C0 | public: virtual __thiscall agiSWTexDef::~agiSWTexDef(void) | ??1agiSWTexDef@@UAE@XZ
    0x51F5D0 | public: virtual void __thiscall agiSWTexDef::Set(class Vector2 &,class Vector2 &) | ?Set@agiSWTexDef@@UAEXAAVVector2@@0@Z
    0x51F5F0 | public: virtual int __thiscall agiSWTexDef::BeginGfx(void) | ?BeginGfx@agiSWTexDef@@UAEHXZ
    0x51F6C0 | public: virtual int __thiscall agiSWTexDef::IsAvailable(void) | ?IsAvailable@agiSWTexDef@@UAEHXZ
    0x51F6D0 | public: virtual void __thiscall agiSWTexDef::EndGfx(void) | ?EndGfx@agiSWTexDef@@UAEXXZ
    0x51F720 | public: virtual int __thiscall agiSWTexDef::Lock(struct agiTexLock &) | ?Lock@agiSWTexDef@@UAEHAAUagiTexLock@@@Z
    0x51F770 | public: virtual void __thiscall agiSWTexDef::Unlock(struct agiTexLock &) | ?Unlock@agiSWTexDef@@UAEXAAUagiTexLock@@@Z
    0x51F780 | public: virtual void __thiscall agiSWTexDef::Request(void) | ?Request@agiSWTexDef@@UAEXXZ
    0x51F7E0 | public: __thiscall agiSWTexLut::agiSWTexLut(class agiSWPipeline *) | ??0agiSWTexLut@@QAE@PAVagiSWPipeline@@@Z
    0x51F800 | public: virtual int __thiscall agiSWTexLut::BeginGfx(void) | ?BeginGfx@agiSWTexLut@@UAEHXZ
    0x51F9E0 | public: virtual void __thiscall agiSWTexLut::EndGfx(void) | ?EndGfx@agiSWTexLut@@UAEXXZ
    0x51F9F0 | public: virtual void * __thiscall agiSWTexDef::`scalar deleting destructor'(unsigned int) | ??_GagiSWTexDef@@UAEPAXI@Z
    0x51F9F0 | public: virtual void * __thiscall agiSWTexDef::`vector deleting destructor'(unsigned int) | ??_EagiSWTexDef@@UAEPAXI@Z
    0x51FA20 | public: virtual void * __thiscall agiSWTexLut::`vector deleting destructor'(unsigned int) | ??_EagiSWTexLut@@UAEPAXI@Z
    0x51FA20 | public: virtual void * __thiscall agiSWTexLut::`scalar deleting destructor'(unsigned int) | ??_GagiSWTexLut@@UAEPAXI@Z
    0x51FA50 | public: virtual __thiscall agiSWTexLut::~agiSWTexLut(void) | ??1agiSWTexLut@@UAE@XZ
    0x595A38 | const agiSWTexDef::`vftable' | ??_7agiSWTexDef@@6B@
    0x595A68 | const agiSWTexLut::`vftable' | ??_7agiSWTexLut@@6B@
    0x5BEBA4 | float swLutInvGamma | ?swLutInvGamma@@3MA
*/

#include "agi/texdef.h"

// 0x5BEBA4 | ?swLutInvGamma@@3MA
inline extern_var(0x5BEBA4, float, swLutInvGamma);

struct agiSWTexDef : public agiTexDef
{
public:
    // agiSWTexDef::`vftable' @ 0x595A38

    uint32_t m_dword70 {0};
    uint32_t m_WidthPow {0};
    uint32_t m_HeightPow {0};
    uint8_t* m_pSurfaces[7] {};

    // 0x51F590 | ??0agiSWTexDef@@QAE@PAVagiSWPipeline@@@Z
    agiSWTexDef(class agiSWPipeline* pipe);

    // 0x51F6D0 | ?EndGfx@agiSWTexDef@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiSWTexDef>>(0x51F6D0, this);
    }

    // 0x51F5C0 | ??1agiSWTexDef@@UAE@XZ
    inline ~agiSWTexDef() override = 0
    {
        // stub<member_func_t<void, agiSWTexDef>>(0x51F5C0, this);

        unimplemented();
    }

    // 0x51F5F0 | ?BeginGfx@agiSWTexDef@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiSWTexDef>>(0x51F5F0, this);
    }

    // 0x51F6C0 | ?IsAvailable@agiSWTexDef@@UAEHXZ
    inline int32_t IsAvailable() override
    {
        return stub<member_func_t<int32_t, agiSWTexDef>>(0x51F6C0, this);
    }

    // 0x51F5D0 | ?Set@agiSWTexDef@@UAEXAAVVector2@@0@Z
    inline void Set(class Vector2& arg1, class Vector2& arg2) override
    {
        return stub<member_func_t<void, agiSWTexDef, class Vector2&, class Vector2&>>(0x51F5D0, this, arg1, arg2);
    }

    // 0x51F720 | ?Lock@agiSWTexDef@@UAEHAAUagiTexLock@@@Z
    inline int32_t Lock(struct agiTexLock& arg1) override
    {
        return stub<member_func_t<int32_t, agiSWTexDef, struct agiTexLock&>>(0x51F720, this, arg1);
    }

    // 0x51F770 | ?Unlock@agiSWTexDef@@UAEXAAUagiTexLock@@@Z
    inline void Unlock(struct agiTexLock& arg1) override
    {
        return stub<member_func_t<void, agiSWTexDef, struct agiTexLock&>>(0x51F770, this, arg1);
    }

    // 0x51F780 | ?Request@agiSWTexDef@@UAEXXZ
    inline void Request() override
    {
        return stub<member_func_t<void, agiSWTexDef>>(0x51F780, this);
    }
};

check_size(agiSWTexDef, 0x98);

struct agiSWTexLut : public agiTexLut
{
public:
    uint32_t m_FogColor {0};
    uint16_t m_Tables[8][256] {};

    // agiSWTexLut::`vftable' @ 0x595A68

    // 0x51F7E0 | ??0agiSWTexLut@@QAE@PAVagiSWPipeline@@@Z
    agiSWTexLut(class agiSWPipeline* pipe);

    // 0x51F9E0 | ?EndGfx@agiSWTexLut@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiSWTexLut>>(0x51F9E0, this);
    }

    // 0x51FA50 | ??1agiSWTexLut@@UAE@XZ
    inline ~agiSWTexLut() override = 0
    {
        // stub<member_func_t<void, agiSWTexLut>>(0x51FA50, this);

        unimplemented();
    }

    // 0x51F800 | ?BeginGfx@agiSWTexLut@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiSWTexLut>>(0x51F800, this);
    }
};

check_size(agiSWTexLut, 0x1420);
