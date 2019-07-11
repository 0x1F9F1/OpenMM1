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

// mmaudio:sound

#include "hooking.h"

class AudSound : asNode
{
public:
    // AudSound::`vftable' @ 0x594930

    // 0x4DF220 | ??0AudSound@@QAE@KHF@Z
    inline AudSound(uint32_t arg1, int32_t arg2, int16_t arg3)
    {
        stub<member_func_t<void, AudSound, uint32_t, int32_t, int16_t>>(0x4DF220, this, arg1, arg2, arg3);
    }

    // 0x4DF630 | ?SetPriority@AudSound@@QAEXH@Z
    inline void SetPriority(int32_t arg1)
    {
        return stub<member_func_t<void, AudSound, int32_t>>(0x4DF630, this, arg1);
    }

    // 0x4DF650 | ?DeallocateSoundObjs@AudSound@@QAEXXZ
    inline void DeallocateSoundObjs()
    {
        return stub<member_func_t<void, AudSound>>(0x4DF650, this);
    }

    // 0x4DF6B0 | ?ReallocateSoundObjs@AudSound@@QAEXXZ
    inline void ReallocateSoundObjs()
    {
        return stub<member_func_t<void, AudSound>>(0x4DF6B0, this);
    }

    // 0x4DF890 | ?Load@AudSound@@QAEHPADH@Z
    inline int32_t Load(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, AudSound, char*, int32_t>>(0x4DF890, this, arg1, arg2);
    }

    // 0x4DFAE0 | ?Load@AudSound@@QAEHHH@Z
    inline int32_t Load(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, AudSound, int32_t, int32_t>>(0x4DFAE0, this, arg1, arg2);
    }

    // 0x4DFCD0 | ?EnabledAction@AudSound@@QAEXXZ
    inline void EnabledAction()
    {
        return stub<member_func_t<void, AudSound>>(0x4DFCD0, this);
    }

    // 0x4DFCF0 | ?Enable@AudSound@@QAEXXZ
    inline void Enable()
    {
        return stub<member_func_t<void, AudSound>>(0x4DFCF0, this);
    }

    // 0x4DFD00 | ?Disable@AudSound@@QAEXXZ
    inline void Disable()
    {
        return stub<member_func_t<void, AudSound>>(0x4DFD00, this);
    }

    // 0x4DFDC0 | ?Update3DSettings@AudSound@@QAEXXZ
    inline void Update3DSettings()
    {
        return stub<member_func_t<void, AudSound>>(0x4DFDC0, this);
    }

    // 0x4DFF80 | ?SetPlayPosition@AudSound@@QAEXK@Z
    inline void SetPlayPosition(uint32_t arg1)
    {
        return stub<member_func_t<void, AudSound, uint32_t>>(0x4DFF80, this, arg1);
    }

    // 0x4DFFB0 | ?PlayOnce@AudSound@@QAEXMM@Z
    inline void PlayOnce(float arg1, float arg2)
    {
        return stub<member_func_t<void, AudSound, float, float>>(0x4DFFB0, this, arg1, arg2);
    }

    // 0x4E0090 | ?PlayLoop@AudSound@@QAEXMM@Z
    inline void PlayLoop(float arg1, float arg2)
    {
        return stub<member_func_t<void, AudSound, float, float>>(0x4E0090, this, arg1, arg2);
    }

    // 0x4E0170 | ?Stop@AudSound@@QAEXXZ
    inline void Stop()
    {
        return stub<member_func_t<void, AudSound>>(0x4E0170, this);
    }

    // 0x4E01B0 | ?StopEchoBuffers@AudSound@@QAEXXZ
    inline void StopEchoBuffers()
    {
        return stub<member_func_t<void, AudSound>>(0x4E01B0, this);
    }

    // 0x4E01D0 | ?SetFrequency@AudSound@@QAEXMH@Z
    inline void SetFrequency(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, AudSound, float, int32_t>>(0x4E01D0, this, arg1, arg2);
    }

    // 0x4E0250 | ?GetFrequency@AudSound@@QAEMH@Z
    inline float GetFrequency(int32_t arg1)
    {
        return stub<member_func_t<float, AudSound, int32_t>>(0x4E0250, this, arg1);
    }

    // 0x4E0290 | ?SetVolume@AudSound@@QAEXMH@Z
    inline void SetVolume(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, AudSound, float, int32_t>>(0x4E0290, this, arg1, arg2);
    }

    // 0x4E0310 | ?SetEAXReverbMix@AudSound@@QAEXMH@Z
    inline void SetEAXReverbMix(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, AudSound, float, int32_t>>(0x4E0310, this, arg1, arg2);
    }

    // 0x4E0370 | ?GetEAXReverbMix@AudSound@@QAEMH@Z
    inline float GetEAXReverbMix(int32_t arg1)
    {
        return stub<member_func_t<float, AudSound, int32_t>>(0x4E0370, this, arg1);
    }

    // 0x4E03D0 | ?SetPan@AudSound@@QAEXMH@Z
    inline void SetPan(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, AudSound, float, int32_t>>(0x4E03D0, this, arg1, arg2);
    }

    // 0x4E0460 | ?SetEchoPan@AudSound@@QAEXM@Z
    inline void SetEchoPan(float arg1)
    {
        return stub<member_func_t<void, AudSound, float>>(0x4E0460, this, arg1);
    }

    // 0x4E04C0 | ?SetEchoFrequency@AudSound@@QAEXMH@Z
    inline void SetEchoFrequency(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, AudSound, float, int32_t>>(0x4E04C0, this, arg1, arg2);
    }

    // 0x4E0530 | ?SetRamp@AudSound@@QAEXMM@Z
    inline void SetRamp(float arg1, float arg2)
    {
        return stub<member_func_t<void, AudSound, float, float>>(0x4E0530, this, arg1, arg2);
    }

    // 0x4E0610 | ?Set3DMode@AudSound@@QAEXK@Z
    inline void Set3DMode(uint32_t arg1)
    {
        return stub<member_func_t<void, AudSound, uint32_t>>(0x4E0610, this, arg1);
    }

    // 0x4E0640 | ?IsPlaying@AudSound@@QAEHH@Z
    inline int32_t IsPlaying(int32_t arg1)
    {
        return stub<member_func_t<int32_t, AudSound, int32_t>>(0x4E0640, this, arg1);
    }

    // 0x4E0670 | ?GetSampleTime@AudSound@@QAEMXZ
    inline float GetSampleTime()
    {
        return stub<member_func_t<float, AudSound>>(0x4E0670, this);
    }

    // 0x4E0690 | ?SetConeAngles@AudSound@@QAEXKK@Z
    inline void SetConeAngles(uint32_t arg1, uint32_t arg2)
    {
        return stub<member_func_t<void, AudSound, uint32_t, uint32_t>>(0x4E0690, this, arg1, arg2);
    }

    // 0x4E06C0 | ?SetConeOutsideVolume@AudSound@@QAEXJ@Z
    inline void SetConeOutsideVolume(int32_t arg1)
    {
        return stub<member_func_t<void, AudSound, int32_t>>(0x4E06C0, this, arg1);
    }

    // 0x4E06F0 | ?SetConeOrientation@AudSound@@QAEXPAVVector3@@@Z
    inline void SetConeOrientation(class Vector3* arg1)
    {
        return stub<member_func_t<void, AudSound, class Vector3*>>(0x4E06F0, this, arg1);
    }

    // 0x4E0720 | ?SetEchoAttenuation@AudSound@@QAEXM@Z
    inline void SetEchoAttenuation(float arg1)
    {
        return stub<member_func_t<void, AudSound, float>>(0x4E0720, this, arg1);
    }

    // 0x4E0760 | ?EchoPending@AudSound@@QAEEXZ
    inline uint8_t EchoPending()
    {
        return stub<member_func_t<uint8_t, AudSound>>(0x4E0760, this);
    }

    // 0x4E0780 | ?SetChorusAttenuation@AudSound@@QAEXM@Z
    inline void SetChorusAttenuation(float arg1)
    {
        return stub<member_func_t<void, AudSound, float>>(0x4E0780, this, arg1);
    }

    // 0x4E07C0 | ?SetChorusPitchMult@AudSound@@QAEXM@Z
    inline void SetChorusPitchMult(float arg1)
    {
        return stub<member_func_t<void, AudSound, float>>(0x4E07C0, this, arg1);
    }

    // 0x4E0800 | ?SetChorusPitchMult@AudSound@@QAEXMM@Z
    inline void SetChorusPitchMult(float arg1, float arg2)
    {
        return stub<member_func_t<void, AudSound, float, float>>(0x4E0800, this, arg1, arg2);
    }

    // 0x4E0850 | ?SetDelayTime@AudSound@@QAEXM@Z
    inline void SetDelayTime(float arg1)
    {
        return stub<member_func_t<void, AudSound, float>>(0x4E0850, this, arg1);
    }

    // 0x4E08A0 | ?SetupOneShotLayerBuffers@AudSound@@QAEXHMH@Z
    inline void SetupOneShotLayerBuffers(int32_t arg1, float arg2, int32_t arg3)
    {
        return stub<member_func_t<void, AudSound, int32_t, float, int32_t>>(0x4E08A0, this, arg1, arg2, arg3);
    }

    // 0x4E0910 | ?ReadyOneShotLayerBuf@AudSound@@QAEHXZ
    inline int32_t ReadyOneShotLayerBuf()
    {
        return stub<member_func_t<int32_t, AudSound>>(0x4E0910, this);
    }

    // 0x4E0940 | ?AllOneShotLayersPlaying@AudSound@@QAEHXZ
    inline int32_t AllOneShotLayersPlaying()
    {
        return stub<member_func_t<int32_t, AudSound>>(0x4E0940, this);
    }

    // 0x4E0970 | ?GetEffect@AudSound@@QAEHXZ
    inline int32_t GetEffect()
    {
        return stub<member_func_t<int32_t, AudSound>>(0x4E0970, this);
    }

    // 0x4E0990 | ?SetEffect@AudSound@@QAEXH@Z
    inline void SetEffect(int32_t arg1)
    {
        return stub<member_func_t<void, AudSound, int32_t>>(0x4E0990, this, arg1);
    }

    // 0x4E0A00 | ?DisableEffect@AudSound@@QAEXH@Z
    inline void DisableEffect(int32_t arg1)
    {
        return stub<member_func_t<void, AudSound, int32_t>>(0x4E0A00, this, arg1);
    }

    // 0x4E0A50 | ?Get2DFlags@AudSound@@SA?BKXZ
    static inline uint32_t const Get2DFlags()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E0A50);
    }

    // 0x4E0A70 | ?GetSoft2DFlags@AudSound@@SA?BKXZ
    static inline uint32_t const GetSoft2DFlags()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E0A70);
    }

    // 0x4E0A90 | ?GetFreqChange2DFlags@AudSound@@SA?BKXZ
    static inline uint32_t const GetFreqChange2DFlags()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E0A90);
    }

    // 0x4E0AB0 | ?GetSoftFreqChange2DFlags@AudSound@@SA?BKXZ
    static inline uint32_t const GetSoftFreqChange2DFlags()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E0AB0);
    }

    // 0x4E0AD0 | ?Get3DFlags@AudSound@@SA?BKXZ
    static inline uint32_t const Get3DFlags()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E0AD0);
    }

    // 0x4E0AE0 | ?GetFreqChange3DFlags@AudSound@@SA?BKXZ
    static inline uint32_t const GetFreqChange3DFlags()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E0AE0);
    }

    // 0x4E0AF0 | ?GetSecondaryEAXObj@AudSound@@QAEPAVCReverbBuffer@@H@Z
    inline class CReverbBuffer* GetSecondaryEAXObj(int32_t arg1)
    {
        return stub<member_func_t<class CReverbBuffer*, AudSound, int32_t>>(0x4E0AF0, this, arg1);
    }

    // 0x4E0B20 | ?Enable3DMode@AudSound@@QAEXXZ
    inline void Enable3DMode()
    {
        return stub<member_func_t<void, AudSound>>(0x4E0B20, this);
    }

    // 0x4E0B60 | ?Disable3DMode@AudSound@@QAEXXZ
    inline void Disable3DMode()
    {
        return stub<member_func_t<void, AudSound>>(0x4E0B60, this);
    }

    // 0x4E0BA0 | ?GetCurrentSoundObj@AudSound@@QAEPAVSoundObj@@XZ
    inline class SoundObj* GetCurrentSoundObj()
    {
        return stub<member_func_t<class SoundObj*, AudSound>>(0x4E0BA0, this);
    }

    // 0x4E0BB0 | ?GetVolume@AudSound@@QAEMH@Z
    inline float GetVolume(int32_t arg1)
    {
        return stub<member_func_t<float, AudSound, int32_t>>(0x4E0BB0, this, arg1);
    }

    // 0x594904 | ?s_DWDefault3DCtrlFlags@AudSound@@0KB
    static inline extern_var(0x594904, uint32_t const, s_DWDefault3DCtrlFlags);

    // 0x594908 | ?s_DWDefault2DCtrlFlags@AudSound@@0KB
    static inline extern_var(0x594908, uint32_t const, s_DWDefault2DCtrlFlags);

    // 0x59490C | ?s_DWFreqChange3DCtrlFlags@AudSound@@0KB
    static inline extern_var(0x59490C, uint32_t const, s_DWFreqChange3DCtrlFlags);

    // 0x594910 | ?s_DWFreqChange2DCtrlFlags@AudSound@@0KB
    static inline extern_var(0x594910, uint32_t const, s_DWFreqChange2DCtrlFlags);

    // 0x594914 | ?s_DWSoft2DCtrlFlags@AudSound@@0KB
    static inline extern_var(0x594914, uint32_t const, s_DWSoft2DCtrlFlags);

    // 0x594918 | ?s_DWSoftFreqChange2DCtrlFlags@AudSound@@0KB
    static inline extern_var(0x594918, uint32_t const, s_DWSoftFreqChange2DCtrlFlags);

    // 0x4DF4F0 | ??1AudSound@@UAE@XZ
    inline ~AudSound() override
    {
        stub<member_func_t<void, AudSound>>(0x4DF4F0, this);
    }

    // 0x4DFD30 | ?Update@AudSound@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, AudSound>>(0x4DFD30, this);
    }

    // 0x4DFD20 | ?Reset@AudSound@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, AudSound>>(0x4DFD20, this);
    }
};
