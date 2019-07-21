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

#include "glbitmap.h"

#include "agi/pipeline.h"
#include "agi/surface.h"

agiGLBitmap::agiGLBitmap(agiPipeline* pipe)
    : agiBitmap(pipe)
{}

void agiGLBitmap::EndGfx()
{
    if (m_pSurface)
    {
        m_pSurface->Unload();
        delete m_pSurface;
        m_pSurface = nullptr;
    }
}

int32_t agiGLBitmap::BeginGfx()
{
    if (!m_pSurfaceDesc)
        return -2;

    if (*m_Name != '*')
        m_pSurfaceDesc->Reload(m_Name, "bmp16", 0, 0, 0, 0, 0);

    m_pSurface = agiSurfaceDesc::Init(m_Width, m_Height, m_pPipeline->m_SurfaceDesc2);
    m_pSurface->CopyFrom(m_pSurfaceDesc, 0);

    if (m_Transparency & 1)
    {
        Assert(m_pSurface->ddpfPixelFormat.dwRGBAlphaBitMask == 0xFF000000);

        uint32_t* pixels = static_cast<uint32_t*>(m_pSurface->lpSurface);
        uint32_t pending = m_pSurface->dwHeight * m_pSurface->dwWidth;

        while (pending--)
        {
            if (*pixels)
                *pixels |= 0xFF000000;

            ++pixels;
        }
    }

    if (*m_Name != '*')
        m_pSurfaceDesc->Unload();

    return 0;
}
