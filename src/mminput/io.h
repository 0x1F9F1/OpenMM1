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
    mminput:io

    0x4D78C0 | public: __thiscall mmIO::mmIO(void) | ??0mmIO@@QAE@XZ
    0x4D78E0 | public: __thiscall mmIO::~mmIO(void) | ??1mmIO@@QAE@XZ
    0x4D78F0 | public: void __thiscall mmIO::Clear(void) | ?Clear@mmIO@@QAEXXZ
    0x4D7910 | public: void __thiscall mmIO::Init(char *,int,long) | ?Init@mmIO@@QAEXPADHJ@Z
    0x4D7970 | public: void __thiscall mmIO::InitDev(int,__int64,int,int,int) | ?InitDev@mmIO@@QAEXH_JHHH@Z
    0x4D7A20 | public: void __thiscall mmIO::Assign(int,int) | ?Assign@mmIO@@QAEXHH@Z
    0x4D7A80 | public: int __thiscall mmIO::operator==(union eqEvent *) | ??8mmIO@@QAEHPATeqEvent@@@Z
    0x4D7AD0 | public: void __thiscall mmIO::GetDescription(char *) | ?GetDescription@mmIO@@QAEXPAD@Z
    0x4D7B20 | public: int __thiscall mmIO::Write(class Stream *) | ?Write@mmIO@@QAEHPAVStream@@@Z
    0x4D7B60 | public: int __thiscall mmIO::Read(class Stream *) | ?Read@mmIO@@QAEHPAVStream@@@Z
    0x4D7C30 | public: int __thiscall mmIO::CompareComponent(int) | ?CompareComponent@mmIO@@QAEHH@Z
    0x4D7D00 | public: void __thiscall mmIO::ForceSettingAcrossConfigs(int) | ?ForceSettingAcrossConfigs@mmIO@@QAEXH@Z
*/

#include "hooking.h"

class mmIO
{
public:
    // 0x4D77A0 | ??_EmmIO@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x4D78C0 | ??0mmIO@@QAE@XZ
    inline mmIO()
    {
        stub<member_func_t<void, mmIO>>(0x4D78C0, this);
    }

    // 0x4D78E0 | ??1mmIO@@QAE@XZ
    inline ~mmIO()
    {
        stub<member_func_t<void, mmIO>>(0x4D78E0, this);
    }

    // 0x4D78F0 | ?Clear@mmIO@@QAEXXZ
    inline void Clear()
    {
        return stub<member_func_t<void, mmIO>>(0x4D78F0, this);
    }

    // 0x4D7910 | ?Init@mmIO@@QAEXPADHJ@Z
    inline void Init(char* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmIO, char*, int32_t, int32_t>>(0x4D7910, this, arg1, arg2, arg3);
    }

    // 0x4D7970 | ?InitDev@mmIO@@QAEXH_JHHH@Z
    inline void InitDev(int32_t arg1, int64_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<void, mmIO, int32_t, int64_t, int32_t, int32_t, int32_t>>(
            0x4D7970, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4D7A20 | ?Assign@mmIO@@QAEXHH@Z
    inline void Assign(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmIO, int32_t, int32_t>>(0x4D7A20, this, arg1, arg2);
    }

    // 0x4D7A80 | ??8mmIO@@QAEHPATeqEvent@@@Z
    inline int32_t operator==(union eqEvent* arg1)
    {
        return stub<member_func_t<int32_t, mmIO, union eqEvent*>>(0x4D7A80, this, arg1);
    }

    // 0x4D7AD0 | ?GetDescription@mmIO@@QAEXPAD@Z
    inline void GetDescription(char* arg1)
    {
        return stub<member_func_t<void, mmIO, char*>>(0x4D7AD0, this, arg1);
    }

    // 0x4D7B20 | ?Write@mmIO@@QAEHPAVStream@@@Z
    inline int32_t Write(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmIO, class Stream*>>(0x4D7B20, this, arg1);
    }

    // 0x4D7B60 | ?Read@mmIO@@QAEHPAVStream@@@Z
    inline int32_t Read(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmIO, class Stream*>>(0x4D7B60, this, arg1);
    }

    // 0x4D7C30 | ?CompareComponent@mmIO@@QAEHH@Z
    inline int32_t CompareComponent(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmIO, int32_t>>(0x4D7C30, this, arg1);
    }

    // 0x4D7D00 | ?ForceSettingAcrossConfigs@mmIO@@QAEXH@Z
    inline void ForceSettingAcrossConfigs(int32_t arg1)
    {
        return stub<member_func_t<void, mmIO, int32_t>>(0x4D7D00, this, arg1);
    }
};
