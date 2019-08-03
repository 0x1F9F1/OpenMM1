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

#include "texsort.h"

static constexpr const int32_t BigVtxSize = 12000;
static constexpr const int32_t BigIdxSize = BigVtxSize * 3;

static constexpr const int32_t EnvVtxSize = 2048;
static constexpr const int32_t EnvIdxSize = EnvVtxSize * 3;

static extern_var(0x67BAD0, agiPolySet, BigPolySet);

#include "agi/rsys.h"

void agiPolySet::Init(int32_t verts, int32_t indices)
{
    if (agiCurState.GetVertType() <= 1)
    {
        Verts = reinterpret_cast<agiVtx*>(new agiScreenVtx[verts]);
    }
    else
    {
        Verts = reinterpret_cast<agiVtx*>(new agiScreenVtx2[verts]);
    }

    Verts2 = Verts;
    MaxVerts = verts;
    MaxIndices = indices;
    Indices = new uint16_t[indices];
}

agiTexSorter::agiTexSorter()
{
    if (Instance)
    {
        Quitf("Already have a TexSorter");
    }

    Instance = this;

    MaxVertsPerSet = 512;
    MaxIndicesPerSet = MaxVertsPerSet * 3;

    BigPolySet.Init(BigVtxSize, BigIdxSize);

    for (int32_t i = 0; i < MaxOpaqueSetCount; ++i)
    {
        agiPolySet* polys = new agiPolySet();
        polys->Init(MaxVertsPerSet, MaxIndicesPerSet);
        OpaquePolySets[i] = polys;
    }

    for (int32_t i = 0; i < MaxAlphaSetCount; ++i)
    {
        agiPolySet* polys = new agiPolySet();
        polys->Init(MaxVertsPerSet, MaxIndicesPerSet);
        AlphaPolySets[i] = polys;
    }

    EnvPolySet.Init(EnvVtxSize, EnvIdxSize);
}

define_dummy_symbol(texsort);

run_once([] {
    auto_hook_ctor(0x4F3DA0, agiTexSorter);

    create_patch("BigVtxSize", "agiTexSorter::BeginVerts", 0x4F4099 + 2, &BigVtxSize, 4);
    create_patch("BigIdxSize", "agiTexSorter::BeginVerts", 0x4F40A1 + 3, &BigIdxSize, 4);

    create_patch("BigVtxSize", "agiTexSorter::BeginVerts2", 0x4F42F1 + 3, &BigVtxSize, 4);
    create_patch("BigIdxSize", "agiTexSorter::BeginVerts2", 0x4F42F1 + 3, &BigIdxSize, 4);

    create_patch("EnvVtxSize", "agiTexSorter::GetEnv", 0x4F4029 + 2, &EnvVtxSize, 4);
    create_patch("EnvIdxSize", "agiTexSorter::GetEnv", 0x4F403C + 2, &EnvIdxSize, 4);
});