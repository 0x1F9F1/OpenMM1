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

    if (capacity < 100)
        capacity = 100;

    m_BucketCount = ComputePrime(capacity);
    m_EntryCount = 0;

    delete[] m_pBuckets;

    m_pBuckets = new Entry*[m_BucketCount];
    std::fill(m_pBuckets, m_pBuckets + m_BucketCount, nullptr);
}

void HashTable::Kill()
{
    if (m_pBuckets)
    {
        for (int32_t i = 0; i < m_BucketCount; ++i)
        {
            for (Entry *j = m_pBuckets[i], *next = nullptr; j; j = next)
            {
                next = j->m_pNext;
                delete j;
            }
        }

        delete[] m_pBuckets;
        m_pBuckets = 0;
    }
}

void HashTable::operator=(HashTable& other)
{
    Init(other.m_BucketCount - 1);

    for (int32_t i = 0; i < other.m_BucketCount; ++i)
    {
        for (Entry* j = other.m_pBuckets[i]; j; j = j->m_pNext)
        {
            Insert(j->m_Name, j->m_pData);
        }
    }
}

uint32_t HashTable::Hash(const char* value)
{
    uint32_t hash = 0;

    while (char c = *value++)
    {
        hash = c + 16 * hash;

        if (hash & 0xF0000000)
        {
            hash ^= hash & 0xF0000000 ^ ((hash & 0xF0000000) >> 24);
        }
    }

    return hash % m_BucketCount;
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
