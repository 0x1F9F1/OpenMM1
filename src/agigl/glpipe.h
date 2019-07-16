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

#include "agi/pipeline.h"

#include "minwin.h"

agiPipeline* glCreatePipeline(int32_t argc, char** argv);

class agiGLRasterizer;

class agiGLPipeline : public agiPipeline
{
public:
    void* m_GL {nullptr};
    agiGLRasterizer* m_pRasterizer {nullptr};

    int32_t BeginGfx() override;
    void EndGfx() override;

    void BeginFrame() override;
    void BeginScene() override;
    void EndScene() override;
    void EndFrame() override;

    class agiTexDef* CreateTexDef() override;
    class agiTexLut* CreateTexLut() override;
    class agiMtlDef* CreateMtlDef() override;
    class DLP* CreateDLP() override;
    class agiViewport* CreateViewport() override;
    class agiLight* CreateLight() override;
    class agiLightModel* CreateLightModel() override;
    class agiBitmap* CreateBitmap() override;

    void CopyBitmap(int32_t arg1, int32_t arg2, class agiBitmap* arg3, int32_t arg4, int32_t arg5, int32_t arg6,
        int32_t arg7) override;

    void ClearAll(int32_t arg1) override;
    void ClearRect(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, uint32_t arg5);
    void Print(int32_t arg1, int32_t arg2, int32_t arg3, char const* arg4) override;

    int32_t PrintIs3D() override;
    void PrintInit() override;
    void PrintShutdown() override;
};