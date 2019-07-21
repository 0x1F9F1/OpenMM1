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
    agiworld:packnorm

    0x504E30 | unsigned char __cdecl PackNormalSlow(class Vector3 &) | ?PackNormalSlow@@YAEAAVVector3@@@Z
    0x504EE0 | unsigned char __cdecl PackNormal(class Vector3 &) | ?PackNormal@@YAEAAVVector3@@@Z
    0x5B8BF0 | class Vector3 * UnpackNormal | ?UnpackNormal@@3PAVVector3@@A
    0x6A0A00 | union mmx * UnpackNormalMMX | ?UnpackNormalMMX@@3PATmmx@@A
*/

// 0x504E30 | ?PackNormalSlow@@YAEAAVVector3@@@Z
inline uint8_t PackNormalSlow(class Vector3& arg1)
{
    return stub<cdecl_t<uint8_t, class Vector3&>>(0x504E30, arg1);
}

// 0x504EE0 | ?PackNormal@@YAEAAVVector3@@@Z
inline uint8_t PackNormal(class Vector3& arg1)
{
    return stub<cdecl_t<uint8_t, class Vector3&>>(0x504EE0, arg1);
}

// 0x5B8BF0 | ?UnpackNormal@@3PAVVector3@@A
inline extern_var(0x5B8BF0, class Vector3*, UnpackNormal);

// 0x6A0A00 | ?UnpackNormalMMX@@3PATmmx@@A
inline extern_var(0x6A0A00, union mmx*, UnpackNormalMMX);
