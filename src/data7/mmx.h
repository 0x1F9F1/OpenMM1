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
    data7:mmx

    0x55DD70 | public: __thiscall initHaveMMX::initHaveMMX(void) | ??0initHaveMMX@@QAE@XZ
    0x7125B8 | int UseKNI | ?UseKNI@@3HA
    0x7125BC | int UseMMX | ?UseMMX@@3HA
    0x7125C0 | int HavePPro | ?HavePPro@@3HA
    0x7125C4 | int HaveKNI | ?HaveKNI@@3HA
    0x7125C8 | int HaveMMX | ?HaveMMX@@3HA
    0x55DD60 | int __cdecl cpuid(void) | ?cpuid@@YAHXZ
*/

// 0x7125B8 | ?UseKNI@@3HA
inline extern_var(0x7125B8, int32_t, UseKNI);

// 0x7125BC | ?UseMMX@@3HA
inline extern_var(0x7125BC, int32_t, UseMMX);

// 0x7125C0 | ?HavePPro@@3HA
inline extern_var(0x7125C0, int32_t, HavePPro);

// 0x7125C4 | ?HaveKNI@@3HA
inline extern_var(0x7125C4, int32_t, HaveKNI);

// 0x7125C8 | ?HaveMMX@@3HA
inline extern_var(0x7125C8, int32_t, HaveMMX);

// 0x55DD60 | ?cpuid@@YAHXZ
inline int32_t cpuid()
{
    return stub<cdecl_t<int32_t>>(0x55DD60);
}

struct initHaveMMX
{
public:
    // 0x55DD70 | ??0initHaveMMX@@QAE@XZ
    inline initHaveMMX()
    {
        // stub<member_func_t<void, initHaveMMX>>(0x55DD70, this);

        unimplemented();
    }
};
