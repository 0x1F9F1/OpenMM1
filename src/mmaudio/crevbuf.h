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

// mmaudio:crevbuf

#include "hooking.h"

class CReverbBuffer
{
public:
    // 0x4E76D0 | ??0CReverbBuffer@@QAE@PAUIDirectSound3DBuffer@@@Z
    inline CReverbBuffer(struct IDirectSound3DBuffer* arg1)
    {
        stub<member_func_t<void, CReverbBuffer, struct IDirectSound3DBuffer*>>(0x4E76D0, this, arg1);
    }

    // 0x4E7720 | ??1CReverbBuffer@@QAE@XZ
    inline ~CReverbBuffer()
    {
        stub<member_func_t<void, CReverbBuffer>>(0x4E7720, this);
    }

    // 0x4E7730 | ?PropertySetOk@CReverbBuffer@@QAEHXZ
    inline int32_t PropertySetOk()
    {
        return stub<member_func_t<int32_t, CReverbBuffer>>(0x4E7730, this);
    }

    // 0x4E7740 | ?QueryProperty@CReverbBuffer@@AAEHK@Z
    inline int32_t QueryProperty(uint32_t arg1)
    {
        return stub<member_func_t<int32_t, CReverbBuffer, uint32_t>>(0x4E7740, this, arg1);
    }

    // 0x4E7790 | ?SetReverbMix@CReverbBuffer@@QAEXM@Z
    inline void SetReverbMix(float arg1)
    {
        return stub<member_func_t<void, CReverbBuffer, float>>(0x4E7790, this, arg1);
    }

    // 0x4E77B0 | ?SetAll@CReverbBuffer@@QAEXPAUEAXBUFFER_REVERBPROPERTIES@@@Z
    inline void SetAll(struct EAXBUFFER_REVERBPROPERTIES* arg1)
    {
        return stub<member_func_t<void, CReverbBuffer, struct EAXBUFFER_REVERBPROPERTIES*>>(0x4E77B0, this, arg1);
    }

    // 0x4E77D0 | ?GetReverbMix@CReverbBuffer@@QAEMXZ
    inline float GetReverbMix()
    {
        return stub<member_func_t<float, CReverbBuffer>>(0x4E77D0, this);
    }

    // 0x4E7810 | ?GetAll@CReverbBuffer@@QAEXPAUEAXBUFFER_REVERBPROPERTIES@@@Z
    inline void GetAll(struct EAXBUFFER_REVERBPROPERTIES* arg1)
    {
        return stub<member_func_t<void, CReverbBuffer, struct EAXBUFFER_REVERBPROPERTIES*>>(0x4E7810, this, arg1);
    }
};
