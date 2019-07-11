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

// mmaudio:streamobj

#include "hooking.h"

// 0x4E8730 | ?HandleNotifications@@YAKPAX@Z
inline uint32_t HandleNotifications(void* arg1)
{
    return stub<cdecl_t<uint32_t, void*>>(0x4E8730, arg1);
}

class StreamObj
{
public:
    // 0x4E7840 | ??0StreamObj@@QAE@XZ
    inline StreamObj()
    {
        stub<member_func_t<void, StreamObj>>(0x4E7840, this);
    }

    // 0x4E78D0 | ??1StreamObj@@QAE@XZ
    inline ~StreamObj()
    {
        stub<member_func_t<void, StreamObj>>(0x4E78D0, this);
    }

    // 0x4E79E0 | ?DSCreateSoundBuffer@StreamObj@@QAEHXZ
    inline int32_t DSCreateSoundBuffer()
    {
        return stub<member_func_t<int32_t, StreamObj>>(0x4E79E0, this);
    }

    // 0x4E7A70 | ?DSLoadSoundBuffer@StreamObj@@QAEPAUIDirectSoundBuffer@@PBDK@Z
    inline struct IDirectSoundBuffer* DSLoadSoundBuffer(char const* arg1, uint32_t arg2)
    {
        return stub<member_func_t<struct IDirectSoundBuffer*, StreamObj, char const*, uint32_t>>(
            0x4E7A70, this, arg1, arg2);
    }

    // 0x4E7AC0 | ?OpenWaveFile@StreamObj@@AAEPAVStream@@PBDF@Z
    inline class Stream* OpenWaveFile(char const* arg1, int16_t arg2)
    {
        return stub<member_func_t<class Stream*, StreamObj, char const*, int16_t>>(0x4E7AC0, this, arg1, arg2);
    }

    // 0x4E7CE0 | ?GetWaveBytesOffset@StreamObj@@AAEIPAVStream@@F@Z
    inline uint32_t GetWaveBytesOffset(class Stream* arg1, int16_t arg2)
    {
        return stub<member_func_t<uint32_t, StreamObj, class Stream*, int16_t>>(0x4E7CE0, this, arg1, arg2);
    }

    // 0x4E7E20 | ?Init@StreamObj@@QAEHPBDK@Z
    inline int32_t Init(char const* arg1, uint32_t arg2)
    {
        return stub<member_func_t<int32_t, StreamObj, char const*, uint32_t>>(0x4E7E20, this, arg1, arg2);
    }

    // 0x4E7E90 | ?SetPlayPosition@StreamObj@@QAEXK@Z
    inline void SetPlayPosition(uint32_t arg1)
    {
        return stub<member_func_t<void, StreamObj, uint32_t>>(0x4E7E90, this, arg1);
    }

    // 0x4E7EB0 | ?Play@StreamObj@@QAEHXZ
    inline int32_t Play()
    {
        return stub<member_func_t<int32_t, StreamObj>>(0x4E7EB0, this);
    }

    // 0x4E7F40 | ?SetPlayOneShotEvent@StreamObj@@QAEXPAD@Z
    inline void SetPlayOneShotEvent(char* arg1)
    {
        return stub<member_func_t<void, StreamObj, char*>>(0x4E7F40, this, arg1);
    }

    // 0x4E7F90 | ?SetStopEvent@StreamObj@@QAEXXZ
    inline void SetStopEvent()
    {
        return stub<member_func_t<void, StreamObj>>(0x4E7F90, this);
    }

    // 0x4E7FA0 | ?SetVolumeEvent@StreamObj@@QAEXM@Z
    inline void SetVolumeEvent(float arg1)
    {
        return stub<member_func_t<void, StreamObj, float>>(0x4E7FA0, this, arg1);
    }

    // 0x4E7FC0 | ?SetFrequencyEvent@StreamObj@@QAEXM@Z
    inline void SetFrequencyEvent(float arg1)
    {
        return stub<member_func_t<void, StreamObj, float>>(0x4E7FC0, this, arg1);
    }

    // 0x4E7FE0 | ?SetPanEvent@StreamObj@@QAEXM@Z
    inline void SetPanEvent(float arg1)
    {
        return stub<member_func_t<void, StreamObj, float>>(0x4E7FE0, this, arg1);
    }

    // 0x4E8000 | ?Play@StreamObj@@QAEHPAD@Z
    inline int32_t Play(char* arg1)
    {
        return stub<member_func_t<int32_t, StreamObj, char*>>(0x4E8000, this, arg1);
    }

    // 0x4E80C0 | ?Stop@StreamObj@@QAEHXZ
    inline int32_t Stop()
    {
        return stub<member_func_t<int32_t, StreamObj>>(0x4E80C0, this);
    }

    // 0x4E80F0 | ?FillDataBuffer@StreamObj@@QAEHI@Z
    inline int32_t FillDataBuffer(uint32_t arg1)
    {
        return stub<member_func_t<int32_t, StreamObj, uint32_t>>(0x4E80F0, this, arg1);
    }

    // 0x4E8300 | ?IsPlaying@StreamObj@@QAEFXZ
    inline int16_t IsPlaying()
    {
        return stub<member_func_t<int16_t, StreamObj>>(0x4E8300, this);
    }

    // 0x4E8360 | ?SetFrequency@StreamObj@@QAEXM@Z
    inline void SetFrequency(float arg1)
    {
        return stub<member_func_t<void, StreamObj, float>>(0x4E8360, this, arg1);
    }

    // 0x4E8410 | ?SetVolume@StreamObj@@QAEXM@Z
    inline void SetVolume(float arg1)
    {
        return stub<member_func_t<void, StreamObj, float>>(0x4E8410, this, arg1);
    }

    // 0x4E8450 | ?SetPan@StreamObj@@QAEXM@Z
    inline void SetPan(float arg1)
    {
        return stub<member_func_t<void, StreamObj, float>>(0x4E8450, this, arg1);
    }

    // 0x4E8490 | ?SetupNotifications@StreamObj@@QAEHXZ
    inline int32_t SetupNotifications()
    {
        return stub<member_func_t<int32_t, StreamObj>>(0x4E8490, this);
    }

    // 0x4E8B00 | ?Update@StreamObj@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, StreamObj>>(0x4E8B00, this);
    }

    // 0x4E8BC0 | ?GetFileStreamPtr@StreamObj@@QAEPAVStream@@XZ
    inline class Stream* GetFileStreamPtr()
    {
        return stub<member_func_t<class Stream*, StreamObj>>(0x4E8BC0, this);
    }

    // 0x4E8BD0 | ?SetNumLoopIndices@StreamObj@@QAEXF@Z
    inline void SetNumLoopIndices(int16_t arg1)
    {
        return stub<member_func_t<void, StreamObj, int16_t>>(0x4E8BD0, this, arg1);
    }

    // 0x4E8C30 | ?SetLoopPointInfo@StreamObj@@QAEXKKIFF@Z
    inline void SetLoopPointInfo(uint32_t arg1, uint32_t arg2, uint32_t arg3, int16_t arg4, int16_t arg5)
    {
        return stub<member_func_t<void, StreamObj, uint32_t, uint32_t, uint32_t, int16_t, int16_t>>(
            0x4E8C30, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4E8D40 | ?ReadInLoopIndex@StreamObj@@QAEXF@Z
    inline void ReadInLoopIndex(int16_t arg1)
    {
        return stub<member_func_t<void, StreamObj, int16_t>>(0x4E8D40, this, arg1);
    }

    // 0x4E8E10 | ?SetPlayingFlag@StreamObj@@QAEXF@Z
    inline void SetPlayingFlag(int16_t arg1)
    {
        return stub<member_func_t<void, StreamObj, int16_t>>(0x4E8E10, this, arg1);
    }
};
