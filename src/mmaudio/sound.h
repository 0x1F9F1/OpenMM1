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
    mmaudio:sound

    0x4DF220 | public: __thiscall AudSound::AudSound(unsigned long,int,short) | ??0AudSound@@QAE@KHF@Z
    0x4DF4F0 | public: virtual __thiscall AudSound::~AudSound(void) | ??1AudSound@@UAE@XZ
    0x4DF630 | public: void __thiscall AudSound::SetPriority(int) | ?SetPriority@AudSound@@QAEXH@Z
    0x4DF650 | public: void __thiscall AudSound::DeallocateSoundObjs(void) | ?DeallocateSoundObjs@AudSound@@QAEXXZ
    0x4DF6B0 | public: void __thiscall AudSound::ReallocateSoundObjs(void) | ?ReallocateSoundObjs@AudSound@@QAEXXZ
    0x4DF890 | public: int __thiscall AudSound::Load(char *,int) | ?Load@AudSound@@QAEHPADH@Z
    0x4DFAE0 | public: int __thiscall AudSound::Load(int,int) | ?Load@AudSound@@QAEHHH@Z
    0x4DFCD0 | public: void __thiscall AudSound::EnabledAction(void) | ?EnabledAction@AudSound@@QAEXXZ
    0x4DFCF0 | public: void __thiscall AudSound::Enable(void) | ?Enable@AudSound@@QAEXXZ
    0x4DFD00 | public: void __thiscall AudSound::Disable(void) | ?Disable@AudSound@@QAEXXZ
    0x4DFD20 | public: virtual void __thiscall AudSound::Reset(void) | ?Reset@AudSound@@UAEXXZ
    0x4DFD30 | public: virtual void __thiscall AudSound::Update(void) | ?Update@AudSound@@UAEXXZ
    0x4DFDC0 | public: void __thiscall AudSound::Update3DSettings(void) | ?Update3DSettings@AudSound@@QAEXXZ
    0x4DFF80 | public: void __thiscall AudSound::SetPlayPosition(unsigned long) | ?SetPlayPosition@AudSound@@QAEXK@Z
    0x4DFFB0 | public: void __thiscall AudSound::PlayOnce(float,float) | ?PlayOnce@AudSound@@QAEXMM@Z
    0x4E0090 | public: void __thiscall AudSound::PlayLoop(float,float) | ?PlayLoop@AudSound@@QAEXMM@Z
    0x4E0170 | public: void __thiscall AudSound::Stop(void) | ?Stop@AudSound@@QAEXXZ
    0x4E01B0 | public: void __thiscall AudSound::StopEchoBuffers(void) | ?StopEchoBuffers@AudSound@@QAEXXZ
    0x4E01D0 | public: void __thiscall AudSound::SetFrequency(float,int) | ?SetFrequency@AudSound@@QAEXMH@Z
    0x4E0250 | public: float __thiscall AudSound::GetFrequency(int) | ?GetFrequency@AudSound@@QAEMH@Z
    0x4E0290 | public: void __thiscall AudSound::SetVolume(float,int) | ?SetVolume@AudSound@@QAEXMH@Z
    0x4E0310 | public: void __thiscall AudSound::SetEAXReverbMix(float,int) | ?SetEAXReverbMix@AudSound@@QAEXMH@Z
    0x4E0370 | public: float __thiscall AudSound::GetEAXReverbMix(int) | ?GetEAXReverbMix@AudSound@@QAEMH@Z
    0x4E03D0 | public: void __thiscall AudSound::SetPan(float,int) | ?SetPan@AudSound@@QAEXMH@Z
    0x4E0460 | public: void __thiscall AudSound::SetEchoPan(float) | ?SetEchoPan@AudSound@@QAEXM@Z
    0x4E04C0 | public: void __thiscall AudSound::SetEchoFrequency(float,int) | ?SetEchoFrequency@AudSound@@QAEXMH@Z
    0x4E0530 | public: void __thiscall AudSound::SetRamp(float,float) | ?SetRamp@AudSound@@QAEXMM@Z
    0x4E0610 | public: void __thiscall AudSound::Set3DMode(unsigned long) | ?Set3DMode@AudSound@@QAEXK@Z
    0x4E0640 | public: int __thiscall AudSound::IsPlaying(int) | ?IsPlaying@AudSound@@QAEHH@Z
    0x4E0670 | public: float __thiscall AudSound::GetSampleTime(void) | ?GetSampleTime@AudSound@@QAEMXZ
    0x4E0690 | public: void __thiscall AudSound::SetConeAngles(unsigned long,unsigned long) | ?SetConeAngles@AudSound@@QAEXKK@Z
    0x4E06C0 | public: void __thiscall AudSound::SetConeOutsideVolume(long) | ?SetConeOutsideVolume@AudSound@@QAEXJ@Z
    0x4E06F0 | public: void __thiscall AudSound::SetConeOrientation(class Vector3 *) | ?SetConeOrientation@AudSound@@QAEXPAVVector3@@@Z
    0x4E0720 | public: void __thiscall AudSound::SetEchoAttenuation(float) | ?SetEchoAttenuation@AudSound@@QAEXM@Z
    0x4E0760 | public: unsigned char __thiscall AudSound::EchoPending(void) | ?EchoPending@AudSound@@QAEEXZ
    0x4E0780 | public: void __thiscall AudSound::SetChorusAttenuation(float) | ?SetChorusAttenuation@AudSound@@QAEXM@Z
    0x4E07C0 | public: void __thiscall AudSound::SetChorusPitchMult(float) | ?SetChorusPitchMult@AudSound@@QAEXM@Z
    0x4E0800 | public: void __thiscall AudSound::SetChorusPitchMult(float,float) | ?SetChorusPitchMult@AudSound@@QAEXMM@Z
    0x4E0850 | public: void __thiscall AudSound::SetDelayTime(float) | ?SetDelayTime@AudSound@@QAEXM@Z
    0x4E08A0 | public: void __thiscall AudSound::SetupOneShotLayerBuffers(int,float,int) | ?SetupOneShotLayerBuffers@AudSound@@QAEXHMH@Z
    0x4E0910 | public: int __thiscall AudSound::ReadyOneShotLayerBuf(void) | ?ReadyOneShotLayerBuf@AudSound@@QAEHXZ
    0x4E0940 | public: int __thiscall AudSound::AllOneShotLayersPlaying(void) | ?AllOneShotLayersPlaying@AudSound@@QAEHXZ
    0x4E0970 | public: int __thiscall AudSound::GetEffect(void) | ?GetEffect@AudSound@@QAEHXZ
    0x4E0990 | public: void __thiscall AudSound::SetEffect(int) | ?SetEffect@AudSound@@QAEXH@Z
    0x4E0A00 | public: void __thiscall AudSound::DisableEffect(int) | ?DisableEffect@AudSound@@QAEXH@Z
    0x4E0A50 | public: static unsigned long const __cdecl AudSound::Get2DFlags(void) | ?Get2DFlags@AudSound@@SA?BKXZ
    0x4E0A70 | public: static unsigned long const __cdecl AudSound::GetSoft2DFlags(void) | ?GetSoft2DFlags@AudSound@@SA?BKXZ
    0x4E0A90 | public: static unsigned long const __cdecl AudSound::GetFreqChange2DFlags(void) | ?GetFreqChange2DFlags@AudSound@@SA?BKXZ
    0x4E0AB0 | public: static unsigned long const __cdecl AudSound::GetSoftFreqChange2DFlags(void) | ?GetSoftFreqChange2DFlags@AudSound@@SA?BKXZ
    0x4E0AD0 | public: static unsigned long const __cdecl AudSound::Get3DFlags(void) | ?Get3DFlags@AudSound@@SA?BKXZ
    0x4E0AE0 | public: static unsigned long const __cdecl AudSound::GetFreqChange3DFlags(void) | ?GetFreqChange3DFlags@AudSound@@SA?BKXZ
    0x4E0AF0 | public: class CReverbBuffer * __thiscall AudSound::GetSecondaryEAXObj(int) | ?GetSecondaryEAXObj@AudSound@@QAEPAVCReverbBuffer@@H@Z
    0x4E0B20 | public: void __thiscall AudSound::Enable3DMode(void) | ?Enable3DMode@AudSound@@QAEXXZ
    0x4E0B60 | public: void __thiscall AudSound::Disable3DMode(void) | ?Disable3DMode@AudSound@@QAEXXZ
    0x4E0BA0 | public: class SoundObj * __thiscall AudSound::GetCurrentSoundObj(void) | ?GetCurrentSoundObj@AudSound@@QAEPAVSoundObj@@XZ
    0x4E0BB0 | public: float __thiscall AudSound::GetVolume(int) | ?GetVolume@AudSound@@QAEMH@Z
    0x4E0BE0 | public: virtual void * __thiscall AudSound::`scalar deleting destructor'(unsigned int) | ??_GAudSound@@UAEPAXI@Z
    0x4E0BE0 | public: virtual void * __thiscall AudSound::`vector deleting destructor'(unsigned int) | ??_EAudSound@@UAEPAXI@Z
    0x594904 | private: static unsigned long const AudSound::s_DWDefault3DCtrlFlags | ?s_DWDefault3DCtrlFlags@AudSound@@0KB
    0x594908 | private: static unsigned long const AudSound::s_DWDefault2DCtrlFlags | ?s_DWDefault2DCtrlFlags@AudSound@@0KB
    0x59490C | private: static unsigned long const AudSound::s_DWFreqChange3DCtrlFlags | ?s_DWFreqChange3DCtrlFlags@AudSound@@0KB
    0x594910 | private: static unsigned long const AudSound::s_DWFreqChange2DCtrlFlags | ?s_DWFreqChange2DCtrlFlags@AudSound@@0KB
    0x594914 | private: static unsigned long const AudSound::s_DWSoft2DCtrlFlags | ?s_DWSoft2DCtrlFlags@AudSound@@0KB
    0x594918 | private: static unsigned long const AudSound::s_DWSoftFreqChange2DCtrlFlags | ?s_DWSoftFreqChange2DCtrlFlags@AudSound@@0KB
    0x594930 | const AudSound::`vftable' | ??_7AudSound@@6B@
*/

class AudSound : asNode
{
public:
    // AudSound::`vftable' @ 0x594930

    // 0x4DF220 | ??0AudSound@@QAE@KHF@Z
    inline AudSound(uint32_t arg1, int32_t arg2, int16_t arg3)
    {
        // stub<member_func_t<void, AudSound, uint32_t, int32_t, int16_t>>(0x4DF220, this, arg1, arg2, arg3);

        unimplemented();
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
    inline ~AudSound() override = 0
    {
        // stub<member_func_t<void, AudSound>>(0x4DF4F0, this);

        unimplemented();
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
