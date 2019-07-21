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
    mmdyna:isect

    0x506470 | public: __thiscall mmIntersection::mmIntersection(void) | ??0mmIntersection@@QAE@XZ
    0x506480 | public: void __thiscall mmIntersection::InitSegment(class Vector3 const &,class Vector3 const &,class mmBoundTemplate *,int,int) | ?InitSegment@mmIntersection@@QAEXABVVector3@@0PAVmmBoundTemplate@@HH@Z
    0x506590 | public: void __thiscall mmIntersection::InitTransformedSegment(class Vector3 const &,class Vector3 const &,class mmBoundTemplate *,int,int) | ?InitTransformedSegment@mmIntersection@@QAEXABVVector3@@0PAVmmBoundTemplate@@HH@Z
    0x506670 | public: void __thiscall mmIntersection::InitSphere(class Vector3 const &,float,class mmBoundTemplate *,int) | ?InitSphere@mmIntersection@@QAEXABVVector3@@MPAVmmBoundTemplate@@H@Z
    0x5066D0 | public: void __thiscall mmIntersection::InitTransformedSphere(class Vector3 const &,float,class mmBoundTemplate *,int) | ?InitTransformedSphere@mmIntersection@@QAEXABVVector3@@MPAVmmBoundTemplate@@H@Z
    0x506730 | public: void __thiscall mmIntersection::Reset(void) | ?Reset@mmIntersection@@QAEXXZ
    0x506790 | public: void __thiscall mmIntersection::Transform(class Matrix34 const *) | ?Transform@mmIntersection@@QAEXPBVMatrix34@@@Z
    0x506860 | public: __thiscall mmEdgeBodyIsect::mmEdgeBodyIsect(void) | ??0mmEdgeBodyIsect@@QAE@XZ
    0x506870 | public: void __thiscall mmEdgeBodyIsect::Reset(void) | ?Reset@mmEdgeBodyIsect@@QAEXXZ
    0x506890 | public: void __thiscall mmEdgeBodyIsect::InitSegment(class Vector3 const &,class Vector3 const &,int,int,class Vector3 const &,float) | ?InitSegment@mmEdgeBodyIsect@@QAEXABVVector3@@0HH0M@Z
*/

class mmIntersection
{
public:
    // 0x506470 | ??0mmIntersection@@QAE@XZ
    inline mmIntersection()
    {
        // stub<member_func_t<void, mmIntersection>>(0x506470, this);

        unimplemented();
    }

    // 0x506480 | ?InitSegment@mmIntersection@@QAEXABVVector3@@0PAVmmBoundTemplate@@HH@Z
    inline void InitSegment(
        class Vector3 const& arg1, class Vector3 const& arg2, class mmBoundTemplate* arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<void, mmIntersection, class Vector3 const&, class Vector3 const&,
            class mmBoundTemplate*, int32_t, int32_t>>(0x506480, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x506590 | ?InitTransformedSegment@mmIntersection@@QAEXABVVector3@@0PAVmmBoundTemplate@@HH@Z
    inline void InitTransformedSegment(
        class Vector3 const& arg1, class Vector3 const& arg2, class mmBoundTemplate* arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<void, mmIntersection, class Vector3 const&, class Vector3 const&,
            class mmBoundTemplate*, int32_t, int32_t>>(0x506590, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x506670 | ?InitSphere@mmIntersection@@QAEXABVVector3@@MPAVmmBoundTemplate@@H@Z
    inline void InitSphere(class Vector3 const& arg1, float arg2, class mmBoundTemplate* arg3, int32_t arg4)
    {
        return stub<member_func_t<void, mmIntersection, class Vector3 const&, float, class mmBoundTemplate*, int32_t>>(
            0x506670, this, arg1, arg2, arg3, arg4);
    }

    // 0x5066D0 | ?InitTransformedSphere@mmIntersection@@QAEXABVVector3@@MPAVmmBoundTemplate@@H@Z
    inline void InitTransformedSphere(class Vector3 const& arg1, float arg2, class mmBoundTemplate* arg3, int32_t arg4)
    {
        return stub<member_func_t<void, mmIntersection, class Vector3 const&, float, class mmBoundTemplate*, int32_t>>(
            0x5066D0, this, arg1, arg2, arg3, arg4);
    }

    // 0x506730 | ?Reset@mmIntersection@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmIntersection>>(0x506730, this);
    }

    // 0x506790 | ?Transform@mmIntersection@@QAEXPBVMatrix34@@@Z
    inline void Transform(class Matrix34 const* arg1)
    {
        return stub<member_func_t<void, mmIntersection, class Matrix34 const*>>(0x506790, this, arg1);
    }
};

class mmEdgeBodyIsect
{
public:
    // 0x506860 | ??0mmEdgeBodyIsect@@QAE@XZ
    inline mmEdgeBodyIsect()
    {
        // stub<member_func_t<void, mmEdgeBodyIsect>>(0x506860, this);

        unimplemented();
    }

    // 0x506870 | ?Reset@mmEdgeBodyIsect@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmEdgeBodyIsect>>(0x506870, this);
    }

    // 0x506890 | ?InitSegment@mmEdgeBodyIsect@@QAEXABVVector3@@0HH0M@Z
    inline void InitSegment(class Vector3 const& arg1, class Vector3 const& arg2, int32_t arg3, int32_t arg4,
        class Vector3 const& arg5, float arg6)
    {
        return stub<member_func_t<void, mmEdgeBodyIsect, class Vector3 const&, class Vector3 const&, int32_t, int32_t,
            class Vector3 const&, float>>(0x506890, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }
};
