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
    agiworld:texsort

    0x4F3DA0 | public: __thiscall agiTexSorter::agiTexSorter(void) | ??0agiTexSorter@@QAE@XZ
    0x4F3FC0 | public: __thiscall agiTexSorter::~agiTexSorter(void) | ??1agiTexSorter@@QAE@XZ
    0x4F3FD0 | public: static class agiPolySet * __cdecl agiTexSorter::GetEnv(class agiTexDef *,int,int) | ?GetEnv@agiTexSorter@@SAPAVagiPolySet@@PAVagiTexDef@@HH@Z
    0x4F4090 | public: static class agiPolySet * __cdecl agiTexSorter::BeginVerts(class agiTexDef *,int,int) | ?BeginVerts@agiTexSorter@@SAPAVagiPolySet@@PAVagiTexDef@@HH@Z
    0x4F42E0 | public: static class agiPolySet * __cdecl agiTexSorter::BeginVerts2(class agiTexDef *,class agiTexDef *,int,int) | ?BeginVerts2@agiTexSorter@@SAPAVagiPolySet@@PAVagiTexDef@@0HH@Z
    0x4F4560 | public: static void __cdecl agiTexSorter::EndVerts(void) | ?EndVerts@agiTexSorter@@SAXXZ
    0x4F45B0 | public: static void __cdecl agiTexSorter::EndVerts2(void) | ?EndVerts2@agiTexSorter@@SAXXZ
    0x4F4600 | public: void __thiscall agiTexSorter::Cull(int) | ?Cull@agiTexSorter@@QAEXH@Z
    0x4F46C0 | public: static void __cdecl agiTexSorter::DoTexture(class agiPolySet *) | ?DoTexture@agiTexSorter@@SAXPAVagiPolySet@@@Z
    0x4F4920 | class agiTexDef * __cdecl GetPackedTexture(char *,int) | ?GetPackedTexture@@YAPAVagiTexDef@@PADH@Z
    0x5B7D78 | public: static int agiTexSorter::MaxOpaqueSetCount | ?MaxOpaqueSetCount@agiTexSorter@@2HA
    0x5B7D7C | public: static int agiTexSorter::MaxAlphaSetCount | ?MaxAlphaSetCount@agiTexSorter@@2HA
    0x5B7D80 | public: static int agiTexSorter::MaxVertsPerSet | ?MaxVertsPerSet@agiTexSorter@@2HA
    0x5B7D84 | public: static int agiTexSorter::MaxIndicesPerSet | ?MaxIndicesPerSet@agiTexSorter@@2HA
    0x5B7D88 | int EnableTexSorting | ?EnableTexSorting@@3HA
    0x5B7D8C | public: static int agiTexSorter::InitialZMode | ?InitialZMode@agiTexSorter@@2HA
    0x67B8E8 | public: static int agiTexSorter::GeometryCalls | ?GeometryCalls@agiTexSorter@@2HA
    0x67B8EC | private: static class agiTexSorter * agiTexSorter::Instance | ?Instance@agiTexSorter@@0PAV1@A
    0x67B8F0 | char * TextureSuffix | ?TextureSuffix@@3PADA
    0x67B8F4 | int EnvMapFlushes | ?EnvMapFlushes@@3HA
    0x67B8F8 | public: static class agiPolySet * * agiTexSorter::OpaquePolySets | ?OpaquePolySets@agiTexSorter@@2PAPAVagiPolySet@@A
    0x67B9F8 | public: static int agiTexSorter::OutOfPoolFlushes | ?OutOfPoolFlushes@agiTexSorter@@2HA
    0x67B9FC | public: static int agiTexSorter::BigPoolFlushes | ?BigPoolFlushes@agiTexSorter@@2HA
    0x67BA00 | public: static int agiPolySet::TriCount | ?TriCount@agiPolySet@@2HA
    0x67BA04 | public: static int agiTexSorter::OverflowFlushes | ?OverflowFlushes@agiTexSorter@@2HA
    0x67BA0C | public: static int agiTexSorter::OpaqueSetCount | ?OpaqueSetCount@agiTexSorter@@2HA
    0x67BA18 | public: static class agiPolySet agiTexSorter::EnvPolySet | ?EnvPolySet@agiTexSorter@@2VagiPolySet@@A
    0x67BA44 | public: static int agiTexSorter::TotalTris | ?TotalTris@agiTexSorter@@2HA
    0x67BA48 | public: static int agiTexSorter::AlphaSetCount | ?AlphaSetCount@agiTexSorter@@2HA
    0x67BA50 | public: static class agiPolySet * * agiTexSorter::AlphaPolySets | ?AlphaPolySets@agiTexSorter@@2PAPAVagiPolySet@@A
    0x67BB00 | int DisableFogOnAlphaGlow | ?DisableFogOnAlphaGlow@@3HA
*/

#include "hooking.h"

// 0x4F4920 | ?GetPackedTexture@@YAPAVagiTexDef@@PADH@Z
inline class agiTexDef* GetPackedTexture(char* arg1, int32_t arg2)
{
    return stub<cdecl_t<class agiTexDef*, char*, int32_t>>(0x4F4920, arg1, arg2);
}

// 0x5B7D88 | ?EnableTexSorting@@3HA
inline extern_var(0x5B7D88, int32_t, EnableTexSorting);

// 0x67B8F0 | ?TextureSuffix@@3PADA
inline extern_var(0x67B8F0, char*, TextureSuffix);

// 0x67B8F4 | ?EnvMapFlushes@@3HA
inline extern_var(0x67B8F4, int32_t, EnvMapFlushes);

// 0x67BB00 | ?DisableFogOnAlphaGlow@@3HA
inline extern_var(0x67BB00, int32_t, DisableFogOnAlphaGlow);

class agiPolySet
{
public:
    // 0x67BA00 | ?TriCount@agiPolySet@@2HA
    static inline extern_var(0x67BA00, int32_t, TriCount);

    // 0x500540 | ?Triangle@agiPolySet@@QAEXHHH@Z
    inline void Triangle(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, agiPolySet, int32_t, int32_t, int32_t>>(0x500540, this, arg1, arg2, arg3);
    }
};

class agiTexSorter
{
public:
    // 0x4F3DA0 | ??0agiTexSorter@@QAE@XZ
    inline agiTexSorter()
    {
        stub<member_func_t<void, agiTexSorter>>(0x4F3DA0, this);
    }

    // 0x4F3FC0 | ??1agiTexSorter@@QAE@XZ
    inline ~agiTexSorter()
    {
        stub<member_func_t<void, agiTexSorter>>(0x4F3FC0, this);
    }

    // 0x4F3FD0 | ?GetEnv@agiTexSorter@@SAPAVagiPolySet@@PAVagiTexDef@@HH@Z
    static inline class agiPolySet* GetEnv(class agiTexDef* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<cdecl_t<class agiPolySet*, class agiTexDef*, int32_t, int32_t>>(0x4F3FD0, arg1, arg2, arg3);
    }

    // 0x4F4090 | ?BeginVerts@agiTexSorter@@SAPAVagiPolySet@@PAVagiTexDef@@HH@Z
    static inline class agiPolySet* BeginVerts(class agiTexDef* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<cdecl_t<class agiPolySet*, class agiTexDef*, int32_t, int32_t>>(0x4F4090, arg1, arg2, arg3);
    }

    // 0x4F42E0 | ?BeginVerts2@agiTexSorter@@SAPAVagiPolySet@@PAVagiTexDef@@0HH@Z
    static inline class agiPolySet* BeginVerts2(
        class agiTexDef* arg1, class agiTexDef* arg2, int32_t arg3, int32_t arg4)
    {
        return stub<cdecl_t<class agiPolySet*, class agiTexDef*, class agiTexDef*, int32_t, int32_t>>(
            0x4F42E0, arg1, arg2, arg3, arg4);
    }

    // 0x4F4560 | ?EndVerts@agiTexSorter@@SAXXZ
    static inline void EndVerts()
    {
        return stub<cdecl_t<void>>(0x4F4560);
    }

    // 0x4F45B0 | ?EndVerts2@agiTexSorter@@SAXXZ
    static inline void EndVerts2()
    {
        return stub<cdecl_t<void>>(0x4F45B0);
    }

    // 0x4F4600 | ?Cull@agiTexSorter@@QAEXH@Z
    inline void Cull(int32_t arg1)
    {
        return stub<member_func_t<void, agiTexSorter, int32_t>>(0x4F4600, this, arg1);
    }

    // 0x4F46C0 | ?DoTexture@agiTexSorter@@SAXPAVagiPolySet@@@Z
    static inline void DoTexture(class agiPolySet* arg1)
    {
        return stub<cdecl_t<void, class agiPolySet*>>(0x4F46C0, arg1);
    }

    // 0x5B7D78 | ?MaxOpaqueSetCount@agiTexSorter@@2HA
    static inline extern_var(0x5B7D78, int32_t, MaxOpaqueSetCount);

    // 0x5B7D7C | ?MaxAlphaSetCount@agiTexSorter@@2HA
    static inline extern_var(0x5B7D7C, int32_t, MaxAlphaSetCount);

    // 0x5B7D80 | ?MaxVertsPerSet@agiTexSorter@@2HA
    static inline extern_var(0x5B7D80, int32_t, MaxVertsPerSet);

    // 0x5B7D84 | ?MaxIndicesPerSet@agiTexSorter@@2HA
    static inline extern_var(0x5B7D84, int32_t, MaxIndicesPerSet);

    // 0x5B7D8C | ?InitialZMode@agiTexSorter@@2HA
    static inline extern_var(0x5B7D8C, int32_t, InitialZMode);

    // 0x67B8E8 | ?GeometryCalls@agiTexSorter@@2HA
    static inline extern_var(0x67B8E8, int32_t, GeometryCalls);

    // 0x67B8EC | ?Instance@agiTexSorter@@0PAV1@A
    static inline extern_var(0x67B8EC, class agiTexSorter*, Instance);

    // 0x67B8F8 | ?OpaquePolySets@agiTexSorter@@2PAPAVagiPolySet@@A
    static inline extern_var(0x67B8F8, class agiPolySet**, OpaquePolySets);

    // 0x67B9F8 | ?OutOfPoolFlushes@agiTexSorter@@2HA
    static inline extern_var(0x67B9F8, int32_t, OutOfPoolFlushes);

    // 0x67B9FC | ?BigPoolFlushes@agiTexSorter@@2HA
    static inline extern_var(0x67B9FC, int32_t, BigPoolFlushes);

    // 0x67BA04 | ?OverflowFlushes@agiTexSorter@@2HA
    static inline extern_var(0x67BA04, int32_t, OverflowFlushes);

    // 0x67BA0C | ?OpaqueSetCount@agiTexSorter@@2HA
    static inline extern_var(0x67BA0C, int32_t, OpaqueSetCount);

    // 0x67BA18 | ?EnvPolySet@agiTexSorter@@2VagiPolySet@@A
    static inline extern_var(0x67BA18, class agiPolySet, EnvPolySet);

    // 0x67BA44 | ?TotalTris@agiTexSorter@@2HA
    static inline extern_var(0x67BA44, int32_t, TotalTris);

    // 0x67BA48 | ?AlphaSetCount@agiTexSorter@@2HA
    static inline extern_var(0x67BA48, int32_t, AlphaSetCount);

    // 0x67BA50 | ?AlphaPolySets@agiTexSorter@@2PAPAVagiPolySet@@A
    static inline extern_var(0x67BA50, class agiPolySet**, AlphaPolySets);
};
