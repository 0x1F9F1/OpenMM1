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
    data7:timer

    0x5581D0 | public: static unsigned long __cdecl Timer::Ticks(void) | ?Ticks@Timer@@SAKXZ
    0x558200 | public: static void __cdecl Timer::Sleep(int) | ?Sleep@Timer@@SAXH@Z
    0x558210 | public: __thiscall Timer::Timer(void) | ??0Timer@@QAE@XZ
    0x558280 | public: void __thiscall Timer::Reset(void) | ?Reset@Timer@@QAEXXZ
    0x558290 | public: float __thiscall Timer::Time(void) | ?Time@Timer@@QAEMXZ
    0x5582C0 | public: static void __cdecl Timer::BeginBenchmark(void) | ?BeginBenchmark@Timer@@SAXXZ
    0x558330 | public: static void __cdecl Timer::EndBenchmark(void) | ?EndBenchmark@Timer@@SAXXZ
    0x711AAC | public: static float Timer::TicksToSeconds | ?TicksToSeconds@Timer@@2MA
*/

class Timer
{
public:
    uint32_t m_Start {0};

    // 0x5581D0 | ?Ticks@Timer@@SAKXZ
    static uint32_t Ticks();

    // 0x558200 | ?Sleep@Timer@@SAXH@Z
    static void Sleep(int32_t ms);

    // 0x558210 | ??0Timer@@QAE@XZ
    Timer();

    // 0x558280 | ?Reset@Timer@@QAEXXZ
    void Reset();

    // 0x558290 | ?Time@Timer@@QAEMXZ
    float Time();

    // 0x5582C0 | ?BeginBenchmark@Timer@@SAXXZ
    static void BeginBenchmark();

    // 0x558330 | ?EndBenchmark@Timer@@SAXXZ
    static void EndBenchmark();

    // 0x711AAC | ?TicksToSeconds@Timer@@2MA
    static float TicksToSeconds;
};

check_size(Timer, 4);
