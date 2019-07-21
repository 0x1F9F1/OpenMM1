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
    stream:token

    0x543150 | public: __thiscall Tokenizer::Tokenizer(char const *,class Stream *) | ??0Tokenizer@@QAE@PBDPAVStream@@@Z
    0x543180 | public: int __thiscall Tokenizer::GetToken(char *,int) | ?GetToken@Tokenizer@@QAEHPADH@Z
    0x543210 | public: void __thiscall Tokenizer::MatchToken(char *) | ?MatchToken@Tokenizer@@QAEXPAD@Z
    0x543290 | public: int __thiscall Tokenizer::GetInt(void) | ?GetInt@Tokenizer@@QAEHXZ
    0x5432F0 | public: float __thiscall Tokenizer::GetFloat(void) | ?GetFloat@Tokenizer@@QAEMXZ
    0x543350 | public: void __thiscall Tokenizer::IgnoreToken(void) | ?IgnoreToken@Tokenizer@@QAEXXZ
*/

class Stream;

class Tokenizer
{
public:
    const char* m_Name {nullptr};
    uint32_t m_CurrentLine {0};
    Stream* m_pStream {nullptr};
    uint32_t m_CurrentChar {0};

    // 0x543150 | ??0Tokenizer@@QAE@PBDPAVStream@@@Z
    inline Tokenizer(char const* arg1, class Stream* arg2)
        : m_Name(arg1)
        , m_pStream(arg2)
    {}

    // 0x543180 | ?GetToken@Tokenizer@@QAEHPADH@Z
    inline int32_t GetToken(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, Tokenizer, char*, int32_t>>(0x543180, this, arg1, arg2);
    }

    // 0x543210 | ?MatchToken@Tokenizer@@QAEXPAD@Z
    inline void MatchToken(char* arg1)
    {
        return stub<member_func_t<void, Tokenizer, char*>>(0x543210, this, arg1);
    }

    // 0x543290 | ?GetInt@Tokenizer@@QAEHXZ
    inline int32_t GetInt()
    {
        return stub<member_func_t<int32_t, Tokenizer>>(0x543290, this);
    }

    // 0x5432F0 | ?GetFloat@Tokenizer@@QAEMXZ
    inline float GetFloat()
    {
        return stub<member_func_t<float, Tokenizer>>(0x5432F0, this);
    }

    // 0x543350 | ?IgnoreToken@Tokenizer@@QAEXXZ
    inline void IgnoreToken()
    {
        return stub<member_func_t<void, Tokenizer>>(0x543350, this);
    }
};

check_size(Tokenizer, 0x10);
