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

#include "phys.h"

#include "mmcity/renderweb.h"

#include <algorithm>

static constexpr size_t MAX_MOVERS = 128;

class mmPhysEntity;

struct PhysMover
{
    mmInstance* m_pInst {nullptr};
    mmPhysEntity* m_pEntity {nullptr};
    int32_t m_Count1 {0};
    int32_t m_Count2 {0};
    uint32_t Val1Toggles[32] {};
    mmInstance* Vals1[32] {};
    mmInstance* Vals2[32] {};
    uint32_t byte190 {0};
};

static extern_var(0x66C870, PhysMover[MAX_MOVERS], Movers);
static extern_var(0x66C840, int32_t, CurrentMovers);

mmPhysExec::mmPhysExec() = default;
mmPhysExec::~mmPhysExec() = default;

mmPhysicsMGR::mmPhysicsMGR()
{
    if (Instance)
    {
        Quitf("Can only have one physmgr at a time");
    }

    Instance = this;
    AddChild(&OverSample);
    OverSample.AddChild(&PhysExec);
    OverSample.RealTime(35.0f);
    EnableCachedPoly = 1;

    for (PhysMover& mover : Movers)
    {
        mover.m_Count1 = 0;
        mover.m_Count2 = 0;

        for (uint32_t& toggle : mover.Val1Toggles)
        {
            toggle = 0;
        }
    }

    CurrentMovers = 0;

    Reset();
}
