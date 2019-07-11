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
    data7:ipc

    0x559FB0 | unsigned int __cdecl ipcCreateEvent(int) | ?ipcCreateEvent@@YAIH@Z
    0x559FD0 | unsigned int __cdecl ipcCreateMutex(int) | ?ipcCreateMutex@@YAIH@Z
    0x559FF0 | unsigned int __cdecl ipcCreateThread(unsigned long (__stdcall*)(void *),void *,unsigned long *) | ?ipcCreateThread@@YAIP6GKPAX@Z0PAK@Z
    0x55A010 | void __cdecl ipcTriggerEvent(unsigned int) | ?ipcTriggerEvent@@YAXI@Z
    0x55A030 | void __cdecl ipcReleaseMutex(unsigned int) | ?ipcReleaseMutex@@YAXI@Z
    0x55A050 | void __cdecl ipcWaitSingle(unsigned int) | ?ipcWaitSingle@@YAXI@Z
    0x55A080 | int __cdecl ipcWaitMultiple(int,unsigned int *,int) | ?ipcWaitMultiple@@YAHHPAIH@Z
    0x55A0A0 | void __cdecl ipcCloseHandle(unsigned int) | ?ipcCloseHandle@@YAXI@Z
    0x55A0C0 | void __cdecl ipcYield(void) | ?ipcYield@@YAXXZ
    0x55A0D0 | void __cdecl ipcSleep(unsigned int) | ?ipcSleep@@YAXI@Z
    0x55A0E0 | private: static unsigned long __stdcall ipcMessageQueue::Proc(void *) | ?Proc@ipcMessageQueue@@CGKPAX@Z
    0x55A0F0 | private: int __thiscall ipcMessageQueue::MessageLoop(void) | ?MessageLoop@ipcMessageQueue@@AAEHXZ
    0x55A1D0 | public: void __thiscall ipcMessageQueue::Init(int,int) | ?Init@ipcMessageQueue@@QAEXHH@Z
    0x55A280 | public: void __thiscall ipcMessageQueue::Shutdown(void) | ?Shutdown@ipcMessageQueue@@QAEXXZ
    0x55A2E0 | public: void __thiscall ipcMessageQueue::Send(void (__cdecl*)(void *),void *) | ?Send@ipcMessageQueue@@QAEXP6AXPAX@Z0@Z
    0x55A3D0 | void __cdecl ipcSpinLock(unsigned int *) | ?ipcSpinLock@@YAXPAI@Z
    0x55A420 | void __cdecl ipcSpunUnlock(unsigned int *) | ?ipcSpunUnlock@@YAXPAI@Z
    0x55A450 | void __cdecl ipcCreateSpinLock(unsigned int *) | ?ipcCreateSpinLock@@YAXPAI@Z
    0x55A460 | void __cdecl ipcCloseSpinLock(unsigned int *) | ?ipcCloseSpinLock@@YAXPAI@Z
    0x711F78 | int SynchronousMessageQueues | ?SynchronousMessageQueues@@3HA
    0x55A410 | int __fastcall compareExchange(unsigned int *,int) | ?compareExchange@@YIHPAIH@Z
*/

#include "hooking.h"

class ipcMessageQueue
{
public:
    // 0x55A0E0 | ?Proc@ipcMessageQueue@@CGKPAX@Z
    static inline uint32_t __stdcall Proc(void* arg1)
    {
        return stub<stdcall_t<uint32_t, void*>>(0x55A0E0, arg1);
    }

    // 0x55A0F0 | ?MessageLoop@ipcMessageQueue@@AAEHXZ
    inline int32_t MessageLoop()
    {
        return stub<member_func_t<int32_t, ipcMessageQueue>>(0x55A0F0, this);
    }

    // 0x55A1D0 | ?Init@ipcMessageQueue@@QAEXHH@Z
    inline void Init(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, ipcMessageQueue, int32_t, int32_t>>(0x55A1D0, this, arg1, arg2);
    }

    // 0x55A280 | ?Shutdown@ipcMessageQueue@@QAEXXZ
    inline void Shutdown()
    {
        return stub<member_func_t<void, ipcMessageQueue>>(0x55A280, this);
    }

    // 0x55A2E0 | ?Send@ipcMessageQueue@@QAEXP6AXPAX@Z0@Z
    inline void Send(void(__cdecl* arg1)(void*), void* arg2)
    {
        return stub<member_func_t<void, ipcMessageQueue, void(__cdecl*)(void*), void*>>(0x55A2E0, this, arg1, arg2);
    }
};

// 0x559FB0 | ?ipcCreateEvent@@YAIH@Z
inline uint32_t ipcCreateEvent(int32_t arg1)
{
    return stub<cdecl_t<uint32_t, int32_t>>(0x559FB0, arg1);
}

// 0x559FD0 | ?ipcCreateMutex@@YAIH@Z
inline uint32_t ipcCreateMutex(int32_t arg1)
{
    return stub<cdecl_t<uint32_t, int32_t>>(0x559FD0, arg1);
}

// 0x559FF0 | ?ipcCreateThread@@YAIP6GKPAX@Z0PAK@Z
inline uint32_t ipcCreateThread(uint32_t(__stdcall* arg1)(void*), void* arg2, uint32_t* arg3)
{
    return stub<cdecl_t<uint32_t, uint32_t(__stdcall*)(void*), void*, uint32_t*>>(0x559FF0, arg1, arg2, arg3);
}

// 0x55A010 | ?ipcTriggerEvent@@YAXI@Z
inline void ipcTriggerEvent(uint32_t arg1)
{
    return stub<cdecl_t<void, uint32_t>>(0x55A010, arg1);
}

// 0x55A030 | ?ipcReleaseMutex@@YAXI@Z
inline void ipcReleaseMutex(uint32_t arg1)
{
    return stub<cdecl_t<void, uint32_t>>(0x55A030, arg1);
}

// 0x55A050 | ?ipcWaitSingle@@YAXI@Z
inline void ipcWaitSingle(uint32_t arg1)
{
    return stub<cdecl_t<void, uint32_t>>(0x55A050, arg1);
}

// 0x55A080 | ?ipcWaitMultiple@@YAHHPAIH@Z
inline int32_t ipcWaitMultiple(int32_t arg1, uint32_t* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, int32_t, uint32_t*, int32_t>>(0x55A080, arg1, arg2, arg3);
}

// 0x55A0A0 | ?ipcCloseHandle@@YAXI@Z
inline void ipcCloseHandle(uint32_t arg1)
{
    return stub<cdecl_t<void, uint32_t>>(0x55A0A0, arg1);
}

// 0x55A0C0 | ?ipcYield@@YAXXZ
inline void ipcYield()
{
    return stub<cdecl_t<void>>(0x55A0C0);
}

// 0x55A0D0 | ?ipcSleep@@YAXI@Z
inline void ipcSleep(uint32_t arg1)
{
    return stub<cdecl_t<void, uint32_t>>(0x55A0D0, arg1);
}

// 0x55A3D0 | ?ipcSpinLock@@YAXPAI@Z
inline void ipcSpinLock(uint32_t* arg1)
{
    return stub<cdecl_t<void, uint32_t*>>(0x55A3D0, arg1);
}

// 0x55A420 | ?ipcSpunUnlock@@YAXPAI@Z
inline void ipcSpunUnlock(uint32_t* arg1)
{
    return stub<cdecl_t<void, uint32_t*>>(0x55A420, arg1);
}

// 0x55A450 | ?ipcCreateSpinLock@@YAXPAI@Z
inline void ipcCreateSpinLock(uint32_t* arg1)
{
    return stub<cdecl_t<void, uint32_t*>>(0x55A450, arg1);
}

// 0x55A460 | ?ipcCloseSpinLock@@YAXPAI@Z
inline void ipcCloseSpinLock(uint32_t* arg1)
{
    return stub<cdecl_t<void, uint32_t*>>(0x55A460, arg1);
}

// 0x711F78 | ?SynchronousMessageQueues@@3HA
inline extern_var(0x711F78, int32_t, SynchronousMessageQueues);

// 0x55A410 | ?compareExchange@@YIHPAIH@Z
inline int32_t compareExchange(uint32_t* arg1, int32_t arg2)
{
    return stub<cdecl_t<int32_t, uint32_t*, int32_t>>(0x55A410, arg1, arg2);
}
