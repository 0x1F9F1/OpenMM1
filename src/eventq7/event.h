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

// eventq7:event

#include "hooking.h"

// 0x710098 | ?eqEventReplayChannel@@3VeqEventReplayChannelClass@@A
inline extern_var(0x710098, class eqEventReplayChannelClass, eqEventReplayChannel);

class eqEventHandler
{
public:
    // eqEventHandler::`vftable' @ 0x595FD8

    // 0x544A30 | ??0eqEventHandler@@QAE@XZ
    inline eqEventHandler()
    {
        stub<member_func_t<void, eqEventHandler>>(0x544A30, this);
    }

    // 0x544AB0 | ?EKeyName@eqEventHandler@@SAPADH@Z
    static inline char* EKeyName(int32_t arg1)
    {
        return stub<cdecl_t<char*, int32_t>>(0x544AB0, arg1);
    }

    // 0x544D80 | ?AddClient@eqEventHandler@@QAEXPAVeqEventMonitor@@@Z
    inline void AddClient(class eqEventMonitor* arg1)
    {
        return stub<member_func_t<void, eqEventHandler, class eqEventMonitor*>>(0x544D80, this, arg1);
    }

    // 0x544DE0 | ?RemoveClient@eqEventHandler@@QAEXPAVeqEventMonitor@@@Z
    inline void RemoveClient(class eqEventMonitor* arg1)
    {
        return stub<member_func_t<void, eqEventHandler, class eqEventMonitor*>>(0x544DE0, this, arg1);
    }

    // 0x7106D0 | ?SuperQ@eqEventHandler@@2PAV1@A
    static inline extern_var(0x7106D0, class eqEventHandler*, SuperQ);

    // 0x544A80 | ??1eqEventHandler@@UAE@XZ
    virtual inline ~eqEventHandler()
    {
        stub<member_func_t<void, eqEventHandler>>(0x544A80, this);
    }
};

class eqEventReplayChannelClass : eqReplayChannel
{
public:
    // eqEventReplayChannelClass::`vftable' @ 0x596018

    // 0x5450E0 | ??0eqEventReplayChannelClass@@QAE@XZ
    inline eqEventReplayChannelClass()
    {
        stub<member_func_t<void, eqEventReplayChannelClass>>(0x5450E0, this);
    }

    // 0x545400 | ?QueueMouse@eqEventReplayChannelClass@@QAEXHHHHHHH@Z
    inline void QueueMouse(
        int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
    {
        return stub<member_func_t<void, eqEventReplayChannelClass, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t,
            int32_t>>(0x545400, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x545490 | ?QueueKeyboard@eqEventReplayChannelClass@@QAEXHHHH@Z
    inline void QueueKeyboard(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<void, eqEventReplayChannelClass, int32_t, int32_t, int32_t, int32_t>>(
            0x545490, this, arg1, arg2, arg3, arg4);
    }

    // 0x545560 | ??1eqEventReplayChannelClass@@QAE@XZ
    inline ~eqEventReplayChannelClass()
    {
        stub<member_func_t<void, eqEventReplayChannelClass>>(0x545560, this);
    }

    // 0x545100 | ?DoRecord@eqEventReplayChannelClass@@UAEXPAVStream@@@Z
    inline void DoRecord(class Stream* arg1) override
    {
        return stub<member_func_t<void, eqEventReplayChannelClass, class Stream*>>(0x545100, this, arg1);
    }

    // 0x545310 | ?DoPlayback@eqEventReplayChannelClass@@UAEXPAVStream@@@Z
    inline void DoPlayback(class Stream* arg1) override
    {
        return stub<member_func_t<void, eqEventReplayChannelClass, class Stream*>>(0x545310, this, arg1);
    }
};

class eqEventMonitor
{
public:
    // eqEventMonitor::`vftable' @ 0x595FF8

    // 0x544E20 | ??0eqEventMonitor@@QAE@H@Z
    inline eqEventMonitor(int32_t arg1)
    {
        stub<member_func_t<void, eqEventMonitor, int32_t>>(0x544E20, this, arg1);
    }

    // 0x545060 | ?SetWantMotion@eqEventMonitor@@QAEXH@Z
    inline void SetWantMotion(int32_t arg1)
    {
        return stub<member_func_t<void, eqEventMonitor, int32_t>>(0x545060, this, arg1);
    }

    // 0x544E40 | ??1eqEventMonitor@@UAE@XZ
    virtual inline ~eqEventMonitor()
    {
        stub<member_func_t<void, eqEventMonitor>>(0x544E40, this);
    }

    // 0x544E60 | ?Redraw@eqEventMonitor@@UAEXPAXHHHH@Z
    virtual inline void Redraw(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<void, eqEventMonitor, void*, int32_t, int32_t, int32_t, int32_t>>(
            0x544E60, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x544EA0 | ?Refocus@eqEventMonitor@@UAEXPAXH@Z
    virtual inline void Refocus(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, eqEventMonitor, void*, int32_t>>(0x544EA0, this, arg1, arg2);
    }

    // 0x544EE0 | ?Mouse@eqEventMonitor@@UAEXPAXHHHHHHH@Z
    virtual inline void Mouse(
        void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
    {
        return stub<
            member_func_t<void, eqEventMonitor, void*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t>>(
            0x544EE0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x544F60 | ?Keyboard@eqEventMonitor@@UAEXPAXHHHH@Z
    virtual inline void Keyboard(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<void, eqEventMonitor, void*, int32_t, int32_t, int32_t, int32_t>>(
            0x544F60, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x544FF0 | ?Destroy@eqEventMonitor@@UAEXPAX@Z
    virtual inline void Destroy(void* arg1)
    {
        return stub<member_func_t<void, eqEventMonitor, void*>>(0x544FF0, this, arg1);
    }

    // 0x545020 | ?Activate@eqEventMonitor@@UAEXPAXH@Z
    virtual inline void Activate(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, eqEventMonitor, void*, int32_t>>(0x545020, this, arg1, arg2);
    }
};
