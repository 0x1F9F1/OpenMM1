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

// mmaudio:audstream

#include "hooking.h"

class AudStream : asNode
{
public:
    // AudStream::`vftable' @ 0x594A00

    // 0x4E61C0 | ??0AudStream@@QAE@KHF@Z
    inline AudStream(uint32_t arg1, int32_t arg2, int16_t arg3)
    {
        stub<member_func_t<void, AudStream, uint32_t, int32_t, int16_t>>(0x4E61C0, this, arg1, arg2, arg3);
    }

    // 0x4E6400 | ?SetPriority@AudStream@@QAEXH@Z
    inline void SetPriority(int32_t arg1)
    {
        return stub<member_func_t<void, AudStream, int32_t>>(0x4E6400, this, arg1);
    }

    // 0x4E6420 | ?DeallocateStreamObjs@AudStream@@QAEXXZ
    inline void DeallocateStreamObjs()
    {
        return stub<member_func_t<void, AudStream>>(0x4E6420, this);
    }

    // 0x4E64B0 | ?ReallocateStreamObjs@AudStream@@QAEXXZ
    inline void ReallocateStreamObjs()
    {
        return stub<member_func_t<void, AudStream>>(0x4E64B0, this);
    }

    // 0x4E6530 | ?Load@AudStream@@QAEHPADH@Z
    inline int32_t Load(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, AudStream, char*, int32_t>>(0x4E6530, this, arg1, arg2);
    }

    // 0x4E6700 | ?Enable@AudStream@@QAEXXZ
    inline void Enable()
    {
        return stub<member_func_t<void, AudStream>>(0x4E6700, this);
    }

    // 0x4E6710 | ?Disable@AudStream@@QAEXXZ
    inline void Disable()
    {
        return stub<member_func_t<void, AudStream>>(0x4E6710, this);
    }

    // 0x4E67A0 | ?SetPlayPosition@AudStream@@QAEXK@Z
    inline void SetPlayPosition(uint32_t arg1)
    {
        return stub<member_func_t<void, AudStream, uint32_t>>(0x4E67A0, this, arg1);
    }

    // 0x4E67B0 | ?PlayOnce@AudStream@@QAEXMM@Z
    inline void PlayOnce(float arg1, float arg2)
    {
        return stub<member_func_t<void, AudStream, float, float>>(0x4E67B0, this, arg1, arg2);
    }

    // 0x4E6860 | ?PlayOnce@AudStream@@QAEXPADMM@Z
    inline void PlayOnce(char* arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, AudStream, char*, float, float>>(0x4E6860, this, arg1, arg2, arg3);
    }

    // 0x4E6970 | ?PlayLoop@AudStream@@QAEXPADMM@Z
    inline void PlayLoop(char* arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, AudStream, char*, float, float>>(0x4E6970, this, arg1, arg2, arg3);
    }

    // 0x4E6A90 | ?PlayLoop@AudStream@@QAEXMM@Z
    inline void PlayLoop(float arg1, float arg2)
    {
        return stub<member_func_t<void, AudStream, float, float>>(0x4E6A90, this, arg1, arg2);
    }

    // 0x4E6B40 | ?Stop@AudStream@@QAEXXZ
    inline void Stop()
    {
        return stub<member_func_t<void, AudStream>>(0x4E6B40, this);
    }

    // 0x4E6B60 | ?SetFrequency@AudStream@@QAEXMH@Z
    inline void SetFrequency(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, AudStream, float, int32_t>>(0x4E6B60, this, arg1, arg2);
    }

    // 0x4E6BD0 | ?GetFrequency@AudStream@@QAEMH@Z
    inline float GetFrequency(int32_t arg1)
    {
        return stub<member_func_t<float, AudStream, int32_t>>(0x4E6BD0, this, arg1);
    }

    // 0x4E6C10 | ?SetVolume@AudStream@@QAEXMH@Z
    inline void SetVolume(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, AudStream, float, int32_t>>(0x4E6C10, this, arg1, arg2);
    }

    // 0x4E6C80 | ?SetPan@AudStream@@QAEXMH@Z
    inline void SetPan(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, AudStream, float, int32_t>>(0x4E6C80, this, arg1, arg2);
    }

    // 0x4E6D10 | ?IsPlaying@AudStream@@QAEHXZ
    inline int32_t IsPlaying()
    {
        return stub<member_func_t<int32_t, AudStream>>(0x4E6D10, this);
    }

    // 0x4E6D30 | ?Get2DFlags@AudStream@@SA?BKXZ
    static inline uint32_t const Get2DFlags()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E6D30);
    }

    // 0x4E6D50 | ?GetFreqChange2DFlags@AudStream@@SA?BKXZ
    static inline uint32_t const GetFreqChange2DFlags()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E6D50);
    }

    // 0x4E6D70 | ?GetCurrentSoundObj@AudStream@@QAEPAVStreamObj@@XZ
    inline class StreamObj* GetCurrentSoundObj()
    {
        return stub<member_func_t<class StreamObj*, AudStream>>(0x4E6D70, this);
    }

    // 0x4E6D80 | ?SetNumLoopIndices@AudStream@@QAEXF@Z
    inline void SetNumLoopIndices(int16_t arg1)
    {
        return stub<member_func_t<void, AudStream, int16_t>>(0x4E6D80, this, arg1);
    }

    // 0x4E6DB0 | ?SetLoopIndex@AudStream@@QAEXF@Z
    inline void SetLoopIndex(int16_t arg1)
    {
        return stub<member_func_t<void, AudStream, int16_t>>(0x4E6DB0, this, arg1);
    }

    // 0x4E6DE0 | ?SetLoopPointInfo@AudStream@@QAEXKKIFF@Z
    inline void SetLoopPointInfo(uint32_t arg1, uint32_t arg2, uint32_t arg3, int16_t arg4, int16_t arg5)
    {
        return stub<member_func_t<void, AudStream, uint32_t, uint32_t, uint32_t, int16_t, int16_t>>(
            0x4E6DE0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4E6E20 | ?SetupNotifications@AudStream@@QAEXXZ
    inline void SetupNotifications()
    {
        return stub<member_func_t<void, AudStream>>(0x4E6E20, this);
    }

    // 0x5949E4 | ?s_DWDefault2DCtrlFlags@AudStream@@0KB
    static inline extern_var(0x5949E4, uint32_t const, s_DWDefault2DCtrlFlags);

    // 0x5949E8 | ?s_DWFreqChange2DCtrlFlags@AudStream@@0KB
    static inline extern_var(0x5949E8, uint32_t const, s_DWFreqChange2DCtrlFlags);

    // 0x4E6300 | ??1AudStream@@UAE@XZ
    inline ~AudStream() override
    {
        stub<member_func_t<void, AudStream>>(0x4E6300, this);
    }

    // 0x4E6750 | ?Update@AudStream@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, AudStream>>(0x4E6750, this);
    }

    // 0x4E6730 | ?Reset@AudStream@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, AudStream>>(0x4E6730, this);
    }
};
