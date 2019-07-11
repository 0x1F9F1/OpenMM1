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

// mmai:aiPath

#include "hooking.h"

class aiPath
{
public:
    // 0x436EE0 | ??0aiPath@@QAE@H@Z
    inline aiPath(int32_t arg1)
    {
        stub<member_func_t<void, aiPath, int32_t>>(0x436EE0, this, arg1);
    }

    // 0x436F10 | ??1aiPath@@QAE@XZ
    inline ~aiPath()
    {
        stub<member_func_t<void, aiPath>>(0x436F10, this);
    }

    // 0x436FA0 | ?Reset@aiPath@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, aiPath>>(0x436FA0, this);
    }

    // 0x436FE0 | ?UpdateAmbients@aiPath@@QAEXXZ
    inline void UpdateAmbients()
    {
        return stub<member_func_t<void, aiPath>>(0x436FE0, this);
    }

    // 0x4370F0 | ?UpdatePedestrians@aiPath@@QAEXXZ
    inline void UpdatePedestrians()
    {
        return stub<member_func_t<void, aiPath>>(0x4370F0, this);
    }

    // 0x437190 | ?ResetVehicleReactTicks@aiPath@@QAEXXZ
    inline void ResetVehicleReactTicks()
    {
        return stub<member_func_t<void, aiPath>>(0x437190, this);
    }

    // 0x4371C0 | ?AddPathVerts@aiPath@@QAEXAAVmmRoadSect@@HH@Z
    inline void AddPathVerts(class mmRoadSect& arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiPath, class mmRoadSect&, int32_t, int32_t>>(0x4371C0, this, arg1, arg2, arg3);
    }

    // 0x437B00 | ?AddPathVerts@aiPath@@QAEXPAVVector3@@H@Z
    inline void AddPathVerts(class Vector3* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, aiPath, class Vector3*, int32_t>>(0x437B00, this, arg1, arg2);
    }

    // 0x438160 | ?CalcCenterVerts@aiPath@@QAEXAAVmmRoadSect@@H@Z
    inline void CalcCenterVerts(class mmRoadSect& arg1, int32_t arg2)
    {
        return stub<member_func_t<void, aiPath, class mmRoadSect&, int32_t>>(0x438160, this, arg1, arg2);
    }

    // 0x4384A0 | ?SaveBinary@aiPath@@QAEXPAVStream@@@Z
    inline void SaveBinary(class Stream* arg1)
    {
        return stub<member_func_t<void, aiPath, class Stream*>>(0x4384A0, this, arg1);
    }

    // 0x438710 | ?ReadBinary@aiPath@@QAEXPAVStream@@@Z
    inline void ReadBinary(class Stream* arg1)
    {
        return stub<member_func_t<void, aiPath, class Stream*>>(0x438710, this, arg1);
    }

    // 0x438C10 | ?Dump@aiPath@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiPath>>(0x438C10, this);
    }

    // 0x438CB0 | ?AllwaysStop@aiPath@@QAEXH@Z
    inline void AllwaysStop(int32_t arg1)
    {
        return stub<member_func_t<void, aiPath, int32_t>>(0x438CB0, this, arg1);
    }

    // 0x438CD0 | ?StopIncomingRoads@aiPath@@QAEXH@Z
    inline void StopIncomingRoads(int32_t arg1)
    {
        return stub<member_func_t<void, aiPath, int32_t>>(0x438CD0, this, arg1);
    }

    // 0x438D90 | ?StopDestinationSources@aiPath@@QAEXH@Z
    inline void StopDestinationSources(int32_t arg1)
    {
        return stub<member_func_t<void, aiPath, int32_t>>(0x438D90, this, arg1);
    }

    // 0x438E10 | ?AllwaysGo@aiPath@@QAEXH@Z
    inline void AllwaysGo(int32_t arg1)
    {
        return stub<member_func_t<void, aiPath, int32_t>>(0x438E10, this, arg1);
    }

    // 0x438E30 | ?CenterLength@aiPath@@QAEMHH@Z
    inline float CenterLength(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<float, aiPath, int32_t, int32_t>>(0x438E30, this, arg1, arg2);
    }

    // 0x438E50 | ?SubSectionLength@aiPath@@QAEMHH@Z
    inline float SubSectionLength(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<float, aiPath, int32_t, int32_t>>(0x438E50, this, arg1, arg2);
    }

    // 0x438E70 | ?GetHeading@aiPath@@QAEMMH@Z
    inline float GetHeading(float arg1, int32_t arg2)
    {
        return stub<member_func_t<float, aiPath, float, int32_t>>(0x438E70, this, arg1, arg2);
    }

    // 0x438F40 | ?SubSectionDist@aiPath@@QAEMMH@Z
    inline float SubSectionDist(float arg1, int32_t arg2)
    {
        return stub<member_func_t<float, aiPath, float, int32_t>>(0x438F40, this, arg1, arg2);
    }

    // 0x439000 | ?CenterIndex@aiPath@@QAEHM@Z
    inline int32_t CenterIndex(float arg1)
    {
        return stub<member_func_t<int32_t, aiPath, float>>(0x439000, this, arg1);
    }

    // 0x4390A0 | ?CenterPosition@aiPath@@QAEXMAAVVector3@@@Z
    inline void CenterPosition(float arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, aiPath, float, class Vector3&>>(0x4390A0, this, arg1, arg2);
    }

    // 0x439170 | ?Index@aiPath@@QAEHMH@Z
    inline int32_t Index(float arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, aiPath, float, int32_t>>(0x439170, this, arg1, arg2);
    }

    // 0x439220 | ?Index@aiPath@@QAEHAAVVector3@@@Z
    inline int32_t Index(class Vector3& arg1)
    {
        return stub<member_func_t<int32_t, aiPath, class Vector3&>>(0x439220, this, arg1);
    }

    // 0x439330 | ?RoadDistance@aiPath@@QAEXAAVVector3@@PAFPAMF2@Z
    inline void RoadDistance(class Vector3& arg1, int16_t* arg2, float* arg3, int16_t arg4, float* arg5)
    {
        return stub<member_func_t<void, aiPath, class Vector3&, int16_t*, float*, int16_t, float*>>(
            0x439330, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4394D0 | ?CenterDistance@aiPath@@QAEHAAVVector3@@PAFPAM2@Z
    inline int32_t CenterDistance(class Vector3& arg1, int16_t* arg2, float* arg3, float* arg4)
    {
        return stub<member_func_t<int32_t, aiPath, class Vector3&, int16_t*, float*, float*>>(
            0x4394D0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4397F0 | ?AmbientCenterDistance@aiPath@@QAEXPAVaiVehicleSpline@@PAM111@Z
    inline void AmbientCenterDistance(class aiVehicleSpline* arg1, float* arg2, float* arg3, float* arg4, float* arg5)
    {
        return stub<member_func_t<void, aiPath, class aiVehicleSpline*, float*, float*, float*, float*>>(
            0x4397F0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x439EE0 | ?SubSectionPt@aiPath@@QAEXAAVVector3@@HHM@Z
    inline void SubSectionPt(class Vector3& arg1, int32_t arg2, int32_t arg3, float arg4)
    {
        return stub<member_func_t<void, aiPath, class Vector3&, int32_t, int32_t, float>>(
            0x439EE0, this, arg1, arg2, arg3, arg4);
    }

    // 0x439F50 | ?SubSectionDir@aiPath@@QAEXAAVVector3@@HHM@Z
    inline void SubSectionDir(class Vector3& arg1, int32_t arg2, int32_t arg3, float arg4)
    {
        return stub<member_func_t<void, aiPath, class Vector3&, int32_t, int32_t, float>>(
            0x439F50, this, arg1, arg2, arg3, arg4);
    }

    // 0x439FA0 | ?IntersectionEntryPt@aiPath@@QAEXAAVVector3@@HM@Z
    inline void IntersectionEntryPt(class Vector3& arg1, int32_t arg2, float arg3)
    {
        return stub<member_func_t<void, aiPath, class Vector3&, int32_t, float>>(0x439FA0, this, arg1, arg2, arg3);
    }

    // 0x43A060 | ?IntersectionEntryVector@aiPath@@QAEXAAVVector3@@M@Z
    inline void IntersectionEntryVector(class Vector3& arg1, float arg2)
    {
        return stub<member_func_t<void, aiPath, class Vector3&, float>>(0x43A060, this, arg1, arg2);
    }

    // 0x43A0D0 | ?IntersectionExitVector@aiPath@@QAEXAAVVector3@@M@Z
    inline void IntersectionExitVector(class Vector3& arg1, float arg2)
    {
        return stub<member_func_t<void, aiPath, class Vector3&, float>>(0x43A0D0, this, arg1, arg2);
    }

    // 0x43A140 | ?NumVehiclesAfterDist@aiPath@@QAEHHM@Z
    inline int32_t NumVehiclesAfterDist(int32_t arg1, float arg2)
    {
        return stub<member_func_t<int32_t, aiPath, int32_t, float>>(0x43A140, this, arg1, arg2);
    }

    // 0x43A190 | ?ContinuityError@aiPath@@QAEHH@Z
    inline int32_t ContinuityError(int32_t arg1)
    {
        return stub<member_func_t<int32_t, aiPath, int32_t>>(0x43A190, this, arg1);
    }

    // 0x43A1F0 | ?PopVehicle@aiPath@@QAEXPAVaiVehicleSpline@@H@Z
    inline void PopVehicle(class aiVehicleSpline* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, aiPath, class aiVehicleSpline*, int32_t>>(0x43A1F0, this, arg1, arg2);
    }

    // 0x43A2D0 | ?PushVehicle@aiPath@@QAEXPAVaiVehicleSpline@@H@Z
    inline void PushVehicle(class aiVehicleSpline* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, aiPath, class aiVehicleSpline*, int32_t>>(0x43A2D0, this, arg1, arg2);
    }

    // 0x43A340 | ?AddVehicle@aiPath@@QAEXPAVaiVehicleSpline@@HM@Z
    inline void AddVehicle(class aiVehicleSpline* arg1, int32_t arg2, float arg3)
    {
        return stub<member_func_t<void, aiPath, class aiVehicleSpline*, int32_t, float>>(
            0x43A340, this, arg1, arg2, arg3);
    }

    // 0x43A470 | ?RemoveVehicle@aiPath@@QAEHPAVaiVehicleSpline@@H@Z
    inline int32_t RemoveVehicle(class aiVehicleSpline* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, aiPath, class aiVehicleSpline*, int32_t>>(0x43A470, this, arg1, arg2);
    }

    // 0x43A580 | ?RoadCapacity@aiPath@@QAEHPAVaiVehicleSpline@@H@Z
    inline int32_t RoadCapacity(class aiVehicleSpline* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, aiPath, class aiVehicleSpline*, int32_t>>(0x43A580, this, arg1, arg2);
    }

    // 0x43A640 | ?AddPedestrian@aiPath@@QAEXPAVaiPedestrian@@@Z
    inline void AddPedestrian(class aiPedestrian* arg1)
    {
        return stub<member_func_t<void, aiPath, class aiPedestrian*>>(0x43A640, this, arg1);
    }

    // 0x43A680 | ?RemovePedestrian@aiPath@@QAEXPAVaiPedestrian@@@Z
    inline void RemovePedestrian(class aiPedestrian* arg1)
    {
        return stub<member_func_t<void, aiPath, class aiPedestrian*>>(0x43A680, this, arg1);
    }

    // 0x43A6F0 | ?Blocked@aiPath@@QAEXH@Z
    inline void Blocked(int32_t arg1)
    {
        return stub<member_func_t<void, aiPath, int32_t>>(0x43A6F0, this, arg1);
    }

    // 0x43A710 | ?VertXDir@aiPath@@QAEPAVVector3@@H@Z
    inline class Vector3* VertXDir(int32_t arg1)
    {
        return stub<member_func_t<class Vector3*, aiPath, int32_t>>(0x43A710, this, arg1);
    }

    // 0x43A790 | ?VertZDir@aiPath@@QAEPAVVector3@@H@Z
    inline class Vector3* VertZDir(int32_t arg1)
    {
        return stub<member_func_t<class Vector3*, aiPath, int32_t>>(0x43A790, this, arg1);
    }

    // 0x43A7E0 | ?CenterVertice@aiPath@@QAEPAVVector3@@H@Z
    inline class Vector3* CenterVertice(int32_t arg1)
    {
        return stub<member_func_t<class Vector3*, aiPath, int32_t>>(0x43A7E0, this, arg1);
    }

    // 0x452B50 | ?LBoundary@aiPath@@QAEPAVVector3@@H@Z
    inline class Vector3* LBoundary(int32_t arg1)
    {
        return stub<member_func_t<class Vector3*, aiPath, int32_t>>(0x452B50, this, arg1);
    }
};
