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
    eventq7:event

    0x544A30 | public: __thiscall eqEventHandler::eqEventHandler(void) | ??0eqEventHandler@@QAE@XZ
    0x544A80 | public: virtual __thiscall eqEventHandler::~eqEventHandler(void) | ??1eqEventHandler@@UAE@XZ
    0x544AB0 | public: static char * __cdecl eqEventHandler::EKeyName(int) | ?EKeyName@eqEventHandler@@SAPADH@Z
    0x544D80 | public: void __thiscall eqEventHandler::AddClient(class eqEventMonitor *) | ?AddClient@eqEventHandler@@QAEXPAVeqEventMonitor@@@Z
    0x544DE0 | public: void __thiscall eqEventHandler::RemoveClient(class eqEventMonitor *) | ?RemoveClient@eqEventHandler@@QAEXPAVeqEventMonitor@@@Z
    0x544E20 | public: __thiscall eqEventMonitor::eqEventMonitor(int) | ??0eqEventMonitor@@QAE@H@Z
    0x544E40 | public: virtual __thiscall eqEventMonitor::~eqEventMonitor(void) | ??1eqEventMonitor@@UAE@XZ
    0x544E60 | public: virtual void __thiscall eqEventMonitor::Redraw(void *,int,int,int,int) | ?Redraw@eqEventMonitor@@UAEXPAXHHHH@Z
    0x544EA0 | public: virtual void __thiscall eqEventMonitor::Refocus(void *,int) | ?Refocus@eqEventMonitor@@UAEXPAXH@Z
    0x544EE0 | public: virtual void __thiscall eqEventMonitor::Mouse(void *,int,int,int,int,int,int,int) | ?Mouse@eqEventMonitor@@UAEXPAXHHHHHHH@Z
    0x544F60 | public: virtual void __thiscall eqEventMonitor::Keyboard(void *,int,int,int,int) | ?Keyboard@eqEventMonitor@@UAEXPAXHHHH@Z
    0x544FF0 | public: virtual void __thiscall eqEventMonitor::Destroy(void *) | ?Destroy@eqEventMonitor@@UAEXPAX@Z
    0x545020 | public: virtual void __thiscall eqEventMonitor::Activate(void *,int) | ?Activate@eqEventMonitor@@UAEXPAXH@Z
    0x545060 | public: void __thiscall eqEventMonitor::SetWantMotion(int) | ?SetWantMotion@eqEventMonitor@@QAEXH@Z
    0x5450E0 | public: __thiscall eqEventReplayChannelClass::eqEventReplayChannelClass(void) | ??0eqEventReplayChannelClass@@QAE@XZ
    0x545100 | public: virtual void __thiscall eqEventReplayChannelClass::DoRecord(class Stream *) | ?DoRecord@eqEventReplayChannelClass@@UAEXPAVStream@@@Z
    0x545310 | public: virtual void __thiscall eqEventReplayChannelClass::DoPlayback(class Stream *) | ?DoPlayback@eqEventReplayChannelClass@@UAEXPAVStream@@@Z
    0x545400 | public: void __thiscall eqEventReplayChannelClass::QueueMouse(int,int,int,int,int,int,int) | ?QueueMouse@eqEventReplayChannelClass@@QAEXHHHHHHH@Z
    0x545490 | public: void __thiscall eqEventReplayChannelClass::QueueKeyboard(int,int,int,int) | ?QueueKeyboard@eqEventReplayChannelClass@@QAEXHHHH@Z
    0x545500 | public: virtual void * __thiscall eqEventHandler::`scalar deleting destructor'(unsigned int) | ??_GeqEventHandler@@UAEPAXI@Z
    0x545500 | public: virtual void * __thiscall eqEventHandler::`vector deleting destructor'(unsigned int) | ??_EeqEventHandler@@UAEPAXI@Z
    0x545530 | public: virtual void * __thiscall eqEventMonitor::`vector deleting destructor'(unsigned int) | ??_EeqEventMonitor@@UAEPAXI@Z
    0x545530 | public: virtual void * __thiscall eqEventMonitor::`scalar deleting destructor'(unsigned int) | ??_GeqEventMonitor@@UAEPAXI@Z
    0x545560 | public: __thiscall eqEventReplayChannelClass::~eqEventReplayChannelClass(void) | ??1eqEventReplayChannelClass@@QAE@XZ
    0x595FD8 | const eqEventHandler::`vftable' | ??_7eqEventHandler@@6B@
    0x595FF8 | const eqEventMonitor::`vftable' | ??_7eqEventMonitor@@6B@
    0x596018 | const eqEventReplayChannelClass::`vftable' | ??_7eqEventReplayChannelClass@@6B@
    0x710098 | class eqEventReplayChannelClass eqEventReplayChannel | ?eqEventReplayChannel@@3VeqEventReplayChannelClass@@A
    0x7106D0 | public: static class eqEventHandler * eqEventHandler::SuperQ | ?SuperQ@eqEventHandler@@2PAV1@A
*/

#include "replay.h"

// 0x710098 | ?eqEventReplayChannel@@3VeqEventReplayChannelClass@@A
inline extern_var(0x710098, class eqEventReplayChannelClass, eqEventReplayChannel);

class eqEventMonitor;

class eqEventHandler
{
public:
    uint32_t m_Debug {0};
    uint32_t m_dword8 {0};
    uint32_t m_dwordC {0};
    eqEventMonitor* m_EventMonitors[8] {};
    uint32_t m_dword30 {0};
    uint32_t m_dword34 {0};
    uint32_t m_dword38 {0};
    uint32_t m_dword3C {0};
    uint32_t m_CursorX {0};
    uint32_t m_CursorY {0};
    uint32_t m_dword48 {0};
    char m_buffer4C[256];

    // eqEventHandler::`vftable' @ 0x595FD8

    // 0x544A30 | ??0eqEventHandler@@QAE@XZ
    inline eqEventHandler()
    {
        // stub<member_func_t<void, eqEventHandler>>(0x544A30, this);

        unimplemented();
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

    // 0x567350 | __purecall
    virtual inline int32_t BeginGfx(int32_t arg1, int32_t arg2, int32_t arg3) = 0;

    // 0x567350 | __purecall
    virtual inline void EndGfx() = 0;

    // 0x567350 | __purecall
    virtual inline void Update(int32_t arg1) = 0;

    // 0x567350 | __purecall
    virtual inline void BeginTracking() = 0;

    // 0x567350 | __purecall
    virtual inline void EndTracking() = 0;

    // 0x567350 | __purecall
    virtual inline char* GKeyName(int32_t arg1) = 0;
};

check_size(eqEventHandler, 0x14C);

class eqEventReplayChannelClass : eqReplayChannel
{
public:
    // eqEventReplayChannelClass::`vftable' @ 0x596018

    // 0x5450E0 | ??0eqEventReplayChannelClass@@QAE@XZ
    inline eqEventReplayChannelClass()
        : eqReplayChannel(0x45513031)
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
        // stub<member_func_t<void, eqEventMonitor, int32_t>>(0x544E20, this, arg1);

        unimplemented(arg1);
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
