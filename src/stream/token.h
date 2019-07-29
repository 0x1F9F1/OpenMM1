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
    int32_t m_CurrentChar {0};

    // 0x543150 | ??0Tokenizer@@QAE@PBDPAVStream@@@Z
    Tokenizer(char const* name, class Stream* stream);

    // 0x543180 | ?GetToken@Tokenizer@@QAEHPADH@Z
    int32_t GetToken(char* buffer, int32_t length);

    // 0x543210 | ?MatchToken@Tokenizer@@QAEXPAD@Z
    void MatchToken(char* token);

    // 0x543290 | ?GetInt@Tokenizer@@QAEHXZ
    int32_t GetInt();

    // 0x5432F0 | ?GetFloat@Tokenizer@@QAEMXZ
    float GetFloat();

    // 0x543350 | ?IgnoreToken@Tokenizer@@QAEXXZ
    void IgnoreToken();
};

check_size(Tokenizer, 0x10);
