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

#include "stream.h"

#include "data7/assert.h"
#include "data7/printer.h"

#include "fsystem.h"
#include "hfsystem.h"

#include <cstdarg>
#include <cstdlib>

bool CheckLittleEndian()
{
    uint16_t value = 0x1234;
    uint8_t raw[2];
    memcpy(raw, &value, 2);
    return raw[0] == 0x34;
}

static bool s_IsLittleEndian = CheckLittleEndian();

Stream::Stream(void* buffer, int32_t buffer_size, FileSystem* file_system)
    : m_pBuffer(static_cast<uint8_t*>(buffer))
    , m_BufferCapacity(buffer_size)
    , m_pFileSystem(file_system)
{
    if ((buffer == nullptr) && (buffer_size != 0))
    {
        m_pBuffer = new uint8_t[buffer_size];
        m_Flags |= 1;
    }

    m_IsLittleEndian = s_IsLittleEndian; // TODO: Properly check this
    m_SwapEndian = m_IsLittleEndian;

    m_Initialized = 1;
}

Stream::~Stream()
{
    Flush();

    if (m_pFileSystem)
    {
        m_pFileSystem->NotifyDelete();
    }

    if (m_Flags & 1)
    {
        delete[] m_pBuffer;
    }

    m_pBuffer = nullptr;

    m_Initialized = 0;
}

void* Stream::GetMapping()
{
    return nullptr;
}

uint32_t Stream::GetPagerHandle()
{
    return 0;
}

int32_t Stream::GetPagingInfo(uint32_t& handle, uint32_t& offset, uint32_t& size)
{
    handle = 0;
    offset = 0;
    size = 0;

    return 0;
}

void Stream::RawDebug()
{}

int32_t Stream::AlignSize()
{
    return 1;
}

int32_t Stream::GetError(char* buffer, int32_t length)
{
    buffer[length - 1] = '\0';

    int32_t error = errno;

    strerror_s(buffer, length, error);

    return error;
}

int32_t Stream::Read(void* output, int32_t length)
{
    if ((m_BufferStart != 0) && (m_BufferEnd == 0) && (Flush() < 0))
    {
        return -1;
    }

    int32_t total = 0;
    int32_t buffered = m_BufferEnd - m_BufferStart;

    if (length > buffered)
    {
        if (buffered != 0)
        {
            memcpy(output, m_pBuffer + m_BufferStart, buffered);
            m_BufferStart = m_BufferEnd;

            output = static_cast<uint8_t*>(output) + buffered;
            length -= buffered;
            total += buffered;
        }

        m_Position += m_BufferStart;

        if (length >= m_BufferCapacity)
        {
            int32_t raw_read = RawRead(output, length);

            m_BufferStart = 0;
            m_BufferEnd = 0;

            if (raw_read >= 0)
            {
                m_Position += raw_read;

                total += raw_read;

                return total;
            }
            else
            {
                return -1;
            }
        }

        int32_t raw_read = RawRead(m_pBuffer, m_BufferCapacity);

        m_BufferStart = 0;

        if (raw_read >= 0)
        {
            m_BufferEnd = raw_read;
        }
        else
        {
            m_BufferEnd = 0;

            return -1;
        }
    }

    buffered = m_BufferEnd - m_BufferStart;

    if (length > buffered)
    {
        length = buffered;
    }

    memcpy(output, m_pBuffer + m_BufferStart, length);
    m_BufferStart += length;
    total += length;

    return total;
}

int32_t Stream::Write(const void* input, int32_t length)
{
    if ((m_BufferEnd != 0) && (Flush() < 0))
    {
        return -1;
    }

    int32_t total = length;

    if (length < m_BufferCapacity)
    {
        int32_t available = m_BufferCapacity - m_BufferStart;

        if (length >= available)
        {
            memcpy(m_pBuffer + m_BufferStart, input, available);
            m_BufferStart = m_BufferCapacity;

            input = static_cast<const uint8_t*>(input) + available;
            length -= available;

            if (Flush() < 0)
            {
                return -1;
            }
        }

        memcpy(m_pBuffer + m_BufferStart, input, length);
        m_BufferStart += length;
    }
    else if (Flush() >= 0)
    {
        total = RawWrite(const_cast<void*>(input), length);

        if (total < 0)
        {
            total = -1;
        }
    }
    else
    {
        total = -1;
    }

    return total;
}

int32_t Stream::GetCh()
{
    uint8_t value;

    if (Read(&value, 1) == 1)
    {
        return value;
    }

    return -1;
}

int32_t Stream::PutCh(uint8_t value)
{
    if (Write(&value, 1))
    {
        return value;
    }

    return -1;
}

int32_t Stream::Seek(int32_t position)
{
    if (Flush() < 0)
    {
        return -1;
    }

    m_Position = position;

    return RawSeek(position);
}

int32_t Stream::Tell()
{
    return m_Position + m_BufferStart;
}

int32_t Stream::Size()
{
    if (Flush() < 0)
    {
        return -1;
    }

    return RawSize();
}

int32_t Stream::Flush()
{
    int32_t count = 0;

    if (m_BufferEnd != 0)
    {
        if (m_BufferStart != m_BufferEnd)
        {
            count = RawSeek(m_Position + m_BufferStart);
        }
    }
    else if (m_BufferStart != 0)
    {
        count = RawWrite(m_pBuffer, m_BufferStart);
    }

    m_Position += m_BufferStart;
    m_BufferEnd = 0;
    m_BufferStart = 0;

    if (count == -1)
    {
        Error("Stream::Flush()");
    }

    return count;
}

void Stream::Error(const char* location)
{
    char error[128];
    GetError(error, 128);
    Errorf("%s: %s", location, error);
}

int32_t Stream::Printf(const char* format, ...)
{
    va_list va;
    va_start(va, format);

    int32_t result = Vprintf(format, va);

    va_end(va);

    return result;
}

int32_t Stream::Vprintf(char const* format, va_list args)
{
    char buffer[256];
    vsprintf_s(buffer, format, args);
    return Write(buffer, strlen(buffer));
}

void Stream::Debug()
{}

int32_t Stream::PutString(const char* value)
{
    unimplemented(value);
}

int32_t Stream::GetString(char* buffer, int32_t length)
{
    unimplemented(buffer, length);
}

int32_t Stream::Put(uint8_t value)
{
    return Write(&value, sizeof(value));
}

int32_t Stream::Put(uint16_t value)
{
    if (m_SwapEndian)
    {
        value = (value >> 8) | (value << 8);
    }

    return Write(&value, sizeof(value)) / sizeof(value);
}

int32_t Stream::Put(uint32_t value)
{
    if (m_SwapEndian)
    {
        value = (value << 24) | (value & 0x0000FF00) << 8 | (value & 0x00FF0000) >> 8 | (value >> 24);
    }

    return Write(&value, sizeof(value)) / sizeof(value);
}

int32_t Stream::Put(float value)
{
    uint32_t ivalue = 0;
    memcpy(&ivalue, &value, sizeof(ivalue));
    return Put(ivalue);
}

int32_t Stream::Put(const uint8_t* values, int32_t count)
{
    return Write(values, count);
}

int32_t Stream::Put(const uint16_t* values, int32_t count)
{
    if (m_SwapEndian)
    {
        int32_t total = 0;

        for (int32_t i = 0; i < count; ++i)
        {
            total += Put(values[i]);
        }

        return total;
    }
    else
    {
        return Write(values, sizeof(*values) * count) / sizeof(*values);
    }
}

int32_t Stream::Put(const uint32_t* values, int32_t count)
{
    if (m_SwapEndian)
    {
        int32_t total = 0;

        for (int32_t i = 0; i < count; ++i)
        {
            total += Put(values[i]);
        }

        return total;
    }
    else
    {
        return Write(values, sizeof(*values) * count) / sizeof(*values);
    }
}

int32_t Stream::GetUnchecked(uint8_t* values, int32_t count)
{
    return Read(values, count);
}

int32_t Stream::GetUnchecked(uint16_t* values, int32_t count)
{
    count = Read(values, count * sizeof(*values)) / sizeof(*values);

    if (m_SwapEndian)
    {
        SwapShorts(values, count);
    }

    return count;
}

int32_t Stream::GetUnchecked(uint32_t* values, int32_t count)
{
    count = Read(values, count * sizeof(*values)) / sizeof(*values);

    if (m_SwapEndian)
    {
        SwapLongs(values, count);
    }

    return count;
}

void Stream::SwapShorts(uint16_t* values, int32_t count)
{
    for (int32_t i = 0; i < count; ++i)
    {
        uint16_t value = values[i];
        values[i] = (value >> 8) | (value << 8);
    }
}

void Stream::SwapLongs(uint32_t* values, int32_t count)
{
    for (int32_t i = 0; i < count; ++i)
    {
        uint32_t value = values[i];
        values[i] = (value << 24) | (value & 0x0000FF00) << 8 | (value & 0x00FF0000) >> 8 | (value >> 24);
    }
}

uint16_t Stream::GetShort()
{
    uint16_t result = 0;
    Assert(GetUnchecked(&result, 1) == 1);
    return result;
}

uint32_t Stream::GetLong()
{
    uint16_t result = 0;
    Assert(GetUnchecked(&result, 1) == 1);
    return result;
}

void fprintf(Stream* stream, const char* format, ...)
{
    va_list va;
    va_start(va, format);
    stream->Vprintf(format, va);
    va_end(va);
}

Stream* fopen(char* filename, char* mode)
{
    if (*mode == 'r')
    {
        return FileSystem::OpenAny(filename, mode[1] != '+', 0, 4096);
    }
    else
    {
        return HFS.CreateOn(filename, 0, 4096);
    }
}

int32_t fseek(Stream* stream, int32_t offset, int32_t origin)
{
    switch (origin)
    {
        case SEEK_SET: return stream->Seek(offset);
        case SEEK_CUR: return stream->Seek(stream->Tell() + offset);
        case SEEK_END: return stream->Seek(stream->Size() + offset);
        default: return -1;
    }
}

int32_t fgets(char* buffer, int32_t length, Stream* stream)
{
    if (length == 0)
        return 0;

    length -= 1;

    int32_t total = 0;

    while (total < length - 1)
    {
        int32_t current = (stream->m_BufferStart < stream->m_BufferEnd) ? stream->m_pBuffer[stream->m_BufferStart++]
                                                                        : stream->GetCh();

        if (current == -1)
            break;

        *buffer++ = static_cast<char>(current);
        ++total;

        if (current == '\n')
            break;
    }

    *buffer = '\0';

    return total;
}

int32_t fscanf(Stream* stream, const char* format, ...)
{
    int32_t v = -1;

    while (true)
    {
        v = stream->GetCh();

        if (v != '\t' && v != '\n' && v != ' ')
            break;
    }

    char buffer[256];
    buffer[0] = static_cast<char>(v);

    int32_t length = fgets(buffer + 1, 255, stream);

    if (!length)
    {
        return 0;
    }

    va_list va;
    va_start(va, format);
    int32_t result = vsscanf(buffer, format, va);
    va_end(va);

    if (!result)
    {
        Errorf("scan of '%s' == '%s' failed", format, buffer);
    }

    return result;
}

define_dummy_symbol(stream);

run_once([] {
    auto_hook(0x540540, Stream::Read);
    auto_hook(0x540680, Stream::Write);
    auto_hook(0x540780, Stream::GetCh);
    auto_hook(0x5407B0, Stream::PutCh);
    auto_hook(0x5407E0, Stream::Seek);
    auto_hook(0x540810, Stream::Tell);
    auto_hook(0x540820, Stream::Size);
    auto_hook(0x540840, Stream::Flush);
    auto_hook(0x540930, Stream::Error);
    auto_hook(0x540970, Stream::Printf);
    auto_hook(0x5409C0, Stream::Vprintf);
    auto_hook(0x540A20, Stream::Debug);
    auto_hook(0x540A30, Stream::PutString);
    auto_hook(0x540A70, Stream::GetString);

    auto_hook_typed(0x540B00, Stream::Put, int32_t(Stream::*)(uint8_t));
    auto_hook_typed(0x540B20, Stream::Put, int32_t(Stream::*)(uint16_t));
    auto_hook_typed(0x540B50, Stream::Put, int32_t(Stream::*)(uint32_t));
    auto_hook_typed(0x540BA0, Stream::Put, int32_t(Stream::*)(float));

    auto_hook_typed(0x540C00, Stream::Put, int32_t(Stream::*)(const uint8_t*, int32_t));
    auto_hook_typed(0x540C20, Stream::Put, int32_t(Stream::*)(const uint16_t*, int32_t));
    auto_hook_typed(0x540C80, Stream::Put, int32_t(Stream::*)(const uint32_t*, int32_t));

    auto_hook_typed(0x540CF0, Stream::GetUnchecked, int32_t(Stream::*)(uint8_t*, int32_t));
    auto_hook_typed(0x540D10, Stream::GetUnchecked, int32_t(Stream::*)(uint16_t*, int32_t));
    auto_hook_typed(0x540D50, Stream::GetUnchecked, int32_t(Stream::*)(uint32_t*, int32_t));

    auto_hook(0x540E10, Stream::GetShort);
    auto_hook(0x540E30, Stream::GetLong);
    auto_hook(0x540920, Stream::GetPagingInfo);

    auto_hook_typed(0x540E50, fprintf, void (*)(Stream*, const char*, ...));
    auto_hook_typed(0x540E70, fopen, Stream * (*) (char*, char*) );
    auto_hook_typed(0x540EB0, fseek, int32_t(*)(Stream*, int32_t, int32_t));
    auto_hook_typed(0x540F60, fgets, int32_t(*)(char*, int32_t, Stream*));
    auto_hook_typed(0x540FD0, fscanf, int32_t(*)(Stream*, const char*, ...));
});