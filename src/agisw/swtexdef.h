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

// agisw:swtexdef

#include "hooking.h"

// 0x5BEBA4 | ?swLutInvGamma@@3MA
inline extern_var(0x5BEBA4, float, swLutInvGamma);

struct agiSWTexDef : agiTexDef
{
public:
    // agiSWTexDef::`vftable' @ 0x595A38

    // 0x51F590 | ??0agiSWTexDef@@QAE@PAVagiSWPipeline@@@Z
    inline agiSWTexDef(class agiSWPipeline* arg1)
    {
        stub<member_func_t<void, agiSWTexDef, class agiSWPipeline*>>(0x51F590, this, arg1);
    }

    // 0x51F6D0 | ?EndGfx@agiSWTexDef@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiSWTexDef>>(0x51F6D0, this);
    }

    // 0x51F5C0 | ??1agiSWTexDef@@UAE@XZ
    inline ~agiSWTexDef() override
    {
        stub<member_func_t<void, agiSWTexDef>>(0x51F5C0, this);
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

struct agiSWTexLut : agiTexLut
{
public:
    // agiSWTexLut::`vftable' @ 0x595A68

    // 0x51F7E0 | ??0agiSWTexLut@@QAE@PAVagiSWPipeline@@@Z
    inline agiSWTexLut(class agiSWPipeline* arg1)
    {
        stub<member_func_t<void, agiSWTexLut, class agiSWPipeline*>>(0x51F7E0, this, arg1);
    }

    // 0x51F9E0 | ?EndGfx@agiSWTexLut@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiSWTexLut>>(0x51F9E0, this);
    }

    // 0x51FA50 | ??1agiSWTexLut@@UAE@XZ
    inline ~agiSWTexLut() override
    {
        stub<member_func_t<void, agiSWTexLut>>(0x51FA50, this);
    }

    // 0x51F800 | ?BeginGfx@agiSWTexLut@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiSWTexLut>>(0x51F800, this);
    }
};
