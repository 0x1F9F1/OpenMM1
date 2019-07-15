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
#include "data7/printer.h"

#include <GL/glew.h>

#include "pcwindis/dxinit.h"

#include "glbitmap.h"
#include "glrsys.h"
#include "glview.h"

void PrintGlErrors()
{
    while (true)
    {
        GLenum error = glGetError();

        if (!error)
            break;

        Errorf("GL Error: %s", gluErrorString(error));
    }
}

char PixelFormatFlagsBuffer[256];

char* PixelFormatFlagsToString(uint32_t flags)
{
    PixelFormatFlagsBuffer[0] = 0;

    if (flags & PFD_DRAW_TO_WINDOW)
        strcat_s(PixelFormatFlagsBuffer, "PFD_DRAW_TO_WINDOW ");
    if (flags & PFD_DRAW_TO_BITMAP)
        strcat_s(PixelFormatFlagsBuffer, "PFD_DRAW_TO_BITMAP ");
    if (flags & PFD_SUPPORT_GDI)
        strcat_s(PixelFormatFlagsBuffer, "PFD_SUPPORT_GDI ");
    if (flags & PFD_SUPPORT_OPENGL)
        strcat_s(PixelFormatFlagsBuffer, "PFD_SUPPORT_OPENGL ");
    if (flags & PFD_GENERIC_ACCELERATED)
        strcat_s(PixelFormatFlagsBuffer, "PFD_GENERIC_ACCELERATED ");
    if (flags & PFD_GENERIC_FORMAT)
        strcat_s(PixelFormatFlagsBuffer, "PFD_GENERIC_FORMAT ");
    if (flags & PFD_NEED_PALETTE)
        strcat_s(PixelFormatFlagsBuffer, "PFD_NEED_PALETTE ");
    if (flags & PFD_NEED_SYSTEM_PALETTE)
        strcat_s(PixelFormatFlagsBuffer, "PFD_NEED_SYSTEM_PALETTE ");
    if (flags & PFD_DOUBLEBUFFER)
        strcat_s(PixelFormatFlagsBuffer, "PFD_DOUBLEBUFFER ");
    if (flags & PFD_STEREO)
        strcat_s(PixelFormatFlagsBuffer, "PFD_STEREO ");
    if (flags & PFD_SWAP_LAYER_BUFFERS)
        strcat_s(PixelFormatFlagsBuffer, "PFD_SWAP_LAYER_BUFFERS ");

    return PixelFormatFlagsBuffer;
}

agiPipeline* glCreatePipeline(int32_t /*argc*/, char** /*argv*/)
{
    agiGLPipeline* result = new agiGLPipeline();

    result->m_Width = 640;
    result->m_Height = 480;
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

#if 0
    HDC hdc = GetDC(GetDesktopWindow());
    m_HorzRes = GetDeviceCaps(hdc, HORZRES);
    m_VertRes = GetDeviceCaps(hdc, VERTRES);
    ReleaseDC(GetDesktopWindow(), hdc);
#else
    m_HorzRes = m_Width;
    m_VertRes = m_Height;
#endif

    PIXELFORMATDESCRIPTOR pfd;
    pfd.nSize = sizeof(pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = 0x25;
    pfd.cColorBits = 32;
    pfd.cDepthBits = 16;

    m_WindowDC = GetDC(hwndMain);

    int format = ChoosePixelFormat(m_WindowDC, &pfd);
    SetPixelFormat(m_WindowDC, format, &pfd);

    int total_formats = DescribePixelFormat(m_WindowDC, format, 0, 0);

    Displayf("%d pixel formats... (we picked #%d)", total_formats, format);

    for (int i = 1; i < total_formats; ++i)
    {
        DescribePixelFormat(m_WindowDC, i, sizeof(pfd), &pfd);

        Displayf("%d. Flags %x [%s] colorbits=%d depthbits=%d", i, pfd.dwFlags, PixelFormatFlagsToString(pfd.dwFlags),
            pfd.cColorBits, pfd.cDepthBits);
    }

    m_GlContext = wglCreateContext(m_WindowDC);

    wglMakeCurrent(m_WindowDC, m_GlContext);

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
    unimplemented();
}

void agiGLPipeline::BeginFrame()
{
    agiPipeline::BeginFrame();

    wglMakeCurrent(m_WindowDC, m_GlContext);
    PrintGlErrors();
}

void agiGLPipeline::EndFrame()
{
    PrintGlErrors();
    SwapBuffers(m_WindowDC);

    agiPipeline::EndFrame();
}

agiTexDef* agiGLPipeline::CreateTexDef()
{
    unimplemented();
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
        if (!width)
            width = image->m_Width;

        if (!height)
            height = image->m_Height;

        glRasterPos2i(dst_x, CurrentPipe->m_Height - dst_y);

        GLboolean valid_pos = GL_FALSE;
        glGetBooleanv(GL_CURRENT_RASTER_POSITION_VALID, &valid_pos);

        if (valid_pos)
        {
            glDisable(GL_ALPHA_TEST);
            glDisable(GL_DEPTH_TEST);
            glDisable(GL_TEXTURE_2D);
            glDisable(GL_DEPTH_TEST);

            if (image->m_Transparency & 1)
            {
                glEnable(GL_BLEND);
                glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            }
            else
            {
                glDisable(GL_BLEND);
            }

            glPixelStorei(GL_UNPACK_ROW_LENGTH, image->m_Width);
            glPixelStorei(GL_UNPACK_SKIP_ROWS, image->m_Height - src_y - height);
            glPixelStorei(GL_UNPACK_SKIP_PIXELS, src_x);
            glPixelZoom(1.0, -1.0); // TODO: Should be -1.0?

            glDrawPixels(
                width, height, GL_RGBA, GL_UNSIGNED_BYTE, static_cast<agiGLBitmap*>(image)->m_pSurface->lpSurface);

            glPixelZoom(1.0, 1.0);
            glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
            glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);
            glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);

            glEnable(GL_DEPTH_TEST);
            glEnable(GL_BLEND);
            glEnable(GL_ALPHA_TEST);
            glEnable(GL_DEPTH_TEST);
        }
    }
}

void agiGLPipeline::ClearAll(int32_t /*arg1*/)
{
    glClear(GL_COLOR_BUFFER_BIT);
}

void agiGLPipeline::ClearRect(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, uint32_t arg5)
{
    unimplemented(arg1, arg2, arg3, arg4, arg5);
}

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
