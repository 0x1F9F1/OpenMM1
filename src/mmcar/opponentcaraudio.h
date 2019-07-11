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

// mmcar:opponentcaraudio

#include "hooking.h"

// 0x60A388 | ?mmOpponentCarAudioMetaClass@@3VMetaClass@@A
inline extern_var(0x60A388, class MetaClass, mmOpponentCarAudioMetaClass);

// 0x473A70 | ?new_mmOpponentCarAudio@@YAPAXH@Z
inline void* new_mmOpponentCarAudio(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x473A70, arg1);
}

// 0x473B60 | ?delete_mmOpponentCarAudio@@YAXPAXH@Z
inline void delete_mmOpponentCarAudio(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x473B60, arg1, arg2);
}

class mmOpponentCarAudio : asNode
{
public:
    // mmOpponentCarAudio::`vftable' @ 0x5914F0

    // 0x473260 | ??0mmOpponentCarAudio@@QAE@PAVmmCarSim@@@Z
    inline mmOpponentCarAudio(class mmCarSim* arg1)
    {
        stub<member_func_t<void, mmOpponentCarAudio, class mmCarSim*>>(0x473260, this, arg1);
    }

    // 0x473340 | ?Init@mmOpponentCarAudio@@QAEXPAVmmCarSim@@@Z
    inline void Init(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, mmOpponentCarAudio, class mmCarSim*>>(0x473340, this, arg1);
    }

    // 0x473490 | ?PlayReverseBeep@mmOpponentCarAudio@@QAEXXZ
    inline void PlayReverseBeep()
    {
        return stub<member_func_t<void, mmOpponentCarAudio>>(0x473490, this);
    }

    // 0x4734F0 | ?Update@mmOpponentCarAudio@@QAEXHMM@Z
    inline void Update(int32_t arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, mmOpponentCarAudio, int32_t, float, float>>(0x4734F0, this, arg1, arg2, arg3);
    }

    // 0x473590 | ?CalculateDistToPlayer2@mmOpponentCarAudio@@QAEXXZ
    inline void CalculateDistToPlayer2()
    {
        return stub<member_func_t<void, mmOpponentCarAudio>>(0x473590, this);
    }

    // 0x473670 | ?CalculatePan@mmOpponentCarAudio@@QAEXXZ
    inline void CalculatePan()
    {
        return stub<member_func_t<void, mmOpponentCarAudio>>(0x473670, this);
    }

    // 0x4736C0 | ?CalculateDoppler@mmOpponentCarAudio@@QAEXM@Z
    inline void CalculateDoppler(float arg1)
    {
        return stub<member_func_t<void, mmOpponentCarAudio, float>>(0x4736C0, this, arg1);
    }

    // 0x4736F0 | ?UpdateDoppler@mmOpponentCarAudio@@QAEXXZ
    inline void UpdateDoppler()
    {
        return stub<member_func_t<void, mmOpponentCarAudio>>(0x4736F0, this);
    }

    // 0x473700 | ?UpdateDoppler@mmOpponentCarAudio@@QAEXM@Z
    inline void UpdateDoppler(float arg1)
    {
        return stub<member_func_t<void, mmOpponentCarAudio, float>>(0x473700, this, arg1);
    }

    // 0x473830 | ?LoadSucessful@mmOpponentCarAudio@@QAEXPAVmmCarSim@@@Z
    inline void LoadSucessful(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, mmOpponentCarAudio, class mmCarSim*>>(0x473830, this, arg1);
    }

    // 0x473860 | ?AssignSounds@mmOpponentCarAudio@@QAEXPAVAudSound@@0PAVmmOpponentImpactAudio@@0@Z
    inline void AssignSounds(
        class AudSound* arg1, class AudSound* arg2, class mmOpponentImpactAudio* arg3, class AudSound* arg4)
    {
        return stub<member_func_t<void, mmOpponentCarAudio, class AudSound*, class AudSound*,
            class mmOpponentImpactAudio*, class AudSound*>>(0x473860, this, arg1, arg2, arg3, arg4);
    }

    // 0x473930 | ?UnAssignSounds@mmOpponentCarAudio@@QAEXXZ
    inline void UnAssignSounds()
    {
        return stub<member_func_t<void, mmOpponentCarAudio>>(0x473930, this);
    }

    // 0x4739D0 | ?SetMinAmpSpeed@mmOpponentCarAudio@@QAEXM@Z
    inline void SetMinAmpSpeed(float arg1)
    {
        return stub<member_func_t<void, mmOpponentCarAudio, float>>(0x4739D0, this, arg1);
    }

    // 0x4739F0 | ?DeclareFields@mmOpponentCarAudio@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4739F0);
    }

    // 0x473D40 | ??0mmOpponentCarAudio@@QAE@XZ
    inline mmOpponentCarAudio()
    {
        stub<member_func_t<void, mmOpponentCarAudio>>(0x473D40, this);
    }

    // 0x4732D0 | ??1mmOpponentCarAudio@@UAE@XZ
    inline ~mmOpponentCarAudio() override
    {
        stub<member_func_t<void, mmOpponentCarAudio>>(0x4732D0, this);
    }

    // 0x473BB0 | ?GetClass@mmOpponentCarAudio@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmOpponentCarAudio>>(0x473BB0, this);
    }

    // 0x473810 | ?Reset@mmOpponentCarAudio@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmOpponentCarAudio>>(0x473810, this);
    }
};
