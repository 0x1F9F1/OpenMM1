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
    mmcar:netaddoncaraudio

    0x47C490 | public: __thiscall NetAddOnCarAudio::NetAddOnCarAudio(char *,short) | ??0NetAddOnCarAudio@@QAE@PADF@Z
    0x47C5B0 | public: __thiscall NetAddOnCarAudio::~NetAddOnCarAudio(void) | ??1NetAddOnCarAudio@@QAE@XZ
    0x47C600 | public: int __thiscall NetAddOnCarAudio::AssignSounds(class mmNetworkCarAudio *,short) | ?AssignSounds@NetAddOnCarAudio@@QAEHPAVmmNetworkCarAudio@@F@Z
    0x47C690 | public: void __thiscall NetAddOnCarAudio::EchoOn(float) | ?EchoOn@NetAddOnCarAudio@@QAEXM@Z
    0x47C6F0 | public: void __thiscall NetAddOnCarAudio::EchoOff(void) | ?EchoOff@NetAddOnCarAudio@@QAEXXZ
    0x47C720 | public: void __thiscall NetAddOnCarAudio::Update(void) | ?Update@NetAddOnCarAudio@@QAEXXZ
*/

#include "hooking.h"

struct NetAddOnCarAudio
{
public:
    // 0x47C490 | ??0NetAddOnCarAudio@@QAE@PADF@Z
    inline NetAddOnCarAudio(char* arg1, int16_t arg2)
    {
        stub<member_func_t<void, NetAddOnCarAudio, char*, int16_t>>(0x47C490, this, arg1, arg2);
    }

    // 0x47C5B0 | ??1NetAddOnCarAudio@@QAE@XZ
    inline ~NetAddOnCarAudio()
    {
        stub<member_func_t<void, NetAddOnCarAudio>>(0x47C5B0, this);
    }

    // 0x47C600 | ?AssignSounds@NetAddOnCarAudio@@QAEHPAVmmNetworkCarAudio@@F@Z
    inline int32_t AssignSounds(class mmNetworkCarAudio* arg1, int16_t arg2)
    {
        return stub<member_func_t<int32_t, NetAddOnCarAudio, class mmNetworkCarAudio*, int16_t>>(
            0x47C600, this, arg1, arg2);
    }

    // 0x47C690 | ?EchoOn@NetAddOnCarAudio@@QAEXM@Z
    inline void EchoOn(float arg1)
    {
        return stub<member_func_t<void, NetAddOnCarAudio, float>>(0x47C690, this, arg1);
    }

    // 0x47C6F0 | ?EchoOff@NetAddOnCarAudio@@QAEXXZ
    inline void EchoOff()
    {
        return stub<member_func_t<void, NetAddOnCarAudio>>(0x47C6F0, this);
    }

    // 0x47C720 | ?Update@NetAddOnCarAudio@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, NetAddOnCarAudio>>(0x47C720, this);
    }
};
