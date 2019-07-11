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

// mmai:aiMap

#include "hooking.h"

// 0x436E20 | ?Clamp@@YAMMMM@Z
inline float Clamp(float arg1, float arg2, float arg3)
{
    return stub<cdecl_t<float, float, float, float>>(0x436E20, arg1, arg2, arg3);
}

// 0x609BD0 | ?_fPedUpdate@@3MA
inline extern_var(0x609BD0, float, _fPedUpdate);

// 0x609BD4 | ?_fAmbientUpdate@@3MA
inline extern_var(0x609BD4, float, _fAmbientUpdate);

// 0x609BD8 | ?_fCopUpdate@@3MA
inline extern_var(0x609BD8, float, _fCopUpdate);

// 0x609BE0 | ?_nPedQty@@3HA
inline extern_var(0x609BE0, int32_t, _nPedQty);

// 0x609BE8 | ?AIMAP@@3VaiMap@@A
inline extern_var(0x609BE8, class aiMap, AIMAP);

// 0x609CA8 | ?aiMapMetaClass@@3VMetaClass@@A
inline extern_var(0x609CA8, class MetaClass, aiMapMetaClass);

// 0x609CD4 | ?_nRdQty@@3HA
inline extern_var(0x609CD4, int32_t, _nRdQty);

// 0x609CD8 | ?_fOppUpdate@@3MA
inline extern_var(0x609CD8, float, _fOppUpdate);

// 0x609CDC | ?_nAmbientQty@@3HA
inline extern_var(0x609CDC, int32_t, _nAmbientQty);

// 0x609CE8 | ?_fTotUpdate@@3MA
inline extern_var(0x609CE8, float, _fTotUpdate);

// 0x4369C0 | ?new_aiMap@@YAPAXH@Z
inline void* new_aiMap(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4369C0, arg1);
}

// 0x436A90 | ?delete_aiMap@@YAXPAXH@Z
inline void delete_aiMap(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x436A90, arg1, arg2);
}

class aiMap : asNode
{
public:
    // aiMap::`vftable' @ 0x590440

    // 0x4307B0 | ?Path@aiMap@@QAEPAVaiPath@@H@Z
    inline class aiPath* Path(int32_t arg1)
    {
        return stub<member_func_t<class aiPath*, aiMap, int32_t>>(0x4307B0, this, arg1);
    }

    // 0x4307E0 | ?Intersection@aiMap@@QAEPAVaiIntersection@@H@Z
    inline class aiIntersection* Intersection(int32_t arg1)
    {
        return stub<member_func_t<class aiIntersection*, aiMap, int32_t>>(0x4307E0, this, arg1);
    }

    // 0x430810 | ?Vehicle@aiMap@@QAEPAVaiVehicleAmbient@@H@Z
    inline class aiVehicleAmbient* Vehicle(int32_t arg1)
    {
        return stub<member_func_t<class aiVehicleAmbient*, aiMap, int32_t>>(0x430810, this, arg1);
    }

    // 0x430850 | ?Police@aiMap@@QAEPAVaiVehiclePolice@@H@Z
    inline class aiVehiclePolice* Police(int32_t arg1)
    {
        return stub<member_func_t<class aiVehiclePolice*, aiMap, int32_t>>(0x430850, this, arg1);
    }

    // 0x430890 | ?Opponent@aiMap@@QAEPAVaiVehicleOpponent@@H@Z
    inline class aiVehicleOpponent* Opponent(int32_t arg1)
    {
        return stub<member_func_t<class aiVehicleOpponent*, aiMap, int32_t>>(0x430890, this, arg1);
    }

    // 0x4308D0 | ?Pedestrian@aiMap@@QAEPAVaiPedestrian@@H@Z
    inline class aiPedestrian* Pedestrian(int32_t arg1)
    {
        return stub<member_func_t<class aiPedestrian*, aiMap, int32_t>>(0x4308D0, this, arg1);
    }

    // 0x430910 | ?PlayerPos@aiMap@@QAEAAVVector3@@XZ
    inline class Vector3& PlayerPos()
    {
        return stub<member_func_t<class Vector3&, aiMap>>(0x430910, this);
    }

    // 0x430920 | ??0aiMap@@QAE@XZ
    inline aiMap()
    {
        stub<member_func_t<void, aiMap>>(0x430920, this);
    }

    // 0x430950 | ?Clean@aiMap@@QAEXXZ
    inline void Clean()
    {
        return stub<member_func_t<void, aiMap>>(0x430950, this);
    }

    // 0x430B80 | ?Init@aiMap@@QAEXPAD00PAVmmCar@@@Z
    inline void Init(char* arg1, char* arg2, char* arg3, class mmCar* arg4)
    {
        return stub<member_func_t<void, aiMap, char*, char*, char*, class mmCar*>>(
            0x430B80, this, arg1, arg2, arg3, arg4);
    }

    // 0x4316F0 | ?SaveBinary@aiMap@@AAEXPAD@Z
    inline void SaveBinary(char* arg1)
    {
        return stub<member_func_t<void, aiMap, char*>>(0x4316F0, this, arg1);
    }

    // 0x431870 | ?ReadBinary@aiMap@@AAEXPAD@Z
    inline void ReadBinary(char* arg1)
    {
        return stub<member_func_t<void, aiMap, char*>>(0x431870, this, arg1);
    }

    // 0x432550 | ?DrawNextVisibleAmbient@aiMap@@QAEXXZ
    inline void DrawNextVisibleAmbient()
    {
        return stub<member_func_t<void, aiMap>>(0x432550, this);
    }

    // 0x432570 | ?AllwaysGreen@aiMap@@QAEXXZ
    inline void AllwaysGreen()
    {
        return stub<member_func_t<void, aiMap>>(0x432570, this);
    }

    // 0x4325B0 | ?AllwaysRed@aiMap@@QAEXXZ
    inline void AllwaysRed()
    {
        return stub<member_func_t<void, aiMap>>(0x4325B0, this);
    }

    // 0x4325F0 | ?DrawAppRoads@aiMap@@QAEXXZ
    inline void DrawAppRoads()
    {
        return stub<member_func_t<void, aiMap>>(0x4325F0, this);
    }

    // 0x432610 | ?MapComponent@aiMap@@QAEHAAVVector3@@PAF1F@Z
    inline int32_t MapComponent(class Vector3& arg1, int16_t* arg2, int16_t* arg3, int16_t arg4)
    {
        return stub<member_func_t<int32_t, aiMap, class Vector3&, int16_t*, int16_t*, int16_t>>(
            0x432610, this, arg1, arg2, arg3, arg4);
    }

    // 0x432790 | ?DetermineRoadPosInfo@aiMap@@QAEHAAVMatrix34@@PAVaiRailSet@@PAFPAM23H@Z
    inline int32_t DetermineRoadPosInfo(class Matrix34& arg1, class aiRailSet* arg2, int16_t* arg3, float* arg4,
        int16_t* arg5, float* arg6, int32_t arg7)
    {
        return stub<member_func_t<int32_t, aiMap, class Matrix34&, class aiRailSet*, int16_t*, float*, int16_t*, float*,
            int32_t>>(0x432790, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x432930 | ?DeterminePerpMapComponent@aiMap@@QAEHAAVMatrix34@@PAVaiRailSet@@PAF2PAM32@Z
    inline int32_t DeterminePerpMapComponent(class Matrix34& arg1, class aiRailSet* arg2, int16_t* arg3, int16_t* arg4,
        float* arg5, float* arg6, int16_t* arg7)
    {
        return stub<member_func_t<int32_t, aiMap, class Matrix34&, class aiRailSet*, int16_t*, int16_t*, float*, float*,
            int16_t*>>(0x432930, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x432B90 | ?DetermineOppMapComponent@aiMap@@QAEHAAVMatrix34@@PAVaiRailSet@@PAF2PAM323MFF@Z
    inline int32_t DetermineOppMapComponent(class Matrix34& arg1, class aiRailSet* arg2, int16_t* arg3, int16_t* arg4,
        float* arg5, float* arg6, int16_t* arg7, float* arg8, float arg9, int16_t arg10, int16_t arg11)
    {
        return stub<member_func_t<int32_t, aiMap, class Matrix34&, class aiRailSet*, int16_t*, int16_t*, float*, float*,
            int16_t*, float*, float, int16_t, int16_t>>(
            0x432B90, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x434530 | ?DetermineOppRoadPosInfo@aiMap@@QAEHAAVVector3@@0PAVaiRailSet@@PAFPAM3H@Z
    inline int32_t DetermineOppRoadPosInfo(class Vector3& arg1, class Vector3& arg2, class aiRailSet* arg3,
        int16_t* arg4, float* arg5, float* arg6, int32_t arg7)
    {
        return stub<member_func_t<int32_t, aiMap, class Vector3&, class Vector3&, class aiRailSet*, int16_t*, float*,
            float*, int32_t>>(0x434530, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x434610 | ?FindAmbAppRoad@aiMap@@QAEHH@Z
    inline int32_t FindAmbAppRoad(int32_t arg1)
    {
        return stub<member_func_t<int32_t, aiMap, int32_t>>(0x434610, this, arg1);
    }

    // 0x434660 | ?FindPedAppRoad@aiMap@@QAEHH@Z
    inline int32_t FindPedAppRoad(int32_t arg1)
    {
        return stub<member_func_t<int32_t, aiMap, int32_t>>(0x434660, this, arg1);
    }

    // 0x4346B0 | ?PredictIntersectionPath@aiMap@@QAEPAVaiPath@@HAAVMatrix34@@@Z
    inline class aiPath* PredictIntersectionPath(int32_t arg1, class Matrix34& arg2)
    {
        return stub<member_func_t<class aiPath*, aiMap, int32_t, class Matrix34&>>(0x4346B0, this, arg1, arg2);
    }

    // 0x434890 | ?PredictAmbIntersectionPath@aiMap@@QAEPAVaiPath@@HAAVMatrix34@@@Z
    inline class aiPath* PredictAmbIntersectionPath(int32_t arg1, class Matrix34& arg2)
    {
        return stub<member_func_t<class aiPath*, aiMap, int32_t, class Matrix34&>>(0x434890, this, arg1, arg2);
    }

    // 0x434A80 | ?PredictAmbFreewayIntersectionPath@aiMap@@QAEPAVaiPath@@HAAVMatrix34@@@Z
    inline class aiPath* PredictAmbFreewayIntersectionPath(int32_t arg1, class Matrix34& arg2)
    {
        return stub<member_func_t<class aiPath*, aiMap, int32_t, class Matrix34&>>(0x434A80, this, arg1, arg2);
    }

    // 0x434C90 | ?Dump@aiMap@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiMap>>(0x434C90, this);
    }

    // 0x434DD0 | ?GetCameraPos@aiMap@@QAEXXZ
    inline void GetCameraPos()
    {
        return stub<member_func_t<void, aiMap>>(0x434DD0, this);
    }

    // 0x434E00 | ?AddAIPath@aiMap@@AAEPAVaiPath@@AAVmmRoadSect@@HH@Z
    inline class aiPath* AddAIPath(class mmRoadSect& arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<class aiPath*, aiMap, class mmRoadSect&, int32_t, int32_t>>(
            0x434E00, this, arg1, arg2, arg3);
    }

    // 0x434F00 | ?AddIntersection@aiMap@@QAEPAVaiIntersection@@PAVVector3@@@Z
    inline class aiIntersection* AddIntersection(class Vector3* arg1)
    {
        return stub<member_func_t<class aiIntersection*, aiMap, class Vector3*>>(0x434F00, this, arg1);
    }

    // 0x434F30 | ?ScanIntersections@aiMap@@AAEPAVaiIntersection@@AAVVector3@@@Z
    inline class aiIntersection* ScanIntersections(class Vector3& arg1)
    {
        return stub<member_func_t<class aiIntersection*, aiMap, class Vector3&>>(0x434F30, this, arg1);
    }

    // 0x434FB0 | ?NewIntersection@aiMap@@AAEPAVaiIntersection@@AAVVector3@@@Z
    inline class aiIntersection* NewIntersection(class Vector3& arg1)
    {
        return stub<member_func_t<class aiIntersection*, aiMap, class Vector3&>>(0x434FB0, this, arg1);
    }

    // 0x435090 | ?AddIntToAppRoadMap@aiMap@@AAEXPAVCArrayList@@HMPAPAUasPortalCell@@H@Z
    inline void AddIntToAppRoadMap(
        class CArrayList* arg1, int32_t arg2, float arg3, struct asPortalCell** arg4, int32_t arg5)
    {
        return stub<member_func_t<void, aiMap, class CArrayList*, int32_t, float, struct asPortalCell**, int32_t>>(
            0x435090, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x435110 | ?RoadDensity@aiMap@@AAEMHMH@Z
    inline float RoadDensity(int32_t arg1, float arg2, int32_t arg3)
    {
        return stub<member_func_t<float, aiMap, int32_t, float, int32_t>>(0x435110, this, arg1, arg2, arg3);
    }

    // 0x435160 | ?NumCars@aiMap@@AAEHHMM@Z
    inline int32_t NumCars(int32_t arg1, float arg2, float arg3)
    {
        return stub<member_func_t<int32_t, aiMap, int32_t, float, float>>(0x435160, this, arg1, arg2, arg3);
    }

    // 0x435190 | ?FindRoad@aiMap@@AAEHPAVCArrayList@@H@Z
    inline int32_t FindRoad(class CArrayList* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, aiMap, class CArrayList*, int32_t>>(0x435190, this, arg1, arg2);
    }

    // 0x4351D0 | ?ChooseNextRandomLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextRandomLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x4351D0, this, arg1);
    }

    // 0x435360 | ?ChooseNextLeftStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextLeftStraightLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x435360, this, arg1);
    }

    // 0x4355D0 | ?ChooseNextRightStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextRightStraightLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x4355D0, this, arg1);
    }

    // 0x435870 | ?ChooseNextStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextStraightLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x435870, this, arg1);
    }

    // 0x435B80 | ?ChooseNextLaneLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextLaneLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x435B80, this, arg1);
    }

    // 0x435C20 | ?ChooseNextFreewayLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextFreewayLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x435C20, this, arg1);
    }

    // 0x435D30 | ?ChooseNextRightStraightFreewayLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextRightStraightFreewayLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x435D30, this, arg1);
    }

    // 0x435EF0 | ?AdjustPedestrians@aiMap@@AAEXHH@Z
    inline void AdjustPedestrians(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, aiMap, int32_t, int32_t>>(0x435EF0, this, arg1, arg2);
    }

    // 0x436290 | ?AddPedestrian@aiMap@@QAEXPAVaiPedestrian@@@Z
    inline void AddPedestrian(class aiPedestrian* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiPedestrian*>>(0x436290, this, arg1);
    }

    // 0x4362C0 | ?RemovePedestrian@aiMap@@QAEXPAVaiPedestrian@@@Z
    inline void RemovePedestrian(class aiPedestrian* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiPedestrian*>>(0x4362C0, this, arg1);
    }

    // 0x436330 | ?AdjustAmbients@aiMap@@AAEXHH@Z
    inline void AdjustAmbients(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, aiMap, int32_t, int32_t>>(0x436330, this, arg1, arg2);
    }

    // 0x4367F0 | ?AddAmbient@aiMap@@QAEXPAVaiVehicleSpline@@@Z
    inline void AddAmbient(class aiVehicleSpline* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiVehicleSpline*>>(0x4367F0, this, arg1);
    }

    // 0x436830 | ?RemoveAmbient@aiMap@@QAEXPAVaiVehicleSpline@@@Z
    inline void RemoveAmbient(class aiVehicleSpline* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiVehicleSpline*>>(0x436830, this, arg1);
    }

    // 0x4368A0 | ?DetRdSegBetweenInts@aiMap@@QAEPAVaiPath@@PAVaiIntersection@@0@Z
    inline class aiPath* DetRdSegBetweenInts(class aiIntersection* arg1, class aiIntersection* arg2)
    {
        return stub<member_func_t<class aiPath*, aiMap, class aiIntersection*, class aiIntersection*>>(
            0x4368A0, this, arg1, arg2);
    }

    // 0x436920 | ?GoodRoadForCopStartPos@aiMap@@QAEHH@Z
    inline int32_t GoodRoadForCopStartPos(int32_t arg1)
    {
        return stub<member_func_t<int32_t, aiMap, int32_t>>(0x436920, this, arg1);
    }

    // 0x436970 | ?DeclareFields@aiMap@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x436970);
    }

    // 0x430940 | ??1aiMap@@UAE@XZ
    inline ~aiMap() override
    {
        stub<member_func_t<void, aiMap>>(0x430940, this);
    }

    // 0x436AE0 | ?GetClass@aiMap@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, aiMap>>(0x436AE0, this);
    }

    // 0x432540 | ?Cull@aiMap@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, aiMap>>(0x432540, this);
    }

    // 0x4321B0 | ?Update@aiMap@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiMap>>(0x4321B0, this);
    }

    // 0x431E70 | ?Reset@aiMap@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiMap>>(0x431E70, this);
    }

    // 0x432530 | ?UpdatePaused@aiMap@@UAEXXZ
    inline void UpdatePaused() override
    {
        return stub<member_func_t<void, aiMap>>(0x432530, this);
    }
};

class CArrayList
{
public:
    // 0x436DC0 | ??_ECArrayList@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x436ED0 | ??0CArrayList@@QAE@XZ
    inline CArrayList()
    {
        stub<member_func_t<void, CArrayList>>(0x436ED0, this);
    }

    // 0x441040 | ??1CArrayList@@QAE@XZ
    inline ~CArrayList()
    {
        stub<member_func_t<void, CArrayList>>(0x441040, this);
    }

    // 0x441060 | ?Append@CArrayList@@QAEXH@Z
    inline void Append(int32_t arg1)
    {
        return stub<member_func_t<void, CArrayList, int32_t>>(0x441060, this, arg1);
    }
};
