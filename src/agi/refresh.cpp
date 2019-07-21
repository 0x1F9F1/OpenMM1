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

#include "refresh.h"

#include "pipeline.h"

agiRefreshable::agiRefreshable(class agiPipeline* pipe)
    : m_pPipeline(pipe)
{
    pipe->NotifyNew(this);
}

agiRefreshable::~agiRefreshable()
{
    if (m_State)
    {
        Quitf("agiRefreshable subclass didn't clean up");
    }

    if (m_RefCount)
    {
        Errorf("agiRefreshable subclass deleted instead of Release'd?");
    }

    if (m_pPipeline)
    {
        m_pPipeline->NotifyDelete(this);
    }
}
