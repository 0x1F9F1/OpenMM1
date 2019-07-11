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
    mmdyna:poly

    0x506930 | public: __thiscall mmPolygon::mmPolygon(void) | ??0mmPolygon@@QAE@XZ
    0x506970 | private: void __thiscall mmPolygon::Init(void) | ?Init@mmPolygon@@AAEXXZ
    0x506EF0 | private: void __thiscall mmPolygon::GetST(class Vector3 *,class Vector3 *,class mmBoundTemplate *) | ?GetST@mmPolygon@@AAEXPAVVector3@@0PAVmmBoundTemplate@@@Z
    0x507000 | private: int __thiscall mmPolygon::FullSegment(class mmEdgeBodyIsect *) | ?FullSegment@mmPolygon@@AAEHPAVmmEdgeBodyIsect@@@Z
    0x507590 | private: int __thiscall mmPolygon::FullSegment(class mmIntersection *) | ?FullSegment@mmPolygon@@AAEHPAVmmIntersection@@@Z
    0x507AE0 | private: int __thiscall mmPolygon::GetCorner(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,float &) | ?GetCorner@mmPolygon@@AAEHAAVVector3@@00000AAM@Z
    0x507DD0 | private: int __thiscall mmPolygon::FullSphere(class mmIntersection *) | ?FullSphere@mmPolygon@@AAEHPAVmmIntersection@@@Z
    0x508400 | private: void __thiscall mmPolygon::Plot(class mmBoundTemplate *,int) | ?Plot@mmPolygon@@AAEXPAVmmBoundTemplate@@H@Z
    0x508460 | private: void __thiscall mmPolygon::PlotTriangle(int,int,int,class mmBoundTemplate *,int) | ?PlotTriangle@mmPolygon@@AAEXHHHPAVmmBoundTemplate@@H@Z
    0x508CB0 | private: void __thiscall mmPolygon::PlotScan(int,int,int,class mmBoundTemplate *,int) | ?PlotScan@mmPolygon@@AAEXHHHPAVmmBoundTemplate@@H@Z
    0x508D30 | private: float __thiscall mmPolygon::MaxY(float,float,float,float) | ?MaxY@mmPolygon@@AAEMMMMM@Z
    0x508E80 | private: float __thiscall mmPolygon::CornersHeight(float,float,float,float) | ?CornersHeight@mmPolygon@@AAEMMMMM@Z
    0x5090A0 | private: float __thiscall mmPolygon::CheckCorner(float,float,float *,float *,float *) | ?CheckCorner@mmPolygon@@AAEMMMPAM00@Z
    0x509150 | private: float __thiscall mmPolygon::CheckCellXSide(float,float,float) | ?CheckCellXSide@mmPolygon@@AAEMMMM@Z
    0x509240 | private: float __thiscall mmPolygon::CheckCellZSide(float,float,float) | ?CheckCellZSide@mmPolygon@@AAEMMMM@Z
*/

#include "hooking.h"

class mmPolygon
{
public:
    // 0x506930 | ??0mmPolygon@@QAE@XZ
    inline mmPolygon()
    {
        stub<member_func_t<void, mmPolygon>>(0x506930, this);
    }

    // 0x506970 | ?Init@mmPolygon@@AAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, mmPolygon>>(0x506970, this);
    }

    // 0x506EF0 | ?GetST@mmPolygon@@AAEXPAVVector3@@0PAVmmBoundTemplate@@@Z
    inline void GetST(class Vector3* arg1, class Vector3* arg2, class mmBoundTemplate* arg3)
    {
        return stub<member_func_t<void, mmPolygon, class Vector3*, class Vector3*, class mmBoundTemplate*>>(
            0x506EF0, this, arg1, arg2, arg3);
    }

    // 0x507000 | ?FullSegment@mmPolygon@@AAEHPAVmmEdgeBodyIsect@@@Z
    inline int32_t FullSegment(class mmEdgeBodyIsect* arg1)
    {
        return stub<member_func_t<int32_t, mmPolygon, class mmEdgeBodyIsect*>>(0x507000, this, arg1);
    }

    // 0x507590 | ?FullSegment@mmPolygon@@AAEHPAVmmIntersection@@@Z
    inline int32_t FullSegment(class mmIntersection* arg1)
    {
        return stub<member_func_t<int32_t, mmPolygon, class mmIntersection*>>(0x507590, this, arg1);
    }

    // 0x507AE0 | ?GetCorner@mmPolygon@@AAEHAAVVector3@@00000AAM@Z
    inline int32_t GetCorner(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4,
        class Vector3& arg5, class Vector3& arg6, float& arg7)
    {
        return stub<member_func_t<int32_t, mmPolygon, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
            class Vector3&, class Vector3&, float&>>(0x507AE0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x507DD0 | ?FullSphere@mmPolygon@@AAEHPAVmmIntersection@@@Z
    inline int32_t FullSphere(class mmIntersection* arg1)
    {
        return stub<member_func_t<int32_t, mmPolygon, class mmIntersection*>>(0x507DD0, this, arg1);
    }

    // 0x508400 | ?Plot@mmPolygon@@AAEXPAVmmBoundTemplate@@H@Z
    inline void Plot(class mmBoundTemplate* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmPolygon, class mmBoundTemplate*, int32_t>>(0x508400, this, arg1, arg2);
    }

    // 0x508460 | ?PlotTriangle@mmPolygon@@AAEXHHHPAVmmBoundTemplate@@H@Z
    inline void PlotTriangle(int32_t arg1, int32_t arg2, int32_t arg3, class mmBoundTemplate* arg4, int32_t arg5)
    {
        return stub<member_func_t<void, mmPolygon, int32_t, int32_t, int32_t, class mmBoundTemplate*, int32_t>>(
            0x508460, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x508CB0 | ?PlotScan@mmPolygon@@AAEXHHHPAVmmBoundTemplate@@H@Z
    inline void PlotScan(int32_t arg1, int32_t arg2, int32_t arg3, class mmBoundTemplate* arg4, int32_t arg5)
    {
        return stub<member_func_t<void, mmPolygon, int32_t, int32_t, int32_t, class mmBoundTemplate*, int32_t>>(
            0x508CB0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x508D30 | ?MaxY@mmPolygon@@AAEMMMMM@Z
    inline float MaxY(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<float, mmPolygon, float, float, float, float>>(
            0x508D30, this, arg1, arg2, arg3, arg4);
    }

    // 0x508E80 | ?CornersHeight@mmPolygon@@AAEMMMMM@Z
    inline float CornersHeight(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<float, mmPolygon, float, float, float, float>>(
            0x508E80, this, arg1, arg2, arg3, arg4);
    }

    // 0x5090A0 | ?CheckCorner@mmPolygon@@AAEMMMPAM00@Z
    inline float CheckCorner(float arg1, float arg2, float* arg3, float* arg4, float* arg5)
    {
        return stub<member_func_t<float, mmPolygon, float, float, float*, float*, float*>>(
            0x5090A0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x509150 | ?CheckCellXSide@mmPolygon@@AAEMMMM@Z
    inline float CheckCellXSide(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<float, mmPolygon, float, float, float>>(0x509150, this, arg1, arg2, arg3);
    }

    // 0x509240 | ?CheckCellZSide@mmPolygon@@AAEMMMM@Z
    inline float CheckCellZSide(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<float, mmPolygon, float, float, float>>(0x509240, this, arg1, arg2, arg3);
    }
};
