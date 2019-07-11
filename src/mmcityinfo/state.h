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
    mmcityinfo:state

    0x4C0040 | public: virtual __thiscall mmPlayerData::~mmPlayerData(void) | ??1mmPlayerData@@UAE@XZ
    0x4C00E0 | public: virtual void * __thiscall mmPlayerData::`scalar deleting destructor'(unsigned int) | ??_GmmPlayerData@@UAEPAXI@Z
    0x5943F0 | const mmPlayerData::`vftable' | ??_7mmPlayerData@@6B@
    0x668390 | struct mmStatePack MMSTATE | ?MMSTATE@@3UmmStatePack@@A
    0x668688 | int CHEATING | ?CHEATING@@3HA
    0x668690 | class mmPlayerData MMCURRPLAYER | ?MMCURRPLAYER@@3VmmPlayerData@@A
    0x66A808 | int CHICAGO | ?CHICAGO@@3HA
*/

#include "hooking.h"

// 0x668390 | ?MMSTATE@@3UmmStatePack@@A
inline extern_var(0x668390, struct mmStatePack, MMSTATE);

// 0x668688 | ?CHEATING@@3HA
inline extern_var(0x668688, int32_t, CHEATING);

// 0x668690 | ?MMCURRPLAYER@@3VmmPlayerData@@A
inline extern_var(0x668690, class mmPlayerData, MMCURRPLAYER);

// 0x66A808 | ?CHICAGO@@3HA
inline extern_var(0x66A808, int32_t, CHICAGO);
