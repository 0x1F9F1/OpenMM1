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

#include "glpipe.h"

#include "agi/cmodel.h"
#include "data7/assert.h"
#include "data7/printer.h"

#include <GL/glew.h>

#include "agisdl/sdlinit.h"

#include <SDL_video.h>

#include "glbitmap.h"
#include "glrsys.h"
#include "gltexdef.h"
#include "glutils.h"
#include "glview.h"

#include "pcwindis/dxinit.h"

agiPipeline* glCreatePipeline(int32_t /*argc*/, char** /*argv*/)
{
    agiGLPipeline* result = new agiGLPipeline();

    result->m_Width = dxiWidth;
    result->m_Height = dxiHeight;
    result->m_BitDepth = 32;

    return result;
}

int32_t agiGLPipeline::BeginGfx()
{
    m_ColorModel = m_UIColorModel = m_ColorModel1 = m_ColorModel2 =
        agiColorModel::FindMatch(0xFF, 0xFF00, 0xFF0000, 0xFF000000);

    agiPixelFormat pf;
    pf.dwSize = sizeof(pf);
    pf.dwRGBBitCount = 32;
    pf.dwRBitMask = 0xFF;
    pf.dwGBitMask = 0xFF00;
    pf.dwBBitMask = 0xFF0000;
    pf.dwRGBAlphaBitMask = 0xFF000000;

    agiSurfaceDesc sd;
    sd.dwSize = sizeof(sd);
    sd.dwFlags = 0x1000;
    sd.ddpfPixelFormat = pf;

    m_SurfaceDesc = m_SurfaceDesc2 = m_SurfaceDesc3 = sd;

    HDC hdc = GetDC(GetDesktopWindow());
    m_HorzRes = GetDeviceCaps(hdc, HORZRES);
    m_VertRes = GetDeviceCaps(hdc, VERTRES);
    ReleaseDC(GetDesktopWindow(), hdc);

    SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 16);

    m_GL = SDL_GL_CreateContext(s_Window);

    if (glewInit() != GLEW_OK)
    {
        Quitf("GLEW Initialization Failed");
    }

    glDisable(GL_CULL_FACE);
    glEnable(GL_COLOR_MATERIAL);

    agiCurState.SetBlendMode(0);
    agiCurState.SetPerspectiveCorrection(1);

    m_pRasterizer = new agiGLRasterizer(this);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glOrtho(0.0, (GLdouble) m_Width, 0.0, (GLdouble) m_Height, -1.0, 1.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glViewport(0, 0, m_Width, m_Height);

    PrintGlErrors();

    m_dword2E0 = 1;

    return 0;
}

void agiGLPipeline::EndGfx()
{
    SDL_GL_DeleteContext(m_GL);

    m_GL = nullptr;
}

void agiGLPipeline::BeginFrame()
{
    agiPipeline::BeginFrame();

    SDL_GL_MakeCurrent(s_Window, m_GL);

    PrintGlErrors();
}

void agiGLPipeline::BeginScene()
{
    agiPipeline::BeginScene();
    m_InScene = 1;
}

void agiGLPipeline::EndScene()
{
    m_InScene = 0;

    agiPipeline::EndScene();
}

void agiGLPipeline::EndFrame()
{
    PrintGlErrors();

    SDL_GL_SwapWindow(s_Window);

    agiPipeline::EndFrame();
}

agiTexDef* agiGLPipeline::CreateTexDef()
{
    return new agiGLTexDef(this);
}

agiTexLut* agiGLPipeline::CreateTexLut()
{
    unimplemented();
}

agiMtlDef* agiGLPipeline::CreateMtlDef()
{
    unimplemented();
}

DLP* agiGLPipeline::CreateDLP()
{
    unimplemented();
}

agiViewport* agiGLPipeline::CreateViewport()
{
    return new agiGLViewport(this);
}

agiLight* agiGLPipeline::CreateLight()
{
    return nullptr;
}

agiLightModel* agiGLPipeline::CreateLightModel()
{
    return nullptr;
}

agiBitmap* agiGLPipeline::CreateBitmap()
{
    return new agiGLBitmap(this);
}

void agiGLPipeline::CopyBitmap(
    int32_t dst_x, int32_t dst_y, agiBitmap* image, int32_t src_x, int32_t src_y, int32_t width, int32_t height)
{
    if (image && image->m_pSurfaceDesc)
    {
        agiSurfaceDesc* surface = static_cast<agiGLBitmap*>(image)->m_pSurface;

        Assert(surface->ddpfPixelFormat.dwRGBAlphaBitMask == 0xFF000000);

        Assert(image->m_Width == surface->dwWidth);
        Assert(image->m_Height == surface->dwHeight);

        if (!width)
            width = image->m_Width;

        if (!height)
            height = image->m_Height;

        GLuint tex;
        glGenTextures(1, &tex);
        glBindTexture(GL_TEXTURE_2D, tex);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image->m_Width, image->m_Height, 0, GL_RGBA, GL_UNSIGNED_BYTE,
            surface->lpSurface);
        glBindTexture(GL_TEXTURE_2D, 0);

        glDisable(GL_ALPHA_TEST);
        glDisable(GL_DEPTH_TEST);
        glDisable(GL_BLEND);

        if (image->m_Transparency & 1)
        {
            glEnable(GL_BLEND);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        }
        else
        {
            glDisable(GL_BLEND);
        }

        glBindTexture(GL_TEXTURE_2D, tex);
        glEnable(GL_TEXTURE_2D);
        glBegin(GL_QUADS);

        dst_y = CurrentPipe->m_Height - dst_y;

        // Texture Coords
        // 0,0 --- 1,1
        //  |       |
        //  |       |
        // 0,1 --- 1,1

        float fWidth = float(image->m_Width);
        float fHeight = float(image->m_Height);

        glTexCoord2f(src_x / fWidth, src_y / fHeight);
        glVertex2i(dst_x, dst_y);

        glTexCoord2f(src_x / fWidth, (src_y + height) / fHeight);
        glVertex2i(dst_x, dst_y - height);

        glTexCoord2f((src_x + width) / fWidth, (src_y + height) / fHeight);
        glVertex2i(dst_x + width, dst_y - height);

        glTexCoord2f((src_x + width) / fWidth, src_y / fHeight);
        glVertex2i(dst_x + width, dst_y);

        glEnd();
        glDisable(GL_TEXTURE_2D);
        glBindTexture(GL_TEXTURE_2D, 0);

        glEnable(GL_BLEND);
        glEnable(GL_ALPHA_TEST);
        glEnable(GL_DEPTH_TEST);

        glDeleteTextures(1, &tex);
    }
}

void agiGLPipeline::ClearAll(int32_t /*arg1*/)
{
    glClear(GL_COLOR_BUFFER_BIT);
}

void agiGLPipeline::ClearRect(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, uint32_t arg5)
{}

void agiGLPipeline::Print(int32_t arg1, int32_t arg2, int32_t arg3, char const* arg4)
{
    unimplemented(arg1, arg2, arg3, arg4);
}

int32_t agiGLPipeline::PrintIs3D()
{
    return 0;
}

void agiGLPipeline::PrintInit()
{}

void agiGLPipeline::PrintShutdown()
{}
