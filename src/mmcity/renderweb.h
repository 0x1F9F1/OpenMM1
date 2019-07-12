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
    mmcity:renderweb

    0x486550 | public: __thiscall asRenderWeb::asRenderWeb(void) | ??0asRenderWeb@@QAE@XZ
    0x4865D0 | public: virtual __thiscall asRenderWeb::~asRenderWeb(void) | ??1asRenderWeb@@UAE@XZ
    0x486660 | public: virtual struct asPortalCell * __thiscall asRenderWeb::GetStartCell(class Vector3 &,struct asPortalCell *,class mmPolygon * *) | ?GetStartCell@asRenderWeb@@UAEPAUasPortalCell@@AAVVector3@@PAU2@PAPAVmmPolygon@@@Z
    0x486880 | public: int __thiscall asRenderWeb::Load(char *,int) | ?Load@asRenderWeb@@QAEHPADH@Z
    0x487560 | public: virtual void __thiscall asRenderWeb::Update(void) | ?Update@asRenderWeb@@UAEXXZ
    0x4875F0 | public: void __thiscall asRenderWeb::UpdateMirror(void) | ?UpdateMirror@asRenderWeb@@QAEXXZ
    0x487700 | public: void __thiscall asRenderWeb::SetMirrorPos(float,float,float,float,float) | ?SetMirrorPos@asRenderWeb@@QAEXMMMMM@Z
    0x4877D0 | void __cdecl DrawMirrorBorder(void) | ?DrawMirrorBorder@@YAXXZ
    0x487880 | public: virtual void __thiscall asRenderWeb::Cull(void) | ?Cull@asRenderWeb@@UAEXXZ
    0x487C80 | public: int __thiscall asRenderWeb::GetCellNeighbors(int,struct asPortalCell * *,int) | ?GetCellNeighbors@asRenderWeb@@QAEHHPAPAUasPortalCell@@H@Z
    0x487CF0 | public: static void __cdecl asRenderWeb::DeclareFields(void) | ?DeclareFields@asRenderWeb@@SAXXZ
    0x487E70 | public: virtual class MetaClass * __thiscall asRenderWeb::GetClass(void) | ?GetClass@asRenderWeb@@UAEPAVMetaClass@@XZ
    0x487E80 | public: virtual void * __thiscall asRenderWeb::`vector deleting destructor'(unsigned int) | ??_EasRenderWeb@@UAEPAXI@Z
    0x591E58 | const asRenderWeb::`vftable' | ??_7asRenderWeb@@6B@
    0x5ADC00 | int ZREAD | ?ZREAD@@3HA
    0x5ADC04 | int ZWRITE | ?ZWRITE@@3HA
    0x5ADC08 | int MULTIPASS | ?MULTIPASS@@3HA
    0x5ADC0C | float ScreenClearY | ?ScreenClearY@@3MA
    0x5ADC10 | int EnableSubClip | ?EnableSubClip@@3HA
    0x5ADC14 | float ShadowZBias | ?ShadowZBias@@3MA
    0x64F7C0 | int CachedFullSegmentTests | ?CachedFullSegmentTests@@3HA
    0x64F7C4 | int StartCellCollides | ?StartCellCollides@@3HA
    0x64F7D4 | public: static float asRenderWeb::InvLodFactor | ?InvLodFactor@asRenderWeb@@2MA
    0x64F7D8 | int EnableCachedPoly | ?EnableCachedPoly@@3HA
    0x64F7DC | int CachedFullSegmentHits | ?CachedFullSegmentHits@@3HA
    0x64F7E0 | int SC_SVP | ?SC_SVP@@3HA
    0x64F7E4 | public: static int asRenderWeb::PassMask | ?PassMask@asRenderWeb@@2HA
    0x64F7E8 | class Matrix34 * GridMtx | ?GridMtx@@3PAVMatrix34@@A
    0x64F7F8 | int SC_SVCP | ?SC_SVCP@@3HA
    0x64F800 | class MetaClass asRenderWebMetaClass | ?asRenderWebMetaClass@@3VMetaClass@@A
    0x64F828 | int PopupEnabled | ?PopupEnabled@@3HA
    0x64F82C | int Front2Back | ?Front2Back@@3HA
    0x487D40 | void * __cdecl new_asRenderWeb(int) | ?new_asRenderWeb@@YAPAXH@Z
    0x487E20 | void __cdecl delete_asRenderWeb(void *,int) | ?delete_asRenderWeb@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x4877D0 | ?DrawMirrorBorder@@YAXXZ
inline void DrawMirrorBorder()
{
    return stub<cdecl_t<void>>(0x4877D0);
}

// 0x5ADC00 | ?ZREAD@@3HA
inline extern_var(0x5ADC00, int32_t, ZREAD);

// 0x5ADC04 | ?ZWRITE@@3HA
inline extern_var(0x5ADC04, int32_t, ZWRITE);

// 0x5ADC08 | ?MULTIPASS@@3HA
inline extern_var(0x5ADC08, int32_t, MULTIPASS);

// 0x5ADC0C | ?ScreenClearY@@3MA
inline extern_var(0x5ADC0C, float, ScreenClearY);

// 0x5ADC10 | ?EnableSubClip@@3HA
inline extern_var(0x5ADC10, int32_t, EnableSubClip);

// 0x5ADC14 | ?ShadowZBias@@3MA
inline extern_var(0x5ADC14, float, ShadowZBias);

// 0x64F7C0 | ?CachedFullSegmentTests@@3HA
inline extern_var(0x64F7C0, int32_t, CachedFullSegmentTests);

// 0x64F7C4 | ?StartCellCollides@@3HA
inline extern_var(0x64F7C4, int32_t, StartCellCollides);

// 0x64F7D8 | ?EnableCachedPoly@@3HA
inline extern_var(0x64F7D8, int32_t, EnableCachedPoly);

// 0x64F7DC | ?CachedFullSegmentHits@@3HA
inline extern_var(0x64F7DC, int32_t, CachedFullSegmentHits);

// 0x64F7E0 | ?SC_SVP@@3HA
inline extern_var(0x64F7E0, int32_t, SC_SVP);

// 0x64F7E8 | ?GridMtx@@3PAVMatrix34@@A
inline extern_var(0x64F7E8, class Matrix34*, GridMtx);

// 0x64F7F8 | ?SC_SVCP@@3HA
inline extern_var(0x64F7F8, int32_t, SC_SVCP);

// 0x64F800 | ?asRenderWebMetaClass@@3VMetaClass@@A
inline extern_var(0x64F800, class MetaClass, asRenderWebMetaClass);

// 0x64F828 | ?PopupEnabled@@3HA
inline extern_var(0x64F828, int32_t, PopupEnabled);

// 0x64F82C | ?Front2Back@@3HA
inline extern_var(0x64F82C, int32_t, Front2Back);

// 0x487D40 | ?new_asRenderWeb@@YAPAXH@Z
inline void* new_asRenderWeb(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x487D40, arg1);
}

// 0x487E20 | ?delete_asRenderWeb@@YAXPAXH@Z
inline void delete_asRenderWeb(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x487E20, arg1, arg2);
}

struct asRenderWeb : asPortalWeb
{
public:
    // asRenderWeb::`vftable' @ 0x591E58

    // 0x486550 | ??0asRenderWeb@@QAE@XZ
    inline asRenderWeb()
    {
        // stub<member_func_t<void, asRenderWeb>>(0x486550, this);

        unimplemented();
    }

    // 0x486880 | ?Load@asRenderWeb@@QAEHPADH@Z
    inline int32_t Load(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, asRenderWeb, char*, int32_t>>(0x486880, this, arg1, arg2);
    }

    // 0x4875F0 | ?UpdateMirror@asRenderWeb@@QAEXXZ
    inline void UpdateMirror()
    {
        return stub<member_func_t<void, asRenderWeb>>(0x4875F0, this);
    }

    // 0x487700 | ?SetMirrorPos@asRenderWeb@@QAEXMMMMM@Z
    inline void SetMirrorPos(float arg1, float arg2, float arg3, float arg4, float arg5)
    {
        return stub<member_func_t<void, asRenderWeb, float, float, float, float, float>>(
            0x487700, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x487C80 | ?GetCellNeighbors@asRenderWeb@@QAEHHPAPAUasPortalCell@@H@Z
    inline int32_t GetCellNeighbors(int32_t arg1, struct asPortalCell** arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, asRenderWeb, int32_t, struct asPortalCell**, int32_t>>(
            0x487C80, this, arg1, arg2, arg3);
    }

    // 0x487CF0 | ?DeclareFields@asRenderWeb@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x487CF0);
    }

    // 0x64F7D4 | ?InvLodFactor@asRenderWeb@@2MA
    static inline extern_var(0x64F7D4, float, InvLodFactor);

    // 0x64F7E4 | ?PassMask@asRenderWeb@@2HA
    static inline extern_var(0x64F7E4, int32_t, PassMask);

    // 0x4865D0 | ??1asRenderWeb@@UAE@XZ
    inline ~asRenderWeb() override = 0
    {
        // stub<member_func_t<void, asRenderWeb>>(0x4865D0, this);

        unimplemented();
    }

    // 0x487E70 | ?GetClass@asRenderWeb@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asRenderWeb>>(0x487E70, this);
    }

    // 0x487880 | ?Cull@asRenderWeb@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, asRenderWeb>>(0x487880, this);
    }

    // 0x487560 | ?Update@asRenderWeb@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asRenderWeb>>(0x487560, this);
    }

    // 0x486660 | ?GetStartCell@asRenderWeb@@UAEPAUasPortalCell@@AAVVector3@@PAU2@PAPAVmmPolygon@@@Z
    inline struct asPortalCell* GetStartCell(
        class Vector3& arg1, struct asPortalCell* arg2, class mmPolygon** arg3) override
    {
        return stub<
            member_func_t<struct asPortalCell*, asRenderWeb, class Vector3&, struct asPortalCell*, class mmPolygon**>>(
            0x486660, this, arg1, arg2, arg3);
    }
};
