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
    eventq7:eventq

    0x545570 | public: __thiscall eqEventQ::eqEventQ(int,int,int) | ??0eqEventQ@@QAE@HHH@Z
    0x545600 | public: virtual __thiscall eqEventQ::~eqEventQ(void) | ??1eqEventQ@@UAE@XZ
    0x545670 | public: virtual void __thiscall eqEventQ::Redraw(void *,int,int,int,int) | ?Redraw@eqEventQ@@UAEXPAXHHHH@Z
    0x5456D0 | public: virtual void __thiscall eqEventQ::Refocus(void *,int) | ?Refocus@eqEventQ@@UAEXPAXH@Z
    0x545710 | public: virtual void __thiscall eqEventQ::Mouse(void *,int,int,int,int,int,int,int) | ?Mouse@eqEventQ@@UAEXPAXHHHHHHH@Z
    0x5457A0 | public: virtual void __thiscall eqEventQ::Keyboard(void *,int,int,int,int) | ?Keyboard@eqEventQ@@UAEXPAXHHHH@Z
    0x545800 | public: virtual void __thiscall eqEventQ::Destroy(void *) | ?Destroy@eqEventQ@@UAEXPAX@Z
    0x545840 | public: virtual void __thiscall eqEventQ::Activate(void *,int) | ?Activate@eqEventQ@@UAEXPAXH@Z
    0x545880 | private: void __thiscall eqEventQ::Queue(union eqEvent &) | ?Queue@eqEventQ@@AAEXAATeqEvent@@@Z
    0x5458C0 | public: int __thiscall eqEventQ::Pop(union eqEvent *) | ?Pop@eqEventQ@@QAEHPATeqEvent@@@Z
    0x545930 | public: virtual void * __thiscall eqEventQ::`vector deleting destructor'(unsigned int) | ??_EeqEventQ@@UAEPAXI@Z
    0x545930 | public: virtual void * __thiscall eqEventQ::`scalar deleting destructor'(unsigned int) | ??_GeqEventQ@@UAEPAXI@Z
    0x596030 | const eqEventQ::`vftable' | ??_7eqEventQ@@6B@
*/

#include "hooking.h"

struct eqEventQ : eqEventMonitor
{
public:
    // eqEventQ::`vftable' @ 0x596030

    // 0x545570 | ??0eqEventQ@@QAE@HHH@Z
    inline eqEventQ(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        // stub<member_func_t<void, eqEventQ, int32_t, int32_t, int32_t>>(0x545570, this, arg1, arg2, arg3);

        unimplemented();
    }

    // 0x545880 | ?Queue@eqEventQ@@AAEXAATeqEvent@@@Z
    inline void Queue(union eqEvent& arg1)
    {
        return stub<member_func_t<void, eqEventQ, union eqEvent&>>(0x545880, this, arg1);
    }

    // 0x5458C0 | ?Pop@eqEventQ@@QAEHPATeqEvent@@@Z
    inline int32_t Pop(union eqEvent* arg1)
    {
        return stub<member_func_t<int32_t, eqEventQ, union eqEvent*>>(0x5458C0, this, arg1);
    }

    // 0x545600 | ??1eqEventQ@@UAE@XZ
    inline ~eqEventQ() override = 0
    {
        // stub<member_func_t<void, eqEventQ>>(0x545600, this);

        unimplemented();
    }

    // 0x545670 | ?Redraw@eqEventQ@@UAEXPAXHHHH@Z
    inline void Redraw(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) override
    {
        return stub<member_func_t<void, eqEventQ, void*, int32_t, int32_t, int32_t, int32_t>>(
            0x545670, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5456D0 | ?Refocus@eqEventQ@@UAEXPAXH@Z
    inline void Refocus(void* arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, eqEventQ, void*, int32_t>>(0x5456D0, this, arg1, arg2);
    }

    // 0x545710 | ?Mouse@eqEventQ@@UAEXPAXHHHHHHH@Z
    inline void Mouse(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7,
        int32_t arg8) override
    {
        return stub<
            member_func_t<void, eqEventQ, void*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t>>(
            0x545710, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x5457A0 | ?Keyboard@eqEventQ@@UAEXPAXHHHH@Z
    inline void Keyboard(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) override
    {
        return stub<member_func_t<void, eqEventQ, void*, int32_t, int32_t, int32_t, int32_t>>(
            0x5457A0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x545800 | ?Destroy@eqEventQ@@UAEXPAX@Z
    inline void Destroy(void* arg1) override
    {
        return stub<member_func_t<void, eqEventQ, void*>>(0x545800, this, arg1);
    }

    // 0x545840 | ?Activate@eqEventQ@@UAEXPAXH@Z
    inline void Activate(void* arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, eqEventQ, void*, int32_t>>(0x545840, this, arg1, arg2);
    }
};
