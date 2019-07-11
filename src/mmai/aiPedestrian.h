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
    mmai:aiPedestrian

    0x442090 | public: __thiscall aiPedestrian::aiPedestrian(void) | ??0aiPedestrian@@QAE@XZ
    0x442170 | public: __thiscall aiPedestrian::~aiPedestrian(void) | ??1aiPedestrian@@QAE@XZ
    0x442180 | public: void __thiscall aiPedestrian::Init(char *,int,int) | ?Init@aiPedestrian@@QAEXPADHH@Z
    0x4424E0 | public: void __thiscall aiPedestrian::Reset(class aiPath *) | ?Reset@aiPedestrian@@QAEXPAVaiPath@@@Z
    0x442810 | public: void __thiscall aiPedestrian::Update(void) | ?Update@aiPedestrian@@QAEXXZ
    0x443C00 | private: void __thiscall aiPedestrian::Wander(void) | ?Wander@aiPedestrian@@AAEXXZ
    0x444060 | private: void __thiscall aiPedestrian::Anticipate(class mmIntersection &,int) | ?Anticipate@aiPedestrian@@AAEXAAVmmIntersection@@H@Z
    0x444280 | private: void __thiscall aiPedestrian::Avoid(class mmIntersection &,float *) | ?Avoid@aiPedestrian@@AAEXAAVmmIntersection@@PAM@Z
    0x444680 | private: float __thiscall aiPedestrian::TimeToCollision(float) | ?TimeToCollision@aiPedestrian@@AAEMM@Z
    0x4446A0 | private: int __thiscall aiPedestrian::DetectPlayerForwardCollision(float *,float *) | ?DetectPlayerForwardCollision@aiPedestrian@@AAEHPAM0@Z
    0x444880 | private: int __thiscall aiPedestrian::DetectPlayerAnticipate(float *,float *) | ?DetectPlayerAnticipate@aiPedestrian@@AAEHPAM0@Z
    0x444A40 | private: float __thiscall aiPedestrian::RoadDistance(void) | ?RoadDistance@aiPedestrian@@AAEMXZ
    0x445140 | private: void __thiscall aiPedestrian::SolveRoadSegment(float) | ?SolveRoadSegment@aiPedestrian@@AAEXM@Z
    0x445280 | private: class aiPath * __thiscall aiPedestrian::PickNextRdSeg(void) | ?PickNextRdSeg@aiPedestrian@@AAEPAVaiPath@@XZ
    0x445470 | private: int __thiscall aiPedestrian::DetectPlayerCollision(float *) | ?DetectPlayerCollision@aiPedestrian@@AAEHPAM@Z
    0x4457D0 | private: int __thiscall aiPedestrian::DetectBangerCollision(class mmInstance * *,float *,float) | ?DetectBangerCollision@aiPedestrian@@AAEHPAPAVmmInstance@@PAMM@Z
    0x445DC0 | private: class mmInstance * __thiscall aiPedestrian::DetectBangerObstacle(void) | ?DetectBangerObstacle@aiPedestrian@@AAEPAVmmInstance@@XZ
    0x445F30 | private: class aiPedestrian * __thiscall aiPedestrian::DetectPedObstacle(void) | ?DetectPedObstacle@aiPedestrian@@AAEPAV1@XZ
    0x445FB0 | private: int __thiscall aiPedestrian::DetectPedCollision(float,class aiPedestrian * *,float *) | ?DetectPedCollision@aiPedestrian@@AAEHMPAPAV1@PAM@Z
    0x446490 | private: void __thiscall aiPedestrian::AvoidPlayer(class Vector3 &,float) | ?AvoidPlayer@aiPedestrian@@AAEXAAVVector3@@M@Z
    0x446520 | private: void __thiscall aiPedestrian::AvoidBanger(class mmInstance *,float) | ?AvoidBanger@aiPedestrian@@AAEXPAVmmInstance@@M@Z
    0x446610 | private: void __thiscall aiPedestrian::AvoidPedCollision(class aiPedestrian *,float) | ?AvoidPedCollision@aiPedestrian@@AAEXPAV1@M@Z
    0x446700 | private: void __thiscall aiPedestrian::AvoidObstacle(class Vector3 &,float) | ?AvoidObstacle@aiPedestrian@@AAEXAAVVector3@@M@Z
    0x446A20 | private: void __thiscall aiPedestrian::SolveTargetPoint(float) | ?SolveTargetPoint@aiPedestrian@@AAEXM@Z
    0x446A90 | private: void __thiscall aiPedestrian::CalcCurve(int,int,float) | ?CalcCurve@aiPedestrian@@AAEXHHM@Z
    0x447140 | private: void __thiscall aiPedestrian::ComputeCurve(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &) | ?ComputeCurve@aiPedestrian@@AAEXAAVVector3@@000@Z
    0x4471F0 | private: void __thiscall aiPedestrian::SolvePosition(class Vector3 &,float) | ?SolvePosition@aiPedestrian@@AAEXAAVVector3@@M@Z
    0x447240 | public: void __thiscall aiPedestrian::PlayVoice(short) | ?PlayVoice@aiPedestrian@@QAEXF@Z
    0x447310 | public: void __thiscall aiPedestrian::CalculateDistToPlayer2(void) | ?CalculateDistToPlayer2@aiPedestrian@@QAEXXZ
    0x447360 | public: void __thiscall aiPedestrian::CalculateAudioPanning(void) | ?CalculateAudioPanning@aiPedestrian@@QAEXXZ
    0x4473B0 | public: void __thiscall aiPedestrian::UpdateAudio(void) | ?UpdateAudio@aiPedestrian@@QAEXXZ
    0x447480 | public: void __thiscall aiPedestrian::SetVoiceSoundPtr(class AudSound *) | ?SetVoiceSoundPtr@aiPedestrian@@QAEXPAVAudSound@@@Z
    0x447490 | public: void __thiscall aiPedestrian::UnAssignSounds(void) | ?UnAssignSounds@aiPedestrian@@QAEXXZ
    0x4474D0 | public: void __thiscall aiPedestrian::Reset(void) | ?Reset@aiPedestrian@@QAEXXZ
    0x447500 | public: void __thiscall aiPedestrian::Stop(void) | ?Stop@aiPedestrian@@QAEXXZ
    0x447540 | public: void __thiscall aiPedestrian::Go(void) | ?Go@aiPedestrian@@QAEXXZ
    0x447580 | public: void __thiscall aiPedestrian::Dump(void) | ?Dump@aiPedestrian@@QAEXXZ
    0x447750 | public: void __thiscall aiPedestrian::DrawDebug(void) | ?DrawDebug@aiPedestrian@@QAEXXZ
    0x447760 | private: short __thiscall aiPedestrian::GetRoamVoiceIndex(void) | ?GetRoamVoiceIndex@aiPedestrian@@AAEFXZ
    0x447930 | private: short __thiscall aiPedestrian::GetRaceVoiceIndex(void) | ?GetRaceVoiceIndex@aiPedestrian@@AAEFXZ
    0x447AD0 | public: virtual class Matrix34 & __fastcall aiPedestrianInstance::ToMatrix(class Matrix34 &) | ?ToMatrix@aiPedestrianInstance@@UAIAAVMatrix34@@AAV2@@Z
    0x447AE0 | public: virtual void __fastcall aiPedestrianInstance::FromMatrix(class Matrix34 const &) | ?FromMatrix@aiPedestrianInstance@@UAIXABVMatrix34@@@Z
    0x447AF0 | public: virtual class Vector3 & __fastcall aiPedestrianInstance::GetPos(void) | ?GetPos@aiPedestrianInstance@@UAIAAVVector3@@XZ
    0x447B00 | public: virtual int __thiscall aiPedestrianInstance::ComputeLod(float,float) | ?ComputeLod@aiPedestrianInstance@@UAEHMM@Z
    0x447B30 | public: virtual void __fastcall aiPedestrianInstance::Draw(int) | ?Draw@aiPedestrianInstance@@UAIXH@Z
    0x447C20 | public: virtual void __fastcall aiPedestrianInstance::DrawShadow(void) | ?DrawShadow@aiPedestrianInstance@@UAIXXZ
    0x447CF0 | public: virtual void __thiscall aiPedestrianInstance::AddWidgets(class Bank *) | ?AddWidgets@aiPedestrianInstance@@UAEXPAVBank@@@Z
    0x447D00 | public: virtual void * __thiscall aiPedestrianInstance::`vector deleting destructor'(unsigned int) | ??_EaiPedestrianInstance@@UAEPAXI@Z
    0x447D00 | public: virtual void * __thiscall aiPedestrianInstance::`scalar deleting destructor'(unsigned int) | ??_GaiPedestrianInstance@@UAEPAXI@Z
    0x447D20 | public: virtual __thiscall aiPedestrianInstance::~aiPedestrianInstance(void) | ??1aiPedestrianInstance@@UAE@XZ
    0x590768 | const aiPedestrianInstance::`vftable' | ??_7aiPedestrianInstance@@6B@
    0x5A8838 | private: static float aiPedestrian::s_fAudioVolume | ?s_fAudioVolume@aiPedestrian@@0MA
    0x5A883C | private: static float aiPedestrian::s_fAudioMaxDistance | ?s_fAudioMaxDistance@aiPedestrian@@0MA
    0x5A8BA8 | float * `public: virtual int __thiscall aiPedestrianInstance::ComputeLod(float,float)'::`2'::LodTable | ?LodTable@?1??ComputeLod@aiPedestrianInstance@@UAEHMM@Z@4PAMA
    0x609DB8 | private: static float aiPedestrian::s_fAttenuationMult | ?s_fAttenuationMult@aiPedestrian@@0MA
*/

#include "hooking.h"

class aiPedestrian
{
public:
    // 0x436D60 | ??_EaiPedestrian@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x442090 | ??0aiPedestrian@@QAE@XZ
    inline aiPedestrian()
    {
        stub<member_func_t<void, aiPedestrian>>(0x442090, this);
    }

    // 0x442170 | ??1aiPedestrian@@QAE@XZ
    inline ~aiPedestrian()
    {
        stub<member_func_t<void, aiPedestrian>>(0x442170, this);
    }

    // 0x442180 | ?Init@aiPedestrian@@QAEXPADHH@Z
    inline void Init(char* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiPedestrian, char*, int32_t, int32_t>>(0x442180, this, arg1, arg2, arg3);
    }

    // 0x4424E0 | ?Reset@aiPedestrian@@QAEXPAVaiPath@@@Z
    inline void Reset(class aiPath* arg1)
    {
        return stub<member_func_t<void, aiPedestrian, class aiPath*>>(0x4424E0, this, arg1);
    }

    // 0x442810 | ?Update@aiPedestrian@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x442810, this);
    }

    // 0x443C00 | ?Wander@aiPedestrian@@AAEXXZ
    inline void Wander()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x443C00, this);
    }

    // 0x444060 | ?Anticipate@aiPedestrian@@AAEXAAVmmIntersection@@H@Z
    inline void Anticipate(class mmIntersection& arg1, int32_t arg2)
    {
        return stub<member_func_t<void, aiPedestrian, class mmIntersection&, int32_t>>(0x444060, this, arg1, arg2);
    }

    // 0x444280 | ?Avoid@aiPedestrian@@AAEXAAVmmIntersection@@PAM@Z
    inline void Avoid(class mmIntersection& arg1, float* arg2)
    {
        return stub<member_func_t<void, aiPedestrian, class mmIntersection&, float*>>(0x444280, this, arg1, arg2);
    }

    // 0x444680 | ?TimeToCollision@aiPedestrian@@AAEMM@Z
    inline float TimeToCollision(float arg1)
    {
        return stub<member_func_t<float, aiPedestrian, float>>(0x444680, this, arg1);
    }

    // 0x4446A0 | ?DetectPlayerForwardCollision@aiPedestrian@@AAEHPAM0@Z
    inline int32_t DetectPlayerForwardCollision(float* arg1, float* arg2)
    {
        return stub<member_func_t<int32_t, aiPedestrian, float*, float*>>(0x4446A0, this, arg1, arg2);
    }

    // 0x444880 | ?DetectPlayerAnticipate@aiPedestrian@@AAEHPAM0@Z
    inline int32_t DetectPlayerAnticipate(float* arg1, float* arg2)
    {
        return stub<member_func_t<int32_t, aiPedestrian, float*, float*>>(0x444880, this, arg1, arg2);
    }

    // 0x444A40 | ?RoadDistance@aiPedestrian@@AAEMXZ
    inline float RoadDistance()
    {
        return stub<member_func_t<float, aiPedestrian>>(0x444A40, this);
    }

    // 0x445140 | ?SolveRoadSegment@aiPedestrian@@AAEXM@Z
    inline void SolveRoadSegment(float arg1)
    {
        return stub<member_func_t<void, aiPedestrian, float>>(0x445140, this, arg1);
    }

    // 0x445280 | ?PickNextRdSeg@aiPedestrian@@AAEPAVaiPath@@XZ
    inline class aiPath* PickNextRdSeg()
    {
        return stub<member_func_t<class aiPath*, aiPedestrian>>(0x445280, this);
    }

    // 0x445470 | ?DetectPlayerCollision@aiPedestrian@@AAEHPAM@Z
    inline int32_t DetectPlayerCollision(float* arg1)
    {
        return stub<member_func_t<int32_t, aiPedestrian, float*>>(0x445470, this, arg1);
    }

    // 0x4457D0 | ?DetectBangerCollision@aiPedestrian@@AAEHPAPAVmmInstance@@PAMM@Z
    inline int32_t DetectBangerCollision(class mmInstance** arg1, float* arg2, float arg3)
    {
        return stub<member_func_t<int32_t, aiPedestrian, class mmInstance**, float*, float>>(
            0x4457D0, this, arg1, arg2, arg3);
    }

    // 0x445DC0 | ?DetectBangerObstacle@aiPedestrian@@AAEPAVmmInstance@@XZ
    inline class mmInstance* DetectBangerObstacle()
    {
        return stub<member_func_t<class mmInstance*, aiPedestrian>>(0x445DC0, this);
    }

    // 0x445F30 | ?DetectPedObstacle@aiPedestrian@@AAEPAV1@XZ
    inline class aiPedestrian* DetectPedObstacle()
    {
        return stub<member_func_t<class aiPedestrian*, aiPedestrian>>(0x445F30, this);
    }

    // 0x445FB0 | ?DetectPedCollision@aiPedestrian@@AAEHMPAPAV1@PAM@Z
    inline int32_t DetectPedCollision(float arg1, class aiPedestrian** arg2, float* arg3)
    {
        return stub<member_func_t<int32_t, aiPedestrian, float, class aiPedestrian**, float*>>(
            0x445FB0, this, arg1, arg2, arg3);
    }

    // 0x446490 | ?AvoidPlayer@aiPedestrian@@AAEXAAVVector3@@M@Z
    inline void AvoidPlayer(class Vector3& arg1, float arg2)
    {
        return stub<member_func_t<void, aiPedestrian, class Vector3&, float>>(0x446490, this, arg1, arg2);
    }

    // 0x446520 | ?AvoidBanger@aiPedestrian@@AAEXPAVmmInstance@@M@Z
    inline void AvoidBanger(class mmInstance* arg1, float arg2)
    {
        return stub<member_func_t<void, aiPedestrian, class mmInstance*, float>>(0x446520, this, arg1, arg2);
    }

    // 0x446610 | ?AvoidPedCollision@aiPedestrian@@AAEXPAV1@M@Z
    inline void AvoidPedCollision(class aiPedestrian* arg1, float arg2)
    {
        return stub<member_func_t<void, aiPedestrian, class aiPedestrian*, float>>(0x446610, this, arg1, arg2);
    }

    // 0x446700 | ?AvoidObstacle@aiPedestrian@@AAEXAAVVector3@@M@Z
    inline void AvoidObstacle(class Vector3& arg1, float arg2)
    {
        return stub<member_func_t<void, aiPedestrian, class Vector3&, float>>(0x446700, this, arg1, arg2);
    }

    // 0x446A20 | ?SolveTargetPoint@aiPedestrian@@AAEXM@Z
    inline void SolveTargetPoint(float arg1)
    {
        return stub<member_func_t<void, aiPedestrian, float>>(0x446A20, this, arg1);
    }

    // 0x446A90 | ?CalcCurve@aiPedestrian@@AAEXHHM@Z
    inline void CalcCurve(int32_t arg1, int32_t arg2, float arg3)
    {
        return stub<member_func_t<void, aiPedestrian, int32_t, int32_t, float>>(0x446A90, this, arg1, arg2, arg3);
    }

    // 0x447140 | ?ComputeCurve@aiPedestrian@@AAEXAAVVector3@@000@Z
    inline void ComputeCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
    {
        return stub<member_func_t<void, aiPedestrian, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
            0x447140, this, arg1, arg2, arg3, arg4);
    }

    // 0x4471F0 | ?SolvePosition@aiPedestrian@@AAEXAAVVector3@@M@Z
    inline void SolvePosition(class Vector3& arg1, float arg2)
    {
        return stub<member_func_t<void, aiPedestrian, class Vector3&, float>>(0x4471F0, this, arg1, arg2);
    }

    // 0x447240 | ?PlayVoice@aiPedestrian@@QAEXF@Z
    inline void PlayVoice(int16_t arg1)
    {
        return stub<member_func_t<void, aiPedestrian, int16_t>>(0x447240, this, arg1);
    }

    // 0x447310 | ?CalculateDistToPlayer2@aiPedestrian@@QAEXXZ
    inline void CalculateDistToPlayer2()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x447310, this);
    }

    // 0x447360 | ?CalculateAudioPanning@aiPedestrian@@QAEXXZ
    inline void CalculateAudioPanning()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x447360, this);
    }

    // 0x4473B0 | ?UpdateAudio@aiPedestrian@@QAEXXZ
    inline void UpdateAudio()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x4473B0, this);
    }

    // 0x447480 | ?SetVoiceSoundPtr@aiPedestrian@@QAEXPAVAudSound@@@Z
    inline void SetVoiceSoundPtr(class AudSound* arg1)
    {
        return stub<member_func_t<void, aiPedestrian, class AudSound*>>(0x447480, this, arg1);
    }

    // 0x447490 | ?UnAssignSounds@aiPedestrian@@QAEXXZ
    inline void UnAssignSounds()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x447490, this);
    }

    // 0x4474D0 | ?Reset@aiPedestrian@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x4474D0, this);
    }

    // 0x447500 | ?Stop@aiPedestrian@@QAEXXZ
    inline void Stop()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x447500, this);
    }

    // 0x447540 | ?Go@aiPedestrian@@QAEXXZ
    inline void Go()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x447540, this);
    }

    // 0x447580 | ?Dump@aiPedestrian@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x447580, this);
    }

    // 0x447750 | ?DrawDebug@aiPedestrian@@QAEXXZ
    inline void DrawDebug()
    {
        return stub<member_func_t<void, aiPedestrian>>(0x447750, this);
    }

    // 0x447760 | ?GetRoamVoiceIndex@aiPedestrian@@AAEFXZ
    inline int16_t GetRoamVoiceIndex()
    {
        return stub<member_func_t<int16_t, aiPedestrian>>(0x447760, this);
    }

    // 0x447930 | ?GetRaceVoiceIndex@aiPedestrian@@AAEFXZ
    inline int16_t GetRaceVoiceIndex()
    {
        return stub<member_func_t<int16_t, aiPedestrian>>(0x447930, this);
    }

    // 0x5A8838 | ?s_fAudioVolume@aiPedestrian@@0MA
    static inline extern_var(0x5A8838, float, s_fAudioVolume);

    // 0x5A883C | ?s_fAudioMaxDistance@aiPedestrian@@0MA
    static inline extern_var(0x5A883C, float, s_fAudioMaxDistance);

    // 0x609DB8 | ?s_fAttenuationMult@aiPedestrian@@0MA
    static inline extern_var(0x609DB8, float, s_fAttenuationMult);
};

struct aiPedestrianInstance : mmInstance
{
public:
    // aiPedestrianInstance::`vftable' @ 0x590768

    // 0x447D20 | ??1aiPedestrianInstance@@UAE@XZ
    inline ~aiPedestrianInstance() override
    {
        stub<member_func_t<void, aiPedestrianInstance>>(0x447D20, this);
    }

    // 0x447AE0 | ?FromMatrix@aiPedestrianInstance@@UAIXABVMatrix34@@@Z
    inline void FromMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, aiPedestrianInstance, class Matrix34 const&>>(0x447AE0, this, arg1);
    }

    // 0x447AD0 | ?ToMatrix@aiPedestrianInstance@@UAIAAVMatrix34@@AAV2@@Z
    inline class Matrix34& ToMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34&, aiPedestrianInstance, class Matrix34&>>(0x447AD0, this, arg1);
    }

    // 0x447AF0 | ?GetPos@aiPedestrianInstance@@UAIAAVVector3@@XZ
    inline class Vector3& GetPos() override
    {
        return stub<member_func_t<class Vector3&, aiPedestrianInstance>>(0x447AF0, this);
    }

    // 0x447B30 | ?Draw@aiPedestrianInstance@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, aiPedestrianInstance, int32_t>>(0x447B30, this, arg1);
    }

    // 0x447C20 | ?DrawShadow@aiPedestrianInstance@@UAIXXZ
    inline void DrawShadow() override
    {
        return stub<member_func_t<void, aiPedestrianInstance>>(0x447C20, this);
    }

    // 0x447B00 | ?ComputeLod@aiPedestrianInstance@@UAEHMM@Z
    inline int32_t ComputeLod(float arg1, float arg2) override
    {
        return stub<member_func_t<int32_t, aiPedestrianInstance, float, float>>(0x447B00, this, arg1, arg2);
    }

    // 0x447CF0 | ?AddWidgets@aiPedestrianInstance@@UAEXPAVBank@@@Z
    virtual inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, aiPedestrianInstance, class Bank*>>(0x447CF0, this, arg1);
    }
};
