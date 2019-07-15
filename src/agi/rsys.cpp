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

#include "rsys.h"

#include "pipeline.h"

agiRasterizer::agiRasterizer(agiPipeline* pipe)
    : agiRefreshable(pipe)
{
    agiLastState.Reset();

    agiCurState.SetPolyMode(15);
    agiCurState.SetByte12(4);
    agiCurState.SetByte2F(0);
    agiCurState.SetByte30(0);
    agiCurState.SetCullMode(3);

    if (pipe->m_dword2E4 & 4)
    {
        agiCurState.SetByte10(1);
    }

    agiCurState.SetByte33(0);

    RAST = this;
}

agiRendStateStruct::agiRendStateStruct()
{
    memset(this, 0, sizeof(*this));
}

void agiRendStateStruct::Reset()
{
    memset(this, 0xFF, sizeof(*this));

    float20 = -99.0;
    float24 = -99.0;
    float28 = -99.0;
    float34 = -99.0;
}
