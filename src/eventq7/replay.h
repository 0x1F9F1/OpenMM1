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
    eventq7:replay

    0x5461A0 | protected: __thiscall eqReplayChannel::eqReplayChannel(unsigned long) | ??0eqReplayChannel@@IAE@K@Z
    0x5461D0 | public: __thiscall eqReplayChannel::~eqReplayChannel(void) | ??1eqReplayChannel@@QAE@XZ
    0x546200 | public: virtual void __thiscall eqReplayChannel::InitRecord(void) | ?InitRecord@eqReplayChannel@@UAEXXZ
    0x546210 | public: virtual void __thiscall eqReplayChannel::InitPlayback(void) | ?InitPlayback@eqReplayChannel@@UAEXXZ
    0x546220 | public: virtual void __thiscall eqReplayChannel::ShutdownRecord(void) | ?ShutdownRecord@eqReplayChannel@@UAEXXZ
    0x546230 | public: virtual void __thiscall eqReplayChannel::ShutdownPlayback(void) | ?ShutdownPlayback@eqReplayChannel@@UAEXXZ
    0x546240 | public: static void __cdecl eqReplay::InitRecord(char *) | ?InitRecord@eqReplay@@SAXPAD@Z
    0x5462D0 | public: static void __cdecl eqReplay::InitPlayback(char *) | ?InitPlayback@eqReplay@@SAXPAD@Z
    0x546380 | public: static void __cdecl eqReplay::ShutdownRecord(void) | ?ShutdownRecord@eqReplay@@SAXXZ
    0x5463E0 | public: static void __cdecl eqReplay::ShutdownPlayback(void) | ?ShutdownPlayback@eqReplay@@SAXXZ
    0x546440 | public: static void __cdecl eqReplay::DoRecord(void) | ?DoRecord@eqReplay@@SAXXZ
    0x5464A0 | public: static void __cdecl eqReplay::DoPlayback(void) | ?DoPlayback@eqReplay@@SAXXZ
    0x596050 | const eqReplayChannel::`vftable' | ??_7eqReplayChannel@@6B@
    0x710878 | private: static class eqReplayChannel * eqReplayChannel::First | ?First@eqReplayChannel@@0PAV1@A
    0x71087C | private: static class Stream * eqReplay::ReplayStream | ?ReplayStream@eqReplay@@0PAVStream@@A
    0x710880 | public: static int eqReplay::Playback | ?Playback@eqReplay@@2HA
    0x710884 | public: static int eqReplay::Recording | ?Recording@eqReplay@@2HA
*/

class Stream;

class eqReplayChannel
{
public:
    uint32_t m_Magic {0};
    eqReplayChannel* m_Next {nullptr};

    // eqReplayChannel::`vftable' @ 0x596050

    // 0x5461A0 | ??0eqReplayChannel@@IAE@K@Z
    eqReplayChannel(uint32_t magic);

    // 0x5461D0 | ??1eqReplayChannel@@QAE@XZ
    ~eqReplayChannel();

    // 0x710878 | ?First@eqReplayChannel@@0PAV1@A
    static inline extern_var(0x710878, eqReplayChannel*, First);

    // 0x546200 | ?InitRecord@eqReplayChannel@@UAEXXZ
    virtual void InitRecord();

    // 0x546210 | ?InitPlayback@eqReplayChannel@@UAEXXZ
    virtual void InitPlayback();

    // 0x567350 | __purecall
    virtual void DoRecord(Stream* output) = 0;

    // 0x567350 | __purecall
    virtual void DoPlayback(Stream* input) = 0;

    // 0x546220 | ?ShutdownRecord@eqReplayChannel@@UAEXXZ
    virtual void ShutdownRecord();

    // 0x546230 | ?ShutdownPlayback@eqReplayChannel@@UAEXXZ
    virtual void ShutdownPlayback();
};

check_size(eqReplayChannel, 0xC);