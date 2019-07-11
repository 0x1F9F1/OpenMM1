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

// agiworld:texsheet

#include "hooking.h"

// 0x501B20 | ?mystrtok@@YAPADPADPBD@Z
inline char* mystrtok(char* arg1, char const* arg2)
{
    return stub<cdecl_t<char*, char*, char const*>>(0x501B20, arg1, arg2);
}

// 0x6A0988 | ?TEXSHEET@@3VagiTexSheet@@A
inline extern_var(0x6A0988, class agiTexSheet, TEXSHEET);

// 0x5020D0 | ?cmpTex@@YAHPBX0@Z
inline int32_t cmpTex(void const* arg1, void const* arg2)
{
    return stub<cdecl_t<int32_t, void const*, void const*>>(0x5020D0, arg1, arg2);
}

class agiTexSheet
{
public:
    // 0x501B80 | ?Load@agiTexSheet@@QAEXPAD@Z
    inline void Load(char* arg1)
    {
        return stub<member_func_t<void, agiTexSheet, char*>>(0x501B80, this, arg1);
    }

    // 0x5020F0 | ?Kill@agiTexSheet@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, agiTexSheet>>(0x5020F0, this);
    }

    // 0x502120 | ?Save@agiTexSheet@@QAEXPAD@Z
    inline void Save(char* arg1)
    {
        return stub<member_func_t<void, agiTexSheet, char*>>(0x502120, this, arg1);
    }

    // 0x5023D0 | ?Lookup@agiTexSheet@@QAEPAUagiTexProp@@PADH@Z
    inline struct agiTexProp* Lookup(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<struct agiTexProp*, agiTexSheet, char*, int32_t>>(0x5023D0, this, arg1, arg2);
    }

    // 0x502430 | ?LookupAlternate@agiTexSheet@@QAEPAUagiTexProp@@PAD@Z
    inline struct agiTexProp* LookupAlternate(char* arg1)
    {
        return stub<member_func_t<struct agiTexProp*, agiTexSheet, char*>>(0x502430, this, arg1);
    }

    // 0x5024A0 | ?GetVariationCount@agiTexSheet@@QAEHPAD@Z
    inline int32_t GetVariationCount(char* arg1)
    {
        return stub<member_func_t<int32_t, agiTexSheet, char*>>(0x5024A0, this, arg1);
    }

    // 0x5024F0 | ?RemapName@agiTexSheet@@QAEPADPADH@Z
    inline char* RemapName(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<char*, agiTexSheet, char*, int32_t>>(0x5024F0, this, arg1, arg2);
    }

    // 0x502530 | ?Add@agiTexSheet@@QAEXPAD@Z
    inline void Add(char* arg1)
    {
        return stub<member_func_t<void, agiTexSheet, char*>>(0x502530, this, arg1);
    }
};
