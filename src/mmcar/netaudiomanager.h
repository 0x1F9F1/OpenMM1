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
    mmcar:netaudiomanager

    0x46CDA0 | public: __thiscall NetAudioManager::NetAudioManager(void) | ??0NetAudioManager@@QAE@XZ
    0x46CF80 | public: virtual __thiscall NetAudioManager::~NetAudioManager(void) | ??1NetAudioManager@@UAE@XZ
    0x46D340 | public: short __thiscall NetAudioManager::AddVehicle(class mmNetworkCarAudio *) | ?AddVehicle@NetAudioManager@@QAEFPAVmmNetworkCarAudio@@@Z
    0x46D3D0 | public: void __thiscall NetAudioManager::RemoveVehicle(class mmNetworkCarAudio *,short) | ?RemoveVehicle@NetAudioManager@@QAEXPAVmmNetworkCarAudio@@F@Z
    0x46D430 | public: short __thiscall NetAudioManager::FindGreatestDistance(class mmNetworkCarAudio *) | ?FindGreatestDistance@NetAudioManager@@QAEFPAVmmNetworkCarAudio@@@Z
    0x46D4D0 | public: short __thiscall NetAudioManager::FindUnusedSlot(void) | ?FindUnusedSlot@NetAudioManager@@QAEFXZ
    0x46D510 | public: virtual void __thiscall NetAudioManager::Update(void) | ?Update@NetAudioManager@@UAEXXZ
    0x46D6D0 | public: void __thiscall NetAudioManager::EchoOn(float) | ?EchoOn@NetAudioManager@@QAEXM@Z
    0x46DA40 | public: void __thiscall NetAudioManager::EchoOff(void) | ?EchoOff@NetAudioManager@@QAEXXZ
    0x46DBD0 | public: void __thiscall NetAudioManager::AssignSounds(class mmNetworkCarAudio *,short) | ?AssignSounds@NetAudioManager@@QAEXPAVmmNetworkCarAudio@@F@Z
    0x46E510 | private: void __thiscall NetAudioManager::AssignAddOnSounds(class mmNetworkCarAudio *,short) | ?AssignAddOnSounds@NetAudioManager@@AAEXPAVmmNetworkCarAudio@@F@Z
    0x46E730 | public: float __thiscall NetAudioManager::GetAvailableDistance(void) | ?GetAvailableDistance@NetAudioManager@@QAEMXZ
    0x46E770 | public: void __thiscall NetAudioManager::AllocateEngine(short) | ?AllocateEngine@NetAudioManager@@QAEXF@Z
    0x46E8F0 | public: short __thiscall NetAudioManager::AllocateAddOnEngine(char *) | ?AllocateAddOnEngine@NetAudioManager@@QAEFPAD@Z
    0x46EAC0 | public: class AudSound * * __thiscall NetAudioManager::AllocateEngine(char *) | ?AllocateEngine@NetAudioManager@@QAEPAPAVAudSound@@PAD@Z
    0x46EBF0 | public: void __thiscall NetAudioManager::AllocateReverseBeep(void) | ?AllocateReverseBeep@NetAudioManager@@QAEXXZ
    0x46ED40 | public: void __thiscall NetAudioManager::AllocateHorn(short) | ?AllocateHorn@NetAudioManager@@QAEXF@Z
    0x46EF30 | public: void __thiscall NetAudioManager::AllocateSkids(void) | ?AllocateSkids@NetAudioManager@@QAEXXZ
    0x46F1B0 | public: void __thiscall NetAudioManager::AllocateImpacts(void) | ?AllocateImpacts@NetAudioManager@@QAEXXZ
    0x46F240 | public: void __thiscall NetAudioManager::AllocatePoliceSiren(void) | ?AllocatePoliceSiren@NetAudioManager@@QAEXXZ
    0x46F3B0 | public: virtual void * __thiscall NetAudioManager::`vector deleting destructor'(unsigned int) | ??_ENetAudioManager@@UAEPAXI@Z
    0x46F3B0 | public: virtual void * __thiscall NetAudioManager::`scalar deleting destructor'(unsigned int) | ??_GNetAudioManager@@UAEPAXI@Z
    0x46F3E0 | public: void __thiscall EngineAudioOpponent::SetSoundPtr(class AudSound *) | ?SetSoundPtr@EngineAudioOpponent@@QAEXPAVAudSound@@@Z
    0x591200 | const NetAudioManager::`vftable' | ??_7NetAudioManager@@6B@
    0x60A228 | class NetAudioManager * NETAUDMGRPTR | ?NETAUDMGRPTR@@3PAVNetAudioManager@@A
*/

#include "hooking.h"

// 0x60A228 | ?NETAUDMGRPTR@@3PAVNetAudioManager@@A
inline extern_var(0x60A228, class NetAudioManager*, NETAUDMGRPTR);

class NetAudioManager : asNode
{
public:
    // NetAudioManager::`vftable' @ 0x591200

    // 0x46CDA0 | ??0NetAudioManager@@QAE@XZ
    inline NetAudioManager()
    {
        // stub<member_func_t<void, NetAudioManager>>(0x46CDA0, this);

        unimplemented();
    }

    // 0x46D340 | ?AddVehicle@NetAudioManager@@QAEFPAVmmNetworkCarAudio@@@Z
    inline int16_t AddVehicle(class mmNetworkCarAudio* arg1)
    {
        return stub<member_func_t<int16_t, NetAudioManager, class mmNetworkCarAudio*>>(0x46D340, this, arg1);
    }

    // 0x46D3D0 | ?RemoveVehicle@NetAudioManager@@QAEXPAVmmNetworkCarAudio@@F@Z
    inline void RemoveVehicle(class mmNetworkCarAudio* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, NetAudioManager, class mmNetworkCarAudio*, int16_t>>(
            0x46D3D0, this, arg1, arg2);
    }

    // 0x46D430 | ?FindGreatestDistance@NetAudioManager@@QAEFPAVmmNetworkCarAudio@@@Z
    inline int16_t FindGreatestDistance(class mmNetworkCarAudio* arg1)
    {
        return stub<member_func_t<int16_t, NetAudioManager, class mmNetworkCarAudio*>>(0x46D430, this, arg1);
    }

    // 0x46D4D0 | ?FindUnusedSlot@NetAudioManager@@QAEFXZ
    inline int16_t FindUnusedSlot()
    {
        return stub<member_func_t<int16_t, NetAudioManager>>(0x46D4D0, this);
    }

    // 0x46D6D0 | ?EchoOn@NetAudioManager@@QAEXM@Z
    inline void EchoOn(float arg1)
    {
        return stub<member_func_t<void, NetAudioManager, float>>(0x46D6D0, this, arg1);
    }

    // 0x46DA40 | ?EchoOff@NetAudioManager@@QAEXXZ
    inline void EchoOff()
    {
        return stub<member_func_t<void, NetAudioManager>>(0x46DA40, this);
    }

    // 0x46DBD0 | ?AssignSounds@NetAudioManager@@QAEXPAVmmNetworkCarAudio@@F@Z
    inline void AssignSounds(class mmNetworkCarAudio* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, NetAudioManager, class mmNetworkCarAudio*, int16_t>>(
            0x46DBD0, this, arg1, arg2);
    }

    // 0x46E510 | ?AssignAddOnSounds@NetAudioManager@@AAEXPAVmmNetworkCarAudio@@F@Z
    inline void AssignAddOnSounds(class mmNetworkCarAudio* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, NetAudioManager, class mmNetworkCarAudio*, int16_t>>(
            0x46E510, this, arg1, arg2);
    }

    // 0x46E730 | ?GetAvailableDistance@NetAudioManager@@QAEMXZ
    inline float GetAvailableDistance()
    {
        return stub<member_func_t<float, NetAudioManager>>(0x46E730, this);
    }

    // 0x46E770 | ?AllocateEngine@NetAudioManager@@QAEXF@Z
    inline void AllocateEngine(int16_t arg1)
    {
        return stub<member_func_t<void, NetAudioManager, int16_t>>(0x46E770, this, arg1);
    }

    // 0x46E8F0 | ?AllocateAddOnEngine@NetAudioManager@@QAEFPAD@Z
    inline int16_t AllocateAddOnEngine(char* arg1)
    {
        return stub<member_func_t<int16_t, NetAudioManager, char*>>(0x46E8F0, this, arg1);
    }

    // 0x46EAC0 | ?AllocateEngine@NetAudioManager@@QAEPAPAVAudSound@@PAD@Z
    inline class AudSound** AllocateEngine(char* arg1)
    {
        return stub<member_func_t<class AudSound**, NetAudioManager, char*>>(0x46EAC0, this, arg1);
    }

    // 0x46EBF0 | ?AllocateReverseBeep@NetAudioManager@@QAEXXZ
    inline void AllocateReverseBeep()
    {
        return stub<member_func_t<void, NetAudioManager>>(0x46EBF0, this);
    }

    // 0x46ED40 | ?AllocateHorn@NetAudioManager@@QAEXF@Z
    inline void AllocateHorn(int16_t arg1)
    {
        return stub<member_func_t<void, NetAudioManager, int16_t>>(0x46ED40, this, arg1);
    }

    // 0x46EF30 | ?AllocateSkids@NetAudioManager@@QAEXXZ
    inline void AllocateSkids()
    {
        return stub<member_func_t<void, NetAudioManager>>(0x46EF30, this);
    }

    // 0x46F1B0 | ?AllocateImpacts@NetAudioManager@@QAEXXZ
    inline void AllocateImpacts()
    {
        return stub<member_func_t<void, NetAudioManager>>(0x46F1B0, this);
    }

    // 0x46F240 | ?AllocatePoliceSiren@NetAudioManager@@QAEXXZ
    inline void AllocatePoliceSiren()
    {
        return stub<member_func_t<void, NetAudioManager>>(0x46F240, this);
    }

    // 0x46CF80 | ??1NetAudioManager@@UAE@XZ
    inline ~NetAudioManager() override = 0
    {
        // stub<member_func_t<void, NetAudioManager>>(0x46CF80, this);

        unimplemented();
    }

    // 0x46D510 | ?Update@NetAudioManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, NetAudioManager>>(0x46D510, this);
    }
};
