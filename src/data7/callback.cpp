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

#include "callback.h"

#include "base.h"
#include <mem/mem.h>

using mem::bit_cast;

Callback::Callback(void (*func)()) noexcept
    : m_Type(1)
    , m_pFunc(func)
{}

Callback::Callback(void (*func)(void*), void* param) noexcept
    : m_Type(2)
    , m_pFunc(func)
    , m_FirstParam(param)
{}

Callback::Callback(void (*func)(void*, void*), void* param) noexcept
    : m_Type(3)
    , m_pFunc(func)
    , m_FirstParam(param)
{}

Callback::Callback(void (Base::*func)(), Base* param) noexcept
    : m_Type(1)
    , m_pFunc(bit_cast<void*>(func))
    , m_pThis(param)
{
    if (!param)
    {
        Quitf("Can't have callback to member function with nil 'this'");
    }
}

Callback::Callback(void (Base::*func)(void*), Base* param1, void* param2) noexcept
    : m_Type(2)
    , m_pFunc(bit_cast<void*>(func))
    , m_pThis(param1)
    , m_FirstParam(param2)
{
    if (!param1)
    {
        Quitf("Can't have callback to member function with nil 'this'");
    }
}

Callback::Callback(void (Base::*func)(void*, void*), Base* param1, void* param2) noexcept
    : m_Type(3)
    , m_pFunc(bit_cast<void*>(func))
    , m_pThis(param1)
    , m_FirstParam(param2)
{
    if (!param1)
    {
        Quitf("Can't have callback to member function with nil 'this'");
    }
}

Callback::Callback(void (Base::*func)(void*, void*), Base* param1, void* param2, void* param3) noexcept
    : m_Type(4)
    , m_pFunc(bit_cast<void*>(func))
    , m_pThis(param1)
    , m_FirstParam(param2)
    , m_SecondParam(param3)
{}

void Callback::Call(void* param)
{
    if (m_Type)
    {
        if (m_pThis)
        {
            switch (m_Type)
            {
                case 1: return (m_pThis->*bit_cast<void (Base::*)()>(m_pFunc))();
                case 2: return (m_pThis->*bit_cast<void (Base::*)(void*)>(m_pFunc))(m_FirstParam);
                case 3: return (m_pThis->*bit_cast<void (Base::*)(void*, void*)>(m_pFunc))(m_FirstParam, param);
                case 4: return (m_pThis->*bit_cast<void (Base::*)(void*, void*)>(m_pFunc))(m_FirstParam, m_SecondParam);

                default: Quit("Invalid Callback");
            }
        }
        else
        {
            switch (m_Type)
            {
                case 1: return static_cast<void (*)()>(m_pFunc)();
                case 2: return static_cast<void (*)(void*)>(m_pFunc)(m_FirstParam);
                case 3: return static_cast<void (*)(void*, void*)>(m_pFunc)(m_FirstParam, param);

                default: Quit("Invalid Callback");
            }
        }
    }
}
