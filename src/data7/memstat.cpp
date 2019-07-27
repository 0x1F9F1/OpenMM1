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

#include "memstat.h"
#include "memory/allocator.h"

static constexpr const size_t MAX_CHECK = 16;

static int32_t MemStatValues[MAX_CHECK];
static const char* MemStatNames[MAX_CHECK];
static uint32_t MemStatCount = 0;

static int32_t getMem()
{
    return ALLOCATOR.GetCurrentTotal();
}

void BeginMemStat(char const* name)
{
    if (EnableMemStat)
    {
        Assert(MemStatCount < MAX_CHECK);

        MemStatValues[MemStatCount] = getMem();
        MemStatNames[MemStatCount] = name;

        MemStatCount++;
    }
}

void EndMemStat()
{
    if (EnableMemStat)
    {
        Assert(MemStatCount);

        --MemStatCount;

        int32_t prev = MemStatValues[MemStatCount];
        int32_t current = getMem();

        Warningf("%*sMemStat: '%s' %dK before, %dK after, %dK difference", MemStatCount, "", MemStatNames[MemStatCount],
            prev >> 10, current >> 10, (current - prev) >> 10);
    }
}

define_dummy_symbol(memstat);

run_once([] {
    auto_hook(0x55A480, BeginMemStat);
    auto_hook(0x55A510, EndMemStat);
});