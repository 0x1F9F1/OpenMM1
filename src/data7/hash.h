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
    data7:hash

    0x5599A0 | public: void __thiscall HashIterator::Begin(void) | ?Begin@HashIterator@@QAEXXZ
    0x5599B0 | public: int __thiscall HashIterator::Next(void) | ?Next@HashIterator@@QAEHXZ
    0x559A00 | public: void __thiscall HashTable::Init(int) | ?Init@HashTable@@QAEXH@Z
    0x559A70 | public: void __thiscall HashTable::Kill(void) | ?Kill@HashTable@@QAEXXZ
    0x559AE0 | public: void __thiscall HashTable::operator=(class HashTable &) | ??4HashTable@@QAEXAAV0@@Z
    0x559B30 | public: int __thiscall HashTable::Insert(char *,void *) | ?Insert@HashTable@@QAEHPADPAX@Z
    0x559C10 | public: int __thiscall HashTable::Delete(char *) | ?Delete@HashTable@@QAEHPAD@Z
    0x559D50 | public: int __thiscall HashTable::Change(char *,char *) | ?Change@HashTable@@QAEHPAD0@Z
    0x559D90 | public: void * __thiscall HashTable::Access(char *) | ?Access@HashTable@@QAEPAXPAD@Z
    0x559E20 | private: int __thiscall HashTable::Hash(char *) | ?Hash@HashTable@@AAEHPAD@Z
    0x559E60 | private: int __thiscall HashTable::ComputePrime(int) | ?ComputePrime@HashTable@@AAEHH@Z
    0x559EB0 | private: void __thiscall HashTable::Recompute(int) | ?Recompute@HashTable@@AAEXH@Z
    0x559F70 | public: static void __cdecl HashTable::KillAll(void) | ?KillAll@HashTable@@SAXXZ
    0x559F90 | private: void __thiscall HashTable::RemoveMe(void) | ?RemoveMe@HashTable@@AAEXXZ
    0x711F74 | private: static class HashTable * HashTable::First | ?First@HashTable@@0PAV1@A
*/

#include "cstr.h"

class HashTable
{
public:
    struct Entry
    {
        cstring_t m_Name;
        void* m_pData {nullptr};
        Entry* m_pNext {nullptr};
    };

    check_size(Entry, 12);

    int32_t m_BucketCount {0};
    int32_t m_EntryCount {0};
    Entry** m_pBuckets {nullptr};
    HashTable* m_pNext {nullptr};

    HashTable();

    // 0x48BC70 | ??1HashTable@@QAE@XZ
    ~HashTable();

    // 0x559A00 | ?Init@HashTable@@QAEXH@Z
    void Init(int32_t capacity);

    // 0x559A70 | ?Kill@HashTable@@QAEXXZ
    void Kill();

    // 0x559AE0 | ??4HashTable@@QAEXAAV0@@Z
    void operator=(class HashTable& other);

    // 0x559B30 | ?Insert@HashTable@@QAEHPADPAX@Z
    inline int32_t Insert(const char* arg1, void* arg2)
    {
        return stub<member_func_t<int32_t, HashTable, const char*, void*>>(0x559B30, this, arg1, arg2);
    }

    // 0x559C10 | ?Delete@HashTable@@QAEHPAD@Z
    inline int32_t Delete(char* arg1)
    {
        return stub<member_func_t<int32_t, HashTable, char*>>(0x559C10, this, arg1);
    }

    // 0x559D50 | ?Change@HashTable@@QAEHPAD0@Z
    inline int32_t Change(char* arg1, char* arg2)
    {
        return stub<member_func_t<int32_t, HashTable, char*, char*>>(0x559D50, this, arg1, arg2);
    }

    // 0x559D90 | ?Access@HashTable@@QAEPAXPAD@Z
    inline void* Access(char* arg1)
    {
        return stub<member_func_t<void*, HashTable, char*>>(0x559D90, this, arg1);
    }

    // 0x559E20 | ?Hash@HashTable@@AAEHPAD@Z
    uint32_t Hash(const char* value);

    // 0x559E60 | ?ComputePrime@HashTable@@AAEHH@Z
    inline int32_t ComputePrime(int32_t arg1)
    {
        return stub<member_func_t<int32_t, HashTable, int32_t>>(0x559E60, this, arg1);
    }

    // 0x559EB0 | ?Recompute@HashTable@@AAEXH@Z
    inline void Recompute(int32_t arg1)
    {
        return stub<member_func_t<void, HashTable, int32_t>>(0x559EB0, this, arg1);
    }

    // 0x559F70 | ?KillAll@HashTable@@SAXXZ
    static void KillAll();

    // 0x559F90 | ?RemoveMe@HashTable@@AAEXXZ
    void RemoveMe();

    // 0x711F74 | ?First@HashTable@@0PAV1@A
    static inline extern_var(0x711F74, class HashTable*, First);
};

check_size(HashTable, 16);

struct HashIterator
{
public:
    HashTable* m_pTable {nullptr};
    int32_t m_Index {0};
    HashTable::Entry* m_pEntry {nullptr};

    // 0x5599A0 | ?Begin@HashIterator@@QAEXXZ
    inline void Begin()
    {
        return stub<member_func_t<void, HashIterator>>(0x5599A0, this);
    }

    // 0x5599B0 | ?Next@HashIterator@@QAEHXZ
    inline int32_t Next()
    {
        return stub<member_func_t<int32_t, HashIterator>>(0x5599B0, this);
    }
};

check_size(HashIterator, 12);
