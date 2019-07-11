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

// agi:cmodel

#include "hooking.h"

class agiColorModel
{
public:
    // agiColorModel::`vftable' @ 0x595C90

    // 0x53DAA0 | ?GetColor@agiColorModel@@QAEIHHHH@Z
    inline uint32_t GetColor(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<uint32_t, agiColorModel, int32_t, int32_t, int32_t, int32_t>>(
            0x53DAA0, this, arg1, arg2, arg3, arg4);
    }

    // 0x53DAD0 | ?FindColor@agiColorModel@@QAEIHHHH@Z
    inline uint32_t FindColor(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<uint32_t, agiColorModel, int32_t, int32_t, int32_t, int32_t>>(
            0x53DAD0, this, arg1, arg2, arg3, arg4);
    }

    // 0x53DB00 | ?GetColor@agiColorModel@@QAEIABVVector3@@@Z
    inline uint32_t GetColor(class Vector3 const& arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModel, class Vector3 const&>>(0x53DB00, this, arg1);
    }

    // 0x53DB60 | ?GetColor@agiColorModel@@QAEIABVVector4@@@Z
    inline uint32_t GetColor(class Vector4 const& arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModel, class Vector4 const&>>(0x53DB60, this, arg1);
    }

    // 0x53F680 | ?FindMatch@agiColorModel@@SAPAV1@HHHH@Z
    static inline class agiColorModel* FindMatch(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
    {
        return stub<cdecl_t<class agiColorModel*, int32_t, int32_t, int32_t, int32_t>>(
            0x53F680, arg1, arg2, arg3, arg4);
    }

    // 0x53F730 | ?FindMatch@agiColorModel@@SAPAV1@PAVagiSurfaceDesc@@@Z
    static inline class agiColorModel* FindMatch(class agiSurfaceDesc* arg1)
    {
        return stub<cdecl_t<class agiColorModel*, class agiSurfaceDesc*>>(0x53F730, arg1);
    }
};
