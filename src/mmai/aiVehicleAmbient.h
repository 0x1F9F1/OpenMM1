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
    mmai:aiVehicleAmbient

    0x448D10 | public: __thiscall aiVehicleAmbient::aiVehicleAmbient(void) | ??0aiVehicleAmbient@@QAE@XZ
    0x448DF0 | public: __thiscall aiVehicleAmbient::~aiVehicleAmbient(void) | ??1aiVehicleAmbient@@QAE@XZ
    0x448EC0 | public: void __thiscall aiVehicleAmbient::Init(char *,int) | ?Init@aiVehicleAmbient@@QAEXPADH@Z
    0x4492B0 | public: virtual void __thiscall aiVehicleAmbient::Reset(void) | ?Reset@aiVehicleAmbient@@UAEXXZ
    0x449390 | public: virtual void __thiscall aiVehicleAmbient::Update(void) | ?Update@aiVehicleAmbient@@UAEXXZ
    0x449540 | public: virtual void __thiscall aiVehicleAmbient::Impact(int) | ?Impact@aiVehicleAmbient@@UAEXH@Z
    0x4495F0 | public: void __thiscall aiVehicleAmbient::UnAssignSounds(void) | ?UnAssignSounds@aiVehicleAmbient@@QAEXXZ
    0x4496D0 | private: float __thiscall aiVehicleAmbient::CalculateDoppler(float) | ?CalculateDoppler@aiVehicleAmbient@@AAEMM@Z
    0x449700 | private: float __thiscall aiVehicleAmbient::CalculateFerrariPitch(float,int) | ?CalculateFerrariPitch@aiVehicleAmbient@@AAEMMH@Z
    0x4498D0 | public: void __thiscall aiVehicleAmbient::UpdateAudio(void) | ?UpdateAudio@aiVehicleAmbient@@QAEXXZ
    0x449900 | private: void __thiscall aiVehicleAmbient::UpdateAudio(float) | ?UpdateAudio@aiVehicleAmbient@@AAEXM@Z
    0x449C90 | public: void __thiscall aiVehicleAmbient::CalculateDistToPlayer2(void) | ?CalculateDistToPlayer2@aiVehicleAmbient@@QAEXXZ
    0x449DA0 | public: void __thiscall aiVehicleAmbient::CalculateAudioPanning(void) | ?CalculateAudioPanning@aiVehicleAmbient@@QAEXXZ
    0x449E30 | public: virtual void __thiscall aiVehicleAmbient::DrawId(void) | ?DrawId@aiVehicleAmbient@@UAEXXZ
    0x449E40 | public: void __thiscall aiVehicleAmbient::DrawBBox(short) | ?DrawBBox@aiVehicleAmbient@@QAEXF@Z
    0x449E50 | public: void __thiscall aiVehicleAmbient::StopHorn(void) | ?StopHorn@aiVehicleAmbient@@QAEXXZ
    0x449E80 | public: void __thiscall aiVehicleAmbient::PlayVoice(void) | ?PlayVoice@aiVehicleAmbient@@QAEXXZ
    0x44A0D0 | public: void __thiscall aiVehicleAmbient::PlayHorn(void) | ?PlayHorn@aiVehicleAmbient@@QAEXXZ
    0x44A320 | public: virtual void __thiscall aiVehicleAmbient::PlayHorn(float,float) | ?PlayHorn@aiVehicleAmbient@@UAEXMM@Z
    0x44A410 | public: void __thiscall aiVehicleAmbient::PlayTrippleHorn(float) | ?PlayTrippleHorn@aiVehicleAmbient@@QAEXM@Z
    0x44A4F0 | public: void __thiscall aiVehicleAmbient::UpdateHorn(void) | ?UpdateHorn@aiVehicleAmbient@@QAEXXZ
    0x44A790 | public: virtual void __thiscall aiVehicleAmbient::StopVoice(void) | ?StopVoice@aiVehicleAmbient@@UAEXXZ
    0x44A7D0 | public: void __thiscall aiVehicleAmbient::UpdateAudImpactReaction(void) | ?UpdateAudImpactReaction@aiVehicleAmbient@@QAEXXZ
    0x44A810 | public: virtual void __thiscall aiVehicleAmbient::ImpactAudioReaction(float) | ?ImpactAudioReaction@aiVehicleAmbient@@UAEXM@Z
    0x44A870 | private: void __thiscall aiVehicleAmbient::ImpactAudioReaction(void) | ?ImpactAudioReaction@aiVehicleAmbient@@AAEXXZ
    0x44A950 | public: void __thiscall aiVehicleAmbient::PlayDoubleHorn(float) | ?PlayDoubleHorn@aiVehicleAmbient@@QAEXM@Z
    0x44AA20 | private: void __thiscall aiVehicleAmbient::AddToAiAudMgr(void) | ?AddToAiAudMgr@aiVehicleAmbient@@AAEXXZ
    0x44AB00 | public: static void __cdecl aiVehicleAmbient::SetAudioMaxDistance(float) | ?SetAudioMaxDistance@aiVehicleAmbient@@SAXM@Z
    0x44AB20 | private: void __thiscall aiVehicleAmbient::UpdateDSound3DAudio(void) | ?UpdateDSound3DAudio@aiVehicleAmbient@@AAEXXZ
    0x44AD60 | public: void __thiscall aiVehicleAmbient::AssignSounds(class AudSound *,class AudSound *,class AudSound *,class mmOpponentImpactAudio *) | ?AssignSounds@aiVehicleAmbient@@QAEXPAVAudSound@@00PAVmmOpponentImpactAudio@@@Z
    0x44AEB0 | public: static float __cdecl aiVehicleAmbient::GetSecsSinceImpactReaction(void) | ?GetSecsSinceImpactReaction@aiVehicleAmbient@@SAMXZ
    0x44AEC0 | public: void __thiscall aiVehicleAmbient::Dump(void) | ?Dump@aiVehicleAmbient@@QAEXXZ
    0x44B050 | public: virtual int __thiscall aiVehicleAmbient::Type(void) | ?Type@aiVehicleAmbient@@UAEHXZ
    0x44B060 | public: virtual class mmOpponentImpactAudio * __thiscall aiVehicleAmbient::GetImpactAudioPtr(void) | ?GetImpactAudioPtr@aiVehicleAmbient@@UAEPAVmmOpponentImpactAudio@@XZ
    0x5908A8 | const aiVehicleAmbient::`vftable' | ??_7aiVehicleAmbient@@6B@
    0x5A8D28 | private: static float aiVehicleAmbient::s_fAudioVolume | ?s_fAudioVolume@aiVehicleAmbient@@0MA
    0x5A8D2C | private: static float aiVehicleAmbient::s_fAudioVolumeSemi | ?s_fAudioVolumeSemi@aiVehicleAmbient@@0MA
    0x5A8D30 | private: static float aiVehicleAmbient::s_fAudioMaxDistance | ?s_fAudioMaxDistance@aiVehicleAmbient@@0MA
    0x5A8D34 | private: static float aiVehicleAmbient::s_fHornVolume | ?s_fHornVolume@aiVehicleAmbient@@0MA
    0x5A8D38 | private: static float aiVehicleAmbient::s_fVoiceVolume | ?s_fVoiceVolume@aiVehicleAmbient@@0MA
    0x5A8D3C | private: static float aiVehicleAmbient::s_fSecsSinceImpactReaction | ?s_fSecsSinceImpactReaction@aiVehicleAmbient@@0MA
    0x609E40 | private: static float aiVehicleAmbient::s_fAttenuationMult | ?s_fAttenuationMult@aiVehicleAmbient@@0MA
    0x609E70 | private: static short aiVehicleAmbient::s_iPrevSoundObjIndex | ?s_iPrevSoundObjIndex@aiVehicleAmbient@@0FA
*/

#include "hooking.h"

class aiVehicleAmbient : aiVehicleSpline
{
public:
    // aiVehicleAmbient::`vftable' @ 0x5908A8

    // 0x436C40 | ??_EaiVehicleAmbient@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x448D10 | ??0aiVehicleAmbient@@QAE@XZ
    inline aiVehicleAmbient()
    {
        stub<member_func_t<void, aiVehicleAmbient>>(0x448D10, this);
    }

    // 0x448DF0 | ??1aiVehicleAmbient@@QAE@XZ
    inline ~aiVehicleAmbient()
    {
        stub<member_func_t<void, aiVehicleAmbient>>(0x448DF0, this);
    }

    // 0x448EC0 | ?Init@aiVehicleAmbient@@QAEXPADH@Z
    inline void Init(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, aiVehicleAmbient, char*, int32_t>>(0x448EC0, this, arg1, arg2);
    }

    // 0x4495F0 | ?UnAssignSounds@aiVehicleAmbient@@QAEXXZ
    inline void UnAssignSounds()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x4495F0, this);
    }

    // 0x4496D0 | ?CalculateDoppler@aiVehicleAmbient@@AAEMM@Z
    inline float CalculateDoppler(float arg1)
    {
        return stub<member_func_t<float, aiVehicleAmbient, float>>(0x4496D0, this, arg1);
    }

    // 0x449700 | ?CalculateFerrariPitch@aiVehicleAmbient@@AAEMMH@Z
    inline float CalculateFerrariPitch(float arg1, int32_t arg2)
    {
        return stub<member_func_t<float, aiVehicleAmbient, float, int32_t>>(0x449700, this, arg1, arg2);
    }

    // 0x4498D0 | ?UpdateAudio@aiVehicleAmbient@@QAEXXZ
    inline void UpdateAudio()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x4498D0, this);
    }

    // 0x449900 | ?UpdateAudio@aiVehicleAmbient@@AAEXM@Z
    inline void UpdateAudio(float arg1)
    {
        return stub<member_func_t<void, aiVehicleAmbient, float>>(0x449900, this, arg1);
    }

    // 0x449C90 | ?CalculateDistToPlayer2@aiVehicleAmbient@@QAEXXZ
    inline void CalculateDistToPlayer2()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x449C90, this);
    }

    // 0x449DA0 | ?CalculateAudioPanning@aiVehicleAmbient@@QAEXXZ
    inline void CalculateAudioPanning()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x449DA0, this);
    }

    // 0x449E40 | ?DrawBBox@aiVehicleAmbient@@QAEXF@Z
    inline void DrawBBox(int16_t arg1)
    {
        return stub<member_func_t<void, aiVehicleAmbient, int16_t>>(0x449E40, this, arg1);
    }

    // 0x449E50 | ?StopHorn@aiVehicleAmbient@@QAEXXZ
    inline void StopHorn()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x449E50, this);
    }

    // 0x449E80 | ?PlayVoice@aiVehicleAmbient@@QAEXXZ
    inline void PlayVoice()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x449E80, this);
    }

    // 0x44A0D0 | ?PlayHorn@aiVehicleAmbient@@QAEXXZ
    inline void PlayHorn()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x44A0D0, this);
    }

    // 0x44A410 | ?PlayTrippleHorn@aiVehicleAmbient@@QAEXM@Z
    inline void PlayTrippleHorn(float arg1)
    {
        return stub<member_func_t<void, aiVehicleAmbient, float>>(0x44A410, this, arg1);
    }

    // 0x44A4F0 | ?UpdateHorn@aiVehicleAmbient@@QAEXXZ
    inline void UpdateHorn()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x44A4F0, this);
    }

    // 0x44A7D0 | ?UpdateAudImpactReaction@aiVehicleAmbient@@QAEXXZ
    inline void UpdateAudImpactReaction()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x44A7D0, this);
    }

    // 0x44A870 | ?ImpactAudioReaction@aiVehicleAmbient@@AAEXXZ
    inline void ImpactAudioReaction()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x44A870, this);
    }

    // 0x44A950 | ?PlayDoubleHorn@aiVehicleAmbient@@QAEXM@Z
    inline void PlayDoubleHorn(float arg1)
    {
        return stub<member_func_t<void, aiVehicleAmbient, float>>(0x44A950, this, arg1);
    }

    // 0x44AA20 | ?AddToAiAudMgr@aiVehicleAmbient@@AAEXXZ
    inline void AddToAiAudMgr()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x44AA20, this);
    }

    // 0x44AB00 | ?SetAudioMaxDistance@aiVehicleAmbient@@SAXM@Z
    static inline void SetAudioMaxDistance(float arg1)
    {
        return stub<cdecl_t<void, float>>(0x44AB00, arg1);
    }

    // 0x44AB20 | ?UpdateDSound3DAudio@aiVehicleAmbient@@AAEXXZ
    inline void UpdateDSound3DAudio()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x44AB20, this);
    }

    // 0x44AD60 | ?AssignSounds@aiVehicleAmbient@@QAEXPAVAudSound@@00PAVmmOpponentImpactAudio@@@Z
    inline void AssignSounds(
        class AudSound* arg1, class AudSound* arg2, class AudSound* arg3, class mmOpponentImpactAudio* arg4)
    {
        return stub<member_func_t<void, aiVehicleAmbient, class AudSound*, class AudSound*, class AudSound*,
            class mmOpponentImpactAudio*>>(0x44AD60, this, arg1, arg2, arg3, arg4);
    }

    // 0x44AEB0 | ?GetSecsSinceImpactReaction@aiVehicleAmbient@@SAMXZ
    static inline float GetSecsSinceImpactReaction()
    {
        return stub<cdecl_t<float>>(0x44AEB0);
    }

    // 0x44AEC0 | ?Dump@aiVehicleAmbient@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x44AEC0, this);
    }

    // 0x5A8D28 | ?s_fAudioVolume@aiVehicleAmbient@@0MA
    static inline extern_var(0x5A8D28, float, s_fAudioVolume);

    // 0x5A8D2C | ?s_fAudioVolumeSemi@aiVehicleAmbient@@0MA
    static inline extern_var(0x5A8D2C, float, s_fAudioVolumeSemi);

    // 0x5A8D30 | ?s_fAudioMaxDistance@aiVehicleAmbient@@0MA
    static inline extern_var(0x5A8D30, float, s_fAudioMaxDistance);

    // 0x5A8D34 | ?s_fHornVolume@aiVehicleAmbient@@0MA
    static inline extern_var(0x5A8D34, float, s_fHornVolume);

    // 0x5A8D38 | ?s_fVoiceVolume@aiVehicleAmbient@@0MA
    static inline extern_var(0x5A8D38, float, s_fVoiceVolume);

    // 0x5A8D3C | ?s_fSecsSinceImpactReaction@aiVehicleAmbient@@0MA
    static inline extern_var(0x5A8D3C, float, s_fSecsSinceImpactReaction);

    // 0x609E40 | ?s_fAttenuationMult@aiVehicleAmbient@@0MA
    static inline extern_var(0x609E40, float, s_fAttenuationMult);

    // 0x609E70 | ?s_iPrevSoundObjIndex@aiVehicleAmbient@@0FA
    static inline extern_var(0x609E70, int16_t, s_iPrevSoundObjIndex);

    // 0x449390 | ?Update@aiVehicleAmbient@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x449390, this);
    }

    // 0x4492B0 | ?Reset@aiVehicleAmbient@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x4492B0, this);
    }

    // 0x44B050 | ?Type@aiVehicleAmbient@@UAEHXZ
    inline int32_t Type() override
    {
        return stub<member_func_t<int32_t, aiVehicleAmbient>>(0x44B050, this);
    }

    // 0x449E30 | ?DrawId@aiVehicleAmbient@@UAEXXZ
    inline void DrawId() override
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x449E30, this);
    }

    // 0x449540 | ?Impact@aiVehicleAmbient@@UAEXH@Z
    inline void Impact(int32_t arg1) override
    {
        return stub<member_func_t<void, aiVehicleAmbient, int32_t>>(0x449540, this, arg1);
    }

    // 0x44B060 | ?GetImpactAudioPtr@aiVehicleAmbient@@UAEPAVmmOpponentImpactAudio@@XZ
    inline class mmOpponentImpactAudio* GetImpactAudioPtr() override
    {
        return stub<member_func_t<class mmOpponentImpactAudio*, aiVehicleAmbient>>(0x44B060, this);
    }

    // 0x44A320 | ?PlayHorn@aiVehicleAmbient@@UAEXMM@Z
    inline void PlayHorn(float arg1, float arg2) override
    {
        return stub<member_func_t<void, aiVehicleAmbient, float, float>>(0x44A320, this, arg1, arg2);
    }

    // 0x44A810 | ?ImpactAudioReaction@aiVehicleAmbient@@UAEXM@Z
    inline void ImpactAudioReaction(float arg1) override
    {
        return stub<member_func_t<void, aiVehicleAmbient, float>>(0x44A810, this, arg1);
    }

    // 0x44A790 | ?StopVoice@aiVehicleAmbient@@UAEXXZ
    inline void StopVoice() override
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x44A790, this);
    }
};
