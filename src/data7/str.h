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

// data7:str

#include "hooking.h"

// 0x55AFA0 | ??H@YA?AVstring@@PBDABV0@@Z
inline class string operator+(char const* arg1, class string const& arg2)
{
    return stub<cdecl_t<class string, char const*, class string const&>>(0x55AFA0, arg1, arg2);
}

// 0x712320 | ?ProjPath@@3PADA
inline extern_var(0x712320, char*, ProjPath);

// 0x7123A0 | ?ImageExts@@3PADA
inline extern_var(0x7123A0, char*, ImageExts);

// 0x7124E8 | ?ExecPath@@3PADA
inline extern_var(0x7124E8, char*, ExecPath);

class string
{
public:
    // 0x40B7C0 | ??1string@@QAE@XZ
    inline ~string()
    {
        stub<member_func_t<void, string>>(0x40B7C0, this);
    }

    // 0x48F110 | ?Init@string@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, string, int32_t>>(0x48F110, this, arg1);
    }

    // 0x48F150 | ??0string@@QAE@ABV0@@Z
    inline string(class string const& arg1)
    {
        stub<member_func_t<void, string, class string const&>>(0x48F150, this, arg1);
    }

    // 0x499B10 | ??0string@@QAE@PBD@Z
    inline string(char const* arg1)
    {
        stub<member_func_t<void, string, char const*>>(0x499B10, this, arg1);
    }

    // 0x55AE40 | ??0string@@QAE@XZ
    inline string()
    {
        stub<member_func_t<void, string>>(0x55AE40, this);
    }

    // 0x55AE70 | ??Hstring@@QBE?AV0@PBD@Z
    inline class string operator+(char const* arg1)
    {
        return stub<member_func_t<class string, string, char const*>>(0x55AE70, this, arg1);
    }

    // 0x55B0D0 | ??Ystring@@QAEXPBD@Z
    inline void operator+=(char const* arg1)
    {
        return stub<member_func_t<void, string, char const*>>(0x55B0D0, this, arg1);
    }

    // 0x55B1C0 | ??Ystring@@QAEXD@Z
    inline void operator+=(char arg1)
    {
        return stub<member_func_t<void, string, char>>(0x55B1C0, this, arg1);
    }

    // 0x55B260 | ??Gstring@@QBE?AV0@PBD@Z
    inline class string operator-(char const* arg1)
    {
        return stub<member_func_t<class string, string, char const*>>(0x55B260, this, arg1);
    }

    // 0x55B3C0 | ??Zstring@@QAEXPBD@Z
    inline void operator-=(char const* arg1)
    {
        return stub<member_func_t<void, string, char const*>>(0x55B3C0, this, arg1);
    }

    // 0x55B470 | ?MinusEqual@string@@QAEXD@Z
    inline void MinusEqual(char arg1)
    {
        return stub<member_func_t<void, string, char>>(0x55B470, this, arg1);
    }

    // 0x55B5C0 | ?Contains@string@@QBEHAAV1@@Z
    inline int32_t Contains(class string& arg1)
    {
        return stub<member_func_t<int32_t, string, class string&>>(0x55B5C0, this, arg1);
    }

    // 0x55B660 | ?SaveName@string@@QAEXABV1@H00@Z
    inline void SaveName(class string const& arg1, int32_t arg2, class string const& arg3, class string const& arg4)
    {
        return stub<
            member_func_t<void, string, class string const&, int32_t, class string const&, class string const&>>(
            0x55B660, this, arg1, arg2, arg3, arg4);
    }

    // 0x55B830 | ?FindFile@string@@QAEHABV1@H00@Z
    inline int32_t FindFile(class string const& arg1, int32_t arg2, class string const& arg3, class string const& arg4)
    {
        return stub<
            member_func_t<int32_t, string, class string const&, int32_t, class string const&, class string const&>>(
            0x55B830, this, arg1, arg2, arg3, arg4);
    }

    // 0x55BBC0 | ?FileExists@string@@QBEHXZ
    inline int32_t FileExists()
    {
        return stub<member_func_t<int32_t, string>>(0x55BBC0, this);
    }

    // 0x55BBF0 | ?DirFileExt@string@@QBEXAAV1@00@Z
    inline void DirFileExt(class string& arg1, class string& arg2, class string& arg3)
    {
        return stub<member_func_t<void, string, class string&, class string&, class string&>>(
            0x55BBF0, this, arg1, arg2, arg3);
    }

    // 0x55BE00 | ?CommaFile@string@@QBEHXZ
    inline int32_t CommaFile()
    {
        return stub<member_func_t<int32_t, string>>(0x55BE00, this);
    }

    // 0x55C000 | ?FileName@string@@QBE?AV1@XZ
    inline class string FileName()
    {
        return stub<member_func_t<class string, string>>(0x55C000, this);
    }

    // 0x55C160 | ?Extension@string@@QBE?AV1@XZ
    inline class string Extension()
    {
        return stub<member_func_t<class string, string>>(0x55C160, this);
    }

    // 0x55C2B0 | ?ChangeExtension@string@@QAEXABV1@@Z
    inline void ChangeExtension(class string const& arg1)
    {
        return stub<member_func_t<void, string, class string const&>>(0x55C2B0, this, arg1);
    }

    // 0x55C430 | ?RemoveExtension@string@@QAEXXZ
    inline void RemoveExtension()
    {
        return stub<member_func_t<void, string>>(0x55C430, this);
    }

    // 0x55C470 | ?ExpandEnvs@string@@QAEXXZ
    inline void ExpandEnvs()
    {
        return stub<member_func_t<void, string>>(0x55C470, this);
    }

    // 0x55C610 | ?SubString@string@@QBE?AV1@H@Z
    inline class string SubString(int32_t arg1)
    {
        return stub<member_func_t<class string, string, int32_t>>(0x55C610, this, arg1);
    }

    // 0x55C720 | ?NumSubStrings@string@@QBEHXZ
    inline int32_t NumSubStrings()
    {
        return stub<member_func_t<int32_t, string>>(0x55C720, this);
    }

    // 0x55C770 | ?IsNumeric@string@@QBEHXZ
    inline int32_t IsNumeric()
    {
        return stub<member_func_t<int32_t, string>>(0x55C770, this);
    }

    // 0x55CC80 | ??4string@@QAEXPBD@Z
    inline void operator=(char const* arg1)
    {
        return stub<member_func_t<void, string, char const*>>(0x55CC80, this, arg1);
    }

    // 0x55CCE0 | ??Hstring@@QBE?AV0@ABV0@@Z
    inline class string operator+(class string const& arg1)
    {
        return stub<member_func_t<class string, string, class string const&>>(0x55CCE0, this, arg1);
    }

    // 0x55CD10 | ??_Estring@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)
};

class StringArray
{
public:
    // 0x55C7C0 | ?Init@StringArray@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, StringArray, int32_t>>(0x55C7C0, this, arg1);
    }

    // 0x55C830 | ?Delete@StringArray@@QAEXXZ
    inline void Delete()
    {
        return stub<member_func_t<void, StringArray>>(0x55C830, this);
    }

    // 0x55C890 | ?NewTable@StringArray@@AAEXH@Z
    inline void NewTable(int32_t arg1)
    {
        return stub<member_func_t<void, StringArray, int32_t>>(0x55C890, this, arg1);
    }

    // 0x55C900 | ??AStringArray@@QAEAAVstring@@H@Z
    inline class string& operator[](int32_t arg1)
    {
        return stub<member_func_t<class string&, StringArray, int32_t>>(0x55C900, this, arg1);
    }

    // 0x55C9B0 | ??4StringArray@@QAEXAAV0@@Z
    inline void operator=(class StringArray& arg1)
    {
        return stub<member_func_t<void, StringArray, class StringArray&>>(0x55C9B0, this, arg1);
    }

    // 0x55CB50 | ?BlockCopy@StringArray@@QAEXAAV1@@Z
    inline void BlockCopy(class StringArray& arg1)
    {
        return stub<member_func_t<void, StringArray, class StringArray&>>(0x55CB50, this, arg1);
    }
};
