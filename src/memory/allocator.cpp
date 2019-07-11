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
            uint32_t uSourceAddress;
            uint32_t uLowerGuard;
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

    inline node* GetPrev()
    {
        return reinterpret_cast<node*>(uStatus & 0xFFFFFFF8);
    }

    inline uint32_t GetRawSize()
    {
        return (nSize + 7) & 0xFFFFFFF8;
    }

    inline node* GetNext()
    {
        return reinterpret_cast<node*>(Data + GetRawSize());
    }

    // Only valid while not in use
    inline node* GetPrevFree()
    {
        return free.pPrev;
    }

    // Only valid while not in use
    inline node* GetNextFree()
    {
        return free.pNext;
    }

    inline bool IsAllocated()
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
    inline bool IsPendingSanity()
    {
        return (uStatus & 0x4) == 0x4;
    }

    // Only valid for debug allocators
    inline uint32_t GetAllocSource()
    {
        return debug.uSourceAddress;
    }

    // Only valid for debug allocators
    inline uint32_t GetLowerGuard()
    {
        return debug.uLowerGuard;
    }

    // Only valid for debug allocators
    inline uint32_t GetUpperGuard()
    {
        return reinterpret_cast<uint32_t*>(GetNext())[-1];
    }
};

static inline asMemoryAllocator::node* GetNode(void* ptr) noexcept
{
    return reinterpret_cast<asMemoryAllocator::node*>(static_cast<uint8_t*>(ptr) - 8);
}