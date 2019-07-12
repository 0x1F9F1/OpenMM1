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
    mmcar:impactaudio

    0x47B6A0 | public: __thiscall mmImpactAudio::mmImpactAudio(class mmCarSim *,class Vector3 *) | ??0mmImpactAudio@@QAE@PAVmmCarSim@@PAVVector3@@@Z
    0x47BCD0 | public: __thiscall mmImpactAudio::~mmImpactAudio(void) | ??1mmImpactAudio@@QAE@XZ
    0x47BDB0 | public: void __thiscall mmImpactAudio::EchoOn(class mmCarSim *) | ?EchoOn@mmImpactAudio@@QAEXPAVmmCarSim@@@Z
    0x47BDC0 | public: void __thiscall mmImpactAudio::EchoOff(class mmCarSim *) | ?EchoOff@mmImpactAudio@@QAEXPAVmmCarSim@@@Z
    0x47BDD0 | public: void __thiscall mmImpactAudio::Play(float,short,float,float) | ?Play@mmImpactAudio@@QAEXMFMM@Z
    0x47BE60 | public: void __thiscall mmImpactAudio::PlayWall(float,float,float) | ?PlayWall@mmImpactAudio@@QAEXMMM@Z
    0x47BF60 | public: void __thiscall mmImpactAudio::PlayCar(float) | ?PlayCar@mmImpactAudio@@QAEXM@Z
    0x47BF70 | public: void __thiscall mmImpactAudio::GetBangerPtrs(short,class AudSound * *,class AudSound * *) | ?GetBangerPtrs@mmImpactAudio@@QAEXFPAPAVAudSound@@0@Z
    0x47C1F0 | public: void __thiscall mmImpactAudio::PlayBanger(float,short) | ?PlayBanger@mmImpactAudio@@QAEXMF@Z
    0x47C330 | public: void __thiscall mmImpactAudio::SetWallSoftVolumeRange(float,float) | ?SetWallSoftVolumeRange@mmImpactAudio@@QAEXMM@Z
    0x47C350 | public: void __thiscall mmImpactAudio::SetWallSoftVolumeMultiplier(float) | ?SetWallSoftVolumeMultiplier@mmImpactAudio@@QAEXM@Z
    0x47C370 | public: void __thiscall mmImpactAudio::SetWallMedVolumeRange(float,float) | ?SetWallMedVolumeRange@mmImpactAudio@@QAEXMM@Z
    0x47C390 | public: void __thiscall mmImpactAudio::SetWallMedVolumeMultiplier(float) | ?SetWallMedVolumeMultiplier@mmImpactAudio@@QAEXM@Z
    0x47C3B0 | public: void __thiscall mmImpactAudio::SetWallHugeVolumeRange(float,float) | ?SetWallHugeVolumeRange@mmImpactAudio@@QAEXMM@Z
    0x47C3D0 | public: void __thiscall mmImpactAudio::SetWallHugeVolumeMultiplier(float) | ?SetWallHugeVolumeMultiplier@mmImpactAudio@@QAEXM@Z
    0x47C3F0 | public: void __thiscall mmImpactAudio::SetBangerVolumeRange(float,float,float,short) | ?SetBangerVolumeRange@mmImpactAudio@@QAEXMMMF@Z
    0x47C480 | public: void __thiscall mmImpactAudio::Update(void) | ?Update@mmImpactAudio@@QAEXXZ
*/

#include "hooking.h"

struct mmImpactAudio
{
public:
    // 0x47B6A0 | ??0mmImpactAudio@@QAE@PAVmmCarSim@@PAVVector3@@@Z
    inline mmImpactAudio(class mmCarSim* arg1, class Vector3* arg2)
    {
        // stub<member_func_t<void, mmImpactAudio, class mmCarSim*, class Vector3*>>(0x47B6A0, this, arg1, arg2);

        unimplemented();
    }

    // 0x47BCD0 | ??1mmImpactAudio@@QAE@XZ
    inline ~mmImpactAudio()
    {
        stub<member_func_t<void, mmImpactAudio>>(0x47BCD0, this);
    }

    // 0x47BDB0 | ?EchoOn@mmImpactAudio@@QAEXPAVmmCarSim@@@Z
    inline void EchoOn(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, mmImpactAudio, class mmCarSim*>>(0x47BDB0, this, arg1);
    }

    // 0x47BDC0 | ?EchoOff@mmImpactAudio@@QAEXPAVmmCarSim@@@Z
    inline void EchoOff(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, mmImpactAudio, class mmCarSim*>>(0x47BDC0, this, arg1);
    }

    // 0x47BDD0 | ?Play@mmImpactAudio@@QAEXMFMM@Z
    inline void Play(float arg1, int16_t arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, mmImpactAudio, float, int16_t, float, float>>(
            0x47BDD0, this, arg1, arg2, arg3, arg4);
    }

    // 0x47BE60 | ?PlayWall@mmImpactAudio@@QAEXMMM@Z
    inline void PlayWall(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, mmImpactAudio, float, float, float>>(0x47BE60, this, arg1, arg2, arg3);
    }

    // 0x47BF60 | ?PlayCar@mmImpactAudio@@QAEXM@Z
    inline void PlayCar(float arg1)
    {
        return stub<member_func_t<void, mmImpactAudio, float>>(0x47BF60, this, arg1);
    }

    // 0x47BF70 | ?GetBangerPtrs@mmImpactAudio@@QAEXFPAPAVAudSound@@0@Z
    inline void GetBangerPtrs(int16_t arg1, class AudSound** arg2, class AudSound** arg3)
    {
        return stub<member_func_t<void, mmImpactAudio, int16_t, class AudSound**, class AudSound**>>(
            0x47BF70, this, arg1, arg2, arg3);
    }

    // 0x47C1F0 | ?PlayBanger@mmImpactAudio@@QAEXMF@Z
    inline void PlayBanger(float arg1, int16_t arg2)
    {
        return stub<member_func_t<void, mmImpactAudio, float, int16_t>>(0x47C1F0, this, arg1, arg2);
    }

    // 0x47C330 | ?SetWallSoftVolumeRange@mmImpactAudio@@QAEXMM@Z
    inline void SetWallSoftVolumeRange(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmImpactAudio, float, float>>(0x47C330, this, arg1, arg2);
    }

    // 0x47C350 | ?SetWallSoftVolumeMultiplier@mmImpactAudio@@QAEXM@Z
    inline void SetWallSoftVolumeMultiplier(float arg1)
    {
        return stub<member_func_t<void, mmImpactAudio, float>>(0x47C350, this, arg1);
    }

    // 0x47C370 | ?SetWallMedVolumeRange@mmImpactAudio@@QAEXMM@Z
    inline void SetWallMedVolumeRange(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmImpactAudio, float, float>>(0x47C370, this, arg1, arg2);
    }

    // 0x47C390 | ?SetWallMedVolumeMultiplier@mmImpactAudio@@QAEXM@Z
    inline void SetWallMedVolumeMultiplier(float arg1)
    {
        return stub<member_func_t<void, mmImpactAudio, float>>(0x47C390, this, arg1);
    }

    // 0x47C3B0 | ?SetWallHugeVolumeRange@mmImpactAudio@@QAEXMM@Z
    inline void SetWallHugeVolumeRange(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmImpactAudio, float, float>>(0x47C3B0, this, arg1, arg2);
    }

    // 0x47C3D0 | ?SetWallHugeVolumeMultiplier@mmImpactAudio@@QAEXM@Z
    inline void SetWallHugeVolumeMultiplier(float arg1)
    {
        return stub<member_func_t<void, mmImpactAudio, float>>(0x47C3D0, this, arg1);
    }

    // 0x47C3F0 | ?SetBangerVolumeRange@mmImpactAudio@@QAEXMMMF@Z
    inline void SetBangerVolumeRange(float arg1, float arg2, float arg3, int16_t arg4)
    {
        return stub<member_func_t<void, mmImpactAudio, float, float, float, int16_t>>(
            0x47C3F0, this, arg1, arg2, arg3, arg4);
    }

    // 0x47C480 | ?Update@mmImpactAudio@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmImpactAudio>>(0x47C480, this);
    }
};
