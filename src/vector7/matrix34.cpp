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

#include "matrix34.h"

#include "matrix44.h"

Matrix34::Matrix34(class Matrix44 const& other)
    : m00(other.m00)
    , m01(other.m01)
    , m02(other.m02)
    , m10(other.m10)
    , m11(other.m11)
    , m12(other.m12)
    , m20(other.m20)
    , m21(other.m21)
    , m22(other.m22)
    , m30(other.m30)
    , m31(other.m31)
    , m32(other.m32)
{}
