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

#include "str.h"

string::~string()
{
    delete[] m_pData;
}

void string::Init(int32_t capacity)
{
    capacity += 50;

    if (capacity > m_Capacity)
    {
        delete[] m_pData;
        m_Capacity = capacity;
        m_pData = new char[m_Capacity];
    }
}

string::string(string const& other)
    : string(other.m_pData)
{}

string::string(char const* value)
{
    int32_t length = static_cast<int32_t>(strlen(value));

    m_Capacity = length + 50;
    m_pData = new char[m_Capacity];

    memcpy(m_pData, value, length + 1);
}

string::string()
{
    m_Capacity = 51;
    m_pData = new char[m_Capacity];
    m_pData[0] = '\0';
}
