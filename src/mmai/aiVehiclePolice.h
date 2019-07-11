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

// mmai:aiVehiclePolice

#include "hooking.h"

class aiVehiclePolice : aiVehicleSpline
{
public:
    // aiVehiclePolice::`vftable' @ 0x590658

    // 0x436CA0 | ??_EaiVehiclePolice@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x43EDB0 | ??0aiVehiclePolice@@QAE@XZ
    inline aiVehiclePolice()
    {
        stub<member_func_t<void, aiVehiclePolice>>(0x43EDB0, this);
    }

    // 0x43EE10 | ??1aiVehiclePolice@@QAE@XZ
    inline ~aiVehiclePolice()
    {
        stub<member_func_t<void, aiVehiclePolice>>(0x43EE10, this);
    }

    // 0x43EF50 | ?Init@aiVehiclePolice@@QAEXHPAVaiRaceData@@@Z
    inline void Init(int32_t arg1, class aiRaceData* arg2)
    {
        return stub<member_func_t<void, aiVehiclePolice, int32_t, class aiRaceData*>>(0x43EF50, this, arg1, arg2);
    }

    // 0x43F7F0 | ?ResetPed@aiVehiclePolice@@QAEXXZ
    inline void ResetPed()
    {
        return stub<member_func_t<void, aiVehiclePolice>>(0x43F7F0, this);
    }

    // 0x43FFF0 | ?InPersuit@aiVehiclePolice@@QAEHXZ
    inline int32_t InPersuit()
    {
        return stub<member_func_t<int32_t, aiVehiclePolice>>(0x43FFF0, this);
    }

    // 0x440020 | ?IsPerpInRange@aiVehiclePolice@@QAEHPAVmmCar@@@Z
    inline int32_t IsPerpInRange(class mmCar* arg1)
    {
        return stub<member_func_t<int32_t, aiVehiclePolice, class mmCar*>>(0x440020, this, arg1);
    }

    // 0x440290 | ?FindPerp@aiVehiclePolice@@AAEHHHPAVaiPath@@HH@Z
    inline int32_t FindPerp(int32_t arg1, int32_t arg2, class aiPath* arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<int32_t, aiVehiclePolice, int32_t, int32_t, class aiPath*, int32_t, int32_t>>(
            0x440290, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4403D0 | ?PerpEscapes@aiVehiclePolice@@QAEXE@Z
    inline void PerpEscapes(uint8_t arg1)
    {
        return stub<member_func_t<void, aiVehiclePolice, uint8_t>>(0x4403D0, this, arg1);
    }

    // 0x440440 | ?ConfigCar@aiVehiclePolice@@QAEXXZ
    inline void ConfigCar()
    {
        return stub<member_func_t<void, aiVehiclePolice>>(0x440440, this);
    }

    // 0x440540 | ?Backup@aiVehiclePolice@@QAEXXZ
    inline void Backup()
    {
        return stub<member_func_t<void, aiVehiclePolice>>(0x440540, this);
    }

    // 0x440560 | ?DrawTargetPt@aiVehiclePolice@@QAEXXZ
    inline void DrawTargetPt()
    {
        return stub<member_func_t<void, aiVehiclePolice>>(0x440560, this);
    }

    // 0x440570 | ?DrawDamage@aiVehiclePolice@@QAEXXZ
    inline void DrawDamage()
    {
        return stub<member_func_t<void, aiVehiclePolice>>(0x440570, this);
    }

    // 0x440590 | ?UnAssignSounds@aiVehiclePolice@@QAEXXZ
    inline void UnAssignSounds()
    {
        return stub<member_func_t<void, aiVehiclePolice>>(0x440590, this);
    }

    // 0x4405B0 | ?GetCarAudioPtr@aiVehiclePolice@@QAEPAVmmPoliceCarAudio@@XZ
    inline class mmPoliceCarAudio* GetCarAudioPtr()
    {
        return stub<member_func_t<class mmPoliceCarAudio*, aiVehiclePolice>>(0x4405B0, this);
    }

    // 0x4405C0 | ?GetEngineSoundIndex@aiVehiclePolice@@QAEHXZ
    inline int32_t GetEngineSoundIndex()
    {
        return stub<member_func_t<int32_t, aiVehiclePolice>>(0x4405C0, this);
    }

    // 0x4405D0 | ?SetMainSirenLoop@aiVehiclePolice@@QAEXH@Z
    inline void SetMainSirenLoop(int32_t arg1)
    {
        return stub<member_func_t<void, aiVehiclePolice, int32_t>>(0x4405D0, this, arg1);
    }

    // 0x4405F0 | ?UpdateAudio@aiVehiclePolice@@QAEXXZ
    inline void UpdateAudio()
    {
        return stub<member_func_t<void, aiVehiclePolice>>(0x4405F0, this);
    }

    // 0x4406B0 | ?GetDistanceToPlayer2@aiVehiclePolice@@QAEMXZ
    inline float GetDistanceToPlayer2()
    {
        return stub<member_func_t<float, aiVehiclePolice>>(0x4406B0, this);
    }

    // 0x4406C0 | ?PlayVoice@aiVehiclePolice@@QAEXXZ
    inline void PlayVoice()
    {
        return stub<member_func_t<void, aiVehiclePolice>>(0x4406C0, this);
    }

    // 0x4406D0 | ?SetAudioMinDistance@aiVehiclePolice@@QAEXM@Z
    inline void SetAudioMinDistance(float arg1)
    {
        return stub<member_func_t<void, aiVehiclePolice, float>>(0x4406D0, this, arg1);
    }

    // 0x4406F0 | ?SetAudioMaxDistance@aiVehiclePolice@@QAEXM@Z
    inline void SetAudioMaxDistance(float arg1)
    {
        return stub<member_func_t<void, aiVehiclePolice, float>>(0x4406F0, this, arg1);
    }

    // 0x440720 | ?SetAudioCloserMinDistMult@aiVehiclePolice@@QAEXM@Z
    inline void SetAudioCloserMinDistMult(float arg1)
    {
        return stub<member_func_t<void, aiVehiclePolice, float>>(0x440720, this, arg1);
    }

    // 0x440740 | ?AddToAiAudMgr@aiVehiclePolice@@AAEXXZ
    inline void AddToAiAudMgr()
    {
        return stub<member_func_t<void, aiVehiclePolice>>(0x440740, this);
    }

    // 0x4407B0 | ?AssignSounds@aiVehiclePolice@@QAEXPAVAudSound@@000PAVmmOpponentImpactAudio@@0@Z
    inline void AssignSounds(class AudSound* arg1, class AudSound* arg2, class AudSound* arg3, class AudSound* arg4,
        class mmOpponentImpactAudio* arg5, class AudSound* arg6)
    {
        return stub<member_func_t<void, aiVehiclePolice, class AudSound*, class AudSound*, class AudSound*,
            class AudSound*, class mmOpponentImpactAudio*, class AudSound*>>(
            0x4407B0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4407E0 | ?GetAudioPtr@aiVehiclePolice@@QAEPAVmmPoliceCarAudio@@XZ
    inline class mmPoliceCarAudio* GetAudioPtr()
    {
        return stub<member_func_t<class mmPoliceCarAudio*, aiVehiclePolice>>(0x4407E0, this);
    }

    // 0x4407F0 | ?Dump@aiVehiclePolice@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiVehiclePolice>>(0x4407F0, this);
    }

    // 0x43F9F0 | ?Update@aiVehiclePolice@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiVehiclePolice>>(0x43F9F0, this);
    }

    // 0x43F160 | ?Reset@aiVehiclePolice@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiVehiclePolice>>(0x43F160, this);
    }

    // 0x440A60 | ?Type@aiVehiclePolice@@UAEHXZ
    inline int32_t Type() override
    {
        return stub<member_func_t<int32_t, aiVehiclePolice>>(0x440A60, this);
    }

    // 0x440580 | ?DrawId@aiVehiclePolice@@UAEXXZ
    inline void DrawId() override
    {
        return stub<member_func_t<void, aiVehiclePolice>>(0x440580, this);
    }
};
