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

#include <intrin.h>

static inline uint32_t Align8(uint32_t value) noexcept
{
    return (value + 7) & 0xFFFFFFF8;
}

struct asMemoryAllocator::node
{
private:
    // Requires 8-byte alignment

    // 0:1 - In Use
    // 0x2 - Unknown
    // 0x4 - Sanity Check Pending
    // 0xFFFFFFF8 - Next
    uint32_t uStatus;

    // Unaligned size of Data
    uint32_t nSize;

    union
    {
        uint8_t Data[1];

        struct
        {
            node* Prev; // Prev free node in bucket
            node* Next; // Next free node in bucket
        } Free;
    };

    static const uint32_t LOWER_GUARD = 0x55555555;
    static const uint32_t UPPER_GUARD = 0xAAAAAAAA;

public:
    inline void Clear()
    {
        uStatus = 0;
        nSize = 0;
    }

    // Unaligned size of allocation size
    inline uint32_t GetSize() const
    {
        return nSize;
    }

    inline void SetSize(uint32_t size)
    {
        nSize = size;
    }

    inline node* GetPrev() const
    {
        return reinterpret_cast<node*>(uStatus & 0xFFFFFFF8);
    }

    inline void SetPrev(node* n)
    {
        uStatus = reinterpret_cast<uint32_t>(n) | (uStatus & 0x7);
    }

    inline node* GetNext() const
    {
        return reinterpret_cast<node*>(const_cast<uint8_t*>(Data) + Align8(nSize));
    }

    inline uint8_t* GetData()
    {
        return Data;
    }

    // Only valid while not in use
    inline node* GetPrevFree() const
    {
        return Free.Prev;
    }

    // Only valid while not in use
    inline node* GetNextFree() const
    {
        return Free.Next;
    }

    inline void SetPrevFree(node* n)
    {
        Free.Prev = n;
    }

    inline void SetNextFree(node* n)
    {
        Free.Next = n;
    }

    inline void SetAllocated(bool allocated)
    {
        uStatus &= 0xFFFFFFFE;

        if (allocated)
            uStatus |= 1;
    }

    inline bool IsAllocated() const
    {
        return (uStatus & 0x1) == 0x1;
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
        uint32_t source = 0;
        memcpy(&source, Data, 4);
        return source;
    }

public:
    // Only valid for debug allocators
    inline bool CheckLowerGuard() const
    {
        uint32_t lower = 0;
        memcpy(&lower, Data + 4, 4);
        return lower == LOWER_GUARD;
    }

    // Only valid for debug allocators
    inline bool CheckUpperGuard() const
    {
        uint32_t upper = 0;
        memcpy(&upper, Data + nSize - 4, 4);
        return upper = UPPER_GUARD;
    }

    inline void SetDebugGuard(uint32_t source)
    {
        memcpy(Data, &source, 4);
        memcpy(Data + 4, &LOWER_GUARD, 4);
        memcpy(Data + nSize - 4, &UPPER_GUARD, 4);
    }
};

static inline asMemoryAllocator::node* GetNode(void* ptr, bool debug) noexcept
{
    return reinterpret_cast<asMemoryAllocator::node*>(static_cast<uint8_t*>(ptr) - (debug ? 16 : 8));
}

static inline uint32_t GetBucketIndex(uint32_t size) noexcept
{
    uint32_t bucket = 3;

    for (uint32_t i = (size + 7) >> 4; i; i >>= 1)
    {
        ++bucket;
    }

    return bucket;
}

void asMemoryAllocator::Init(void* heap_data, uint32_t heap_size, int32_t use_nodes)
{
    m_pHeap = static_cast<uint8_t*>(heap_data);
    m_HeapSize = heap_size;
    m_HeapOffset = 0;
    m_Initialized = 1;
    m_UseNodes = use_nodes;
    m_Nodes = nullptr;

#ifdef _DEBUG
    m_Debug = 1;
#endif

    Assert(m_UseNodes);

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

void* asMemoryAllocator::Allocate(uint32_t size)
{
    if (!size)
    {
        return nullptr;
    }

    Assert(m_Initialized && m_UseNodes);

    if (m_Debug)
    {
        size += 12;
    }

    node* n = nullptr;

    uint32_t asize = Align8(size);

    for (uint32_t i = GetBucketIndex(size); i < 32; ++i)
    {
        for (n = m_Buckets[i]; n; n = n->GetNextFree())
        {
            uint32_t nsize = n->GetSize();

            if ((nsize == asize) || (nsize > asize + 8))
            {
                break;
            }
        }

        if (n)
        {
            break;
        }
    }

    if (n)
    {
        Assert(!n->IsAllocated());

        uint32_t split_size = n->GetSize() - asize;

        Assert(split_size == 0 || split_size > 8);

        Unlink(n);

        n->SetAllocated(true);
        n->SetSize(size);

        if (split_size > 8)
        {
            split_size -= 8;

            node* m = n->GetNext();

            m->Clear();
            m->SetPrev(n);
            m->SetSize(split_size);

            node* o = m->GetNext();

            if (reinterpret_cast<uint8_t*>(o) < (m_pHeap + m_HeapOffset))
            {
                o->SetPrev(m);
            }

            Link(m);

            if (m_Nodes == n)
            {
                m_Nodes = m;
            }
        }
        else
        {
            Assert(split_size == 0);
        }
    }
    else
    {
        n = reinterpret_cast<node*>(m_pHeap + m_HeapOffset);
        m_HeapOffset += asize + 8;

        if (m_HeapOffset > m_HeapSize)
        {
            Quitf("Heap overrun");
        }

        n->Clear();
        n->SetPrev(m_Nodes);
        n->SetSize(size);
        n->SetAllocated(true);

        m_Nodes = n;
    }

    uint8_t* result = n->GetData();

    memset(result, 0, size);

    if (m_Debug)
    {
        void** ebp = static_cast<void***>(_AddressOfReturnAddress())[-1];
        ebp = static_cast<void**>(*ebp);
        n->SetDebugGuard(reinterpret_cast<uint32_t>(ebp[1]));

        result += 8;
    }

    return result;
}

void asMemoryAllocator::CheckPointer(void* ptr)
{
    if (m_Initialized && m_Debug && ptr)
    {
        node* n = GetNode(ptr, true);

        if (!n->CheckLowerGuard() || !n->CheckUpperGuard())
        {
            Errorf("CheckPointer failed!");

            SanityCheck();
        }
    }
}

void asMemoryAllocator::Free(void* ptr)
{
    if (!ptr)
    {
        return;
    }

    Assert(m_Initialized && m_UseNodes);

    Verify(ptr);

    node* n = GetNode(ptr, m_Debug);

    if (m_Debug)
    {
        if (!n->CheckLowerGuard() || !n->CheckUpperGuard())
        {
            SanityCheck();
        }
    }

    n->SetAllocated(false);
    n->SetSize(Align8(n->GetSize()));

    node* prev = n->GetPrev();

    if (prev && !prev->IsAllocated()) // Merge previous node, if free
    {
        Unlink(prev);

        prev->SetSize(n->GetSize() + reinterpret_cast<uint8_t*>(n) - reinterpret_cast<uint8_t*>(prev));

        if (m_Nodes == n)
        {
            m_Nodes = prev;
        }

        n = prev;
        n->GetNext()->SetPrev(n);
    }

    node* next = n->GetNext();

    if ((reinterpret_cast<uint8_t*>(next) < (m_pHeap + m_HeapOffset)) &&
        !next->IsAllocated()) // Merge next node, if free
    {
        Unlink(next);

        n->SetSize(next->GetSize() + reinterpret_cast<uint8_t*>(next) - reinterpret_cast<uint8_t*>(n));

        n->GetNext()->SetPrev(n);

        if (m_Nodes == next)
        {
            m_Nodes = n;
        }
    }

    Link(n);
}

void asMemoryAllocator::Unlink(asMemoryAllocator::node* n)
{
    uint32_t bucket = GetBucketIndex(n->GetSize());

    node* prev = n->GetPrevFree();

    if (prev)
    {
        prev->SetNextFree(n->GetNextFree());
    }
    else
    {
        m_Buckets[bucket] = n->GetNextFree();
    }

    node* next = n->GetNextFree();

    if (next)
    {
        next->SetPrevFree(n->GetPrevFree());
    }

    n->SetPrevFree(nullptr);
    n->SetNextFree(nullptr);
}

void asMemoryAllocator::Link(asMemoryAllocator::node* n)
{
    uint32_t bucket = GetBucketIndex(n->GetSize());

    node* next = m_Buckets[bucket];

    n->SetPrevFree(nullptr);
    n->SetNextFree(next);

    if (next)
    {
        next->SetPrevFree(n);
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
        memcpy(result, ptr, GetSize(ptr));

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

void asMemoryAllocator::GetStats(asMemStats* stats)
{
    uint8_t* const heap = m_pHeap;
    uint8_t* const heap_end = heap + m_HeapOffset;

    memset(stats, 0, sizeof(asMemStats));

    for (node *n = reinterpret_cast<node*>(heap), *prev = nullptr; n->GetData() < heap_end; prev = n, n = n->GetNext())
    {
        ++stats->nTotalNodes;

        uint32_t size = n->GetSize();

        stats->cbOverhead += (Align8(size) - size) + 8;

        if (n->IsAllocated())
        {
            ++stats->nUsedNodes;
            stats->cbUsed += size;
        }
        else
        {
            ++stats->nFreeNodes;
            stats->cbFree += size;
        }
    }

    Assert(stats->cbFree + stats->cbUsed + stats->cbOverhead == m_HeapOffset);
}

void asMemoryAllocator::SanityCheck()
{
    if (!m_Initialized)
    {
        return;
    }

    uint8_t* const heap = m_pHeap;
    uint8_t* const heap_end = heap + m_HeapOffset;

    int32_t is_invalid = 0;

    for (node *n = reinterpret_cast<node*>(heap), *prev = nullptr; n->GetData() < heap_end; prev = n, n = n->GetNext())
    {
        if (m_Debug && n->IsAllocated())
        {
            is_invalid |= HeapAssert(n, n->CheckLowerGuard(), "Lower guard word", n->GetAllocSource());
            is_invalid |= HeapAssert(n, n->CheckUpperGuard(), "Upper guard word", n->GetAllocSource());
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

    for (node *n = reinterpret_cast<node*>(heap), *prev = nullptr; n->GetData() < heap_end; prev = n, n = n->GetNext())
    {
        Assert(!n->IsPendingSanity());
    }
}

uint32_t asMemoryAllocator::GetSize(void* ptr)
{
    uint32_t size = GetNode(ptr, m_Debug)->GetSize();

    if (m_Debug)
    {
        size -= 12;
    }

    return size;
}

static uint32_t msize(void* ptr)
{
    return CRTALLOCATOR.GetSize(ptr);
}

define_dummy_symbol(allocator);

run_once([] {
    auto_hook(0x50E990, asMemoryAllocator::Init);
    auto_hook(0x50E9E0, asMemoryAllocator::Allocate);
    auto_hook(0x50EC50, asMemoryAllocator::Free);
    auto_hook(0x50EE10, asMemoryAllocator::Link);
    auto_hook(0x50EDB0, asMemoryAllocator::Unlink);
    auto_hook(0x50F050, asMemoryAllocator::SanityCheck);
    auto_hook(0x50EE60, asMemoryAllocator::Reallocate);

    auto_hook(0x50F550, msize);
});