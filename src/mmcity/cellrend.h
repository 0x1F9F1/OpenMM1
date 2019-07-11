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

// mmcity:cellrend

#include "hooking.h"

// 0x5AE490 | ?StaticTerrainLodTable@@3PAY01MA
inline extern_var(0x5AE490, float (*)[2], StaticTerrainLodTable);

// 0x5AE4B0 | ?ObjectMaxDist@@3MA
inline extern_var(0x5AE4B0, float, ObjectMaxDist);

// 0x5AE4B4 | ?EnableSlide@@3HA
inline extern_var(0x5AE4B4, int32_t, EnableSlide);

// 0x667AB8 | ?CRPassBoth@@3HA
inline extern_var(0x667AB8, int32_t, CRPassBoth);

// 0x667ABC | ?CRPass1Only@@3HA
inline extern_var(0x667ABC, int32_t, CRPass1Only);

// 0x667AC0 | ?CellTriCount@@3PAHA
inline extern_var(0x667AC0, int32_t*, CellTriCount);

// 0x667AD0 | ?CellTypeCount@@3PAHA
inline extern_var(0x667AD0, int32_t*, CellTypeCount);

// 0x667ADC | ?CRPass3Only@@3HA
inline extern_var(0x667ADC, int32_t, CRPass3Only);

struct mmCellRenderer
{
public:
    // mmCellRenderer::`vftable' @ 0x592164

    // 0x48BC90 | ??0mmCellRenderer@@QAE@XZ
    inline mmCellRenderer()
    {
        stub<member_func_t<void, mmCellRenderer>>(0x48BC90, this);
    }

    // 0x48BCC0 | ??1mmCellRenderer@@QAE@XZ
    inline ~mmCellRenderer()
    {
        stub<member_func_t<void, mmCellRenderer>>(0x48BCC0, this);
    }

    // 0x48BD00 | ?Init@mmCellRenderer@@QAEXPADHHHHPAH@Z
    inline void Init(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t* arg6)
    {
        return stub<member_func_t<void, mmCellRenderer, char*, int32_t, int32_t, int32_t, int32_t, int32_t*>>(
            0x48BD00, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x48C260 | ?Relight@mmCellRenderer@@QAEXXZ
    inline void Relight()
    {
        return stub<member_func_t<void, mmCellRenderer>>(0x48C260, this);
    }

    // 0x48C270 | ?Cull@mmCellRenderer@@UAEXH@Z
    virtual inline void Cull(int32_t arg1)
    {
        return stub<member_func_t<void, mmCellRenderer, int32_t>>(0x48C270, this, arg1);
    }
};
