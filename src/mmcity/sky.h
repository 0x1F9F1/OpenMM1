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
    mmcity:sky

    0x48A980 | public: __thiscall mmSky::mmSky(void) | ??0mmSky@@QAE@XZ
    0x48A9C0 | public: __thiscall mmSky::~mmSky(void) | ??1mmSky@@QAE@XZ
    0x48AA00 | public: void __thiscall mmSky::Init(char *) | ?Init@mmSky@@QAEXPAD@Z
    0x48AA30 | public: void __thiscall mmSky::SetTexture(class agiTexDef *) | ?SetTexture@mmSky@@QAEXPAVagiTexDef@@@Z
    0x48AA50 | public: void __thiscall mmSky::Draw(class Matrix34 &) | ?Draw@mmSky@@QAEXAAVMatrix34@@@Z
    0x5AE30C | public: static unsigned int mmSky::Color | ?Color@mmSky@@2IA
    0x5AE310 | float SkyScale | ?SkyScale@@3MA
    0x667A34 | private: static int mmSky::DoFlash | ?DoFlash@mmSky@@0HA
    0x667A38 | class agiTexDef * FlashTex | ?FlashTex@@3PAVagiTexDef@@A
    0x667A3C | private: static class mmSky * mmSky::Instance | ?Instance@mmSky@@0PAV1@A
*/

#include "hooking.h"

// 0x5AE310 | ?SkyScale@@3MA
inline extern_var(0x5AE310, float, SkyScale);

// 0x667A38 | ?FlashTex@@3PAVagiTexDef@@A
inline extern_var(0x667A38, class agiTexDef*, FlashTex);

class mmSky
{
public:
    // 0x48A980 | ??0mmSky@@QAE@XZ
    inline mmSky()
    {
        stub<member_func_t<void, mmSky>>(0x48A980, this);
    }

    // 0x48A9C0 | ??1mmSky@@QAE@XZ
    inline ~mmSky()
    {
        stub<member_func_t<void, mmSky>>(0x48A9C0, this);
    }

    // 0x48AA00 | ?Init@mmSky@@QAEXPAD@Z
    inline void Init(char* arg1)
    {
        return stub<member_func_t<void, mmSky, char*>>(0x48AA00, this, arg1);
    }

    // 0x48AA30 | ?SetTexture@mmSky@@QAEXPAVagiTexDef@@@Z
    inline void SetTexture(class agiTexDef* arg1)
    {
        return stub<member_func_t<void, mmSky, class agiTexDef*>>(0x48AA30, this, arg1);
    }

    // 0x48AA50 | ?Draw@mmSky@@QAEXAAVMatrix34@@@Z
    inline void Draw(class Matrix34& arg1)
    {
        return stub<member_func_t<void, mmSky, class Matrix34&>>(0x48AA50, this, arg1);
    }

    // 0x5AE30C | ?Color@mmSky@@2IA
    static inline extern_var(0x5AE30C, uint32_t, Color);

    // 0x667A34 | ?DoFlash@mmSky@@0HA
    static inline extern_var(0x667A34, int32_t, DoFlash);

    // 0x667A3C | ?Instance@mmSky@@0PAV1@A
    static inline extern_var(0x667A3C, class mmSky*, Instance);
};
