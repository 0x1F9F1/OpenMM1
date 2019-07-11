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
    mmai:addoncaraudio

    0x4551C0 | public: __thiscall AddOnCarAudio::AddOnCarAudio(char *,short) | ??0AddOnCarAudio@@QAE@PADF@Z
    0x4552F0 | public: __thiscall AddOnCarAudio::~AddOnCarAudio(void) | ??1AddOnCarAudio@@QAE@XZ
    0x455340 | public: class AudSound * __thiscall AddOnCarAudio::GetEngineSoundPtr(short) | ?GetEngineSoundPtr@AddOnCarAudio@@QAEPAVAudSound@@F@Z
    0x455360 | public: void __thiscall AddOnCarAudio::EchoOn(float) | ?EchoOn@AddOnCarAudio@@QAEXM@Z
    0x4553B0 | public: void __thiscall AddOnCarAudio::EchoOff(void) | ?EchoOff@AddOnCarAudio@@QAEXXZ
    0x4553E0 | public: void __thiscall AddOnCarAudio::Update(void) | ?Update@AddOnCarAudio@@QAEXXZ
*/

#include "hooking.h"

struct AddOnCarAudio
{
public:
    // 0x4551C0 | ??0AddOnCarAudio@@QAE@PADF@Z
    inline AddOnCarAudio(char* arg1, int16_t arg2)
    {
        stub<member_func_t<void, AddOnCarAudio, char*, int16_t>>(0x4551C0, this, arg1, arg2);
    }

    // 0x4552F0 | ??1AddOnCarAudio@@QAE@XZ
    inline ~AddOnCarAudio()
    {
        stub<member_func_t<void, AddOnCarAudio>>(0x4552F0, this);
    }

    // 0x455340 | ?GetEngineSoundPtr@AddOnCarAudio@@QAEPAVAudSound@@F@Z
    inline class AudSound* GetEngineSoundPtr(int16_t arg1)
    {
        return stub<member_func_t<class AudSound*, AddOnCarAudio, int16_t>>(0x455340, this, arg1);
    }

    // 0x455360 | ?EchoOn@AddOnCarAudio@@QAEXM@Z
    inline void EchoOn(float arg1)
    {
        return stub<member_func_t<void, AddOnCarAudio, float>>(0x455360, this, arg1);
    }

    // 0x4553B0 | ?EchoOff@AddOnCarAudio@@QAEXXZ
    inline void EchoOff()
    {
        return stub<member_func_t<void, AddOnCarAudio>>(0x4553B0, this);
    }

    // 0x4553E0 | ?Update@AddOnCarAudio@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, AddOnCarAudio>>(0x4553E0, this);
    }
};
