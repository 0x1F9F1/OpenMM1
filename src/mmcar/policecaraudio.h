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

// mmcar:policecaraudio

#include "hooking.h"

class mmPoliceCarAudio : mmOpponentCarAudio
{
public:
    // mmPoliceCarAudio::`vftable' @ 0x591498

    // 0x472110 | ??0mmPoliceCarAudio@@QAE@PAVmmCarSim@@M@Z
    inline mmPoliceCarAudio(class mmCarSim* arg1, float arg2)
    {
        stub<member_func_t<void, mmPoliceCarAudio, class mmCarSim*, float>>(0x472110, this, arg1, arg2);
    }

    // 0x472200 | ?ExplosionIsPlaying@mmPoliceCarAudio@@QAEHXZ
    inline int32_t ExplosionIsPlaying()
    {
        return stub<member_func_t<int32_t, mmPoliceCarAudio>>(0x472200, this);
    }

    // 0x472220 | ?StartSiren@mmPoliceCarAudio@@QAEXXZ
    inline void StartSiren()
    {
        return stub<member_func_t<void, mmPoliceCarAudio>>(0x472220, this);
    }

    // 0x4722D0 | ?StopSiren@mmPoliceCarAudio@@QAEXXZ
    inline void StopSiren()
    {
        return stub<member_func_t<void, mmPoliceCarAudio>>(0x4722D0, this);
    }

    // 0x472330 | ?PlayExplosion@mmPoliceCarAudio@@QAEXXZ
    inline void PlayExplosion()
    {
        return stub<member_func_t<void, mmPoliceCarAudio>>(0x472330, this);
    }

    // 0x4723E0 | ?DamageSiren@mmPoliceCarAudio@@QAEXXZ
    inline void DamageSiren()
    {
        return stub<member_func_t<void, mmPoliceCarAudio>>(0x4723E0, this);
    }

    // 0x472540 | ?Update@mmPoliceCarAudio@@QAEXHMM@Z
    inline void Update(int32_t arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, mmPoliceCarAudio, int32_t, float, float>>(0x472540, this, arg1, arg2, arg3);
    }

    // 0x472660 | ?FluctuateSlowSiren@mmPoliceCarAudio@@AAEXXZ
    inline void FluctuateSlowSiren()
    {
        return stub<member_func_t<void, mmPoliceCarAudio>>(0x472660, this);
    }

    // 0x4728F0 | ?FluctuateFastSiren@mmPoliceCarAudio@@AAEXXZ
    inline void FluctuateFastSiren()
    {
        return stub<member_func_t<void, mmPoliceCarAudio>>(0x4728F0, this);
    }

    // 0x472D10 | ?UpdateDoppler@mmPoliceCarAudio@@QAEXXZ
    inline void UpdateDoppler()
    {
        return stub<member_func_t<void, mmPoliceCarAudio>>(0x472D10, this);
    }

    // 0x472D20 | ?UpdateDoppler@mmPoliceCarAudio@@QAEXM@Z
    inline void UpdateDoppler(float arg1)
    {
        return stub<member_func_t<void, mmPoliceCarAudio, float>>(0x472D20, this, arg1);
    }

    // 0x472F10 | ?PlayVoice@mmPoliceCarAudio@@QAEXXZ
    inline void PlayVoice()
    {
        return stub<member_func_t<void, mmPoliceCarAudio>>(0x472F10, this);
    }

    // 0x472FB0 | ?AssignSounds@mmPoliceCarAudio@@QAEXPAVAudSound@@000PAVmmOpponentImpactAudio@@0@Z
    inline void AssignSounds(class AudSound* arg1, class AudSound* arg2, class AudSound* arg3, class AudSound* arg4,
        class mmOpponentImpactAudio* arg5, class AudSound* arg6)
    {
        return stub<member_func_t<void, mmPoliceCarAudio, class AudSound*, class AudSound*, class AudSound*,
            class AudSound*, class mmOpponentImpactAudio*, class AudSound*>>(
            0x472FB0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x473080 | ?UnAssignSounds@mmPoliceCarAudio@@QAEXXZ
    inline void UnAssignSounds()
    {
        return stub<member_func_t<void, mmPoliceCarAudio>>(0x473080, this);
    }

    // 0x60A378 | ?s_iPlayingFluctuator@mmPoliceCarAudio@@0FA
    static inline extern_var(0x60A378, int16_t, s_iPlayingFluctuator);

    // 0x4721F0 | ??1mmPoliceCarAudio@@UAE@XZ
    inline ~mmPoliceCarAudio() override
    {
        stub<member_func_t<void, mmPoliceCarAudio>>(0x4721F0, this);
    }
};
