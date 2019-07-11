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

// mmai:aiaudiomanager

#include "hooking.h"

// 0x609D0C | ?AIAUDMGRPTR@@3PAVaiAudioManager@@A
inline extern_var(0x609D0C, class aiAudioManager*, AIAUDMGRPTR);

class aiAudioManager : asNode
{
public:
    // aiAudioManager::`vftable' @ 0x5904F0

    // 0x43A830 | ??0aiAudioManager@@QAE@XZ
    inline aiAudioManager()
    {
        stub<member_func_t<void, aiAudioManager>>(0x43A830, this);
    }

    // 0x43AF30 | ?AddVehicle@aiAudioManager@@QAEFPAVaiVehicleAmbient@@@Z
    inline int16_t AddVehicle(class aiVehicleAmbient* arg1)
    {
        return stub<member_func_t<int16_t, aiAudioManager, class aiVehicleAmbient*>>(0x43AF30, this, arg1);
    }

    // 0x43AFD0 | ?AddVehicle@aiAudioManager@@QAEFPAVaiVehicleOpponent@@@Z
    inline int16_t AddVehicle(class aiVehicleOpponent* arg1)
    {
        return stub<member_func_t<int16_t, aiAudioManager, class aiVehicleOpponent*>>(0x43AFD0, this, arg1);
    }

    // 0x43B070 | ?AddVehicle@aiAudioManager@@QAEFPAVaiVehiclePolice@@@Z
    inline int16_t AddVehicle(class aiVehiclePolice* arg1)
    {
        return stub<member_func_t<int16_t, aiAudioManager, class aiVehiclePolice*>>(0x43B070, this, arg1);
    }

    // 0x43B110 | ?RemoveVehicle@aiAudioManager@@QAEXPAVaiVehicleAmbient@@F@Z
    inline void RemoveVehicle(class aiVehicleAmbient* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, aiAudioManager, class aiVehicleAmbient*, int16_t>>(0x43B110, this, arg1, arg2);
    }

    // 0x43B170 | ?RemoveVehicle@aiAudioManager@@QAEXPAVaiVehicleOpponent@@F@Z
    inline void RemoveVehicle(class aiVehicleOpponent* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, aiAudioManager, class aiVehicleOpponent*, int16_t>>(0x43B170, this, arg1, arg2);
    }

    // 0x43B1D0 | ?RemoveVehicle@aiAudioManager@@QAEXPAVaiVehiclePolice@@F@Z
    inline void RemoveVehicle(class aiVehiclePolice* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, aiAudioManager, class aiVehiclePolice*, int16_t>>(0x43B1D0, this, arg1, arg2);
    }

    // 0x43B230 | ?FindGreatestDistance@aiAudioManager@@QAEFPAVaiVehicleAmbient@@@Z
    inline int16_t FindGreatestDistance(class aiVehicleAmbient* arg1)
    {
        return stub<member_func_t<int16_t, aiAudioManager, class aiVehicleAmbient*>>(0x43B230, this, arg1);
    }

    // 0x43B420 | ?FindGreatestDistance@aiAudioManager@@QAEFPAVaiVehicleOpponent@@@Z
    inline int16_t FindGreatestDistance(class aiVehicleOpponent* arg1)
    {
        return stub<member_func_t<int16_t, aiAudioManager, class aiVehicleOpponent*>>(0x43B420, this, arg1);
    }

    // 0x43B610 | ?FindGreatestDistance@aiAudioManager@@QAEFPAVaiVehiclePolice@@@Z
    inline int16_t FindGreatestDistance(class aiVehiclePolice* arg1)
    {
        return stub<member_func_t<int16_t, aiAudioManager, class aiVehiclePolice*>>(0x43B610, this, arg1);
    }

    // 0x43B870 | ?UnassignFurthestAmbient@aiAudioManager@@QAEFXZ
    inline int16_t UnassignFurthestAmbient()
    {
        return stub<member_func_t<int16_t, aiAudioManager>>(0x43B870, this);
    }

    // 0x43B920 | ?UnassignFurthestOpponent@aiAudioManager@@QAEFXZ
    inline int16_t UnassignFurthestOpponent()
    {
        return stub<member_func_t<int16_t, aiAudioManager>>(0x43B920, this);
    }

    // 0x43B9E0 | ?FindUnusedSlot@aiAudioManager@@QAEFXZ
    inline int16_t FindUnusedSlot()
    {
        return stub<member_func_t<int16_t, aiAudioManager>>(0x43B9E0, this);
    }

    // 0x43BD80 | ?EchoOn@aiAudioManager@@QAEXM@Z
    inline void EchoOn(float arg1)
    {
        return stub<member_func_t<void, aiAudioManager, float>>(0x43BD80, this, arg1);
    }

    // 0x43C0D0 | ?EchoOff@aiAudioManager@@QAEXXZ
    inline void EchoOff()
    {
        return stub<member_func_t<void, aiAudioManager>>(0x43C0D0, this);
    }

    // 0x43C260 | ?AssignSounds@aiAudioManager@@QAEXPAVaiVehicleOpponent@@F@Z
    inline void AssignSounds(class aiVehicleOpponent* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, aiAudioManager, class aiVehicleOpponent*, int16_t>>(0x43C260, this, arg1, arg2);
    }

    // 0x43C650 | ?AssignAddOnSounds@aiAudioManager@@QAEXPAVaiVehicleOpponent@@F@Z
    inline void AssignAddOnSounds(class aiVehicleOpponent* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, aiAudioManager, class aiVehicleOpponent*, int16_t>>(0x43C650, this, arg1, arg2);
    }

    // 0x43C750 | ?AssignSounds@aiAudioManager@@QAEXPAVaiVehiclePolice@@F@Z
    inline void AssignSounds(class aiVehiclePolice* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, aiAudioManager, class aiVehiclePolice*, int16_t>>(0x43C750, this, arg1, arg2);
    }

    // 0x43CD30 | ?AssignSounds@aiAudioManager@@QAEXPAVaiVehicleAmbient@@F@Z
    inline void AssignSounds(class aiVehicleAmbient* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, aiAudioManager, class aiVehicleAmbient*, int16_t>>(0x43CD30, this, arg1, arg2);
    }

    // 0x43CF20 | ?AllocateAmbients@aiAudioManager@@QAEXXZ
    inline void AllocateAmbients()
    {
        return stub<member_func_t<void, aiAudioManager>>(0x43CF20, this);
    }

    // 0x43CF70 | ?AllocateOpponents@aiAudioManager@@QAEXXZ
    inline void AllocateOpponents()
    {
        return stub<member_func_t<void, aiAudioManager>>(0x43CF70, this);
    }

    // 0x43CFC0 | ?AllocatePolice@aiAudioManager@@QAEXXZ
    inline void AllocatePolice()
    {
        return stub<member_func_t<void, aiAudioManager>>(0x43CFC0, this);
    }

    // 0x43D2F0 | ?AllocateSkids@aiAudioManager@@QAEXXZ
    inline void AllocateSkids()
    {
        return stub<member_func_t<void, aiAudioManager>>(0x43D2F0, this);
    }

    // 0x43D580 | ?AllocateCopVoice@aiAudioManager@@QAEXXZ
    inline void AllocateCopVoice()
    {
        return stub<member_func_t<void, aiAudioManager>>(0x43D580, this);
    }

    // 0x43D660 | ?LoadCopVoice@aiAudioManager@@QAEXXZ
    inline void LoadCopVoice()
    {
        return stub<member_func_t<void, aiAudioManager>>(0x43D660, this);
    }

    // 0x43D760 | ?CatName@aiAudioManager@@AAEPADPADHH@Z
    inline char* CatName(char* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<char*, aiAudioManager, char*, int32_t, int32_t>>(0x43D760, this, arg1, arg2, arg3);
    }

    // 0x43D960 | ?AllocateImpacts@aiAudioManager@@QAEXXZ
    inline void AllocateImpacts()
    {
        return stub<member_func_t<void, aiAudioManager>>(0x43D960, this);
    }

    // 0x43DA10 | ?AllocateHorns@aiAudioManager@@QAEXXZ
    inline void AllocateHorns()
    {
        return stub<member_func_t<void, aiAudioManager>>(0x43DA10, this);
    }

    // 0x43DBE0 | ?AllocateVoices@aiAudioManager@@QAEXXZ
    inline void AllocateVoices()
    {
        return stub<member_func_t<void, aiAudioManager>>(0x43DBE0, this);
    }

    // 0x43DDB0 | ?AllocateEngine@aiAudioManager@@QAEXFF@Z
    inline void AllocateEngine(int16_t arg1, int16_t arg2)
    {
        return stub<member_func_t<void, aiAudioManager, int16_t, int16_t>>(0x43DDB0, this, arg1, arg2);
    }

    // 0x43DFC0 | ?AllocateAddOnEngine@aiAudioManager@@QAEFPAD@Z
    inline int16_t AllocateAddOnEngine(char* arg1)
    {
        return stub<member_func_t<int16_t, aiAudioManager, char*>>(0x43DFC0, this, arg1);
    }

    // 0x43E190 | ?AllocateEngine@aiAudioManager@@QAEPAPAVAudSound@@PAD@Z
    inline class AudSound** AllocateEngine(char* arg1)
    {
        return stub<member_func_t<class AudSound**, aiAudioManager, char*>>(0x43E190, this, arg1);
    }

    // 0x43E2D0 | ?AllocateReverseBeep@aiAudioManager@@QAEXXZ
    inline void AllocateReverseBeep()
    {
        return stub<member_func_t<void, aiAudioManager>>(0x43E2D0, this);
    }

    // 0x43E410 | ?QueueInCopVoice@aiAudioManager@@QAEFM@Z
    inline int16_t QueueInCopVoice(float arg1)
    {
        return stub<member_func_t<int16_t, aiAudioManager, float>>(0x43E410, this, arg1);
    }

    // 0x43E470 | ?PlayCopVoice@aiAudioManager@@QAEFXZ
    inline int16_t PlayCopVoice()
    {
        return stub<member_func_t<int16_t, aiAudioManager>>(0x43E470, this);
    }

    // 0x43E4C0 | ?GetClosestCop@aiAudioManager@@QAEFXZ
    inline int16_t GetClosestCop()
    {
        return stub<member_func_t<int16_t, aiAudioManager>>(0x43E4C0, this);
    }

    // 0x43AB30 | ??1aiAudioManager@@UAE@XZ
    inline ~aiAudioManager() override
    {
        stub<member_func_t<void, aiAudioManager>>(0x43AB30, this);
    }

    // 0x43BA20 | ?Update@aiAudioManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiAudioManager>>(0x43BA20, this);
    }
};
