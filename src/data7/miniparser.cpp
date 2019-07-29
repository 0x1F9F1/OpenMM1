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

#include "miniparser.h"

#include <cstdarg>
#include <cstdlib>

MiniParser::MiniParser(const char* name)
    : m_Name(name)
{}

MiniParser::~MiniParser() = default;

void MiniParser::Printf(char const* format, ...)
{
    char buffer[1024];

    va_list va;
    va_start(va, format);
    vsprintf_s(buffer, format, va);
    va_end(va);

    for (const char* i = buffer; *i; ++i)
    {
        PutCh(*i);
    }
}

void MiniParser::PrintString(const char* string, int32_t length)
{
    if (string)
    {
        RawPutCh('"');

        if (length)
        {
            char v = 0;

            while ((v = *string++) != '\0')
            {
                if (v < ' ' || v == '"')
                {
                    RawPutCh('\\');
                }

                RawPutCh(v);
            }
        }

        RawPutCh('"');
    }
    else
    {
        RawPutCh('0');
    }
}

int32_t ParserErrorCount = 0;

void MiniParser::Errorf(char const* format, ...)
{
    ++ParserErrorCount;

    if (ParserErrorCount < 25)
    {
        char buffer[1024];

        va_list va;
        va_start(va, format);
        vsprintf_s(buffer, format, va);
        va_end(va);

        ++m_ErrorCount;

        if (m_ErrorCount < 10)
        {
            Errorf("Parser(%s,%d): %s", m_Name.get(), m_CurrentLine, buffer);
        }
        else if (m_ErrorCount == 10)
        {
            Errorf("This file sucks, change it!");
        }
    }
    else if (ParserErrorCount == 25)
    {
        Errorf("Too many errors in metaclass files, ignoring all others");
    }
}

void MiniParser::Commentf(char const* format, ...)
{
    char buffer[1024];

    va_list va;
    va_start(va, format);
    vsprintf_s(buffer, format, va);
    va_end(va);

    PutCh(';');
    PutCh(' ');

    for (const char* i = buffer; *i; ++i)
    {
        PutCh(*i);
    }
}

int32_t MiniParser::GetCh()
{
    int32_t result = m_CurrentToken = RawGetCh();

    if (result == '\n')
    {
        ++m_CurrentLine;
    }

    return result;
}

void MiniParser::PutCh(int32_t value)
{
    if (m_CurrentToken == '\n')
    {
        for (uint32_t i = m_Identation; i; --i)
        {
            RawPutCh(' ');
        }
    }

    m_CurrentToken = value;

    RawPutCh(value);
}

void MiniParser::Indent(int32_t amount)
{
    m_Identation += amount;
}

void MiniParser::Match(int32_t expected)
{
    int32_t next = NextToken();

    if (next != expected)
    {
        Errorf("Expected '%s', got '%s'", TokenName(expected), TokenName(next));
    }
}

static char TokenNameBuffer[2] {};

const char* MiniParser::TokenName(int32_t token)
{
    switch (token)
    {
        case '\0': return "end-of-file";

        case '(': return "(";
        case ')': return ")";
        case '[': return "[";
        case '{': return "{";
        case '}': return "}";
        case ',': return ",";

        case Token::Integer: return "integer literal";
        case Token::String: return "string literal";
        case Token::Ident: return "identifier";
        case Token::Label: return "label definition";
        case Token::LabelRef: return "reference to label";
        case Token::Float: return "float literal";

        default:
        {
            // TODO: This is a bad idea
            TokenNameBuffer[0] = static_cast<char>(token);
            TokenNameBuffer[1] = '\0';

            return TokenNameBuffer;
        }
    }
}

void MiniParser::PlaceLabel(void* ptr)
{
    Printf(":%08x", reinterpret_cast<uintptr_t>(ptr));
}

void MiniParser::PlaceLabelRef(void* ptr)
{
    Printf("$%08x", reinterpret_cast<uintptr_t>(ptr));
}

void* MiniParser::ResolveLabel(char*, void**)
{
    return nullptr;
}

void MiniParser::PutBack(int32_t token)
{
    if (m_PutBack)
    {
        Errorf("PutBack already called.");
    }

    m_PutBack = token;
}

int32_t MiniParser::NextToken()
{
    if (m_PutBack)
    {
        int32_t result = m_PutBack;
        m_PutBack = 0;
        return result;
    }

    int32_t v = m_CurrentToken;

    while (true)
    {
        while (v == '\t' || v == '\n' || v == '\r' || v == ' ')
        {
            v = GetCh();
        }

        if (v == Token::End)
        {
            return '\0';
        }

        if (v != ';')
        {
            break;
        }

        do
        {
            v = GetCh();
        } while (v != Token::End && v != '\n');
    }

    int32_t result = 0;

    if (v == '\'')
    {
        GetCh();
        v = GetCh();
        sprintf_s(m_Buffer, "%d", v);

        return Token::Integer;
    }
    else if (v == '"')
    {
        int32_t len = 0;

        while ((v = GetCh()) != '"')
        {
            if (v == Token::End)
            {
                Errorf("EOF in string");

                break;
            }

            if (v == '\n')
            {
                Errorf("Newline in string.");

                break;
            }

            if (v == '\\')
            {
                v = GetCh();
            }

            if (v == Token::End)
            {
                break;
            }

            if (len < 255)
            {
                m_Buffer[len++] = static_cast<char>(v);
            }
        }

        GetCh();
        m_Buffer[len] = '\0';

        return Token::String;
    }
    else if (v == '$')
    {
        result = Token::LabelRef;
    }
    else if (v == ':')
    {
        result = Token::Label;
    }
    else if (v == '.')
    {
        result = Token::Float;
    }
    else if (v == '-' || v >= '0' && v <= '9')
    {
        result = Token::Integer;
    }
    else if (v >= 'A' && v <= 'Z' || v >= 'a' && v <= 'z' || v == '_')
    {
        result = Token::Ident;
    }
    else
    {
        m_Buffer[0] = static_cast<char>(v);
        m_Buffer[1] = '\0';

        GetCh();

        return v;
    }

    Assert(result != 0);

    int32_t len = 0;

    for (; v != '\t' && v != ' ' && v != '\n' && v != '\r' && v != ';'; v = GetCh())
    {
        if (len < 255)
        {
            m_Buffer[len++] = static_cast<char>(v);
        }
    }

    m_Buffer[len] = '\0';

    return result;
}

int32_t MiniParser::IntVal()
{
    int32_t token = NextToken();

    if (token != Token::Integer && token != Token::Float)
    {
        Errorf("Expected integer or floating-point literal");
    }

    return std::atoi(m_Buffer);
}

int64_t MiniParser::Int64Val()
{
    int32_t token = NextToken();

    if (token != Token::Integer && token != Token::Float)
    {
        Errorf("Expected integer or floating-point literal");
    }

    return std::atoll(m_Buffer);
}

float MiniParser::FloatVal()
{
    int32_t token = NextToken();

    if (token != Token::Integer && token != Token::Float)
    {
        Errorf("Expected integer or floating-point literal");
    }

    return static_cast<float>(std::atof(m_Buffer));
}

define_dummy_symbol(miniparser);

run_once([] { auto_hook(0x55E380, MiniParser::NextToken); });