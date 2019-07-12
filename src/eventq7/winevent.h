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
    eventq7:winevent

    0x543910 | public: __thiscall WINEventHandler::WINEventHandler(void) | ??0WINEventHandler@@QAE@XZ
    0x543A40 | public: virtual __thiscall WINEventHandler::~WINEventHandler(void) | ??1WINEventHandler@@UAE@XZ
    0x543AA0 | public: virtual int __thiscall WINEventHandler::BeginGfx(int,int,int) | ?BeginGfx@WINEventHandler@@UAEHHHH@Z
    0x543B40 | public: virtual void __thiscall WINEventHandler::EndGfx(void) | ?EndGfx@WINEventHandler@@UAEXXZ
    0x543B60 | public: virtual char * __thiscall WINEventHandler::GKeyName(int) | ?GKeyName@WINEventHandler@@UAEPADH@Z
    0x543ED0 | public: virtual void __thiscall WINEventHandler::Update(int) | ?Update@WINEventHandler@@UAEXH@Z
    0x544190 | public: virtual void __thiscall WINEventHandler::BeginTracking(void) | ?BeginTracking@WINEventHandler@@UAEXXZ
    0x5441C0 | public: virtual void __thiscall WINEventHandler::EndTracking(void) | ?EndTracking@WINEventHandler@@UAEXXZ
    0x5441E0 | public: void __thiscall WINEventHandler::AdjustMouse(int &,int &) | ?AdjustMouse@WINEventHandler@@QAEXAAH0@Z
    0x5442A0 | private: virtual long __thiscall WINEventHandler::WindowProc(struct HWND__ *,unsigned int,unsigned int,long) | ?WindowProc@WINEventHandler@@EAEJPAUHWND__@@IIJ@Z
    0x544970 | void __cdecl InitEventQueue(void) | ?InitEventQueue@@YAXXZ
    0x5449E0 | void __cdecl DeallocateEventQueue(void) | ?DeallocateEventQueue@@YAXXZ
    0x544A00 | public: virtual void * __thiscall WINEventHandler::`vector deleting destructor'(unsigned int) | ??_EWINEventHandler@@UAEPAXI@Z
    0x544A00 | public: virtual void * __thiscall WINEventHandler::`scalar deleting destructor'(unsigned int) | ??_GWINEventHandler@@UAEPAXI@Z
    0x595FA8 | const WINEventHandler::`vftable'{for `Dispatchable'} | ??_7WINEventHandler@@6BDispatchable@@@
    0x595FB0 | const WINEventHandler::`vftable'{for `eqEventHandler'} | ??_7WINEventHandler@@6BeqEventHandler@@@
    0x595FCC | const Dispatchable::`vftable' | ??_7Dispatchable@@6B@
    0x5C3D38 | int ActiveFlag | ?ActiveFlag@@3HA
    0x710074 | void (__cdecl* CloseCallback)(void) | ?CloseCallback@@3P6AXXZA
    0x710078 | int InitialCursorState | ?InitialCursorState@@3HA
    0x710088 | int eqRestoreFlag | ?eqRestoreFlag@@3HA
*/

#include "hooking.h"

#include "event.h"

// 0x544970 | ?InitEventQueue@@YAXXZ
inline void InitEventQueue()
{
    return stub<cdecl_t<void>>(0x544970);
}

// 0x5449E0 | ?DeallocateEventQueue@@YAXXZ
inline void DeallocateEventQueue()
{
    return stub<cdecl_t<void>>(0x5449E0);
}

// 0x5C3D38 | ?ActiveFlag@@3HA
inline extern_var(0x5C3D38, int32_t, ActiveFlag);

// 0x710074 | ?CloseCallback@@3P6AXXZA
inline extern_var(0x710074, void(__cdecl*)(void), CloseCallback);

// 0x710078 | ?InitialCursorState@@3HA
inline extern_var(0x710078, int32_t, InitialCursorState);

// 0x710088 | ?eqRestoreFlag@@3HA
inline extern_var(0x710088, int32_t, eqRestoreFlag);

class Dispatchable
{
public:
    // Dispatchable::`vftable' @ 0x595FCC

    virtual int32_t WindowProc(struct HWND__* arg1, uint32_t arg2, uint32_t arg3, int32_t arg4) = 0;
};

// TODO: Can't handle multiple inheritance.
struct WINEventHandler
    : eqEventHandler
    , Dispatchable
{
public:
    // 0x543910 | ??0WINEventHandler@@QAE@XZ
    inline WINEventHandler()
    {
        // stub<member_func_t<void, WINEventHandler>>(0x543910, this);

        unimplemented();
    }

    // 0x5441E0 | ?AdjustMouse@WINEventHandler@@QAEXAAH0@Z
    inline void AdjustMouse(int32_t& arg1, int32_t& arg2)
    {
        return stub<member_func_t<void, WINEventHandler, int32_t&, int32_t&>>(0x5441E0, this, arg1, arg2);
    }

    // 0x543A40 ??1WINEventHandler@@UAE@XZ
    inline ~WINEventHandler() override = 0
    {
        // stub<member_func_t<void, WINEventHandler>>(0x543A40, this);

        unimplemented();
    }

    // 0x543AA0 | ?BeginGfx@WINEventHandler@@UAEHHHH@Z
    inline int32_t BeginGfx(int32_t arg1, int32_t arg2, int32_t arg3) override
    {
        return stub<member_func_t<int32_t, WINEventHandler, int32_t, int32_t, int32_t>>(
            0x543AA0, this, arg1, arg2, arg3);
    }

    // 0x543B40 | ?EndGfx@WINEventHandler@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, WINEventHandler>>(0x543B40, this);
    }

    // 0x543B60 | ?GKeyName@WINEventHandler@@UAEPADH@Z
    inline void Update(int32_t arg1) override
    {
        return stub<member_func_t<void, WINEventHandler, int32_t>>(0x543B60, this, arg1);
    }

    // 0x543ED0 | ?Update@WINEventHandler@@UAEXH@Z
    inline void BeginTracking() override
    {
        return stub<member_func_t<void, WINEventHandler>>(0x543ED0, this);
    }

    // 0x544190 | ?BeginTracking@WINEventHandler@@UAEXXZ
    inline void EndTracking() override
    {
        return stub<member_func_t<void, WINEventHandler>>(0x544190, this);
    }

    // 0x5441C0 | ?EndTracking@WINEventHandler@@UAEXXZ
    inline char* GKeyName(int32_t arg1) override
    {
        return stub<member_func_t<char*, WINEventHandler, int32_t>>(0x5441C0, this, arg1);
    }

    virtual int32_t WindowProc(struct HWND__* arg1, uint32_t arg2, uint32_t arg3, int32_t arg4) override
    {
        return stub<member_func_t<int32_t, WINEventHandler, struct HWND__*, uint32_t, uint32_t, int32_t>>(
            0x5442A0, this, arg1, arg2, arg3, arg4);
    }
};
