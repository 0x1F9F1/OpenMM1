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

// dyna7:dyna

#include "hooking.h"

// 0x5BAD60 | ?DynaDrawMode@@3HA
inline extern_var(0x5BAD60, int32_t, DynaDrawMode);

// 0x5BAD64 | ?DynaDrawScale@@3MA
inline extern_var(0x5BAD64, float, DynaDrawScale);

// 0x6F2E10 | ?CollTestColor@@3VVector3@@A
inline extern_var(0x6F2E10, class Vector3, CollTestColor);

// 0x6F2E20 | ?PushColor@@3VVector3@@A
inline extern_var(0x6F2E20, class Vector3, PushColor);

// 0x6F2E30 | ?NormalColor@@3VVector3@@A
inline extern_var(0x6F2E30, class Vector3, NormalColor);

// 0x6F2E40 | ?TestColor@@3VVector3@@A
inline extern_var(0x6F2E40, class Vector3, TestColor);

// 0x6F2E50 | ?CloseColor@@3VVector3@@A
inline extern_var(0x6F2E50, class Vector3, CloseColor);

// 0x6F2E60 | ?SpringColor@@3VVector3@@A
inline extern_var(0x6F2E60, class Vector3, SpringColor);

// 0x6F2E70 | ?TorqueColor@@3VVector3@@A
inline extern_var(0x6F2E70, class Vector3, TorqueColor);

// 0x6F2E80 | ?ForceColor@@3VVector3@@A
inline extern_var(0x6F2E80, class Vector3, ForceColor);

// 0x6F2E90 | ?HitColor@@3VVector3@@A
inline extern_var(0x6F2E90, class Vector3, HitColor);

// 0x6F2EA0 | ?FluidColor@@3VVector3@@A
inline extern_var(0x6F2EA0, class Vector3, FluidColor);

// 0x6F2EB0 | ?ImpulseColor@@3VVector3@@A
inline extern_var(0x6F2EB0, class Vector3, ImpulseColor);

// 0x6F2EC0 | ?MissColor@@3VVector3@@A
inline extern_var(0x6F2EC0, class Vector3, MissColor);

// 0x6F2ED0 | ?VolumeColor@@3VVector3@@A
inline extern_var(0x6F2ED0, class Vector3, VolumeColor);

// 0x6F2EDC | ?SphVSph@@3HA
inline extern_var(0x6F2EDC, int32_t, SphVSph);

// 0x6F2EE0 | ?SphVCyl@@3HA
inline extern_var(0x6F2EE0, int32_t, SphVCyl);

// 0x6F2EE4 | ?SphVPoly@@3HA
inline extern_var(0x6F2EE4, int32_t, SphVPoly);

// 0x6F2EE8 | ?SphVCPoly@@3HA
inline extern_var(0x6F2EE8, int32_t, SphVCPoly);

// 0x6F2EEC | ?SegVSph@@3HA
inline extern_var(0x6F2EEC, int32_t, SegVSph);

// 0x6F2EF0 | ?SegVCyl@@3HA
inline extern_var(0x6F2EF0, int32_t, SegVCyl);

// 0x6F2EF4 | ?SegVPoly@@3HA
inline extern_var(0x6F2EF4, int32_t, SegVPoly);

// 0x6F2EF8 | ?SegVCPoly@@3HA
inline extern_var(0x6F2EF8, int32_t, SegVCPoly);
