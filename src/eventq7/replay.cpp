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

#include "replay.h"

#include "stream/stream.h"

eqReplayChannel::eqReplayChannel(uint32_t magic)
    : m_Magic(magic)
{
    m_Next = First;
    First = this;
}

eqReplayChannel::~eqReplayChannel()
{
    if (this != First)
    {
        Errorf("eqReplayChannel destructed, not top of stack!");
    }

    First = m_Next;
}

void eqReplayChannel::InitRecord()
{}

void eqReplayChannel::InitPlayback()
{}

void eqReplayChannel::ShutdownRecord()
{}

void eqReplayChannel::ShutdownPlayback()
{}

void eqReplay::ShutdownRecord()
{
    Assert(Recording);

    delete ReplayStream;

    Recording = 0;

    for (eqReplayChannel* i = eqReplayChannel::First; i; i = i->m_Next)
    {
        i->ShutdownRecord();
    }
}
