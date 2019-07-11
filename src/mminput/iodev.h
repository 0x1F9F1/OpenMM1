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

// mminput:iodev

#include "hooking.h"

// 0x4D7FC0 | ?ConvertDItoString@@YAHHPADH@Z
inline int32_t ConvertDItoString(int32_t arg1, char* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, int32_t, char*, int32_t>>(0x4D7FC0, arg1, arg2, arg3);
}

// 0x67B558 | ?mmIODevMetaClass@@3VMetaClass@@A
inline extern_var(0x67B558, class MetaClass, mmIODevMetaClass);

// 0x4D8690 | ?new_mmIODev@@YAPAXH@Z
inline void* new_mmIODev(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4D8690, arg1);
}

// 0x4D8760 | ?delete_mmIODev@@YAXPAXH@Z
inline void delete_mmIODev(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4D8760, arg1, arg2);
}

class mmIODev : mmInfoBase
{
public:
    // mmIODev::`vftable' @ 0x5947A0

    // 0x4D7DC0 | ??0mmIODev@@QAE@XZ
    inline mmIODev()
    {
        stub<member_func_t<void, mmIODev>>(0x4D7DC0, this);
    }

    // 0x4D7E10 | ?Init@mmIODev@@QAEXH_J@Z
    inline void Init(int32_t arg1, int64_t arg2)
    {
        return stub<member_func_t<void, mmIODev, int32_t, int64_t>>(0x4D7E10, this, arg1, arg2);
    }

    // 0x4D7E40 | ?Assign@mmIODev@@QAEXHHH@Z
    inline void Assign(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmIODev, int32_t, int32_t, int32_t>>(0x4D7E40, this, arg1, arg2, arg3);
    }

    // 0x4D7F60 | ??8mmIODev@@QAEHPATeqEvent@@@Z
    inline int32_t operator==(union eqEvent* arg1)
    {
        return stub<member_func_t<int32_t, mmIODev, union eqEvent*>>(0x4D7F60, this, arg1);
    }

    // 0x4D8020 | ?GetDescription@mmIODev@@QAEXPAD@Z
    inline void GetDescription(char* arg1)
    {
        return stub<member_func_t<void, mmIODev, char*>>(0x4D8020, this, arg1);
    }

    // 0x4D82E0 | ?GetComponentType@mmIODev@@QAEHHH@Z
    inline int32_t GetComponentType(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmIODev, int32_t, int32_t>>(0x4D82E0, this, arg1, arg2);
    }

    // 0x4D8350 | ?SanityCheckioType@mmIODev@@QAEHHHH@Z
    inline int32_t SanityCheckioType(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, mmIODev, int32_t, int32_t, int32_t>>(0x4D8350, this, arg1, arg2, arg3);
    }

    // 0x4D83D0 | ?Print@mmIODev@@QAEXH@Z
    inline void Print(int32_t arg1)
    {
        return stub<member_func_t<void, mmIODev, int32_t>>(0x4D83D0, this, arg1);
    }

    // 0x4D84A0 | ?Write@mmIODev@@QAEHPAVStream@@@Z
    inline int32_t Write(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmIODev, class Stream*>>(0x4D84A0, this, arg1);
    }

    // 0x4D8500 | ?WriteBinary@mmIODev@@QAEHPAVStream@@@Z
    inline int32_t WriteBinary(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmIODev, class Stream*>>(0x4D8500, this, arg1);
    }

    // 0x4D8550 | ?Read@mmIODev@@QAEHPAVStream@@@Z
    inline int32_t Read(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmIODev, class Stream*>>(0x4D8550, this, arg1);
    }

    // 0x4D85B0 | ?ReadBinary@mmIODev@@QAEHPAVStream@@@Z
    inline int32_t ReadBinary(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmIODev, class Stream*>>(0x4D85B0, this, arg1);
    }

    // 0x4D8600 | ?DeclareFields@mmIODev@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4D8600);
    }

    // 0x4D7E00 | ??1mmIODev@@UAE@XZ
    inline ~mmIODev() override
    {
        stub<member_func_t<void, mmIODev>>(0x4D7E00, this);
    }

    // 0x4D87B0 | ?GetClass@mmIODev@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmIODev>>(0x4D87B0, this);
    }
};
