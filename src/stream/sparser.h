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

// stream:sparser

#include "hooking.h"

struct StreamMiniParser : MiniParser
{
public:
    // StreamMiniParser::`vftable' @ 0x595F18

    // 0x542EF0 | ??0StreamMiniParser@@QAE@PADPAVStream@@@Z
    inline StreamMiniParser(char* arg1, class Stream* arg2)
    {
        stub<member_func_t<void, StreamMiniParser, char*, class Stream*>>(0x542EF0, this, arg1, arg2);
    }

    // 0x542F20 | ??1StreamMiniParser@@QAE@XZ
    inline ~StreamMiniParser()
    {
        stub<member_func_t<void, StreamMiniParser>>(0x542F20, this);
    }

    // 0x542FF0 | ?Load@StreamMiniParser@@SAXPAVMetaClass@@PADPAX@Z
    static inline void Load(class MetaClass* arg1, char* arg2, void* arg3)
    {
        return stub<cdecl_t<void, class MetaClass*, char*, void*>>(0x542FF0, arg1, arg2, arg3);
    }

    // 0x5430A0 | ?Save@StreamMiniParser@@SAXPAVMetaClass@@PADPAX@Z
    static inline void Save(class MetaClass* arg1, char* arg2, void* arg3)
    {
        return stub<cdecl_t<void, class MetaClass*, char*, void*>>(0x5430A0, arg1, arg2, arg3);
    }

    // 0x542FC0 | ?RawGetCh@StreamMiniParser@@UAEHXZ
    inline int32_t RawGetCh() override
    {
        return stub<member_func_t<int32_t, StreamMiniParser>>(0x542FC0, this);
    }

    // 0x542F80 | ?RawPutCh@StreamMiniParser@@UAEXH@Z
    inline void RawPutCh(int32_t arg1) override
    {
        return stub<member_func_t<void, StreamMiniParser, int32_t>>(0x542F80, this, arg1);
    }
};
