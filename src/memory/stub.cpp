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

#include "stub.h"
#include "allocator.h"

#pragma warning(disable : 28251)

// 0x50F560 | ??2@YAPAXI@Z
__declspec(noinline) void* operator new(size_t size)
{
    return CURHEAP->Allocate(size);
}

__declspec(noinline) void* operator new[](size_t size)
{
    return CURHEAP->Allocate(size);
}

// 0x50F580 | ??3@YAXPAX@Z
__declspec(noinline) void operator delete(void* ptr) noexcept
{
    CURHEAP->Free(ptr);
}

__declspec(noinline) void operator delete[](void* ptr) noexcept
{
    CURHEAP->Free(ptr);
}

__declspec(noinline) void operator delete(void* ptr, [[maybe_unused]] size_t sz) noexcept
{
    DebugAssert(CURHEAP->GetSize(ptr) == sz);

    CURHEAP->Free(ptr);
}

__declspec(noinline) void operator delete[](void* ptr, [[maybe_unused]] size_t sz) noexcept
{
    DebugAssert(CURHEAP->GetSize(ptr) == sz);

    CURHEAP->Free(ptr);
}