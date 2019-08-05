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

    agiLib();
    ~agiLib();

    void Init(int32_t ct);
    void Kill();

    int32_t Add(Params& params);
    int32_t GetIndex(const char* key);
    void Remove(uint32_t index);
};

template <typename Params, typename Defs>
inline agiLib<Params, Defs>::agiLib() = default;

template <typename Params, typename Defs>
inline agiLib<Params, Defs>::~agiLib()
{
    Kill();
}

template <typename Params, typename Defs>
inline void agiLib<Params, Defs>::Init(int32_t ct)
{
    m_LookupTable.Init(64);

    Assert(ct <= agiLibMax);

    m_Count = ct;

    for (int32_t i = 0; i < ct; ++i)
    {
        m_Params[i] = new Params();
        m_Defs[i] = nullptr;
    }
}

template <typename Params, typename Defs>
void agiLib<Params, Defs>::Kill()
{
    while (m_Count--)
    {
        delete m_Params[m_Count];
        m_Defs[m_Count]->Release();
    }

    m_LookupTable.Kill();
}

template <typename Params, typename Defs>
inline int32_t agiLib<Params, Defs>::Add(Params& params)
{
    int32_t result = GetIndex(params.m_Name);

    if (!result)
    {
        Assert(m_Count < agiLibMax);

        m_Params[m_Count] = new Params(params);
        m_Defs[m_Count] = 0;

        result = ++m_Count;

        m_LookupTable.Insert(params.m_Name, reinterpret_cast<void*>(result));
    }

    return result;
}

template <typename Params, typename Defs>
inline int32_t agiLib<Params, Defs>::GetIndex(const char* key)
{
    char buffer[128];
    strcpy_s(buffer, key);
    _strupr_s(buffer, 128);

    return reinterpret_cast<uint32_t>(m_LookupTable.Access(buffer));
}

template <typename Params, typename Defs>
inline void agiLib<Params, Defs>::Remove(uint32_t index)
{
    if (index)
    {
        m_Params[index - 1] = 0;
    }
}
