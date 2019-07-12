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
    mmgame:hudmap

    0x41F220 | public: __thiscall mmHudMap::mmHudMap(void) | ??0mmHudMap@@QAE@XZ
    0x41F310 | public: void __thiscall mmHudMap::Init(class asCamera *,class Matrix34 *,class mmHUD *,class mmGame *,char *) | ?Init@mmHudMap@@QAEXPAVasCamera@@PAVMatrix34@@PAVmmHUD@@PAVmmGame@@PAD@Z
    0x41F8D0 | public: virtual void __thiscall mmHudMap::Reset(void) | ?Reset@mmHudMap@@UAEXXZ
    0x41F910 | public: void __thiscall mmHudMap::RegisterOpponents(struct OppIconInfo *,int) | ?RegisterOpponents@mmHudMap@@QAEXPAUOppIconInfo@@H@Z
    0x41F930 | public: void __thiscall mmHudMap::RegisterCopsnRobbers(class Vector3 * *) | ?RegisterCopsnRobbers@mmHudMap@@QAEXPAPAVVector3@@@Z
    0x41F960 | public: void __thiscall mmHudMap::RegisterMisc(class Vector3 * *,int) | ?RegisterMisc@mmHudMap@@QAEXPAPAVVector3@@H@Z
    0x41F990 | public: void __thiscall mmHudMap::Activate(void) | ?Activate@mmHudMap@@QAEXXZ
    0x41F9C0 | public: void __thiscall mmHudMap::Deactivate(void) | ?Deactivate@mmHudMap@@QAEXXZ
    0x41F9F0 | public: void __thiscall mmHudMap::SetMode(int) | ?SetMode@mmHudMap@@QAEXH@Z
    0x41FD80 | public: void __thiscall mmHudMap::Cycle(void) | ?Cycle@mmHudMap@@QAEXXZ
    0x41FDB0 | public: void __thiscall mmHudMap::ToggleFullScreen(void) | ?ToggleFullScreen@mmHudMap@@QAEXXZ
    0x41FDE0 | private: class agiBitmap * __thiscall mmHudMap::GetCurrentMap(void) | ?GetCurrentMap@mmHudMap@@AAEPAVagiBitmap@@XZ
    0x41FDF0 | public: void __thiscall mmHudMap::ToggleMapRes(void) | ?ToggleMapRes@mmHudMap@@QAEXXZ
    0x41FE50 | public: virtual void __thiscall mmHudMap::Update(void) | ?Update@mmHudMap@@UAEXXZ
    0x420040 | public: virtual void __thiscall mmHudMap::Cull(void) | ?Cull@mmHudMap@@UAEXXZ
    0x4201D0 | private: void __thiscall mmHudMap::DrawCentered(class agiBitmap *,struct Point) | ?DrawCentered@mmHudMap@@AAEXPAVagiBitmap@@UPoint@@@Z
    0x420240 | private: void __thiscall mmHudMap::DrawClipped(class agiBitmap *,struct Point,float,float,float,float) | ?DrawClipped@mmHudMap@@AAEXPAVagiBitmap@@UPoint@@MMMM@Z
    0x4203E0 | private: void __thiscall mmHudMap::DrawOrientedBitmap(class Matrix34 *,class agiBitmap *) | ?DrawOrientedBitmap@mmHudMap@@AAEXPAVMatrix34@@PAVagiBitmap@@@Z
    0x4205C0 | public: void __thiscall mmHudMap::ResChanged(void) | ?ResChanged@mmHudMap@@QAEXXZ
    0x420600 | private: void __thiscall mmHudMap::DrawOriented(class Matrix34 *,unsigned int) | ?DrawOriented@mmHudMap@@AAEXPAVMatrix34@@I@Z
    0x4207E0 | private: void __thiscall mmHudMap::DrawOpponents(void) | ?DrawOpponents@mmHudMap@@AAEXXZ
    0x4208C0 | private: void __thiscall mmHudMap::DrawCops(void) | ?DrawCops@mmHudMap@@AAEXXZ
    0x420930 | private: void __thiscall mmHudMap::DrawWaypoints(void) | ?DrawWaypoints@mmHudMap@@AAEXXZ
    0x420A70 | private: void __thiscall mmHudMap::DrawCopsnRobbers(void) | ?DrawCopsnRobbers@mmHudMap@@AAEXXZ
    0x420B40 | public: void __thiscall mmHudMap::DrawMisc(void) | ?DrawMisc@mmHudMap@@QAEXXZ
    0x420BB0 | private: void __thiscall mmHudMap::FlushVerts(void) | ?FlushVerts@mmHudMap@@AAEXXZ
    0x420D30 | private: struct Point __thiscall mmHudMap::WorldToBitmap(class Vector3 *) | ?WorldToBitmap@mmHudMap@@AAE?AUPoint@@PAVVector3@@@Z
    0x420DD0 | private: int __thiscall mmHudMap::BitmapToScreen(struct Point *,struct Point) | ?BitmapToScreen@mmHudMap@@AAEHPAUPoint@@U2@@Z
    0x420E80 | public: static void __cdecl mmHudMap::DeclareFields(void) | ?DeclareFields@mmHudMap@@SAXXZ
    0x420FF0 | public: virtual class MetaClass * __thiscall mmHudMap::GetClass(void) | ?GetClass@mmHudMap@@UAEPAVMetaClass@@XZ
    0x421030 | public: virtual void * __thiscall mmHudMap::`vector deleting destructor'(unsigned int) | ??_EmmHudMap@@UAEPAXI@Z
    0x421090 | public: virtual __thiscall mmHudMap::~mmHudMap(void) | ??1mmHudMap@@UAE@XZ
    0x4210A0 | [thunk]: __thiscall `vcall'{20,{flat}}' }' | ??_9@$BBE@AE
    0x58FD98 | const mmHudMap::`vftable' | ??_7mmHudMap@@6B@
    0x609638 | class MetaClass mmHudMapMetaClass | ?mmHudMapMetaClass@@3VMetaClass@@A
    0x609660 | union agiVtx * Tris | ?Tris@@3PATagiVtx@@A
    0x420ED0 | void * __cdecl new_mmHudMap(int) | ?new_mmHudMap@@YAPAXH@Z
    0x420FA0 | void __cdecl delete_mmHudMap(void *,int) | ?delete_mmHudMap@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x4210A0 | ??_9@$BBE@AE

// 0x609638 | ?mmHudMapMetaClass@@3VMetaClass@@A
inline extern_var(0x609638, class MetaClass, mmHudMapMetaClass);

// 0x609660 | ?Tris@@3PATagiVtx@@A
inline extern_var(0x609660, union agiVtx*, Tris);

// 0x420ED0 | ?new_mmHudMap@@YAPAXH@Z
inline void* new_mmHudMap(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x420ED0, arg1);
}

// 0x420FA0 | ?delete_mmHudMap@@YAXPAXH@Z
inline void delete_mmHudMap(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x420FA0, arg1, arg2);
}

struct mmHudMap : asNode
{
public:
    // mmHudMap::`vftable' @ 0x58FD98

    // 0x41F220 | ??0mmHudMap@@QAE@XZ
    inline mmHudMap()
    {
        // stub<member_func_t<void, mmHudMap>>(0x41F220, this);

        unimplemented();
    }

    // 0x41F310 | ?Init@mmHudMap@@QAEXPAVasCamera@@PAVMatrix34@@PAVmmHUD@@PAVmmGame@@PAD@Z
    inline void Init(class asCamera* arg1, class Matrix34* arg2, class mmHUD* arg3, class mmGame* arg4, char* arg5)
    {
        return stub<
            member_func_t<void, mmHudMap, class asCamera*, class Matrix34*, class mmHUD*, class mmGame*, char*>>(
            0x41F310, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x41F910 | ?RegisterOpponents@mmHudMap@@QAEXPAUOppIconInfo@@H@Z
    inline void RegisterOpponents(struct OppIconInfo* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmHudMap, struct OppIconInfo*, int32_t>>(0x41F910, this, arg1, arg2);
    }

    // 0x41F930 | ?RegisterCopsnRobbers@mmHudMap@@QAEXPAPAVVector3@@@Z
    inline void RegisterCopsnRobbers(class Vector3** arg1)
    {
        return stub<member_func_t<void, mmHudMap, class Vector3**>>(0x41F930, this, arg1);
    }

    // 0x41F960 | ?RegisterMisc@mmHudMap@@QAEXPAPAVVector3@@H@Z
    inline void RegisterMisc(class Vector3** arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmHudMap, class Vector3**, int32_t>>(0x41F960, this, arg1, arg2);
    }

    // 0x41F990 | ?Activate@mmHudMap@@QAEXXZ
    inline void Activate()
    {
        return stub<member_func_t<void, mmHudMap>>(0x41F990, this);
    }

    // 0x41F9C0 | ?Deactivate@mmHudMap@@QAEXXZ
    inline void Deactivate()
    {
        return stub<member_func_t<void, mmHudMap>>(0x41F9C0, this);
    }

    // 0x41F9F0 | ?SetMode@mmHudMap@@QAEXH@Z
    inline void SetMode(int32_t arg1)
    {
        return stub<member_func_t<void, mmHudMap, int32_t>>(0x41F9F0, this, arg1);
    }

    // 0x41FD80 | ?Cycle@mmHudMap@@QAEXXZ
    inline void Cycle()
    {
        return stub<member_func_t<void, mmHudMap>>(0x41FD80, this);
    }

    // 0x41FDB0 | ?ToggleFullScreen@mmHudMap@@QAEXXZ
    inline void ToggleFullScreen()
    {
        return stub<member_func_t<void, mmHudMap>>(0x41FDB0, this);
    }

    // 0x41FDE0 | ?GetCurrentMap@mmHudMap@@AAEPAVagiBitmap@@XZ
    inline class agiBitmap* GetCurrentMap()
    {
        return stub<member_func_t<class agiBitmap*, mmHudMap>>(0x41FDE0, this);
    }

    // 0x41FDF0 | ?ToggleMapRes@mmHudMap@@QAEXXZ
    inline void ToggleMapRes()
    {
        return stub<member_func_t<void, mmHudMap>>(0x41FDF0, this);
    }

    // 0x4201D0 | ?DrawCentered@mmHudMap@@AAEXPAVagiBitmap@@UPoint@@@Z
    inline void DrawCentered(class agiBitmap* arg1, struct Point arg2)
    {
        return stub<member_func_t<void, mmHudMap, class agiBitmap*, struct Point>>(0x4201D0, this, arg1, arg2);
    }

    // 0x420240 | ?DrawClipped@mmHudMap@@AAEXPAVagiBitmap@@UPoint@@MMMM@Z
    inline void DrawClipped(class agiBitmap* arg1, struct Point arg2, float arg3, float arg4, float arg5, float arg6)
    {
        return stub<member_func_t<void, mmHudMap, class agiBitmap*, struct Point, float, float, float, float>>(
            0x420240, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4203E0 | ?DrawOrientedBitmap@mmHudMap@@AAEXPAVMatrix34@@PAVagiBitmap@@@Z
    inline void DrawOrientedBitmap(class Matrix34* arg1, class agiBitmap* arg2)
    {
        return stub<member_func_t<void, mmHudMap, class Matrix34*, class agiBitmap*>>(0x4203E0, this, arg1, arg2);
    }

    // 0x4205C0 | ?ResChanged@mmHudMap@@QAEXXZ
    inline void ResChanged()
    {
        return stub<member_func_t<void, mmHudMap>>(0x4205C0, this);
    }

    // 0x420600 | ?DrawOriented@mmHudMap@@AAEXPAVMatrix34@@I@Z
    inline void DrawOriented(class Matrix34* arg1, uint32_t arg2)
    {
        return stub<member_func_t<void, mmHudMap, class Matrix34*, uint32_t>>(0x420600, this, arg1, arg2);
    }

    // 0x4207E0 | ?DrawOpponents@mmHudMap@@AAEXXZ
    inline void DrawOpponents()
    {
        return stub<member_func_t<void, mmHudMap>>(0x4207E0, this);
    }

    // 0x4208C0 | ?DrawCops@mmHudMap@@AAEXXZ
    inline void DrawCops()
    {
        return stub<member_func_t<void, mmHudMap>>(0x4208C0, this);
    }

    // 0x420930 | ?DrawWaypoints@mmHudMap@@AAEXXZ
    inline void DrawWaypoints()
    {
        return stub<member_func_t<void, mmHudMap>>(0x420930, this);
    }

    // 0x420A70 | ?DrawCopsnRobbers@mmHudMap@@AAEXXZ
    inline void DrawCopsnRobbers()
    {
        return stub<member_func_t<void, mmHudMap>>(0x420A70, this);
    }

    // 0x420B40 | ?DrawMisc@mmHudMap@@QAEXXZ
    inline void DrawMisc()
    {
        return stub<member_func_t<void, mmHudMap>>(0x420B40, this);
    }

    // 0x420BB0 | ?FlushVerts@mmHudMap@@AAEXXZ
    inline void FlushVerts()
    {
        return stub<member_func_t<void, mmHudMap>>(0x420BB0, this);
    }

    // 0x420D30 | ?WorldToBitmap@mmHudMap@@AAE?AUPoint@@PAVVector3@@@Z
    inline struct Point WorldToBitmap(class Vector3* arg1)
    {
        return stub<member_func_t<struct Point, mmHudMap, class Vector3*>>(0x420D30, this, arg1);
    }

    // 0x420DD0 | ?BitmapToScreen@mmHudMap@@AAEHPAUPoint@@U2@@Z
    inline int32_t BitmapToScreen(struct Point* arg1, struct Point arg2)
    {
        return stub<member_func_t<int32_t, mmHudMap, struct Point*, struct Point>>(0x420DD0, this, arg1, arg2);
    }

    // 0x420E80 | ?DeclareFields@mmHudMap@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x420E80);
    }

    // 0x421090 | ??1mmHudMap@@UAE@XZ
    inline ~mmHudMap() override = 0
    {
        // stub<member_func_t<void, mmHudMap>>(0x421090, this);

        unimplemented();
    }

    // 0x420FF0 | ?GetClass@mmHudMap@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmHudMap>>(0x420FF0, this);
    }

    // 0x420040 | ?Cull@mmHudMap@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmHudMap>>(0x420040, this);
    }

    // 0x41FE50 | ?Update@mmHudMap@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmHudMap>>(0x41FE50, this);
    }

    // 0x41F8D0 | ?Reset@mmHudMap@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmHudMap>>(0x41F8D0, this);
    }
};
