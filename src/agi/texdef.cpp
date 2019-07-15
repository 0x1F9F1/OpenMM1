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

#include "texdef.h"
#include "texlib.h"

agiTexParameters::agiTexParameters()
{
    memset(this, 0, sizeof(*this));
}

agiTexLut::agiTexLut(agiPipeline* pipe)
    : agiRefreshable(pipe)
{}

agiTexDef::agiTexDef(agiPipeline* pipe)
    : agiRefreshable(pipe)
{}

agiTexDef::~agiTexDef()
{
    uint32_t index = agiTexLib.GetIndex(m_Params.m_Name);

    if (m_Params.m_LOD)
    {
        index += m_Params.m_LOD - 1;
    }

    agiTexLib.Remove(index);
}
