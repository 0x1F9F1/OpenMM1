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

// mmcar:opponentimpactaudio

#include "hooking.h"

class mmOpponentImpactAudio
{
public:
    // 0x471CC0 | ??0mmOpponentImpactAudio@@QAE@XZ
    inline mmOpponentImpactAudio()
    {
        stub<member_func_t<void, mmOpponentImpactAudio>>(0x471CC0, this);
    }

    // 0x471E80 | ??1mmOpponentImpactAudio@@QAE@XZ
    inline ~mmOpponentImpactAudio()
    {
        stub<member_func_t<void, mmOpponentImpactAudio>>(0x471E80, this);
    }

    // 0x471EB0 | ?Play@mmOpponentImpactAudio@@QAEXMFMM@Z
    inline void Play(float arg1, int16_t arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, mmOpponentImpactAudio, float, int16_t, float, float>>(
            0x471EB0, this, arg1, arg2, arg3, arg4);
    }

    // 0x472020 | ?Update@mmOpponentImpactAudio@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmOpponentImpactAudio>>(0x472020, this);
    }

    // 0x472080 | ?Enable3DMode@mmOpponentImpactAudio@@QAEXPAVVector3@@@Z
    inline void Enable3DMode(class Vector3* arg1)
    {
        return stub<member_func_t<void, mmOpponentImpactAudio, class Vector3*>>(0x472080, this, arg1);
    }

    // 0x4720D0 | ?SetSecondsElapsed@mmOpponentImpactAudio@@SAXM@Z
    static inline void SetSecondsElapsed(float arg1)
    {
        return stub<cdecl_t<void, float>>(0x4720D0, arg1);
    }

    // 0x4720E0 | ?GetSecondsElapsed@mmOpponentImpactAudio@@SAMXZ
    static inline float GetSecondsElapsed()
    {
        return stub<cdecl_t<float>>(0x4720E0);
    }

    // 0x4720F0 | ?Disable3DMode@mmOpponentImpactAudio@@QAEXXZ
    inline void Disable3DMode()
    {
        return stub<member_func_t<void, mmOpponentImpactAudio>>(0x4720F0, this);
    }

    // 0x5AB088 | ?m_fBareMinimum@mmOpponentImpactAudio@@0MA
    static inline extern_var(0x5AB088, float, m_fBareMinimum);

    // 0x5AB08C | ?m_fSoft@mmOpponentImpactAudio@@0MA
    static inline extern_var(0x5AB08C, float, m_fSoft);

    // 0x5AB090 | ?m_fMedium@mmOpponentImpactAudio@@0MA
    static inline extern_var(0x5AB090, float, m_fMedium);

    // 0x5AB094 | ?m_fMinSoftVolume@mmOpponentImpactAudio@@0MA
    static inline extern_var(0x5AB094, float, m_fMinSoftVolume);

    // 0x5AB098 | ?m_fMaxSoftVolume@mmOpponentImpactAudio@@0MA
    static inline extern_var(0x5AB098, float, m_fMaxSoftVolume);

    // 0x5AB09C | ?m_fMinMedVolume@mmOpponentImpactAudio@@0MA
    static inline extern_var(0x5AB09C, float, m_fMinMedVolume);

    // 0x5AB0A0 | ?m_fMaxMedVolume@mmOpponentImpactAudio@@0MA
    static inline extern_var(0x5AB0A0, float, m_fMaxMedVolume);

    // 0x5AB0A4 | ?m_fMinHugeVolume@mmOpponentImpactAudio@@0MA
    static inline extern_var(0x5AB0A4, float, m_fMinHugeVolume);

    // 0x5AB0A8 | ?m_fMaxHugeVolume@mmOpponentImpactAudio@@0MA
    static inline extern_var(0x5AB0A8, float, m_fMaxHugeVolume);

    // 0x60A350 | ?s_fSecondsElapsed@mmOpponentImpactAudio@@0MA
    static inline extern_var(0x60A350, float, s_fSecondsElapsed);

    // 0x60A354 | ?m_fSoftVolumeMultiplier@mmOpponentImpactAudio@@0MA
    static inline extern_var(0x60A354, float, m_fSoftVolumeMultiplier);

    // 0x60A358 | ?m_fMedVolumeMultiplier@mmOpponentImpactAudio@@0MA
    static inline extern_var(0x60A358, float, m_fMedVolumeMultiplier);

    // 0x60A35C | ?m_fHugeVolumeMultiplier@mmOpponentImpactAudio@@0MA
    static inline extern_var(0x60A35C, float, m_fHugeVolumeMultiplier);
};
