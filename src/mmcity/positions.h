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
    mmcity:positions

    0x485AA0 | void __cdecl InitPositions(void) | ?InitPositions@@YAXXZ
    0x485AE0 | void __cdecl LoadPositions(char *) | ?LoadPositions@@YAXPAD@Z
    0x485CA0 | int __cdecl GetPositionCount(void) | ?GetPositionCount@@YAHXZ
    0x485CB0 | class Vector4 & __cdecl GetPositionVector4(int) | ?GetPositionVector4@@YAAAVVector4@@H@Z
    0x485CE0 | void __cdecl DumpPositions(char *) | ?DumpPositions@@YAXPAD@Z
    0x485DA0 | int __cdecl RecallPosition(int,class Matrix34 *,int *,char *) | ?RecallPosition@@YAHHPAVMatrix34@@PAHPAD@Z
    0x485E30 | int __cdecl RegisterPosition(class Vector4 &,int,int,int,int,char *) | ?RegisterPosition@@YAHAAVVector4@@HHHHPAD@Z
    0x485F90 | public: __thiscall position_t::~position_t(void) | ??1position_t@@QAE@XZ
    0x60B1E8 | int DontClearPositions | ?DontClearPositions@@3HA
*/

#include "hooking.h"

// 0x485AA0 | ?InitPositions@@YAXXZ
inline void InitPositions()
{
    return stub<cdecl_t<void>>(0x485AA0);
}

// 0x485AE0 | ?LoadPositions@@YAXPAD@Z
inline void LoadPositions(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x485AE0, arg1);
}

// 0x485CA0 | ?GetPositionCount@@YAHXZ
inline int32_t GetPositionCount()
{
    return stub<cdecl_t<int32_t>>(0x485CA0);
}

// 0x485CB0 | ?GetPositionVector4@@YAAAVVector4@@H@Z
inline class Vector4& GetPositionVector4(int32_t arg1)
{
    return stub<cdecl_t<class Vector4&, int32_t>>(0x485CB0, arg1);
}

// 0x485CE0 | ?DumpPositions@@YAXPAD@Z
inline void DumpPositions(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x485CE0, arg1);
}

// 0x485DA0 | ?RecallPosition@@YAHHPAVMatrix34@@PAHPAD@Z
inline int32_t RecallPosition(int32_t arg1, class Matrix34* arg2, int32_t* arg3, char* arg4)
{
    return stub<cdecl_t<int32_t, int32_t, class Matrix34*, int32_t*, char*>>(0x485DA0, arg1, arg2, arg3, arg4);
}

// 0x485E30 | ?RegisterPosition@@YAHAAVVector4@@HHHHPAD@Z
inline int32_t RegisterPosition(class Vector4& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, char* arg6)
{
    return stub<cdecl_t<int32_t, class Vector4&, int32_t, int32_t, int32_t, int32_t, char*>>(
        0x485E30, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x60B1E8 | ?DontClearPositions@@3HA
inline extern_var(0x60B1E8, int32_t, DontClearPositions);

struct position_t
{
public:
    // 0x485F90 | ??1position_t@@QAE@XZ
    inline ~position_t()
    {
        stub<member_func_t<void, position_t>>(0x485F90, this);
    }
};
