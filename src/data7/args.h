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
    data7:args

    0x55A590 | public: __thiscall asArg::asArg(char,char *) | ??0asArg@@QAE@DPAD@Z
    0x55A5E0 | public: void __thiscall asArg::Print(char *) | ?Print@asArg@@QAEXPAD@Z
    0x55A6E0 | public: void __thiscall ArgSet::Print(char *) | ?Print@ArgSet@@QAEXPAD@Z
    0x55A730 | public: void __thiscall ArgSet::ParseArgs(int,char * *) | ?ParseArgs@ArgSet@@QAEXHPAPAD@Z
    0x55A970 | public: void __thiscall ArgSet::Usage(void) | ?Usage@ArgSet@@QAEXXZ
    0x712008 | class ArgSet GBArgs | ?GBArgs@@3VArgSet@@A
*/

#include "hooking.h"

// 0x712008 | ?GBArgs@@3VArgSet@@A
inline extern_var(0x712008, class ArgSet, GBArgs);

struct asArg;

class ArgSet
{
public:
    asArg* m_pArgs[128] {};
    void* m_UsageText {nullptr};
    char* m_Path {nullptr};

    // 0x55A6E0 | ?Print@ArgSet@@QAEXPAD@Z
    inline void Print(char* arg1)
    {
        return stub<member_func_t<void, ArgSet, char*>>(0x55A6E0, this, arg1);
    }

    // 0x55A730 | ?ParseArgs@ArgSet@@QAEXHPAPAD@Z
    inline void ParseArgs(int32_t arg1, char** arg2)
    {
        return stub<member_func_t<void, ArgSet, int32_t, char**>>(0x55A730, this, arg1, arg2);
    }

    // 0x55A970 | ?Usage@ArgSet@@QAEXXZ
    inline void Usage()
    {
        return stub<member_func_t<void, ArgSet>>(0x55A970, this);
    }
};

struct asArg
{
public:
    uint32_t m_Found {0};
    uint8_t m_Flag {0};
    char* m_Usage {nullptr};
    int m_iValues[5] {};
    float m_fValues[5] {};
    char* m_sValues[5] {};

    // 0x55A590 | ??0asArg@@QAE@DPAD@Z
    inline asArg(char arg1, char* arg2)
    {
        stub<member_func_t<void, asArg, char, char*>>(0x55A590, this, arg1, arg2);
    }

    // 0x55A5E0 | ?Print@asArg@@QAEXPAD@Z
    inline void Print(char* arg1)
    {
        return stub<member_func_t<void, asArg, char*>>(0x55A5E0, this, arg1);
    }
};

check_size(ArgSet, 0x208);
check_size(asArg, 0x48);
