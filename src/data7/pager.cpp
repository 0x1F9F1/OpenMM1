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

#include "pager.h"

#include "minwin.h"

void PagerInfo_t::Read(void* buffer, uint32_t offset, uint32_t size)
{
    SetFilePointer(static_cast<HANDLE>(m_PagerHandle), offset + m_Offset, nullptr, FILE_BEGIN);

    if (!size)
    {
        size = m_Size - offset;
    }

    DWORD read = 0;
    ReadFile(static_cast<HANDLE>(m_PagerHandle), buffer, size, &read, nullptr);
}
