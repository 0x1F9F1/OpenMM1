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

#include "vstream.h"

#include "data7/ipc.h"
#include "vfsystem.h"

VirtualStream::VirtualStream(
    Stream* stream, VirtualFileInode* file, void* buffer, int32_t buffer_size, FileSystem* file_system)
    : Stream(buffer, buffer_size, file_system)
    , m_pBaseStream(stream)
    , m_DataOffset(file->GetOffset())
    , m_FileSize(file->GetSize())
{
    RawSeek(0);
    m_Flags |= 2;
    m_Mutex = ipcCreateMutex(0);
}

VirtualStream::~VirtualStream()
{
    ipcCloseHandle(m_Mutex);

    Flush();
}

void* VirtualStream::GetMapping()
{
    void* result = m_pBaseStream->GetMapping();

    if (result)
    {
        result = static_cast<uint8_t*>(result) + m_DataOffset;
    }

    return result;
}

int32_t VirtualStream::GetPagingInfo(uint32_t& handle, uint32_t& offset, uint32_t& size)
{
    handle = m_pBaseStream->GetPagerHandle();
    offset = m_DataOffset;
    size = m_FileSize;

    return 1;
}

int32_t VirtualStream::RawRead(void* data, int32_t size)
{
    ipcWaitSingle(m_Mutex);

    int32_t offset = RawTell();

    if (offset < 0 || uint32_t(offset) > m_FileSize)
    {
        offset = m_Position;

        Seek(m_Position);
    }

    if (m_FileSize - offset < uint32_t(size))
    {
        size = m_FileSize - offset;
    }

    int32_t result = m_pBaseStream->Read(data, size);

    ipcReleaseMutex(m_Mutex);

    return result;
}

int32_t VirtualStream::RawWrite(void* /*data*/, int32_t /*size*/)
{
    return -1;
}

int32_t VirtualStream::RawSeek(int32_t offset)
{
    return m_pBaseStream->Seek(offset + m_DataOffset) - m_DataOffset;
}

int32_t VirtualStream::RawTell()
{
    return m_pBaseStream->Tell() - m_DataOffset;
}

int32_t VirtualStream::RawSize()
{
    return m_FileSize;
}
