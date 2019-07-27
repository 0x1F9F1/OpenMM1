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

/*
    memory:allocator

    0x50E970 | public: __thiscall asMemoryAllocator::asMemoryAllocator(void) | ??0asMemoryAllocator@@QAE@XZ
    0x50E980 | public: __thiscall asMemoryAllocator::~asMemoryAllocator(void) | ??1asMemoryAllocator@@QAE@XZ
    0x50E990 | public: void __thiscall asMemoryAllocator::Init(void *,unsigned int,int) | ?Init@asMemoryAllocator@@QAEXPAXIH@Z
    0x50E9D0 | public: void __thiscall asMemoryAllocator::Kill(void) | ?Kill@asMemoryAllocator@@QAEXXZ
    0x50E9E0 | public: void * __thiscall asMemoryAllocator::Allocate(unsigned int) | ?Allocate@asMemoryAllocator@@QAEPAXI@Z
    0x50EC00 | public: void __thiscall asMemoryAllocator::CheckPointer(void *) | ?CheckPointer@asMemoryAllocator@@QAEXPAX@Z
    0x50EC50 | public: void __thiscall asMemoryAllocator::Free(void *) | ?Free@asMemoryAllocator@@QAEXPAX@Z
    0x50EDB0 | private: void __thiscall asMemoryAllocator::Unlink(struct asMemoryAllocator::node *) | ?Unlink@asMemoryAllocator@@AAEXPAUnode@1@@Z
    0x50EE10 | private: void __thiscall asMemoryAllocator::Link(struct asMemoryAllocator::node *) | ?Link@asMemoryAllocator@@AAEXPAUnode@1@@Z
    0x50EE60 | public: void * __thiscall asMemoryAllocator::Reallocate(void *,unsigned int) | ?Reallocate@asMemoryAllocator@@QAEPAXPAXI@Z
    0x50EEC0 | private: void __thiscall asMemoryAllocator::Verify(void *) | ?Verify@asMemoryAllocator@@AAEXPAX@Z
    0x50EF80 | public: void __thiscall asMemoryAllocator::GetStats(struct asMemStats *) | ?GetStats@asMemoryAllocator@@QAEXPAUasMemStats@@@Z
    0x50F050 | public: void __thiscall asMemoryAllocator::SanityCheck(void) | ?SanityCheck@asMemoryAllocator@@QAEXXZ
    0x6E28B0 | class asMemoryAllocator ALLOCATOR | ?ALLOCATOR@@3VasMemoryAllocator@@A
    0x6E2950 | class asMemoryAllocator * CURHEAP | ?CURHEAP@@3PAVasMemoryAllocator@@A
    0x6E2958 | class asMemoryAllocator CRTALLOCATOR | ?CRTALLOCATOR@@3VasMemoryAllocator@@A
    0x6E29F8 | unsigned char * CRTHEAP | ?CRTHEAP@@3PAEA
    0x50F210 | int __cdecl HeapAssert(void *,int,char *,int) | ?HeapAssert@@YAHPAXHPADH@Z
*/

struct asMemStats
{
    uint32_t nTotalNodes {0};
    uint32_t nFreeNodes {0};
    uint32_t nUsedNodes {0};
    uint32_t cbOverhead {0};
    uint32_t cbFree {0};
    uint32_t cbUsed {0};
};

class asMemoryAllocator
{
private:
    struct Node;
    struct FreeNode;

    uint32_t m_Initialized {0};
    uint32_t m_Debug {0};
    uint8_t* m_pHeap {nullptr};
    uint32_t m_HeapSize {0};
    uint32_t m_HeapOffset {0};
    uint32_t m_LockCount {0};
    uint32_t m_UseNodes {0};
    FreeNode* m_Buckets[32] {};
    Node* m_Last {nullptr};

    // 0x50EDB0 | ?Unlink@asMemoryAllocator@@AAEXPAUnode@1@@Z
    void Unlink(FreeNode* n);

    // 0x50EE10 | ?Link@asMemoryAllocator@@AAEXPAUnode@1@@Z
    void Link(FreeNode* n);

    // 0x50EEC0 | ?Verify@asMemoryAllocator@@AAEXPAX@Z
    void Verify(void* ptr);

public:
    // 0x50E970 | ??0asMemoryAllocator@@QAE@XZ
    inline asMemoryAllocator() noexcept = default;

    // 0x50E980 | ??1asMemoryAllocator@@QAE@XZ
    inline ~asMemoryAllocator() noexcept = default;

    // 0x50E990 | ?Init@asMemoryAllocator@@QAEXPAXIH@Z
    void Init(void* heap_data, uint32_t heap_size, int32_t use_nodes);

    // 0x50E9D0 | ?Kill@asMemoryAllocator@@QAEXXZ
    void Kill();

    // 0x50E9E0 | ?Allocate@asMemoryAllocator@@QAEPAXI@Z
    void* Allocate(uint32_t size);

    // 0x50EC00 | ?CheckPointer@asMemoryAllocator@@QAEXPAX@Z
    void CheckPointer(void* ptr);

    // 0x50EC50 | ?Free@asMemoryAllocator@@QAEXPAX@Z
    void Free(void* ptr);

    // 0x50EE60 | ?Reallocate@asMemoryAllocator@@QAEPAXPAXI@Z
    void* Reallocate(void* ptr, uint32_t size);

    // 0x50EF80 | ?GetStats@asMemoryAllocator@@QAEXPAUasMemStats@@@Z
    void GetStats(asMemStats* stats);

    // 0x50F050 | ?SanityCheck@asMemoryAllocator@@QAEXXZ
    void SanityCheck();

    uint32_t GetSize(void* ptr);

    uint32_t GetCurrentTotal() const noexcept;
};

check_size(asMemoryAllocator, 0xA0);

// 0x6E28B0 | ?ALLOCATOR@@3VasMemoryAllocator@@A
inline extern_var(0x6E28B0, asMemoryAllocator, ALLOCATOR);

// 0x6E2950 | ?CURHEAP@@3PAVasMemoryAllocator@@A
inline extern_var(0x6E2950, asMemoryAllocator*, CURHEAP);

// 0x6E2958 | ?CRTALLOCATOR@@3VasMemoryAllocator@@A
inline extern_var(0x6E2958, asMemoryAllocator, CRTALLOCATOR);

// 0x6E29F8 | ?CRTHEAP@@3PAEA
inline extern_var(0x6E29F8, uint8_t[0x10000], CRTHEAP);