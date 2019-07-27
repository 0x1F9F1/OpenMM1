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
    data7:miniparser

    0x55DE60 | public: __thiscall MiniParser::MiniParser(char *) | ??0MiniParser@@QAE@PAD@Z
    0x55DEC0 | public: __thiscall MiniParser::~MiniParser(void) | ??1MiniParser@@QAE@XZ
    0x55DEE0 | public: void __cdecl MiniParser::Printf(char const *,...) | ?Printf@MiniParser@@QAAXPBDZZ
    0x55DF30 | public: void __thiscall MiniParser::PrintString(char *,int) | ?PrintString@MiniParser@@QAEXPADH@Z
    0x55DF90 | public: void __cdecl MiniParser::Errorf(char const *,...) | ?Errorf@MiniParser@@QAAXPBDZZ
    0x55E030 | public: void __cdecl MiniParser::Commentf(char const *,...) | ?Commentf@MiniParser@@QAAXPBDZZ
    0x55E090 | public: int __thiscall MiniParser::GetCh(void) | ?GetCh@MiniParser@@QAEHXZ
    0x55E0B0 | public: void __thiscall MiniParser::PutCh(int) | ?PutCh@MiniParser@@QAEXH@Z
    0x55E100 | public: void __thiscall MiniParser::Indent(int) | ?Indent@MiniParser@@QAEXH@Z
    0x55E120 | public: void __thiscall MiniParser::Match(int) | ?Match@MiniParser@@QAEXH@Z
    0x55E160 | public: static char * __cdecl MiniParser::TokenName(int) | ?TokenName@MiniParser@@SAPADH@Z
    0x55E300 | public: void __thiscall MiniParser::PlaceLabel(void *) | ?PlaceLabel@MiniParser@@QAEXPAX@Z
    0x55E320 | public: void __thiscall MiniParser::PlaceLabelRef(void *) | ?PlaceLabelRef@MiniParser@@QAEXPAX@Z
    0x55E340 | public: void * __thiscall MiniParser::ResolveLabel(char *,void * *) | ?ResolveLabel@MiniParser@@QAEPAXPADPAPAX@Z
    0x55E350 | public: void __thiscall MiniParser::PutBack(int) | ?PutBack@MiniParser@@QAEXH@Z
    0x55E380 | public: int __thiscall MiniParser::NextToken(void) | ?NextToken@MiniParser@@QAEHXZ
    0x55E580 | public: int __thiscall MiniParser::IntVal(void) | ?IntVal@MiniParser@@QAEHXZ
    0x55E5C0 | public: __int64 __thiscall MiniParser::Int64Val(void) | ?Int64Val@MiniParser@@QAE_JXZ
    0x55E600 | public: float __thiscall MiniParser::FloatVal(void) | ?FloatVal@MiniParser@@QAEMXZ
    0x5963E0 | const MiniParser::`vftable' | ??_7MiniParser@@6B@
*/

#include "cstr.h"

class MiniParser
{
public:
    // MiniParser::`vftable' @ 0x5963E0

    enum Token : int32_t
    {
        Integer = 256,
        String = 257,
        Ident = 258,
        Label = 259,
        LabelRef = 260,
        Float = 261,
    };

    char m_Buffer[256] {};
    uint32_t m_LastError {0};
    cstring_t m_Name {};
    uint32_t m_CurrentToken = ' ';
    uint32_t m_Identation {0};
    uint32_t m_CurrentLine {1};
    uint32_t m_PutBack {0};

public:
    // 0x55DE60 | ??0MiniParser@@QAE@PAD@Z
    MiniParser(const char* name);

    // 0x55DEC0 | ??1MiniParser@@QAE@XZ
    ~MiniParser();

    // 0x55DEE0 | ?Printf@MiniParser@@QAAXPBDZZ
    void Printf(char const* format, ...);

    // 0x55DF30 | ?PrintString@MiniParser@@QAEXPADH@Z
    void PrintString(const char* string, int32_t length);

    // 0x55DF90 | ?Errorf@MiniParser@@QAAXPBDZZ
    void Errorf(char const* format, ...);

    // 0x55E030 | ?Commentf@MiniParser@@QAAXPBDZZ
    void Commentf(char const* format, ...);

    // 0x55E090 | ?GetCh@MiniParser@@QAEHXZ
    int32_t GetCh();

    // 0x55E0B0 | ?PutCh@MiniParser@@QAEXH@Z
    void PutCh(int32_t value);

    // 0x55E100 | ?Indent@MiniParser@@QAEXH@Z
    void Indent(int32_t amount);

    // 0x55E120 | ?Match@MiniParser@@QAEXH@Z
    void Match(int32_t expected);

    // 0x55E160 | ?TokenName@MiniParser@@SAPADH@Z
    static const char* TokenName(int32_t token);

    // 0x55E300 | ?PlaceLabel@MiniParser@@QAEXPAX@Z
    void PlaceLabel(void* ptr);

    // 0x55E320 | ?PlaceLabelRef@MiniParser@@QAEXPAX@Z
    void PlaceLabelRef(void* ptr);

    // 0x55E340 | ?ResolveLabel@MiniParser@@QAEPAXPADPAPAX@Z
    void* ResolveLabel(char* arg1, void** arg2);

    // 0x55E350 | ?PutBack@MiniParser@@QAEXH@Z
    void PutBack(int32_t token);

    // 0x55E380 | ?NextToken@MiniParser@@QAEHXZ
    inline int32_t NextToken()
    {
        return stub<member_func_t<int32_t, MiniParser>>(0x55E380, this);
    }

    // 0x55E580 | ?IntVal@MiniParser@@QAEHXZ
    int32_t IntVal();

    // 0x55E5C0 | ?Int64Val@MiniParser@@QAE_JXZ
    int64_t Int64Val();

    // 0x55E600 | ?FloatVal@MiniParser@@QAEMXZ
    float FloatVal();

    // 0x567350 | __purecall
    virtual int32_t RawGetCh() = 0;

    // 0x567350 | __purecall
    virtual void RawPutCh(int32_t arg1) = 0;
};

check_size(MiniParser, 0x11C);
