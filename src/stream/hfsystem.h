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
    stream:hfsystem

    0x541AD0 | public: __thiscall HierFileSystem::HierFileSystem(void) | ??0HierFileSystem@@QAE@XZ
    0x541AF0 | public: virtual __thiscall HierFileSystem::~HierFileSystem(void) | ??1HierFileSystem@@UAE@XZ
    0x541B00 | public: virtual int __thiscall HierFileSystem::ValidPath(char *) | ?ValidPath@HierFileSystem@@UAEHPAD@Z
    0x541B10 | char * __cdecl FQN(char *) | ?FQN@@YAPADPAD@Z
    0x541BC0 | public: virtual int __thiscall HierFileSystem::QueryOn(char *) | ?QueryOn@HierFileSystem@@UAEHPAD@Z
    0x541C80 | public: virtual class Stream * __thiscall HierFileSystem::OpenOn(char *,int,void *,int) | ?OpenOn@HierFileSystem@@UAEPAVStream@@PADHPAXH@Z
    0x541E20 | public: virtual class Stream * __thiscall HierFileSystem::CreateOn(char *,void *,int) | ?CreateOn@HierFileSystem@@UAEPAVStream@@PADPAXH@Z
    0x541F00 | public: virtual int __thiscall HierFileSystem::ChangeDir(char *) | ?ChangeDir@HierFileSystem@@UAEHPAD@Z
    0x541F20 | public: virtual int __thiscall HierFileSystem::GetDir(char *,int) | ?GetDir@HierFileSystem@@UAEHPADH@Z
    0x541F40 | public: virtual struct FileInfo * __thiscall HierFileSystem::FirstEntry(char *) | ?FirstEntry@HierFileSystem@@UAEPAUFileInfo@@PAD@Z
    0x542080 | public: virtual struct FileInfo * __thiscall HierFileSystem::NextEntry(struct FileInfo *) | ?NextEntry@HierFileSystem@@UAEPAUFileInfo@@PAU2@@Z
    0x542150 | public: void __thiscall PagerInfo_t::Read(void *,unsigned int,unsigned int) | ?Read@PagerInfo_t@@QAEXPAXII@Z
    0x5421A0 | public: virtual void * __thiscall HierFileSystem::`scalar deleting destructor'(unsigned int) | ??_GHierFileSystem@@UAEPAXI@Z
    0x5421A0 | public: virtual void * __thiscall HierFileSystem::`vector deleting destructor'(unsigned int) | ??_EHierFileSystem@@UAEPAXI@Z
    0x595E98 | const HierFileSystem::`vftable' | ??_7HierFileSystem@@6B@
    0x70EF80 | char * HierPrefix | ?HierPrefix@@3PADA
    0x70F008 | class HierFileSystem HFS | ?HFS@@3VHierFileSystem@@A
    0x70F010 | char * HierAllowPath | ?HierAllowPath@@3PADA
    0x70F014 | int LogOpenOn | ?LogOpenOn@@3HA
*/

#include "hooking.h"

#include "fsystem.h"

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

check_size(PagerInfo_t, 12);

class HierFileSystem : FileSystem
{
public:
    // HierFileSystem::`vftable' @ 0x595E98

    // 0x541AD0 | ??0HierFileSystem@@QAE@XZ
    inline HierFileSystem()
    {}

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

check_size(HierFileSystem, 8);
