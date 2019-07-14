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

#include "viewport.h"

#include "pipeline.h"

agiViewport::agiViewport(class agiPipeline* pipe)
    : agiRefreshable(pipe)
    , m_dword144(pipe->m_dword38)
{}

agiViewport::~agiViewport()
{
    if (this == Active)
    {
        Active = nullptr;
    }
}

agiViewParameters::agiViewParameters()
{
    m_matrix34A4.Identity();
    m_matrix3444.Identity();
    m_matrix3474.Identity();
    m_matrix34D4.Identity();

    ++ViewSerial;

    Perspective(90.0f, 1.25f, 1.0f, 1000.0f);
}
