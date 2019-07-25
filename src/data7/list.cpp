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

#include "list.h"

List::~List()
{
    Kill();
}

void List::Kill()
{
    while (m_Size)
    {
        Delete(1);
    }
}

int32_t List::Insert(int32_t index, void* value)
{
    if (index < 1 || index > m_Size + 1)
    {
        return 0;
    }

    ListEntry* entry = new ListEntry {value, nullptr};

    if (index == 1)
    {
        entry->m_Next = m_First;
        m_First = entry;
    }
    else
    {
        ListEntry* next = m_First;

        for (int32_t i = 2; i < index; ++i)
        {
            next = next->m_Next;
        }

        entry->m_Next = next->m_Next;
        next->m_Next = entry;
    }

    ++m_Size;
    return 1;
}

void* List::Access(int32_t index)
{
    if (index < 1 || index > m_Size)
    {
        return 0;
    }

    ListEntry* entry = m_First;

    for (int32_t i = 0; i < index; ++i)
    {
        entry = entry->m_Next;
    }

    return entry->m_pValue;
}

int32_t List::Delete(int32_t index)
{
    if (index < 1 || index > m_Size)
    {
        return 0;
    }

    if (index == 1)
    {
        ListEntry* next = m_First;
        delete m_First;
        m_First = next;
    }
    else
    {
        ListEntry* entry = m_First;

        for (int32_t i = 2; i < index; ++i)
        {
            entry = entry->m_Next;
        }

        ListEntry* next = entry->m_Next;
        entry->m_Next = next->m_Next;
        delete next;
    }

    --m_Size;
    return 1;
}
