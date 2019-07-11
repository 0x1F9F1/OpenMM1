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

// mmaudio:cd

#include "hooking.h"

struct CDMan
{
public:
    // CDMan::`vftable' @ 0x5949B8

    // 0x4E6E70 | ??1CDMan@@QAE@XZ
    inline ~CDMan()
    {
        stub<member_func_t<void, CDMan>>(0x4E6E70, this);
    }

    // 0x4E6EB0 | ?Init@CDMan@@QAEKF@Z
    inline uint32_t Init(int16_t arg1)
    {
        return stub<member_func_t<uint32_t, CDMan, int16_t>>(0x4E6EB0, this, arg1);
    }

    // 0x4E6F70 | ?PlayTrack@CDMan@@QAEKEE@Z
    inline uint32_t PlayTrack(uint8_t arg1, uint8_t arg2)
    {
        return stub<member_func_t<uint32_t, CDMan, uint8_t, uint8_t>>(0x4E6F70, this, arg1, arg2);
    }

    // 0x4E7060 | ?ResumePlay@CDMan@@QAEKXZ
    inline uint32_t ResumePlay()
    {
        return stub<member_func_t<uint32_t, CDMan>>(0x4E7060, this);
    }

    // 0x4E7080 | ?PlayTrack@CDMan@@QAEKEEEEE@Z
    inline uint32_t PlayTrack(uint8_t arg1, uint8_t arg2, uint8_t arg3, uint8_t arg4, uint8_t arg5)
    {
        return stub<member_func_t<uint32_t, CDMan, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t>>(
            0x4E7080, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4E7190 | ?Stop@CDMan@@QAEKXZ
    inline uint32_t Stop()
    {
        return stub<member_func_t<uint32_t, CDMan>>(0x4E7190, this);
    }

    // 0x4E71D0 | ?SeekTrack@CDMan@@QAEKE@Z
    inline uint32_t SeekTrack(uint8_t arg1)
    {
        return stub<member_func_t<uint32_t, CDMan, uint8_t>>(0x4E71D0, this, arg1);
    }

    // 0x4E7240 | ?GetPosition@CDMan@@QAEKPAE000@Z
    inline uint32_t GetPosition(uint8_t* arg1, uint8_t* arg2, uint8_t* arg3, uint8_t* arg4)
    {
        return stub<member_func_t<uint32_t, CDMan, uint8_t*, uint8_t*, uint8_t*, uint8_t*>>(
            0x4E7240, this, arg1, arg2, arg3, arg4);
    }

    // 0x4E7330 | ?GetNumTracks@CDMan@@QAEFXZ
    inline int16_t GetNumTracks()
    {
        return stub<member_func_t<int16_t, CDMan>>(0x4E7330, this);
    }

    // 0x4E72C0 | ?WindowProc@CDMan@@EAEJPAUHWND__@@IIJ@Z
    virtual inline int32_t WindowProc(struct HWND__* arg1, uint32_t arg2, uint32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<int32_t, CDMan, struct HWND__*, uint32_t, uint32_t, int32_t>>(
            0x4E72C0, this, arg1, arg2, arg3, arg4);
    }
};
