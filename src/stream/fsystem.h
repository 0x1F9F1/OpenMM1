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

// stream:fsystem

#include "hooking.h"

// 0x5418B0 | ?FindFile@@YAPAVFileSystem@@PAD00H0@Z
inline class FileSystem* FindFile(char* arg1, char* arg2, char* arg3, int32_t arg4, char* arg5)
{
    return stub<cdecl_t<class FileSystem*, char*, char*, char*, int32_t, char*>>(
        0x5418B0, arg1, arg2, arg3, arg4, arg5);
}

// 0x5418E0 | ?OpenFile@@YAPAVStream@@PAD00H00@Z
inline class Stream* OpenFile(char* arg1, char* arg2, char* arg3, int32_t arg4, char* arg5, char* arg6)
{
    return stub<cdecl_t<class Stream*, char*, char*, char*, int32_t, char*, char*>>(
        0x5418E0, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x70EF78 | ?fsVerbose@@3HA
inline extern_var(0x70EF78, int32_t, fsVerbose);

// 0x541670 | ?SubString@@YAPADHPAD@Z
inline char* SubString(int32_t arg1, char* arg2)
{
    return stub<cdecl_t<char*, int32_t, char*>>(0x541670, arg1, arg2);
}

// 0x5416F0 | ?NumSubStrings@@YAHPAD@Z
inline int32_t NumSubStrings(char* arg1)
{
    return stub<cdecl_t<int32_t, char*>>(0x5416F0, arg1);
}

// 0x541720 | ?Contains@@YAHPAD0@Z
inline int32_t Contains(char* arg1, char* arg2)
{
    return stub<cdecl_t<int32_t, char*, char*>>(0x541720, arg1, arg2);
}

// 0x5417A0 | ?ExpandEnvs@@YAXPAD@Z
inline void ExpandEnvs(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x5417A0, arg1);
}

class FileSystem : Base
{
public:
    // FileSystem::`vftable' @ 0x595E58

    // 0x5410B0 | ??0FileSystem@@QAE@XZ
    inline FileSystem()
    {
        stub<member_func_t<void, FileSystem>>(0x5410B0, this);
    }

    // 0x5411A0 | ?SearchAll@FileSystem@@SAPAV1@PAD00H0@Z
    static inline class FileSystem* SearchAll(char* arg1, char* arg2, char* arg3, int32_t arg4, char* arg5)
    {
        return stub<cdecl_t<class FileSystem*, char*, char*, char*, int32_t, char*>>(
            0x5411A0, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x541210 | ?Search@FileSystem@@QAEHPAD00H0@Z
    inline int32_t Search(char* arg1, char* arg2, char* arg3, int32_t arg4, char* arg5)
    {
        return stub<member_func_t<int32_t, FileSystem, char*, char*, char*, int32_t, char*>>(
            0x541210, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5419E0 | ?OpenAny@FileSystem@@SAPAVStream@@PADHPAXH@Z
    static inline class Stream* OpenAny(char* arg1, int32_t arg2, void* arg3, int32_t arg4)
    {
        return stub<cdecl_t<class Stream*, char*, int32_t, void*, int32_t>>(0x5419E0, arg1, arg2, arg3, arg4);
    }

    // 0x541A50 | ?PagerInfoAny@FileSystem@@SAHPADAAUPagerInfo_t@@@Z
    static inline int32_t PagerInfoAny(char* arg1, struct PagerInfo_t& arg2)
    {
        return stub<cdecl_t<int32_t, char*, struct PagerInfo_t&>>(0x541A50, arg1, arg2);
    }

    // 0x70EE70 | ?FSCount@FileSystem@@2HA
    static inline extern_var(0x70EE70, int32_t, FSCount);

    // 0x70EE78 | ?FS@FileSystem@@2PAPAV1@A
    static inline extern_var(0x70EE78, class FileSystem**, FS);

    // 0x541120 | ??1FileSystem@@UAE@XZ
    inline ~FileSystem() override
    {
        stub<member_func_t<void, FileSystem>>(0x541120, this);
    }

    // 0x567350 | __purecall
    virtual inline int32_t ValidPath(char* arg1)
    {
        return stub<member_func_t<int32_t, FileSystem, char*>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline int32_t QueryOn(char* arg1)
    {
        return stub<member_func_t<int32_t, FileSystem, char*>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline class Stream* OpenOn(char* arg1, int32_t arg2, void* arg3, int32_t arg4)
    {
        return stub<member_func_t<class Stream*, FileSystem, char*, int32_t, void*, int32_t>>(
            0x567350, this, arg1, arg2, arg3, arg4);
    }

    // 0x567350 | __purecall
    virtual inline class Stream* CreateOn(char* arg1, void* arg2, int32_t arg3)
    {
        return stub<member_func_t<class Stream*, FileSystem, char*, void*, int32_t>>(0x567350, this, arg1, arg2, arg3);
    }

    // 0x541A40 | ?PagerInfo@FileSystem@@UAEHPADAAUPagerInfo_t@@@Z
    virtual inline int32_t PagerInfo(char* arg1, struct PagerInfo_t& arg2)
    {
        return stub<member_func_t<int32_t, FileSystem, char*, struct PagerInfo_t&>>(0x541A40, this, arg1, arg2);
    }

    // 0x567350 | __purecall
    virtual inline int32_t ChangeDir(char* arg1)
    {
        return stub<member_func_t<int32_t, FileSystem, char*>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline int32_t GetDir(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, FileSystem, char*, int32_t>>(0x567350, this, arg1, arg2);
    }

    // 0x567350 | __purecall
    virtual inline struct FileInfo* FirstEntry(char* arg1)
    {
        return stub<member_func_t<struct FileInfo*, FileSystem, char*>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline struct FileInfo* NextEntry(struct FileInfo* arg1)
    {
        return stub<member_func_t<struct FileInfo*, FileSystem, struct FileInfo*>>(0x567350, this, arg1);
    }

    // 0x541190 | ?NotifyDelete@FileSystem@@MAEXXZ
    virtual inline void NotifyDelete()
    {
        return stub<member_func_t<void, FileSystem>>(0x541190, this);
    }
};
