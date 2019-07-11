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
    mmaudio:dupbufcreator

    0x4E1790 | public: __thiscall DupBuffCreator::DupBuffCreator(void) | ??0DupBuffCreator@@QAE@XZ
    0x4E17D0 | public: __thiscall DupBuffCreator::~DupBuffCreator(void) | ??1DupBuffCreator@@QAE@XZ
    0x4E1830 | public: struct IDirectSoundBuffer * __thiscall DupBuffCreator::Create(char *,short *,int *) | ?Create@DupBuffCreator@@QAEPAUIDirectSoundBuffer@@PADPAFPAH@Z
    0x4E1930 | public: void __thiscall DupBuffCreator::Add(char *,struct IDirectSoundBuffer *) | ?Add@DupBuffCreator@@QAEXPADPAUIDirectSoundBuffer@@@Z
    0x4E1AD0 | public: struct IDirectSoundBuffer * __thiscall DupBuffCreator::FindOriginal(char *,short *) | ?FindOriginal@DupBuffCreator@@QAEPAUIDirectSoundBuffer@@PADPAF@Z
    0x4E1B60 | private: struct tWAVEFORMATEX * __thiscall DupBuffCreator::GetWAVEFORMATEX(struct IDirectSoundBuffer *) | ?GetWAVEFORMATEX@DupBuffCreator@@AAEPAUtWAVEFORMATEX@@PAUIDirectSoundBuffer@@@Z
    0x4E1BE0 | private: int __thiscall DupBuffCreator::IntegrityCheck(struct IDirectSoundBuffer *,struct IDirectSoundBuffer *,int *) | ?IntegrityCheck@DupBuffCreator@@AAEHPAUIDirectSoundBuffer@@0PAH@Z
    0x67B5F8 | class DupBuffCreator * DUPBUFCREATORPTR | ?DUPBUFCREATORPTR@@3PAVDupBuffCreator@@A
*/

#include "hooking.h"

// 0x67B5F8 | ?DUPBUFCREATORPTR@@3PAVDupBuffCreator@@A
inline extern_var(0x67B5F8, class DupBuffCreator*, DUPBUFCREATORPTR);

class DupBuffCreator
{
public:
    // 0x4E1790 | ??0DupBuffCreator@@QAE@XZ
    inline DupBuffCreator()
    {
        stub<member_func_t<void, DupBuffCreator>>(0x4E1790, this);
    }

    // 0x4E17D0 | ??1DupBuffCreator@@QAE@XZ
    inline ~DupBuffCreator()
    {
        stub<member_func_t<void, DupBuffCreator>>(0x4E17D0, this);
    }

    // 0x4E1830 | ?Create@DupBuffCreator@@QAEPAUIDirectSoundBuffer@@PADPAFPAH@Z
    inline struct IDirectSoundBuffer* Create(char* arg1, int16_t* arg2, int32_t* arg3)
    {
        return stub<member_func_t<struct IDirectSoundBuffer*, DupBuffCreator, char*, int16_t*, int32_t*>>(
            0x4E1830, this, arg1, arg2, arg3);
    }

    // 0x4E1930 | ?Add@DupBuffCreator@@QAEXPADPAUIDirectSoundBuffer@@@Z
    inline void Add(char* arg1, struct IDirectSoundBuffer* arg2)
    {
        return stub<member_func_t<void, DupBuffCreator, char*, struct IDirectSoundBuffer*>>(0x4E1930, this, arg1, arg2);
    }

    // 0x4E1AD0 | ?FindOriginal@DupBuffCreator@@QAEPAUIDirectSoundBuffer@@PADPAF@Z
    inline struct IDirectSoundBuffer* FindOriginal(char* arg1, int16_t* arg2)
    {
        return stub<member_func_t<struct IDirectSoundBuffer*, DupBuffCreator, char*, int16_t*>>(
            0x4E1AD0, this, arg1, arg2);
    }

    // 0x4E1B60 | ?GetWAVEFORMATEX@DupBuffCreator@@AAEPAUtWAVEFORMATEX@@PAUIDirectSoundBuffer@@@Z
    inline struct tWAVEFORMATEX* GetWAVEFORMATEX(struct IDirectSoundBuffer* arg1)
    {
        return stub<member_func_t<struct tWAVEFORMATEX*, DupBuffCreator, struct IDirectSoundBuffer*>>(
            0x4E1B60, this, arg1);
    }

    // 0x4E1BE0 | ?IntegrityCheck@DupBuffCreator@@AAEHPAUIDirectSoundBuffer@@0PAH@Z
    inline int32_t IntegrityCheck(struct IDirectSoundBuffer* arg1, struct IDirectSoundBuffer* arg2, int32_t* arg3)
    {
        return stub<
            member_func_t<int32_t, DupBuffCreator, struct IDirectSoundBuffer*, struct IDirectSoundBuffer*, int32_t*>>(
            0x4E1BE0, this, arg1, arg2, arg3);
    }
};
