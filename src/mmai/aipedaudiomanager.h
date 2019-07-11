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
    mmai:aipedaudiomanager

    0x4410C0 | public: __thiscall aiPedAudioManager::aiPedAudioManager(void) | ??0aiPedAudioManager@@QAE@XZ
    0x4413C0 | public: virtual __thiscall aiPedAudioManager::~aiPedAudioManager(void) | ??1aiPedAudioManager@@UAE@XZ
    0x441470 | public: short __thiscall aiPedAudioManager::Add(class aiPedestrian *) | ?Add@aiPedAudioManager@@QAEFPAVaiPedestrian@@@Z
    0x441520 | public: void __thiscall aiPedAudioManager::Remove(class aiPedestrian *,short) | ?Remove@aiPedAudioManager@@QAEXPAVaiPedestrian@@F@Z
    0x441590 | public: short __thiscall aiPedAudioManager::FindGreatestDistance(class aiPedestrian *) | ?FindGreatestDistance@aiPedAudioManager@@QAEFPAVaiPedestrian@@@Z
    0x441620 | public: short __thiscall aiPedAudioManager::FindUnusedSlot(void) | ?FindUnusedSlot@aiPedAudioManager@@QAEFXZ
    0x441660 | public: virtual void __thiscall aiPedAudioManager::Update(void) | ?Update@aiPedAudioManager@@UAEXXZ
    0x4416C0 | public: void __thiscall aiPedAudioManager::AssignSounds(short) | ?AssignSounds@aiPedAudioManager@@QAEXF@Z
    0x4416E0 | public: void __thiscall aiPedAudioManager::RandomizeSeconds(float,float) | ?RandomizeSeconds@aiPedAudioManager@@QAEXMM@Z
    0x4416F0 | public: virtual void * __thiscall aiPedAudioManager::`scalar deleting destructor'(unsigned int) | ??_GaiPedAudioManager@@UAEPAXI@Z
    0x4416F0 | public: virtual void * __thiscall aiPedAudioManager::`vector deleting destructor'(unsigned int) | ??_EaiPedAudioManager@@UAEPAXI@Z
    0x590688 | const aiPedAudioManager::`vftable' | ??_7aiPedAudioManager@@6B@
    0x609D4C | class aiPedAudioManager * AIPEDAUDMGRPTR | ?AIPEDAUDMGRPTR@@3PAVaiPedAudioManager@@A
*/

#include "hooking.h"

// 0x609D4C | ?AIPEDAUDMGRPTR@@3PAVaiPedAudioManager@@A
inline extern_var(0x609D4C, class aiPedAudioManager*, AIPEDAUDMGRPTR);

class aiPedAudioManager : asNode
{
public:
    // aiPedAudioManager::`vftable' @ 0x590688

    // 0x4410C0 | ??0aiPedAudioManager@@QAE@XZ
    inline aiPedAudioManager()
    {
        stub<member_func_t<void, aiPedAudioManager>>(0x4410C0, this);
    }

    // 0x441470 | ?Add@aiPedAudioManager@@QAEFPAVaiPedestrian@@@Z
    inline int16_t Add(class aiPedestrian* arg1)
    {
        return stub<member_func_t<int16_t, aiPedAudioManager, class aiPedestrian*>>(0x441470, this, arg1);
    }

    // 0x441520 | ?Remove@aiPedAudioManager@@QAEXPAVaiPedestrian@@F@Z
    inline void Remove(class aiPedestrian* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, aiPedAudioManager, class aiPedestrian*, int16_t>>(0x441520, this, arg1, arg2);
    }

    // 0x441590 | ?FindGreatestDistance@aiPedAudioManager@@QAEFPAVaiPedestrian@@@Z
    inline int16_t FindGreatestDistance(class aiPedestrian* arg1)
    {
        return stub<member_func_t<int16_t, aiPedAudioManager, class aiPedestrian*>>(0x441590, this, arg1);
    }

    // 0x441620 | ?FindUnusedSlot@aiPedAudioManager@@QAEFXZ
    inline int16_t FindUnusedSlot()
    {
        return stub<member_func_t<int16_t, aiPedAudioManager>>(0x441620, this);
    }

    // 0x4416C0 | ?AssignSounds@aiPedAudioManager@@QAEXF@Z
    inline void AssignSounds(int16_t arg1)
    {
        return stub<member_func_t<void, aiPedAudioManager, int16_t>>(0x4416C0, this, arg1);
    }

    // 0x4416E0 | ?RandomizeSeconds@aiPedAudioManager@@QAEXMM@Z
    inline void RandomizeSeconds(float arg1, float arg2)
    {
        return stub<member_func_t<void, aiPedAudioManager, float, float>>(0x4416E0, this, arg1, arg2);
    }

    // 0x4413C0 | ??1aiPedAudioManager@@UAE@XZ
    inline ~aiPedAudioManager() override
    {
        stub<member_func_t<void, aiPedAudioManager>>(0x4413C0, this);
    }

    // 0x441660 | ?Update@aiPedAudioManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiPedAudioManager>>(0x441660, this);
    }
};
