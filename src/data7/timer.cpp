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

#include "timer.h"

#include "minwin.h"
#include <timeapi.h>

static int32_t TimerMode {0}; // 0x711AB4

float Timer::TicksToSeconds {0.0f};

uint32_t Timer::Ticks()
{
    if (TimerMode == 1)
    {
        return timeGetTime();
    }
    else
    {
        LARGE_INTEGER perf;
        QueryPerformanceCounter(&perf);
        return perf.LowPart;
    }
}

void Timer::Sleep(int32_t ms)
{
    ::Sleep(static_cast<uint32_t>(ms));
}

Timer::Timer()
{
    if (TicksToSeconds == 0.0)
    {
        LARGE_INTEGER freq;
        if (QueryPerformanceFrequency(&freq))
        {
            TimerMode = 2;
            TicksToSeconds = 1.0f / freq.QuadPart;
        }
        else
        {
            TimerMode = 1;
            TicksToSeconds = 0.001f;
        }

        Reset();
    }
}

void Timer::Reset()
{
    m_Start = Ticks();
}

float Timer::Time()
{
    return (Ticks() - m_Start) * TicksToSeconds;
}

static uint32_t OldProcessPriority {0};
static uint32_t OldThreadPriority {0};

void Timer::BeginBenchmark()
{
    OldProcessPriority = GetPriorityClass(GetCurrentProcess());
    OldThreadPriority = GetThreadPriority(GetCurrentThread());

    if (!SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS))
    {
        Errorf("SetPriorityClass failed.");
    }

    if (!SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_TIME_CRITICAL))
    {
        Errorf("SetThreadPriority failed.");
    }
}

void Timer::EndBenchmark()
{
    SetPriorityClass(GetCurrentProcess(), OldProcessPriority);
    SetThreadPriority(GetCurrentThread(), OldThreadPriority);
}

define_dummy_symbol(timer);

run_once([] {
    auto_hook(0x5581D0, Timer::Ticks);
    auto_hook(0x558200, Timer::Sleep);
    auto_hook_ctor(0x558210, Timer);
    auto_hook(0x558280, Timer::Reset);
    auto_hook(0x558290, Timer::Time);
    auto_hook(0x5582C0, Timer::BeginBenchmark);
    auto_hook(0x558330, Timer::EndBenchmark);
});
