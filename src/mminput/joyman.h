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

// mminput:joyman

#include "hooking.h"

// 0x4D87C0 | ?inputEnumDeviceProc@@YGHPAUDIDEVICEINSTANCEA@@PAX@Z
inline int32_t __stdcall inputEnumDeviceProc(struct DIDEVICEINSTANCEA* arg1, void* arg2)
{
    return stub<stdcall_t<int32_t, struct DIDEVICEINSTANCEA*, void*>>(0x4D87C0, arg1, arg2);
}

struct mmJoyMan
{
public:
    // 0x4D87F0 | ??0mmJoyMan@@QAE@XZ
    inline mmJoyMan()
    {
        stub<member_func_t<void, mmJoyMan>>(0x4D87F0, this);
    }

    // 0x4D8800 | ??1mmJoyMan@@QAE@XZ
    inline ~mmJoyMan()
    {
        stub<member_func_t<void, mmJoyMan>>(0x4D8800, this);
    }

    // 0x4D8840 | ?Init@mmJoyMan@@QAEHPAUHINSTANCE__@@PAUHWND__@@@Z
    inline int32_t Init(struct HINSTANCE__* arg1, struct HWND__* arg2)
    {
        return stub<member_func_t<int32_t, mmJoyMan, struct HINSTANCE__*, struct HWND__*>>(0x4D8840, this, arg1, arg2);
    }

    // 0x4D89A0 | ?ButtonToBit@mmJoyMan@@QAEHH@Z
    inline int32_t ButtonToBit(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmJoyMan, int32_t>>(0x4D89A0, this, arg1);
    }

    // 0x4D89D0 | ?QJoystick@mmJoyMan@@QAEHXZ
    inline int32_t QJoystick()
    {
        return stub<member_func_t<int32_t, mmJoyMan>>(0x4D89D0, this);
    }

    // 0x4D89E0 | ?Update@mmJoyMan@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmJoyMan>>(0x4D89E0, this);
    }

    // 0x4D8A10 | ?GetJoyAxis@mmJoyMan@@QAEMHH@Z
    inline float GetJoyAxis(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<float, mmJoyMan, int32_t, int32_t>>(0x4D8A10, this, arg1, arg2);
    }

    // 0x4D8A50 | ?GetJoyButton@mmJoyMan@@QAEHHH@Z
    inline int32_t GetJoyButton(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmJoyMan, int32_t, int32_t>>(0x4D8A50, this, arg1, arg2);
    }

    // 0x4D8AA0 | ?PollJoyButtons@mmJoyMan@@QAEHXZ
    inline int32_t PollJoyButtons()
    {
        return stub<member_func_t<int32_t, mmJoyMan>>(0x4D8AA0, this);
    }

    // 0x4D8B00 | ?PollJoyAxes@mmJoyMan@@QAEHXZ
    inline int32_t PollJoyAxes()
    {
        return stub<member_func_t<int32_t, mmJoyMan>>(0x4D8B00, this);
    }

    // 0x4D8B40 | ?SetCapture@mmJoyMan@@QAEXH@Z
    inline void SetCapture(int32_t arg1)
    {
        return stub<member_func_t<void, mmJoyMan, int32_t>>(0x4D8B40, this, arg1);
    }

    // 0x4D8BB0 | ?GetOneButton@mmJoyMan@@QAEHJ@Z
    inline int32_t GetOneButton(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmJoyMan, int32_t>>(0x4D8BB0, this, arg1);
    }

    // 0x4D8BE0 | ?GetFFEffect@mmJoyMan@@QAEPAVmmEffectFF@@H@Z
    inline class mmEffectFF* GetFFEffect(int32_t arg1)
    {
        return stub<member_func_t<class mmEffectFF*, mmJoyMan, int32_t>>(0x4D8BE0, this, arg1);
    }

    // 0x4D8C10 | ?ToggleEnabled@mmJoyMan@@QAEHH@Z
    inline int32_t ToggleEnabled(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmJoyMan, int32_t>>(0x4D8C10, this, arg1);
    }

    // 0x4D8C50 | ?FFPlay@mmJoyMan@@QAEHH@Z
    inline int32_t FFPlay(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmJoyMan, int32_t>>(0x4D8C50, this, arg1);
    }

    // 0x4D8C80 | ?FFStop@mmJoyMan@@QAEHH@Z
    inline int32_t FFStop(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmJoyMan, int32_t>>(0x4D8C80, this, arg1);
    }

    // 0x4D8CB0 | ?FFIsPlaying@mmJoyMan@@QAEHH@Z
    inline int32_t FFIsPlaying(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmJoyMan, int32_t>>(0x4D8CB0, this, arg1);
    }

    // 0x4D8CE0 | ?FFSetValues@mmJoyMan@@QAEHHMM@Z
    inline int32_t FFSetValues(int32_t arg1, float arg2, float arg3)
    {
        return stub<member_func_t<int32_t, mmJoyMan, int32_t, float, float>>(0x4D8CE0, this, arg1, arg2, arg3);
    }

    // 0x4D8D20 | ?StopAllFF@mmJoyMan@@QAEXXZ
    inline void StopAllFF()
    {
        return stub<member_func_t<void, mmJoyMan>>(0x4D8D20, this);
    }

    // 0x4D8D40 | ?HasCoolie@mmJoyMan@@QAEHXZ
    inline int32_t HasCoolie()
    {
        return stub<member_func_t<int32_t, mmJoyMan>>(0x4D8D40, this);
    }

    // 0x4D8D60 | ?HasThrottle@mmJoyMan@@QAEHXZ
    inline int32_t HasThrottle()
    {
        return stub<member_func_t<int32_t, mmJoyMan>>(0x4D8D60, this);
    }
};
