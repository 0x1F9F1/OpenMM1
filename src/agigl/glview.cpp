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

#include "glview.h"

#include "agi/pipeline.h"
#include "agi/rsys.h"

#include <GL/glew.h>

agiGLViewport::agiGLViewport(agiPipeline* pipe)
    : agiViewport(pipe)
{}

void agiGLViewport::EndGfx()
{}

int32_t agiGLViewport::BeginGfx()
{
    return 0;
}

void agiGLViewport::Activate()
{
    Active = this;
}

void agiGLViewport::SetBackground(Vector3& color)
{
    glClearColor(color.x, color.y, color.z, 1.0f);
}

void agiGLViewport::Clear(int32_t flags)
{
    glScissor(static_cast<GLint>(m_pPipeline->m_Width * m_Parameters.m_X),
        static_cast<GLint>(m_pPipeline->m_Height * m_Parameters.m_Y),
        static_cast<GLint>(m_pPipeline->m_Width * m_Parameters.m_Width),
        static_cast<GLint>(m_pPipeline->m_Height * m_Parameters.m_Height));

    GLbitfield mask = 0;

    if (flags & 2)
    {
        mask = GL_DEPTH_BUFFER_BIT;
        agiCurState.SetDepthMask(1);
        glDepthMask(GL_TRUE);
    }

    if (flags & 1)
        mask |= GL_COLOR_BUFFER_BIT;

    if (mask)
        glClear(mask);
}
