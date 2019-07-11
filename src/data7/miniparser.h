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

// data7:miniparser

#include "hooking.h"

class MiniParser
{
public:
    // MiniParser::`vftable' @ 0x5963E0

    // 0x55DE60 | ??0MiniParser@@QAE@PAD@Z
    inline MiniParser(char* arg1)
    {
        stub<member_func_t<void, MiniParser, char*>>(0x55DE60, this, arg1);
    }

    // 0x55DEC0 | ??1MiniParser@@QAE@XZ
    inline ~MiniParser()
    {
        stub<member_func_t<void, MiniParser>>(0x55DEC0, this);
    }

    // 0x55DEE0 | ?Printf@MiniParser@@QAAXPBDZZ
    // Skipped (Variable Arguments)

    // 0x55DF30 | ?PrintString@MiniParser@@QAEXPADH@Z
    inline void PrintString(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, MiniParser, char*, int32_t>>(0x55DF30, this, arg1, arg2);
    }

    // 0x55DF90 | ?Errorf@MiniParser@@QAAXPBDZZ
    // Skipped (Variable Arguments)

    // 0x55E030 | ?Commentf@MiniParser@@QAAXPBDZZ
    // Skipped (Variable Arguments)

    // 0x55E090 | ?GetCh@MiniParser@@QAEHXZ
    inline int32_t GetCh()
    {
        return stub<member_func_t<int32_t, MiniParser>>(0x55E090, this);
    }

    // 0x55E0B0 | ?PutCh@MiniParser@@QAEXH@Z
    inline void PutCh(int32_t arg1)
    {
        return stub<member_func_t<void, MiniParser, int32_t>>(0x55E0B0, this, arg1);
    }

    // 0x55E100 | ?Indent@MiniParser@@QAEXH@Z
    inline void Indent(int32_t arg1)
    {
        return stub<member_func_t<void, MiniParser, int32_t>>(0x55E100, this, arg1);
    }

    // 0x55E120 | ?Match@MiniParser@@QAEXH@Z
    inline void Match(int32_t arg1)
    {
        return stub<member_func_t<void, MiniParser, int32_t>>(0x55E120, this, arg1);
    }

    // 0x55E160 | ?TokenName@MiniParser@@SAPADH@Z
    static inline char* TokenName(int32_t arg1)
    {
        return stub<cdecl_t<char*, int32_t>>(0x55E160, arg1);
    }

    // 0x55E300 | ?PlaceLabel@MiniParser@@QAEXPAX@Z
    inline void PlaceLabel(void* arg1)
    {
        return stub<member_func_t<void, MiniParser, void*>>(0x55E300, this, arg1);
    }

    // 0x55E320 | ?PlaceLabelRef@MiniParser@@QAEXPAX@Z
    inline void PlaceLabelRef(void* arg1)
    {
        return stub<member_func_t<void, MiniParser, void*>>(0x55E320, this, arg1);
    }

    // 0x55E340 | ?ResolveLabel@MiniParser@@QAEPAXPADPAPAX@Z
    inline void* ResolveLabel(char* arg1, void** arg2)
    {
        return stub<member_func_t<void*, MiniParser, char*, void**>>(0x55E340, this, arg1, arg2);
    }

    // 0x55E350 | ?PutBack@MiniParser@@QAEXH@Z
    inline void PutBack(int32_t arg1)
    {
        return stub<member_func_t<void, MiniParser, int32_t>>(0x55E350, this, arg1);
    }

    // 0x55E380 | ?NextToken@MiniParser@@QAEHXZ
    inline int32_t NextToken()
    {
        return stub<member_func_t<int32_t, MiniParser>>(0x55E380, this);
    }

    // 0x55E580 | ?IntVal@MiniParser@@QAEHXZ
    inline int32_t IntVal()
    {
        return stub<member_func_t<int32_t, MiniParser>>(0x55E580, this);
    }

    // 0x55E5C0 | ?Int64Val@MiniParser@@QAE_JXZ
    inline int64_t Int64Val()
    {
        return stub<member_func_t<int64_t, MiniParser>>(0x55E5C0, this);
    }

    // 0x55E600 | ?FloatVal@MiniParser@@QAEMXZ
    inline float FloatVal()
    {
        return stub<member_func_t<float, MiniParser>>(0x55E600, this);
    }

    // 0x567350 | __purecall
    virtual inline int32_t RawGetCh()
    {
        return stub<member_func_t<int32_t, MiniParser>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline void RawPutCh(int32_t arg1)
    {
        return stub<member_func_t<void, MiniParser, int32_t>>(0x567350, this, arg1);
    }
};
