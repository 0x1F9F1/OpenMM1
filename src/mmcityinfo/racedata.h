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
    mmcityinfo:racedata

    0x4C6110 | public: __thiscall mmRaceData::mmRaceData(void) | ??0mmRaceData@@QAE@XZ
    0x4C6120 | public: __thiscall mmRaceData::~mmRaceData(void) | ??1mmRaceData@@QAE@XZ
    0x4C6130 | public: int __thiscall mmRaceData::Load(char *) | ?Load@mmRaceData@@QAEHPAD@Z
    0x4C64B0 | public: int __thiscall mmRaceData::GetNumRaces(void) | ?GetNumRaces@mmRaceData@@QAEHXZ
    0x4C64C0 | public: char * __thiscall mmRaceData::GetRaceName(int) | ?GetRaceName@mmRaceData@@QAEPADH@Z
    0x4C64D0 | public: int __thiscall mmRaceData::GetCarType(int,enum mmSkillLevel) | ?GetCarType@mmRaceData@@QAEHHW4mmSkillLevel@@@Z
    0x4C6500 | public: int __thiscall mmRaceData::GetNumLaps(int,enum mmSkillLevel) | ?GetNumLaps@mmRaceData@@QAEHHW4mmSkillLevel@@@Z
    0x4C6530 | public: float __thiscall mmRaceData::GetTimeLimit(int,enum mmSkillLevel) | ?GetTimeLimit@mmRaceData@@QAEMHW4mmSkillLevel@@@Z
    0x4C6560 | public: int __thiscall mmRaceData::GetNumOpponents(int,enum mmSkillLevel) | ?GetNumOpponents@mmRaceData@@QAEHHW4mmSkillLevel@@@Z
    0x4C6590 | public: int __thiscall mmRaceData::GetNumCops(int,enum mmSkillLevel) | ?GetNumCops@mmRaceData@@QAEHHW4mmSkillLevel@@@Z
    0x4C65C0 | public: int __thiscall mmRaceData::GetTimeOfDay(int,enum mmSkillLevel) | ?GetTimeOfDay@mmRaceData@@QAEHHW4mmSkillLevel@@@Z
    0x4C65F0 | public: int __thiscall mmRaceData::GetWeather(int,enum mmSkillLevel) | ?GetWeather@mmRaceData@@QAEHHW4mmSkillLevel@@@Z
    0x4C6620 | public: float __thiscall mmRaceData::GetPedDensity(int,enum mmSkillLevel) | ?GetPedDensity@mmRaceData@@QAEMHW4mmSkillLevel@@@Z
    0x4C6650 | public: float __thiscall mmRaceData::GetAmbientDensity(int,enum mmSkillLevel) | ?GetAmbientDensity@mmRaceData@@QAEMHW4mmSkillLevel@@@Z
    0x4C6680 | public: float __thiscall mmRaceData::GetDifficulty(int,enum mmSkillLevel) | ?GetDifficulty@mmRaceData@@QAEMHW4mmSkillLevel@@@Z
*/

struct mmRaceData
{
public:
    // 0x4C6110 | ??0mmRaceData@@QAE@XZ
    inline mmRaceData()
    {
        // stub<member_func_t<void, mmRaceData>>(0x4C6110, this);

        unimplemented();
    }

    // 0x4C6120 | ??1mmRaceData@@QAE@XZ
    inline ~mmRaceData()
    {
        stub<member_func_t<void, mmRaceData>>(0x4C6120, this);
    }

    // 0x4C6130 | ?Load@mmRaceData@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, mmRaceData, char*>>(0x4C6130, this, arg1);
    }

    // 0x4C64B0 | ?GetNumRaces@mmRaceData@@QAEHXZ
    inline int32_t GetNumRaces()
    {
        return stub<member_func_t<int32_t, mmRaceData>>(0x4C64B0, this);
    }

    // 0x4C64C0 | ?GetRaceName@mmRaceData@@QAEPADH@Z
    inline char* GetRaceName(int32_t arg1)
    {
        return stub<member_func_t<char*, mmRaceData, int32_t>>(0x4C64C0, this, arg1);
    }

    // 0x4C64D0 | ?GetCarType@mmRaceData@@QAEHHW4mmSkillLevel@@@Z
    inline int32_t GetCarType(int32_t arg1, enum mmSkillLevel arg2)
    {
        return stub<member_func_t<int32_t, mmRaceData, int32_t, enum mmSkillLevel>>(0x4C64D0, this, arg1, arg2);
    }

    // 0x4C6500 | ?GetNumLaps@mmRaceData@@QAEHHW4mmSkillLevel@@@Z
    inline int32_t GetNumLaps(int32_t arg1, enum mmSkillLevel arg2)
    {
        return stub<member_func_t<int32_t, mmRaceData, int32_t, enum mmSkillLevel>>(0x4C6500, this, arg1, arg2);
    }

    // 0x4C6530 | ?GetTimeLimit@mmRaceData@@QAEMHW4mmSkillLevel@@@Z
    inline float GetTimeLimit(int32_t arg1, enum mmSkillLevel arg2)
    {
        return stub<member_func_t<float, mmRaceData, int32_t, enum mmSkillLevel>>(0x4C6530, this, arg1, arg2);
    }

    // 0x4C6560 | ?GetNumOpponents@mmRaceData@@QAEHHW4mmSkillLevel@@@Z
    inline int32_t GetNumOpponents(int32_t arg1, enum mmSkillLevel arg2)
    {
        return stub<member_func_t<int32_t, mmRaceData, int32_t, enum mmSkillLevel>>(0x4C6560, this, arg1, arg2);
    }

    // 0x4C6590 | ?GetNumCops@mmRaceData@@QAEHHW4mmSkillLevel@@@Z
    inline int32_t GetNumCops(int32_t arg1, enum mmSkillLevel arg2)
    {
        return stub<member_func_t<int32_t, mmRaceData, int32_t, enum mmSkillLevel>>(0x4C6590, this, arg1, arg2);
    }

    // 0x4C65C0 | ?GetTimeOfDay@mmRaceData@@QAEHHW4mmSkillLevel@@@Z
    inline int32_t GetTimeOfDay(int32_t arg1, enum mmSkillLevel arg2)
    {
        return stub<member_func_t<int32_t, mmRaceData, int32_t, enum mmSkillLevel>>(0x4C65C0, this, arg1, arg2);
    }

    // 0x4C65F0 | ?GetWeather@mmRaceData@@QAEHHW4mmSkillLevel@@@Z
    inline int32_t GetWeather(int32_t arg1, enum mmSkillLevel arg2)
    {
        return stub<member_func_t<int32_t, mmRaceData, int32_t, enum mmSkillLevel>>(0x4C65F0, this, arg1, arg2);
    }

    // 0x4C6620 | ?GetPedDensity@mmRaceData@@QAEMHW4mmSkillLevel@@@Z
    inline float GetPedDensity(int32_t arg1, enum mmSkillLevel arg2)
    {
        return stub<member_func_t<float, mmRaceData, int32_t, enum mmSkillLevel>>(0x4C6620, this, arg1, arg2);
    }

    // 0x4C6650 | ?GetAmbientDensity@mmRaceData@@QAEMHW4mmSkillLevel@@@Z
    inline float GetAmbientDensity(int32_t arg1, enum mmSkillLevel arg2)
    {
        return stub<member_func_t<float, mmRaceData, int32_t, enum mmSkillLevel>>(0x4C6650, this, arg1, arg2);
    }

    // 0x4C6680 | ?GetDifficulty@mmRaceData@@QAEMHW4mmSkillLevel@@@Z
    inline float GetDifficulty(int32_t arg1, enum mmSkillLevel arg2)
    {
        return stub<member_func_t<float, mmRaceData, int32_t, enum mmSkillLevel>>(0x4C6680, this, arg1, arg2);
    }
};
