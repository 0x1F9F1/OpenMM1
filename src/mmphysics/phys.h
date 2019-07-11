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
    mmphysics:phys

    0x4C80E0 | public: void __thiscall mmPhysExec::DoUpdateAll(void) | ?DoUpdateAll@mmPhysExec@@QAEXXZ
    0x4C82D0 | public: void __thiscall mmPhysExec::DoUpdatePlayerOnly(void) | ?DoUpdatePlayerOnly@mmPhysExec@@QAEXXZ
    0x4C8510 | public: __thiscall mmPhysicsMGR::mmPhysicsMGR(void) | ??0mmPhysicsMGR@@QAE@XZ
    0x4C8610 | public: virtual __thiscall mmPhysicsMGR::~mmPhysicsMGR(void) | ??1mmPhysicsMGR@@UAE@XZ
    0x4C86A0 | public: void __thiscall mmPhysicsMGR::Init(class asInertialCS *,class mmViewCS *) | ?Init@mmPhysicsMGR@@QAEXPAVasInertialCS@@PAVmmViewCS@@@Z
    0x4C86F0 | public: virtual void __thiscall mmPhysicsMGR::Reset(void) | ?Reset@mmPhysicsMGR@@UAEXXZ
    0x4C8740 | public: void __thiscall mmPhysicsMGR::Shutdown(void) | ?Shutdown@mmPhysicsMGR@@QAEXXZ
    0x4C8760 | public: void __thiscall mmPhysicsMGR::DeclareMover(class mmInstance *,int,int) | ?DeclareMover@mmPhysicsMGR@@QAEXPAVmmInstance@@HH@Z
    0x4C8960 | public: void __thiscall mmPhysicsMGR::NewMover(class mmInstance *,class mmInstance *) | ?NewMover@mmPhysicsMGR@@QAEXPAVmmInstance@@0@Z
    0x4C8A60 | public: void __thiscall mmPhysicsMGR::NewMover(class mmInstance *) | ?NewMover@mmPhysicsMGR@@QAEXPAVmmInstance@@@Z
    0x4C8AE0 | public: void __thiscall mmPhysicsMGR::NewMover(class mmInstance *,class mmInstance *,class mmInstance *) | ?NewMover@mmPhysicsMGR@@QAEXPAVmmInstance@@00@Z
    0x4C8C00 | public: void __thiscall mmPhysicsMGR::IgnoreMover(class mmInstance *) | ?IgnoreMover@mmPhysicsMGR@@QAEXPAVmmInstance@@@Z
    0x4C8C50 | protected: void __thiscall mmPhysicsMGR::GatherRoomCollidables(int,short,int) | ?GatherRoomCollidables@mmPhysicsMGR@@IAEXHFH@Z
    0x4C8D70 | protected: int __thiscall mmPhysicsMGR::ClosestNeighboringCullRoom(int) | ?ClosestNeighboringCullRoom@mmPhysicsMGR@@IAEHH@Z
    0x4C8EC0 | protected: void __thiscall mmPhysicsMGR::GatherCollidables(int,int) | ?GatherCollidables@mmPhysicsMGR@@IAEXHH@Z
    0x4C8F20 | public: void __thiscall mmPhysicsMGR::UpdateEverythingButPlayer(void) | ?UpdateEverythingButPlayer@mmPhysicsMGR@@QAEXXZ
    0x4C9100 | public: virtual void __thiscall mmPhysicsMGR::Update(void) | ?Update@mmPhysicsMGR@@UAEXXZ
    0x4C94B0 | public: virtual void __thiscall mmPhysicsMGR::UpdatePaused(void) | ?UpdatePaused@mmPhysicsMGR@@UAEXXZ
    0x4C94E0 | protected: void __thiscall mmPhysicsMGR::DeclareBound(class mmBoundTemplate *) | ?DeclareBound@mmPhysicsMGR@@IAEXPAVmmBoundTemplate@@@Z
    0x4C94F0 | public: virtual void __thiscall mmPhysicsMGR::Cull(void) | ?Cull@mmPhysicsMGR@@UAEXXZ
    0x4C9540 | protected: int __thiscall mmPhysicsMGR::TrivialCollideInstances(class mmInstance *,class mmInstance *) | ?TrivialCollideInstances@mmPhysicsMGR@@IAEHPAVmmInstance@@0@Z
    0x4C9760 | protected: int __thiscall mmPhysicsMGR::CollideInstances(class mmInstance *,class mmInstance *,int,int) | ?CollideInstances@mmPhysicsMGR@@IAEHPAVmmInstance@@0HH@Z
    0x4C9C00 | protected: void __thiscall mmPhysicsMGR::CollideTerrain(class mmInstance *) | ?CollideTerrain@mmPhysicsMGR@@IAEXPAVmmInstance@@@Z
    0x4CA0E0 | protected: int __thiscall mmPhysicsMGR::CollideProbe(short,class mmIntersection *,int) | ?CollideProbe@mmPhysicsMGR@@IAEHFPAVmmIntersection@@H@Z
    0x4CA270 | public: int __thiscall mmPhysicsMGR::Collide(class mmIntersection *,int,short,short) | ?Collide@mmPhysicsMGR@@QAEHPAVmmIntersection@@HFF@Z
    0x4CA390 | public: int __thiscall mmPhysicsMGR::CollideLOS(class mmIntersection *,int,short,short) | ?CollideLOS@mmPhysicsMGR@@QAEHPAVmmIntersection@@HFF@Z
    0x4CA4F0 | int __cdecl FindIntersections(class mmIntersection *,int,class asBound *,class asBound *,class mmBoundTemplate *,class mmBoundTemplate *,class mmEdgeBodyIsect *,int,class mmEdgeBodyIsect *,int) | ?FindIntersections@@YAHPAVmmIntersection@@HPAVasBound@@1PAVmmBoundTemplate@@2PAVmmEdgeBodyIsect@@H3H@Z
    0x4CB920 | void __cdecl DoEndPtSearch(int,class Vector3 const &,class mmEdgeBodyIsect *,int,class mmIntersection * *,int *,int) | ?DoEndPtSearch@@YAXHABVVector3@@PAVmmEdgeBodyIsect@@HPAPAVmmIntersection@@PAHH@Z
    0x4CBF30 | void __cdecl DoEdgeEdge(class mmEdgeBodyIsect *,class mmIntersection * *,int *,int) | ?DoEdgeEdge@@YAXPAVmmEdgeBodyIsect@@PAPAVmmIntersection@@PAHH@Z
    0x4CC010 | void __cdecl SegSegDistNorm(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 *,class Vector3 *,class Vector3 *,float *,int *) | ?SegSegDistNorm@@YAXABVVector3@@00000PAV1@11PAMPAH@Z
    0x4CC530 | int __cdecl GetCollidePolyEdge(class Vector3 const &,class mmPolygon *,class mmBoundTemplate *,class asInertialCS *,class Vector3 const &,float,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 *,class Vector3 *,float *,int *,int *) | ?GetCollidePolyEdge@@YAHABVVector3@@PAVmmPolygon@@PAVmmBoundTemplate@@PAVasInertialCS@@0M0000PAV1@4PAMPAH6@Z
    0x4CCC00 | public: void __thiscall mmPhysicsMGR::AddWidgets(class Bank *) | ?AddWidgets@mmPhysicsMGR@@QAEXPAVBank@@@Z
    0x4CCC10 | public: static void __cdecl mmPhysicsMGR::DeclareFields(void) | ?DeclareFields@mmPhysicsMGR@@SAXXZ
    0x4CCD90 | public: virtual class MetaClass * __thiscall mmPhysicsMGR::GetClass(void) | ?GetClass@mmPhysicsMGR@@UAEPAVMetaClass@@XZ
    0x4CCDA0 | public: class Vector3 __thiscall Vector3::operator/(float) const | ??KVector3@@QBE?AV0@M@Z
    0x4CCDE0 | int __cdecl testNoOverlap(float,float) | ?testNoOverlap@@YAHMM@Z
    0x4CCE50 | public: virtual void * __thiscall mmPhysicsMGR::`vector deleting destructor'(unsigned int) | ??_EmmPhysicsMGR@@UAEPAXI@Z
    0x4CCEB0 | public: virtual void __thiscall mmPhysExec::Update(void) | ?Update@mmPhysExec@@UAEXXZ
    0x4CCED0 | public: virtual void * __thiscall mmPhysExec::`vector deleting destructor'(unsigned int) | ??_EmmPhysExec@@UAEPAXI@Z
    0x4CCED0 | public: virtual void * __thiscall mmPhysExec::`scalar deleting destructor'(unsigned int) | ??_GmmPhysExec@@UAEPAXI@Z
    0x4CCF00 | public: virtual __thiscall mmPhysExec::~mmPhysExec(void) | ??1mmPhysExec@@UAE@XZ
    0x594500 | const mmPhysicsMGR::`vftable' | ??_7mmPhysicsMGR@@6B@
    0x594530 | const mmPhysExec::`vftable' | ??_7mmPhysExec@@6B@
    0x5B21CC | int CallImpactCallbacks | ?CallImpactCallbacks@@3HA
    0x66A9C0 | class mmEdgeBodyIsect * EBISECTS | ?EBISECTS@@3PAVmmEdgeBodyIsect@@A
    0x66C848 | class MetaClass mmPhysicsMGRMetaClass | ?mmPhysicsMGRMetaClass@@3VMetaClass@@A
    0x679270 | protected: static class mmPhysicsMGR * mmPhysicsMGR::Instance | ?Instance@mmPhysicsMGR@@1PAV1@A
    0x679284 | float PhysUpdate | ?PhysUpdate@@3MA
    0x679288 | class mmIntersection * ISECTS | ?ISECTS@@3PAVmmIntersection@@A
    0x67A988 | class mmPhysicsMGR PHYS | ?PHYS@@3VmmPhysicsMGR@@A
    0x4CCC70 | void * __cdecl new_mmPhysicsMGR(int) | ?new_mmPhysicsMGR@@YAPAXH@Z
    0x4CCD40 | void __cdecl delete_mmPhysicsMGR(void *,int) | ?delete_mmPhysicsMGR@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x4CA4F0 | ?FindIntersections@@YAHPAVmmIntersection@@HPAVasBound@@1PAVmmBoundTemplate@@2PAVmmEdgeBodyIsect@@H3H@Z
inline int32_t FindIntersections(class mmIntersection* arg1, int32_t arg2, class asBound* arg3, class asBound* arg4,
    class mmBoundTemplate* arg5, class mmBoundTemplate* arg6, class mmEdgeBodyIsect* arg7, int32_t arg8,
    class mmEdgeBodyIsect* arg9, int32_t arg10)
{
    return stub<cdecl_t<int32_t, class mmIntersection*, int32_t, class asBound*, class asBound*, class mmBoundTemplate*,
        class mmBoundTemplate*, class mmEdgeBodyIsect*, int32_t, class mmEdgeBodyIsect*, int32_t>>(
        0x4CA4F0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

// 0x4CB920 | ?DoEndPtSearch@@YAXHABVVector3@@PAVmmEdgeBodyIsect@@HPAPAVmmIntersection@@PAHH@Z
inline void DoEndPtSearch(int32_t arg1, class Vector3 const& arg2, class mmEdgeBodyIsect* arg3, int32_t arg4,
    class mmIntersection** arg5, int32_t* arg6, int32_t arg7)
{
    return stub<cdecl_t<void, int32_t, class Vector3 const&, class mmEdgeBodyIsect*, int32_t, class mmIntersection**,
        int32_t*, int32_t>>(0x4CB920, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

// 0x4CBF30 | ?DoEdgeEdge@@YAXPAVmmEdgeBodyIsect@@PAPAVmmIntersection@@PAHH@Z
inline void DoEdgeEdge(class mmEdgeBodyIsect* arg1, class mmIntersection** arg2, int32_t* arg3, int32_t arg4)
{
    return stub<cdecl_t<void, class mmEdgeBodyIsect*, class mmIntersection**, int32_t*, int32_t>>(
        0x4CBF30, arg1, arg2, arg3, arg4);
}

// 0x4CC010 | ?SegSegDistNorm@@YAXABVVector3@@00000PAV1@11PAMPAH@Z
inline void SegSegDistNorm(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3 const& arg5, class Vector3 const& arg6, class Vector3* arg7,
    class Vector3* arg8, class Vector3* arg9, float* arg10, int32_t* arg11)
{
    return stub<cdecl_t<void, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector3 const&, class Vector3 const&, class Vector3*, class Vector3*, class Vector3*, float*, int32_t*>>(
        0x4CC010, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

// 0x4CC530 | ?GetCollidePolyEdge@@YAHABVVector3@@PAVmmPolygon@@PAVmmBoundTemplate@@PAVasInertialCS@@0M0000PAV1@4PAMPAH6@Z
inline int32_t GetCollidePolyEdge(class Vector3 const& arg1, class mmPolygon* arg2, class mmBoundTemplate* arg3,
    class asInertialCS* arg4, class Vector3 const& arg5, float arg6, class Vector3 const& arg7,
    class Vector3 const& arg8, class Vector3 const& arg9, class Vector3 const& arg10, class Vector3* arg11,
    class Vector3* arg12, float* arg13, int32_t* arg14, int32_t* arg15)
{
    return stub<cdecl_t<int32_t, class Vector3 const&, class mmPolygon*, class mmBoundTemplate*, class asInertialCS*,
        class Vector3 const&, float, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector3 const&, class Vector3*, class Vector3*, float*, int32_t*, int32_t*>>(
        0x4CC530, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
}

// 0x4CCDE0 | ?testNoOverlap@@YAHMM@Z
inline int32_t testNoOverlap(float arg1, float arg2)
{
    return stub<cdecl_t<int32_t, float, float>>(0x4CCDE0, arg1, arg2);
}

// 0x5B21CC | ?CallImpactCallbacks@@3HA
inline extern_var(0x5B21CC, int32_t, CallImpactCallbacks);

// 0x66A9C0 | ?EBISECTS@@3PAVmmEdgeBodyIsect@@A
inline extern_var(0x66A9C0, class mmEdgeBodyIsect*, EBISECTS);

// 0x66C848 | ?mmPhysicsMGRMetaClass@@3VMetaClass@@A
inline extern_var(0x66C848, class MetaClass, mmPhysicsMGRMetaClass);

// 0x679284 | ?PhysUpdate@@3MA
inline extern_var(0x679284, float, PhysUpdate);

// 0x679288 | ?ISECTS@@3PAVmmIntersection@@A
inline extern_var(0x679288, class mmIntersection*, ISECTS);

// 0x67A988 | ?PHYS@@3VmmPhysicsMGR@@A
inline extern_var(0x67A988, class mmPhysicsMGR, PHYS);

// 0x4CCC70 | ?new_mmPhysicsMGR@@YAPAXH@Z
inline void* new_mmPhysicsMGR(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4CCC70, arg1);
}

// 0x4CCD40 | ?delete_mmPhysicsMGR@@YAXPAXH@Z
inline void delete_mmPhysicsMGR(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4CCD40, arg1, arg2);
}

class mmPhysicsMGR : asNode
{
public:
    // mmPhysicsMGR::`vftable' @ 0x594500

    // 0x4C8510 | ??0mmPhysicsMGR@@QAE@XZ
    inline mmPhysicsMGR()
    {
        stub<member_func_t<void, mmPhysicsMGR>>(0x4C8510, this);
    }

    // 0x4C86A0 | ?Init@mmPhysicsMGR@@QAEXPAVasInertialCS@@PAVmmViewCS@@@Z
    inline void Init(class asInertialCS* arg1, class mmViewCS* arg2)
    {
        return stub<member_func_t<void, mmPhysicsMGR, class asInertialCS*, class mmViewCS*>>(
            0x4C86A0, this, arg1, arg2);
    }

    // 0x4C8740 | ?Shutdown@mmPhysicsMGR@@QAEXXZ
    inline void Shutdown()
    {
        return stub<member_func_t<void, mmPhysicsMGR>>(0x4C8740, this);
    }

    // 0x4C8760 | ?DeclareMover@mmPhysicsMGR@@QAEXPAVmmInstance@@HH@Z
    inline void DeclareMover(class mmInstance* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmPhysicsMGR, class mmInstance*, int32_t, int32_t>>(
            0x4C8760, this, arg1, arg2, arg3);
    }

    // 0x4C8960 | ?NewMover@mmPhysicsMGR@@QAEXPAVmmInstance@@0@Z
    inline void NewMover(class mmInstance* arg1, class mmInstance* arg2)
    {
        return stub<member_func_t<void, mmPhysicsMGR, class mmInstance*, class mmInstance*>>(
            0x4C8960, this, arg1, arg2);
    }

    // 0x4C8A60 | ?NewMover@mmPhysicsMGR@@QAEXPAVmmInstance@@@Z
    inline void NewMover(class mmInstance* arg1)
    {
        return stub<member_func_t<void, mmPhysicsMGR, class mmInstance*>>(0x4C8A60, this, arg1);
    }

    // 0x4C8AE0 | ?NewMover@mmPhysicsMGR@@QAEXPAVmmInstance@@00@Z
    inline void NewMover(class mmInstance* arg1, class mmInstance* arg2, class mmInstance* arg3)
    {
        return stub<member_func_t<void, mmPhysicsMGR, class mmInstance*, class mmInstance*, class mmInstance*>>(
            0x4C8AE0, this, arg1, arg2, arg3);
    }

    // 0x4C8C00 | ?IgnoreMover@mmPhysicsMGR@@QAEXPAVmmInstance@@@Z
    inline void IgnoreMover(class mmInstance* arg1)
    {
        return stub<member_func_t<void, mmPhysicsMGR, class mmInstance*>>(0x4C8C00, this, arg1);
    }

    // 0x4C8C50 | ?GatherRoomCollidables@mmPhysicsMGR@@IAEXHFH@Z
    inline void GatherRoomCollidables(int32_t arg1, int16_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmPhysicsMGR, int32_t, int16_t, int32_t>>(0x4C8C50, this, arg1, arg2, arg3);
    }

    // 0x4C8D70 | ?ClosestNeighboringCullRoom@mmPhysicsMGR@@IAEHH@Z
    inline int32_t ClosestNeighboringCullRoom(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmPhysicsMGR, int32_t>>(0x4C8D70, this, arg1);
    }

    // 0x4C8EC0 | ?GatherCollidables@mmPhysicsMGR@@IAEXHH@Z
    inline void GatherCollidables(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmPhysicsMGR, int32_t, int32_t>>(0x4C8EC0, this, arg1, arg2);
    }

    // 0x4C8F20 | ?UpdateEverythingButPlayer@mmPhysicsMGR@@QAEXXZ
    inline void UpdateEverythingButPlayer()
    {
        return stub<member_func_t<void, mmPhysicsMGR>>(0x4C8F20, this);
    }

    // 0x4C94E0 | ?DeclareBound@mmPhysicsMGR@@IAEXPAVmmBoundTemplate@@@Z
    inline void DeclareBound(class mmBoundTemplate* arg1)
    {
        return stub<member_func_t<void, mmPhysicsMGR, class mmBoundTemplate*>>(0x4C94E0, this, arg1);
    }

    // 0x4C9540 | ?TrivialCollideInstances@mmPhysicsMGR@@IAEHPAVmmInstance@@0@Z
    inline int32_t TrivialCollideInstances(class mmInstance* arg1, class mmInstance* arg2)
    {
        return stub<member_func_t<int32_t, mmPhysicsMGR, class mmInstance*, class mmInstance*>>(
            0x4C9540, this, arg1, arg2);
    }

    // 0x4C9760 | ?CollideInstances@mmPhysicsMGR@@IAEHPAVmmInstance@@0HH@Z
    inline int32_t CollideInstances(class mmInstance* arg1, class mmInstance* arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<int32_t, mmPhysicsMGR, class mmInstance*, class mmInstance*, int32_t, int32_t>>(
            0x4C9760, this, arg1, arg2, arg3, arg4);
    }

    // 0x4C9C00 | ?CollideTerrain@mmPhysicsMGR@@IAEXPAVmmInstance@@@Z
    inline void CollideTerrain(class mmInstance* arg1)
    {
        return stub<member_func_t<void, mmPhysicsMGR, class mmInstance*>>(0x4C9C00, this, arg1);
    }

    // 0x4CA0E0 | ?CollideProbe@mmPhysicsMGR@@IAEHFPAVmmIntersection@@H@Z
    inline int32_t CollideProbe(int16_t arg1, class mmIntersection* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, mmPhysicsMGR, int16_t, class mmIntersection*, int32_t>>(
            0x4CA0E0, this, arg1, arg2, arg3);
    }

    // 0x4CA270 | ?Collide@mmPhysicsMGR@@QAEHPAVmmIntersection@@HFF@Z
    inline int32_t Collide(class mmIntersection* arg1, int32_t arg2, int16_t arg3, int16_t arg4)
    {
        return stub<member_func_t<int32_t, mmPhysicsMGR, class mmIntersection*, int32_t, int16_t, int16_t>>(
            0x4CA270, this, arg1, arg2, arg3, arg4);
    }

    // 0x4CA390 | ?CollideLOS@mmPhysicsMGR@@QAEHPAVmmIntersection@@HFF@Z
    inline int32_t CollideLOS(class mmIntersection* arg1, int32_t arg2, int16_t arg3, int16_t arg4)
    {
        return stub<member_func_t<int32_t, mmPhysicsMGR, class mmIntersection*, int32_t, int16_t, int16_t>>(
            0x4CA390, this, arg1, arg2, arg3, arg4);
    }

    // 0x4CCC00 | ?AddWidgets@mmPhysicsMGR@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, mmPhysicsMGR, class Bank*>>(0x4CCC00, this, arg1);
    }

    // 0x4CCC10 | ?DeclareFields@mmPhysicsMGR@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4CCC10);
    }

    // 0x679270 | ?Instance@mmPhysicsMGR@@1PAV1@A
    static inline extern_var(0x679270, class mmPhysicsMGR*, Instance);

    // 0x4C8610 | ??1mmPhysicsMGR@@UAE@XZ
    inline ~mmPhysicsMGR() override
    {
        stub<member_func_t<void, mmPhysicsMGR>>(0x4C8610, this);
    }

    // 0x4CCD90 | ?GetClass@mmPhysicsMGR@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmPhysicsMGR>>(0x4CCD90, this);
    }

    // 0x4C94F0 | ?Cull@mmPhysicsMGR@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmPhysicsMGR>>(0x4C94F0, this);
    }

    // 0x4C9100 | ?Update@mmPhysicsMGR@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmPhysicsMGR>>(0x4C9100, this);
    }

    // 0x4C86F0 | ?Reset@mmPhysicsMGR@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmPhysicsMGR>>(0x4C86F0, this);
    }

    // 0x4C94B0 | ?UpdatePaused@mmPhysicsMGR@@UAEXXZ
    inline void UpdatePaused() override
    {
        return stub<member_func_t<void, mmPhysicsMGR>>(0x4C94B0, this);
    }
};

struct mmPhysExec : asNode
{
public:
    // mmPhysExec::`vftable' @ 0x594530

    // 0x4C80E0 | ?DoUpdateAll@mmPhysExec@@QAEXXZ
    inline void DoUpdateAll()
    {
        return stub<member_func_t<void, mmPhysExec>>(0x4C80E0, this);
    }

    // 0x4C82D0 | ?DoUpdatePlayerOnly@mmPhysExec@@QAEXXZ
    inline void DoUpdatePlayerOnly()
    {
        return stub<member_func_t<void, mmPhysExec>>(0x4C82D0, this);
    }

    // 0x4CCF00 | ??1mmPhysExec@@UAE@XZ
    inline ~mmPhysExec() override
    {
        stub<member_func_t<void, mmPhysExec>>(0x4CCF00, this);
    }

    // 0x4CCEB0 | ?Update@mmPhysExec@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmPhysExec>>(0x4CCEB0, this);
    }
};
