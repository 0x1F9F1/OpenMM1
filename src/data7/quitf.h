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
    data7:quitf

    0x5588F0 | void __cdecl Quitf(char const *,...) | ?Quitf@@YAXPBDZZ
*/

// 0x5588F0 | ?Quitf@@YAXPBDZZ
[[noreturn]] void Quitf(char const* arg1, ...);

#define unimplemented Quitf("Error calling unimplemented function %s in %s (%i)", __FUNCTION__, __FILE__, __LINE__)
