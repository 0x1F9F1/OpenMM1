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
    mmai:aiGoalFollowWayPts

    0x45E5B0 | public: __thiscall aiGoalFollowWayPts::aiGoalFollowWayPts(void) | ??0aiGoalFollowWayPts@@QAE@XZ
    0x45E610 | public: __thiscall aiGoalFollowWayPts::aiGoalFollowWayPts(char *,class aiRailSet *,class aiVehicleOpponent *,short *,short *,short *,char *,float) | ??0aiGoalFollowWayPts@@QAE@PADPAVaiRailSet@@PAVaiVehicleOpponent@@PAF330M@Z
    0x45F020 | public: __thiscall aiGoalFollowWayPts::~aiGoalFollowWayPts(void) | ??1aiGoalFollowWayPts@@QAE@XZ
    0x45F0D0 | public: virtual void __thiscall aiGoalFollowWayPts::Init(void) | ?Init@aiGoalFollowWayPts@@UAEXXZ
    0x45F4C0 | public: virtual int __thiscall aiGoalFollowWayPts::Context(void) | ?Context@aiGoalFollowWayPts@@UAEHXZ
    0x45F5B0 | public: virtual int __thiscall aiGoalFollowWayPts::Priority(void) | ?Priority@aiGoalFollowWayPts@@UAEHXZ
    0x45F5C0 | public: virtual void __thiscall aiGoalFollowWayPts::Reset(void) | ?Reset@aiGoalFollowWayPts@@UAEXXZ
    0x45F6B0 | public: virtual void __thiscall aiGoalFollowWayPts::Update(void) | ?Update@aiGoalFollowWayPts@@UAEXXZ
    0x45FAA0 | private: class aiVehicleOpponent * __thiscall aiGoalFollowWayPts::DetectOpponentCollision(void) | ?DetectOpponentCollision@aiGoalFollowWayPts@@AAEPAVaiVehicleOpponent@@XZ
    0x45FC40 | private: void __thiscall aiGoalFollowWayPts::AvoidOpponentCollision(class aiVehicleOpponent *) | ?AvoidOpponentCollision@aiGoalFollowWayPts@@AAEXPAVaiVehicleOpponent@@@Z
    0x4600B0 | private: void __thiscall aiGoalFollowWayPts::PlanRoute(void) | ?PlanRoute@aiGoalFollowWayPts@@AAEXXZ
    0x4602E0 | private: int __thiscall aiGoalFollowWayPts::LocateWayPtFromRoad(class aiPath *,class aiPath * *,class aiPath * *) | ?LocateWayPtFromRoad@aiGoalFollowWayPts@@AAEHPAVaiPath@@PAPAV2@1@Z
    0x460960 | private: int __thiscall aiGoalFollowWayPts::LocateWayPtFromInt(class aiIntersection *,class aiPath * *) | ?LocateWayPtFromInt@aiGoalFollowWayPts@@AAEHPAVaiIntersection@@PAPAVaiPath@@@Z
    0x460A40 | private: class aiPath * __thiscall aiGoalFollowWayPts::DetRdSegBetweenInts(class aiIntersection *,class aiIntersection *) | ?DetRdSegBetweenInts@aiGoalFollowWayPts@@AAEPAVaiPath@@PAVaiIntersection@@0@Z
    0x460AD0 | private: int __thiscall aiGoalFollowWayPts::DetectCollision(int *) | ?DetectCollision@aiGoalFollowWayPts@@AAEHPAH@Z
    0x4616D0 | private: void __thiscall aiGoalFollowWayPts::AddToBlockedRange(float,float,float) | ?AddToBlockedRange@aiGoalFollowWayPts@@AAEXMMM@Z
    0x461870 | private: void __thiscall aiGoalFollowWayPts::AvoidCollision(int) | ?AvoidCollision@aiGoalFollowWayPts@@AAEXH@Z
    0x461D10 | private: void __thiscall aiGoalFollowWayPts::CalcSpeed(void) | ?CalcSpeed@aiGoalFollowWayPts@@AAEXXZ
    0x462900 | private: void __thiscall aiGoalFollowWayPts::CalcRoadSpeed(void) | ?CalcRoadSpeed@aiGoalFollowWayPts@@AAEXXZ
    0x462C80 | private: void __thiscall aiGoalFollowWayPts::SolveTargetPoint(void) | ?SolveTargetPoint@aiGoalFollowWayPts@@AAEXXZ
    0x462CD0 | public: void __thiscall aiGoalFollowWayPts::Dump(void) | ?Dump@aiGoalFollowWayPts@@QAEXXZ
    0x462F40 | public: static void __cdecl aiGoalFollowWayPts::DeclareFields(void) | ?DeclareFields@aiGoalFollowWayPts@@SAXXZ
    0x4630D0 | public: virtual class MetaClass * __thiscall aiGoalFollowWayPts::GetClass(void) | ?GetClass@aiGoalFollowWayPts@@UAEPAVMetaClass@@XZ
    0x463110 | public: void * __thiscall aiGoalFollowWayPts::`vector deleting destructor'(unsigned int) | ??_EaiGoalFollowWayPts@@QAEPAXI@Z
    0x590D60 | const aiGoalFollowWayPts::`vftable' | ??_7aiGoalFollowWayPts@@6B@
    0x609FA0 | class MetaClass aiGoalFollowWayPtsMetaClass | ?aiGoalFollowWayPtsMetaClass@@3VMetaClass@@A
    0x462F90 | void * __cdecl new_aiGoalFollowWayPts(int) | ?new_aiGoalFollowWayPts@@YAPAXH@Z
    0x463060 | void __cdecl delete_aiGoalFollowWayPts(void *,int) | ?delete_aiGoalFollowWayPts@@YAXPAXH@Z
*/

// 0x609FA0 | ?aiGoalFollowWayPtsMetaClass@@3VMetaClass@@A
inline extern_var(0x609FA0, class MetaClass, aiGoalFollowWayPtsMetaClass);

// 0x462F90 | ?new_aiGoalFollowWayPts@@YAPAXH@Z
// 0x463060 | ?delete_aiGoalFollowWayPts@@YAXPAXH@Z

struct aiGoalFollowWayPts : aiGoal
{
public:
    // aiGoalFollowWayPts::`vftable' @ 0x590D60

    // 0x45E5B0 | ??0aiGoalFollowWayPts@@QAE@XZ
    inline aiGoalFollowWayPts()
    {
        // stub<member_func_t<void, aiGoalFollowWayPts>>(0x45E5B0, this);

        unimplemented();
    }

    // 0x45E610 | ??0aiGoalFollowWayPts@@QAE@PADPAVaiRailSet@@PAVaiVehicleOpponent@@PAF330M@Z
    inline aiGoalFollowWayPts(char* arg1, class aiRailSet* arg2, class aiVehicleOpponent* arg3, int16_t* arg4,
        int16_t* arg5, int16_t* arg6, char* arg7, float arg8)
    {
        stub<member_func_t<void, aiGoalFollowWayPts, char*, class aiRailSet*, class aiVehicleOpponent*, int16_t*,
            int16_t*, int16_t*, char*, float>>(0x45E610, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x45F020 | ??1aiGoalFollowWayPts@@QAE@XZ
    inline ~aiGoalFollowWayPts()
    {
        stub<member_func_t<void, aiGoalFollowWayPts>>(0x45F020, this);
    }

    // 0x45FAA0 | ?DetectOpponentCollision@aiGoalFollowWayPts@@AAEPAVaiVehicleOpponent@@XZ
    inline class aiVehicleOpponent* DetectOpponentCollision()
    {
        return stub<member_func_t<class aiVehicleOpponent*, aiGoalFollowWayPts>>(0x45FAA0, this);
    }

    // 0x45FC40 | ?AvoidOpponentCollision@aiGoalFollowWayPts@@AAEXPAVaiVehicleOpponent@@@Z
    inline void AvoidOpponentCollision(class aiVehicleOpponent* arg1)
    {
        return stub<member_func_t<void, aiGoalFollowWayPts, class aiVehicleOpponent*>>(0x45FC40, this, arg1);
    }

    // 0x4600B0 | ?PlanRoute@aiGoalFollowWayPts@@AAEXXZ
    inline void PlanRoute()
    {
        return stub<member_func_t<void, aiGoalFollowWayPts>>(0x4600B0, this);
    }

    // 0x4602E0 | ?LocateWayPtFromRoad@aiGoalFollowWayPts@@AAEHPAVaiPath@@PAPAV2@1@Z
    inline int32_t LocateWayPtFromRoad(class aiPath* arg1, class aiPath** arg2, class aiPath** arg3)
    {
        return stub<member_func_t<int32_t, aiGoalFollowWayPts, class aiPath*, class aiPath**, class aiPath**>>(
            0x4602E0, this, arg1, arg2, arg3);
    }

    // 0x460960 | ?LocateWayPtFromInt@aiGoalFollowWayPts@@AAEHPAVaiIntersection@@PAPAVaiPath@@@Z
    inline int32_t LocateWayPtFromInt(class aiIntersection* arg1, class aiPath** arg2)
    {
        return stub<member_func_t<int32_t, aiGoalFollowWayPts, class aiIntersection*, class aiPath**>>(
            0x460960, this, arg1, arg2);
    }

    // 0x460A40 | ?DetRdSegBetweenInts@aiGoalFollowWayPts@@AAEPAVaiPath@@PAVaiIntersection@@0@Z
    inline class aiPath* DetRdSegBetweenInts(class aiIntersection* arg1, class aiIntersection* arg2)
    {
        return stub<member_func_t<class aiPath*, aiGoalFollowWayPts, class aiIntersection*, class aiIntersection*>>(
            0x460A40, this, arg1, arg2);
    }

    // 0x460AD0 | ?DetectCollision@aiGoalFollowWayPts@@AAEHPAH@Z
    inline int32_t DetectCollision(int32_t* arg1)
    {
        return stub<member_func_t<int32_t, aiGoalFollowWayPts, int32_t*>>(0x460AD0, this, arg1);
    }

    // 0x4616D0 | ?AddToBlockedRange@aiGoalFollowWayPts@@AAEXMMM@Z
    inline void AddToBlockedRange(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, aiGoalFollowWayPts, float, float, float>>(0x4616D0, this, arg1, arg2, arg3);
    }

    // 0x461870 | ?AvoidCollision@aiGoalFollowWayPts@@AAEXH@Z
    inline void AvoidCollision(int32_t arg1)
    {
        return stub<member_func_t<void, aiGoalFollowWayPts, int32_t>>(0x461870, this, arg1);
    }

    // 0x461D10 | ?CalcSpeed@aiGoalFollowWayPts@@AAEXXZ
    inline void CalcSpeed()
    {
        return stub<member_func_t<void, aiGoalFollowWayPts>>(0x461D10, this);
    }

    // 0x462900 | ?CalcRoadSpeed@aiGoalFollowWayPts@@AAEXXZ
    inline void CalcRoadSpeed()
    {
        return stub<member_func_t<void, aiGoalFollowWayPts>>(0x462900, this);
    }

    // 0x462C80 | ?SolveTargetPoint@aiGoalFollowWayPts@@AAEXXZ
    inline void SolveTargetPoint()
    {
        return stub<member_func_t<void, aiGoalFollowWayPts>>(0x462C80, this);
    }

    // 0x462CD0 | ?Dump@aiGoalFollowWayPts@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiGoalFollowWayPts>>(0x462CD0, this);
    }

    // 0x462F40 | ?DeclareFields@aiGoalFollowWayPts@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x462F40);
    }

    // 0x463110 | ??_EaiGoalFollowWayPts@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x45F0D0 | ?Init@aiGoalFollowWayPts@@UAEXXZ
    inline void Init() override
    {
        return stub<member_func_t<void, aiGoalFollowWayPts>>(0x45F0D0, this);
    }

    // 0x45F5C0 | ?Reset@aiGoalFollowWayPts@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiGoalFollowWayPts>>(0x45F5C0, this);
    }

    // 0x45F4C0 | ?Context@aiGoalFollowWayPts@@UAEHXZ
    inline int32_t Context() override
    {
        return stub<member_func_t<int32_t, aiGoalFollowWayPts>>(0x45F4C0, this);
    }

    // 0x45F5B0 | ?Priority@aiGoalFollowWayPts@@UAEHXZ
    inline int32_t Priority() override
    {
        return stub<member_func_t<int32_t, aiGoalFollowWayPts>>(0x45F5B0, this);
    }

    // 0x45F6B0 | ?Update@aiGoalFollowWayPts@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiGoalFollowWayPts>>(0x45F6B0, this);
    }

    // 0x4630D0 | ?GetClass@aiGoalFollowWayPts@@UAEPAVMetaClass@@XZ
    virtual inline class MetaClass* GetClass()
    {
        return stub<member_func_t<class MetaClass*, aiGoalFollowWayPts>>(0x4630D0, this);
    }
};
