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
    mmcar:wheel

    0x474DD0 | public: __thiscall mmWheel::mmWheel(void) | ??0mmWheel@@QAE@XZ
    0x474F90 | public: void __thiscall mmWheel::ComputeConstants(void) | ?ComputeConstants@mmWheel@@QAEXXZ
    0x475050 | public: virtual void __thiscall mmWheel::AfterLoad(void) | ?AfterLoad@mmWheel@@UAEXXZ
    0x475060 | public: void __thiscall mmWheel::Init(char *,char *,class Vector3,class asInertialCS *,int,class mmBoundTemplate *,int) | ?Init@mmWheel@@QAEXPAD0VVector3@@PAVasInertialCS@@HPAVmmBoundTemplate@@H@Z
    0x4751F0 | public: float __thiscall mmWheel::ComputeDwtdw(float,float *,float *,float *) | ?ComputeDwtdw@mmWheel@@QAEMMPAM00@Z
    0x4759F0 | public: virtual void __thiscall mmWheel::Update(void) | ?Update@mmWheel@@UAEXXZ
    0x4768E0 | public: virtual void __thiscall mmWheel::Reset(void) | ?Reset@mmWheel@@UAEXXZ
    0x476950 | public: void __thiscall mmWheel::GenerateSkidParticles(void) | ?GenerateSkidParticles@mmWheel@@QAEXXZ
    0x476970 | public: void __thiscall mmWheel::SetInputs(float,float) | ?SetInputs@mmWheel@@QAEXMM@Z
    0x476990 | public: void __thiscall mmWheel::SetFricMultiplier(float) | ?SetFricMultiplier@mmWheel@@QAEXM@Z
    0x4769B0 | public: void __thiscall mmWheel::SetSteerMultiplier(float) | ?SetSteerMultiplier@mmWheel@@QAEXM@Z
    0x4769C0 | public: void __thiscall mmWheel::Load(class Stream *) | ?Load@mmWheel@@QAEXPAVStream@@@Z
    0x476AC0 | public: void __thiscall mmWheel::Save(class Stream *) | ?Save@mmWheel@@QAEXPAVStream@@@Z
    0x476C00 | public: void __thiscall mmWheel::CopyVars(class mmWheel *) | ?CopyVars@mmWheel@@QAEXPAV1@@Z
    0x476CC0 | public: int __thiscall mmWheel::GetSurfaceSound(void) | ?GetSurfaceSound@mmWheel@@QAEHXZ
    0x476CE0 | public: static void __cdecl mmWheel::DeclareFields(void) | ?DeclareFields@mmWheel@@SAXXZ
    0x476FA0 | public: virtual class MetaClass * __thiscall mmWheel::GetClass(void) | ?GetClass@mmWheel@@UAEPAVMetaClass@@XZ
    0x476FE0 | public: virtual void * __thiscall mmWheel::`vector deleting destructor'(unsigned int) | ??_EmmWheel@@UAEPAXI@Z
    0x5916E8 | const mmWheel::`vftable' | ??_7mmWheel@@6B@
    0x5AB2CC | public: static float mmWheel::PtxMaxSkidCount | ?PtxMaxSkidCount@mmWheel@@2MA
    0x60A448 | class MetaClass mmWheelMetaClass | ?mmWheelMetaClass@@3VMetaClass@@A
    0x60A47C | float DispLatZeroThresh | ?DispLatZeroThresh@@3MA
    0x476E80 | void * __cdecl new_mmWheel(int) | ?new_mmWheel@@YAPAXH@Z
    0x476F50 | void __cdecl delete_mmWheel(void *,int) | ?delete_mmWheel@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x60A448 | ?mmWheelMetaClass@@3VMetaClass@@A
inline extern_var(0x60A448, class MetaClass, mmWheelMetaClass);

// 0x60A47C | ?DispLatZeroThresh@@3MA
inline extern_var(0x60A47C, float, DispLatZeroThresh);

// 0x476E80 | ?new_mmWheel@@YAPAXH@Z
inline void* new_mmWheel(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x476E80, arg1);
}

// 0x476F50 | ?delete_mmWheel@@YAXPAXH@Z
inline void delete_mmWheel(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x476F50, arg1, arg2);
}

class mmWheel : asLinearCS
{
public:
    // mmWheel::`vftable' @ 0x5916E8

    // 0x474DD0 | ??0mmWheel@@QAE@XZ
    inline mmWheel()
    {
        stub<member_func_t<void, mmWheel>>(0x474DD0, this);
    }

    // 0x474F90 | ?ComputeConstants@mmWheel@@QAEXXZ
    inline void ComputeConstants()
    {
        return stub<member_func_t<void, mmWheel>>(0x474F90, this);
    }

    // 0x475060 | ?Init@mmWheel@@QAEXPAD0VVector3@@PAVasInertialCS@@HPAVmmBoundTemplate@@H@Z
    inline void Init(char* arg1, char* arg2, class Vector3 arg3, class asInertialCS* arg4, int32_t arg5,
        class mmBoundTemplate* arg6, int32_t arg7)
    {
        return stub<member_func_t<void, mmWheel, char*, char*, class Vector3, class asInertialCS*, int32_t,
            class mmBoundTemplate*, int32_t>>(0x475060, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4751F0 | ?ComputeDwtdw@mmWheel@@QAEMMPAM00@Z
    inline float ComputeDwtdw(float arg1, float* arg2, float* arg3, float* arg4)
    {
        return stub<member_func_t<float, mmWheel, float, float*, float*, float*>>(
            0x4751F0, this, arg1, arg2, arg3, arg4);
    }

    // 0x476950 | ?GenerateSkidParticles@mmWheel@@QAEXXZ
    inline void GenerateSkidParticles()
    {
        return stub<member_func_t<void, mmWheel>>(0x476950, this);
    }

    // 0x476970 | ?SetInputs@mmWheel@@QAEXMM@Z
    inline void SetInputs(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmWheel, float, float>>(0x476970, this, arg1, arg2);
    }

    // 0x476990 | ?SetFricMultiplier@mmWheel@@QAEXM@Z
    inline void SetFricMultiplier(float arg1)
    {
        return stub<member_func_t<void, mmWheel, float>>(0x476990, this, arg1);
    }

    // 0x4769B0 | ?SetSteerMultiplier@mmWheel@@QAEXM@Z
    inline void SetSteerMultiplier(float arg1)
    {
        return stub<member_func_t<void, mmWheel, float>>(0x4769B0, this, arg1);
    }

    // 0x4769C0 | ?Load@mmWheel@@QAEXPAVStream@@@Z
    inline void Load(class Stream* arg1)
    {
        return stub<member_func_t<void, mmWheel, class Stream*>>(0x4769C0, this, arg1);
    }

    // 0x476AC0 | ?Save@mmWheel@@QAEXPAVStream@@@Z
    inline void Save(class Stream* arg1)
    {
        return stub<member_func_t<void, mmWheel, class Stream*>>(0x476AC0, this, arg1);
    }

    // 0x476C00 | ?CopyVars@mmWheel@@QAEXPAV1@@Z
    inline void CopyVars(class mmWheel* arg1)
    {
        return stub<member_func_t<void, mmWheel, class mmWheel*>>(0x476C00, this, arg1);
    }

    // 0x476CC0 | ?GetSurfaceSound@mmWheel@@QAEHXZ
    inline int32_t GetSurfaceSound()
    {
        return stub<member_func_t<int32_t, mmWheel>>(0x476CC0, this);
    }

    // 0x476CE0 | ?DeclareFields@mmWheel@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x476CE0);
    }

    // 0x5AB2CC | ?PtxMaxSkidCount@mmWheel@@2MA
    static inline extern_var(0x5AB2CC, float, PtxMaxSkidCount);

    // 0x4682D0 | ??1mmWheel@@UAE@XZ
    inline ~mmWheel() override
    {
        stub<member_func_t<void, mmWheel>>(0x4682D0, this);
    }

    // 0x476FA0 | ?GetClass@mmWheel@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmWheel>>(0x476FA0, this);
    }

    // 0x475050 | ?AfterLoad@mmWheel@@UAEXXZ
    inline void AfterLoad() override
    {
        return stub<member_func_t<void, mmWheel>>(0x475050, this);
    }

    // 0x4759F0 | ?Update@mmWheel@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmWheel>>(0x4759F0, this);
    }

    // 0x4768E0 | ?Reset@mmWheel@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmWheel>>(0x4768E0, this);
    }
};
