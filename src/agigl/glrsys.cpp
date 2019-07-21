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
#include "gltexdef.h"
#include "glutils.h"

#include <GL/glew.h>

union agiVtx
{
    struct
    {
        float x;
        float y;
        float z;
        float Scale;
        unsigned int Color;
        float float14;
        float TexS;
        float TexT;
    } GL;
};

check_size(agiVtx, 0x20);

static uint32_t CurrentPipeHeight = 0;
static int32_t UseTriangles = 1;
static agiVtx* VtxBase = nullptr;
static int32_t VtxCount = 0;
static int32_t VtxIndexCount = 0;
static uint16_t* VtxIndex = nullptr;
static uint16_t Vertices[1024] {};

agiGLRasterizer::agiGLRasterizer(agiPipeline* pipe)
    : agiRasterizer(pipe)
{}

void agiGLRasterizer::EndGfx()
{}

int32_t agiGLRasterizer::BeginGfx()
{
    CurrentPipeHeight = m_pPipeline->m_Height;

    return 0;
}

void agiGLRasterizer::BeginGroup()
{
    FlushState();
}

void agiGLRasterizer::EndGroup()
{
    FlushState();
}

void agiGLRasterizer::Verts(agiVtxType type, agiVtx* verts, int32_t count)
{
    Assert(type == 3);

    if (VtxIndexCount || agiCurState.IsTouched())
        FlushState();

    VtxBase = verts;
    VtxCount = count;
    VtxIndexCount = 0;
    VtxIndex = Vertices;
}

void agiGLRasterizer::Points(agiVtxType arg1, agiVtx* arg2, int32_t arg3)
{
    unimplemented(arg1, arg2, arg3);
}

void agiGLRasterizer::SetVertCount(int32_t arg1)
{
    unimplemented(arg1);
}

void agiGLRasterizer::Triangle(int32_t a, int32_t b, int32_t c)
{
    if (VtxIndexCount > 1020 || UseTriangles != 1 || agiCurState.IsTouched())
    {
        FlushState();
        UseTriangles = 1;
    }

    VtxIndex[VtxIndexCount] = a;
    VtxIndex[VtxIndexCount + 1] = b;
    VtxIndex[VtxIndexCount + 2] = c;
    VtxIndexCount += 3;
}

void agiGLRasterizer::Line(int32_t a, int32_t b)
{
    if (VtxIndexCount > 1020 || UseTriangles || agiCurState.IsTouched())
    {
        agiGLRasterizer::FlushState();
        UseTriangles = 0;
    }

    VtxIndex[VtxIndexCount] = a;
    VtxIndex[VtxIndexCount + 1] = b;
    VtxIndexCount += 2;
}

void agiGLRasterizer::Card(int32_t arg1, int32_t arg2)
{
    unimplemented(arg1, arg2);
}

void agiGLRasterizer::Mesh(agiVtxType type, agiVtx* verts, int32_t vtx_count, uint16_t* indices, int32_t index_count)
{
    Assert(type == 3);

    agiGLRasterizer::FlushState();
    UseTriangles = 1;
    VtxBase = verts;
    VtxCount = vtx_count;
    VtxIndex = indices;
    VtxIndexCount = index_count;
    agiGLRasterizer::FlushState();
}

int32_t GetBlendFuncD()
{
    return GL_ONE_MINUS_SRC_ALPHA;
}

int32_t GetBlendFuncS()
{
    return GL_SRC_ALPHA;
}

GLenum PolygonModes[4] = {GL_POINTS, GL_POINT, GL_LINE, GL_FILL};

void agiGLRasterizer::FlushState()
{
    PrintGlErrors();

    if (VtxIndexCount)
    {
        if (UseTriangles)
        {
            glBegin(GL_TRIANGLES);
            for (int32_t i = 0; i < VtxIndexCount; i += 3)
            {
                if (agiCurState.GetPolyMode() == 15)
                {
                    if (agiCurState.GetPerspectiveCorrection())
                    {
                        glTexCoord4f(VtxBase[VtxIndex[i]].GL.TexS * VtxBase[VtxIndex[i]].GL.Scale,
                            VtxBase[VtxIndex[i]].GL.TexT * VtxBase[VtxIndex[i]].GL.Scale, 0.0,
                            VtxBase[VtxIndex[i]].GL.Scale);
                    }
                    else
                    {
                        glTexCoord2fv(&VtxBase[VtxIndex[i]].GL.TexS);
                    }
                }
                if (agiCurState.GetPolyMode() != 3)
                    glColor4ub(VtxBase[VtxIndex[i]].GL.Color >> 16, VtxBase[VtxIndex[i]].GL.Color >> 8,
                        VtxBase[VtxIndex[i]].GL.Color, VtxBase[VtxIndex[i]].GL.Color >> 24);

                glVertex3f(VtxBase[VtxIndex[i]].GL.x, CurrentPipeHeight - VtxBase[VtxIndex[i]].GL.y,
                    1.0 - VtxBase[VtxIndex[i]].GL.z);

                if (agiCurState.GetPolyMode() == 15)
                {
                    if (agiCurState.GetPerspectiveCorrection())
                    {
                        glTexCoord4f(VtxBase[VtxIndex[i + 1]].GL.TexS * VtxBase[VtxIndex[i + 1]].GL.Scale,
                            VtxBase[VtxIndex[i + 1]].GL.TexT * VtxBase[VtxIndex[i + 1]].GL.Scale, 0.0,
                            VtxBase[VtxIndex[i + 1]].GL.Scale);
                    }
                    else
                    {
                        glTexCoord2fv(&VtxBase[VtxIndex[i + 1]].GL.TexS);
                    }
                }
                if (agiCurState.GetPolyMode() != 3)
                    glColor4ub(VtxBase[VtxIndex[i + 1]].GL.Color >> 16, VtxBase[VtxIndex[i + 1]].GL.Color >> 8,
                        VtxBase[VtxIndex[i + 1]].GL.Color, VtxBase[VtxIndex[i + 1]].GL.Color >> 24);

                glVertex3f(VtxBase[VtxIndex[i + 1]].GL.x, CurrentPipeHeight - VtxBase[VtxIndex[i + 1]].GL.y,
                    1.0 - VtxBase[VtxIndex[i + 1]].GL.z);

                if (agiCurState.GetPolyMode() == 15)
                {
                    if (agiCurState.GetPerspectiveCorrection())
                    {
                        glTexCoord4f(VtxBase[VtxIndex[i + 2]].GL.TexS * VtxBase[VtxIndex[i + 2]].GL.Scale,
                            VtxBase[VtxIndex[i + 2]].GL.TexT * VtxBase[VtxIndex[i + 2]].GL.Scale, 0.0,
                            VtxBase[VtxIndex[i + 2]].GL.Scale);
                    }
                    else
                    {
                        glTexCoord2fv(&VtxBase[VtxIndex[i + 2]].GL.TexS);
                    }
                }
                if (agiCurState.GetPolyMode() != 3)
                    glColor4ub(VtxBase[VtxIndex[i + 2]].GL.Color >> 16, VtxBase[VtxIndex[i + 2]].GL.Color >> 8,
                        VtxBase[VtxIndex[i + 2]].GL.Color, VtxBase[VtxIndex[i + 2]].GL.Color >> 24);

                glVertex3f(VtxBase[VtxIndex[i + 2]].GL.x, CurrentPipeHeight - VtxBase[VtxIndex[i + 2]].GL.y,
                    1.0 - VtxBase[VtxIndex[i + 2]].GL.z);
            }
            glEnd();
        }
        else
        {
            glBegin(GL_LINES);
            for (int32_t j = 0; j < VtxIndexCount; j += 2)
            {
                if (agiCurState.GetPolyMode() == 15)
                {
                    if (agiCurState.GetPerspectiveCorrection())
                    {
                        glTexCoord4f(VtxBase[VtxIndex[j]].GL.TexS * VtxBase[VtxIndex[j]].GL.Scale,
                            VtxBase[VtxIndex[j]].GL.TexT * VtxBase[VtxIndex[j]].GL.Scale, 0.0,
                            VtxBase[VtxIndex[j]].GL.Scale);
                    }
                    else
                    {
                        glTexCoord2fv(&VtxBase[VtxIndex[j]].GL.TexS);
                    }
                }
                if (agiCurState.GetPolyMode() != 3)
                    glColor4ub(VtxBase[VtxIndex[j]].GL.Color >> 16, VtxBase[VtxIndex[j]].GL.Color >> 8,
                        VtxBase[VtxIndex[j]].GL.Color, VtxBase[VtxIndex[j]].GL.Color >> 24);

                glVertex3f(VtxBase[VtxIndex[j]].GL.x, CurrentPipeHeight - VtxBase[VtxIndex[j]].GL.y,
                    1.0 - VtxBase[VtxIndex[j]].GL.z);

                if (agiCurState.GetPolyMode() == 15)
                {
                    if (agiCurState.GetPerspectiveCorrection())
                    {
                        glTexCoord4f(VtxBase[VtxIndex[j + 1]].GL.TexS * VtxBase[VtxIndex[j + 1]].GL.Scale,
                            VtxBase[VtxIndex[j + 1]].GL.TexT * VtxBase[VtxIndex[j + 1]].GL.Scale, 0.0,
                            VtxBase[VtxIndex[j + 1]].GL.Scale);
                    }
                    else
                    {
                        glTexCoord2fv(&VtxBase[VtxIndex[j + 1]].GL.TexS);
                    }
                }
                if (agiCurState.GetPolyMode() != 3)
                    glColor4ub(VtxBase[VtxIndex[j + 1]].GL.Color >> 16, VtxBase[VtxIndex[j + 1]].GL.Color >> 8,
                        VtxBase[VtxIndex[j + 1]].GL.Color, VtxBase[VtxIndex[j + 1]].GL.Color >> 24);

                glVertex3f(VtxBase[VtxIndex[j + 1]].GL.x, CurrentPipeHeight - VtxBase[VtxIndex[j + 1]].GL.y,
                    1.0 - VtxBase[VtxIndex[j + 1]].GL.z);
            }
            glEnd();
        }
        VtxIndexCount = 0;
    }
    PrintGlErrors();
    if (agiCurState.GetPolyMode() != 15)
        agiCurState.SetTexture(0);

    if (agiCurState.IsTouched())
    {
        if (agiCurState.GetTexture() != agiLastState.CurrentTexture)
        {
            agiGLTexDef* texture = static_cast<agiGLTexDef*>(agiCurState.GetTexture());

            if (texture)
            {
                glEnable(GL_TEXTURE_2D);
                glBindTexture(GL_TEXTURE_2D, texture->m_Texture);
            }
            else
            {
                glDisable(GL_TEXTURE_2D);
            }

            agiLastState.CurrentTexture = texture;
        }
        if (agiCurState.GetDepthMask() != agiLastState.DepthMask)
        {
            agiLastState.DepthMask = agiCurState.GetDepthMask();
            glDepthMask(agiLastState.DepthMask);
        }
        if (agiCurState.GetDepthTest() != agiLastState.DepthTest)
        {
            if (agiCurState.GetDepthTest())
            {
                glEnable(GL_DEPTH_TEST);
                glDepthFunc(GL_LEQUAL);
            }
            else
            {
                glDisable(GL_DEPTH_TEST);
            }
            agiLastState.DepthTest = agiCurState.GetDepthTest();
        }
        if (agiCurState.GetPerspectiveCorrection() != agiLastState.PerspectiveCorrection)
        {
            glHint(GL_PERSPECTIVE_CORRECTION_HINT, agiCurState.GetPerspectiveCorrection() ? GL_NICEST : GL_FASTEST);
            agiLastState.PerspectiveCorrection = agiCurState.GetPerspectiveCorrection();
        }
        if (agiCurState.GetTexFilter() != agiLastState.TexFilter)
        {
            if (agiCurState.GetTexFilter())
            {
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            }
            else
            {
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            }
            agiLastState.TexFilter = agiCurState.GetTexFilter();
        }
        if (agiCurState.GetShaderModel() != agiLastState.ShaderModel)
        {
            glShadeModel(agiCurState.GetShaderModel() ? GL_SMOOTH : GL_FLAT);

            agiLastState.ShaderModel = agiCurState.GetShaderModel();
        }
        if (agiCurState.GetPolyMode() != agiLastState.PolyMode)
        {
            glPolygonMode(GL_FRONT_AND_BACK, PolygonModes[agiCurState.GetPolyMode() & 3]);
            agiLastState.PolyMode = agiCurState.GetPolyMode();
        }

        uint8_t alpha_mode = agiCurState.GetAlphaMode();

        if (agiCurState.GetTexture())
        {
            alpha_mode |= agiCurState.GetTexture()->m_Params.m_Flags & 1;
        }

        if (alpha_mode != agiLastState.AlphaMode)
        {
            if (alpha_mode)
            {
                glEnable(GL_ALPHA_TEST);
                glAlphaFunc(GL_GREATER, 0.0);
                glEnable(GL_BLEND);
                glBlendFunc(GetBlendFuncS(), GetBlendFuncD());
            }
            else
            {
                glDisable(GL_ALPHA_TEST);
                glDisable(GL_BLEND);
            }
            agiLastState.AlphaMode = alpha_mode;
        }
        if (agiCurState.GetBlendMode() != agiLastState.BlendMode)
        {
            switch (agiCurState.GetBlendMode())
            {
                case 0: glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); break;
                case 1: glBlendFunc(GL_SRC_ALPHA, GL_ONE); break;
                case 3: glBlendFunc(GL_ZERO, GL_SRC_ALPHA); break;
                case 4: glBlendFunc(GL_ZERO, GL_SRC_COLOR); break;
                case 5: glBlendFunc(GL_ONE, GL_ONE); break;
                default: Quitf("bad blend mode"); break;
            }
            agiLastState.BlendMode = agiCurState.GetBlendMode();
        }
        if (agiCurState.GetCullMode() != agiLastState.CullMode)
        {
            uint8_t v26 = agiCurState.GetCullMode();

            switch (v26)
            {
                case 1: glDisable(GL_CULL_FACE); break;
                case 2:
                    glEnable(GL_CULL_FACE);
                    glFrontFace(GL_CCW);
                    break;
                case 3:
                    glEnable(GL_CULL_FACE);
                    glFrontFace(GL_CW);
                    break;
            }

            agiLastState.CullMode = agiCurState.GetCullMode();
        }
        agiCurState.ClearTouched();
    }

    PrintGlErrors();
}
