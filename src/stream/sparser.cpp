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

#include "sparser.h"

#include "data7/metaclass.h"
#include "stream.h"

StreamMiniParser::StreamMiniParser(const char* name, class Stream* stream)
    : MiniParser(name)
    , m_pStream(stream)
{}

StreamMiniParser::~StreamMiniParser() = default;

void StreamMiniParser::Load(MetaClass* type, char* path, void* ptr)
{
    Ptr<Stream> input {s_fopen(path, "r")};

    if (input)
    {
        StreamMiniParser parser {path, input.Release()};

        type->Load(&parser, ptr);

        if (parser.m_ErrorCount)
        {
            ::Errorf("%d error(s) during load of '%s'", parser.m_ErrorCount, path);
        }
    }
    else
    {
        ::Errorf("Load: '%s' not found", path);
    }
}

void StreamMiniParser::Save(MetaClass* type, char* path, void* ptr)
{
    Ptr<Stream> output {s_fopen(path, "w")};

    if (output)
    {
        StreamMiniParser parser {path, output.Release()};

        type->Save(&parser, ptr);

        if (parser.m_ErrorCount)
        {
            ::Errorf("%d error(s) during save of '%s'", parser.m_ErrorCount, path);
        }
    }
    else
    {
        ::Errorf("Save: Cannot create '%s'.", path);
    }
}

int32_t StreamMiniParser::RawGetCh()
{
    Stream* stream = m_pStream.Get();

    if (stream->m_BufferStart < stream->m_BufferEnd)
    {
        return stream->m_pBuffer[stream->m_BufferStart++];
    }
    else
    {
        return stream->GetCh();
    }
}

void StreamMiniParser::RawPutCh(int32_t value)
{
    Stream* stream = m_pStream.Get();

    if (stream->m_BufferEnd == 0 && stream->m_BufferStart < stream->m_BufferCapacity)
    {
        stream->m_pBuffer[stream->m_BufferStart++] = static_cast<uint8_t>(value);
    }
    else
    {
        stream->PutCh(static_cast<uint8_t>(value));
    }
}
