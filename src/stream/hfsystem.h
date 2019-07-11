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

// stream:hfsystem

#include "hooking.h"

// 0x541B10 | ?FQN@@YAPADPAD@Z
inline char* FQN(char* arg1)
{
    return stub<cdecl_t<char*, char*>>(0x541B10, arg1);
}

// 0x70EF80 | ?HierPrefix@@3PADA
inline extern_var(0x70EF80, char*, HierPrefix);

// 0x70F008 | ?HFS@@3VHierFileSystem@@A
inline extern_var(0x70F008, class HierFileSystem, HFS);

// 0x70F010 | ?HierAllowPath@@3PADA
inline extern_var(0x70F010, char*, HierAllowPath);

// 0x70F014 | ?LogOpenOn@@3HA
inline extern_var(0x70F014, int32_t, LogOpenOn);

struct PagerInfo_t
{
public:
    // 0x542150 | ?Read@PagerInfo_t@@QAEXPAXII@Z
    inline void Read(void* arg1, uint32_t arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, PagerInfo_t, void*, uint32_t, uint32_t>>(0x542150, this, arg1, arg2, arg3);
    }
};

class HierFileSystem : FileSystem
{
public:
    // HierFileSystem::`vftable' @ 0x595E98

    // 0x541AD0 | ??0HierFileSystem@@QAE@XZ
    inline HierFileSystem()
    {
        stub<member_func_t<void, HierFileSystem>>(0x541AD0, this);
    }

    // 0x541AF0 | ??1HierFileSystem@@UAE@XZ
    inline ~HierFileSystem() override
    {
        stub<member_func_t<void, HierFileSystem>>(0x541AF0, this);
    }

    // 0x541B00 | ?ValidPath@HierFileSystem@@UAEHPAD@Z
    inline int32_t ValidPath(char* arg1) override
    {
        return stub<member_func_t<int32_t, HierFileSystem, char*>>(0x541B00, this, arg1);
    }

    // 0x541BC0 | ?QueryOn@HierFileSystem@@UAEHPAD@Z
    inline int32_t QueryOn(char* arg1) override
    {
        return stub<member_func_t<int32_t, HierFileSystem, char*>>(0x541BC0, this, arg1);
    }

    // 0x541C80 | ?OpenOn@HierFileSystem@@UAEPAVStream@@PADHPAXH@Z
    inline class Stream* OpenOn(char* arg1, int32_t arg2, void* arg3, int32_t arg4) override
    {
        return stub<member_func_t<class Stream*, HierFileSystem, char*, int32_t, void*, int32_t>>(
            0x541C80, this, arg1, arg2, arg3, arg4);
    }

    // 0x541E20 | ?CreateOn@HierFileSystem@@UAEPAVStream@@PADPAXH@Z
    inline class Stream* CreateOn(char* arg1, void* arg2, int32_t arg3) override
    {
        return stub<member_func_t<class Stream*, HierFileSystem, char*, void*, int32_t>>(
            0x541E20, this, arg1, arg2, arg3);
    }

    // 0x541F00 | ?ChangeDir@HierFileSystem@@UAEHPAD@Z
    inline int32_t ChangeDir(char* arg1) override
    {
        return stub<member_func_t<int32_t, HierFileSystem, char*>>(0x541F00, this, arg1);
    }

    // 0x541F20 | ?GetDir@HierFileSystem@@UAEHPADH@Z
    inline int32_t GetDir(char* arg1, int32_t arg2) override
    {
        return stub<member_func_t<int32_t, HierFileSystem, char*, int32_t>>(0x541F20, this, arg1, arg2);
    }

    // 0x541F40 | ?FirstEntry@HierFileSystem@@UAEPAUFileInfo@@PAD@Z
    inline struct FileInfo* FirstEntry(char* arg1) override
    {
        return stub<member_func_t<struct FileInfo*, HierFileSystem, char*>>(0x541F40, this, arg1);
    }

    // 0x542080 | ?NextEntry@HierFileSystem@@UAEPAUFileInfo@@PAU2@@Z
    inline struct FileInfo* NextEntry(struct FileInfo* arg1) override
    {
        return stub<member_func_t<struct FileInfo*, HierFileSystem, struct FileInfo*>>(0x542080, this, arg1);
    }
};
