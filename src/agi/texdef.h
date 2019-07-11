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

// agi:texdef

#include "hooking.h"

// 0x538720 | ?UpdateLutQueue@@YAXXZ
inline void UpdateLutQueue()
{
    return stub<cdecl_t<void>>(0x538720);
}

// 0x5387B0 | ?ShutdownLutQueue@@YAXXZ
inline void ShutdownLutQueue()
{
    return stub<cdecl_t<void>>(0x5387B0);
}

// 0x5C2E64 | ?MaxTexSize@@3HA
inline extern_var(0x5C2E64, int32_t, MaxTexSize);

// 0x5C2E68 | ?TexSearchPath@@3PADA
inline extern_var(0x5C2E68, char*, TexSearchPath);

// 0x702218 | ?PackShift@@3HA
inline extern_var(0x702218, int32_t, PackShift);

// 0x70221C | ?TexBytesPaged@@3HA
inline extern_var(0x70221C, int32_t, TexBytesPaged);

// 0x702260 | ?lutQ@@3PAUlutQentry@@A
inline extern_var(0x702260, struct lutQentry*, lutQ);

// 0x702460 | ?TexLutHash@@3VHashTable@@A
inline extern_var(0x702460, class HashTable, TexLutHash);

// 0x702478 | ?TEXCACHE@@3VDataCache@@A
inline extern_var(0x702478, class DataCache, TEXCACHE);

// 0x7024B8 | ?TexsPaged@@3HA
inline extern_var(0x7024B8, int32_t, TexsPaged);

class agiTexParameters
{
public:
    // 0x538380 | ??0agiTexParameters@@QAE@XZ
    inline agiTexParameters()
    {
        stub<member_func_t<void, agiTexParameters>>(0x538380, this);
    }

    // 0x5383A0 | ?Load@agiTexParameters@@QAEXPAVStream@@@Z
    inline void Load(class Stream* arg1)
    {
        return stub<member_func_t<void, agiTexParameters, class Stream*>>(0x5383A0, this, arg1);
    }

    // 0x5383F0 | ?Save@agiTexParameters@@QAEXPAVStream@@@Z
    inline void Save(class Stream* arg1)
    {
        return stub<member_func_t<void, agiTexParameters, class Stream*>>(0x5383F0, this, arg1);
    }
};

class agiTexLut : agiRefreshable
{
public:
    // agiTexLut::`vftable' @ 0x595B38

    // 0x538A80 | ?Init@agiTexLut@@QAEHPAD@Z
    inline int32_t Init(char* arg1)
    {
        return stub<member_func_t<int32_t, agiTexLut, char*>>(0x538A80, this, arg1);
    }

    // 0x538B70 | ??0agiTexLut@@IAE@PAVagiPipeline@@@Z
    inline agiTexLut(class agiPipeline* arg1)
    {
        stub<member_func_t<void, agiTexLut, class agiPipeline*>>(0x538B70, this, arg1);
    }

    // 0x567350 | __purecall
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiTexLut>>(0x567350, this);
    }

    // 0x538B50 | ?GetName@agiTexLut@@UAEPADXZ
    inline char* GetName() override
    {
        return stub<member_func_t<char*, agiTexLut>>(0x538B50, this);
    }

    // 0x538BA0 | ??1agiTexLut@@MAE@XZ
    inline ~agiTexLut() override
    {
        stub<member_func_t<void, agiTexLut>>(0x538BA0, this);
    }

    // 0x567350 | __purecall
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiTexLut>>(0x567350, this);
    }
};

class agiTexDef : agiRefreshable
{
public:
    // agiTexDef::`vftable' @ 0x595B08

    // 0x538440 | ??0agiTexDef@@IAE@PAVagiPipeline@@@Z
    inline agiTexDef(class agiPipeline* arg1)
    {
        stub<member_func_t<void, agiTexDef, class agiPipeline*>>(0x538440, this, arg1);
    }

    // 0x538570 | ?CheckSurface@agiTexDef@@QAEXXZ
    inline void CheckSurface()
    {
        return stub<member_func_t<void, agiTexDef>>(0x538570, this);
    }

    // 0x538590 | ?Reload@agiTexDef@@QAEHXZ
    inline int32_t Reload()
    {
        return stub<member_func_t<int32_t, agiTexDef>>(0x538590, this);
    }

    // 0x538600 | ?Init@agiTexDef@@QAEHABVagiTexParameters@@@Z
    inline int32_t Init(class agiTexParameters const& arg1)
    {
        return stub<member_func_t<int32_t, agiTexDef, class agiTexParameters const&>>(0x538600, this, arg1);
    }

    // 0x5386E0 | ?PageOutCallback@agiTexDef@@SAXPAXH@Z
    static inline void PageOutCallback(void* arg1, int32_t arg2)
    {
        return stub<cdecl_t<void, void*, int32_t>>(0x5386E0, arg1, arg2);
    }

    // 0x5387D0 | ?DoPageIn@agiTexDef@@QAEXXZ
    inline void DoPageIn()
    {
        return stub<member_func_t<void, agiTexDef>>(0x5387D0, this);
    }

    // 0x538920 | ?PageInCallback@agiTexDef@@SAXPAX@Z
    static inline void PageInCallback(void* arg1)
    {
        return stub<cdecl_t<void, void*>>(0x538920, arg1);
    }

    // 0x538930 | ?PageInSurface@agiTexDef@@QAEXXZ
    inline void PageInSurface()
    {
        return stub<member_func_t<void, agiTexDef>>(0x538930, this);
    }

    // 0x5389F0 | ?LockSurfaceIfResident@agiTexDef@@QAEHXZ
    inline int32_t LockSurfaceIfResident()
    {
        return stub<member_func_t<int32_t, agiTexDef>>(0x5389F0, this);
    }

    // 0x538A20 | ?UnlockSurface@agiTexDef@@QAEXXZ
    inline void UnlockSurface()
    {
        return stub<member_func_t<void, agiTexDef>>(0x538A20, this);
    }

    // 0x538A40 | ?UnlockAndFreeSurface@agiTexDef@@QAEXXZ
    inline void UnlockAndFreeSurface()
    {
        return stub<member_func_t<void, agiTexDef>>(0x538A40, this);
    }

    // 0x567350 | __purecall
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiTexDef>>(0x567350, this);
    }

    // 0x538680 | ?GetName@agiTexDef@@UAEPADXZ
    inline char* GetName() override
    {
        return stub<member_func_t<char*, agiTexDef>>(0x538680, this);
    }

    // 0x5384B0 | ??1agiTexDef@@MAE@XZ
    inline ~agiTexDef() override
    {
        stub<member_func_t<void, agiTexDef>>(0x5384B0, this);
    }

    // 0x567350 | __purecall
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiTexDef>>(0x567350, this);
    }

    // 0x5386B0 | ?IsTexture@agiTexDef@@UAEHXZ
    inline int32_t IsTexture() override
    {
        return stub<member_func_t<int32_t, agiTexDef>>(0x5386B0, this);
    }

    // 0x538A70 | ?IsAvailable@agiTexDef@@UAEHXZ
    virtual inline int32_t IsAvailable()
    {
        return stub<member_func_t<int32_t, agiTexDef>>(0x538A70, this);
    }

    // 0x567350 | __purecall
    virtual inline void Set(class Vector2& arg1, class Vector2& arg2)
    {
        return stub<member_func_t<void, agiTexDef, class Vector2&, class Vector2&>>(0x567350, this, arg1, arg2);
    }

    // 0x5386C0 | ?Lock@agiTexDef@@UAEHAAUagiTexLock@@@Z
    virtual inline int32_t Lock(struct agiTexLock& arg1)
    {
        return stub<member_func_t<int32_t, agiTexDef, struct agiTexLock&>>(0x5386C0, this, arg1);
    }

    // 0x5386D0 | ?Unlock@agiTexDef@@UAEXAAUagiTexLock@@@Z
    virtual inline void Unlock(struct agiTexLock& arg1)
    {
        return stub<member_func_t<void, agiTexDef, struct agiTexLock&>>(0x5386D0, this, arg1);
    }

    // 0x538A60 | ?Request@agiTexDef@@UAEXXZ
    virtual inline void Request()
    {
        return stub<member_func_t<void, agiTexDef>>(0x538A60, this);
    }
};
