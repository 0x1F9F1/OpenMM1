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
    agi:cmodel

    0x53DA90 | protected: virtual __thiscall agiColorModel::~agiColorModel(void) | ??1agiColorModel@@MAE@XZ
    0x53DAA0 | public: unsigned int __thiscall agiColorModel::GetColor(int,int,int,int) | ?GetColor@agiColorModel@@QAEIHHHH@Z
    0x53DAD0 | public: unsigned int __thiscall agiColorModel::FindColor(int,int,int,int) | ?FindColor@agiColorModel@@QAEIHHHH@Z
    0x53DB00 | public: unsigned int __thiscall agiColorModel::GetColor(class Vector3 const &) | ?GetColor@agiColorModel@@QAEIABVVector3@@@Z
    0x53DB60 | public: unsigned int __thiscall agiColorModel::GetColor(class Vector4 const &) | ?GetColor@agiColorModel@@QAEIABVVector4@@@Z
    0x595C90 | const agiColorModel::`vftable' | ??_7agiColorModel@@6B@
*/

#include "hooking.h"

#include "rgba.h"

class agiColorModel
{
public:
    uint32_t m_ByteCount {0};
    uint32_t m_BitCountR {0};
    uint32_t m_BitCountG {0};
    uint32_t m_BitCountB {0};
    uint32_t m_BitCountA {0};
    uint32_t m_MaskR {0};
    uint32_t m_MaskG {0};
    uint32_t m_MaskB {0};
    uint32_t m_MaskA {0};
    uint32_t m_RefCount {1};

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

    // 0x567350 | __purecall
    virtual inline ~agiColorModel()
    {
        stub<member_func_t<void, agiColorModel>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline uint32_t GetColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModel, struct agiRgba>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline uint32_t FindColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModel, struct agiRgba>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline uint32_t Filter(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<uint32_t, agiColorModel, uint32_t, uint32_t, uint32_t, uint32_t>>(
            0x567350, this, arg1, arg2, arg3, arg4);
    }

    // 0x567350 | __purecall
    virtual inline void SetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, agiColorModel, class agiSurfaceDesc*, int32_t, int32_t, uint32_t>>(
            0x567350, this, arg1, arg2, arg3, arg4);
    }

    // 0x567350 | __purecall
    virtual inline uint32_t GetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<uint32_t, agiColorModel, class agiSurfaceDesc*, int32_t, int32_t>>(
            0x567350, this, arg1, arg2, arg3);
    }
};

check_size(agiColorModel, 0x2C);