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
    mmaudio:creverb

    0x4E7390 | public: __thiscall CReverb::CReverb(struct IDirectSound3DBuffer *) | ??0CReverb@@QAE@PAUIDirectSound3DBuffer@@@Z
    0x4E7430 | public: __thiscall CReverb::~CReverb(void) | ??1CReverb@@QAE@XZ
    0x4E7440 | public: int __thiscall CReverb::PropertySetOk(void) | ?PropertySetOk@CReverb@@QAEHXZ
    0x4E7450 | private: int __thiscall CReverb::QueryProperty(unsigned long) | ?QueryProperty@CReverb@@AAEHK@Z
    0x4E74A0 | public: void __thiscall CReverb::SetEnvironment(unsigned long) | ?SetEnvironment@CReverb@@QAEXK@Z
    0x4E74C0 | public: void __thiscall CReverb::SetVolume(float) | ?SetVolume@CReverb@@QAEXM@Z
    0x4E74E0 | public: void __thiscall CReverb::SetDecayTime(float) | ?SetDecayTime@CReverb@@QAEXM@Z
    0x4E7500 | public: void __thiscall CReverb::SetDamping(float) | ?SetDamping@CReverb@@QAEXM@Z
    0x4E7520 | public: void __thiscall CReverb::SetAll(struct EAX_REVERBPROPERTIES *) | ?SetAll@CReverb@@QAEXPAUEAX_REVERBPROPERTIES@@@Z
    0x4E7540 | public: void __thiscall CReverb::SetPreset(unsigned long,float,float,float) | ?SetPreset@CReverb@@QAEXKMMM@Z
    0x4E7580 | public: void __thiscall CReverb::SetPreset(struct EAX_REVERBPROPERTIES *) | ?SetPreset@CReverb@@QAEXPAUEAX_REVERBPROPERTIES@@@Z
    0x4E75A0 | public: unsigned long __thiscall CReverb::GetEnvironment(void) | ?GetEnvironment@CReverb@@QAEKXZ
    0x4E75E0 | public: float __thiscall CReverb::GetVolume(void) | ?GetVolume@CReverb@@QAEMXZ
    0x4E7620 | public: float __thiscall CReverb::GetDecayTime(void) | ?GetDecayTime@CReverb@@QAEMXZ
    0x4E7660 | public: float __thiscall CReverb::GetDamping(void) | ?GetDamping@CReverb@@QAEMXZ
    0x4E76A0 | public: void __thiscall CReverb::GetAll(struct EAX_REVERBPROPERTIES *) | ?GetAll@CReverb@@QAEXPAUEAX_REVERBPROPERTIES@@@Z
*/

#include "hooking.h"

class CReverb
{
public:
    // 0x4E7390 | ??0CReverb@@QAE@PAUIDirectSound3DBuffer@@@Z
    inline CReverb(struct IDirectSound3DBuffer* arg1)
    {
        // stub<member_func_t<void, CReverb, struct IDirectSound3DBuffer*>>(0x4E7390, this, arg1);

        unimplemented();
    }

    // 0x4E7430 | ??1CReverb@@QAE@XZ
    inline ~CReverb()
    {
        stub<member_func_t<void, CReverb>>(0x4E7430, this);
    }

    // 0x4E7440 | ?PropertySetOk@CReverb@@QAEHXZ
    inline int32_t PropertySetOk()
    {
        return stub<member_func_t<int32_t, CReverb>>(0x4E7440, this);
    }

    // 0x4E7450 | ?QueryProperty@CReverb@@AAEHK@Z
    inline int32_t QueryProperty(uint32_t arg1)
    {
        return stub<member_func_t<int32_t, CReverb, uint32_t>>(0x4E7450, this, arg1);
    }

    // 0x4E74A0 | ?SetEnvironment@CReverb@@QAEXK@Z
    inline void SetEnvironment(uint32_t arg1)
    {
        return stub<member_func_t<void, CReverb, uint32_t>>(0x4E74A0, this, arg1);
    }

    // 0x4E74C0 | ?SetVolume@CReverb@@QAEXM@Z
    inline void SetVolume(float arg1)
    {
        return stub<member_func_t<void, CReverb, float>>(0x4E74C0, this, arg1);
    }

    // 0x4E74E0 | ?SetDecayTime@CReverb@@QAEXM@Z
    inline void SetDecayTime(float arg1)
    {
        return stub<member_func_t<void, CReverb, float>>(0x4E74E0, this, arg1);
    }

    // 0x4E7500 | ?SetDamping@CReverb@@QAEXM@Z
    inline void SetDamping(float arg1)
    {
        return stub<member_func_t<void, CReverb, float>>(0x4E7500, this, arg1);
    }

    // 0x4E7520 | ?SetAll@CReverb@@QAEXPAUEAX_REVERBPROPERTIES@@@Z
    inline void SetAll(struct EAX_REVERBPROPERTIES* arg1)
    {
        return stub<member_func_t<void, CReverb, struct EAX_REVERBPROPERTIES*>>(0x4E7520, this, arg1);
    }

    // 0x4E7540 | ?SetPreset@CReverb@@QAEXKMMM@Z
    inline void SetPreset(uint32_t arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, CReverb, uint32_t, float, float, float>>(
            0x4E7540, this, arg1, arg2, arg3, arg4);
    }

    // 0x4E7580 | ?SetPreset@CReverb@@QAEXPAUEAX_REVERBPROPERTIES@@@Z
    inline void SetPreset(struct EAX_REVERBPROPERTIES* arg1)
    {
        return stub<member_func_t<void, CReverb, struct EAX_REVERBPROPERTIES*>>(0x4E7580, this, arg1);
    }

    // 0x4E75A0 | ?GetEnvironment@CReverb@@QAEKXZ
    inline uint32_t GetEnvironment()
    {
        return stub<member_func_t<uint32_t, CReverb>>(0x4E75A0, this);
    }

    // 0x4E75E0 | ?GetVolume@CReverb@@QAEMXZ
    inline float GetVolume()
    {
        return stub<member_func_t<float, CReverb>>(0x4E75E0, this);
    }

    // 0x4E7620 | ?GetDecayTime@CReverb@@QAEMXZ
    inline float GetDecayTime()
    {
        return stub<member_func_t<float, CReverb>>(0x4E7620, this);
    }

    // 0x4E7660 | ?GetDamping@CReverb@@QAEMXZ
    inline float GetDamping()
    {
        return stub<member_func_t<float, CReverb>>(0x4E7660, this);
    }

    // 0x4E76A0 | ?GetAll@CReverb@@QAEXPAUEAX_REVERBPROPERTIES@@@Z
    inline void GetAll(struct EAX_REVERBPROPERTIES* arg1)
    {
        return stub<member_func_t<void, CReverb, struct EAX_REVERBPROPERTIES*>>(0x4E76A0, this, arg1);
    }
};
