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
    mmcityinfo:playerdir

    0x4C3450 | public: __thiscall mmPlayerDirectory::mmPlayerDirectory(void) | ??0mmPlayerDirectory@@QAE@XZ
    0x4C3490 | public: virtual __thiscall mmPlayerDirectory::~mmPlayerDirectory(void) | ??1mmPlayerDirectory@@UAE@XZ
    0x4C34F0 | public: void __thiscall mmPlayerDirectory::NewDirectory(int) | ?NewDirectory@mmPlayerDirectory@@QAEXH@Z
    0x4C3530 | public: void __thiscall mmPlayerDirectory::SetPlayer(int,char *,char *) | ?SetPlayer@mmPlayerDirectory@@QAEXHPAD0@Z
    0x4C3560 | public: void __thiscall mmPlayerDirectory::SetLastPlayer(char *) | ?SetLastPlayer@mmPlayerDirectory@@QAEXPAD@Z
    0x4C35B0 | public: char * __thiscall mmPlayerDirectory::GetPlayer(int) | ?GetPlayer@mmPlayerDirectory@@QAEPADH@Z
    0x4C35E0 | public: int __thiscall mmPlayerDirectory::GetNumPlayers(void) | ?GetNumPlayers@mmPlayerDirectory@@QAEHXZ
    0x4C35F0 | public: char * __thiscall mmPlayerDirectory::GetLastPlayer(void) | ?GetLastPlayer@mmPlayerDirectory@@QAEPADXZ
    0x4C3620 | public: int __thiscall mmPlayerDirectory::AddPlayer(char *) | ?AddPlayer@mmPlayerDirectory@@QAEHPAD@Z
    0x4C3760 | private: void __thiscall mmPlayerDirectory::CreatePlayer(char *,char *) | ?CreatePlayer@mmPlayerDirectory@@AAEXPAD0@Z
    0x4C3870 | public: int __thiscall mmPlayerDirectory::FindPlayer(char *) | ?FindPlayer@mmPlayerDirectory@@QAEHPAD@Z
    0x4C38E0 | public: char * __thiscall mmPlayerDirectory::GetFileName(char *) | ?GetFileName@mmPlayerDirectory@@QAEPADPAD@Z
    0x4C3970 | public: char * __thiscall mmPlayerDirectory::GetPlayerName(char *) | ?GetPlayerName@mmPlayerDirectory@@QAEPADPAD@Z
    0x4C3A00 | public: char * __thiscall mmPlayerDirectory::GetFileName(int) | ?GetFileName@mmPlayerDirectory@@QAEPADH@Z
    0x4C3A30 | private: char * __thiscall mmPlayerDirectory::MakeFileName(void) | ?MakeFileName@mmPlayerDirectory@@AAEPADXZ
    0x4C3AF0 | public: int __thiscall mmPlayerDirectory::RemovePlayer(char *) | ?RemovePlayer@mmPlayerDirectory@@QAEHPAD@Z
    0x4C3BF0 | public: int __thiscall mmPlayerDirectory::Load(char *) | ?Load@mmPlayerDirectory@@QAEHPAD@Z
    0x4C3C20 | public: int __thiscall mmPlayerDirectory::Save(char *,int) | ?Save@mmPlayerDirectory@@QAEHPADH@Z
    0x4C3CC0 | public: int __thiscall mmPlayerDirectory::SaveBinary(char *) | ?SaveBinary@mmPlayerDirectory@@QAEHPAD@Z
    0x4C3DC0 | public: int __thiscall mmPlayerDirectory::LoadBinary(char *) | ?LoadBinary@mmPlayerDirectory@@QAEHPAD@Z
    0x4C3F00 | public: static void __cdecl mmPlayerDirectory::DeclareFields(void) | ?DeclareFields@mmPlayerDirectory@@SAXXZ
    0x4C40D0 | public: virtual class MetaClass * __thiscall mmPlayerDirectory::GetClass(void) | ?GetClass@mmPlayerDirectory@@UAEPAVMetaClass@@XZ
    0x4C40E0 | struct MetaType * __cdecl RefTo(struct MetaType *,int,int *) | ?RefTo@@YAPAUMetaType@@PAU1@HPAH@Z
    0x4C4120 | public: virtual void * __thiscall mmPlayerDirectory::`vector deleting destructor'(unsigned int) | ??_EmmPlayerDirectory@@UAEPAXI@Z
    0x594458 | const mmPlayerDirectory::`vftable' | ??_7mmPlayerDirectory@@6B@
    0x66A870 | class MetaClass mmPlayerDirectoryMetaClass | ?mmPlayerDirectoryMetaClass@@3VMetaClass@@A
    0x4C3FB0 | void * __cdecl new_mmPlayerDirectory(int) | ?new_mmPlayerDirectory@@YAPAXH@Z
    0x4C4080 | void __cdecl delete_mmPlayerDirectory(void *,int) | ?delete_mmPlayerDirectory@@YAXPAXH@Z
*/

// 0x4C40E0 | ?RefTo@@YAPAUMetaType@@PAU1@HPAH@Z
inline struct MetaType* RefTo(struct MetaType* arg1, int32_t arg2, int32_t* arg3)
{
    return stub<cdecl_t<struct MetaType*, struct MetaType*, int32_t, int32_t*>>(0x4C40E0, arg1, arg2, arg3);
}

// 0x66A870 | ?mmPlayerDirectoryMetaClass@@3VMetaClass@@A
inline extern_var(0x66A870, class MetaClass, mmPlayerDirectoryMetaClass);

// 0x4C3FB0 | ?new_mmPlayerDirectory@@YAPAXH@Z
// 0x4C4080 | ?delete_mmPlayerDirectory@@YAXPAXH@Z

struct mmPlayerDirectory : mmInfoBase
{
public:
    // mmPlayerDirectory::`vftable' @ 0x594458

    // 0x4C3450 | ??0mmPlayerDirectory@@QAE@XZ
    inline mmPlayerDirectory()
    {
        // stub<member_func_t<void, mmPlayerDirectory>>(0x4C3450, this);

        unimplemented();
    }

    // 0x4C34F0 | ?NewDirectory@mmPlayerDirectory@@QAEXH@Z
    inline void NewDirectory(int32_t arg1)
    {
        return stub<member_func_t<void, mmPlayerDirectory, int32_t>>(0x4C34F0, this, arg1);
    }

    // 0x4C3530 | ?SetPlayer@mmPlayerDirectory@@QAEXHPAD0@Z
    inline void SetPlayer(int32_t arg1, char* arg2, char* arg3)
    {
        return stub<member_func_t<void, mmPlayerDirectory, int32_t, char*, char*>>(0x4C3530, this, arg1, arg2, arg3);
    }

    // 0x4C3560 | ?SetLastPlayer@mmPlayerDirectory@@QAEXPAD@Z
    inline void SetLastPlayer(char* arg1)
    {
        return stub<member_func_t<void, mmPlayerDirectory, char*>>(0x4C3560, this, arg1);
    }

    // 0x4C35B0 | ?GetPlayer@mmPlayerDirectory@@QAEPADH@Z
    inline char* GetPlayer(int32_t arg1)
    {
        return stub<member_func_t<char*, mmPlayerDirectory, int32_t>>(0x4C35B0, this, arg1);
    }

    // 0x4C35E0 | ?GetNumPlayers@mmPlayerDirectory@@QAEHXZ
    inline int32_t GetNumPlayers()
    {
        return stub<member_func_t<int32_t, mmPlayerDirectory>>(0x4C35E0, this);
    }

    // 0x4C35F0 | ?GetLastPlayer@mmPlayerDirectory@@QAEPADXZ
    inline char* GetLastPlayer()
    {
        return stub<member_func_t<char*, mmPlayerDirectory>>(0x4C35F0, this);
    }

    // 0x4C3620 | ?AddPlayer@mmPlayerDirectory@@QAEHPAD@Z
    inline int32_t AddPlayer(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerDirectory, char*>>(0x4C3620, this, arg1);
    }

    // 0x4C3760 | ?CreatePlayer@mmPlayerDirectory@@AAEXPAD0@Z
    inline void CreatePlayer(char* arg1, char* arg2)
    {
        return stub<member_func_t<void, mmPlayerDirectory, char*, char*>>(0x4C3760, this, arg1, arg2);
    }

    // 0x4C3870 | ?FindPlayer@mmPlayerDirectory@@QAEHPAD@Z
    inline int32_t FindPlayer(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerDirectory, char*>>(0x4C3870, this, arg1);
    }

    // 0x4C38E0 | ?GetFileName@mmPlayerDirectory@@QAEPADPAD@Z
    inline char* GetFileName(char* arg1)
    {
        return stub<member_func_t<char*, mmPlayerDirectory, char*>>(0x4C38E0, this, arg1);
    }

    // 0x4C3970 | ?GetPlayerName@mmPlayerDirectory@@QAEPADPAD@Z
    inline char* GetPlayerName(char* arg1)
    {
        return stub<member_func_t<char*, mmPlayerDirectory, char*>>(0x4C3970, this, arg1);
    }

    // 0x4C3A00 | ?GetFileName@mmPlayerDirectory@@QAEPADH@Z
    inline char* GetFileName(int32_t arg1)
    {
        return stub<member_func_t<char*, mmPlayerDirectory, int32_t>>(0x4C3A00, this, arg1);
    }

    // 0x4C3A30 | ?MakeFileName@mmPlayerDirectory@@AAEPADXZ
    inline char* MakeFileName()
    {
        return stub<member_func_t<char*, mmPlayerDirectory>>(0x4C3A30, this);
    }

    // 0x4C3AF0 | ?RemovePlayer@mmPlayerDirectory@@QAEHPAD@Z
    inline int32_t RemovePlayer(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerDirectory, char*>>(0x4C3AF0, this, arg1);
    }

    // 0x4C3BF0 | ?Load@mmPlayerDirectory@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerDirectory, char*>>(0x4C3BF0, this, arg1);
    }

    // 0x4C3C20 | ?Save@mmPlayerDirectory@@QAEHPADH@Z
    inline int32_t Save(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmPlayerDirectory, char*, int32_t>>(0x4C3C20, this, arg1, arg2);
    }

    // 0x4C3CC0 | ?SaveBinary@mmPlayerDirectory@@QAEHPAD@Z
    inline int32_t SaveBinary(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerDirectory, char*>>(0x4C3CC0, this, arg1);
    }

    // 0x4C3DC0 | ?LoadBinary@mmPlayerDirectory@@QAEHPAD@Z
    inline int32_t LoadBinary(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerDirectory, char*>>(0x4C3DC0, this, arg1);
    }

    // 0x4C3F00 | ?DeclareFields@mmPlayerDirectory@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4C3F00);
    }

    // 0x4C3490 | ??1mmPlayerDirectory@@UAE@XZ
    inline ~mmPlayerDirectory() override = 0
    {
        // stub<member_func_t<void, mmPlayerDirectory>>(0x4C3490, this);

        unimplemented();
    }

    // 0x4C40D0 | ?GetClass@mmPlayerDirectory@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmPlayerDirectory>>(0x4C40D0, this);
    }
};
