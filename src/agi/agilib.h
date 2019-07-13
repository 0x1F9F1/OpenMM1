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

#pragma once

#include "data7/hash.h"

constexpr size_t agiLibMax = 2048;

/*
    0x7024D8 | agiLib<agiPhysParameters,agiPhysDef> agiPhysLib;	
    0x706668 | agiLib<agiTexParameters,agiTexDef> agiTexLib;	
    0x70A6C0 | agiLib<agiMtlParameters,agiMtlDef> agiMtlLib;	
*/

template <typename Params, typename Defs>
struct agiLib
{
    Params* m_Params[agiLibMax] {};
    Defs* m_Defs[agiLibMax] {};
    HashTable m_LookupTable {};
    int32_t m_Count {0};

    ~agiLib();
};

template <typename Params, typename Defs>
inline agiLib<Params, Defs>::~agiLib()
{
    while (m_Count--)
    {
        delete m_Params[m_Count];
        m_Defs[m_Count]->Release();
    }
}
