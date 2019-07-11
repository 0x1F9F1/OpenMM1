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

// mmcityinfo:state

#include "hooking.h"

// 0x668390 | ?MMSTATE@@3UmmStatePack@@A
inline extern_var(0x668390, struct mmStatePack, MMSTATE);

// 0x668688 | ?CHEATING@@3HA
inline extern_var(0x668688, int32_t, CHEATING);

// 0x668690 | ?MMCURRPLAYER@@3VmmPlayerData@@A
inline extern_var(0x668690, class mmPlayerData, MMCURRPLAYER);

// 0x66A808 | ?CHICAGO@@3HA
inline extern_var(0x66A808, int32_t, CHICAGO);
