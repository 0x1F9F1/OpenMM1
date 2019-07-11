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

// stream:filestream

#include "hooking.h"

// 0x710020 | ?__stdout@@3VFileStream@@A
inline extern_var(0x710020, class FileStream, __stdout);

// 0x710048 | ?__stdin@@3VFileStream@@A
inline extern_var(0x710048, class FileStream, __stdin);

class FileStream : Stream
{
public:
    // FileStream::`vftable' @ 0x595F28

    // 0x543370 | ??0FileStream@@QAE@PAXHPAVFileSystem@@@Z
    inline FileStream(void* arg1, int32_t arg2, class FileSystem* arg3)
    {
        stub<member_func_t<void, FileStream, void*, int32_t, class FileSystem*>>(0x543370, this, arg1, arg2, arg3);
    }

    // 0x5433C0 | ?Create@FileStream@@QAEHPAD@Z
    inline int32_t Create(char* arg1)
    {
        return stub<member_func_t<int32_t, FileStream, char*>>(0x5433C0, this, arg1);
    }

    // 0x5433F0 | ?Open@FileStream@@QAEHPADH@Z
    inline int32_t Open(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, FileStream, char*, int32_t>>(0x5433F0, this, arg1, arg2);
    }

    // 0x543460 | ??0FileStream@@QAE@H@Z
    inline FileStream(int32_t arg1)
    {
        stub<member_func_t<void, FileStream, int32_t>>(0x543460, this, arg1);
    }

    // 0x543490 | ?Stdin@FileStream@@QAEHXZ
    inline int32_t Stdin()
    {
        return stub<member_func_t<int32_t, FileStream>>(0x543490, this);
    }

    // 0x5434B0 | ?Stdout@FileStream@@QAEHXZ
    inline int32_t Stdout()
    {
        return stub<member_func_t<int32_t, FileStream>>(0x5434B0, this);
    }

    // 0x5434D0 | ?Stderr@FileStream@@QAEHXZ
    inline int32_t Stderr()
    {
        return stub<member_func_t<int32_t, FileStream>>(0x5434D0, this);
    }

    // 0x5435A0 | ?Close@FileStream@@QAEHXZ
    inline int32_t Close()
    {
        return stub<member_func_t<int32_t, FileStream>>(0x5435A0, this);
    }

    // 0x5435E0 | ??1FileStream@@UAE@XZ
    inline ~FileStream() override
    {
        stub<member_func_t<void, FileStream>>(0x5435E0, this);
    }

    // 0x5433B0 | ?GetPagerHandle@FileStream@@UAEIXZ
    inline uint32_t GetPagerHandle() override
    {
        return stub<member_func_t<uint32_t, FileStream>>(0x5433B0, this);
    }

    // 0x5434F0 | ?RawRead@FileStream@@UAEHPAXH@Z
    inline int32_t RawRead(void* arg1, int32_t arg2) override
    {
        return stub<member_func_t<int32_t, FileStream, void*, int32_t>>(0x5434F0, this, arg1, arg2);
    }

    // 0x543510 | ?RawWrite@FileStream@@UAEHPAXH@Z
    inline int32_t RawWrite(void* arg1, int32_t arg2) override
    {
        return stub<member_func_t<int32_t, FileStream, void*, int32_t>>(0x543510, this, arg1, arg2);
    }

    // 0x543530 | ?RawSeek@FileStream@@UAEHH@Z
    inline int32_t RawSeek(int32_t arg1) override
    {
        return stub<member_func_t<int32_t, FileStream, int32_t>>(0x543530, this, arg1);
    }

    // 0x543550 | ?RawTell@FileStream@@UAEHXZ
    inline int32_t RawTell() override
    {
        return stub<member_func_t<int32_t, FileStream>>(0x543550, this);
    }

    // 0x543570 | ?RawSize@FileStream@@UAEHXZ
    inline int32_t RawSize() override
    {
        return stub<member_func_t<int32_t, FileStream>>(0x543570, this);
    }
};
