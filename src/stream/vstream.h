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
    stream:vstream

    0x5436C0 | public: __thiscall VirtualStream::VirtualStream(class Stream *,struct VirtualFileInode *,void *,int,class FileSystem *) | ??0VirtualStream@@QAE@PAVStream@@PAUVirtualFileInode@@PAXHPAVFileSystem@@@Z
    0x543750 | public: virtual int __thiscall VirtualStream::GetPagingInfo(unsigned int &,unsigned int &,unsigned int &) | ?GetPagingInfo@VirtualStream@@UAEHAAI00@Z
    0x543780 | public: virtual __thiscall VirtualStream::~VirtualStream(void) | ??1VirtualStream@@UAE@XZ
    0x5437E0 | public: virtual int __thiscall VirtualStream::RawRead(void *,int) | ?RawRead@VirtualStream@@UAEHPAXH@Z
    0x543850 | public: virtual int __thiscall VirtualStream::RawWrite(void *,int) | ?RawWrite@VirtualStream@@UAEHPAXH@Z
    0x543860 | public: virtual int __thiscall VirtualStream::RawSeek(int) | ?RawSeek@VirtualStream@@UAEHH@Z
    0x543890 | public: virtual int __thiscall VirtualStream::RawTell(void) | ?RawTell@VirtualStream@@UAEHXZ
    0x5438B0 | public: virtual int __thiscall VirtualStream::RawSize(void) | ?RawSize@VirtualStream@@UAEHXZ
    0x5438C0 | public: virtual void * __thiscall VirtualStream::GetMapping(void) | ?GetMapping@VirtualStream@@UAEPAXXZ
    0x5438E0 | public: virtual void * __thiscall VirtualStream::`scalar deleting destructor'(unsigned int) | ??_GVirtualStream@@UAEPAXI@Z
    0x5438E0 | public: virtual void * __thiscall VirtualStream::`vector deleting destructor'(unsigned int) | ??_EVirtualStream@@UAEPAXI@Z
    0x595F68 | const VirtualStream::`vftable' | ??_7VirtualStream@@6B@
*/

#include "stream.h"

struct VirtualStream : Stream
{
public:
    Stream* m_pBaseStream {nullptr};
    uint32_t m_DataOffset {0};
    uint32_t m_FileSize {0};
    uint32_t m_Mutex {0};

    // VirtualStream::`vftable' @ 0x595F68

    // 0x5436C0 | ??0VirtualStream@@QAE@PAVStream@@PAUVirtualFileInode@@PAXHPAVFileSystem@@@Z
    VirtualStream(class Stream* stream, struct VirtualFileInode* file, void* buffer, int32_t buffer_size,
        class FileSystem* file_system);

    // 0x543780 | ??1VirtualStream@@UAE@XZ
    ~VirtualStream() override;

    // 0x5438C0 | ?GetMapping@VirtualStream@@UAEPAXXZ
    void* GetMapping() override;

    // 0x543750 | ?GetPagingInfo@VirtualStream@@UAEHAAI00@Z
    int32_t GetPagingInfo(uint32_t& handle, uint32_t& offset, uint32_t& size) override;

    // 0x5437E0 | ?RawRead@VirtualStream@@UAEHPAXH@Z
    int32_t RawRead(void* data, int32_t size) override;

    // 0x543850 | ?RawWrite@VirtualStream@@UAEHPAXH@Z
    int32_t RawWrite(void* data, int32_t size) override;

    // 0x543860 | ?RawSeek@VirtualStream@@UAEHH@Z
    int32_t RawSeek(int32_t offset) override;

    // 0x543890 | ?RawTell@VirtualStream@@UAEHXZ
    int32_t RawTell() override;

    // 0x5438B0 | ?RawSize@VirtualStream@@UAEHXZ
    int32_t RawSize() override;
};

check_size(VirtualStream, 0x30);
