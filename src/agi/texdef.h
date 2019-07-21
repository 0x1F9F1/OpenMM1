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
    agi:texdef

    0x538380 | public: __thiscall agiTexParameters::agiTexParameters(void) | ??0agiTexParameters@@QAE@XZ
    0x5383A0 | public: void __thiscall agiTexParameters::Load(class Stream *) | ?Load@agiTexParameters@@QAEXPAVStream@@@Z
    0x5383F0 | public: void __thiscall agiTexParameters::Save(class Stream *) | ?Save@agiTexParameters@@QAEXPAVStream@@@Z
    0x538440 | protected: __thiscall agiTexDef::agiTexDef(class agiPipeline *) | ??0agiTexDef@@IAE@PAVagiPipeline@@@Z
    0x5384B0 | protected: virtual __thiscall agiTexDef::~agiTexDef(void) | ??1agiTexDef@@MAE@XZ
    0x538570 | public: void __thiscall agiTexDef::CheckSurface(void) | ?CheckSurface@agiTexDef@@QAEXXZ
    0x538590 | public: int __thiscall agiTexDef::Reload(void) | ?Reload@agiTexDef@@QAEHXZ
    0x538600 | public: int __thiscall agiTexDef::Init(class agiTexParameters const &) | ?Init@agiTexDef@@QAEHABVagiTexParameters@@@Z
    0x538680 | public: virtual char * __thiscall agiTexDef::GetName(void) | ?GetName@agiTexDef@@UAEPADXZ
    0x5386B0 | public: virtual int __thiscall agiTexDef::IsTexture(void) | ?IsTexture@agiTexDef@@UAEHXZ
    0x5386C0 | public: virtual int __thiscall agiTexDef::Lock(struct agiTexLock &) | ?Lock@agiTexDef@@UAEHAAUagiTexLock@@@Z
    0x5386D0 | public: virtual void __thiscall agiTexDef::Unlock(struct agiTexLock &) | ?Unlock@agiTexDef@@UAEXAAUagiTexLock@@@Z
    0x5386E0 | public: static void __cdecl agiTexDef::PageOutCallback(void *,int) | ?PageOutCallback@agiTexDef@@SAXPAXH@Z
    0x538720 | void __cdecl UpdateLutQueue(void) | ?UpdateLutQueue@@YAXXZ
    0x5387B0 | void __cdecl ShutdownLutQueue(void) | ?ShutdownLutQueue@@YAXXZ
    0x5387D0 | public: void __thiscall agiTexDef::DoPageIn(void) | ?DoPageIn@agiTexDef@@QAEXXZ
    0x538920 | public: static void __cdecl agiTexDef::PageInCallback(void *) | ?PageInCallback@agiTexDef@@SAXPAX@Z
    0x538930 | public: void __thiscall agiTexDef::PageInSurface(void) | ?PageInSurface@agiTexDef@@QAEXXZ
    0x5389F0 | public: int __thiscall agiTexDef::LockSurfaceIfResident(void) | ?LockSurfaceIfResident@agiTexDef@@QAEHXZ
    0x538A20 | public: void __thiscall agiTexDef::UnlockSurface(void) | ?UnlockSurface@agiTexDef@@QAEXXZ
    0x538A40 | public: void __thiscall agiTexDef::UnlockAndFreeSurface(void) | ?UnlockAndFreeSurface@agiTexDef@@QAEXXZ
    0x538A60 | public: virtual void __thiscall agiTexDef::Request(void) | ?Request@agiTexDef@@UAEXXZ
    0x538A70 | public: virtual int __thiscall agiTexDef::IsAvailable(void) | ?IsAvailable@agiTexDef@@UAEHXZ
    0x538A80 | public: int __thiscall agiTexLut::Init(char *) | ?Init@agiTexLut@@QAEHPAD@Z
    0x538B50 | public: virtual char * __thiscall agiTexLut::GetName(void) | ?GetName@agiTexLut@@UAEPADXZ
    0x538B70 | protected: __thiscall agiTexLut::agiTexLut(class agiPipeline *) | ??0agiTexLut@@IAE@PAVagiPipeline@@@Z
    0x538BA0 | protected: virtual __thiscall agiTexLut::~agiTexLut(void) | ??1agiTexLut@@MAE@XZ
    0x538BF0 | protected: virtual void * __thiscall agiTexDef::`vector deleting destructor'(unsigned int) | ??_EagiTexDef@@MAEPAXI@Z
    0x538BF0 | protected: virtual void * __thiscall agiTexDef::`scalar deleting destructor'(unsigned int) | ??_GagiTexDef@@MAEPAXI@Z
    0x538C20 | protected: virtual void * __thiscall agiTexLut::`scalar deleting destructor'(unsigned int) | ??_GagiTexLut@@MAEPAXI@Z
    0x538C20 | protected: virtual void * __thiscall agiTexLut::`vector deleting destructor'(unsigned int) | ??_EagiTexLut@@MAEPAXI@Z
    0x595B08 | const agiTexDef::`vftable' | ??_7agiTexDef@@6B@
    0x595B38 | const agiTexLut::`vftable' | ??_7agiTexLut@@6B@
    0x5C2E64 | int MaxTexSize | ?MaxTexSize@@3HA
    0x5C2E68 | char * TexSearchPath | ?TexSearchPath@@3PADA
    0x702218 | int PackShift | ?PackShift@@3HA
    0x70221C | int TexBytesPaged | ?TexBytesPaged@@3HA
    0x702260 | struct lutQentry * lutQ | ?lutQ@@3PAUlutQentry@@A
    0x702460 | class HashTable TexLutHash | ?TexLutHash@@3VHashTable@@A
    0x702478 | class DataCache TEXCACHE | ?TEXCACHE@@3VDataCache@@A
    0x7024B8 | int TexsPaged | ?TexsPaged@@3HA
*/

#include "data7/cstr.h"
#include "data7/pager.h"
#include "refresh.h"

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
    char m_Name[32];

    // agiTexParameters
    // 0x1 | Alpha
    // 0x2 | Wrap X/U/S
    // 0x4 | Wrap Y/V/T
    // 0x40 | Color Key Enable
    // 0x80 | Second
    uint8_t m_Flags;
    uint8_t m_LOD;
    uint8_t m_MaxLOD;
    uint32_t m_Flags1;
    uint32_t m_dword28;
    uint32_t m_dword2C;

    // 0x538380 | ??0agiTexParameters@@QAE@XZ
    agiTexParameters();

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

    const char* GetKey() const
    {
        return m_Name;
    }
};

check_size(agiTexParameters, 0x30);

class agiTexLut : public agiRefreshable
{
public:
    uint32_t m_Palette[256] {};
    cstring_t m_Name {};

    // agiTexLut::`vftable' @ 0x595B38

    // 0x538A80 | ?Init@agiTexLut@@QAEHPAD@Z
    inline int32_t Init(char* arg1)
    {
        return stub<member_func_t<int32_t, agiTexLut, char*>>(0x538A80, this, arg1);
    }

    // 0x538B70 | ??0agiTexLut@@IAE@PAVagiPipeline@@@Z
    agiTexLut(class agiPipeline* pipe);

    // 0x538B50 | ?GetName@agiTexLut@@UAEPADXZ
    inline char* GetName() override
    {
        return stub<member_func_t<char*, agiTexLut>>(0x538B50, this);
    }

    // 0x538BA0 | ??1agiTexLut@@MAE@XZ
    ~agiTexLut() override = default;
};

check_size(agiTexLut, 0x41C);

class agiSurfaceDesc;
class agiPolySet;

class agiTexDef : public agiRefreshable
{
public:
    agiSurfaceDesc* m_pTextureData {nullptr};
    agiTexParameters m_Params {};
    agiPolySet* m_pPolySet {nullptr};
    uint32_t m_dword50 {0};
    uint32_t m_dword54 {0};
    uint32_t m_dword58 {0};
    PagerInfo_t m_PagerInfo {};
    uint32_t m_CacheHandle {0};
    uint32_t m_State2 {0};

    // agiTexDef::`vftable' @ 0x595B08

    // 0x538440 | ??0agiTexDef@@IAE@PAVagiPipeline@@@Z
    agiTexDef(class agiPipeline* pipe);

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

    // 0x538680 | ?GetName@agiTexDef@@UAEPADXZ
    inline char* GetName() override
    {
        return stub<member_func_t<char*, agiTexDef>>(0x538680, this);
    }

    // 0x5384B0 | ??1agiTexDef@@MAE@XZ
    ~agiTexDef() override;

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
    virtual inline void Set(class Vector2& arg1, class Vector2& arg2) = 0;

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
