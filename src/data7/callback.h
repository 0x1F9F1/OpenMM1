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
    data7:callback

    0x55AC20 | public: __thiscall Callback::Callback(void) | ??0Callback@@QAE@XZ
    0x55AC30 | public: __thiscall Callback::Callback(void (__thiscall Base::*)(void),class Base *) | ??0Callback@@QAE@P8Base@@AEXXZPAV1@@Z
    0x55AC70 | public: __thiscall Callback::Callback(void (__thiscall Base::*)(void *),class Base *,void *) | ??0Callback@@QAE@P8Base@@AEXPAX@ZPAV1@0@Z
    0x55ACB0 | public: __thiscall Callback::Callback(void (__thiscall Base::*)(void *,void *),class Base *,void *) | ??0Callback@@QAE@P8Base@@AEXPAX0@ZPAV1@0@Z
    0x55ACF0 | public: __thiscall Callback::Callback(void (__thiscall Base::*)(void *,void *),class Base *,void *,void *) | ??0Callback@@QAE@P8Base@@AEXPAX0@ZPAV1@00@Z
    0x55AD30 | public: __thiscall Callback::Callback(void (__cdecl*)(void)) | ??0Callback@@QAE@P6AXXZ@Z
    0x55AD50 | public: __thiscall Callback::Callback(void (__cdecl*)(void *),void *) | ??0Callback@@QAE@P6AXPAX@Z0@Z
    0x55AD80 | public: __thiscall Callback::Callback(void (__cdecl*)(void *,void *),void *) | ??0Callback@@QAE@P6AXPAX0@Z0@Z
    0x55ADB0 | public: void __thiscall Callback::Call(void *) | ?Call@Callback@@QAEXPAX@Z
    0x712240 | class Callback NullCallback | ?NullCallback@@3VCallback@@A
*/

#include "base.h"

class Base;

class Callback
{
public:
    int32_t m_Type {0};
    Base* m_pThis {nullptr};
    void* m_pFunc {nullptr};
    void* m_FirstParam {nullptr};
    void* m_SecondParam {nullptr};

public:
    // 0x55AC20 | ??0Callback@@QAE@XZ
    constexpr Callback() noexcept = default;

    // 0x55AD30 | ??0Callback@@QAE@P6AXXZ@Z
    Callback(void (*func)()) noexcept;

    // 0x55AD50 | ??0Callback@@QAE@P6AXPAX@Z0@Z
    Callback(void (*func)(void*), void* param) noexcept;

    // 0x55AD80 | ??0Callback@@QAE@P6AXPAX0@Z0@Z
    Callback(void (*func)(void*, void*), void* param) noexcept;

    // 0x55AC30 | ??0Callback@@QAE@P8Base@@AEXXZPAV1@@Z
    Callback(void (Base::*func)(), class Base* param) noexcept;

    // 0x55AC70 | ??0Callback@@QAE@P8Base@@AEXPAX@ZPAV1@0@Z
    Callback(void (Base::*func)(void*), class Base* param1, void* param2) noexcept;

    // 0x55ACB0 | ??0Callback@@QAE@P8Base@@AEXPAX0@ZPAV1@0@Z
    Callback(void (Base::*func)(void*, void*), class Base* param1, void* param2) noexcept;

    // 0x55ACF0 | ??0Callback@@QAE@P8Base@@AEXPAX0@ZPAV1@00@Z
    Callback(void (Base::*func)(void*, void*), class Base* param1, void* param2, void* param3) noexcept;

    // 0x55ADB0 | ?Call@Callback@@QAEXPAX@Z
    void Call(void* param);
};

// 0x712240 | ?NullCallback@@3VCallback@@A
constexpr Callback NullCallback;

check_size(Callback, 0x14);
