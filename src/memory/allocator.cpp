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

#include "stack.h"

#include <intrin.h>

static constexpr const char HexCharTable[16 + 1] = "0123456789ABCDEF";

static void HexDump16(char* buffer, const uint8_t* data)
{
    for (uint32_t i = 0; i < 16; ++i)
    {
        uint8_t v = data[i];

        const uint32_t j = (i * 3);

        buffer[j + 0] = HexCharTable[v >> 4];
        buffer[j + 1] = HexCharTable[v & 0xF];
        buffer[j + 2] = ' ';

        if (v < 0x20 || v >= 0x7F)
            v = '.';

        buffer[i + 48] = v;
    }

    buffer[64] = '\0';
}

// 0x50F210 | ?HeapAssert@@YAHPAXHPADH@Z
static int32_t HeapAssert(void* address, int32_t value, const char* message, int32_t source)
{
    if (value)
    {
        return 0;
    }

    char address_string[128];
    LookupAddress(address_string, source);
    Errorf("Heap node @ 0x%08X: %s (allocated by %s).", reinterpret_cast<uintptr_t>(address), message, address_string);

    char hex_string[65];
    const uint8_t* current = reinterpret_cast<const uint8_t*>(address) - 64;

    for (uint32_t pending = 144; pending != 0; pending -= 16, current += 16)
    {
        HexDump16(hex_string, current);

        Displayf((pending != 80) ? " %08X : %s" : "[%08X]: %s", reinterpret_cast<uintptr_t>(current), hex_string);
    }

    return 1;
}

static inline constexpr uint32_t AlignSize(uint32_t value) noexcept
{
    return (value + 7) & 0xFFFFFFF8;
}

struct asMemoryAllocator::Node
{
private:
    // Requires 8-byte alignment

    // 0:1 - In Use
    // 0x2 - Is Array
    // 0x4 - Sanity Check Pending
    // 0xFFFFFFF8 - Next
    uint32_t uStatus;

    // Unaligned size of Data
    uint32_t nSize;

    static constexpr uint32_t LOWER_GUARD = 0x55555555;
    static constexpr uint32_t UPPER_GUARD = 0xAAAAAAAA;

public:
    inline void Clear() noexcept
    {
        uStatus = 0;
        nSize = 0;
    }

    // Only aligned when free
    inline uint32_t GetSize() const noexcept
    {
        return nSize;
    }

    inline void SetSize(uint32_t size) noexcept
    {
        nSize = size;
    }

    inline Node* GetPrev() const noexcept
    {
#if 1
        return reinterpret_cast<Node*>(uStatus & 0xFFFFFFF8);
#else
        const uint32_t dist = uStatus & 0xFFFFFFF8;

        if (dist)
        {
            return reinterpret_cast<Node*>(reinterpret_cast<uint8_t*>(const_cast<Node*>(this)) - dist);
        }

        return nullptr;
#endif
    }

    inline void SetPrev(Node* n) noexcept
    {
#if 1
        uStatus = reinterpret_cast<uint32_t>(n) | (uStatus & 0x7);
#else
        uStatus &= 0x7;

        if (n)
        {
            const uint32_t dist = reinterpret_cast<uint8_t*>(this) - reinterpret_cast<uint8_t*>(n);
            DebugAssert((dist & 0x7) == 0);
            uStatus |= dist;
        }
#endif
    }

    inline uint8_t* GetData() const noexcept
    {
        return reinterpret_cast<uint8_t*>(const_cast<Node*>(this)) + sizeof(Node);
    }

    inline Node* GetNext() const noexcept
    {
        return reinterpret_cast<Node*>(GetData() + AlignSize(nSize));
    }

    inline void SetAllocated(bool allocated) noexcept
    {
        uStatus &= 0xFFFFFFF8;

        if (allocated)
            uStatus |= 1;
    }

    inline bool IsAllocated() const noexcept
    {
        return (uStatus & 0x1) == 0x1;
    }

    inline void SetIsArray(bool array) noexcept
    {
        uStatus &= 0XFFFFFFFD;

        if (array)
            uStatus |= 0x2;
    }

    inline bool IsArray() const noexcept
    {
        return (uStatus & 0x2) == 0x2;
    }

    // Used in SanityCheck
    inline void SetPendingSanity(bool pending) noexcept
    {
        uStatus &= 0xFFFFFFFB;

        if (pending)
            uStatus |= 0x4;
    }

    // Used in SanityCheck
    inline bool IsPendingSanity() const noexcept
    {
        return (uStatus & 0x4) == 0x4;
    }

    // Only valid for debug allocators
    inline int32_t GetAllocSource() const noexcept
    {
        uint8_t* const data = GetData();
        uint32_t source = 0;
        memcpy(&source, data, 4);
        return source;
    }

    // Only valid for debug allocators
    inline bool CheckLowerGuard() const noexcept
    {
        uint8_t* const data = GetData();
        uint32_t lower = 0;
        memcpy(&lower, data + 4, 4);
        return lower == LOWER_GUARD;
    }

    // Only valid for debug allocators
    inline bool CheckUpperGuard() const noexcept
    {
        uint8_t* const data = GetData();
        uint32_t upper = 0;
        memcpy(&upper, data + nSize - 4, 4);
        return upper == UPPER_GUARD;
    }

    inline void SetDebugGuards(uint32_t source) noexcept
    {
        uint8_t* const data = GetData();
        memcpy(data, &source, 4);
        memcpy(data + 4, &LOWER_GUARD, 4);
        memcpy(data + nSize - 4, &UPPER_GUARD, 4);
    }

    static inline Node* From(void* ptr, bool debug) noexcept
    {
        return reinterpret_cast<Node*>(static_cast<uint8_t*>(ptr) - (debug ? (sizeof(Node) + 8) : sizeof(Node)));
    }
};

struct asMemoryAllocator::FreeNode : asMemoryAllocator::Node
{
    FreeNode* PrevFree; // Prev free node in bucket
    FreeNode* NextFree; // Next free node in bucket

    inline FreeNode* GetPrevFree() const noexcept
    {
        return PrevFree;
    }

    inline FreeNode* GetNextFree() const noexcept
    {
        return NextFree;
    }

    inline void SetPrevFree(FreeNode* n) noexcept
    {
        PrevFree = n;
    }

    inline void SetNextFree(FreeNode* n) noexcept
    {
        NextFree = n;
    }

    inline void MergeNext()
    {
        Node* const next = GetNext();
        SetSize(next->GetSize() + reinterpret_cast<uint8_t*>(next) - reinterpret_cast<uint8_t*>(this));
        GetNext()->SetPrev(this);
    }
};

static inline uint32_t GetBucketIndex(uint32_t size) noexcept
{
#if 1
    unsigned long index;
    _BitScanReverse(&index, size + 7);
    return index;
#else
    uint32_t bucket = 3;

    for (uint32_t i = (size + 7) >> 4; i; i >>= 1)
    {
        ++bucket;
    }

    return bucket;
#endif
}

void asMemoryAllocator::Init(void* heap_data, uint32_t heap_size, int32_t use_nodes)
{
    m_pHeap = static_cast<uint8_t*>(heap_data);
    m_HeapSize = heap_size;
    m_HeapOffset = 0;
    m_Initialized = 1;
    m_UseNodes = use_nodes;
    m_Last = nullptr;

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

__declspec(noinline) void* asMemoryAllocator::Allocate(uint32_t size)
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

    FreeNode* n = nullptr;

    uint32_t const asize = AlignSize(size);

    for (uint32_t i = GetBucketIndex(size); i < 32; ++i)
    {
        for (n = m_Buckets[i]; n; n = n->GetNextFree())
        {
            const uint32_t nsize = n->GetSize();

            if ((nsize == asize) || (nsize > asize + sizeof(Node)))
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

        const uint32_t split_size = n->GetSize() - asize;

        DebugAssert(split_size == 0 || split_size > sizeof(Node));

        Unlink(n);

        n->SetAllocated(true);
        n->SetSize(size);

        if (split_size > sizeof(Node))
        {
            Node* const m = n->GetNext();

            m->Clear();
            m->SetPrev(n);
            m->SetSize(split_size - sizeof(Node));

            Node* const o = m->GetNext();

            if (reinterpret_cast<uint8_t*>(o) < (m_pHeap + m_HeapOffset))
            {
                o->SetPrev(m);
            }

            Link(static_cast<FreeNode*>(m));

            if (m_Last == n)
            {
                m_Last = m;
            }
        }
        else
        {
            Assert(split_size == 0);
        }
    }
    else
    {
        n = reinterpret_cast<FreeNode*>(m_pHeap + m_HeapOffset);
        m_HeapOffset += sizeof(Node) + asize;

        if (m_HeapOffset > m_HeapSize)
        {
            Quitf("Heap overrun");
        }

        n->Clear();
        n->SetPrev(m_Last);
        n->SetSize(size);
        n->SetAllocated(true);

        m_Last = n;
    }

    uint8_t* result = n->GetData();

    std::memset(result, 0x0, size);

    if (m_Debug)
    {
        void** ebp = static_cast<void***>(_AddressOfReturnAddress())[-1];
        ebp = static_cast<void**>(*ebp);
        n->SetDebugGuards(reinterpret_cast<uint32_t>(ebp[1]));

        result += 8;
    }

    return result;
}

void asMemoryAllocator::CheckPointer(void* ptr)
{
    if (m_Initialized && m_Debug && ptr)
    {
        Node* const n = Node::From(ptr, true);

        if (!n->CheckLowerGuard() || !n->CheckUpperGuard())
        {
            Errorf("CheckPointer failed!");

            SanityCheck();
        }
    }
}

__declspec(noinline) void asMemoryAllocator::Free(void* ptr)
{
    if (!ptr || !m_Initialized)
    {
        return;
    }

    Assert(m_UseNodes);

    Verify(ptr);
    CheckPointer(ptr);

    FreeNode* n = static_cast<FreeNode*>(Node::From(ptr, m_Debug));

    n->SetAllocated(false);
    n->SetSize(AlignSize(n->GetSize()));

    FreeNode* const prev = static_cast<FreeNode*>(n->GetPrev());

    if (prev && !prev->IsAllocated()) // Merge previous node, if free
    {
        Unlink(prev);

        if (m_Last == n)
        {
            m_Last = prev;
        }

        prev->MergeNext();

        n = prev;
    }

    if (m_Last == n)
    {
        m_Last = n->GetPrev();

        m_HeapOffset = reinterpret_cast<uint8_t*>(n) - reinterpret_cast<uint8_t*>(m_pHeap);
    }
    else
    {
        FreeNode* const next = static_cast<FreeNode*>(n->GetNext());

        DebugAssert(reinterpret_cast<uint8_t*>(next) < (m_pHeap + m_HeapOffset));

        if (!next->IsAllocated()) // Merge next node, if free
        {
            Unlink(next);

            if (m_Last == next)
            {
                m_Last = n;
            }

            n->MergeNext();
        }

        Link(n);
    }
}

void asMemoryAllocator::Unlink(FreeNode* n)
{
    FreeNode* const prev = n->GetPrevFree();
    FreeNode* const next = n->GetNextFree();

    if (prev)
    {
        prev->SetNextFree(next);
    }
    else
    {
        const uint32_t bucket = GetBucketIndex(n->GetSize());

        m_Buckets[bucket] = next;
    }

    if (next)
    {
        next->SetPrevFree(prev);
    }

    n->SetPrevFree(nullptr);
    n->SetNextFree(nullptr);
}

void asMemoryAllocator::Link(FreeNode* n)
{
    const uint32_t bucket = GetBucketIndex(n->GetSize());

    FreeNode* const next = m_Buckets[bucket];

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

    void* const result = Allocate(size);

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

    const uint32_t lock_count = m_LockCount;

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
        Assert(Node::From(ptr, m_Debug)->IsAllocated());
    }
}

void asMemoryAllocator::GetStats(asMemStats* stats)
{
    uint8_t* const heap = m_pHeap;
    uint8_t* const heap_end = heap + m_HeapOffset;

    memset(stats, 0, sizeof(asMemStats));

    for (Node *n = reinterpret_cast<Node*>(heap), *prev = nullptr; n->GetData() < heap_end; prev = n, n = n->GetNext())
    {
        ++stats->nTotalNodes;

        const uint32_t size = n->GetSize();

        stats->cbOverhead += (AlignSize(size) - size) + sizeof(Node);

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

    if (!heap)
    {
        return;
    }

    uint8_t* const heap_end = heap + m_HeapOffset;

    int32_t is_invalid = 0;

    Node* last = nullptr;
    size_t total = 0;
    size_t total_used = 0;

    for (Node* n = reinterpret_cast<Node*>(heap); n->GetData() < heap_end; last = n, n = n->GetNext())
    {
        if (m_Debug && n->IsAllocated())
        {
            is_invalid |= HeapAssert(n, n->CheckLowerGuard(), "Lower guard word", n->GetAllocSource());
            is_invalid |= HeapAssert(n, n->CheckUpperGuard(), "Upper guard word", n->GetAllocSource());
        }

        is_invalid |= HeapAssert(n, n->GetPrev() == last, "Linked list", 0);
        is_invalid |= HeapAssert(n, !n->IsPendingSanity(), "Pendig sanity", 0);

        if (n->IsAllocated())
        {
            ++total_used;
        }
        else
        {
            n->SetPendingSanity(true);
        }

        ++total;
    }

    if (is_invalid)
    {
        Abortf("Memory Allocator Corrupted");
    }

    Assert(last == m_Last);

    if (last)
    {
        Assert(reinterpret_cast<uint8_t*>(last->GetNext()) == heap_end);
    }

    size_t total_free = 0;

    for (size_t i = 3; i < 32; ++i)
    {
        for (FreeNode *n = m_Buckets[i], *prev = nullptr; n; prev = n, n = n->GetNextFree())
        {
            Assert(n->GetPrevFree() == prev);
            Assert(n->IsPendingSanity());

            n->SetPendingSanity(false);

            ++total_free;
        }
    }

    for (Node* n = reinterpret_cast<Node*>(heap); n->GetData() < heap_end; n = n->GetNext())
    {
        Assert(!n->IsPendingSanity());
    }

    Assert(total_used + total_free == total);

    Displayf("Sanity Checked %u nodes (%u used, %u free)", total, total_used, total_free);
}

uint32_t asMemoryAllocator::GetSize(void* ptr)
{
    uint32_t size = Node::From(ptr, m_Debug)->GetSize();

    if (m_Debug)
    {
        size -= 12;
    }

    return size;
}

uint32_t asMemoryAllocator::GetCurrentTotal() const noexcept
{
    return m_HeapOffset;
}

bool asMemoryAllocator::DebugEnabled() const noexcept
{
    return m_Debug;
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
    auto_hook(0x50EE60, asMemoryAllocator::Reallocate);

    auto_hook(0x50F050, asMemoryAllocator::SanityCheck);

    auto_hook(0x50F550, msize);
});
