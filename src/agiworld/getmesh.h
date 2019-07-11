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

// agiworld:getmesh

#include "hooking.h"

// 0x5026A0 | ?FixTexFlags@@YAXAAVagiTexParameters@@@Z
inline void FixTexFlags(class agiTexParameters& arg1)
{
    return stub<cdecl_t<void, class agiTexParameters&>>(0x5026A0, arg1);
}

// 0x502970 | ?GetMeshSet@@YAPAVagiMeshSet@@PAD0PAVVector3@@H@Z
inline class agiMeshSet* GetMeshSet(char* arg1, char* arg2, class Vector3* arg3, int32_t arg4)
{
    return stub<cdecl_t<class agiMeshSet*, char*, char*, class Vector3*, int32_t>>(0x502970, arg1, arg2, arg3, arg4);
}

// 0x6A09AC | ?IsSnowing@@3HA
inline extern_var(0x6A09AC, int32_t, IsSnowing);

// 0x6A09D4 | ?MeshCurrentObject@@3PADA
inline extern_var(0x6A09D4, char*, MeshCurrentObject);
