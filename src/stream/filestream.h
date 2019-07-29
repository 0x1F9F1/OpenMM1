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
    stream:filestream

    0x543370 | public: __thiscall FileStream::FileStream(void *,int,class FileSystem *) | ??0FileStream@@QAE@PAXHPAVFileSystem@@@Z
    0x5433B0 | public: virtual unsigned int __thiscall FileStream::GetPagerHandle(void) | ?GetPagerHandle@FileStream@@UAEIXZ
    0x5433C0 | public: int __thiscall FileStream::Create(char *) | ?Create@FileStream@@QAEHPAD@Z
    0x5433F0 | public: int __thiscall FileStream::Open(char *,int) | ?Open@FileStream@@QAEHPADH@Z
    0x543460 | public: __thiscall FileStream::FileStream(int) | ??0FileStream@@QAE@H@Z
    0x543490 | public: int __thiscall FileStream::Stdin(void) | ?Stdin@FileStream@@QAEHXZ
    0x5434B0 | public: int __thiscall FileStream::Stdout(void) | ?Stdout@FileStream@@QAEHXZ
    0x5434D0 | public: int __thiscall FileStream::Stderr(void) | ?Stderr@FileStream@@QAEHXZ
    0x5434F0 | public: virtual int __thiscall FileStream::RawRead(void *,int) | ?RawRead@FileStream@@UAEHPAXH@Z
    0x543510 | public: virtual int __thiscall FileStream::RawWrite(void *,int) | ?RawWrite@FileStream@@UAEHPAXH@Z
    0x543530 | public: virtual int __thiscall FileStream::RawSeek(int) | ?RawSeek@FileStream@@UAEHH@Z
    0x543550 | public: virtual int __thiscall FileStream::RawTell(void) | ?RawTell@FileStream@@UAEHXZ
    0x543570 | public: virtual int __thiscall FileStream::RawSize(void) | ?RawSize@FileStream@@UAEHXZ
    0x5435A0 | public: int __thiscall FileStream::Close(void) | ?Close@FileStream@@QAEHXZ
    0x5435E0 | public: virtual __thiscall FileStream::~FileStream(void) | ??1FileStream@@UAE@XZ
    0x543690 | public: virtual void * __thiscall FileStream::`scalar deleting destructor'(unsigned int) | ??_GFileStream@@UAEPAXI@Z
    0x543690 | public: virtual void * __thiscall FileStream::`vector deleting destructor'(unsigned int) | ??_EFileStream@@UAEPAXI@Z
    0x595F28 | const FileStream::`vftable' | ??_7FileStream@@6B@
    0x710020 | class FileStream __stdout | ?__stdout@@3VFileStream@@A
    0x710048 | class FileStream __stdin | ?__stdin@@3VFileStream@@A
*/

#include "stream.h"

// 0x710020 | ?__stdout@@3VFileStream@@A
inline extern_var(0x710020, class FileStream, __stdout);

// 0x710048 | ?__stdin@@3VFileStream@@A
inline extern_var(0x710048, class FileStream, __stdin);

class FileStream : Stream
{
public:
    int32_t m_FileHandle {-1};
    void* m_PagerHandle {nullptr};

    // FileStream::`vftable' @ 0x595F28

    // 0x543370 | ??0FileStream@@QAE@PAXHPAVFileSystem@@@Z
    using Stream::Stream;

    // 0x5433C0 | ?Create@FileStream@@QAEHPAD@Z
    int32_t Create(char* path);

    // 0x5433F0 | ?Open@FileStream@@QAEHPADH@Z
    int32_t Open(char* path, int32_t paged);

    // 0x543460 | ??0FileStream@@QAE@H@Z
    inline FileStream(int32_t arg1)
        : Stream(nullptr, 0, nullptr)
        , m_FileHandle(arg1)
    {}

    // 0x543490 | ?Stdin@FileStream@@QAEHXZ
    int32_t Stdin();

    // 0x5434B0 | ?Stdout@FileStream@@QAEHXZ
    int32_t Stdout();

    // 0x5434D0 | ?Stderr@FileStream@@QAEHXZ
    int32_t Stderr();

    // 0x5435A0 | ?Close@FileStream@@QAEHXZ
    int32_t Close();

    // 0x5435E0 | ??1FileStream@@UAE@XZ
    ~FileStream() override;

    // 0x5433B0 | ?GetPagerHandle@FileStream@@UAEIXZ
    uint32_t GetPagerHandle() override;

    // 0x5434F0 | ?RawRead@FileStream@@UAEHPAXH@Z
    int32_t RawRead(void* data, int32_t length) override;

    // 0x543510 | ?RawWrite@FileStream@@UAEHPAXH@Z
    int32_t RawWrite(void* data, int32_t length) override;

    // 0x543530 | ?RawSeek@FileStream@@UAEHH@Z
    int32_t RawSeek(int32_t pos) override;

    // 0x543550 | ?RawTell@FileStream@@UAEHXZ
    int32_t RawTell() override;

    // 0x543570 | ?RawSize@FileStream@@UAEHXZ
    int32_t RawSize() override;
};

check_size(FileStream, 0x28);
