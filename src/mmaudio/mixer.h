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

// mmaudio:mixer

#include "hooking.h"

class MixerCTL
{
public:
    // 0x4E0D10 | ?Init@MixerCTL@@QAEKXZ
    inline uint32_t Init()
    {
        return stub<member_func_t<uint32_t, MixerCTL>>(0x4E0D10, this);
    }

    // 0x4E0DC0 | ?AssignWaveBalance@MixerCTL@@QAEXM@Z
    inline void AssignWaveBalance(float arg1)
    {
        return stub<member_func_t<void, MixerCTL, float>>(0x4E0DC0, this, arg1);
    }

    // 0x4E0E10 | ?AssignCDBalance@MixerCTL@@QAEXM@Z
    inline void AssignCDBalance(float arg1)
    {
        return stub<member_func_t<void, MixerCTL, float>>(0x4E0E10, this, arg1);
    }

    // 0x4E0E60 | ?RefreshAll@MixerCTL@@QAEXK@Z
    inline void RefreshAll(uint32_t arg1)
    {
        return stub<member_func_t<void, MixerCTL, uint32_t>>(0x4E0E60, this, arg1);
    }

    // 0x4E0E70 | ?GetWaveBalance@MixerCTL@@QAEMXZ
    inline float GetWaveBalance()
    {
        return stub<member_func_t<float, MixerCTL>>(0x4E0E70, this);
    }

    // 0x4E0E80 | ?GetWaveVolume@MixerCTL@@QAEMXZ
    inline float GetWaveVolume()
    {
        return stub<member_func_t<float, MixerCTL>>(0x4E0E80, this);
    }

    // 0x4E0E90 | ?AssignWaveVolume@MixerCTL@@QAEXM@Z
    inline void AssignWaveVolume(float arg1)
    {
        return stub<member_func_t<void, MixerCTL, float>>(0x4E0E90, this, arg1);
    }

    // 0x4E0EB0 | ?AssignCDVolume@MixerCTL@@QAEXM@Z
    inline void AssignCDVolume(float arg1)
    {
        return stub<member_func_t<void, MixerCTL, float>>(0x4E0EB0, this, arg1);
    }

    // 0x4E0ED0 | ?GetCDBalance@MixerCTL@@QAEMXZ
    inline float GetCDBalance()
    {
        return stub<member_func_t<float, MixerCTL>>(0x4E0ED0, this);
    }

    // 0x4E0EE0 | ?GetCDVolume@MixerCTL@@QAEMXZ
    inline float GetCDVolume()
    {
        return stub<member_func_t<float, MixerCTL>>(0x4E0EE0, this);
    }

    // 0x4E0EF0 | ?AssignMixerVolume@MixerCTL@@QAEKMK@Z
    inline uint32_t AssignMixerVolume(float arg1, uint32_t arg2)
    {
        return stub<member_func_t<uint32_t, MixerCTL, float, uint32_t>>(0x4E0EF0, this, arg1, arg2);
    }

    // 0x4E1150 | ?AssignMixerBalance@MixerCTL@@QAEKMK@Z
    inline uint32_t AssignMixerBalance(float arg1, uint32_t arg2)
    {
        return stub<member_func_t<uint32_t, MixerCTL, float, uint32_t>>(0x4E1150, this, arg1, arg2);
    }

    // 0x4E1400 | ?GetMixerBalance@MixerCTL@@QAEMK@Z
    inline float GetMixerBalance(uint32_t arg1)
    {
        return stub<member_func_t<float, MixerCTL, uint32_t>>(0x4E1400, this, arg1);
    }

    // 0x4E1680 | ?SetDeviceNum@MixerCTL@@QAEXI@Z
    inline void SetDeviceNum(uint32_t arg1)
    {
        return stub<member_func_t<void, MixerCTL, uint32_t>>(0x4E1680, this, arg1);
    }

    // 0x4E16A0 | ?GetErrorMessage@MixerCTL@@AAEPADK@Z
    inline char* GetErrorMessage(uint32_t arg1)
    {
        return stub<member_func_t<char*, MixerCTL, uint32_t>>(0x4E16A0, this, arg1);
    }
};

struct VolumeDW
{
public:
    // 0x4E0C10 | ?Set@VolumeDW@@QAEXMM@Z
    inline void Set(float arg1, float arg2)
    {
        return stub<member_func_t<void, VolumeDW, float, float>>(0x4E0C10, this, arg1, arg2);
    }

    // 0x4E0CE0 | ?Value@VolumeDW@@QAEKXZ
    inline uint32_t Value()
    {
        return stub<member_func_t<uint32_t, VolumeDW>>(0x4E0CE0, this);
    }

    // 0x4E1750 | ??1VolumeDW@@QAE@XZ
    inline ~VolumeDW()
    {
        stub<member_func_t<void, VolumeDW>>(0x4E1750, this);
    }
};
