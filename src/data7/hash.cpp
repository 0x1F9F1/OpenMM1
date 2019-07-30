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

#include "hash.h"

#include <algorithm>

static inline constexpr bool IsPow2(uint32_t v) noexcept
{
    return (v & (v - 1)) == 0;
}

static inline constexpr uint32_t RoundPow2(uint32_t v) noexcept
{
    v--;
    v |= v >> 1;
    v |= v >> 2;
    v |= v >> 4;
    v |= v >> 8;
    v |= v >> 16;
    v++;

    return v;
}

static inline uint32_t StringLiteralHash(const char* key, uint32_t seed = 0) noexcept
{
    uint32_t hash = seed;

    for (char v; (v = *key++) != '\0';)
    {
        hash += static_cast<unsigned char>(v);
        hash += hash << 10;
        hash ^= hash >> 6;
    }

    hash += hash << 3;
    hash ^= hash >> 11;
    hash += hash << 15;

    return hash;
}

static inline uint32_t IntegerLiteralHash(uint32_t value) noexcept
{
    uint32_t h = value;

    h ^= h >> 16;
    h *= 0x85ebca6b;
    h ^= h >> 13;
    h *= 0xc2b2ae35;
    h ^= h >> 16;

    return h;
}

HashTable::HashTable()
{
    m_pNext = First;
    First = this;
}

HashTable::~HashTable()
{
    Kill();
    RemoveMe();
}

void HashTable::Init(int32_t capacity)
{
    Kill();

    m_nBucketCount = (capacity > 128) ? RoundPow2(capacity) : 128;
    m_nEntryCount = 0;
    m_pBuckets.Reset(new Entry*[m_nBucketCount]());
}

void HashTable::Kill()
{
    if (m_pBuckets)
    {
        for (int32_t i = 0; i < m_nBucketCount; ++i)
        {
            for (Entry *j = m_pBuckets[i], *next = nullptr; j; j = next)
            {
                next = j->m_pNext;

                delete j;
            }
        }

        m_pBuckets.Reset();
    }
}

void HashTable::operator=(HashTable& other)
{
    Init(other.m_nBucketCount - 1);

    for (int32_t i = 0; i < other.m_nBucketCount; ++i)
    {
        for (Entry* j = other.m_pBuckets[i]; j; j = j->m_pNext)
        {
            Insert(j->m_Key, j->m_Value);
        }
    }
}

int32_t HashTable::Insert(const char* key, void* value)
{
    if (!m_pBuckets && m_nBucketCount)
    {
        Init(m_nBucketCount);
    }

    uint32_t bucket = Hash(key);

    for (Entry* i = m_pBuckets[bucket]; i; i = i->m_pNext)
    {
        if (!strcmp(i->m_Key, key))
        {
            return 0;
        }
    }

    m_pBuckets[bucket] = new Entry {key, value, m_pBuckets[bucket]};

    ++m_nEntryCount;

    if (m_nEntryCount > m_nBucketCount)
    {
        Recompute(m_nBucketCount * 2);
    }

    return 1;
}

int32_t HashTable::Delete(const char* key)
{
    if (m_pBuckets)
    {
        uint32_t bucket = Hash(key);

        for (Entry** i = &m_pBuckets[bucket]; *i; i = &(*i)->m_pNext)
        {
            if (!strcmp((*i)->m_Key, key))
            {
                Entry* j = *i;
                *i = j->m_pNext;

                delete j;

                --m_nEntryCount;

                return 1;
            }
        }
    }

    return 0;
}

int32_t HashTable::Change(const char* old_key, const char* new_key)
{
    void* value = Access(old_key);

    if (Delete(old_key))
    {
        return Insert(new_key, value);
    }

    return 0;
}

void* HashTable::Access(const char* key)
{
    if (!m_pBuckets && m_nBucketCount)
    {
        Init(m_nBucketCount);
    }

    uint32_t bucket = Hash(key);

    for (Entry* i = m_pBuckets[bucket]; i; i = i->m_pNext)
    {
        if (!strcmp(i->m_Key, key))
        {
            return i->m_Value;
        }
    }

    return nullptr;
}

uint32_t HashTable::Hash(const char* value)
{
    DebugAssert(IsPow2(m_nBucketCount));

    uint32_t hash = StringLiteralHash(value);

    hash = IntegerLiteralHash(hash);

    return hash & (m_nBucketCount - 1);
}

int32_t HashTable::ComputePrime(int32_t value)
{
    return RoundPow2(value);
}

void HashTable::Recompute(int32_t capacity)
{
    DebugAssert(IsPow2(capacity));

    int32_t old_bucket_count = m_nBucketCount;

    Ptr<Entry*[]> buckets(new Entry*[capacity]());

    m_pBuckets.Swap(buckets);
    m_nBucketCount = capacity;

    for (int32_t i = 0; i < old_bucket_count; ++i)
    {
        for (Entry *j = buckets[i], *next = nullptr; j; j = next)
        {
            next = j->m_pNext;

            uint32_t bucket = Hash(j->m_Key);

            j->m_pNext = m_pBuckets[bucket];
            m_pBuckets[bucket] = j;
        }
    }
}

void HashTable::KillAll()
{
    for (HashTable* i = First; i; i = i->m_pNext)
    {
        i->Kill();
    }
}

void HashTable::RemoveMe()
{
    HashTable** i = &First;

    while (*i != this)
        i = &(*i)->m_pNext;

    *i = (*i)->m_pNext;
}

void HashIterator::Begin()
{
    m_pEntry = nullptr;
    m_Index = -1;
}

int32_t HashIterator::Next()
{
    HashTable* table = m_pTable;

    if (!m_pTable->m_pBuckets)
    {
        return 0;
    }

    if (m_pEntry)
    {
        m_pEntry = m_pEntry->m_pNext;

        if (m_pEntry)
        {
            return 1;
        }
    }

    while (++m_Index != table->m_nBucketCount)
    {
        m_pEntry = table->m_pBuckets[m_Index];

        if (m_pEntry)
        {
            return 1;
        }
    }

    return 0;
}

define_dummy_symbol(hashtable);

run_once([] {
    auto_hook_dtor(0x48BC70, HashTable);
    auto_hook(0x559A00, HashTable::Init);
    auto_hook(0x559A70, HashTable::Kill);
    auto_hook(0x559AE0, HashTable::operator=);
    auto_hook(0x559B30, HashTable::Insert);
    auto_hook(0x559C10, HashTable::Delete);
    auto_hook(0x559D50, HashTable::Change);
    auto_hook(0x559D90, HashTable::Access);
    auto_hook(0x559E20, HashTable::Hash);
    auto_hook(0x559E60, HashTable::ComputePrime);
    auto_hook(0x559EB0, HashTable::Recompute);
    auto_hook(0x559F70, HashTable::KillAll);
    auto_hook(0x559F90, HashTable::RemoveMe);

    auto_hook(0x5599A0, HashIterator::Begin);
    auto_hook(0x5599B0, HashIterator::Next);
});
