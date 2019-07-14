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

#include "glrsys.h"

#include "agi/pipeline.h"

static uint32_t CurrentPipeHeight = 0;

agiGLRasterizer::agiGLRasterizer(agiPipeline* pipe)
    : agiRasterizer(pipe)
{}

void agiGLRasterizer::EndGfx()
{
    unimplemented();
}

int32_t agiGLRasterizer::BeginGfx()
{
    CurrentPipeHeight = m_pPipeline->m_Height;

    return 0;
}

void agiGLRasterizer::BeginGroup()
{
    unimplemented();
}

void agiGLRasterizer::EndGroup()
{
    unimplemented();
}

void agiGLRasterizer::Verts(agiVtxType arg1, agiVtx* arg2, int32_t arg3)
{
    unimplemented(arg1, arg2, arg3);
}

void agiGLRasterizer::Points(agiVtxType arg1, agiVtx* arg2, int32_t arg3)
{
    unimplemented(arg1, arg2, arg3);
}

void agiGLRasterizer::SetVertCount(int32_t arg1)
{
    unimplemented(arg1);
}

void agiGLRasterizer::Triangle(int32_t arg1, int32_t arg2, int32_t arg3)
{
    unimplemented(arg1, arg2, arg3);
}

void agiGLRasterizer::Line(int32_t arg1, int32_t arg2)
{
    unimplemented(arg1, arg2);
}

void agiGLRasterizer::Card(int32_t arg1, int32_t arg2)
{
    unimplemented(arg1, arg2);
}

void agiGLRasterizer::Mesh(agiVtxType arg1, agiVtx* arg2, int32_t arg3, uint16_t* arg4, int32_t arg5)
{
    unimplemented(arg1, arg2, arg3, arg4, arg5);
}