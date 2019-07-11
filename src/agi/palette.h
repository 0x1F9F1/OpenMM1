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

// agi:palette

#include "hooking.h"

// 0x70E720 | ?agiPal@@3VagiPalette@@A
inline extern_var(0x70E720, class agiPalette, agiPal);

class agiPalette
{
public:
    // 0x53DFB0 | ??0agiPalette@@QAE@XZ
    inline agiPalette()
    {
        stub<member_func_t<void, agiPalette>>(0x53DFB0, this);
    }

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
