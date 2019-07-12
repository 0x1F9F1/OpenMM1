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
    mmcity:portal

    0x48C970 | public: struct asPortalCell * __thiscall asPortalWeb::AddCell(char *,class asPortalRenderable *,unsigned int) | ?AddCell@asPortalWeb@@QAEPAUasPortalCell@@PADPAVasPortalRenderable@@I@Z
    0x48C9C0 | public: void __thiscall asPortalWeb::DeleteCell(struct asPortalCell *) | ?DeleteCell@asPortalWeb@@QAEXPAUasPortalCell@@@Z
    0x48CA70 | public: struct asPortalEdge * __thiscall asPortalWeb::AddEdge(char *,struct asPortalCell *,struct asPortalCell *,int) | ?AddEdge@asPortalWeb@@QAEPAUasPortalEdge@@PADPAUasPortalCell@@1H@Z
    0x48CB30 | public: void __thiscall asPortalWeb::DeleteEdge(struct asPortalEdge *) | ?DeleteEdge@asPortalWeb@@QAEXPAUasPortalEdge@@@Z
    0x48CB40 | struct asPortalCell * __cdecl LookupCell(char *) | ?LookupCell@@YAPAUasPortalCell@@PAD@Z
    0x48CB50 | struct asPortalCell * __cdecl LookupEdge(char *) | ?LookupEdge@@YAPAUasPortalCell@@PAD@Z
    0x48CB60 | public: void __thiscall asPortalPVS::Init(int,int) | ?Init@asPortalPVS@@QAEXHH@Z
    0x48CBC0 | public: static struct asPortalPVS * __cdecl asPortalPVS::Create(int,...) | ?Create@asPortalPVS@@SAPAU1@HZZ
    0x48CC40 | public: void __thiscall asPortalPVS::SetVisible(unsigned int) | ?SetVisible@asPortalPVS@@QAEXI@Z
    0x48CC70 | public: __thiscall asPortalWeb::asPortalWeb(void) | ??0asPortalWeb@@QAE@XZ
    0x48CCA0 | public: virtual void __thiscall asPortalWeb::Update(void) | ?Update@asPortalWeb@@UAEXXZ
    0x48D7A0 | public: void __thiscall asPortalWeb::BuildGroups(void) | ?BuildGroups@asPortalWeb@@QAEXXZ
    0x48DD90 | public: void __thiscall asPortalWeb::Cull(int) | ?Cull@asPortalWeb@@QAEXH@Z
    0x48DF90 | public: virtual __thiscall asPortalWeb::~asPortalWeb(void) | ??1asPortalWeb@@UAE@XZ
    0x48E000 | public: static void __cdecl asPortalWeb::DeclareFields(void) | ?DeclareFields@asPortalWeb@@SAXXZ
    0x48E0A0 | public: virtual class MetaClass * __thiscall asPortalWeb::GetClass(void) | ?GetClass@asPortalWeb@@UAEPAVMetaClass@@XZ
    0x48E0B0 | public: virtual void * __thiscall asPortalWeb::`scalar deleting destructor'(unsigned int) | ??_GasPortalWeb@@UAEPAXI@Z
    0x48E0B0 | public: virtual void * __thiscall asPortalWeb::`vector deleting destructor'(unsigned int) | ??_EasPortalWeb@@UAEPAXI@Z
    0x48E0E0 | public: __thiscall asPortalEdge::asPortalEdge(struct asPortalCell *,struct asPortalCell *,int) | ??0asPortalEdge@@QAE@PAUasPortalCell@@0H@Z
    0x592188 | const asPortalWeb::`vftable' | ??_7asPortalWeb@@6B@
    0x667AE0 | public: static unsigned short asPortalWeb::VisitTag | ?VisitTag@asPortalWeb@@2GA
    0x667AE8 | class MetaClass asPortalWebMetaClass | ?asPortalWebMetaClass@@3VMetaClass@@A
    0x48E050 | void __cdecl delete_asPortalWeb(void *,int) | ?delete_asPortalWeb@@YAXPAXH@Z
*/

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
        // stub<member_func_t<void, asPortalWeb>>(0x48CC70, this);

        unimplemented();
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
    inline ~asPortalWeb() override = 0
    {
        // stub<member_func_t<void, asPortalWeb>>(0x48DF90, this);

        unimplemented();
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
        class Vector3& arg1, struct asPortalCell* arg2, class mmPolygon** arg3) = 0;
};
