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
    stream:vfsystem

    0x5421D0 | public: __thiscall VirtualFileSystem::VirtualFileSystem(class Stream *) | ??0VirtualFileSystem@@QAE@PAVStream@@@Z
    0x542290 | public: virtual __thiscall VirtualFileSystem::~VirtualFileSystem(void) | ??1VirtualFileSystem@@UAE@XZ
    0x542300 | public: virtual int __thiscall VirtualFileSystem::ValidPath(char *) | ?ValidPath@VirtualFileSystem@@UAEHPAD@Z
    0x542310 | public: static void __cdecl VirtualFileSystem::NormalizeName(char *,char *) | ?NormalizeName@VirtualFileSystem@@SAXPAD0@Z
    0x542380 | public: static void __cdecl VirtualFileSystem::ExpandName(char *,struct VirtualFileInode *,char *) | ?ExpandName@VirtualFileSystem@@SAXPADPAUVirtualFileInode@@0@Z
    0x5424A0 | public: static struct VirtualFileInode * __cdecl VirtualFileSystem::Lookup(struct VirtualFileInode *,int,char *,char *) | ?Lookup@VirtualFileSystem@@SAPAUVirtualFileInode@@PAU2@HPAD1@Z
    0x542580 | public: virtual int __thiscall VirtualFileSystem::QueryOn(char *) | ?QueryOn@VirtualFileSystem@@UAEHPAD@Z
    0x5425D0 | public: virtual int __thiscall VirtualFileSystem::PagerInfo(char *,struct PagerInfo_t &) | ?PagerInfo@VirtualFileSystem@@UAEHPADAAUPagerInfo_t@@@Z
    0x542650 | public: virtual class Stream * __thiscall VirtualFileSystem::OpenOn(char *,int,void *,int) | ?OpenOn@VirtualFileSystem@@UAEPAVStream@@PADHPAXH@Z
    0x542700 | public: virtual class Stream * __thiscall VirtualFileSystem::CreateOn(char *,void *,int) | ?CreateOn@VirtualFileSystem@@UAEPAVStream@@PADPAXH@Z
    0x542710 | public: virtual int __thiscall VirtualFileSystem::ChangeDir(char *) | ?ChangeDir@VirtualFileSystem@@UAEHPAD@Z
    0x542720 | public: virtual int __thiscall VirtualFileSystem::GetDir(char *,int) | ?GetDir@VirtualFileSystem@@UAEHPADH@Z
    0x542730 | public: virtual struct FileInfo * __thiscall VirtualFileSystem::FirstEntry(char *) | ?FirstEntry@VirtualFileSystem@@UAEPAUFileInfo@@PAD@Z
    0x542880 | public: virtual struct FileInfo * __thiscall VirtualFileSystem::NextEntry(struct FileInfo *) | ?NextEntry@VirtualFileSystem@@UAEPAUFileInfo@@PAU2@@Z
    0x542900 | public: virtual void * __thiscall VirtualFileSystem::`scalar deleting destructor'(unsigned int) | ??_GVirtualFileSystem@@UAEPAXI@Z
    0x542900 | public: virtual void * __thiscall VirtualFileSystem::`vector deleting destructor'(unsigned int) | ??_EVirtualFileSystem@@UAEPAXI@Z
    0x595ED8 | const VirtualFileSystem::`vftable' | ??_7VirtualFileSystem@@6B@
*/

#include "hooking.h"

#include "data7/ptr.h"
#include "fsystem.h"

struct VirtualFileInode
{
    uint32_t m_DataOffset;
    uint32_t m_Flags1;
    uint32_t m_Flags2;
};

check_size(VirtualFileInode, 12);

class VirtualFileSystem : FileSystem
{
public:
    Ptr<Stream> m_pFileStream {nullptr};
    uint32_t m_Magic {0};
    uint32_t m_NodeCount {0};
    uint32_t m_DirectoryCount {0};
    uint32_t m_NameDataSize {0};
    Ptr<VirtualFileInode[]> m_pNodes {nullptr};
    Ptr<uint8_t[]> m_pNameData {nullptr};

    // VirtualFileSystem::`vftable' @ 0x595ED8

    // 0x5421D0 | ??0VirtualFileSystem@@QAE@PAVStream@@@Z
    VirtualFileSystem(class Stream* stream);

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
    ~VirtualFileSystem() override;

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

check_size(VirtualFileSystem, 0x24);
