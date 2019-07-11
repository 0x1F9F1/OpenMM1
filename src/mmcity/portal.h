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

// mmcity:portal

#include "hooking.h"

// 0x48CB40 | ?LookupCell@@YAPAUasPortalCell@@PAD@Z
inline struct asPortalCell* LookupCell(char* arg1)
{
    return stub<cdecl_t<struct asPortalCell*, char*>>(0x48CB40, arg1);
}

// 0x48CB50 | ?LookupEdge@@YAPAUasPortalCell@@PAD@Z
inline struct asPortalCell* LookupEdge(char* arg1)
{
    return stub<cdecl_t<struct asPortalCell*, char*>>(0x48CB50, arg1);
}

// 0x667AE8 | ?asPortalWebMetaClass@@3VMetaClass@@A
inline extern_var(0x667AE8, class MetaClass, asPortalWebMetaClass);

// 0x48E050 | ?delete_asPortalWeb@@YAXPAXH@Z
inline void delete_asPortalWeb(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x48E050, arg1, arg2);
}

struct asPortalPVS
{
public:
    // 0x48CB60 | ?Init@asPortalPVS@@QAEXHH@Z
    inline void Init(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, asPortalPVS, int32_t, int32_t>>(0x48CB60, this, arg1, arg2);
    }

    // 0x48CBC0 | ?Create@asPortalPVS@@SAPAU1@HZZ
    // Skipped (Variable Arguments)

    // 0x48CC40 | ?SetVisible@asPortalPVS@@QAEXI@Z
    inline void SetVisible(uint32_t arg1)
    {
        return stub<member_func_t<void, asPortalPVS, uint32_t>>(0x48CC40, this, arg1);
    }
};

struct asPortalEdge
{
public:
    // 0x48E0E0 | ??0asPortalEdge@@QAE@PAUasPortalCell@@0H@Z
    inline asPortalEdge(struct asPortalCell* arg1, struct asPortalCell* arg2, int32_t arg3)
    {
        stub<member_func_t<void, asPortalEdge, struct asPortalCell*, struct asPortalCell*, int32_t>>(
            0x48E0E0, this, arg1, arg2, arg3);
    }
};

struct asPortalWeb : asNode
{
public:
    // asPortalWeb::`vftable' @ 0x592188

    // 0x48C970 | ?AddCell@asPortalWeb@@QAEPAUasPortalCell@@PADPAVasPortalRenderable@@I@Z
    inline struct asPortalCell* AddCell(char* arg1, class asPortalRenderable* arg2, uint32_t arg3)
    {
        return stub<member_func_t<struct asPortalCell*, asPortalWeb, char*, class asPortalRenderable*, uint32_t>>(
            0x48C970, this, arg1, arg2, arg3);
    }

    // 0x48C9C0 | ?DeleteCell@asPortalWeb@@QAEXPAUasPortalCell@@@Z
    inline void DeleteCell(struct asPortalCell* arg1)
    {
        return stub<member_func_t<void, asPortalWeb, struct asPortalCell*>>(0x48C9C0, this, arg1);
    }

    // 0x48CA70 | ?AddEdge@asPortalWeb@@QAEPAUasPortalEdge@@PADPAUasPortalCell@@1H@Z
    inline struct asPortalEdge* AddEdge(char* arg1, struct asPortalCell* arg2, struct asPortalCell* arg3, int32_t arg4)
    {
        return stub<member_func_t<struct asPortalEdge*, asPortalWeb, char*, struct asPortalCell*, struct asPortalCell*,
            int32_t>>(0x48CA70, this, arg1, arg2, arg3, arg4);
    }

    // 0x48CB30 | ?DeleteEdge@asPortalWeb@@QAEXPAUasPortalEdge@@@Z
    inline void DeleteEdge(struct asPortalEdge* arg1)
    {
        return stub<member_func_t<void, asPortalWeb, struct asPortalEdge*>>(0x48CB30, this, arg1);
    }

    // 0x48CC70 | ??0asPortalWeb@@QAE@XZ
    inline asPortalWeb()
    {
        stub<member_func_t<void, asPortalWeb>>(0x48CC70, this);
    }

    // 0x48D7A0 | ?BuildGroups@asPortalWeb@@QAEXXZ
    inline void BuildGroups()
    {
        return stub<member_func_t<void, asPortalWeb>>(0x48D7A0, this);
    }

    // 0x48DD90 | ?Cull@asPortalWeb@@QAEXH@Z
    inline void Cull(int32_t arg1)
    {
        return stub<member_func_t<void, asPortalWeb, int32_t>>(0x48DD90, this, arg1);
    }

    // 0x48E000 | ?DeclareFields@asPortalWeb@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x48E000);
    }

    // 0x667AE0 | ?VisitTag@asPortalWeb@@2GA
    static inline extern_var(0x667AE0, uint16_t, VisitTag);

    // 0x48DF90 | ??1asPortalWeb@@UAE@XZ
    inline ~asPortalWeb() override
    {
        stub<member_func_t<void, asPortalWeb>>(0x48DF90, this);
    }

    // 0x48E0A0 | ?GetClass@asPortalWeb@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asPortalWeb>>(0x48E0A0, this);
    }

    // 0x48CCA0 | ?Update@asPortalWeb@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asPortalWeb>>(0x48CCA0, this);
    }

    // 0x567350 | __purecall
    virtual inline struct asPortalCell* GetStartCell(
        class Vector3& arg1, struct asPortalCell* arg2, class mmPolygon** arg3)
    {
        return stub<
            member_func_t<struct asPortalCell*, asPortalWeb, class Vector3&, struct asPortalCell*, class mmPolygon**>>(
            0x567350, this, arg1, arg2, arg3);
    }
};
