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
    mmanim:train

    0x4BA9B0 | public: __thiscall mmAnimTrain::mmAnimTrain(void) | ??0mmAnimTrain@@QAE@XZ
    0x4BAAA0 | public: __thiscall mmAnimTrain::~mmAnimTrain(void) | ??1mmAnimTrain@@QAE@XZ
    0x4BAB10 | public: void __thiscall mmAnimTrain::Init(int,char *,char *,class Vector3 *,int,int,float *) | ?Init@mmAnimTrain@@QAEXHPAD0PAVVector3@@HHPAM@Z
    0x4BADE0 | public: void __thiscall mmAnimTrain::Reset(void) | ?Reset@mmAnimTrain@@QAEXXZ
    0x4BAE50 | public: void __thiscall mmAnimTrain::Update(void) | ?Update@mmAnimTrain@@QAEXXZ
    0x4BAEF0 | public: void __thiscall mmAnimTrain::UpdatePathPosition(void) | ?UpdatePathPosition@mmAnimTrain@@QAEXXZ
    0x4BB040 | public: void __thiscall mmAnimTrain::SetPathSpeed(void) | ?SetPathSpeed@mmAnimTrain@@QAEXXZ
    0x4BB050 | public: void __thiscall mmAnimTrain::ReverseCalcPathSpeed(void) | ?ReverseCalcPathSpeed@mmAnimTrain@@QAEXXZ
    0x4BB060 | public: void __thiscall mmAnimTrain::SolvePosition(class Vector3 &,float &) | ?SolvePosition@mmAnimTrain@@QAEXAAVVector3@@AAM@Z
    0x4BB160 | public: void __thiscall mmAnimTrain::AdjustPhaseOffsets(void) | ?AdjustPhaseOffsets@mmAnimTrain@@QAEXXZ
    0x4BB1D0 | public: void __thiscall mmAnimTrain::GetStart(float,int &,float &) | ?GetStart@mmAnimTrain@@QAEXMAAHAAM@Z
    0x4BB250 | public: void __thiscall mmAnimTrain::PreCalcCubics(void) | ?PreCalcCubics@mmAnimTrain@@QAEXXZ
    0x4BB320 | public: void __thiscall mmAnimTrain::CalculateCubics(int,class Vector4 &,class Vector4 &,class Vector4 &) | ?CalculateCubics@mmAnimTrain@@QAEXHAAVVector4@@00@Z
    0x4BB520 | public: void __thiscall mmAnimTrain::ComputeXZCurve(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector4 &,class Vector4 &,class Vector4 &) | ?ComputeXZCurve@mmAnimTrain@@QAEXAAVVector3@@000AAVVector4@@11@Z
    0x4BB600 | public: void __thiscall mmAnimTrain::SolveXZCurve(class Vector3 &,class Vector3 &,float) | ?SolveXZCurve@mmAnimTrain@@QAEXAAVVector3@@0M@Z
    0x4BB730 | private: void __thiscall mmAnimTrain::UpdateAudio(void) | ?UpdateAudio@mmAnimTrain@@AAEXXZ
    0x4BB890 | private: void __thiscall mmAnimTrain::CalculateDistToPlayer2(void) | ?CalculateDistToPlayer2@mmAnimTrain@@AAEXXZ
    0x4BB960 | private: void __thiscall mmAnimTrain::CalculateAudioPanning(void) | ?CalculateAudioPanning@mmAnimTrain@@AAEXXZ
    0x4BB9B0 | private: float __thiscall mmAnimTrain::CalculateDoppler(float) | ?CalculateDoppler@mmAnimTrain@@AAEMM@Z
    0x4BBAF0 | public: virtual void * __thiscall mmAnimTrainCar::`vector deleting destructor'(unsigned int) | ??_EmmAnimTrainCar@@UAEPAXI@Z
    0x5B0BEC | private: static float mmAnimTrain::s_fAudioMinDistance | ?s_fAudioMinDistance@mmAnimTrain@@0MA
    0x5B0BF0 | private: static float mmAnimTrain::s_fCloserMinDistMult | ?s_fCloserMinDistMult@mmAnimTrain@@0MA
    0x5B0BF4 | private: static float mmAnimTrain::s_fAudioMaxDistance | ?s_fAudioMaxDistance@mmAnimTrain@@0MA
    0x5B0BF8 | private: static float mmAnimTrain::s_fAudioVolume | ?s_fAudioVolume@mmAnimTrain@@0MA
    0x668198 | class Matrix44 TrainHermite | ?TrainHermite@@3VMatrix44@@A
    0x6681D8 | class Matrix44 SplineBasis | ?SplineBasis@@3VMatrix44@@A
    0x668224 | private: static float mmAnimTrain::s_fAudioAttenuationMult | ?s_fAudioAttenuationMult@mmAnimTrain@@0MA
*/

#include "hooking.h"

// 0x668198 | ?TrainHermite@@3VMatrix44@@A
inline extern_var(0x668198, class Matrix44, TrainHermite);

// 0x6681D8 | ?SplineBasis@@3VMatrix44@@A
inline extern_var(0x6681D8, class Matrix44, SplineBasis);

struct mmAnimTrain
{
public:
    // 0x4BA9B0 | ??0mmAnimTrain@@QAE@XZ
    inline mmAnimTrain()
    {
        stub<member_func_t<void, mmAnimTrain>>(0x4BA9B0, this);
    }

    // 0x4BAAA0 | ??1mmAnimTrain@@QAE@XZ
    inline ~mmAnimTrain()
    {
        stub<member_func_t<void, mmAnimTrain>>(0x4BAAA0, this);
    }

    // 0x4BAB10 | ?Init@mmAnimTrain@@QAEXHPAD0PAVVector3@@HHPAM@Z
    inline void Init(int32_t arg1, char* arg2, char* arg3, class Vector3* arg4, int32_t arg5, int32_t arg6, float* arg7)
    {
        return stub<member_func_t<void, mmAnimTrain, int32_t, char*, char*, class Vector3*, int32_t, int32_t, float*>>(
            0x4BAB10, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4BADE0 | ?Reset@mmAnimTrain@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmAnimTrain>>(0x4BADE0, this);
    }

    // 0x4BAE50 | ?Update@mmAnimTrain@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmAnimTrain>>(0x4BAE50, this);
    }

    // 0x4BAEF0 | ?UpdatePathPosition@mmAnimTrain@@QAEXXZ
    inline void UpdatePathPosition()
    {
        return stub<member_func_t<void, mmAnimTrain>>(0x4BAEF0, this);
    }

    // 0x4BB040 | ?SetPathSpeed@mmAnimTrain@@QAEXXZ
    inline void SetPathSpeed()
    {
        return stub<member_func_t<void, mmAnimTrain>>(0x4BB040, this);
    }

    // 0x4BB050 | ?ReverseCalcPathSpeed@mmAnimTrain@@QAEXXZ
    inline void ReverseCalcPathSpeed()
    {
        return stub<member_func_t<void, mmAnimTrain>>(0x4BB050, this);
    }

    // 0x4BB060 | ?SolvePosition@mmAnimTrain@@QAEXAAVVector3@@AAM@Z
    inline void SolvePosition(class Vector3& arg1, float& arg2)
    {
        return stub<member_func_t<void, mmAnimTrain, class Vector3&, float&>>(0x4BB060, this, arg1, arg2);
    }

    // 0x4BB160 | ?AdjustPhaseOffsets@mmAnimTrain@@QAEXXZ
    inline void AdjustPhaseOffsets()
    {
        return stub<member_func_t<void, mmAnimTrain>>(0x4BB160, this);
    }

    // 0x4BB1D0 | ?GetStart@mmAnimTrain@@QAEXMAAHAAM@Z
    inline void GetStart(float arg1, int32_t& arg2, float& arg3)
    {
        return stub<member_func_t<void, mmAnimTrain, float, int32_t&, float&>>(0x4BB1D0, this, arg1, arg2, arg3);
    }

    // 0x4BB250 | ?PreCalcCubics@mmAnimTrain@@QAEXXZ
    inline void PreCalcCubics()
    {
        return stub<member_func_t<void, mmAnimTrain>>(0x4BB250, this);
    }

    // 0x4BB320 | ?CalculateCubics@mmAnimTrain@@QAEXHAAVVector4@@00@Z
    inline void CalculateCubics(int32_t arg1, class Vector4& arg2, class Vector4& arg3, class Vector4& arg4)
    {
        return stub<member_func_t<void, mmAnimTrain, int32_t, class Vector4&, class Vector4&, class Vector4&>>(
            0x4BB320, this, arg1, arg2, arg3, arg4);
    }

    // 0x4BB520 | ?ComputeXZCurve@mmAnimTrain@@QAEXAAVVector3@@000AAVVector4@@11@Z
    inline void ComputeXZCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4,
        class Vector4& arg5, class Vector4& arg6, class Vector4& arg7)
    {
        return stub<member_func_t<void, mmAnimTrain, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
            class Vector4&, class Vector4&, class Vector4&>>(0x4BB520, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4BB600 | ?SolveXZCurve@mmAnimTrain@@QAEXAAVVector3@@0M@Z
    inline void SolveXZCurve(class Vector3& arg1, class Vector3& arg2, float arg3)
    {
        return stub<member_func_t<void, mmAnimTrain, class Vector3&, class Vector3&, float>>(
            0x4BB600, this, arg1, arg2, arg3);
    }

    // 0x4BB730 | ?UpdateAudio@mmAnimTrain@@AAEXXZ
    inline void UpdateAudio()
    {
        return stub<member_func_t<void, mmAnimTrain>>(0x4BB730, this);
    }

    // 0x4BB890 | ?CalculateDistToPlayer2@mmAnimTrain@@AAEXXZ
    inline void CalculateDistToPlayer2()
    {
        return stub<member_func_t<void, mmAnimTrain>>(0x4BB890, this);
    }

    // 0x4BB960 | ?CalculateAudioPanning@mmAnimTrain@@AAEXXZ
    inline void CalculateAudioPanning()
    {
        return stub<member_func_t<void, mmAnimTrain>>(0x4BB960, this);
    }

    // 0x4BB9B0 | ?CalculateDoppler@mmAnimTrain@@AAEMM@Z
    inline float CalculateDoppler(float arg1)
    {
        return stub<member_func_t<float, mmAnimTrain, float>>(0x4BB9B0, this, arg1);
    }

    // 0x5B0BEC | ?s_fAudioMinDistance@mmAnimTrain@@0MA
    static inline extern_var(0x5B0BEC, float, s_fAudioMinDistance);

    // 0x5B0BF0 | ?s_fCloserMinDistMult@mmAnimTrain@@0MA
    static inline extern_var(0x5B0BF0, float, s_fCloserMinDistMult);

    // 0x5B0BF4 | ?s_fAudioMaxDistance@mmAnimTrain@@0MA
    static inline extern_var(0x5B0BF4, float, s_fAudioMaxDistance);

    // 0x5B0BF8 | ?s_fAudioVolume@mmAnimTrain@@0MA
    static inline extern_var(0x5B0BF8, float, s_fAudioVolume);

    // 0x668224 | ?s_fAudioAttenuationMult@mmAnimTrain@@0MA
    static inline extern_var(0x668224, float, s_fAudioAttenuationMult);
};
