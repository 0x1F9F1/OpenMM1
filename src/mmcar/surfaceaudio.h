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

// mmcar:surfaceaudio

#include "hooking.h"

struct mmSurfaceAudio
{
public:
    // 0x47E020 | ??0mmSurfaceAudio@@QAE@PAVmmCarSim@@PAVVector3@@@Z
    inline mmSurfaceAudio(class mmCarSim* arg1, class Vector3* arg2)
    {
        stub<member_func_t<void, mmSurfaceAudio, class mmCarSim*, class Vector3*>>(0x47E020, this, arg1, arg2);
    }

    // 0x47E420 | ??1mmSurfaceAudio@@QAE@XZ
    inline ~mmSurfaceAudio()
    {
        stub<member_func_t<void, mmSurfaceAudio>>(0x47E420, this);
    }

    // 0x47E490 | ?EnableTireWobble@mmSurfaceAudio@@QAEXXZ
    inline void EnableTireWobble()
    {
        return stub<member_func_t<void, mmSurfaceAudio>>(0x47E490, this);
    }

    // 0x47E540 | ?EchoOn@mmSurfaceAudio@@QAEXPAVmmCarSim@@M@Z
    inline void EchoOn(class mmCarSim* arg1, float arg2)
    {
        return stub<member_func_t<void, mmSurfaceAudio, class mmCarSim*, float>>(0x47E540, this, arg1, arg2);
    }

    // 0x47E650 | ?EchoOff@mmSurfaceAudio@@QAEXPAVmmCarSim@@@Z
    inline void EchoOff(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, mmSurfaceAudio, class mmCarSim*>>(0x47E650, this, arg1);
    }

    // 0x47E700 | ?EnableAir@mmSurfaceAudio@@QAEHPAVmmCarSim@@@Z
    inline int32_t EnableAir(class mmCarSim* arg1)
    {
        return stub<member_func_t<int32_t, mmSurfaceAudio, class mmCarSim*>>(0x47E700, this, arg1);
    }

    // 0x47E7D0 | ?EnableSuspension@mmSurfaceAudio@@QAEHPAVmmCarSim@@@Z
    inline int32_t EnableSuspension(class mmCarSim* arg1)
    {
        return stub<member_func_t<int32_t, mmSurfaceAudio, class mmCarSim*>>(0x47E7D0, this, arg1);
    }

    // 0x47E880 | ?EnableSurface@mmSurfaceAudio@@QAEHPAVmmCarSim@@@Z
    inline int32_t EnableSurface(class mmCarSim* arg1)
    {
        return stub<member_func_t<int32_t, mmSurfaceAudio, class mmCarSim*>>(0x47E880, this, arg1);
    }

    // 0x47EA10 | ?DisableSurface@mmSurfaceAudio@@QAEXXZ
    inline void DisableSurface()
    {
        return stub<member_func_t<void, mmSurfaceAudio>>(0x47EA10, this);
    }

    // 0x47EA30 | ?SetWheelPointers@mmSurfaceAudio@@QAEXPAVmmWheel@@000@Z
    inline void SetWheelPointers(class mmWheel* arg1, class mmWheel* arg2, class mmWheel* arg3, class mmWheel* arg4)
    {
        return stub<
            member_func_t<void, mmSurfaceAudio, class mmWheel*, class mmWheel*, class mmWheel*, class mmWheel*>>(
            0x47EA30, this, arg1, arg2, arg3, arg4);
    }

    // 0x47EA60 | ?Update@mmSurfaceAudio@@QAEXM@Z
    inline void Update(float arg1)
    {
        return stub<member_func_t<void, mmSurfaceAudio, float>>(0x47EA60, this, arg1);
    }

    // 0x47EAF0 | ?UpdateTireWobble@mmSurfaceAudio@@QAEXXZ
    inline void UpdateTireWobble()
    {
        return stub<member_func_t<void, mmSurfaceAudio>>(0x47EAF0, this);
    }

    // 0x47EC40 | ?UpdateSurface@mmSurfaceAudio@@QAEXM@Z
    inline void UpdateSurface(float arg1)
    {
        return stub<member_func_t<void, mmSurfaceAudio, float>>(0x47EC40, this, arg1);
    }

    // 0x47EEC0 | ?UpdateSurfaceSnow@mmSurfaceAudio@@QAEXM@Z
    inline void UpdateSurfaceSnow(float arg1)
    {
        return stub<member_func_t<void, mmSurfaceAudio, float>>(0x47EEC0, this, arg1);
    }

    // 0x47F0A0 | ?PlayCobble@mmSurfaceAudio@@AAEXM@Z
    inline void PlayCobble(float arg1)
    {
        return stub<member_func_t<void, mmSurfaceAudio, float>>(0x47F0A0, this, arg1);
    }

    // 0x47F1D0 | ?UpdateSkidClear@mmSurfaceAudio@@QAEXM@Z
    inline void UpdateSkidClear(float arg1)
    {
        return stub<member_func_t<void, mmSurfaceAudio, float>>(0x47F1D0, this, arg1);
    }

    // 0x47F590 | ?UpdateSkidRain@mmSurfaceAudio@@QAEXM@Z
    inline void UpdateSkidRain(float arg1)
    {
        return stub<member_func_t<void, mmSurfaceAudio, float>>(0x47F590, this, arg1);
    }

    // 0x47F960 | ?UpdateSkidSnow@mmSurfaceAudio@@QAEXM@Z
    inline void UpdateSkidSnow(float arg1)
    {
        return stub<member_func_t<void, mmSurfaceAudio, float>>(0x47F960, this, arg1);
    }

    // 0x47FC90 | ?UpdateSuspension@mmSurfaceAudio@@QAEXXZ
    inline void UpdateSuspension()
    {
        return stub<member_func_t<void, mmSurfaceAudio>>(0x47FC90, this);
    }

    // 0x47FDA0 | ?OnTwoWheels@mmSurfaceAudio@@QAEFXZ
    inline int16_t OnTwoWheels()
    {
        return stub<member_func_t<int16_t, mmSurfaceAudio>>(0x47FDA0, this);
    }

    // 0x47FE30 | ?SetWobblePitch@mmSurfaceAudio@@QAEXMM@Z
    inline void SetWobblePitch(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmSurfaceAudio, float, float>>(0x47FE30, this, arg1, arg2);
    }

    // 0x47FE50 | ?SetWobbleVol@mmSurfaceAudio@@QAEXMM@Z
    inline void SetWobbleVol(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmSurfaceAudio, float, float>>(0x47FE50, this, arg1, arg2);
    }
};
