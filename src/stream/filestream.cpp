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

#include "filestream.h"

#include "minwin.h"
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>

int32_t FileStream::Create(char* path)
{
    int32_t result = -1;

    if (m_FileHandle == -1)
    {
        if (_sopen_s(&m_FileHandle, path, _O_WRONLY | _O_TRUNC | _O_CREAT | _O_BINARY, _SH_DENYNO,
                _S_IREAD | _S_IWRITE) != 0)
        {
            m_FileHandle = -1;
        }

        result = m_FileHandle;
    }

    return result;
}

int32_t FileStream::Open(char* path, int32_t paged)
{
    int32_t result = -1;

    if (m_FileHandle == -1)
    {
        if (paged)
        {
            Assert(m_PagerHandle == nullptr);

            m_PagerHandle = CreateFileA(
                path, GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
        }
        else
        {
            m_PagerHandle = nullptr;
        }

        if (_sopen_s(
                &m_FileHandle, path, (paged ? _O_RDONLY : _O_RDWR) | _O_BINARY, _SH_DENYNO, _S_IREAD | _S_IWRITE) != 0)
        {
            m_FileHandle = -1;
        }

        result = m_FileHandle;
    }

    return result;
}

int32_t FileStream::Stdin()
{
    int32_t result = -1;

    if (m_FileHandle)
    {
        result = m_FileHandle = 0;
    }

    return result;
}

int32_t FileStream::Stdout()
{
    int32_t result = -1;

    if (m_FileHandle)
    {
        result = m_FileHandle = 1;
    }

    return result;
}

int32_t FileStream::Stderr()
{
    int32_t result = -1;

    if (m_FileHandle)
    {
        result = m_FileHandle = 2;
    }

    return result;
}

int32_t FileStream::Close()
{
    Flush();

    int32_t result = -1;

    if (m_FileHandle != -1)
    {
        result = _close(m_FileHandle);

        m_FileHandle = -1;
    }

    if (m_PagerHandle)
    {
        CloseHandle(m_PagerHandle);

        m_PagerHandle = nullptr;
    }

    return result;
}

FileStream::~FileStream()
{
    Close();
}

uint32_t FileStream::GetPagerHandle()
{
    return reinterpret_cast<uint32_t>(m_PagerHandle);
}

int32_t FileStream::RawRead(void* data, int32_t length)
{
    return _read(m_FileHandle, data, length);
}

int32_t FileStream::RawWrite(void* data, int32_t length)
{
    return _write(m_FileHandle, data, length);
}

int32_t FileStream::RawSeek(int32_t pos)
{
    return _lseek(m_FileHandle, pos, SEEK_SET);
}

int32_t FileStream::RawTell()
{
    return _lseek(m_FileHandle, 0, SEEK_CUR);
}

int32_t FileStream::RawSize()
{
    int32_t pos = RawTell();
    int32_t end = _lseek(m_FileHandle, 0, SEEK_END);

    if (pos != end)
    {
        RawSeek(pos);
    }

    return end;
}
