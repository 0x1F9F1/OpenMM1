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

#include "gltexdef.h"

#include "vector7/vector2.h"

agiGLTexDef::agiGLTexDef(agiPipeline* pipe)
    : agiTexDef(pipe)
{}

void agiGLTexDef::EndGfx()
{
    unimplemented();
}

int32_t agiGLTexDef::BeginGfx()
{
    unimplemented();
}

void agiGLTexDef::Set(Vector2& arg1, Vector2& arg2)
{
    arg1 = arg2;
}
