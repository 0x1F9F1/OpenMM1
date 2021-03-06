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
    mmwidget:mstore

    0x4A03A0 | public: __thiscall MArray::MArray(void) | ??0MArray@@QAE@XZ
    0x4A03B0 | public: __thiscall MArray::~MArray(void) | ??1MArray@@QAE@XZ
    0x4A03C0 | public: void __thiscall MArray::Init(int) | ?Init@MArray@@QAEXH@Z
    0x4A0400 | public: void __thiscall MArray::Write(char *) | ?Write@MArray@@QAEXPAD@Z
    0x4A0710 | public: void __thiscall MArray::Flush(void) | ?Flush@MArray@@QAEXXZ
    0x4A0720 | public: void __thiscall MArray::Read(char *) | ?Read@MArray@@QAEXPAD@Z
    0x4A08E0 | public: void __thiscall MArray::AddMenuData(int,class Vector4 &,char *) | ?AddMenuData@MArray@@QAEXHAAVVector4@@PAD@Z
    0x4A0950 | public: int __thiscall MArray::RetrieveMenuData(int,float &,float &,float &,float &) | ?RetrieveMenuData@MArray@@QAEHHAAM000@Z
*/

struct MArray
{
public:
    // 0x4A03A0 | ??0MArray@@QAE@XZ
    inline MArray()
    {
        // stub<member_func_t<void, MArray>>(0x4A03A0, this);

        unimplemented();
    }

    // 0x4A03B0 | ??1MArray@@QAE@XZ
    inline ~MArray()
    {
        stub<member_func_t<void, MArray>>(0x4A03B0, this);
    }

    // 0x4A03C0 | ?Init@MArray@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, MArray, int32_t>>(0x4A03C0, this, arg1);
    }

    // 0x4A0400 | ?Write@MArray@@QAEXPAD@Z
    inline void Write(char* arg1)
    {
        return stub<member_func_t<void, MArray, char*>>(0x4A0400, this, arg1);
    }

    // 0x4A0710 | ?Flush@MArray@@QAEXXZ
    inline void Flush()
    {
        return stub<member_func_t<void, MArray>>(0x4A0710, this);
    }

    // 0x4A0720 | ?Read@MArray@@QAEXPAD@Z
    inline void Read(char* arg1)
    {
        return stub<member_func_t<void, MArray, char*>>(0x4A0720, this, arg1);
    }

    // 0x4A08E0 | ?AddMenuData@MArray@@QAEXHAAVVector4@@PAD@Z
    inline void AddMenuData(int32_t arg1, class Vector4& arg2, char* arg3)
    {
        return stub<member_func_t<void, MArray, int32_t, class Vector4&, char*>>(0x4A08E0, this, arg1, arg2, arg3);
    }

    // 0x4A0950 | ?RetrieveMenuData@MArray@@QAEHHAAM000@Z
    inline int32_t RetrieveMenuData(int32_t arg1, float& arg2, float& arg3, float& arg4, float& arg5)
    {
        return stub<member_func_t<int32_t, MArray, int32_t, float&, float&, float&, float&>>(
            0x4A0950, this, arg1, arg2, arg3, arg4, arg5);
    }
};
