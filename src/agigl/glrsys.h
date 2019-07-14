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

#include "agi/rsys.h"

class agiGLRasterizer : public agiRasterizer
{
public:
    agiGLRasterizer(agiPipeline* pipe);

    void EndGfx() override;
    int32_t BeginGfx() override;

    void BeginGroup() override;
    void EndGroup() override;

    void Verts(agiVtxType arg1, agiVtx* arg2, int32_t arg3) override;
    void Points(agiVtxType arg1, agiVtx* arg2, int32_t arg3) override;
    void SetVertCount(int32_t arg1) override;
    void Triangle(int32_t arg1, int32_t arg2, int32_t arg3) override;
    void Line(int32_t arg1, int32_t arg2) override;
    void Card(int32_t arg1, int32_t arg2) override;
    void Mesh(agiVtxType arg1, agiVtx* arg2, int32_t arg3, uint16_t* arg4, int32_t arg5) override;
};
