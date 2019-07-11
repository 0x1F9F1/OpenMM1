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

// mmcar:networkcaraudio

#include "hooking.h"

// 0x60A578 | ?mmNetworkCarAudioMetaClass@@3VMetaClass@@A
inline extern_var(0x60A578, class MetaClass, mmNetworkCarAudioMetaClass);

// 0x47B380 | ?new_mmNetworkCarAudio@@YAPAXH@Z
inline void* new_mmNetworkCarAudio(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x47B380, arg1);
}

// 0x47B470 | ?delete_mmNetworkCarAudio@@YAXPAXH@Z
inline void delete_mmNetworkCarAudio(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x47B470, arg1, arg2);
}

class mmNetworkCarAudio : asNode
{
public:
    // mmNetworkCarAudio::`vftable' @ 0x591980

    // 0x47A390 | ??0mmNetworkCarAudio@@QAE@PAVmmCarSim@@@Z
    inline mmNetworkCarAudio(class mmCarSim* arg1)
    {
        stub<member_func_t<void, mmNetworkCarAudio, class mmCarSim*>>(0x47A390, this, arg1);
    }

    // 0x47A3F0 | ?Init@mmNetworkCarAudio@@QAEXPAVmmCarSim@@G@Z
    inline void Init(class mmCarSim* arg1, uint16_t arg2)
    {
        return stub<member_func_t<void, mmNetworkCarAudio, class mmCarSim*, uint16_t>>(0x47A3F0, this, arg1, arg2);
    }

    // 0x47A630 | ?UpdateAudio@mmNetworkCarAudio@@QAEXXZ
    inline void UpdateAudio()
    {
        return stub<member_func_t<void, mmNetworkCarAudio>>(0x47A630, this);
    }

    // 0x47A760 | ?FluctuateSlowSiren@mmNetworkCarAudio@@QAEXXZ
    inline void FluctuateSlowSiren()
    {
        return stub<member_func_t<void, mmNetworkCarAudio>>(0x47A760, this);
    }

    // 0x47A9B0 | ?FluctuateFastSiren@mmNetworkCarAudio@@QAEXXZ
    inline void FluctuateFastSiren()
    {
        return stub<member_func_t<void, mmNetworkCarAudio>>(0x47A9B0, this);
    }

    // 0x47AD60 | ?DeactivateAudio@mmNetworkCarAudio@@QAEXXZ
    inline void DeactivateAudio()
    {
        return stub<member_func_t<void, mmNetworkCarAudio>>(0x47AD60, this);
    }

    // 0x47AE10 | ?CalculateDistToPlayer2@mmNetworkCarAudio@@QAEXXZ
    inline void CalculateDistToPlayer2()
    {
        return stub<member_func_t<void, mmNetworkCarAudio>>(0x47AE10, this);
    }

    // 0x47AED0 | ?CalculateDoppler@mmNetworkCarAudio@@QAEXXZ
    inline void CalculateDoppler()
    {
        return stub<member_func_t<void, mmNetworkCarAudio>>(0x47AED0, this);
    }

    // 0x47AEF0 | ?UpdateDoppler@mmNetworkCarAudio@@QAEXXZ
    inline void UpdateDoppler()
    {
        return stub<member_func_t<void, mmNetworkCarAudio>>(0x47AEF0, this);
    }

    // 0x47B1A0 | ?StopSiren@mmNetworkCarAudio@@QAEXXZ
    inline void StopSiren()
    {
        return stub<member_func_t<void, mmNetworkCarAudio>>(0x47B1A0, this);
    }

    // 0x47B1E0 | ?StartSiren@mmNetworkCarAudio@@QAEXXZ
    inline void StartSiren()
    {
        return stub<member_func_t<void, mmNetworkCarAudio>>(0x47B1E0, this);
    }

    // 0x47B250 | ?RemoveFromManager@mmNetworkCarAudio@@QAEXXZ
    inline void RemoveFromManager()
    {
        return stub<member_func_t<void, mmNetworkCarAudio>>(0x47B250, this);
    }

    // 0x47B270 | ?LoadSucessful@mmNetworkCarAudio@@QAEXPAVmmCarSim@@@Z
    inline void LoadSucessful(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, mmNetworkCarAudio, class mmCarSim*>>(0x47B270, this, arg1);
    }

    // 0x47B2F0 | ?DeclareFields@mmNetworkCarAudio@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x47B2F0);
    }

    // 0x47B650 | ??0mmNetworkCarAudio@@QAE@XZ
    inline mmNetworkCarAudio()
    {
        stub<member_func_t<void, mmNetworkCarAudio>>(0x47B650, this);
    }

    // 0x60A5B4 | ?s_iPlayingFluctuator@mmNetworkCarAudio@@2FA
    static inline extern_var(0x60A5B4, int16_t, s_iPlayingFluctuator);

    // 0x47A580 | ??1mmNetworkCarAudio@@UAE@XZ
    inline ~mmNetworkCarAudio() override
    {
        stub<member_func_t<void, mmNetworkCarAudio>>(0x47A580, this);
    }

    // 0x47B4C0 | ?GetClass@mmNetworkCarAudio@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmNetworkCarAudio>>(0x47B4C0, this);
    }

    // 0x47A5F0 | ?Update@mmNetworkCarAudio@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmNetworkCarAudio>>(0x47A5F0, this);
    }

    // 0x47B230 | ?Reset@mmNetworkCarAudio@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmNetworkCarAudio>>(0x47B230, this);
    }
};
