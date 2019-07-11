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

// memory:allocator

#include "hooking.h"

// 0x6E28B0 | ?ALLOCATOR@@3VasMemoryAllocator@@A
inline extern_var(0x6E28B0, class asMemoryAllocator, ALLOCATOR);

// 0x6E2950 | ?CURHEAP@@3PAVasMemoryAllocator@@A
inline extern_var(0x6E2950, class asMemoryAllocator*, CURHEAP);

// 0x6E2958 | ?CRTALLOCATOR@@3VasMemoryAllocator@@A
inline extern_var(0x6E2958, class asMemoryAllocator, CRTALLOCATOR);

// 0x6E29F8 | ?CRTHEAP@@3PAEA
inline extern_var(0x6E29F8, uint8_t*, CRTHEAP);

// 0x50F210 | ?HeapAssert@@YAHPAXHPADH@Z
inline int32_t HeapAssert(void* arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    return stub<cdecl_t<int32_t, void*, int32_t, char*, int32_t>>(0x50F210, arg1, arg2, arg3, arg4);
}

class asMemoryAllocator
{
public:
    // 0x50E970 | ??0asMemoryAllocator@@QAE@XZ
    inline asMemoryAllocator()
    {
        stub<member_func_t<void, asMemoryAllocator>>(0x50E970, this);
    }

    // 0x50E980 | ??1asMemoryAllocator@@QAE@XZ
    inline ~asMemoryAllocator()
    {
        stub<member_func_t<void, asMemoryAllocator>>(0x50E980, this);
    }

    // 0x50E990 | ?Init@asMemoryAllocator@@QAEXPAXIH@Z
    inline void Init(void* arg1, uint32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, asMemoryAllocator, void*, uint32_t, int32_t>>(0x50E990, this, arg1, arg2, arg3);
    }

    // 0x50E9D0 | ?Kill@asMemoryAllocator@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, asMemoryAllocator>>(0x50E9D0, this);
    }

    // 0x50E9E0 | ?Allocate@asMemoryAllocator@@QAEPAXI@Z
    inline void* Allocate(uint32_t arg1)
    {
        return stub<member_func_t<void*, asMemoryAllocator, uint32_t>>(0x50E9E0, this, arg1);
    }

    // 0x50EC00 | ?CheckPointer@asMemoryAllocator@@QAEXPAX@Z
    inline void CheckPointer(void* arg1)
    {
        return stub<member_func_t<void, asMemoryAllocator, void*>>(0x50EC00, this, arg1);
    }

    // 0x50EC50 | ?Free@asMemoryAllocator@@QAEXPAX@Z
    inline void Free(void* arg1)
    {
        return stub<member_func_t<void, asMemoryAllocator, void*>>(0x50EC50, this, arg1);
    }

    // 0x50EDB0 | ?Unlink@asMemoryAllocator@@AAEXPAUnode@1@@Z
    inline void Unlink(struct asMemoryAllocator::node* arg1)
    {
        return stub<member_func_t<void, asMemoryAllocator, struct asMemoryAllocator::node*>>(0x50EDB0, this, arg1);
    }

    // 0x50EE10 | ?Link@asMemoryAllocator@@AAEXPAUnode@1@@Z
    inline void Link(struct asMemoryAllocator::node* arg1)
    {
        return stub<member_func_t<void, asMemoryAllocator, struct asMemoryAllocator::node*>>(0x50EE10, this, arg1);
    }

    // 0x50EE60 | ?Reallocate@asMemoryAllocator@@QAEPAXPAXI@Z
    inline void* Reallocate(void* arg1, uint32_t arg2)
    {
        return stub<member_func_t<void*, asMemoryAllocator, void*, uint32_t>>(0x50EE60, this, arg1, arg2);
    }

    // 0x50EEC0 | ?Verify@asMemoryAllocator@@AAEXPAX@Z
    inline void Verify(void* arg1)
    {
        return stub<member_func_t<void, asMemoryAllocator, void*>>(0x50EEC0, this, arg1);
    }

    // 0x50EF80 | ?GetStats@asMemoryAllocator@@QAEXPAUasMemStats@@@Z
    inline void GetStats(struct asMemStats* arg1)
    {
        return stub<member_func_t<void, asMemoryAllocator, struct asMemStats*>>(0x50EF80, this, arg1);
    }

    // 0x50F050 | ?SanityCheck@asMemoryAllocator@@QAEXXZ
    inline void SanityCheck()
    {
        return stub<member_func_t<void, asMemoryAllocator>>(0x50F050, this);
    }
};
