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

// mmbangers:dof

#include "hooking.h"

// 0x4BFDD0 | ?ToMatrix@mmFacadeBangerInstance@@UAIAAVMatrix34@@AAV2@@Z
// Warning: Unordered virtual function
virtual inline class Matrix34& ToMatrix(class Matrix34& arg1)
{
    return stub<cdecl_t<class Matrix34&, class Matrix34&>>(0x4BFDD0, arg1);
}

// 0x4BFE80 | ?GetPos@mmFacadeBangerInstance@@UAIAAVVector3@@XZ
// Warning: Unordered virtual function
virtual inline class Vector3& GetPos()
{
    return stub<cdecl_t<class Vector3&>>(0x4BFE80);
}

// 0x4BFF00 | ?Draw@mmGlassBangerInstance@@EAIXH@Z
// Warning: Unordered virtual function
virtual inline void Draw(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x4BFF00, arg1);
}
