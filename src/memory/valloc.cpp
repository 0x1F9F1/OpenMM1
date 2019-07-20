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

#include "valloc.h"
#include "minwin.h"

#include "allocator.h"

asSafeHeap::~asSafeHeap()
{
    Kill();
}

void asSafeHeap::Init(int32_t heap_size, int32_t multi_heap)
{
    SYSTEM_INFO si;
    GetSystemInfo(&si);

    heap_size = ~(si.dwPageSize - 1) & (si.dwPageSize + heap_size - 1);

    m_HeapSize = heap_size;
    m_MultiHeap = multi_heap;

    if (multi_heap)
    {
        heap_size *= 4;
    }

    m_pHeap = VirtualAlloc(
        nullptr, heap_size, multi_heap ? MEM_RESERVE : MEM_COMMIT, multi_heap ? PAGE_NOACCESS : PAGE_READWRITE);

    Activate();
}

void asSafeHeap::Restart()
{
    Deactivate();

    if (m_MultiHeap)
    {
        m_HeapIndex = (m_HeapIndex + 1) % 4;
    }

    Activate();
}

void asSafeHeap::Kill()
{
    if (m_pHeap)
    {
        Deactivate();

        if (m_MultiHeap)
        {
            VirtualFree(m_pHeap, 0, MEM_RELEASE);
        }

        m_pHeap = nullptr;
    }
}

void asSafeHeap::Activate()
{
    m_pCurrentHeap = static_cast<uint8_t*>(m_pHeap) + m_HeapSize * m_HeapIndex;

    if (m_MultiHeap)
    {
        VirtualAlloc(m_pCurrentHeap, m_HeapSize, MEM_COMMIT, PAGE_READWRITE);
    }

    ALLOCATOR.Init(m_pCurrentHeap, m_HeapSize, 1);
}

void asSafeHeap::Deactivate()
{
    if (m_MultiHeap)
    {
#pragma warning(suppress : 6250)
        VirtualFree(m_pCurrentHeap, m_HeapSize, MEM_DECOMMIT);
    }

    m_pCurrentHeap = 0;

    ALLOCATOR.Kill();
}
