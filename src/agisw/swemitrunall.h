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

// agisw:swemitrunall

#include "hooking.h"

// 0x51FA60 | ?swEmitRun1_NoZOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun1_NoZOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x51FA60, arg1);
}

// 0x51FAF0 | ?swEmitRun2_NoZOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun2_NoZOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x51FAF0, arg1);
}

// 0x51FB80 | ?swEmitRun3_NoZOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun3_NoZOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x51FB80, arg1);
}

// 0x51FC10 | ?swEmitRun4_NoZOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun4_NoZOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x51FC10, arg1);
}

// 0x51FCA0 | ?swEmitRun5_NoZOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun5_NoZOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x51FCA0, arg1);
}

// 0x51FEC0 | ?swEmitRun6_NoZOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun6_NoZOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x51FEC0, arg1);
}

// 0x5200E0 | ?swEmitRun7_NoZOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun7_NoZOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5200E0, arg1);
}

// 0x520300 | ?swEmitRun8_NoZOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun8_NoZOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x520300, arg1);
}

// 0x520510 | ?swEmitRun0_ZReadOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x520510, arg1);
}

// 0x5205F0 | ?swEmitRun1_ZReadWriteOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun1_ZReadWriteOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5205F0, arg1);
}

// 0x5206D0 | ?swEmitRun2_ZReadWriteOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun2_ZReadWriteOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5206D0, arg1);
}

// 0x5207B0 | ?swEmitRun3_ZReadWriteOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun3_ZReadWriteOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5207B0, arg1);
}

// 0x520890 | ?swEmitRun4_ZReadWriteOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun4_ZReadWriteOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x520890, arg1);
}

// 0x520970 | ?swEmitRun5_ZReadWriteOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun5_ZReadWriteOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x520970, arg1);
}

// 0x520CD0 | ?swEmitRun6_ZReadWriteOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun6_ZReadWriteOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x520CD0, arg1);
}

// 0x521030 | ?swEmitRun7_ZReadWriteOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun7_ZReadWriteOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x521030, arg1);
}

// 0x521390 | ?swEmitRun8_ZReadWriteOpaqueDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun8_ZReadWriteOpaqueDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x521390, arg1);
}

// 0x5216E0 | ?swEmitRun0_NoZOpaqueDecalLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5216E0, arg1);
}

// 0x521790 | ?swEmitRun0_ZReadOpaqueDecalLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x521790, arg1);
}

// 0x521890 | ?swEmitRun0_ZReadWriteOpaqueDecalLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x521890, arg1);
}

// 0x521990 | ?swEmitRun0_NoZChromaDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x521990, arg1);
}

// 0x521A30 | ?swEmitRun0_ZReadChromaDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x521A30, arg1);
}

// 0x521B20 | ?swEmitRun0_ZReadWriteChromaDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x521B20, arg1);
}

// 0x521C10 | ?swEmitRun0_NoZChromaDecalLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x521C10, arg1);
}

// 0x521CD0 | ?swEmitRun0_ZReadChromaDecalLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x521CD0, arg1);
}

// 0x521DD0 | ?swEmitRun0_ZReadWriteChromaDecalLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x521DD0, arg1);
}

// 0x521EE0 | ?swEmitRun0_NoZGlowDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x521EE0, arg1);
}

// 0x521FB0 | ?swEmitRun0_ZReadGlowDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x521FB0, arg1);
}

// 0x5220D0 | ?swEmitRun0_ZReadWriteGlowDecalLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5220D0, arg1);
}

// 0x522200 | ?swEmitRun0_NoZGlowDecalLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x522200, arg1);
}

// 0x5222E0 | ?swEmitRun0_ZReadGlowDecalLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5222E0, arg1);
}

// 0x522410 | ?swEmitRun0_ZReadWriteGlowDecalLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x522410, arg1);
}

// 0x522550 | ?swEmitRun0_NoZOpaqueModulateLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x522550, arg1);
}

// 0x5225F0 | ?swEmitRun0_ZReadOpaqueModulateLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5225F0, arg1);
}

// 0x5226E0 | ?swEmitRun0_ZReadWriteOpaqueModulateLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5226E0, arg1);
}

// 0x5227E0 | ?swEmitRun0_NoZOpaqueModulateLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5227E0, arg1);
}

// 0x522890 | ?swEmitRun0_ZReadOpaqueModulateLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x522890, arg1);
}

// 0x522990 | ?swEmitRun0_ZReadWriteOpaqueModulateLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x522990, arg1);
}

// 0x522AA0 | ?swEmitRun0_NoZChromaModulateLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x522AA0, arg1);
}

// 0x522B50 | ?swEmitRun0_ZReadChromaModulateLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x522B50, arg1);
}

// 0x522C50 | ?swEmitRun0_ZReadWriteChromaModulateLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x522C50, arg1);
}

// 0x522D50 | ?swEmitRun0_NoZChromaModulateLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x522D50, arg1);
}

// 0x522E10 | ?swEmitRun0_ZReadChromaModulateLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x522E10, arg1);
}

// 0x522F20 | ?swEmitRun0_ZReadWriteChromaModulateLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x522F20, arg1);
}

// 0x523030 | ?swEmitRun0_NoZGlowModulateLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523030, arg1);
}

// 0x523100 | ?swEmitRun0_ZReadGlowModulateLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523100, arg1);
}

// 0x523220 | ?swEmitRun0_ZReadWriteGlowModulateLinearSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateLinearSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523220, arg1);
}

// 0x523350 | ?swEmitRun0_NoZGlowModulateLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523350, arg1);
}

// 0x523430 | ?swEmitRun0_ZReadGlowModulateLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523430, arg1);
}

// 0x523560 | ?swEmitRun0_ZReadWriteGlowModulateLinearStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateLinearStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523560, arg1);
}

// 0x5236A0 | ?swEmitRun0_NoZOpaqueDecalParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5236A0, arg1);
}

// 0x523760 | ?swEmitRun0_ZReadOpaqueDecalParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523760, arg1);
}

// 0x523870 | ?swEmitRun0_ZReadWriteOpaqueDecalParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523870, arg1);
}

// 0x523980 | ?swEmitRun0_NoZOpaqueDecalParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523980, arg1);
}

// 0x523A50 | ?swEmitRun0_ZReadOpaqueDecalParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523A50, arg1);
}

// 0x523B70 | ?swEmitRun0_ZReadWriteOpaqueDecalParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523B70, arg1);
}

// 0x523C90 | ?swEmitRun0_NoZChromaDecalParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523C90, arg1);
}

// 0x523D50 | ?swEmitRun0_ZReadChromaDecalParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523D50, arg1);
}

// 0x523E70 | ?swEmitRun0_ZReadWriteChromaDecalParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523E70, arg1);
}

// 0x523F90 | ?swEmitRun0_NoZChromaDecalParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x523F90, arg1);
}

// 0x524070 | ?swEmitRun0_ZReadChromaDecalParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x524070, arg1);
}

// 0x5241A0 | ?swEmitRun0_ZReadWriteChromaDecalParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5241A0, arg1);
}

// 0x5242D0 | ?swEmitRun0_NoZGlowDecalParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5242D0, arg1);
}

// 0x5243C0 | ?swEmitRun0_ZReadGlowDecalParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5243C0, arg1);
}

// 0x524500 | ?swEmitRun0_ZReadWriteGlowDecalParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x524500, arg1);
}

// 0x524650 | ?swEmitRun0_NoZGlowDecalParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x524650, arg1);
}

// 0x524760 | ?swEmitRun0_ZReadGlowDecalParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x524760, arg1);
}

// 0x5248B0 | ?swEmitRun0_ZReadWriteGlowDecalParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5248B0, arg1);
}

// 0x524A10 | ?swEmitRun0_NoZOpaqueModulateParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x524A10, arg1);
}

// 0x524AD0 | ?swEmitRun0_ZReadOpaqueModulateParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x524AD0, arg1);
}

// 0x524BE0 | ?swEmitRun0_ZReadWriteOpaqueModulateParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x524BE0, arg1);
}

// 0x524CF0 | ?swEmitRun0_NoZOpaqueModulateParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x524CF0, arg1);
}

// 0x524DD0 | ?swEmitRun0_ZReadOpaqueModulateParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x524DD0, arg1);
}

// 0x524EF0 | ?swEmitRun0_ZReadWriteOpaqueModulateParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x524EF0, arg1);
}

// 0x525020 | ?swEmitRun0_NoZChromaModulateParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x525020, arg1);
}

// 0x5250F0 | ?swEmitRun0_ZReadChromaModulateParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5250F0, arg1);
}

// 0x525210 | ?swEmitRun0_ZReadWriteChromaModulateParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x525210, arg1);
}

// 0x525330 | ?swEmitRun0_NoZChromaModulateParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x525330, arg1);
}

// 0x525410 | ?swEmitRun0_ZReadChromaModulateParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x525410, arg1);
}

// 0x525540 | ?swEmitRun0_ZReadWriteChromaModulateParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x525540, arg1);
}

// 0x525680 | ?swEmitRun0_NoZGlowModulateParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x525680, arg1);
}

// 0x525770 | ?swEmitRun0_ZReadGlowModulateParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x525770, arg1);
}

// 0x5258B0 | ?swEmitRun0_ZReadWriteGlowModulateParaSolidWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateParaSolidWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5258B0, arg1);
}

// 0x525A00 | ?swEmitRun0_NoZGlowModulateParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x525A00, arg1);
}

// 0x525B10 | ?swEmitRun0_ZReadGlowModulateParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x525B10, arg1);
}

// 0x525C60 | ?swEmitRun0_ZReadWriteGlowModulateParaStippleWUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateParaStippleWUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x525C60, arg1);
}

// 0x525DC0 | ?swEmitRun0_NoZOpaqueDecalLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x525DC0, arg1);
}

// 0x525E90 | ?swEmitRun0_ZReadOpaqueDecalLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x525E90, arg1);
}

// 0x525FC0 | ?swEmitRun0_ZReadWriteOpaqueDecalLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x525FC0, arg1);
}

// 0x5260E0 | ?swEmitRun0_NoZOpaqueDecalLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5260E0, arg1);
}

// 0x5261C0 | ?swEmitRun0_ZReadOpaqueDecalLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5261C0, arg1);
}

// 0x5262F0 | ?swEmitRun0_ZReadWriteOpaqueDecalLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5262F0, arg1);
}

// 0x526430 | ?swEmitRun0_NoZChromaDecalLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x526430, arg1);
}

// 0x526520 | ?swEmitRun0_ZReadChromaDecalLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x526520, arg1);
}

// 0x526660 | ?swEmitRun0_ZReadWriteChromaDecalLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x526660, arg1);
}

// 0x5267A0 | ?swEmitRun0_NoZChromaDecalLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5267A0, arg1);
}

// 0x5268A0 | ?swEmitRun0_ZReadChromaDecalLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5268A0, arg1);
}

// 0x5269F0 | ?swEmitRun0_ZReadWriteChromaDecalLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5269F0, arg1);
}

// 0x526B40 | ?swEmitRun0_NoZGlowDecalLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x526B40, arg1);
}

// 0x526C40 | ?swEmitRun0_ZReadGlowDecalLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x526C40, arg1);
}

// 0x526D90 | ?swEmitRun0_ZReadWriteGlowDecalLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x526D90, arg1);
}

// 0x526ED0 | ?swEmitRun0_NoZGlowDecalLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x526ED0, arg1);
}

// 0x526FE0 | ?swEmitRun0_ZReadGlowDecalLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x526FE0, arg1);
}

// 0x527140 | ?swEmitRun0_ZReadWriteGlowDecalLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x527140, arg1);
}

// 0x5272A0 | ?swEmitRun0_NoZOpaqueModulateLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5272A0, arg1);
}

// 0x527380 | ?swEmitRun0_ZReadOpaqueModulateLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x527380, arg1);
}

// 0x5274C0 | ?swEmitRun0_ZReadWriteOpaqueModulateLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5274C0, arg1);
}

// 0x5275F0 | ?swEmitRun0_NoZOpaqueModulateLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5275F0, arg1);
}

// 0x5276E0 | ?swEmitRun0_ZReadOpaqueModulateLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5276E0, arg1);
}

// 0x527820 | ?swEmitRun0_ZReadWriteOpaqueModulateLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x527820, arg1);
}

// 0x527970 | ?swEmitRun0_NoZChromaModulateLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x527970, arg1);
}

// 0x527A70 | ?swEmitRun0_ZReadChromaModulateLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x527A70, arg1);
}

// 0x527BC0 | ?swEmitRun0_ZReadWriteChromaModulateLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x527BC0, arg1);
}

// 0x527D10 | ?swEmitRun0_NoZChromaModulateLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x527D10, arg1);
}

// 0x527E20 | ?swEmitRun0_ZReadChromaModulateLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x527E20, arg1);
}

// 0x527F80 | ?swEmitRun0_ZReadWriteChromaModulateLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x527F80, arg1);
}

// 0x5280E0 | ?swEmitRun0_NoZGlowModulateLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5280E0, arg1);
}

// 0x5281E0 | ?swEmitRun0_ZReadGlowModulateLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5281E0, arg1);
}

// 0x528330 | ?swEmitRun0_ZReadWriteGlowModulateLinearSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateLinearSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x528330, arg1);
}

// 0x528470 | ?swEmitRun0_NoZGlowModulateLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x528470, arg1);
}

// 0x528580 | ?swEmitRun0_ZReadGlowModulateLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x528580, arg1);
}

// 0x5286E0 | ?swEmitRun0_ZReadWriteGlowModulateLinearStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateLinearStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5286E0, arg1);
}

// 0x528840 | ?swEmitRun0_NoZOpaqueDecalParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x528840, arg1);
}

// 0x528940 | ?swEmitRun0_ZReadOpaqueDecalParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x528940, arg1);
}

// 0x528A90 | ?swEmitRun0_ZReadWriteOpaqueDecalParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x528A90, arg1);
}

// 0x528BE0 | ?swEmitRun0_NoZOpaqueDecalParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x528BE0, arg1);
}

// 0x528CF0 | ?swEmitRun0_ZReadOpaqueDecalParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x528CF0, arg1);
}

// 0x528E50 | ?swEmitRun0_ZReadWriteOpaqueDecalParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x528E50, arg1);
}

// 0x528FB0 | ?swEmitRun0_NoZChromaDecalParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x528FB0, arg1);
}

// 0x5290C0 | ?swEmitRun0_ZReadChromaDecalParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5290C0, arg1);
}

// 0x529220 | ?swEmitRun0_ZReadWriteChromaDecalParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x529220, arg1);
}

// 0x529380 | ?swEmitRun0_NoZChromaDecalParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x529380, arg1);
}

// 0x5294A0 | ?swEmitRun0_ZReadChromaDecalParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5294A0, arg1);
}

// 0x529610 | ?swEmitRun0_ZReadWriteChromaDecalParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x529610, arg1);
}

// 0x529780 | ?swEmitRun0_NoZGlowDecalParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x529780, arg1);
}

// 0x5298A0 | ?swEmitRun0_ZReadGlowDecalParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5298A0, arg1);
}

// 0x529A10 | ?swEmitRun0_ZReadWriteGlowDecalParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x529A10, arg1);
}

// 0x529B80 | ?swEmitRun0_NoZGlowDecalParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x529B80, arg1);
}

// 0x529CB0 | ?swEmitRun0_ZReadGlowDecalParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x529CB0, arg1);
}

// 0x529E30 | ?swEmitRun0_ZReadWriteGlowDecalParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x529E30, arg1);
}

// 0x529FC0 | ?swEmitRun0_NoZOpaqueModulateParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x529FC0, arg1);
}

// 0x52A0D0 | ?swEmitRun0_ZReadOpaqueModulateParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52A0D0, arg1);
}

// 0x52A230 | ?swEmitRun0_ZReadWriteOpaqueModulateParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52A230, arg1);
}

// 0x52A380 | ?swEmitRun0_NoZOpaqueModulateParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52A380, arg1);
}

// 0x52A4A0 | ?swEmitRun0_ZReadOpaqueModulateParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52A4A0, arg1);
}

// 0x52A600 | ?swEmitRun0_ZReadWriteOpaqueModulateParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52A600, arg1);
}

// 0x52A770 | ?swEmitRun0_NoZChromaModulateParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52A770, arg1);
}

// 0x52A890 | ?swEmitRun0_ZReadChromaModulateParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52A890, arg1);
}

// 0x52AA00 | ?swEmitRun0_ZReadWriteChromaModulateParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52AA00, arg1);
}

// 0x52AB60 | ?swEmitRun0_NoZChromaModulateParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52AB60, arg1);
}

// 0x52AC90 | ?swEmitRun0_ZReadChromaModulateParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52AC90, arg1);
}

// 0x52AE10 | ?swEmitRun0_ZReadWriteChromaModulateParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52AE10, arg1);
}

// 0x52AF90 | ?swEmitRun0_NoZGlowModulateParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52AF90, arg1);
}

// 0x52B0B0 | ?swEmitRun0_ZReadGlowModulateParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52B0B0, arg1);
}

// 0x52B220 | ?swEmitRun0_ZReadWriteGlowModulateParaSolidCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateParaSolidCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52B220, arg1);
}

// 0x52B390 | ?swEmitRun0_NoZGlowModulateParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52B390, arg1);
}

// 0x52B4C0 | ?swEmitRun0_ZReadGlowModulateParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52B4C0, arg1);
}

// 0x52B640 | ?swEmitRun0_ZReadWriteGlowModulateParaStippleCUWV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateParaStippleCUWV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52B640, arg1);
}

// 0x52B7D0 | ?swEmitRun0_NoZOpaqueDecalLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52B7D0, arg1);
}

// 0x52B8A0 | ?swEmitRun0_ZReadOpaqueDecalLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52B8A0, arg1);
}

// 0x52B9D0 | ?swEmitRun0_ZReadWriteOpaqueDecalLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52B9D0, arg1);
}

// 0x52BAF0 | ?swEmitRun0_NoZOpaqueDecalLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52BAF0, arg1);
}

// 0x52BBD0 | ?swEmitRun0_ZReadOpaqueDecalLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52BBD0, arg1);
}

// 0x52BD00 | ?swEmitRun0_ZReadWriteOpaqueDecalLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52BD00, arg1);
}

// 0x52BE40 | ?swEmitRun0_NoZChromaDecalLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52BE40, arg1);
}

// 0x52BF20 | ?swEmitRun0_ZReadChromaDecalLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52BF20, arg1);
}

// 0x52C050 | ?swEmitRun0_ZReadWriteChromaDecalLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52C050, arg1);
}

// 0x52C190 | ?swEmitRun0_NoZChromaDecalLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52C190, arg1);
}

// 0x52C290 | ?swEmitRun0_ZReadChromaDecalLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52C290, arg1);
}

// 0x52C3E0 | ?swEmitRun0_ZReadWriteChromaDecalLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52C3E0, arg1);
}

// 0x52C530 | ?swEmitRun0_NoZGlowDecalLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52C530, arg1);
}

// 0x52C630 | ?swEmitRun0_ZReadGlowDecalLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52C630, arg1);
}

// 0x52C770 | ?swEmitRun0_ZReadWriteGlowDecalLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52C770, arg1);
}

// 0x52C8B0 | ?swEmitRun0_NoZGlowDecalLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52C8B0, arg1);
}

// 0x52C9B0 | ?swEmitRun0_ZReadGlowDecalLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52C9B0, arg1);
}

// 0x52CB10 | ?swEmitRun0_ZReadWriteGlowDecalLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52CB10, arg1);
}

// 0x52CC70 | ?swEmitRun0_NoZOpaqueModulateLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52CC70, arg1);
}

// 0x52CD50 | ?swEmitRun0_ZReadOpaqueModulateLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52CD50, arg1);
}

// 0x52CE90 | ?swEmitRun0_ZReadWriteOpaqueModulateLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52CE90, arg1);
}

// 0x52CFC0 | ?swEmitRun0_NoZOpaqueModulateLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52CFC0, arg1);
}

// 0x52D0B0 | ?swEmitRun0_ZReadOpaqueModulateLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52D0B0, arg1);
}

// 0x52D1F0 | ?swEmitRun0_ZReadWriteOpaqueModulateLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52D1F0, arg1);
}

// 0x52D340 | ?swEmitRun0_NoZChromaModulateLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52D340, arg1);
}

// 0x52D430 | ?swEmitRun0_ZReadChromaModulateLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52D430, arg1);
}

// 0x52D570 | ?swEmitRun0_ZReadWriteChromaModulateLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52D570, arg1);
}

// 0x52D6B0 | ?swEmitRun0_NoZChromaModulateLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52D6B0, arg1);
}

// 0x52D7B0 | ?swEmitRun0_ZReadChromaModulateLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52D7B0, arg1);
}

// 0x52D910 | ?swEmitRun0_ZReadWriteChromaModulateLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52D910, arg1);
}

// 0x52DA70 | ?swEmitRun0_NoZGlowModulateLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52DA70, arg1);
}

// 0x52DB70 | ?swEmitRun0_ZReadGlowModulateLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52DB70, arg1);
}

// 0x52DCB0 | ?swEmitRun0_ZReadWriteGlowModulateLinearSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateLinearSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52DCB0, arg1);
}

// 0x52DDF0 | ?swEmitRun0_NoZGlowModulateLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52DDF0, arg1);
}

// 0x52DEF0 | ?swEmitRun0_ZReadGlowModulateLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52DEF0, arg1);
}

// 0x52E050 | ?swEmitRun0_ZReadWriteGlowModulateLinearStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateLinearStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52E050, arg1);
}

// 0x52E1B0 | ?swEmitRun0_NoZOpaqueDecalParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52E1B0, arg1);
}

// 0x52E2A0 | ?swEmitRun0_ZReadOpaqueDecalParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52E2A0, arg1);
}

// 0x52E3F0 | ?swEmitRun0_ZReadWriteOpaqueDecalParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52E3F0, arg1);
}

// 0x52E530 | ?swEmitRun0_NoZOpaqueDecalParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52E530, arg1);
}

// 0x52E630 | ?swEmitRun0_ZReadOpaqueDecalParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52E630, arg1);
}

// 0x52E780 | ?swEmitRun0_ZReadWriteOpaqueDecalParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52E780, arg1);
}

// 0x52E8E0 | ?swEmitRun0_NoZChromaDecalParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52E8E0, arg1);
}

// 0x52E9F0 | ?swEmitRun0_ZReadChromaDecalParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52E9F0, arg1);
}

// 0x52EB40 | ?swEmitRun0_ZReadWriteChromaDecalParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52EB40, arg1);
}

// 0x52EC90 | ?swEmitRun0_NoZChromaDecalParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52EC90, arg1);
}

// 0x52EDB0 | ?swEmitRun0_ZReadChromaDecalParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52EDB0, arg1);
}

// 0x52EF10 | ?swEmitRun0_ZReadWriteChromaDecalParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52EF10, arg1);
}

// 0x52F080 | ?swEmitRun0_NoZGlowDecalParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52F080, arg1);
}

// 0x52F1A0 | ?swEmitRun0_ZReadGlowDecalParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52F1A0, arg1);
}

// 0x52F310 | ?swEmitRun0_ZReadWriteGlowDecalParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52F310, arg1);
}

// 0x52F480 | ?swEmitRun0_NoZGlowDecalParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52F480, arg1);
}

// 0x52F5A0 | ?swEmitRun0_ZReadGlowDecalParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52F5A0, arg1);
}

// 0x52F720 | ?swEmitRun0_ZReadWriteGlowDecalParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52F720, arg1);
}

// 0x52F8A0 | ?swEmitRun0_NoZOpaqueModulateParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52F8A0, arg1);
}

// 0x52F9A0 | ?swEmitRun0_ZReadOpaqueModulateParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52F9A0, arg1);
}

// 0x52FB00 | ?swEmitRun0_ZReadWriteOpaqueModulateParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52FB00, arg1);
}

// 0x52FC50 | ?swEmitRun0_NoZOpaqueModulateParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52FC50, arg1);
}

// 0x52FD60 | ?swEmitRun0_ZReadOpaqueModulateParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52FD60, arg1);
}

// 0x52FEC0 | ?swEmitRun0_ZReadWriteOpaqueModulateParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x52FEC0, arg1);
}

// 0x530030 | ?swEmitRun0_NoZChromaModulateParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x530030, arg1);
}

// 0x530150 | ?swEmitRun0_ZReadChromaModulateParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x530150, arg1);
}

// 0x5302B0 | ?swEmitRun0_ZReadWriteChromaModulateParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5302B0, arg1);
}

// 0x530410 | ?swEmitRun0_NoZChromaModulateParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x530410, arg1);
}

// 0x530530 | ?swEmitRun0_ZReadChromaModulateParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x530530, arg1);
}

// 0x5306A0 | ?swEmitRun0_ZReadWriteChromaModulateParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5306A0, arg1);
}

// 0x530810 | ?swEmitRun0_NoZGlowModulateParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x530810, arg1);
}

// 0x530930 | ?swEmitRun0_ZReadGlowModulateParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x530930, arg1);
}

// 0x530AA0 | ?swEmitRun0_ZReadWriteGlowModulateParaSolidWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateParaSolidWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x530AA0, arg1);
}

// 0x530C10 | ?swEmitRun0_NoZGlowModulateParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x530C10, arg1);
}

// 0x530D30 | ?swEmitRun0_ZReadGlowModulateParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x530D30, arg1);
}

// 0x530EB0 | ?swEmitRun0_ZReadWriteGlowModulateParaStippleWUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateParaStippleWUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x530EB0, arg1);
}

// 0x531030 | ?swEmitRun0_NoZOpaqueDecalLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x531030, arg1);
}

// 0x531130 | ?swEmitRun0_ZReadOpaqueDecalLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x531130, arg1);
}

// 0x531290 | ?swEmitRun0_ZReadWriteOpaqueDecalLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x531290, arg1);
}

// 0x5313E0 | ?swEmitRun0_NoZOpaqueDecalLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5313E0, arg1);
}

// 0x5314F0 | ?swEmitRun0_ZReadOpaqueDecalLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5314F0, arg1);
}

// 0x531650 | ?swEmitRun0_ZReadWriteOpaqueDecalLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x531650, arg1);
}

// 0x5317B0 | ?swEmitRun0_NoZChromaDecalLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5317B0, arg1);
}

// 0x5318D0 | ?swEmitRun0_ZReadChromaDecalLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5318D0, arg1);
}

// 0x531A40 | ?swEmitRun0_ZReadWriteChromaDecalLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x531A40, arg1);
}

// 0x531BB0 | ?swEmitRun0_NoZChromaDecalLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x531BB0, arg1);
}

// 0x531CE0 | ?swEmitRun0_ZReadChromaDecalLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x531CE0, arg1);
}

// 0x531E60 | ?swEmitRun0_ZReadWriteChromaDecalLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x531E60, arg1);
}

// 0x531FE0 | ?swEmitRun0_NoZGlowDecalLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x531FE0, arg1);
}

// 0x532110 | ?swEmitRun0_ZReadGlowDecalLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x532110, arg1);
}

// 0x532290 | ?swEmitRun0_ZReadWriteGlowDecalLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x532290, arg1);
}

// 0x532400 | ?swEmitRun0_NoZGlowDecalLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x532400, arg1);
}

// 0x532540 | ?swEmitRun0_ZReadGlowDecalLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x532540, arg1);
}

// 0x5326D0 | ?swEmitRun0_ZReadWriteGlowDecalLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5326D0, arg1);
}

// 0x532850 | ?swEmitRun0_NoZOpaqueModulateLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x532850, arg1);
}

// 0x532960 | ?swEmitRun0_ZReadOpaqueModulateLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x532960, arg1);
}

// 0x532AC0 | ?swEmitRun0_ZReadWriteOpaqueModulateLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x532AC0, arg1);
}

// 0x532C20 | ?swEmitRun0_NoZOpaqueModulateLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x532C20, arg1);
}

// 0x532D40 | ?swEmitRun0_ZReadOpaqueModulateLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x532D40, arg1);
}

// 0x532EB0 | ?swEmitRun0_ZReadWriteOpaqueModulateLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x532EB0, arg1);
}

// 0x533020 | ?swEmitRun0_NoZChromaModulateLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x533020, arg1);
}

// 0x533150 | ?swEmitRun0_ZReadChromaModulateLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x533150, arg1);
}

// 0x5332D0 | ?swEmitRun0_ZReadWriteChromaModulateLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5332D0, arg1);
}

// 0x533450 | ?swEmitRun0_NoZChromaModulateLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x533450, arg1);
}

// 0x533590 | ?swEmitRun0_ZReadChromaModulateLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x533590, arg1);
}

// 0x533720 | ?swEmitRun0_ZReadWriteChromaModulateLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x533720, arg1);
}

// 0x5338B0 | ?swEmitRun0_NoZGlowModulateLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5338B0, arg1);
}

// 0x5339E0 | ?swEmitRun0_ZReadGlowModulateLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5339E0, arg1);
}

// 0x533B60 | ?swEmitRun0_ZReadWriteGlowModulateLinearSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateLinearSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x533B60, arg1);
}

// 0x533CD0 | ?swEmitRun0_NoZGlowModulateLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x533CD0, arg1);
}

// 0x533E10 | ?swEmitRun0_ZReadGlowModulateLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x533E10, arg1);
}

// 0x533FA0 | ?swEmitRun0_ZReadWriteGlowModulateLinearStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateLinearStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x533FA0, arg1);
}

// 0x534120 | ?swEmitRun0_NoZOpaqueDecalParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x534120, arg1);
}

// 0x534240 | ?swEmitRun0_ZReadOpaqueDecalParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x534240, arg1);
}

// 0x5343C0 | ?swEmitRun0_ZReadWriteOpaqueDecalParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5343C0, arg1);
}

// 0x534530 | ?swEmitRun0_NoZOpaqueDecalParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueDecalParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x534530, arg1);
}

// 0x534660 | ?swEmitRun0_ZReadOpaqueDecalParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueDecalParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x534660, arg1);
}

// 0x5347E0 | ?swEmitRun0_ZReadWriteOpaqueDecalParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueDecalParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5347E0, arg1);
}

// 0x534970 | ?swEmitRun0_NoZChromaDecalParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x534970, arg1);
}

// 0x534AB0 | ?swEmitRun0_ZReadChromaDecalParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x534AB0, arg1);
}

// 0x534C40 | ?swEmitRun0_ZReadWriteChromaDecalParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x534C40, arg1);
}

// 0x534DD0 | ?swEmitRun0_NoZChromaDecalParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaDecalParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x534DD0, arg1);
}

// 0x534F20 | ?swEmitRun0_ZReadChromaDecalParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaDecalParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x534F20, arg1);
}

// 0x5350C0 | ?swEmitRun0_ZReadWriteChromaDecalParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaDecalParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5350C0, arg1);
}

// 0x535260 | ?swEmitRun0_NoZGlowDecalParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x535260, arg1);
}

// 0x5353B0 | ?swEmitRun0_ZReadGlowDecalParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5353B0, arg1);
}

// 0x535550 | ?swEmitRun0_ZReadWriteGlowDecalParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x535550, arg1);
}

// 0x5356E0 | ?swEmitRun0_NoZGlowDecalParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowDecalParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5356E0, arg1);
}

// 0x535840 | ?swEmitRun0_ZReadGlowDecalParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowDecalParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x535840, arg1);
}

// 0x5359F0 | ?swEmitRun0_ZReadWriteGlowDecalParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowDecalParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5359F0, arg1);
}

// 0x535BA0 | ?swEmitRun0_NoZOpaqueModulateParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x535BA0, arg1);
}

// 0x535CD0 | ?swEmitRun0_ZReadOpaqueModulateParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x535CD0, arg1);
}

// 0x535E60 | ?swEmitRun0_ZReadWriteOpaqueModulateParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x535E60, arg1);
}

// 0x535FE0 | ?swEmitRun0_NoZOpaqueModulateParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_NoZOpaqueModulateParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x535FE0, arg1);
}

// 0x536120 | ?swEmitRun0_ZReadOpaqueModulateParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadOpaqueModulateParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x536120, arg1);
}

// 0x5362B0 | ?swEmitRun0_ZReadWriteOpaqueModulateParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteOpaqueModulateParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5362B0, arg1);
}

// 0x536450 | ?swEmitRun0_NoZChromaModulateParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x536450, arg1);
}

// 0x5365A0 | ?swEmitRun0_ZReadChromaModulateParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5365A0, arg1);
}

// 0x536740 | ?swEmitRun0_ZReadWriteChromaModulateParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x536740, arg1);
}

// 0x5368E0 | ?swEmitRun0_NoZChromaModulateParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_NoZChromaModulateParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5368E0, arg1);
}

// 0x536A40 | ?swEmitRun0_ZReadChromaModulateParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadChromaModulateParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x536A40, arg1);
}

// 0x536BF0 | ?swEmitRun0_ZReadWriteChromaModulateParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteChromaModulateParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x536BF0, arg1);
}

// 0x536DA0 | ?swEmitRun0_NoZGlowModulateParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x536DA0, arg1);
}

// 0x536EF0 | ?swEmitRun0_ZReadGlowModulateParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x536EF0, arg1);
}

// 0x537090 | ?swEmitRun0_ZReadWriteGlowModulateParaSolidCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateParaSolidCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x537090, arg1);
}

// 0x537220 | ?swEmitRun0_NoZGlowModulateParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_NoZGlowModulateParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x537220, arg1);
}

// 0x537380 | ?swEmitRun0_ZReadGlowModulateParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadGlowModulateParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x537380, arg1);
}

// 0x537530 | ?swEmitRun0_ZReadWriteGlowModulateParaStippleCUCV@@YIXH@Z
inline void swEmitRun0_ZReadWriteGlowModulateParaStippleCUCV(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x537530, arg1);
}

// 0x5BEBE8 | ?swCurrentEmitterSet@@3UswEmitterSet@@A
inline extern_var(0x5BEBE8, struct swEmitterSet, swCurrentEmitterSet);
