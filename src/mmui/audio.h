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
    mmui:audio

    0x491390 | public: __thiscall AudioOptions::AudioOptions(int) | ??0AudioOptions@@QAE@H@Z
    0x491C70 | public: virtual __thiscall AudioOptions::~AudioOptions(void) | ??1AudioOptions@@UAE@XZ
    0x491D00 | public: virtual void __thiscall AudioOptions::PreSetup(void) | ?PreSetup@AudioOptions@@UAEXXZ
    0x491D10 | public: void __thiscall AudioOptions::SetWaveVolume(void) | ?SetWaveVolume@AudioOptions@@QAEXXZ
    0x491D30 | public: void __thiscall AudioOptions::SetCDVolume(void) | ?SetCDVolume@AudioOptions@@QAEXXZ
    0x491D50 | public: void __thiscall AudioOptions::SetBalance(void) | ?SetBalance@AudioOptions@@QAEXXZ
    0x491D80 | public: void __thiscall AudioOptions::SetQuality(void) | ?SetQuality@AudioOptions@@QAEXXZ
    0x491E50 | public: void __thiscall AudioOptions::SetStereoFX(void) | ?SetStereoFX@AudioOptions@@QAEXXZ
    0x491ED0 | public: virtual void __thiscall AudioOptions::StoreCurrentSetup(void) | ?StoreCurrentSetup@AudioOptions@@UAEXXZ
    0x491EE0 | public: virtual void __thiscall AudioOptions::ResetDefaultAction(void) | ?ResetDefaultAction@AudioOptions@@UAEXXZ
    0x491F60 | public: virtual void __thiscall AudioOptions::CancelAction(void) | ?CancelAction@AudioOptions@@UAEXXZ
    0x491FE0 | public: virtual void __thiscall AudioOptions::DoneAction(void) | ?DoneAction@AudioOptions@@UAEXXZ
    0x491FF0 | public: void __thiscall AudioOptions::SetAudioState(void) | ?SetAudioState@AudioOptions@@QAEXXZ
    0x492200 | public: void __thiscall AudioOptions::SetCDMusic(void) | ?SetCDMusic@AudioOptions@@QAEXXZ
    0x492230 | public: void __thiscall AudioOptions::SetSoundFX(void) | ?SetSoundFX@AudioOptions@@QAEXXZ
    0x492260 | public: void __thiscall AudioOptions::SetCommentary(void) | ?SetCommentary@AudioOptions@@QAEXXZ
    0x492290 | public: int __thiscall AudioOptions::FindDevice(char *) | ?FindDevice@AudioOptions@@QAEHPAD@Z
    0x492320 | public: char * __thiscall AudioOptions::GetCurrentDeviceName(void) | ?GetCurrentDeviceName@AudioOptions@@QAEPADXZ
    0x492340 | public: void __thiscall AudioOptions::ResetStereo(void) | ?ResetStereo@AudioOptions@@QAEXXZ
    0x492370 | public: void __thiscall AudioOptions::ResetSoundFX(void) | ?ResetSoundFX@AudioOptions@@QAEXXZ
    0x4923A0 | public: void __thiscall AudioOptions::ResetCDMusic(void) | ?ResetCDMusic@AudioOptions@@QAEXXZ
    0x4923D0 | public: void __thiscall AudioOptions::ResetSoundQuality(void) | ?ResetSoundQuality@AudioOptions@@QAEXXZ
    0x492430 | public: void __thiscall AudioOptions::ResetCommentary(void) | ?ResetCommentary@AudioOptions@@QAEXXZ
    0x492460 | public: void __thiscall AudioOptions::SetDevice(int) | ?SetDevice@AudioOptions@@QAEXH@Z
    0x492510 | public: virtual void * __thiscall AudioOptions::`vector deleting destructor'(unsigned int) | ??_EAudioOptions@@UAEPAXI@Z
    0x492510 | public: virtual void * __thiscall AudioOptions::`scalar deleting destructor'(unsigned int) | ??_GAudioOptions@@UAEPAXI@Z
    0x592380 | const AudioOptions::`vftable' | ??_7AudioOptions@@6B@
*/

#include "hooking.h"

struct AudioOptions : OptionsBase
{
public:
    // AudioOptions::`vftable' @ 0x592380

    // 0x491390 | ??0AudioOptions@@QAE@H@Z
    inline AudioOptions(int32_t arg1)
    {
        // stub<member_func_t<void, AudioOptions, int32_t>>(0x491390, this, arg1);

        unimplemented();
    }

    // 0x491D10 | ?SetWaveVolume@AudioOptions@@QAEXXZ
    inline void SetWaveVolume()
    {
        return stub<member_func_t<void, AudioOptions>>(0x491D10, this);
    }

    // 0x491D30 | ?SetCDVolume@AudioOptions@@QAEXXZ
    inline void SetCDVolume()
    {
        return stub<member_func_t<void, AudioOptions>>(0x491D30, this);
    }

    // 0x491D50 | ?SetBalance@AudioOptions@@QAEXXZ
    inline void SetBalance()
    {
        return stub<member_func_t<void, AudioOptions>>(0x491D50, this);
    }

    // 0x491D80 | ?SetQuality@AudioOptions@@QAEXXZ
    inline void SetQuality()
    {
        return stub<member_func_t<void, AudioOptions>>(0x491D80, this);
    }

    // 0x491E50 | ?SetStereoFX@AudioOptions@@QAEXXZ
    inline void SetStereoFX()
    {
        return stub<member_func_t<void, AudioOptions>>(0x491E50, this);
    }

    // 0x491FF0 | ?SetAudioState@AudioOptions@@QAEXXZ
    inline void SetAudioState()
    {
        return stub<member_func_t<void, AudioOptions>>(0x491FF0, this);
    }

    // 0x492200 | ?SetCDMusic@AudioOptions@@QAEXXZ
    inline void SetCDMusic()
    {
        return stub<member_func_t<void, AudioOptions>>(0x492200, this);
    }

    // 0x492230 | ?SetSoundFX@AudioOptions@@QAEXXZ
    inline void SetSoundFX()
    {
        return stub<member_func_t<void, AudioOptions>>(0x492230, this);
    }

    // 0x492260 | ?SetCommentary@AudioOptions@@QAEXXZ
    inline void SetCommentary()
    {
        return stub<member_func_t<void, AudioOptions>>(0x492260, this);
    }

    // 0x492290 | ?FindDevice@AudioOptions@@QAEHPAD@Z
    inline int32_t FindDevice(char* arg1)
    {
        return stub<member_func_t<int32_t, AudioOptions, char*>>(0x492290, this, arg1);
    }

    // 0x492320 | ?GetCurrentDeviceName@AudioOptions@@QAEPADXZ
    inline char* GetCurrentDeviceName()
    {
        return stub<member_func_t<char*, AudioOptions>>(0x492320, this);
    }

    // 0x492340 | ?ResetStereo@AudioOptions@@QAEXXZ
    inline void ResetStereo()
    {
        return stub<member_func_t<void, AudioOptions>>(0x492340, this);
    }

    // 0x492370 | ?ResetSoundFX@AudioOptions@@QAEXXZ
    inline void ResetSoundFX()
    {
        return stub<member_func_t<void, AudioOptions>>(0x492370, this);
    }

    // 0x4923A0 | ?ResetCDMusic@AudioOptions@@QAEXXZ
    inline void ResetCDMusic()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4923A0, this);
    }

    // 0x4923D0 | ?ResetSoundQuality@AudioOptions@@QAEXXZ
    inline void ResetSoundQuality()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4923D0, this);
    }

    // 0x492430 | ?ResetCommentary@AudioOptions@@QAEXXZ
    inline void ResetCommentary()
    {
        return stub<member_func_t<void, AudioOptions>>(0x492430, this);
    }

    // 0x492460 | ?SetDevice@AudioOptions@@QAEXH@Z
    inline void SetDevice(int32_t arg1)
    {
        return stub<member_func_t<void, AudioOptions, int32_t>>(0x492460, this, arg1);
    }

    // 0x491C70 | ??1AudioOptions@@UAE@XZ
    inline ~AudioOptions() override = 0
    {
        // stub<member_func_t<void, AudioOptions>>(0x491C70, this);

        unimplemented();
    }

    // 0x491D00 | ?PreSetup@AudioOptions@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, AudioOptions>>(0x491D00, this);
    }

    // 0x491F60 | ?CancelAction@AudioOptions@@UAEXXZ
    inline void CancelAction() override
    {
        return stub<member_func_t<void, AudioOptions>>(0x491F60, this);
    }

    // 0x491FE0 | ?DoneAction@AudioOptions@@UAEXXZ
    inline void DoneAction() override
    {
        return stub<member_func_t<void, AudioOptions>>(0x491FE0, this);
    }

    // 0x491EE0 | ?ResetDefaultAction@AudioOptions@@UAEXXZ
    inline void ResetDefaultAction() override
    {
        return stub<member_func_t<void, AudioOptions>>(0x491EE0, this);
    }

    // 0x491ED0 | ?StoreCurrentSetup@AudioOptions@@UAEXXZ
    inline void StoreCurrentSetup() override
    {
        return stub<member_func_t<void, AudioOptions>>(0x491ED0, this);
    }
};
