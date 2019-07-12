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
    memory:valloc

    0x50F350 | public: __thiscall asSafeHeap::asSafeHeap(void) | ??0asSafeHeap@@QAE@XZ
    0x50F360 | public: __thiscall asSafeHeap::~asSafeHeap(void) | ??1asSafeHeap@@QAE@XZ
    0x50F370 | public: void __thiscall asSafeHeap::Init(int,int) | ?Init@asSafeHeap@@QAEXHH@Z
    0x50F3E0 | public: void __thiscall asSafeHeap::Restart(void) | ?Restart@asSafeHeap@@QAEXXZ
    0x50F410 | public: void __thiscall asSafeHeap::Kill(void) | ?Kill@asSafeHeap@@QAEXXZ
    0x50F440 | protected: void __thiscall asSafeHeap::Activate(void) | ?Activate@asSafeHeap@@IAEXXZ
    0x50F480 | protected: void __thiscall asSafeHeap::Deactivate(void) | ?Deactivate@asSafeHeap@@IAEXXZ
    0x6F29F8 | class asSafeHeap SAFEHEAP | ?SAFEHEAP@@3VasSafeHeap@@A
*/

#include "hooking.h"

// 0x6F29F8 | ?SAFEHEAP@@3VasSafeHeap@@A
inline extern_var(0x6F29F8, class asSafeHeap, SAFEHEAP);

class asSafeHeap
{
public:
    void* m_pCurrentHeap {nullptr};
    void* m_pHeap {nullptr};
    uint32_t m_HeapIndex {0};
    uint32_t m_HeapSize {0};
    uint32_t m_MultiHeap {0};

    // 0x50F350 | ??0asSafeHeap@@QAE@XZ
    inline asSafeHeap()
    {
        // stub<member_func_t<void, asSafeHeap>>(0x50F350, this);

        unimplemented();
    }

    // 0x50F360 | ??1asSafeHeap@@QAE@XZ
    inline ~asSafeHeap()
    {
        stub<member_func_t<void, asSafeHeap>>(0x50F360, this);
    }

    // 0x50F370 | ?Init@asSafeHeap@@QAEXHH@Z
    inline void Init(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, asSafeHeap, int32_t, int32_t>>(0x50F370, this, arg1, arg2);
    }

    // 0x50F3E0 | ?Restart@asSafeHeap@@QAEXXZ
    inline void Restart()
    {
        return stub<member_func_t<void, asSafeHeap>>(0x50F3E0, this);
    }

    // 0x50F410 | ?Kill@asSafeHeap@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, asSafeHeap>>(0x50F410, this);
    }

    // 0x50F440 | ?Activate@asSafeHeap@@IAEXXZ
    inline void Activate()
    {
        return stub<member_func_t<void, asSafeHeap>>(0x50F440, this);
    }

    // 0x50F480 | ?Deactivate@asSafeHeap@@IAEXXZ
    inline void Deactivate()
    {
        return stub<member_func_t<void, asSafeHeap>>(0x50F480, this);
    }
};

check_size(asSafeHeap, 0x14);
