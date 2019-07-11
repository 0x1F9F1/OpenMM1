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
    agi:palette

    0x53DFB0 | public: __thiscall agiPalette::agiPalette(void) | ??0agiPalette@@QAE@XZ
    0x53DFD0 | public: void __thiscall agiPalette::Kill(void) | ?Kill@agiPalette@@QAEXXZ
    0x53E010 | public: void __thiscall agiPalette::Cube(void) | ?Cube@agiPalette@@QAEXXZ
    0x53E0A0 | public: void __thiscall agiPalette::Load(char *) | ?Load@agiPalette@@QAEXPAD@Z
    0x53E230 | public: unsigned int __thiscall agiPalette::GetColor(struct agiRgba) | ?GetColor@agiPalette@@QAEIUagiRgba@@@Z
    0x53E2C0 | public: unsigned int __thiscall agiPalette::FindColor(struct agiRgba) | ?FindColor@agiPalette@@QAEIUagiRgba@@@Z
    0x70E720 | class agiPalette agiPal | ?agiPal@@3VagiPalette@@A
*/

#include "hooking.h"

#include "rgba.h"

// 0x70E720 | ?agiPal@@3VagiPalette@@A
inline extern_var(0x70E720, class agiPalette, agiPal);

class agiPalette
{
public:
    uint32_t m_Colors[256] {};
    uint32_t dword400 {1};
    uint32_t dword404 {1};
    uint32_t m_ColorCount {1};
    uint32_t m_ChangeCount {1};

    // 0x53DFB0 | ??0agiPalette@@QAE@XZ
    inline agiPalette()
    {}

    // 0x53DFD0 | ?Kill@agiPalette@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, agiPalette>>(0x53DFD0, this);
    }

    // 0x53E010 | ?Cube@agiPalette@@QAEXXZ
    inline void Cube()
    {
        return stub<member_func_t<void, agiPalette>>(0x53E010, this);
    }

    // 0x53E0A0 | ?Load@agiPalette@@QAEXPAD@Z
    inline void Load(char* arg1)
    {
        return stub<member_func_t<void, agiPalette, char*>>(0x53E0A0, this, arg1);
    }

    // 0x53E230 | ?GetColor@agiPalette@@QAEIUagiRgba@@@Z
    inline uint32_t GetColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiPalette, struct agiRgba>>(0x53E230, this, arg1);
    }

    // 0x53E2C0 | ?FindColor@agiPalette@@QAEIUagiRgba@@@Z
    inline uint32_t FindColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiPalette, struct agiRgba>>(0x53E2C0, this, arg1);
    }
};

check_size(agiPalette, 0x410);
