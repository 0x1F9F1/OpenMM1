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

struct ListEntry
{
    void* m_pValue {nullptr};
    ListEntry* m_Next {nullptr};
};

struct List
{
public:
    int32_t m_Size {0};
    ListEntry* m_First {nullptr};

    // 0x55DBE0 | ??1List@@QAE@XZ
    ~List();

    // 0x55DBF0 | ?Kill@List@@QAEXXZ
    void Kill();

    // 0x55DC10 | ?Insert@List@@QAEHHPAX@Z
    int32_t Insert(int32_t index, void* value);

    // 0x55DC90 | ?Access@List@@QAEPAXH@Z
    void* Access(int32_t index);

    // 0x55DCC0 | ?Delete@List@@QAEHH@Z
    int32_t Delete(int32_t index);
};

check_size(List, 8);
check_size(ListEntry, 8);
