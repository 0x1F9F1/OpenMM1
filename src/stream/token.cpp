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

#include "token.h"

#include "stream.h"

Tokenizer::Tokenizer(char const* name, Stream* stream)
    : m_Name(name)
    , m_pStream(stream)
{}

int32_t Tokenizer::GetToken(char* buffer, int32_t length)
{
    while (true)
    {
        int32_t v = m_CurrentChar;

        if (v != ' ' && v != '\t' && v != '\n' && v != '\r')
        {
            break;
        }

        m_CurrentChar = m_pStream->GetCh();

        if (m_CurrentChar == '\n')
        {
            ++m_CurrentLine;
        }
    }

    int32_t len = 0;

    for (; m_CurrentChar != -1; m_CurrentChar = m_pStream->GetCh())
    {
        int32_t v = m_CurrentChar;

        if (v == ' ' || v == '\t' || v == '\n' || v == '\r')
        {
            break;
        }

        if (len < length - 1)
        {
            buffer[len++] = static_cast<char>(v);
        }
    }

    buffer[len] = '\0';

    return len;
}

void Tokenizer::MatchToken(char* token)
{
    char buffer[64];

    if (!GetToken(buffer, 64) || strcmp(buffer, token))
    {
        Errorf("%s(%d): Expected '%s', got '%s'.", m_Name, m_CurrentLine, token, buffer);
    }
}

int32_t Tokenizer::GetInt()
{
    char buffer[32];

    if (GetToken(buffer, 32) && (buffer[0] == '-' || (buffer[0] >= '0' || buffer[0] <= '9')))
    {
        return std::atoi(buffer);
    }

    Errorf("%s(%d): Expected integer.", m_Name, m_CurrentLine);

    return 0;
}

float Tokenizer::GetFloat()
{
    char buffer[32];

    if (GetToken(buffer, 32) && (buffer[0] == '-' || buffer[0] == '.' || (buffer[0] >= '0' || buffer[0] <= '9')))
    {
        return static_cast<float>(std::atof(buffer));
    }

    Errorf("%s(%d): Expected float.", m_Name, m_CurrentLine);

    return 0.0f;
}

void Tokenizer::IgnoreToken()
{
    char buffer[1];

    GetToken(buffer, 1);
}
