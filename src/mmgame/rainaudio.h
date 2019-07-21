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
    mmgame:rainaudio

    0x42DEE0 | public: __thiscall mmRainAudio::mmRainAudio(void) | ??0mmRainAudio@@QAE@XZ
    0x42E0E0 | public: __thiscall mmRainAudio::~mmRainAudio(void) | ??1mmRainAudio@@QAE@XZ
    0x42E120 | public: void __thiscall mmRainAudio::SetInterior(unsigned char) | ?SetInterior@mmRainAudio@@QAEXE@Z
    0x42E1B0 | public: void __thiscall mmRainAudio::ShelterOn(void) | ?ShelterOn@mmRainAudio@@QAEXXZ
    0x42E220 | public: void __thiscall mmRainAudio::ShelterOff(void) | ?ShelterOff@mmRainAudio@@QAEXXZ
    0x42E290 | public: void __thiscall mmRainAudio::Update(void) | ?Update@mmRainAudio@@QAEXXZ
*/

struct mmRainAudio
{
public:
    // 0x42DEE0 | ??0mmRainAudio@@QAE@XZ
    inline mmRainAudio()
    {
        // stub<member_func_t<void, mmRainAudio>>(0x42DEE0, this);

        unimplemented();
    }

    // 0x42E0E0 | ??1mmRainAudio@@QAE@XZ
    inline ~mmRainAudio()
    {
        stub<member_func_t<void, mmRainAudio>>(0x42E0E0, this);
    }

    // 0x42E120 | ?SetInterior@mmRainAudio@@QAEXE@Z
    inline void SetInterior(uint8_t arg1)
    {
        return stub<member_func_t<void, mmRainAudio, uint8_t>>(0x42E120, this, arg1);
    }

    // 0x42E1B0 | ?ShelterOn@mmRainAudio@@QAEXXZ
    inline void ShelterOn()
    {
        return stub<member_func_t<void, mmRainAudio>>(0x42E1B0, this);
    }

    // 0x42E220 | ?ShelterOff@mmRainAudio@@QAEXXZ
    inline void ShelterOff()
    {
        return stub<member_func_t<void, mmRainAudio>>(0x42E220, this);
    }

    // 0x42E290 | ?Update@mmRainAudio@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmRainAudio>>(0x42E290, this);
    }
};
