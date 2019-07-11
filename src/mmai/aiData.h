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
    mmai:aiData

    0x440A70 | public: __thiscall aiRaceData::aiRaceData(char *,char *) | ??0aiRaceData@@QAE@PAD0@Z
    0x440F50 | public: __thiscall aiRaceData::~aiRaceData(void) | ??1aiRaceData@@QAE@XZ
*/

#include "hooking.h"

class aiRaceData
{
public:
    // 0x440A70 | ??0aiRaceData@@QAE@PAD0@Z
    inline aiRaceData(char* arg1, char* arg2)
    {
        stub<member_func_t<void, aiRaceData, char*, char*>>(0x440A70, this, arg1, arg2);
    }

    // 0x440F50 | ??1aiRaceData@@QAE@XZ
    inline ~aiRaceData()
    {
        stub<member_func_t<void, aiRaceData>>(0x440F50, this);
    }
};
