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

// mmaudio:soundobj

#include "hooking.h"

class SoundObj
{
public:
    // 0x4E3740 | ??0SoundObj@@QAE@XZ
    inline SoundObj()
    {
        stub<member_func_t<void, SoundObj>>(0x4E3740, this);
    }

    // 0x4E3800 | ??1SoundObj@@QAE@XZ
    inline ~SoundObj()
    {
        stub<member_func_t<void, SoundObj>>(0x4E3800, this);
    }

    // 0x4E38C0 | ?DeallocateEffects@SoundObj@@QAEXXZ
    inline void DeallocateEffects()
    {
        return stub<member_func_t<void, SoundObj>>(0x4E38C0, this);
    }

    // 0x4E3990 | ?SetDelayTime@SoundObj@@QAEXM@Z
    inline void SetDelayTime(float arg1)
    {
        return stub<member_func_t<void, SoundObj, float>>(0x4E3990, this, arg1);
    }

    // 0x4E3AB0 | ?SetupOneShotLayerBuffers@SoundObj@@QAEFFMPAD@Z
    inline int16_t SetupOneShotLayerBuffers(int16_t arg1, float arg2, char* arg3)
    {
        return stub<member_func_t<int16_t, SoundObj, int16_t, float, char*>>(0x4E3AB0, this, arg1, arg2, arg3);
    }

    // 0x4E3B40 | ?FreeOneShotLayerBuffers@SoundObj@@QAEXXZ
    inline void FreeOneShotLayerBuffers()
    {
        return stub<member_func_t<void, SoundObj>>(0x4E3B40, this);
    }

    // 0x4E3BC0 | ?DSCreateSoundBuffer@SoundObj@@QAEHPAPAUIDirectSoundBuffer@@E@Z
    inline int32_t DSCreateSoundBuffer(struct IDirectSoundBuffer** arg1, uint8_t arg2)
    {
        return stub<member_func_t<int32_t, SoundObj, struct IDirectSoundBuffer**, uint8_t>>(0x4E3BC0, this, arg1, arg2);
    }

    // 0x4E3C50 | ?DSLoadSoundBuffer@SoundObj@@QAEPAUIDirectSoundBuffer@@PBDK@Z
    inline struct IDirectSoundBuffer* DSLoadSoundBuffer(char const* arg1, uint32_t arg2)
    {
        return stub<member_func_t<struct IDirectSoundBuffer*, SoundObj, char const*, uint32_t>>(
            0x4E3C50, this, arg1, arg2);
    }

    // 0x4E3E30 | ?DSLoadSoundBuffer@SoundObj@@QAEXGK@Z
    inline void DSLoadSoundBuffer(uint16_t arg1, uint32_t arg2)
    {
        return stub<member_func_t<void, SoundObj, uint16_t, uint32_t>>(0x4E3E30, this, arg1, arg2);
    }

    // 0x4E3F70 | ?ReadADFRecord@SoundObj@@QAEXG@Z
    inline void ReadADFRecord(uint16_t arg1)
    {
        return stub<member_func_t<void, SoundObj, uint16_t>>(0x4E3F70, this, arg1);
    }

    // 0x4E4130 | ?DSGetWaveResource@SoundObj@@QAEHPAUHINSTANCE__@@PBDPAPAUtWAVEFORMATEX@@PAPAEPAK@Z
    inline int32_t DSGetWaveResource(
        struct HINSTANCE__* arg1, char const* arg2, struct tWAVEFORMATEX** arg3, uint8_t** arg4, uint32_t* arg5)
    {
        return stub<member_func_t<int32_t, SoundObj, struct HINSTANCE__*, char const*, struct tWAVEFORMATEX**,
            uint8_t**, uint32_t*>>(0x4E4130, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4E4210 | ?ConvertTo8Bit@SoundObj@@QAEXXZ
    inline void ConvertTo8Bit()
    {
        return stub<member_func_t<void, SoundObj>>(0x4E4210, this);
    }

    // 0x4E4370 | ?DSGetWaveFile@SoundObj@@QAEHPAUHINSTANCE__@@PBDPAPAUtWAVEFORMATEX@@PAPAEPAKPAPAX@Z
    inline int32_t DSGetWaveFile(struct HINSTANCE__* arg1, char const* arg2, struct tWAVEFORMATEX** arg3,
        uint8_t** arg4, uint32_t* arg5, void** arg6)
    {
        return stub<member_func_t<int32_t, SoundObj, struct HINSTANCE__*, char const*, struct tWAVEFORMATEX**,
            uint8_t**, uint32_t*, void**>>(0x4E4370, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4E4640 | ?InitDummy@SoundObj@@QAEHXZ
    inline int32_t InitDummy()
    {
        return stub<member_func_t<int32_t, SoundObj>>(0x4E4640, this);
    }

    // 0x4E47F0 | ?Init@SoundObj@@QAEHPBDKF@Z
    inline int32_t Init(char const* arg1, uint32_t arg2, int16_t arg3)
    {
        return stub<member_func_t<int32_t, SoundObj, char const*, uint32_t, int16_t>>(0x4E47F0, this, arg1, arg2, arg3);
    }

    // 0x4E48B0 | ?Init@SoundObj@@QAEHGKF@Z
    inline int32_t Init(uint16_t arg1, uint32_t arg2, int16_t arg3)
    {
        return stub<member_func_t<int32_t, SoundObj, uint16_t, uint32_t, int16_t>>(0x4E48B0, this, arg1, arg2, arg3);
    }

    // 0x4E4960 | ?SetEffect@SoundObj@@QAEXFPAD@Z
    inline void SetEffect(int16_t arg1, char* arg2)
    {
        return stub<member_func_t<void, SoundObj, int16_t, char*>>(0x4E4960, this, arg1, arg2);
    }

    // 0x4E4AE0 | ?SetPlayPosition@SoundObj@@QAEXK@Z
    inline void SetPlayPosition(uint32_t arg1)
    {
        return stub<member_func_t<void, SoundObj, uint32_t>>(0x4E4AE0, this, arg1);
    }

    // 0x4E4B00 | ?Play@SoundObj@@QAEHKPAD@Z
    inline int32_t Play(uint32_t arg1, char* arg2)
    {
        return stub<member_func_t<int32_t, SoundObj, uint32_t, char*>>(0x4E4B00, this, arg1, arg2);
    }

    // 0x4E4D40 | ?Stop@SoundObj@@QAEHXZ
    inline int32_t Stop()
    {
        return stub<member_func_t<int32_t, SoundObj>>(0x4E4D40, this);
    }

    // 0x4E4DD0 | ?StopEchoBuffers@SoundObj@@QAEXXZ
    inline void StopEchoBuffers()
    {
        return stub<member_func_t<void, SoundObj>>(0x4E4DD0, this);
    }

    // 0x4E4DF0 | ?DSFillSoundBuffer@SoundObj@@QAEHPAUIDirectSoundBuffer@@@Z
    inline int32_t DSFillSoundBuffer(struct IDirectSoundBuffer* arg1)
    {
        return stub<member_func_t<int32_t, SoundObj, struct IDirectSoundBuffer*>>(0x4E4DF0, this, arg1);
    }

    // 0x4E4EB0 | ?DSParseWaveResource@SoundObj@@QAEHPAXPAPAUtWAVEFORMATEX@@PAPAEPAK@Z
    inline int32_t DSParseWaveResource(void* arg1, struct tWAVEFORMATEX** arg2, uint8_t** arg3, uint32_t* arg4)
    {
        return stub<member_func_t<int32_t, SoundObj, void*, struct tWAVEFORMATEX**, uint8_t**, uint32_t*>>(
            0x4E4EB0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4E4FB0 | ?IsPlaying@SoundObj@@QAEFF@Z
    inline int16_t IsPlaying(int16_t arg1)
    {
        return stub<member_func_t<int16_t, SoundObj, int16_t>>(0x4E4FB0, this, arg1);
    }

    // 0x4E5090 | ?ReadyOneShotLayerBuf@SoundObj@@QAEFXZ
    inline int16_t ReadyOneShotLayerBuf()
    {
        return stub<member_func_t<int16_t, SoundObj>>(0x4E5090, this);
    }

    // 0x4E5120 | ?AllOneShotLayersPlaying@SoundObj@@QAEFXZ
    inline int16_t AllOneShotLayersPlaying()
    {
        return stub<member_func_t<int16_t, SoundObj>>(0x4E5120, this);
    }

    // 0x4E51C0 | ?SetPosition@SoundObj@@QAEXMMM@Z
    inline void SetPosition(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, SoundObj, float, float, float>>(0x4E51C0, this, arg1, arg2, arg3);
    }

    // 0x4E5200 | ?SetVelocity@SoundObj@@QAEXMMM@Z
    inline void SetVelocity(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, SoundObj, float, float, float>>(0x4E5200, this, arg1, arg2, arg3);
    }

    // 0x4E5240 | ?SetFrequency@SoundObj@@QAEXM@Z
    inline void SetFrequency(float arg1)
    {
        return stub<member_func_t<void, SoundObj, float>>(0x4E5240, this, arg1);
    }

    // 0x4E5480 | ?SetEchoFrequency@SoundObj@@QAEXM@Z
    inline void SetEchoFrequency(float arg1)
    {
        return stub<member_func_t<void, SoundObj, float>>(0x4E5480, this, arg1);
    }

    // 0x4E5540 | ?SetVolume@SoundObj@@QAEXM@Z
    inline void SetVolume(float arg1)
    {
        return stub<member_func_t<void, SoundObj, float>>(0x4E5540, this, arg1);
    }

    // 0x4E5680 | ?SetPan@SoundObj@@QAEXM@Z
    inline void SetPan(float arg1)
    {
        return stub<member_func_t<void, SoundObj, float>>(0x4E5680, this, arg1);
    }

    // 0x4E57C0 | ?SetEchoPan@SoundObj@@QAEXM@Z
    inline void SetEchoPan(float arg1)
    {
        return stub<member_func_t<void, SoundObj, float>>(0x4E57C0, this, arg1);
    }

    // 0x4E57F0 | ?SetRamp@SoundObj@@QAEXMM@Z
    inline void SetRamp(float arg1, float arg2)
    {
        return stub<member_func_t<void, SoundObj, float, float>>(0x4E57F0, this, arg1, arg2);
    }

    // 0x4E5820 | ?Set3DMode@SoundObj@@QAEXK@Z
    inline void Set3DMode(uint32_t arg1)
    {
        return stub<member_func_t<void, SoundObj, uint32_t>>(0x4E5820, this, arg1);
    }

    // 0x4E5840 | ?SetConeOutsideVolume@SoundObj@@QAEXJ@Z
    inline void SetConeOutsideVolume(int32_t arg1)
    {
        return stub<member_func_t<void, SoundObj, int32_t>>(0x4E5840, this, arg1);
    }

    // 0x4E5870 | ?SetConeAngles@SoundObj@@QAEXKK@Z
    inline void SetConeAngles(uint32_t arg1, uint32_t arg2)
    {
        return stub<member_func_t<void, SoundObj, uint32_t, uint32_t>>(0x4E5870, this, arg1, arg2);
    }

    // 0x4E58B0 | ?SetConeOrientation@SoundObj@@QAEXPAVVector3@@@Z
    inline void SetConeOrientation(class Vector3* arg1)
    {
        return stub<member_func_t<void, SoundObj, class Vector3*>>(0x4E58B0, this, arg1);
    }

    // 0x4E58E0 | ?SetupDuplicateBuffer@SoundObj@@QAEPAUIDirectSoundBuffer@@PAD@Z
    inline struct IDirectSoundBuffer* SetupDuplicateBuffer(char* arg1)
    {
        return stub<member_func_t<struct IDirectSoundBuffer*, SoundObj, char*>>(0x4E58E0, this, arg1);
    }

    // 0x4E5990 | ?SetupEchoBuffer@SoundObj@@QAEXPAD@Z
    inline void SetupEchoBuffer(char* arg1)
    {
        return stub<member_func_t<void, SoundObj, char*>>(0x4E5990, this, arg1);
    }

    // 0x4E5A30 | ?SetupChorusBuffer@SoundObj@@AAEPAUIDirectSoundBuffer@@PAD@Z
    inline struct IDirectSoundBuffer* SetupChorusBuffer(char* arg1)
    {
        return stub<member_func_t<struct IDirectSoundBuffer*, SoundObj, char*>>(0x4E5A30, this, arg1);
    }

    // 0x4E5AB0 | ?UpdateSeconds@SoundObj@@QAEXXZ
    inline void UpdateSeconds()
    {
        return stub<member_func_t<void, SoundObj>>(0x4E5AB0, this);
    }

    // 0x4E5AE0 | ?UpdateEcho@SoundObj@@QAEXXZ
    inline void UpdateEcho()
    {
        return stub<member_func_t<void, SoundObj>>(0x4E5AE0, this);
    }

    // 0x4E5B50 | ?UpdatePlayEcho@SoundObj@@QAEXXZ
    inline void UpdatePlayEcho()
    {
        return stub<member_func_t<void, SoundObj>>(0x4E5B50, this);
    }

    // 0x4E5C50 | ?UpdateStopEcho@SoundObj@@QAEXXZ
    inline void UpdateStopEcho()
    {
        return stub<member_func_t<void, SoundObj>>(0x4E5C50, this);
    }

    // 0x4E5D10 | ?UpdateVolumeEcho@SoundObj@@QAEXXZ
    inline void UpdateVolumeEcho()
    {
        return stub<member_func_t<void, SoundObj>>(0x4E5D10, this);
    }

    // 0x4E5DD0 | ?UpdatePitchEcho@SoundObj@@QAEXXZ
    inline void UpdatePitchEcho()
    {
        return stub<member_func_t<void, SoundObj>>(0x4E5DD0, this);
    }

    // 0x4E5E90 | ?DisableEffect@SoundObj@@QAEXF@Z
    inline void DisableEffect(int16_t arg1)
    {
        return stub<member_func_t<void, SoundObj, int16_t>>(0x4E5E90, this, arg1);
    }

    // 0x4E5F90 | ?CreateListenerEAXObj@SoundObj@@QAEGXZ
    inline uint16_t CreateListenerEAXObj()
    {
        return stub<member_func_t<uint16_t, SoundObj>>(0x4E5F90, this);
    }

    // 0x4E6030 | ?CreateSecondaryEAXObj@SoundObj@@QAEGXZ
    inline uint16_t CreateSecondaryEAXObj()
    {
        return stub<member_func_t<uint16_t, SoundObj>>(0x4E6030, this);
    }

    // 0x4E60F0 | ?GetFormat@SoundObj@@QAEPAUtWAVEFORMATEX@@XZ
    inline struct tWAVEFORMATEX* GetFormat()
    {
        return stub<member_func_t<struct tWAVEFORMATEX*, SoundObj>>(0x4E60F0, this);
    }

    // 0x4E6170 | ?Enable3DMode@SoundObj@@QAEXXZ
    inline void Enable3DMode()
    {
        return stub<member_func_t<void, SoundObj>>(0x4E6170, this);
    }

    // 0x4E61A0 | ?Disable3DMode@SoundObj@@QAEXXZ
    inline void Disable3DMode()
    {
        return stub<member_func_t<void, SoundObj>>(0x4E61A0, this);
    }
};
