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
    mmaudio:soundobj

    0x4E3740 | public: __thiscall SoundObj::SoundObj(void) | ??0SoundObj@@QAE@XZ
    0x4E3800 | public: __thiscall SoundObj::~SoundObj(void) | ??1SoundObj@@QAE@XZ
    0x4E38C0 | public: void __thiscall SoundObj::DeallocateEffects(void) | ?DeallocateEffects@SoundObj@@QAEXXZ
    0x4E3990 | public: void __thiscall SoundObj::SetDelayTime(float) | ?SetDelayTime@SoundObj@@QAEXM@Z
    0x4E3AB0 | public: short __thiscall SoundObj::SetupOneShotLayerBuffers(short,float,char *) | ?SetupOneShotLayerBuffers@SoundObj@@QAEFFMPAD@Z
    0x4E3B40 | public: void __thiscall SoundObj::FreeOneShotLayerBuffers(void) | ?FreeOneShotLayerBuffers@SoundObj@@QAEXXZ
    0x4E3BC0 | public: int __thiscall SoundObj::DSCreateSoundBuffer(struct IDirectSoundBuffer * *,unsigned char) | ?DSCreateSoundBuffer@SoundObj@@QAEHPAPAUIDirectSoundBuffer@@E@Z
    0x4E3C50 | public: struct IDirectSoundBuffer * __thiscall SoundObj::DSLoadSoundBuffer(char const *,unsigned long) | ?DSLoadSoundBuffer@SoundObj@@QAEPAUIDirectSoundBuffer@@PBDK@Z
    0x4E3E30 | public: void __thiscall SoundObj::DSLoadSoundBuffer(unsigned short,unsigned long) | ?DSLoadSoundBuffer@SoundObj@@QAEXGK@Z
    0x4E3F70 | public: void __thiscall SoundObj::ReadADFRecord(unsigned short) | ?ReadADFRecord@SoundObj@@QAEXG@Z
    0x4E4130 | public: int __thiscall SoundObj::DSGetWaveResource(struct HINSTANCE__ *,char const *,struct tWAVEFORMATEX * *,unsigned char * *,unsigned long *) | ?DSGetWaveResource@SoundObj@@QAEHPAUHINSTANCE__@@PBDPAPAUtWAVEFORMATEX@@PAPAEPAK@Z
    0x4E4210 | public: void __thiscall SoundObj::ConvertTo8Bit(void) | ?ConvertTo8Bit@SoundObj@@QAEXXZ
    0x4E4370 | public: int __thiscall SoundObj::DSGetWaveFile(struct HINSTANCE__ *,char const *,struct tWAVEFORMATEX * *,unsigned char * *,unsigned long *,void * *) | ?DSGetWaveFile@SoundObj@@QAEHPAUHINSTANCE__@@PBDPAPAUtWAVEFORMATEX@@PAPAEPAKPAPAX@Z
    0x4E4640 | public: int __thiscall SoundObj::InitDummy(void) | ?InitDummy@SoundObj@@QAEHXZ
    0x4E47F0 | public: int __thiscall SoundObj::Init(char const *,unsigned long,short) | ?Init@SoundObj@@QAEHPBDKF@Z
    0x4E48B0 | public: int __thiscall SoundObj::Init(unsigned short,unsigned long,short) | ?Init@SoundObj@@QAEHGKF@Z
    0x4E4960 | public: void __thiscall SoundObj::SetEffect(short,char *) | ?SetEffect@SoundObj@@QAEXFPAD@Z
    0x4E4AE0 | public: void __thiscall SoundObj::SetPlayPosition(unsigned long) | ?SetPlayPosition@SoundObj@@QAEXK@Z
    0x4E4B00 | public: int __thiscall SoundObj::Play(unsigned long,char *) | ?Play@SoundObj@@QAEHKPAD@Z
    0x4E4D40 | public: int __thiscall SoundObj::Stop(void) | ?Stop@SoundObj@@QAEHXZ
    0x4E4DD0 | public: void __thiscall SoundObj::StopEchoBuffers(void) | ?StopEchoBuffers@SoundObj@@QAEXXZ
    0x4E4DF0 | public: int __thiscall SoundObj::DSFillSoundBuffer(struct IDirectSoundBuffer *) | ?DSFillSoundBuffer@SoundObj@@QAEHPAUIDirectSoundBuffer@@@Z
    0x4E4EB0 | public: int __thiscall SoundObj::DSParseWaveResource(void *,struct tWAVEFORMATEX * *,unsigned char * *,unsigned long *) | ?DSParseWaveResource@SoundObj@@QAEHPAXPAPAUtWAVEFORMATEX@@PAPAEPAK@Z
    0x4E4FB0 | public: short __thiscall SoundObj::IsPlaying(short) | ?IsPlaying@SoundObj@@QAEFF@Z
    0x4E5090 | public: short __thiscall SoundObj::ReadyOneShotLayerBuf(void) | ?ReadyOneShotLayerBuf@SoundObj@@QAEFXZ
    0x4E5120 | public: short __thiscall SoundObj::AllOneShotLayersPlaying(void) | ?AllOneShotLayersPlaying@SoundObj@@QAEFXZ
    0x4E51C0 | public: void __thiscall SoundObj::SetPosition(float,float,float) | ?SetPosition@SoundObj@@QAEXMMM@Z
    0x4E5200 | public: void __thiscall SoundObj::SetVelocity(float,float,float) | ?SetVelocity@SoundObj@@QAEXMMM@Z
    0x4E5240 | public: void __thiscall SoundObj::SetFrequency(float) | ?SetFrequency@SoundObj@@QAEXM@Z
    0x4E5480 | public: void __thiscall SoundObj::SetEchoFrequency(float) | ?SetEchoFrequency@SoundObj@@QAEXM@Z
    0x4E5540 | public: void __thiscall SoundObj::SetVolume(float) | ?SetVolume@SoundObj@@QAEXM@Z
    0x4E5680 | public: void __thiscall SoundObj::SetPan(float) | ?SetPan@SoundObj@@QAEXM@Z
    0x4E57C0 | public: void __thiscall SoundObj::SetEchoPan(float) | ?SetEchoPan@SoundObj@@QAEXM@Z
    0x4E57F0 | public: void __thiscall SoundObj::SetRamp(float,float) | ?SetRamp@SoundObj@@QAEXMM@Z
    0x4E5820 | public: void __thiscall SoundObj::Set3DMode(unsigned long) | ?Set3DMode@SoundObj@@QAEXK@Z
    0x4E5840 | public: void __thiscall SoundObj::SetConeOutsideVolume(long) | ?SetConeOutsideVolume@SoundObj@@QAEXJ@Z
    0x4E5870 | public: void __thiscall SoundObj::SetConeAngles(unsigned long,unsigned long) | ?SetConeAngles@SoundObj@@QAEXKK@Z
    0x4E58B0 | public: void __thiscall SoundObj::SetConeOrientation(class Vector3 *) | ?SetConeOrientation@SoundObj@@QAEXPAVVector3@@@Z
    0x4E58E0 | public: struct IDirectSoundBuffer * __thiscall SoundObj::SetupDuplicateBuffer(char *) | ?SetupDuplicateBuffer@SoundObj@@QAEPAUIDirectSoundBuffer@@PAD@Z
    0x4E5990 | public: void __thiscall SoundObj::SetupEchoBuffer(char *) | ?SetupEchoBuffer@SoundObj@@QAEXPAD@Z
    0x4E5A30 | private: struct IDirectSoundBuffer * __thiscall SoundObj::SetupChorusBuffer(char *) | ?SetupChorusBuffer@SoundObj@@AAEPAUIDirectSoundBuffer@@PAD@Z
    0x4E5AB0 | public: void __thiscall SoundObj::UpdateSeconds(void) | ?UpdateSeconds@SoundObj@@QAEXXZ
    0x4E5AE0 | public: void __thiscall SoundObj::UpdateEcho(void) | ?UpdateEcho@SoundObj@@QAEXXZ
    0x4E5B50 | public: void __thiscall SoundObj::UpdatePlayEcho(void) | ?UpdatePlayEcho@SoundObj@@QAEXXZ
    0x4E5C50 | public: void __thiscall SoundObj::UpdateStopEcho(void) | ?UpdateStopEcho@SoundObj@@QAEXXZ
    0x4E5D10 | public: void __thiscall SoundObj::UpdateVolumeEcho(void) | ?UpdateVolumeEcho@SoundObj@@QAEXXZ
    0x4E5DD0 | public: void __thiscall SoundObj::UpdatePitchEcho(void) | ?UpdatePitchEcho@SoundObj@@QAEXXZ
    0x4E5E90 | public: void __thiscall SoundObj::DisableEffect(short) | ?DisableEffect@SoundObj@@QAEXF@Z
    0x4E5F90 | public: unsigned short __thiscall SoundObj::CreateListenerEAXObj(void) | ?CreateListenerEAXObj@SoundObj@@QAEGXZ
    0x4E6030 | public: unsigned short __thiscall SoundObj::CreateSecondaryEAXObj(void) | ?CreateSecondaryEAXObj@SoundObj@@QAEGXZ
    0x4E60F0 | public: struct tWAVEFORMATEX * __thiscall SoundObj::GetFormat(void) | ?GetFormat@SoundObj@@QAEPAUtWAVEFORMATEX@@XZ
    0x4E6170 | public: void __thiscall SoundObj::Enable3DMode(void) | ?Enable3DMode@SoundObj@@QAEXXZ
    0x4E61A0 | public: void __thiscall SoundObj::Disable3DMode(void) | ?Disable3DMode@SoundObj@@QAEXXZ
*/

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
