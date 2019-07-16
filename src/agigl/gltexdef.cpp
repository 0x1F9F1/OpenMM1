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

#include "agi/pipeline.h"
#include "agi/surface.h"
#include "data7/printer.h"
#include "glutils.h"
#include "vector7/vector2.h"

#include <GL/glew.h>

agiGLTexDef::agiGLTexDef(agiPipeline* pipe)
    : agiTexDef(pipe)
{}

void agiGLTexDef::EndGfx()
{
    if (m_Texture)
    {
        glDeleteTextures(1, &m_Texture);

        m_Texture = 0;
    }
}

int32_t agiGLTexDef::BeginGfx()
{
    if (!m_pTextureData)
    {
        Errorf("agiGLTexDef::BeginGfx - no texture");

        return -1;
    }

    if (!m_pTextureData->lpSurface)
        m_pTextureData->Reload(m_Params.m_Name, (char*) TexSearchPath, m_Params.m_LOD, m_dword58, 0, 0, 0);

    PrintGlErrors();

    glGenTextures(1, &m_Texture);
    glBindTexture(GL_TEXTURE_2D, m_Texture);

    agiSurfaceDesc* surface =
        agiSurfaceDesc::Init(m_pTextureData->dwWidth, m_pTextureData->dwHeight, m_pPipeline->m_SurfaceDesc2);

    surface->CopyFrom(m_pTextureData, 0);

    gluBuild2DMipmaps(GL_TEXTURE_2D, (m_Params.m_Flags & 1) ? GL_RGBA : GL_RGB, m_pTextureData->dwWidth,
        m_pTextureData->dwHeight, GL_RGBA, GL_UNSIGNED_BYTE, surface->lpSurface);

    surface->Unload();
    delete surface;

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, (m_Params.m_Flags & 2) ? GL_REPEAT : GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, (m_Params.m_Flags & 4) ? GL_REPEAT : GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glBindTexture(GL_TEXTURE_2D, 0);

    PrintGlErrors();

    GLboolean resident;

    if (glAreTexturesResident(1, &m_Texture, &resident))
        Displayf("TexObj = %d %s resident", m_Texture, "IS");
    else
        Displayf("TexObj = %d %s resident", m_Texture, "IS NOT");

    m_pTextureData->Unload();

    m_State2 = 2;
    m_State = 2;

    return 0;
}

void agiGLTexDef::Set(Vector2& arg1, Vector2& arg2)
{
    arg1 = arg2;
}
