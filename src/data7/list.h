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
    data7:list

    0x55DBE0 | public: __thiscall List::~List(void) | ??1List@@QAE@XZ
    0x55DBF0 | public: void __thiscall List::Kill(void) | ?Kill@List@@QAEXXZ
    0x55DC10 | public: int __thiscall List::Insert(int,void *) | ?Insert@List@@QAEHHPAX@Z
    0x55DC90 | public: void * __thiscall List::Access(int) | ?Access@List@@QAEPAXH@Z
    0x55DCC0 | public: int __thiscall List::Delete(int) | ?Delete@List@@QAEHH@Z
*/

#include "hooking.h"

struct ListEntry
{
    void* m_pValue {nullptr};
    ListEntry* m_Next {nullptr};
};

struct List
{
public:
    uint32_t m_Size {0};
    ListEntry* m_First {nullptr};

    // 0x55DBE0 | ??1List@@QAE@XZ
    inline ~List()
    {
        stub<member_func_t<void, List>>(0x55DBE0, this);
    }

    // 0x55DBF0 | ?Kill@List@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, List>>(0x55DBF0, this);
    }

    // 0x55DC10 | ?Insert@List@@QAEHHPAX@Z
    inline int32_t Insert(int32_t arg1, void* arg2)
    {
        return stub<member_func_t<int32_t, List, int32_t, void*>>(0x55DC10, this, arg1, arg2);
    }

    // 0x55DC90 | ?Access@List@@QAEPAXH@Z
    inline void* Access(int32_t arg1)
    {
        return stub<member_func_t<void*, List, int32_t>>(0x55DC90, this, arg1);
    }

    // 0x55DCC0 | ?Delete@List@@QAEHH@Z
    inline int32_t Delete(int32_t arg1)
    {
        return stub<member_func_t<int32_t, List, int32_t>>(0x55DCC0, this, arg1);
    }
};

check_size(List, 8);
check_size(ListEntry, 8);
