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
    mmcar:playercaraudio

    0x478A40 | public: __thiscall mmPlayerCarAudio::mmPlayerCarAudio(class mmCarSim *) | ??0mmPlayerCarAudio@@QAE@PAVmmCarSim@@@Z
    0x478AE0 | public: void __thiscall mmPlayerCarAudio::Init(class mmCarSim *) | ?Init@mmPlayerCarAudio@@QAEXPAVmmCarSim@@@Z
    0x478E70 | public: virtual __thiscall mmPlayerCarAudio::~mmPlayerCarAudio(void) | ??1mmPlayerCarAudio@@UAE@XZ
    0x478F60 | public: void __thiscall mmPlayerCarAudio::EchoOn(float) | ?EchoOn@mmPlayerCarAudio@@QAEXM@Z
    0x479080 | public: void __thiscall mmPlayerCarAudio::EchoOff(void) | ?EchoOff@mmPlayerCarAudio@@QAEXXZ
    0x479130 | public: void __thiscall mmPlayerCarAudio::PlayReverseBeep(void) | ?PlayReverseBeep@mmPlayerCarAudio@@QAEXXZ
    0x479190 | public: void __thiscall mmPlayerCarAudio::Update(int,float,float,short) | ?Update@mmPlayerCarAudio@@QAEXHMMF@Z
    0x4793A0 | public: void __thiscall mmPlayerCarAudio::StartSiren(void) | ?StartSiren@mmPlayerCarAudio@@QAEXXZ
    0x479430 | public: void __thiscall mmPlayerCarAudio::StopSiren(void) | ?StopSiren@mmPlayerCarAudio@@QAEXXZ
    0x479470 | public: void __thiscall mmPlayerCarAudio::FluctuateSlowSiren(void) | ?FluctuateSlowSiren@mmPlayerCarAudio@@QAEXXZ
    0x479670 | public: void __thiscall mmPlayerCarAudio::FluctuateFastSiren(void) | ?FluctuateFastSiren@mmPlayerCarAudio@@QAEXXZ
    0x479990 | public: virtual void __thiscall mmPlayerCarAudio::Reset(void) | ?Reset@mmPlayerCarAudio@@UAEXXZ
    0x4799D0 | public: void __thiscall mmPlayerCarAudio::PlayHorn(void) | ?PlayHorn@mmPlayerCarAudio@@QAEXXZ
    0x479A10 | public: void __thiscall mmPlayerCarAudio::SetUpDefault(class mmCarSim *) | ?SetUpDefault@mmPlayerCarAudio@@QAEXPAVmmCarSim@@@Z
    0x479B60 | public: void __thiscall mmPlayerCarAudio::LoadSucessful(void) | ?LoadSucessful@mmPlayerCarAudio@@QAEXXZ
    0x479FC0 | public: static void __cdecl mmPlayerCarAudio::DeclareFields(void) | ?DeclareFields@mmPlayerCarAudio@@SAXXZ
    0x47A1B0 | public: virtual class MetaClass * __thiscall mmPlayerCarAudio::GetClass(void) | ?GetClass@mmPlayerCarAudio@@UAEPAVMetaClass@@XZ
    0x47A2E0 | public: virtual void * __thiscall mmPlayerCarAudio::`vector deleting destructor'(unsigned int) | ??_EmmPlayerCarAudio@@UAEPAXI@Z
    0x47A340 | public: __thiscall mmPlayerCarAudio::mmPlayerCarAudio(void) | ??0mmPlayerCarAudio@@QAE@XZ
    0x591900 | const mmPlayerCarAudio::`vftable' | ??_7mmPlayerCarAudio@@6B@
    0x60A520 | class MetaClass mmPlayerCarAudioMetaClass | ?mmPlayerCarAudioMetaClass@@3VMetaClass@@A
    0x47A070 | void * __cdecl new_mmPlayerCarAudio(int) | ?new_mmPlayerCarAudio@@YAPAXH@Z
    0x47A160 | void __cdecl delete_mmPlayerCarAudio(void *,int) | ?delete_mmPlayerCarAudio@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x60A520 | ?mmPlayerCarAudioMetaClass@@3VMetaClass@@A
inline extern_var(0x60A520, class MetaClass, mmPlayerCarAudioMetaClass);

// 0x47A070 | ?new_mmPlayerCarAudio@@YAPAXH@Z
inline void* new_mmPlayerCarAudio(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x47A070, arg1);
}

// 0x47A160 | ?delete_mmPlayerCarAudio@@YAXPAXH@Z
inline void delete_mmPlayerCarAudio(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x47A160, arg1, arg2);
}

struct mmPlayerCarAudio : asNode
{
public:
    // mmPlayerCarAudio::`vftable' @ 0x591900

    // 0x478A40 | ??0mmPlayerCarAudio@@QAE@PAVmmCarSim@@@Z
    inline mmPlayerCarAudio(class mmCarSim* arg1)
    {
        // stub<member_func_t<void, mmPlayerCarAudio, class mmCarSim*>>(0x478A40, this, arg1);

        unimplemented();
    }

    // 0x478AE0 | ?Init@mmPlayerCarAudio@@QAEXPAVmmCarSim@@@Z
    inline void Init(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, mmPlayerCarAudio, class mmCarSim*>>(0x478AE0, this, arg1);
    }

    // 0x478F60 | ?EchoOn@mmPlayerCarAudio@@QAEXM@Z
    inline void EchoOn(float arg1)
    {
        return stub<member_func_t<void, mmPlayerCarAudio, float>>(0x478F60, this, arg1);
    }

    // 0x479080 | ?EchoOff@mmPlayerCarAudio@@QAEXXZ
    inline void EchoOff()
    {
        return stub<member_func_t<void, mmPlayerCarAudio>>(0x479080, this);
    }

    // 0x479130 | ?PlayReverseBeep@mmPlayerCarAudio@@QAEXXZ
    inline void PlayReverseBeep()
    {
        return stub<member_func_t<void, mmPlayerCarAudio>>(0x479130, this);
    }

    // 0x479190 | ?Update@mmPlayerCarAudio@@QAEXHMMF@Z
    inline void Update(int32_t arg1, float arg2, float arg3, int16_t arg4)
    {
        return stub<member_func_t<void, mmPlayerCarAudio, int32_t, float, float, int16_t>>(
            0x479190, this, arg1, arg2, arg3, arg4);
    }

    // 0x4793A0 | ?StartSiren@mmPlayerCarAudio@@QAEXXZ
    inline void StartSiren()
    {
        return stub<member_func_t<void, mmPlayerCarAudio>>(0x4793A0, this);
    }

    // 0x479430 | ?StopSiren@mmPlayerCarAudio@@QAEXXZ
    inline void StopSiren()
    {
        return stub<member_func_t<void, mmPlayerCarAudio>>(0x479430, this);
    }

    // 0x479470 | ?FluctuateSlowSiren@mmPlayerCarAudio@@QAEXXZ
    inline void FluctuateSlowSiren()
    {
        return stub<member_func_t<void, mmPlayerCarAudio>>(0x479470, this);
    }

    // 0x479670 | ?FluctuateFastSiren@mmPlayerCarAudio@@QAEXXZ
    inline void FluctuateFastSiren()
    {
        return stub<member_func_t<void, mmPlayerCarAudio>>(0x479670, this);
    }

    // 0x4799D0 | ?PlayHorn@mmPlayerCarAudio@@QAEXXZ
    inline void PlayHorn()
    {
        return stub<member_func_t<void, mmPlayerCarAudio>>(0x4799D0, this);
    }

    // 0x479A10 | ?SetUpDefault@mmPlayerCarAudio@@QAEXPAVmmCarSim@@@Z
    inline void SetUpDefault(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, mmPlayerCarAudio, class mmCarSim*>>(0x479A10, this, arg1);
    }

    // 0x479B60 | ?LoadSucessful@mmPlayerCarAudio@@QAEXXZ
    inline void LoadSucessful()
    {
        return stub<member_func_t<void, mmPlayerCarAudio>>(0x479B60, this);
    }

    // 0x479FC0 | ?DeclareFields@mmPlayerCarAudio@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x479FC0);
    }

    // 0x47A340 | ??0mmPlayerCarAudio@@QAE@XZ
    inline mmPlayerCarAudio()
    {
        // stub<member_func_t<void, mmPlayerCarAudio>>(0x47A340, this);

        unimplemented();
    }

    // 0x478E70 | ??1mmPlayerCarAudio@@UAE@XZ
    inline ~mmPlayerCarAudio() override = 0
    {
        // stub<member_func_t<void, mmPlayerCarAudio>>(0x478E70, this);

        unimplemented();
    }

    // 0x47A1B0 | ?GetClass@mmPlayerCarAudio@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmPlayerCarAudio>>(0x47A1B0, this);
    }

    // 0x479990 | ?Reset@mmPlayerCarAudio@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmPlayerCarAudio>>(0x479990, this);
    }
};
