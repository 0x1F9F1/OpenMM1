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

// mmanim:Excel

#include "hooking.h"

struct mmAnimExcel
{
public:
    // mmAnimExcel::`vftable' @ 0x593FB8

    // 0x4B7F60 | ??0mmAnimExcel@@QAE@XZ
    inline mmAnimExcel()
    {
        stub<member_func_t<void, mmAnimExcel>>(0x4B7F60, this);
    }

    // 0x4B7FC0 | ?Init@mmAnimExcel@@QAEHPAD0@Z
    inline int32_t Init(char* arg1, char* arg2)
    {
        return stub<member_func_t<int32_t, mmAnimExcel, char*, char*>>(0x4B7FC0, this, arg1, arg2);
    }

    // 0x4B8050 | ?GetNextName@mmAnimExcel@@QAEPADXZ
    inline char* GetNextName()
    {
        return stub<member_func_t<char*, mmAnimExcel>>(0x4B8050, this);
    }

    // 0x4B8090 | ?AddFile@mmAnimExcel@@QAEXPAD0@Z
    inline void AddFile(char* arg1, char* arg2)
    {
        return stub<member_func_t<void, mmAnimExcel, char*, char*>>(0x4B8090, this, arg1, arg2);
    }

    // 0x4B81D0 | ?GetPriorName@mmAnimExcel@@QAEPADXZ
    inline char* GetPriorName()
    {
        return stub<member_func_t<char*, mmAnimExcel>>(0x4B81D0, this);
    }

    // 0x4B8200 | ?GetName@mmAnimExcel@@QAEPADH@Z
    inline char* GetName(int32_t arg1)
    {
        return stub<member_func_t<char*, mmAnimExcel, int32_t>>(0x4B8200, this, arg1);
    }

    // 0x4B7F80 | ??1mmAnimExcel@@UAE@XZ
    virtual inline ~mmAnimExcel()
    {
        stub<member_func_t<void, mmAnimExcel>>(0x4B7F80, this);
    }
};
