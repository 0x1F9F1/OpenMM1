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
    mmui:pu_audio

    0x49F380 | public: __thiscall PUAudioOptions::PUAudioOptions(int,float,float,float,float) | ??0PUAudioOptions@@QAE@HMMMM@Z
    0x49F5C0 | public: virtual __thiscall PUAudioOptions::~PUAudioOptions(void) | ??1PUAudioOptions@@UAE@XZ
    0x49F5D0 | public: void __thiscall PUAudioOptions::SetWaveVolume(void) | ?SetWaveVolume@PUAudioOptions@@QAEXXZ
    0x49F5F0 | public: void __thiscall PUAudioOptions::SetCDVolume(void) | ?SetCDVolume@PUAudioOptions@@QAEXXZ
    0x49F610 | public: void __thiscall PUAudioOptions::SetBalance(void) | ?SetBalance@PUAudioOptions@@QAEXXZ
    0x49F640 | public: virtual void __thiscall PUAudioOptions::PreSetup(void) | ?PreSetup@PUAudioOptions@@UAEXXZ
    0x49F650 | public: void __thiscall PUAudioOptions::CancelAction(void) | ?CancelAction@PUAudioOptions@@QAEXXZ
    0x49F660 | public: virtual void * __thiscall PUAudioOptions::`scalar deleting destructor'(unsigned int) | ??_GPUAudioOptions@@UAEPAXI@Z
    0x49F660 | public: virtual void * __thiscall PUAudioOptions::`vector deleting destructor'(unsigned int) | ??_EPUAudioOptions@@UAEPAXI@Z
    0x592E08 | const PUAudioOptions::`vftable' | ??_7PUAudioOptions@@6B@
    0x667C88 | class mmPlayerConfig * PUOptionsConfig | ?PUOptionsConfig@@3PAVmmPlayerConfig@@A
*/

#include "hooking.h"

// 0x667C88 | ?PUOptionsConfig@@3PAVmmPlayerConfig@@A
inline extern_var(0x667C88, class mmPlayerConfig*, PUOptionsConfig);

struct PUAudioOptions : PUMenuBase
{
public:
    // PUAudioOptions::`vftable' @ 0x592E08

    // 0x49F380 | ??0PUAudioOptions@@QAE@HMMMM@Z
    inline PUAudioOptions(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        stub<member_func_t<void, PUAudioOptions, int32_t, float, float, float, float>>(
            0x49F380, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x49F5D0 | ?SetWaveVolume@PUAudioOptions@@QAEXXZ
    inline void SetWaveVolume()
    {
        return stub<member_func_t<void, PUAudioOptions>>(0x49F5D0, this);
    }

    // 0x49F5F0 | ?SetCDVolume@PUAudioOptions@@QAEXXZ
    inline void SetCDVolume()
    {
        return stub<member_func_t<void, PUAudioOptions>>(0x49F5F0, this);
    }

    // 0x49F610 | ?SetBalance@PUAudioOptions@@QAEXXZ
    inline void SetBalance()
    {
        return stub<member_func_t<void, PUAudioOptions>>(0x49F610, this);
    }

    // 0x49F650 | ?CancelAction@PUAudioOptions@@QAEXXZ
    inline void CancelAction()
    {
        return stub<member_func_t<void, PUAudioOptions>>(0x49F650, this);
    }

    // 0x49F5C0 | ??1PUAudioOptions@@UAE@XZ
    inline ~PUAudioOptions() override = 0
    {
        // stub<member_func_t<void, PUAudioOptions>>(0x49F5C0, this);

        unimplemented();
    }

    // 0x49F640 | ?PreSetup@PUAudioOptions@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, PUAudioOptions>>(0x49F640, this);
    }
};
