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

#include "allocator.h"

#include "data7/assert.h"
#include "data7/printer.h"

#include "stack.h"

struct asMemoryAllocator::node
{
    // Requires 8-byte alignment

    // 0:1 - In Use
    // 0x2 - Unknown
    // 0x4 - Sanity Check Pending
    // 0xFFFFFFF8 - Next
    uint32_t uStatus {0};
    uint32_t nSize {0};

    union
    {
        uint8_t Data[1];

        struct
        {
            int32_t uSourceAddress;
            uint32_t uLowerGuard;

            uint8_t Data[1];
        } debug;

        struct
        {
            node* pPrev; // Prev free node in bucket
            node* pNext; // Next free node in bucket
        } free;
    };

    /*
        if (uStatus & 0x1) // In Use
        {
            if (allocator.m_Debug)
            {
                uint32_t AllocAddress = GetSecondReturnAddress(); // Second return address of Allocate call
                uint32_t LowerGuard = 0x55555555; // Lower Guard Word
            }

            uint8_t Data[nSize];

            if (m_Debug)
            {
                uint32_t UpperGuard = 0xAAAAAAAA; // Upper Guard Word
            }
        }
        else
        {
            node* m_PrevFree; // Prev free node in bucket
            node* m_NextFree; // Next free node in bucket
        }
    */

    inline node* GetPrev() const
    {
        return reinterpret_cast<node*>(uStatus & 0xFFFFFFF8);
    }

    inline uint32_t GetSize() const
    {
        return nSize;
    }

    inline uint32_t GetRawSize() const
    {
        return (nSize + 7) & 0xFFFFFFF8;
    }

    inline node* GetNext() const
    {
        return reinterpret_cast<node*>(const_cast<uint8_t*>(Data) + GetRawSize());
    }

    // Only valid while not in use
    inline node* GetPrevFree() const
    {
        return free.pPrev;
    }

    // Only valid while not in use
    inline node* GetNextFree() const
    {
        return free.pNext;
    }

    inline bool IsAllocated() const
    {
        return (uStatus & 0x1) == 0x1;
    }

    inline void SetAllocated(node* prev)
    {
        uStatus = reinterpret_cast<uint32_t>(prev) | 0x1;
    }

    inline void SetFreed()
    {
        uStatus &= 0xFFFFFFF8;
    }

    // Used in SanityCheck
    inline void SetPendingSanity(bool pending)
    {
        uStatus &= 0xFFFFFFFB;

        if (pending)
            uStatus |= 0x4;
    }

    // Used in SanityCheck
    inline bool IsPendingSanity() const
    {
        return (uStatus & 0x4) == 0x4;
    }

    // Only valid for debug allocators
    inline int32_t GetAllocSource() const
    {
        return debug.uSourceAddress;
    }

    // Only valid for debug allocators
    inline uint32_t GetLowerGuard() const
    {
        return debug.uLowerGuard;
    }

    // Only valid for debug allocators
    inline uint32_t GetUpperGuard() const
    {
        return reinterpret_cast<uint32_t*>(GetNext())[-1];
    }

    inline uint32_t GetBucketIndex() const
    {
        uint32_t bucket = 3;

        for (uint32_t i = GetRawSize() >> 4; i; i >>= 1)
        {
            ++bucket;
        }

        return bucket;
    }

    static const uint32_t LOWER_GUARD = 0x55555555;
    static const uint32_t UPPER_GUARD = 0xAAAAAAAA;
};

static inline asMemoryAllocator::node* GetNode(void* ptr, bool debug = false) noexcept
{
    return reinterpret_cast<asMemoryAllocator::node*>(static_cast<uint8_t*>(ptr) -
        (debug ? offsetof(asMemoryAllocator::node, debug.Data) : offsetof(asMemoryAllocator::node, Data)));
}

void asMemoryAllocator::Init(void* heap_data, uint32_t heap_size, int32_t use_nodes)
{
    m_pHeap = static_cast<uint8_t*>(heap_data);
    m_HeapSize = heap_size;
    m_HeapOffset = 0;
    m_Initialized = 1;
    m_UseNodes = use_nodes;
    m_Nodes = nullptr;

    if (use_nodes)
    {
        memset(m_Buckets, 0, sizeof(m_Buckets));
    }
}

void asMemoryAllocator::Kill()
{
    m_pHeap = nullptr;
    m_Initialized = 0;
}

void asMemoryAllocator::CheckPointer(void* ptr)
{
    if (m_Initialized && m_Debug && ptr)
    {
        node* n = GetNode(ptr, true);

        if (n->GetLowerGuard() != node::LOWER_GUARD || n->GetUpperGuard() != node::UPPER_GUARD)
        {
            Errorf("CheckPointer failed!");

            SanityCheck();
        }
    }
}

void asMemoryAllocator::Unlink(asMemoryAllocator::node* n)
{
    uint32_t bucket = n->GetBucketIndex();

    node* prev = n->free.pPrev;

    if (prev)
    {
        prev->free.pNext = n->free.pNext;
    }
    else
    {
        m_Buckets[bucket] = n->free.pNext;
    }

    node* next = n->free.pNext;

    if (next)
    {
        next->free.pPrev = n->free.pPrev;
    }

    n->free.pNext = nullptr;
    n->free.pPrev = nullptr;
}

void asMemoryAllocator::Link(asMemoryAllocator::node* n)
{
    uint32_t bucket = n->GetBucketIndex();

    node* prev = m_Buckets[bucket];

    n->free.pPrev = nullptr;
    n->free.pNext = prev;

    if (prev)
    {
        prev->free.pPrev = n;
    }

    m_Buckets[bucket] = n;
}

void* asMemoryAllocator::Reallocate(void* ptr, uint32_t size)
{
    if (m_Initialized)
    {
        Verify(ptr);
    }

    void* result = Allocate(size);

    if (ptr && result)
    {
        memcpy(result, ptr, GetNode(ptr, m_Debug)->GetSize());

        Free(ptr);
    }

    return result;
}

void asMemoryAllocator::Verify(void* ptr)
{
    Assert(m_pHeap && m_HeapSize);

    uint32_t lock_count = m_LockCount;

    if (lock_count)
    {
        m_LockCount = 0;

        Warningf("Memory allocated or freed while locked!");

        StackTraceback(16);

        m_LockCount = lock_count;
    }

    if (ptr)
    {
        Assert(static_cast<uint8_t*>(ptr) >= m_pHeap);
        Assert(static_cast<uint8_t*>(ptr) < (m_pHeap + m_HeapSize));
        Assert(GetNode(ptr, m_Debug)->IsAllocated());
    }
}

static const uint8_t AllocatorOverheadTable[8] = {0u, 7u, 6u, 5u, 4u, 3u, 2u, 1u};

void asMemoryAllocator::GetStats(asMemStats* stats)
{
    uint8_t* const heap = m_pHeap;
    uint8_t* const heap_end = heap + m_HeapOffset;

    memset(stats, 0, sizeof(asMemStats));

    for (node *n = reinterpret_cast<node*>(heap), *prev = nullptr; n->Data < heap_end; prev = n, n = n->GetNext())
    {
        ++stats->nTotalNodes;

        uint32_t node_size = n->GetSize();
        uint32_t node_raw_size = n->GetRawSize();

        stats->cbOverhead += (node_raw_size - node_size) + offsetof(asMemoryAllocator::node, Data);

        if (n->IsAllocated())
        {
            ++stats->nUsedNodes;
            stats->cbUsed += node_size;
        }
        else
        {
            ++stats->nFreeNodes;
            stats->cbFree += node_size;
        }
    }

    Assert(stats->cbFree + stats->cbUsed + stats->cbOverhead == m_HeapOffset);
}

void asMemoryAllocator::SanityCheck()
{
    if (!m_Initialized || !m_UseNodes)
    {
        return;
    }

    uint8_t* const heap = m_pHeap;

    Assert(heap != nullptr);

    uint8_t* const heap_end = heap + m_HeapOffset;

    int32_t is_invalid = 0;

    for (node *n = reinterpret_cast<node*>(heap), *prev = nullptr; n->Data < heap_end; prev = n, n = n->GetNext())
    {
        if (m_Debug && !n->IsAllocated())
        {
            is_invalid |=
                HeapAssert(n, n->GetLowerGuard() == node::LOWER_GUARD, "Lower guard word", n->GetAllocSource());

            is_invalid |=
                HeapAssert(n, n->GetUpperGuard() == node::UPPER_GUARD, "Upper guard word", n->GetAllocSource());
        }

        is_invalid |= HeapAssert(n, n->GetPrev() == prev, "Linked list", 0);

        if (!n->IsAllocated())
        {
            n->SetPendingSanity(true);
        }
    }

    if (is_invalid)
    {
        Abortf("Memory Allocator Corrupted");
    }

    for (size_t i = 3; i < 32; ++i)
    {
        for (node *n = m_Buckets[i], *prev = nullptr; n; prev = n, n = n->GetNextFree())
        {
            Assert(n->GetPrevFree() == prev);
            Assert(n->IsPendingSanity());

            n->SetPendingSanity(false);
        }
    }

    for (node *n = reinterpret_cast<node*>(heap), *prev = nullptr; n->Data < heap_end; prev = n, n = n->GetNext())
    {
        Assert(!n->IsPendingSanity());
    }

    // asMemStats stats;
    // GetStats(&stats);
    // Displayf("--- Memory Stats ---");
    // Displayf("> Nodes: %u total (%u used, %u free)", stats.nTotalNodes, stats.nUsedNodes, stats.nFreeNodes);
    // Displayf("> Memory: 0x%u used, 0x%u free, 0x%u overhead", stats.cbUsed, stats.cbFree, stats.cbOverhead);
}

define_dummy_symbol(allocator);

run_once([] { auto_hook(0x50F050, asMemoryAllocator::SanityCheck); });