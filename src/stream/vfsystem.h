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

// stream:vfsystem

#include "hooking.h"

class VirtualFileSystem : FileSystem
{
public:
    // VirtualFileSystem::`vftable' @ 0x595ED8

    // 0x5421D0 | ??0VirtualFileSystem@@QAE@PAVStream@@@Z
    inline VirtualFileSystem(class Stream* arg1)
    {
        stub<member_func_t<void, VirtualFileSystem, class Stream*>>(0x5421D0, this, arg1);
    }

    // 0x542310 | ?NormalizeName@VirtualFileSystem@@SAXPAD0@Z
    static inline void NormalizeName(char* arg1, char* arg2)
    {
        return stub<cdecl_t<void, char*, char*>>(0x542310, arg1, arg2);
    }

    // 0x542380 | ?ExpandName@VirtualFileSystem@@SAXPADPAUVirtualFileInode@@0@Z
    static inline void ExpandName(char* arg1, struct VirtualFileInode* arg2, char* arg3)
    {
        return stub<cdecl_t<void, char*, struct VirtualFileInode*, char*>>(0x542380, arg1, arg2, arg3);
    }

    // 0x5424A0 | ?Lookup@VirtualFileSystem@@SAPAUVirtualFileInode@@PAU2@HPAD1@Z
    static inline struct VirtualFileInode* Lookup(struct VirtualFileInode* arg1, int32_t arg2, char* arg3, char* arg4)
    {
        return stub<cdecl_t<struct VirtualFileInode*, struct VirtualFileInode*, int32_t, char*, char*>>(
            0x5424A0, arg1, arg2, arg3, arg4);
    }

    // 0x542290 | ??1VirtualFileSystem@@UAE@XZ
    inline ~VirtualFileSystem() override
    {
        stub<member_func_t<void, VirtualFileSystem>>(0x542290, this);
    }

    // 0x542300 | ?ValidPath@VirtualFileSystem@@UAEHPAD@Z
    inline int32_t ValidPath(char* arg1) override
    {
        return stub<member_func_t<int32_t, VirtualFileSystem, char*>>(0x542300, this, arg1);
    }

    // 0x542580 | ?QueryOn@VirtualFileSystem@@UAEHPAD@Z
    inline int32_t QueryOn(char* arg1) override
    {
        return stub<member_func_t<int32_t, VirtualFileSystem, char*>>(0x542580, this, arg1);
    }

    // 0x542650 | ?OpenOn@VirtualFileSystem@@UAEPAVStream@@PADHPAXH@Z
    inline class Stream* OpenOn(char* arg1, int32_t arg2, void* arg3, int32_t arg4) override
    {
        return stub<member_func_t<class Stream*, VirtualFileSystem, char*, int32_t, void*, int32_t>>(
            0x542650, this, arg1, arg2, arg3, arg4);
    }

    // 0x542700 | ?CreateOn@VirtualFileSystem@@UAEPAVStream@@PADPAXH@Z
    inline class Stream* CreateOn(char* arg1, void* arg2, int32_t arg3) override
    {
        return stub<member_func_t<class Stream*, VirtualFileSystem, char*, void*, int32_t>>(
            0x542700, this, arg1, arg2, arg3);
    }

    // 0x5425D0 | ?PagerInfo@VirtualFileSystem@@UAEHPADAAUPagerInfo_t@@@Z
    inline int32_t PagerInfo(char* arg1, struct PagerInfo_t& arg2) override
    {
        return stub<member_func_t<int32_t, VirtualFileSystem, char*, struct PagerInfo_t&>>(0x5425D0, this, arg1, arg2);
    }

    // 0x542710 | ?ChangeDir@VirtualFileSystem@@UAEHPAD@Z
    inline int32_t ChangeDir(char* arg1) override
    {
        return stub<member_func_t<int32_t, VirtualFileSystem, char*>>(0x542710, this, arg1);
    }

    // 0x542720 | ?GetDir@VirtualFileSystem@@UAEHPADH@Z
    inline int32_t GetDir(char* arg1, int32_t arg2) override
    {
        return stub<member_func_t<int32_t, VirtualFileSystem, char*, int32_t>>(0x542720, this, arg1, arg2);
    }

    // 0x542730 | ?FirstEntry@VirtualFileSystem@@UAEPAUFileInfo@@PAD@Z
    inline struct FileInfo* FirstEntry(char* arg1) override
    {
        return stub<member_func_t<struct FileInfo*, VirtualFileSystem, char*>>(0x542730, this, arg1);
    }

    // 0x542880 | ?NextEntry@VirtualFileSystem@@UAEPAUFileInfo@@PAU2@@Z
    inline struct FileInfo* NextEntry(struct FileInfo* arg1) override
    {
        return stub<member_func_t<struct FileInfo*, VirtualFileSystem, struct FileInfo*>>(0x542880, this, arg1);
    }
};
