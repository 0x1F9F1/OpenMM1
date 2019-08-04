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
    mmcar:engine

    0x474110 | public: __thiscall mmEngine::mmEngine(void) | ??0mmEngine@@QAE@XZ
    0x474170 | public: virtual __thiscall mmEngine::~mmEngine(void) | ??1mmEngine@@UAE@XZ
    0x474180 | public: void __thiscall mmEngine::Init(class mmCarSim *) | ?Init@mmEngine@@QAEXPAVmmCarSim@@@Z
    0x4741B0 | public: virtual void __thiscall mmEngine::AfterLoad(void) | ?AfterLoad@mmEngine@@UAEXXZ
    0x4741C0 | public: void __thiscall mmEngine::Load(class Stream *) | ?Load@mmEngine@@QAEXPAVStream@@@Z
    0x474240 | public: void __thiscall mmEngine::ComputeConstants(void) | ?ComputeConstants@mmEngine@@QAEXXZ
    0x4742C0 | public: float __thiscall mmEngine::CalcTorqueAtFullThrottle(void) | ?CalcTorqueAtFullThrottle@mmEngine@@QAEMXZ
    0x474350 | public: float __thiscall mmEngine::CalcTorqueAtZeroThrottle(void) | ?CalcTorqueAtZeroThrottle@mmEngine@@QAEMXZ
    0x474390 | public: float __thiscall mmEngine::CalcTorque(float) | ?CalcTorque@mmEngine@@QAEMM@Z
    0x4743C0 | public: void __thiscall mmEngine::Save(class Stream *) | ?Save@mmEngine@@QAEXPAVStream@@@Z
    0x474440 | public: virtual void __thiscall mmEngine::Reset(void) | ?Reset@mmEngine@@UAEXXZ
    0x474470 | public: virtual void __thiscall mmEngine::Update(void) | ?Update@mmEngine@@UAEXXZ
    0x474650 | public: static void __cdecl mmEngine::DeclareFields(void) | ?DeclareFields@mmEngine@@SAXXZ
    0x474800 | public: virtual class MetaClass * __thiscall mmEngine::GetClass(void) | ?GetClass@mmEngine@@UAEPAVMetaClass@@XZ
    0x474810 | public: virtual void * __thiscall mmEngine::`vector deleting destructor'(unsigned int) | ??_EmmEngine@@UAEPAXI@Z
    0x5915D0 | const mmEngine::`vftable' | ??_7mmEngine@@6B@
    0x60A3C0 | class MetaClass mmEngineMetaClass | ?mmEngineMetaClass@@3VMetaClass@@A
    0x4746F0 | void * __cdecl new_mmEngine(int) | ?new_mmEngine@@YAPAXH@Z
    0x4747B0 | void __cdecl delete_mmEngine(void *,int) | ?delete_mmEngine@@YAXPAXH@Z
*/

// 0x60A3C0 | ?mmEngineMetaClass@@3VMetaClass@@A
inline extern_var(0x60A3C0, class MetaClass, mmEngineMetaClass);

// 0x4746F0 | ?new_mmEngine@@YAPAXH@Z
// 0x4747B0 | ?delete_mmEngine@@YAXPAXH@Z

struct mmEngine : asNode
{
public:
    // mmEngine::`vftable' @ 0x5915D0

    // 0x474110 | ??0mmEngine@@QAE@XZ
    inline mmEngine()
    {
        // stub<member_func_t<void, mmEngine>>(0x474110, this);

        unimplemented();
    }

    // 0x474180 | ?Init@mmEngine@@QAEXPAVmmCarSim@@@Z
    inline void Init(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, mmEngine, class mmCarSim*>>(0x474180, this, arg1);
    }

    // 0x4741C0 | ?Load@mmEngine@@QAEXPAVStream@@@Z
    inline void Load(class Stream* arg1)
    {
        return stub<member_func_t<void, mmEngine, class Stream*>>(0x4741C0, this, arg1);
    }

    // 0x474240 | ?ComputeConstants@mmEngine@@QAEXXZ
    inline void ComputeConstants()
    {
        return stub<member_func_t<void, mmEngine>>(0x474240, this);
    }

    // 0x4742C0 | ?CalcTorqueAtFullThrottle@mmEngine@@QAEMXZ
    inline float CalcTorqueAtFullThrottle()
    {
        return stub<member_func_t<float, mmEngine>>(0x4742C0, this);
    }

    // 0x474350 | ?CalcTorqueAtZeroThrottle@mmEngine@@QAEMXZ
    inline float CalcTorqueAtZeroThrottle()
    {
        return stub<member_func_t<float, mmEngine>>(0x474350, this);
    }

    // 0x474390 | ?CalcTorque@mmEngine@@QAEMM@Z
    inline float CalcTorque(float arg1)
    {
        return stub<member_func_t<float, mmEngine, float>>(0x474390, this, arg1);
    }

    // 0x4743C0 | ?Save@mmEngine@@QAEXPAVStream@@@Z
    inline void Save(class Stream* arg1)
    {
        return stub<member_func_t<void, mmEngine, class Stream*>>(0x4743C0, this, arg1);
    }

    // 0x474650 | ?DeclareFields@mmEngine@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x474650);
    }

    // 0x474170 | ??1mmEngine@@UAE@XZ
    inline ~mmEngine() override = 0
    {
        // stub<member_func_t<void, mmEngine>>(0x474170, this);

        unimplemented();
    }

    // 0x474800 | ?GetClass@mmEngine@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmEngine>>(0x474800, this);
    }

    // 0x4741B0 | ?AfterLoad@mmEngine@@UAEXXZ
    inline void AfterLoad() override
    {
        return stub<member_func_t<void, mmEngine>>(0x4741B0, this);
    }

    // 0x474470 | ?Update@mmEngine@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmEngine>>(0x474470, this);
    }

    // 0x474440 | ?Reset@mmEngine@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmEngine>>(0x474440, this);
    }
};
