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

#include "pipeline.h"

#include "error.h"
#include "refresh.h"

#include <float.h>

agiPipeline::agiPipeline()
{
    unsigned int current = 0;
    _controlfp_s(&current, 0x20000, 0x30000);

    PROBER = 0;
}

agiPipeline::~agiPipeline()
{
    agiRefreshable* v1 = this->m_pRefreshables;
    if (v1)
    {
        Errorf("Pipeline didn't release all its objects.");

        for (; v1; v1 = v1->m_pNext)
        {
            v1->AddRef();
            int32_t refs = v1->Release();

            agiDisplayf("Refreshable '%s' ref count = %d", v1->GetName(), refs);
            v1->m_pPipeline = 0;
        }
    }
}
