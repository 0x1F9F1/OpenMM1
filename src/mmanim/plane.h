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
    mmanim:plane

    0x4B99C0 | public: __thiscall mmAnimPlane::mmAnimPlane(void) | ??0mmAnimPlane@@QAE@XZ
    0x4B9AB0 | public: virtual __thiscall mmAnimPlane::~mmAnimPlane(void) | ??1mmAnimPlane@@UAE@XZ
    0x4B9B60 | public: void __thiscall mmAnimPlane::Init(int,char *,char *,class Vector3 *,int,int,float *) | ?Init@mmAnimPlane@@QAEXHPAD0PAVVector3@@HHPAM@Z
    0x4B9D60 | public: virtual void __thiscall mmAnimPlane::Reset(void) | ?Reset@mmAnimPlane@@UAEXXZ
    0x4B9DD0 | public: void __thiscall mmAnimPlane::Activate(void) | ?Activate@mmAnimPlane@@QAEXXZ
    0x4B9DE0 | public: void __thiscall mmAnimPlane::Deactivate(void) | ?Deactivate@mmAnimPlane@@QAEXXZ
    0x4B9DF0 | public: void __thiscall mmAnimPlane::Update(void) | ?Update@mmAnimPlane@@QAEXXZ
    0x4B9E10 | public: void __thiscall mmAnimPlane::UpdatePathPosition(void) | ?UpdatePathPosition@mmAnimPlane@@QAEXXZ
    0x4B9FD0 | public: void __thiscall mmAnimPlane::SetPathSpeed(void) | ?SetPathSpeed@mmAnimPlane@@QAEXXZ
    0x4B9FE0 | public: void __thiscall mmAnimPlane::ReverseCalcPathSpeed(void) | ?ReverseCalcPathSpeed@mmAnimPlane@@QAEXXZ
    0x4B9FF0 | public: void __thiscall mmAnimPlane::SolvePosition(class Vector3 &,float &) | ?SolvePosition@mmAnimPlane@@QAEXAAVVector3@@AAM@Z
    0x4BA0C0 | public: void __thiscall mmAnimPlane::AdjustPhaseOffsets(void) | ?AdjustPhaseOffsets@mmAnimPlane@@QAEXXZ
    0x4BA130 | public: void __thiscall mmAnimPlane::PreCalcCubics(void) | ?PreCalcCubics@mmAnimPlane@@QAEXXZ
    0x4BA200 | public: void __thiscall mmAnimPlane::CalculateCubics(int,class Vector4 &,class Vector4 &,class Vector4 &) | ?CalculateCubics@mmAnimPlane@@QAEXHAAVVector4@@00@Z
    0x4BA380 | public: void __thiscall mmAnimPlane::SolveVector(float,class Vector3 &,class Vector3 &) | ?SolveVector@mmAnimPlane@@QAEXMAAVVector3@@0@Z
    0x4BA500 | public: virtual void __fastcall mmAnimPlane::Draw(int) | ?Draw@mmAnimPlane@@UAIXH@Z
    0x4BA550 | private: void __thiscall mmAnimPlane::UpdateAudio(void) | ?UpdateAudio@mmAnimPlane@@AAEXXZ
    0x4BA6B0 | private: void __thiscall mmAnimPlane::CalculateDistToPlayer2(void) | ?CalculateDistToPlayer2@mmAnimPlane@@AAEXXZ
    0x4BA780 | private: void __thiscall mmAnimPlane::CalculateAudioPanning(void) | ?CalculateAudioPanning@mmAnimPlane@@AAEXXZ
    0x4BA7D0 | private: float __thiscall mmAnimPlane::CalculateDoppler(float) | ?CalculateDoppler@mmAnimPlane@@AAEMM@Z
    0x4BA910 | public: virtual void * __thiscall mmAnimPlane::`vector deleting destructor'(unsigned int) | ??_EmmAnimPlane@@UAEPAXI@Z
    0x4BA910 | public: virtual void * __thiscall mmAnimPlane::`scalar deleting destructor'(unsigned int) | ??_GmmAnimPlane@@UAEPAXI@Z
    0x594110 | const mmAnimPlane::`vftable' | ??_7mmAnimPlane@@6B@
    0x5B0B60 | private: static float mmAnimPlane::s_fAudioMinDistance | ?s_fAudioMinDistance@mmAnimPlane@@0MA
    0x5B0B64 | private: static float mmAnimPlane::s_fCloserMinDistMult | ?s_fCloserMinDistMult@mmAnimPlane@@0MA
    0x5B0B68 | private: static float mmAnimPlane::s_fAudioMaxDistance | ?s_fAudioMaxDistance@mmAnimPlane@@0MA
    0x5B0B6C | private: static float mmAnimPlane::s_fAudioVolume | ?s_fAudioVolume@mmAnimPlane@@0MA
    0x668180 | private: static float mmAnimPlane::s_fAudioAttenuationMult | ?s_fAudioAttenuationMult@mmAnimPlane@@0MA
*/

#include "hooking.h"

struct mmAnimPlane : mmMatrixInstance
{
public:
    // mmAnimPlane::`vftable' @ 0x594110

    // 0x4B99C0 | ??0mmAnimPlane@@QAE@XZ
    inline mmAnimPlane()
    {
        stub<member_func_t<void, mmAnimPlane>>(0x4B99C0, this);
    }

    // 0x4B9B60 | ?Init@mmAnimPlane@@QAEXHPAD0PAVVector3@@HHPAM@Z
    inline void Init(int32_t arg1, char* arg2, char* arg3, class Vector3* arg4, int32_t arg5, int32_t arg6, float* arg7)
    {
        return stub<member_func_t<void, mmAnimPlane, int32_t, char*, char*, class Vector3*, int32_t, int32_t, float*>>(
            0x4B9B60, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4B9DD0 | ?Activate@mmAnimPlane@@QAEXXZ
    inline void Activate()
    {
        return stub<member_func_t<void, mmAnimPlane>>(0x4B9DD0, this);
    }

    // 0x4B9DE0 | ?Deactivate@mmAnimPlane@@QAEXXZ
    inline void Deactivate()
    {
        return stub<member_func_t<void, mmAnimPlane>>(0x4B9DE0, this);
    }

    // 0x4B9DF0 | ?Update@mmAnimPlane@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmAnimPlane>>(0x4B9DF0, this);
    }

    // 0x4B9E10 | ?UpdatePathPosition@mmAnimPlane@@QAEXXZ
    inline void UpdatePathPosition()
    {
        return stub<member_func_t<void, mmAnimPlane>>(0x4B9E10, this);
    }

    // 0x4B9FD0 | ?SetPathSpeed@mmAnimPlane@@QAEXXZ
    inline void SetPathSpeed()
    {
        return stub<member_func_t<void, mmAnimPlane>>(0x4B9FD0, this);
    }

    // 0x4B9FE0 | ?ReverseCalcPathSpeed@mmAnimPlane@@QAEXXZ
    inline void ReverseCalcPathSpeed()
    {
        return stub<member_func_t<void, mmAnimPlane>>(0x4B9FE0, this);
    }

    // 0x4B9FF0 | ?SolvePosition@mmAnimPlane@@QAEXAAVVector3@@AAM@Z
    inline void SolvePosition(class Vector3& arg1, float& arg2)
    {
        return stub<member_func_t<void, mmAnimPlane, class Vector3&, float&>>(0x4B9FF0, this, arg1, arg2);
    }

    // 0x4BA0C0 | ?AdjustPhaseOffsets@mmAnimPlane@@QAEXXZ
    inline void AdjustPhaseOffsets()
    {
        return stub<member_func_t<void, mmAnimPlane>>(0x4BA0C0, this);
    }

    // 0x4BA130 | ?PreCalcCubics@mmAnimPlane@@QAEXXZ
    inline void PreCalcCubics()
    {
        return stub<member_func_t<void, mmAnimPlane>>(0x4BA130, this);
    }

    // 0x4BA200 | ?CalculateCubics@mmAnimPlane@@QAEXHAAVVector4@@00@Z
    inline void CalculateCubics(int32_t arg1, class Vector4& arg2, class Vector4& arg3, class Vector4& arg4)
    {
        return stub<member_func_t<void, mmAnimPlane, int32_t, class Vector4&, class Vector4&, class Vector4&>>(
            0x4BA200, this, arg1, arg2, arg3, arg4);
    }

    // 0x4BA380 | ?SolveVector@mmAnimPlane@@QAEXMAAVVector3@@0@Z
    inline void SolveVector(float arg1, class Vector3& arg2, class Vector3& arg3)
    {
        return stub<member_func_t<void, mmAnimPlane, float, class Vector3&, class Vector3&>>(
            0x4BA380, this, arg1, arg2, arg3);
    }

    // 0x4BA550 | ?UpdateAudio@mmAnimPlane@@AAEXXZ
    inline void UpdateAudio()
    {
        return stub<member_func_t<void, mmAnimPlane>>(0x4BA550, this);
    }

    // 0x4BA6B0 | ?CalculateDistToPlayer2@mmAnimPlane@@AAEXXZ
    inline void CalculateDistToPlayer2()
    {
        return stub<member_func_t<void, mmAnimPlane>>(0x4BA6B0, this);
    }

    // 0x4BA780 | ?CalculateAudioPanning@mmAnimPlane@@AAEXXZ
    inline void CalculateAudioPanning()
    {
        return stub<member_func_t<void, mmAnimPlane>>(0x4BA780, this);
    }

    // 0x4BA7D0 | ?CalculateDoppler@mmAnimPlane@@AAEMM@Z
    inline float CalculateDoppler(float arg1)
    {
        return stub<member_func_t<float, mmAnimPlane, float>>(0x4BA7D0, this, arg1);
    }

    // 0x5B0B60 | ?s_fAudioMinDistance@mmAnimPlane@@0MA
    static inline extern_var(0x5B0B60, float, s_fAudioMinDistance);

    // 0x5B0B64 | ?s_fCloserMinDistMult@mmAnimPlane@@0MA
    static inline extern_var(0x5B0B64, float, s_fCloserMinDistMult);

    // 0x5B0B68 | ?s_fAudioMaxDistance@mmAnimPlane@@0MA
    static inline extern_var(0x5B0B68, float, s_fAudioMaxDistance);

    // 0x5B0B6C | ?s_fAudioVolume@mmAnimPlane@@0MA
    static inline extern_var(0x5B0B6C, float, s_fAudioVolume);

    // 0x668180 | ?s_fAudioAttenuationMult@mmAnimPlane@@0MA
    static inline extern_var(0x668180, float, s_fAudioAttenuationMult);

    // 0x4B9AB0 | ??1mmAnimPlane@@UAE@XZ
    inline ~mmAnimPlane() override
    {
        stub<member_func_t<void, mmAnimPlane>>(0x4B9AB0, this);
    }

    // 0x4BA500 | ?Draw@mmAnimPlane@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmAnimPlane, int32_t>>(0x4BA500, this, arg1);
    }

    // 0x4B9D60 | ?Reset@mmAnimPlane@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmAnimPlane>>(0x4B9D60, this);
    }
};
