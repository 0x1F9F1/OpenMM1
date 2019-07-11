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
    dyna7:gfx

    0x6F2C90 | class Vector3 ColLightCyan | ?ColLightCyan@@3VVector3@@A
    0x6F2CA0 | class Vector3 ColCyan | ?ColCyan@@3VVector3@@A
    0x6F2CB0 | class Vector3 ColGreen | ?ColGreen@@3VVector3@@A
    0x6F2CC0 | class Vector3 ColLightGreen | ?ColLightGreen@@3VVector3@@A
    0x6F2CD0 | class Vector3 ColGrey | ?ColGrey@@3VVector3@@A
    0x6F2CE0 | class Vector3 ColBlack | ?ColBlack@@3VVector3@@A
    0x6F2CF0 | class Vector3 ColDarkRed | ?ColDarkRed@@3VVector3@@A
    0x6F2D00 | class Vector3 ColDarkYellow | ?ColDarkYellow@@3VVector3@@A
    0x6F2D10 | class Vector3 ColLightPurple | ?ColLightPurple@@3VVector3@@A
    0x6F2D20 | class Vector3 ColLightOrange | ?ColLightOrange@@3VVector3@@A
    0x6F2D30 | class Vector3 ColLightRed | ?ColLightRed@@3VVector3@@A
    0x6F2D40 | class Vector3 ColDarkPurple | ?ColDarkPurple@@3VVector3@@A
    0x6F2D50 | class Vector3 ColDarkBlue | ?ColDarkBlue@@3VVector3@@A
    0x6F2D60 | class Vector3 ColDarkOrange | ?ColDarkOrange@@3VVector3@@A
    0x6F2D70 | class Vector3 ColDarkCyan | ?ColDarkCyan@@3VVector3@@A
    0x6F2D80 | class Vector3 ColPurple | ?ColPurple@@3VVector3@@A
    0x6F2D90 | class Vector3 ColDarkGreen | ?ColDarkGreen@@3VVector3@@A
    0x6F2DA0 | class Vector3 ColYellow | ?ColYellow@@3VVector3@@A
    0x6F2DB0 | class Vector3 ColRed | ?ColRed@@3VVector3@@A
    0x6F2DC0 | class Vector3 ColLightYellow | ?ColLightYellow@@3VVector3@@A
    0x6F2DD0 | class Vector3 ColLightBlue | ?ColLightBlue@@3VVector3@@A
    0x6F2DE0 | class Vector3 ColOrange | ?ColOrange@@3VVector3@@A
    0x6F2DF0 | class Vector3 ColBlue | ?ColBlue@@3VVector3@@A
    0x6F2E00 | class Vector3 ColWhite | ?ColWhite@@3VVector3@@A
*/

#include "hooking.h"

// 0x6F2C90 | ?ColLightCyan@@3VVector3@@A
inline extern_var(0x6F2C90, class Vector3, ColLightCyan);

// 0x6F2CA0 | ?ColCyan@@3VVector3@@A
inline extern_var(0x6F2CA0, class Vector3, ColCyan);

// 0x6F2CB0 | ?ColGreen@@3VVector3@@A
inline extern_var(0x6F2CB0, class Vector3, ColGreen);

// 0x6F2CC0 | ?ColLightGreen@@3VVector3@@A
inline extern_var(0x6F2CC0, class Vector3, ColLightGreen);

// 0x6F2CD0 | ?ColGrey@@3VVector3@@A
inline extern_var(0x6F2CD0, class Vector3, ColGrey);

// 0x6F2CE0 | ?ColBlack@@3VVector3@@A
inline extern_var(0x6F2CE0, class Vector3, ColBlack);

// 0x6F2CF0 | ?ColDarkRed@@3VVector3@@A
inline extern_var(0x6F2CF0, class Vector3, ColDarkRed);

// 0x6F2D00 | ?ColDarkYellow@@3VVector3@@A
inline extern_var(0x6F2D00, class Vector3, ColDarkYellow);

// 0x6F2D10 | ?ColLightPurple@@3VVector3@@A
inline extern_var(0x6F2D10, class Vector3, ColLightPurple);

// 0x6F2D20 | ?ColLightOrange@@3VVector3@@A
inline extern_var(0x6F2D20, class Vector3, ColLightOrange);

// 0x6F2D30 | ?ColLightRed@@3VVector3@@A
inline extern_var(0x6F2D30, class Vector3, ColLightRed);

// 0x6F2D40 | ?ColDarkPurple@@3VVector3@@A
inline extern_var(0x6F2D40, class Vector3, ColDarkPurple);

// 0x6F2D50 | ?ColDarkBlue@@3VVector3@@A
inline extern_var(0x6F2D50, class Vector3, ColDarkBlue);

// 0x6F2D60 | ?ColDarkOrange@@3VVector3@@A
inline extern_var(0x6F2D60, class Vector3, ColDarkOrange);

// 0x6F2D70 | ?ColDarkCyan@@3VVector3@@A
inline extern_var(0x6F2D70, class Vector3, ColDarkCyan);

// 0x6F2D80 | ?ColPurple@@3VVector3@@A
inline extern_var(0x6F2D80, class Vector3, ColPurple);

// 0x6F2D90 | ?ColDarkGreen@@3VVector3@@A
inline extern_var(0x6F2D90, class Vector3, ColDarkGreen);

// 0x6F2DA0 | ?ColYellow@@3VVector3@@A
inline extern_var(0x6F2DA0, class Vector3, ColYellow);

// 0x6F2DB0 | ?ColRed@@3VVector3@@A
inline extern_var(0x6F2DB0, class Vector3, ColRed);

// 0x6F2DC0 | ?ColLightYellow@@3VVector3@@A
inline extern_var(0x6F2DC0, class Vector3, ColLightYellow);

// 0x6F2DD0 | ?ColLightBlue@@3VVector3@@A
inline extern_var(0x6F2DD0, class Vector3, ColLightBlue);

// 0x6F2DE0 | ?ColOrange@@3VVector3@@A
inline extern_var(0x6F2DE0, class Vector3, ColOrange);

// 0x6F2DF0 | ?ColBlue@@3VVector3@@A
inline extern_var(0x6F2DF0, class Vector3, ColBlue);

// 0x6F2E00 | ?ColWhite@@3VVector3@@A
inline extern_var(0x6F2E00, class Vector3, ColWhite);
