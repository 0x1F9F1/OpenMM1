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

// eventq7:replay

#include "hooking.h"

class eqReplayChannel
{
public:
    // eqReplayChannel::`vftable' @ 0x596050

    // 0x5461A0 | ??0eqReplayChannel@@IAE@K@Z
    inline eqReplayChannel(uint32_t arg1)
    {
        stub<member_func_t<void, eqReplayChannel, uint32_t>>(0x5461A0, this, arg1);
    }

    // 0x5461D0 | ??1eqReplayChannel@@QAE@XZ
    inline ~eqReplayChannel()
    {
        stub<member_func_t<void, eqReplayChannel>>(0x5461D0, this);
    }

    // 0x710878 | ?First@eqReplayChannel@@0PAV1@A
    static inline extern_var(0x710878, class eqReplayChannel*, First);

    // 0x546200 | ?InitRecord@eqReplayChannel@@UAEXXZ
    virtual inline void InitRecord()
    {
        return stub<member_func_t<void, eqReplayChannel>>(0x546200, this);
    }

    // 0x546210 | ?InitPlayback@eqReplayChannel@@UAEXXZ
    virtual inline void InitPlayback()
    {
        return stub<member_func_t<void, eqReplayChannel>>(0x546210, this);
    }

    // 0x567350 | __purecall
    virtual inline void DoRecord(class Stream* arg1)
    {
        return stub<member_func_t<void, eqReplayChannel, class Stream*>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline void DoPlayback(class Stream* arg1)
    {
        return stub<member_func_t<void, eqReplayChannel, class Stream*>>(0x567350, this, arg1);
    }

    // 0x546220 | ?ShutdownRecord@eqReplayChannel@@UAEXXZ
    virtual inline void ShutdownRecord()
    {
        return stub<member_func_t<void, eqReplayChannel>>(0x546220, this);
    }

    // 0x546230 | ?ShutdownPlayback@eqReplayChannel@@UAEXXZ
    virtual inline void ShutdownPlayback()
    {
        return stub<member_func_t<void, eqReplayChannel>>(0x546230, this);
    }
};

// 0x546240 | ?InitRecord@eqReplay@@SAXPAD@Z
static inline void InitRecord(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x546240, arg1);
}

// 0x5462D0 | ?InitPlayback@eqReplay@@SAXPAD@Z
static inline void InitPlayback(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x5462D0, arg1);
}

// 0x546380 | ?ShutdownRecord@eqReplay@@SAXXZ
static inline void ShutdownRecord()
{
    return stub<cdecl_t<void>>(0x546380);
}

// 0x5463E0 | ?ShutdownPlayback@eqReplay@@SAXXZ
static inline void ShutdownPlayback()
{
    return stub<cdecl_t<void>>(0x5463E0);
}

// 0x546440 | ?DoRecord@eqReplay@@SAXXZ
static inline void DoRecord()
{
    return stub<cdecl_t<void>>(0x546440);
}

// 0x5464A0 | ?DoPlayback@eqReplay@@SAXXZ
static inline void DoPlayback()
{
    return stub<cdecl_t<void>>(0x5464A0);
}

// 0x71087C | ?ReplayStream@eqReplay@@0PAVStream@@A
static inline extern_var(0x71087C, class Stream*, ReplayStream);

// 0x710880 | ?Playback@eqReplay@@2HA
static inline extern_var(0x710880, int32_t, Playback);

// 0x710884 | ?Recording@eqReplay@@2HA
static inline extern_var(0x710884, int32_t, Recording);
