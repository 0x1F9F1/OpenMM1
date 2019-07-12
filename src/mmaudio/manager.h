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
    mmaudio:manager

    0x4DAD80 | public: __thiscall AudManager::AudManager(void) | ??0AudManager@@QAE@XZ
    0x4DAEC0 | public: virtual __thiscall AudManager::~AudManager(void) | ??1AudManager@@UAE@XZ
    0x4DB000 | public: void __thiscall AudManager::DeallocateADFRecord(int) | ?DeallocateADFRecord@AudManager@@QAEXH@Z
    0x4DB030 | public: void __thiscall AudManager::SetNumChannels(int) | ?SetNumChannels@AudManager@@QAEXH@Z
    0x4DB0F0 | public: int __thiscall AudManager::CheckPriority(int,int,int) | ?CheckPriority@AudManager@@QAEHHHH@Z
    0x4DB390 | public: void __thiscall AudManager::RemoveSoundFromPlayList(class AudSound *) | ?RemoveSoundFromPlayList@AudManager@@QAEXPAVAudSound@@@Z
    0x4DB3D0 | public: void __thiscall AudManager::RemoveSoundFromPlayList(int) | ?RemoveSoundFromPlayList@AudManager@@QAEXH@Z
    0x4DB420 | public: virtual void __thiscall AudManager::Update(void) | ?Update@AudManager@@UAEXXZ
    0x4DB450 | public: void __thiscall AudManager::Init(int,unsigned int,char *,short,short) | ?Init@AudManager@@QAEXHIPADFF@Z
    0x4DB580 | public: void __thiscall AudManager::LoadUIADF(void) | ?LoadUIADF@AudManager@@QAEXXZ
    0x4DB5E0 | public: void __thiscall AudManager::LoadCityADF(int,unsigned long) | ?LoadCityADF@AudManager@@QAEXHK@Z
    0x4DB690 | public: void __thiscall AudManager::InitCityADF(int,unsigned long) | ?InitCityADF@AudManager@@QAEXHK@Z
    0x4DB740 | public: void __thiscall AudManager::InitUIADF(int,unsigned long) | ?InitUIADF@AudManager@@QAEXHK@Z
    0x4DB7D0 | public: void __thiscall AudManager::DeallocateUIADF(void) | ?DeallocateUIADF@AudManager@@QAEXXZ
    0x4DB7E0 | public: void __thiscall AudManager::DeallocateCityADF(void) | ?DeallocateCityADF@AudManager@@QAEXXZ
    0x4DB7F0 | public: void __thiscall AudManager::DeallocateDSound(short,short) | ?DeallocateDSound@AudManager@@QAEXFF@Z
    0x4DB970 | public: void __thiscall AudManager::ReallocateDSound(char *,short,short) | ?ReallocateDSound@AudManager@@QAEXPADFF@Z
    0x4DBB00 | public: void __thiscall AudManager::SetStereo(int) | ?SetStereo@AudManager@@QAEXH@Z
    0x4DBB30 | public: void __thiscall AudManager::AttenuateAudSounds(float) | ?AttenuateAudSounds@AudManager@@QAEXM@Z
    0x4DBBA0 | public: int __thiscall AudManager::AddSound(class AudSound *) | ?AddSound@AudManager@@QAEHPAVAudSound@@@Z
    0x4DBC00 | public: int __thiscall AudManager::AddStream(class AudStream *) | ?AddStream@AudManager@@QAEHPAVAudStream@@@Z
    0x4DBC50 | public: void __thiscall AudManager::RemoveSound(class AudSound *,int) | ?RemoveSound@AudManager@@QAEXPAVAudSound@@H@Z
    0x4DBCC0 | public: void __thiscall AudManager::RemoveStream(class AudStream *,int) | ?RemoveStream@AudManager@@QAEXPAVAudStream@@H@Z
    0x4DBD30 | public: virtual void __thiscall AudManager::Reset(void) | ?Reset@AudManager@@UAEXXZ
    0x4DBD40 | public: void __thiscall AudManager::Enable(char *,short,short) | ?Enable@AudManager@@QAEXPADFF@Z
    0x4DBDF0 | public: void __thiscall AudManager::Disable(short,short) | ?Disable@AudManager@@QAEXFF@Z
    0x4DBEE0 | public: void __thiscall AudManager::StopAllSounds(void) | ?StopAllSounds@AudManager@@QAEXXZ
    0x4DBF80 | public: void __thiscall AudManager::ZeroVolAllSounds(void) | ?ZeroVolAllSounds@AudManager@@QAEXXZ
    0x4DBF90 | public: int __thiscall AudManager::PlayCDTrack(int,int) | ?PlayCDTrack@AudManager@@QAEHHH@Z
    0x4DBFC0 | public: int __thiscall AudManager::PlayCDTrack(int,unsigned char,unsigned char,unsigned char,int) | ?PlayCDTrack@AudManager@@QAEHHEEEH@Z
    0x4DC000 | public: int __thiscall AudManager::ResumeCDPlay(void) | ?ResumeCDPlay@AudManager@@QAEHXZ
    0x4DC020 | public: short __thiscall AudManager::GetNumCDTracks(void) | ?GetNumCDTracks@AudManager@@QAEFXZ
    0x4DC040 | public: unsigned char __thiscall AudManager::GetCDTrackNum(void) | ?GetCDTrackNum@AudManager@@QAEEXZ
    0x4DC060 | public: short __thiscall AudManager::CDIsPlaying(void) | ?CDIsPlaying@AudManager@@QAEFXZ
    0x4DC080 | public: void __thiscall AudManager::DisableCD(void) | ?DisableCD@AudManager@@QAEXXZ
    0x4DC0A0 | public: void __thiscall AudManager::StopCD(void) | ?StopCD@AudManager@@QAEXXZ
    0x4DC0C0 | public: int __thiscall AudManager::EnableCD(void) | ?EnableCD@AudManager@@QAEHXZ
    0x4DC0F0 | public: void __thiscall AudManager::AssignWaveVolume(float) | ?AssignWaveVolume@AudManager@@QAEXM@Z
    0x4DC110 | public: float __thiscall AudManager::GetWaveVolume(void) | ?GetWaveVolume@AudManager@@QAEMXZ
    0x4DC130 | public: void __thiscall AudManager::AssignCDVolume(float) | ?AssignCDVolume@AudManager@@QAEXM@Z
    0x4DC170 | public: void __thiscall AudManager::SetCDPlayMode(unsigned char) | ?SetCDPlayMode@AudManager@@QAEXE@Z
    0x4DC1A0 | public: int __thiscall AudManager::CDIsEnabled(void) | ?CDIsEnabled@AudManager@@QAEHXZ
    0x4DC1C0 | public: float __thiscall AudManager::GetCDVolume(void) | ?GetCDVolume@AudManager@@QAEMXZ
    0x4DC1F0 | public: void __thiscall AudManager::AttenuateCDVolume(float) | ?AttenuateCDVolume@AudManager@@QAEXM@Z
    0x4DC230 | public: void __thiscall AudManager::AssignWaveBalance(float) | ?AssignWaveBalance@AudManager@@QAEXM@Z
    0x4DC250 | public: float __thiscall AudManager::GetWaveBalance(void) | ?GetWaveBalance@AudManager@@QAEMXZ
    0x4DC270 | public: void __thiscall AudManager::AssignCDBalance(float) | ?AssignCDBalance@AudManager@@QAEXM@Z
    0x4DC290 | public: float __thiscall AudManager::GetCDBalance(void) | ?GetCDBalance@AudManager@@QAEMXZ
    0x4DC2C0 | public: int __thiscall AudManager::IsStereo(void) | ?IsStereo@AudManager@@QAEHXZ
    0x4DC2D0 | public: void __thiscall AudManager::AddWidgets(class Bank *) | ?AddWidgets@AudManager@@QAEXPAVBank@@@Z
    0x4DC2E0 | public: short __thiscall AudManager::Supports16Bit(void) | ?Supports16Bit@AudManager@@QAEFXZ
    0x4DC2F0 | public: unsigned char __thiscall AudManager::CheckCDFile(char *) | ?CheckCDFile@AudManager@@QAEEPAD@Z
    0x4DC310 | private: void __thiscall AudManager::Update3DCDMusic(void) | ?Update3DCDMusic@AudManager@@AAEXXZ
    0x4DC470 | public: static unsigned int const __cdecl AudManager::GetUsingEAXMask(void) | ?GetUsingEAXMask@AudManager@@SA?BIXZ
    0x4DC480 | public: unsigned int __thiscall AudManager::IsAlwaysEAX(void) | ?IsAlwaysEAX@AudManager@@QAEIXZ
    0x4DC490 | public: void __thiscall AudManager::AlwaysEAX(unsigned int) | ?AlwaysEAX@AudManager@@QAEXI@Z
    0x4DC4C0 | public: unsigned int __thiscall AudManager::EAXEnabled(void) | ?EAXEnabled@AudManager@@QAEIXZ
    0x4DC4D0 | public: unsigned int __thiscall AudManager::DSound3DEnabled(void) | ?DSound3DEnabled@AudManager@@QAEIXZ
    0x4DC4E0 | private: unsigned int __thiscall AudManager::CreateListenerSoundObj(void) | ?CreateListenerSoundObj@AudManager@@AAEIXZ
    0x4DC620 | private: class CReverb * __thiscall AudManager::GetListenerEAXObj(void) | ?GetListenerEAXObj@AudManager@@AAEPAVCReverb@@XZ
    0x4DC630 | public: int __thiscall AudManager::SetEAXPreset(unsigned long,float,float,float) | ?SetEAXPreset@AudManager@@QAEHKMMM@Z
    0x4DC6B0 | public: int __thiscall AudManager::SetEAXPreset(struct EAX_REVERBPROPERTIES *) | ?SetEAXPreset@AudManager@@QAEHPAUEAX_REVERBPROPERTIES@@@Z
    0x4DC720 | public: void __thiscall AudManager::GetEAXAll(struct EAX_REVERBPROPERTIES *) | ?GetEAXAll@AudManager@@QAEXPAUEAX_REVERBPROPERTIES@@@Z
    0x4DC770 | public: int __thiscall AudManager::SetEAXEnvironmet(unsigned long) | ?SetEAXEnvironmet@AudManager@@QAEHK@Z
    0x4DC7E0 | public: unsigned long __thiscall AudManager::GetEAXEnvironmet(void) | ?GetEAXEnvironmet@AudManager@@QAEKXZ
    0x4DC830 | public: int __thiscall AudManager::SetEAXReverbVolume(float) | ?SetEAXReverbVolume@AudManager@@QAEHM@Z
    0x4DC8A0 | public: float __thiscall AudManager::GetEAXReverbVolume(void) | ?GetEAXReverbVolume@AudManager@@QAEMXZ
    0x4DC8F0 | public: int __thiscall AudManager::SetEAXDecayTime(float) | ?SetEAXDecayTime@AudManager@@QAEHM@Z
    0x4DC960 | public: float __thiscall AudManager::GetEAXDecayTime(void) | ?GetEAXDecayTime@AudManager@@QAEMXZ
    0x4DC9B0 | public: int __thiscall AudManager::SetEAXDamping(float) | ?SetEAXDamping@AudManager@@QAEHM@Z
    0x4DCA20 | public: float __thiscall AudManager::GetEAXDamping(void) | ?GetEAXDamping@AudManager@@QAEMXZ
    0x4DCA70 | public: virtual void __thiscall AudManager::UpdatePaused(void) | ?UpdatePaused@AudManager@@UAEXXZ
    0x4DCA90 | public: void __thiscall AudManager::SetBitDepthAndSampleRate(int,unsigned long) | ?SetBitDepthAndSampleRate@AudManager@@QAEXHK@Z
    0x4DCB20 | public: char * * __thiscall AudManager::GetDeviceNames(void) | ?GetDeviceNames@AudManager@@QAEPAPADXZ
    0x4DCB40 | public: int __thiscall AudManager::GetNumDevices(void) | ?GetNumDevices@AudManager@@QAEHXZ
    0x4DCB60 | public: char * __thiscall AudManager::GetActiveDeviceName(void) | ?GetActiveDeviceName@AudManager@@QAEPADXZ
    0x4DCB80 | public: unsigned long __thiscall AudManager::GetNum3DHalBufs(void) | ?GetNum3DHalBufs@AudManager@@QAEKXZ
    0x4DCB90 | public: static unsigned int const __cdecl AudManager::GetStereoOnMask(void) | ?GetStereoOnMask@AudManager@@SA?BIXZ
    0x4DCBA0 | public: static unsigned int const __cdecl AudManager::GetHiResMask(void) | ?GetHiResMask@AudManager@@SA?BIXZ
    0x4DCBB0 | public: static unsigned int const __cdecl AudManager::GetHiSampleSizeMask(void) | ?GetHiSampleSizeMask@AudManager@@SA?BIXZ
    0x4DCBC0 | public: static unsigned int const __cdecl AudManager::GetEchoOnMask(void) | ?GetEchoOnMask@AudManager@@SA?BIXZ
    0x4DCBD0 | public: static unsigned int const __cdecl AudManager::GetDSound3DMask(void) | ?GetDSound3DMask@AudManager@@SA?BIXZ
    0x4DCBE0 | public: static unsigned int const __cdecl AudManager::GetSoundFXOnMask(void) | ?GetSoundFXOnMask@AudManager@@SA?BIXZ
    0x4DCBF0 | public: static unsigned int const __cdecl AudManager::GetCDMusicOnMask(void) | ?GetCDMusicOnMask@AudManager@@SA?BIXZ
    0x4DCC00 | public: static unsigned int const __cdecl AudManager::GetCommentaryOnMask(void) | ?GetCommentaryOnMask@AudManager@@SA?BIXZ
    0x4DCC10 | public: void __thiscall AudManager::SetDeviceName(char *) | ?SetDeviceName@AudManager@@QAEXPAD@Z
    0x4DCC50 | public: unsigned long __thiscall AudManager::GetCDPosition(unsigned char *,unsigned char *,unsigned char *,unsigned char *) | ?GetCDPosition@AudManager@@QAEKPAE000@Z
    0x4DCC90 | public: class MixerCTL * __thiscall AudManager::GetMixerPtr(void) | ?GetMixerPtr@AudManager@@QAEPAVMixerCTL@@XZ
    0x4DCCA0 | public: class mmVoiceCommentary * __thiscall AudManager::GetVoiceCommentaryPtr(void) | ?GetVoiceCommentaryPtr@AudManager@@QAEPAVmmVoiceCommentary@@XZ
    0x4DCCB0 | public: void __thiscall AudManager::SetVoiceCommentaryPtr(class mmVoiceCommentary *) | ?SetVoiceCommentaryPtr@AudManager@@QAEXPAVmmVoiceCommentary@@@Z
    0x4DCCC0 | public: void __thiscall AudManager::SetHwnd(struct HWND__ *) | ?SetHwnd@AudManager@@QAEXPAUHWND__@@@Z
    0x4DCCE0 | void __cdecl DeactivateApplication(void) | ?DeactivateApplication@@YAXXZ
    0x4DCD40 | void __cdecl RestoreApplication(void) | ?RestoreApplication@@YAXXZ
    0x4DCD80 | public: static void __cdecl AudManager::DeclareFields(void) | ?DeclareFields@AudManager@@SAXXZ
    0x4DCEF0 | public: virtual class MetaClass * __thiscall AudManager::GetClass(void) | ?GetClass@AudManager@@UAEPAVMetaClass@@XZ
    0x4DCF00 | public: virtual void * __thiscall AudManager::`vector deleting destructor'(unsigned int) | ??_EAudManager@@UAEPAXI@Z
    0x594840 | const AudManager::`vftable' | ??_7AudManager@@6B@
    0x67B5C8 | class MetaClass AudManagerMetaClass | ?AudManagerMetaClass@@3VMetaClass@@A
    0x67B5F0 | class AudManager * AUDMGRPTR | ?AUDMGRPTR@@3PAVAudManager@@A
    0x4DCD30 | void __cdecl Debugf(char const *,...) | ?Debugf@@YAXPBDZZ
    0x4DCDD0 | void * __cdecl new_AudManager(int) | ?new_AudManager@@YAPAXH@Z
    0x4DCEA0 | void __cdecl delete_AudManager(void *,int) | ?delete_AudManager@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x4DCCE0 | ?DeactivateApplication@@YAXXZ
inline void DeactivateApplication()
{
    return stub<cdecl_t<void>>(0x4DCCE0);
}

// 0x4DCD40 | ?RestoreApplication@@YAXXZ
inline void RestoreApplication()
{
    return stub<cdecl_t<void>>(0x4DCD40);
}

// 0x67B5C8 | ?AudManagerMetaClass@@3VMetaClass@@A
inline extern_var(0x67B5C8, class MetaClass, AudManagerMetaClass);

// 0x67B5F0 | ?AUDMGRPTR@@3PAVAudManager@@A
inline extern_var(0x67B5F0, class AudManager*, AUDMGRPTR);

// 0x4DCD30 | ?Debugf@@YAXPBDZZ
// Skipped (Variable Arguments)

// 0x4DCDD0 | ?new_AudManager@@YAPAXH@Z
inline void* new_AudManager(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4DCDD0, arg1);
}

// 0x4DCEA0 | ?delete_AudManager@@YAXPAXH@Z
inline void delete_AudManager(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4DCEA0, arg1, arg2);
}

class AudManager : asNode
{
public:
    // AudManager::`vftable' @ 0x594840

    // 0x4DAD80 | ??0AudManager@@QAE@XZ
    inline AudManager()
    {
        // stub<member_func_t<void, AudManager>>(0x4DAD80, this);

        unimplemented();
    }

    // 0x4DB000 | ?DeallocateADFRecord@AudManager@@QAEXH@Z
    inline void DeallocateADFRecord(int32_t arg1)
    {
        return stub<member_func_t<void, AudManager, int32_t>>(0x4DB000, this, arg1);
    }

    // 0x4DB030 | ?SetNumChannels@AudManager@@QAEXH@Z
    inline void SetNumChannels(int32_t arg1)
    {
        return stub<member_func_t<void, AudManager, int32_t>>(0x4DB030, this, arg1);
    }

    // 0x4DB0F0 | ?CheckPriority@AudManager@@QAEHHHH@Z
    inline int32_t CheckPriority(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, AudManager, int32_t, int32_t, int32_t>>(0x4DB0F0, this, arg1, arg2, arg3);
    }

    // 0x4DB390 | ?RemoveSoundFromPlayList@AudManager@@QAEXPAVAudSound@@@Z
    inline void RemoveSoundFromPlayList(class AudSound* arg1)
    {
        return stub<member_func_t<void, AudManager, class AudSound*>>(0x4DB390, this, arg1);
    }

    // 0x4DB3D0 | ?RemoveSoundFromPlayList@AudManager@@QAEXH@Z
    inline void RemoveSoundFromPlayList(int32_t arg1)
    {
        return stub<member_func_t<void, AudManager, int32_t>>(0x4DB3D0, this, arg1);
    }

    // 0x4DB450 | ?Init@AudManager@@QAEXHIPADFF@Z
    inline void Init(int32_t arg1, uint32_t arg2, char* arg3, int16_t arg4, int16_t arg5)
    {
        return stub<member_func_t<void, AudManager, int32_t, uint32_t, char*, int16_t, int16_t>>(
            0x4DB450, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4DB580 | ?LoadUIADF@AudManager@@QAEXXZ
    inline void LoadUIADF()
    {
        return stub<member_func_t<void, AudManager>>(0x4DB580, this);
    }

    // 0x4DB5E0 | ?LoadCityADF@AudManager@@QAEXHK@Z
    inline void LoadCityADF(int32_t arg1, uint32_t arg2)
    {
        return stub<member_func_t<void, AudManager, int32_t, uint32_t>>(0x4DB5E0, this, arg1, arg2);
    }

    // 0x4DB690 | ?InitCityADF@AudManager@@QAEXHK@Z
    inline void InitCityADF(int32_t arg1, uint32_t arg2)
    {
        return stub<member_func_t<void, AudManager, int32_t, uint32_t>>(0x4DB690, this, arg1, arg2);
    }

    // 0x4DB740 | ?InitUIADF@AudManager@@QAEXHK@Z
    inline void InitUIADF(int32_t arg1, uint32_t arg2)
    {
        return stub<member_func_t<void, AudManager, int32_t, uint32_t>>(0x4DB740, this, arg1, arg2);
    }

    // 0x4DB7D0 | ?DeallocateUIADF@AudManager@@QAEXXZ
    inline void DeallocateUIADF()
    {
        return stub<member_func_t<void, AudManager>>(0x4DB7D0, this);
    }

    // 0x4DB7E0 | ?DeallocateCityADF@AudManager@@QAEXXZ
    inline void DeallocateCityADF()
    {
        return stub<member_func_t<void, AudManager>>(0x4DB7E0, this);
    }

    // 0x4DB7F0 | ?DeallocateDSound@AudManager@@QAEXFF@Z
    inline void DeallocateDSound(int16_t arg1, int16_t arg2)
    {
        return stub<member_func_t<void, AudManager, int16_t, int16_t>>(0x4DB7F0, this, arg1, arg2);
    }

    // 0x4DB970 | ?ReallocateDSound@AudManager@@QAEXPADFF@Z
    inline void ReallocateDSound(char* arg1, int16_t arg2, int16_t arg3)
    {
        return stub<member_func_t<void, AudManager, char*, int16_t, int16_t>>(0x4DB970, this, arg1, arg2, arg3);
    }

    // 0x4DBB00 | ?SetStereo@AudManager@@QAEXH@Z
    inline void SetStereo(int32_t arg1)
    {
        return stub<member_func_t<void, AudManager, int32_t>>(0x4DBB00, this, arg1);
    }

    // 0x4DBB30 | ?AttenuateAudSounds@AudManager@@QAEXM@Z
    inline void AttenuateAudSounds(float arg1)
    {
        return stub<member_func_t<void, AudManager, float>>(0x4DBB30, this, arg1);
    }

    // 0x4DBBA0 | ?AddSound@AudManager@@QAEHPAVAudSound@@@Z
    inline int32_t AddSound(class AudSound* arg1)
    {
        return stub<member_func_t<int32_t, AudManager, class AudSound*>>(0x4DBBA0, this, arg1);
    }

    // 0x4DBC00 | ?AddStream@AudManager@@QAEHPAVAudStream@@@Z
    inline int32_t AddStream(class AudStream* arg1)
    {
        return stub<member_func_t<int32_t, AudManager, class AudStream*>>(0x4DBC00, this, arg1);
    }

    // 0x4DBC50 | ?RemoveSound@AudManager@@QAEXPAVAudSound@@H@Z
    inline void RemoveSound(class AudSound* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, AudManager, class AudSound*, int32_t>>(0x4DBC50, this, arg1, arg2);
    }

    // 0x4DBCC0 | ?RemoveStream@AudManager@@QAEXPAVAudStream@@H@Z
    inline void RemoveStream(class AudStream* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, AudManager, class AudStream*, int32_t>>(0x4DBCC0, this, arg1, arg2);
    }

    // 0x4DBD40 | ?Enable@AudManager@@QAEXPADFF@Z
    inline void Enable(char* arg1, int16_t arg2, int16_t arg3)
    {
        return stub<member_func_t<void, AudManager, char*, int16_t, int16_t>>(0x4DBD40, this, arg1, arg2, arg3);
    }

    // 0x4DBDF0 | ?Disable@AudManager@@QAEXFF@Z
    inline void Disable(int16_t arg1, int16_t arg2)
    {
        return stub<member_func_t<void, AudManager, int16_t, int16_t>>(0x4DBDF0, this, arg1, arg2);
    }

    // 0x4DBEE0 | ?StopAllSounds@AudManager@@QAEXXZ
    inline void StopAllSounds()
    {
        return stub<member_func_t<void, AudManager>>(0x4DBEE0, this);
    }

    // 0x4DBF80 | ?ZeroVolAllSounds@AudManager@@QAEXXZ
    inline void ZeroVolAllSounds()
    {
        return stub<member_func_t<void, AudManager>>(0x4DBF80, this);
    }

    // 0x4DBF90 | ?PlayCDTrack@AudManager@@QAEHHH@Z
    inline int32_t PlayCDTrack(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, AudManager, int32_t, int32_t>>(0x4DBF90, this, arg1, arg2);
    }

    // 0x4DBFC0 | ?PlayCDTrack@AudManager@@QAEHHEEEH@Z
    inline int32_t PlayCDTrack(int32_t arg1, uint8_t arg2, uint8_t arg3, uint8_t arg4, int32_t arg5)
    {
        return stub<member_func_t<int32_t, AudManager, int32_t, uint8_t, uint8_t, uint8_t, int32_t>>(
            0x4DBFC0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4DC000 | ?ResumeCDPlay@AudManager@@QAEHXZ
    inline int32_t ResumeCDPlay()
    {
        return stub<member_func_t<int32_t, AudManager>>(0x4DC000, this);
    }

    // 0x4DC020 | ?GetNumCDTracks@AudManager@@QAEFXZ
    inline int16_t GetNumCDTracks()
    {
        return stub<member_func_t<int16_t, AudManager>>(0x4DC020, this);
    }

    // 0x4DC040 | ?GetCDTrackNum@AudManager@@QAEEXZ
    inline uint8_t GetCDTrackNum()
    {
        return stub<member_func_t<uint8_t, AudManager>>(0x4DC040, this);
    }

    // 0x4DC060 | ?CDIsPlaying@AudManager@@QAEFXZ
    inline int16_t CDIsPlaying()
    {
        return stub<member_func_t<int16_t, AudManager>>(0x4DC060, this);
    }

    // 0x4DC080 | ?DisableCD@AudManager@@QAEXXZ
    inline void DisableCD()
    {
        return stub<member_func_t<void, AudManager>>(0x4DC080, this);
    }

    // 0x4DC0A0 | ?StopCD@AudManager@@QAEXXZ
    inline void StopCD()
    {
        return stub<member_func_t<void, AudManager>>(0x4DC0A0, this);
    }

    // 0x4DC0C0 | ?EnableCD@AudManager@@QAEHXZ
    inline int32_t EnableCD()
    {
        return stub<member_func_t<int32_t, AudManager>>(0x4DC0C0, this);
    }

    // 0x4DC0F0 | ?AssignWaveVolume@AudManager@@QAEXM@Z
    inline void AssignWaveVolume(float arg1)
    {
        return stub<member_func_t<void, AudManager, float>>(0x4DC0F0, this, arg1);
    }

    // 0x4DC110 | ?GetWaveVolume@AudManager@@QAEMXZ
    inline float GetWaveVolume()
    {
        return stub<member_func_t<float, AudManager>>(0x4DC110, this);
    }

    // 0x4DC130 | ?AssignCDVolume@AudManager@@QAEXM@Z
    inline void AssignCDVolume(float arg1)
    {
        return stub<member_func_t<void, AudManager, float>>(0x4DC130, this, arg1);
    }

    // 0x4DC170 | ?SetCDPlayMode@AudManager@@QAEXE@Z
    inline void SetCDPlayMode(uint8_t arg1)
    {
        return stub<member_func_t<void, AudManager, uint8_t>>(0x4DC170, this, arg1);
    }

    // 0x4DC1A0 | ?CDIsEnabled@AudManager@@QAEHXZ
    inline int32_t CDIsEnabled()
    {
        return stub<member_func_t<int32_t, AudManager>>(0x4DC1A0, this);
    }

    // 0x4DC1C0 | ?GetCDVolume@AudManager@@QAEMXZ
    inline float GetCDVolume()
    {
        return stub<member_func_t<float, AudManager>>(0x4DC1C0, this);
    }

    // 0x4DC1F0 | ?AttenuateCDVolume@AudManager@@QAEXM@Z
    inline void AttenuateCDVolume(float arg1)
    {
        return stub<member_func_t<void, AudManager, float>>(0x4DC1F0, this, arg1);
    }

    // 0x4DC230 | ?AssignWaveBalance@AudManager@@QAEXM@Z
    inline void AssignWaveBalance(float arg1)
    {
        return stub<member_func_t<void, AudManager, float>>(0x4DC230, this, arg1);
    }

    // 0x4DC250 | ?GetWaveBalance@AudManager@@QAEMXZ
    inline float GetWaveBalance()
    {
        return stub<member_func_t<float, AudManager>>(0x4DC250, this);
    }

    // 0x4DC270 | ?AssignCDBalance@AudManager@@QAEXM@Z
    inline void AssignCDBalance(float arg1)
    {
        return stub<member_func_t<void, AudManager, float>>(0x4DC270, this, arg1);
    }

    // 0x4DC290 | ?GetCDBalance@AudManager@@QAEMXZ
    inline float GetCDBalance()
    {
        return stub<member_func_t<float, AudManager>>(0x4DC290, this);
    }

    // 0x4DC2C0 | ?IsStereo@AudManager@@QAEHXZ
    inline int32_t IsStereo()
    {
        return stub<member_func_t<int32_t, AudManager>>(0x4DC2C0, this);
    }

    // 0x4DC2D0 | ?AddWidgets@AudManager@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, AudManager, class Bank*>>(0x4DC2D0, this, arg1);
    }

    // 0x4DC2E0 | ?Supports16Bit@AudManager@@QAEFXZ
    inline int16_t Supports16Bit()
    {
        return stub<member_func_t<int16_t, AudManager>>(0x4DC2E0, this);
    }

    // 0x4DC2F0 | ?CheckCDFile@AudManager@@QAEEPAD@Z
    inline uint8_t CheckCDFile(char* arg1)
    {
        return stub<member_func_t<uint8_t, AudManager, char*>>(0x4DC2F0, this, arg1);
    }

    // 0x4DC310 | ?Update3DCDMusic@AudManager@@AAEXXZ
    inline void Update3DCDMusic()
    {
        return stub<member_func_t<void, AudManager>>(0x4DC310, this);
    }

    // 0x4DC470 | ?GetUsingEAXMask@AudManager@@SA?BIXZ
    static inline uint32_t const GetUsingEAXMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4DC470);
    }

    // 0x4DC480 | ?IsAlwaysEAX@AudManager@@QAEIXZ
    inline uint32_t IsAlwaysEAX()
    {
        return stub<member_func_t<uint32_t, AudManager>>(0x4DC480, this);
    }

    // 0x4DC490 | ?AlwaysEAX@AudManager@@QAEXI@Z
    inline void AlwaysEAX(uint32_t arg1)
    {
        return stub<member_func_t<void, AudManager, uint32_t>>(0x4DC490, this, arg1);
    }

    // 0x4DC4C0 | ?EAXEnabled@AudManager@@QAEIXZ
    inline uint32_t EAXEnabled()
    {
        return stub<member_func_t<uint32_t, AudManager>>(0x4DC4C0, this);
    }

    // 0x4DC4D0 | ?DSound3DEnabled@AudManager@@QAEIXZ
    inline uint32_t DSound3DEnabled()
    {
        return stub<member_func_t<uint32_t, AudManager>>(0x4DC4D0, this);
    }

    // 0x4DC4E0 | ?CreateListenerSoundObj@AudManager@@AAEIXZ
    inline uint32_t CreateListenerSoundObj()
    {
        return stub<member_func_t<uint32_t, AudManager>>(0x4DC4E0, this);
    }

    // 0x4DC620 | ?GetListenerEAXObj@AudManager@@AAEPAVCReverb@@XZ
    inline class CReverb* GetListenerEAXObj()
    {
        return stub<member_func_t<class CReverb*, AudManager>>(0x4DC620, this);
    }

    // 0x4DC630 | ?SetEAXPreset@AudManager@@QAEHKMMM@Z
    inline int32_t SetEAXPreset(uint32_t arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<int32_t, AudManager, uint32_t, float, float, float>>(
            0x4DC630, this, arg1, arg2, arg3, arg4);
    }

    // 0x4DC6B0 | ?SetEAXPreset@AudManager@@QAEHPAUEAX_REVERBPROPERTIES@@@Z
    inline int32_t SetEAXPreset(struct EAX_REVERBPROPERTIES* arg1)
    {
        return stub<member_func_t<int32_t, AudManager, struct EAX_REVERBPROPERTIES*>>(0x4DC6B0, this, arg1);
    }

    // 0x4DC720 | ?GetEAXAll@AudManager@@QAEXPAUEAX_REVERBPROPERTIES@@@Z
    inline void GetEAXAll(struct EAX_REVERBPROPERTIES* arg1)
    {
        return stub<member_func_t<void, AudManager, struct EAX_REVERBPROPERTIES*>>(0x4DC720, this, arg1);
    }

    // 0x4DC770 | ?SetEAXEnvironmet@AudManager@@QAEHK@Z
    inline int32_t SetEAXEnvironmet(uint32_t arg1)
    {
        return stub<member_func_t<int32_t, AudManager, uint32_t>>(0x4DC770, this, arg1);
    }

    // 0x4DC7E0 | ?GetEAXEnvironmet@AudManager@@QAEKXZ
    inline uint32_t GetEAXEnvironmet()
    {
        return stub<member_func_t<uint32_t, AudManager>>(0x4DC7E0, this);
    }

    // 0x4DC830 | ?SetEAXReverbVolume@AudManager@@QAEHM@Z
    inline int32_t SetEAXReverbVolume(float arg1)
    {
        return stub<member_func_t<int32_t, AudManager, float>>(0x4DC830, this, arg1);
    }

    // 0x4DC8A0 | ?GetEAXReverbVolume@AudManager@@QAEMXZ
    inline float GetEAXReverbVolume()
    {
        return stub<member_func_t<float, AudManager>>(0x4DC8A0, this);
    }

    // 0x4DC8F0 | ?SetEAXDecayTime@AudManager@@QAEHM@Z
    inline int32_t SetEAXDecayTime(float arg1)
    {
        return stub<member_func_t<int32_t, AudManager, float>>(0x4DC8F0, this, arg1);
    }

    // 0x4DC960 | ?GetEAXDecayTime@AudManager@@QAEMXZ
    inline float GetEAXDecayTime()
    {
        return stub<member_func_t<float, AudManager>>(0x4DC960, this);
    }

    // 0x4DC9B0 | ?SetEAXDamping@AudManager@@QAEHM@Z
    inline int32_t SetEAXDamping(float arg1)
    {
        return stub<member_func_t<int32_t, AudManager, float>>(0x4DC9B0, this, arg1);
    }

    // 0x4DCA20 | ?GetEAXDamping@AudManager@@QAEMXZ
    inline float GetEAXDamping()
    {
        return stub<member_func_t<float, AudManager>>(0x4DCA20, this);
    }

    // 0x4DCA90 | ?SetBitDepthAndSampleRate@AudManager@@QAEXHK@Z
    inline void SetBitDepthAndSampleRate(int32_t arg1, uint32_t arg2)
    {
        return stub<member_func_t<void, AudManager, int32_t, uint32_t>>(0x4DCA90, this, arg1, arg2);
    }

    // 0x4DCB20 | ?GetDeviceNames@AudManager@@QAEPAPADXZ
    inline char** GetDeviceNames()
    {
        return stub<member_func_t<char**, AudManager>>(0x4DCB20, this);
    }

    // 0x4DCB40 | ?GetNumDevices@AudManager@@QAEHXZ
    inline int32_t GetNumDevices()
    {
        return stub<member_func_t<int32_t, AudManager>>(0x4DCB40, this);
    }

    // 0x4DCB60 | ?GetActiveDeviceName@AudManager@@QAEPADXZ
    inline char* GetActiveDeviceName()
    {
        return stub<member_func_t<char*, AudManager>>(0x4DCB60, this);
    }

    // 0x4DCB80 | ?GetNum3DHalBufs@AudManager@@QAEKXZ
    inline uint32_t GetNum3DHalBufs()
    {
        return stub<member_func_t<uint32_t, AudManager>>(0x4DCB80, this);
    }

    // 0x4DCB90 | ?GetStereoOnMask@AudManager@@SA?BIXZ
    static inline uint32_t const GetStereoOnMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4DCB90);
    }

    // 0x4DCBA0 | ?GetHiResMask@AudManager@@SA?BIXZ
    static inline uint32_t const GetHiResMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4DCBA0);
    }

    // 0x4DCBB0 | ?GetHiSampleSizeMask@AudManager@@SA?BIXZ
    static inline uint32_t const GetHiSampleSizeMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4DCBB0);
    }

    // 0x4DCBC0 | ?GetEchoOnMask@AudManager@@SA?BIXZ
    static inline uint32_t const GetEchoOnMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4DCBC0);
    }

    // 0x4DCBD0 | ?GetDSound3DMask@AudManager@@SA?BIXZ
    static inline uint32_t const GetDSound3DMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4DCBD0);
    }

    // 0x4DCBE0 | ?GetSoundFXOnMask@AudManager@@SA?BIXZ
    static inline uint32_t const GetSoundFXOnMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4DCBE0);
    }

    // 0x4DCBF0 | ?GetCDMusicOnMask@AudManager@@SA?BIXZ
    static inline uint32_t const GetCDMusicOnMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4DCBF0);
    }

    // 0x4DCC00 | ?GetCommentaryOnMask@AudManager@@SA?BIXZ
    static inline uint32_t const GetCommentaryOnMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4DCC00);
    }

    // 0x4DCC10 | ?SetDeviceName@AudManager@@QAEXPAD@Z
    inline void SetDeviceName(char* arg1)
    {
        return stub<member_func_t<void, AudManager, char*>>(0x4DCC10, this, arg1);
    }

    // 0x4DCC50 | ?GetCDPosition@AudManager@@QAEKPAE000@Z
    inline uint32_t GetCDPosition(uint8_t* arg1, uint8_t* arg2, uint8_t* arg3, uint8_t* arg4)
    {
        return stub<member_func_t<uint32_t, AudManager, uint8_t*, uint8_t*, uint8_t*, uint8_t*>>(
            0x4DCC50, this, arg1, arg2, arg3, arg4);
    }

    // 0x4DCC90 | ?GetMixerPtr@AudManager@@QAEPAVMixerCTL@@XZ
    inline class MixerCTL* GetMixerPtr()
    {
        return stub<member_func_t<class MixerCTL*, AudManager>>(0x4DCC90, this);
    }

    // 0x4DCCA0 | ?GetVoiceCommentaryPtr@AudManager@@QAEPAVmmVoiceCommentary@@XZ
    inline class mmVoiceCommentary* GetVoiceCommentaryPtr()
    {
        return stub<member_func_t<class mmVoiceCommentary*, AudManager>>(0x4DCCA0, this);
    }

    // 0x4DCCB0 | ?SetVoiceCommentaryPtr@AudManager@@QAEXPAVmmVoiceCommentary@@@Z
    inline void SetVoiceCommentaryPtr(class mmVoiceCommentary* arg1)
    {
        return stub<member_func_t<void, AudManager, class mmVoiceCommentary*>>(0x4DCCB0, this, arg1);
    }

    // 0x4DCCC0 | ?SetHwnd@AudManager@@QAEXPAUHWND__@@@Z
    inline void SetHwnd(struct HWND__* arg1)
    {
        return stub<member_func_t<void, AudManager, struct HWND__*>>(0x4DCCC0, this, arg1);
    }

    // 0x4DCD80 | ?DeclareFields@AudManager@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4DCD80);
    }

    // 0x4DAEC0 | ??1AudManager@@UAE@XZ
    inline ~AudManager() override = 0
    {
        // stub<member_func_t<void, AudManager>>(0x4DAEC0, this);

        unimplemented();
    }

    // 0x4DCEF0 | ?GetClass@AudManager@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, AudManager>>(0x4DCEF0, this);
    }

    // 0x4DB420 | ?Update@AudManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, AudManager>>(0x4DB420, this);
    }

    // 0x4DBD30 | ?Reset@AudManager@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, AudManager>>(0x4DBD30, this);
    }

    // 0x4DCA70 | ?UpdatePaused@AudManager@@UAEXXZ
    inline void UpdatePaused() override
    {
        return stub<member_func_t<void, AudManager>>(0x4DCA70, this);
    }
};
