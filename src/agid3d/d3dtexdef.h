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
    agid3d:d3dtexdef

    0x51B160 | public: __thiscall agiD3DTexDef::agiD3DTexDef(class agiPipeline *) | ??0agiD3DTexDef@@QAE@PAVagiPipeline@@@Z
    0x51B190 | public: virtual __thiscall agiD3DTexDef::~agiD3DTexDef(void) | ??1agiD3DTexDef@@UAE@XZ
    0x51B1A0 | public: virtual int __thiscall agiD3DTexDef::BeginGfx(void) | ?BeginGfx@agiD3DTexDef@@UAEHXZ
    0x51B500 | public: virtual void __thiscall agiD3DTexDef::Request(void) | ?Request@agiD3DTexDef@@UAEXXZ
    0x51B560 | public: struct IDirect3DTexture2 * __thiscall agiD3DTexDef::GetHandle(int) | ?GetHandle@agiD3DTexDef@@QAEPAUIDirect3DTexture2@@H@Z
    0x51B5E0 | public: virtual int __thiscall agiD3DTexDef::Lock(struct agiTexLock &) | ?Lock@agiD3DTexDef@@UAEHAAUagiTexLock@@@Z
    0x51B680 | public: virtual void __thiscall agiD3DTexDef::Unlock(struct agiTexLock &) | ?Unlock@agiD3DTexDef@@UAEXAAUagiTexLock@@@Z
    0x51B6B0 | public: virtual void __thiscall agiD3DTexDef::EndGfx(void) | ?EndGfx@agiD3DTexDef@@UAEXXZ
    0x51B720 | public: virtual int __thiscall agiD3DTexDef::IsAvailable(void) | ?IsAvailable@agiD3DTexDef@@UAEHXZ
    0x51B730 | public: virtual void __thiscall agiD3DTexDef::Set(class Vector2 &,class Vector2 &) | ?Set@agiD3DTexDef@@UAEXAAVVector2@@0@Z
    0x51B750 | public: virtual void __thiscall agiD3DTexDef::Restore(void) | ?Restore@agiD3DTexDef@@UAEXXZ
    0x51B790 | public: virtual int __thiscall agiD3DTexLut::BeginGfx(void) | ?BeginGfx@agiD3DTexLut@@UAEHXZ
    0x51B7E0 | public: virtual void __thiscall agiD3DTexLut::EndGfx(void) | ?EndGfx@agiD3DTexLut@@UAEXXZ
    0x51B820 | public: virtual void * __thiscall agiD3DTexDef::`vector deleting destructor'(unsigned int) | ??_EagiD3DTexDef@@UAEPAXI@Z
    0x51B820 | public: virtual void * __thiscall agiD3DTexDef::`scalar deleting destructor'(unsigned int) | ??_GagiD3DTexDef@@UAEPAXI@Z
    0x595868 | const agiD3DTexDef::`vftable' | ??_7agiD3DTexDef@@6B@
*/

#include "hooking.h"

struct agiD3DTexDef : agiTexDef
{
public:
    // agiD3DTexDef::`vftable' @ 0x595868

    // 0x516BB0 | ?Prober@agiD3DTexDef@@SAXPAX@Z
    static inline void Prober(void* arg1)
    {
        return stub<cdecl_t<void, void*>>(0x516BB0, arg1);
    }

    // 0x51B160 | ??0agiD3DTexDef@@QAE@PAVagiPipeline@@@Z
    inline agiD3DTexDef(class agiPipeline* arg1)
    {
        stub<member_func_t<void, agiD3DTexDef, class agiPipeline*>>(0x51B160, this, arg1);
    }

    // 0x51B560 | ?GetHandle@agiD3DTexDef@@QAEPAUIDirect3DTexture2@@H@Z
    inline struct IDirect3DTexture2* GetHandle(int32_t arg1)
    {
        return stub<member_func_t<struct IDirect3DTexture2*, agiD3DTexDef, int32_t>>(0x51B560, this, arg1);
    }

    // 0x51B6B0 | ?EndGfx@agiD3DTexDef@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiD3DTexDef>>(0x51B6B0, this);
    }

    // 0x51B750 | ?Restore@agiD3DTexDef@@UAEXXZ
    inline void Restore() override
    {
        return stub<member_func_t<void, agiD3DTexDef>>(0x51B750, this);
    }

    // 0x51B190 | ??1agiD3DTexDef@@UAE@XZ
    inline ~agiD3DTexDef() override
    {
        stub<member_func_t<void, agiD3DTexDef>>(0x51B190, this);
    }

    // 0x51B1A0 | ?BeginGfx@agiD3DTexDef@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiD3DTexDef>>(0x51B1A0, this);
    }

    // 0x51B720 | ?IsAvailable@agiD3DTexDef@@UAEHXZ
    inline int32_t IsAvailable() override
    {
        return stub<member_func_t<int32_t, agiD3DTexDef>>(0x51B720, this);
    }

    // 0x51B730 | ?Set@agiD3DTexDef@@UAEXAAVVector2@@0@Z
    inline void Set(class Vector2& arg1, class Vector2& arg2) override
    {
        return stub<member_func_t<void, agiD3DTexDef, class Vector2&, class Vector2&>>(0x51B730, this, arg1, arg2);
    }

    // 0x51B5E0 | ?Lock@agiD3DTexDef@@UAEHAAUagiTexLock@@@Z
    inline int32_t Lock(struct agiTexLock& arg1) override
    {
        return stub<member_func_t<int32_t, agiD3DTexDef, struct agiTexLock&>>(0x51B5E0, this, arg1);
    }

    // 0x51B680 | ?Unlock@agiD3DTexDef@@UAEXAAUagiTexLock@@@Z
    inline void Unlock(struct agiTexLock& arg1) override
    {
        return stub<member_func_t<void, agiD3DTexDef, struct agiTexLock&>>(0x51B680, this, arg1);
    }

    // 0x51B500 | ?Request@agiD3DTexDef@@UAEXXZ
    inline void Request() override
    {
        return stub<member_func_t<void, agiD3DTexDef>>(0x51B500, this);
    }
};
