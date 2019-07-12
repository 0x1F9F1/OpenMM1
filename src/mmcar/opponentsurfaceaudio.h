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
    mmcar:opponentsurfaceaudio

    0x47CD40 | public: __thiscall mmOpponentSurfaceAudio::mmOpponentSurfaceAudio(void) | ??0mmOpponentSurfaceAudio@@QAE@XZ
    0x47CD70 | public: __thiscall mmOpponentSurfaceAudio::~mmOpponentSurfaceAudio(void) | ??1mmOpponentSurfaceAudio@@QAE@XZ
    0x47CD80 | public: void __thiscall mmOpponentSurfaceAudio::SetWheelPointers(class mmWheel *,class mmWheel *,class mmWheel *,class mmWheel *) | ?SetWheelPointers@mmOpponentSurfaceAudio@@QAEXPAVmmWheel@@000@Z
    0x47CDA0 | public: void __thiscall mmOpponentSurfaceAudio::Update(float) | ?Update@mmOpponentSurfaceAudio@@QAEXM@Z
    0x47CDE0 | public: void __thiscall mmOpponentSurfaceAudio::UpdateSkid(float) | ?UpdateSkid@mmOpponentSurfaceAudio@@QAEXM@Z
    0x47D060 | public: void __thiscall mmOpponentSurfaceAudio::UpdateSkidSnow(float) | ?UpdateSkidSnow@mmOpponentSurfaceAudio@@QAEXM@Z
    0x47D2C0 | public: void __thiscall mmOpponentSurfaceAudio::Enable3DMode(class Vector3 *) | ?Enable3DMode@mmOpponentSurfaceAudio@@QAEXPAVVector3@@@Z
    0x47D2E0 | public: void __thiscall mmOpponentSurfaceAudio::Disable3DMode(void) | ?Disable3DMode@mmOpponentSurfaceAudio@@QAEXXZ
*/

#include "hooking.h"

struct mmOpponentSurfaceAudio
{
public:
    // 0x47CD40 | ??0mmOpponentSurfaceAudio@@QAE@XZ
    inline mmOpponentSurfaceAudio()
    {
        // stub<member_func_t<void, mmOpponentSurfaceAudio>>(0x47CD40, this);

        unimplemented();
    }

    // 0x47CD70 | ??1mmOpponentSurfaceAudio@@QAE@XZ
    inline ~mmOpponentSurfaceAudio()
    {
        stub<member_func_t<void, mmOpponentSurfaceAudio>>(0x47CD70, this);
    }

    // 0x47CD80 | ?SetWheelPointers@mmOpponentSurfaceAudio@@QAEXPAVmmWheel@@000@Z
    inline void SetWheelPointers(class mmWheel* arg1, class mmWheel* arg2, class mmWheel* arg3, class mmWheel* arg4)
    {
        return stub<member_func_t<void, mmOpponentSurfaceAudio, class mmWheel*, class mmWheel*, class mmWheel*,
            class mmWheel*>>(0x47CD80, this, arg1, arg2, arg3, arg4);
    }

    // 0x47CDA0 | ?Update@mmOpponentSurfaceAudio@@QAEXM@Z
    inline void Update(float arg1)
    {
        return stub<member_func_t<void, mmOpponentSurfaceAudio, float>>(0x47CDA0, this, arg1);
    }

    // 0x47CDE0 | ?UpdateSkid@mmOpponentSurfaceAudio@@QAEXM@Z
    inline void UpdateSkid(float arg1)
    {
        return stub<member_func_t<void, mmOpponentSurfaceAudio, float>>(0x47CDE0, this, arg1);
    }

    // 0x47D060 | ?UpdateSkidSnow@mmOpponentSurfaceAudio@@QAEXM@Z
    inline void UpdateSkidSnow(float arg1)
    {
        return stub<member_func_t<void, mmOpponentSurfaceAudio, float>>(0x47D060, this, arg1);
    }

    // 0x47D2C0 | ?Enable3DMode@mmOpponentSurfaceAudio@@QAEXPAVVector3@@@Z
    inline void Enable3DMode(class Vector3* arg1)
    {
        return stub<member_func_t<void, mmOpponentSurfaceAudio, class Vector3*>>(0x47D2C0, this, arg1);
    }

    // 0x47D2E0 | ?Disable3DMode@mmOpponentSurfaceAudio@@QAEXXZ
    inline void Disable3DMode()
    {
        return stub<member_func_t<void, mmOpponentSurfaceAudio>>(0x47D2E0, this);
    }
};
