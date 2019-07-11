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
    agi:getdlp

    0x538C50 | int __cdecl OutOfDate(char *,char *) | ?OutOfDate@@YAHPAD0@Z
    0x538CB0 | void __cdecl CheckLibraries(void) | ?CheckLibraries@@YAXXZ
    0x538DE0 | class DLPTemplate * __cdecl GetDLPTemplate(char *) | ?GetDLPTemplate@@YAPAVDLPTemplate@@PAD@Z
    0x538EF0 | int __cdecl GetGroupVerts(char *,char *,class Vector3 *,int) | ?GetGroupVerts@@YAHPAD0PAVVector3@@H@Z
    0x7024C0 | class HashTable DLPTemplateBadHash | ?DLPTemplateBadHash@@3VHashTable@@A
    0x7024D0 | int FlagGetDLPTemplateCalls | ?FlagGetDLPTemplateCalls@@3HA
    0x538D50 | int __cdecl LibOutOfDate(char *,char *) | ?LibOutOfDate@@YAHPAD0@Z
*/

#include "hooking.h"

// 0x538C50 | ?OutOfDate@@YAHPAD0@Z
inline int32_t OutOfDate(char* arg1, char* arg2)
{
    return stub<cdecl_t<int32_t, char*, char*>>(0x538C50, arg1, arg2);
}

// 0x538CB0 | ?CheckLibraries@@YAXXZ
inline void CheckLibraries()
{
    return stub<cdecl_t<void>>(0x538CB0);
}

// 0x538DE0 | ?GetDLPTemplate@@YAPAVDLPTemplate@@PAD@Z
inline class DLPTemplate* GetDLPTemplate(char* arg1)
{
    return stub<cdecl_t<class DLPTemplate*, char*>>(0x538DE0, arg1);
}

// 0x538EF0 | ?GetGroupVerts@@YAHPAD0PAVVector3@@H@Z
inline int32_t GetGroupVerts(char* arg1, char* arg2, class Vector3* arg3, int32_t arg4)
{
    return stub<cdecl_t<int32_t, char*, char*, class Vector3*, int32_t>>(0x538EF0, arg1, arg2, arg3, arg4);
}

// 0x7024C0 | ?DLPTemplateBadHash@@3VHashTable@@A
inline extern_var(0x7024C0, class HashTable, DLPTemplateBadHash);

// 0x7024D0 | ?FlagGetDLPTemplateCalls@@3HA
inline extern_var(0x7024D0, int32_t, FlagGetDLPTemplateCalls);

// 0x538D50 | ?LibOutOfDate@@YAHPAD0@Z
inline int32_t LibOutOfDate(char* arg1, char* arg2)
{
    return stub<cdecl_t<int32_t, char*, char*>>(0x538D50, arg1, arg2);
}
