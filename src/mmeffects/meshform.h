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

// mmeffects:meshform

#include "hooking.h"

struct asMeshSetForm : asNode
{
public:
    // asMeshSetForm::`vftable' @ 0x595068

    // 0x4F18C0 | ??0asMeshSetForm@@QAE@XZ
    inline asMeshSetForm()
    {
        stub<member_func_t<void, asMeshSetForm>>(0x4F18C0, this);
    }

    // 0x4F18E0 | ?SetShape@asMeshSetForm@@QAEXPAD0PAVVector3@@@Z
    inline void SetShape(char* arg1, char* arg2, class Vector3* arg3)
    {
        return stub<member_func_t<void, asMeshSetForm, char*, char*, class Vector3*>>(0x4F18E0, this, arg1, arg2, arg3);
    }

    // 0x4F1920 | ?SetZRead@asMeshSetForm@@QAEXH@Z
    inline void SetZRead(int32_t arg1)
    {
        return stub<member_func_t<void, asMeshSetForm, int32_t>>(0x4F1920, this, arg1);
    }

    // 0x4F1940 | ?SetZWrite@asMeshSetForm@@QAEXH@Z
    inline void SetZWrite(int32_t arg1)
    {
        return stub<member_func_t<void, asMeshSetForm, int32_t>>(0x4F1940, this, arg1);
    }

    // 0x5B796C | ?Lighter@asMeshSetForm@@2P6AXPAEPAI1PAVagiMeshSet@@@ZA
    static inline extern_var(0x5B796C, void(__cdecl*)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*), Lighter);

    // 0x67B870 | ?SphMapTex@asMeshSetForm@@2PAVagiTexDef@@A
    static inline extern_var(0x67B870, class agiTexDef*, SphMapTex);

    // 0x4F1AC0 | ??1asMeshSetForm@@UAE@XZ
    inline ~asMeshSetForm() override
    {
        stub<member_func_t<void, asMeshSetForm>>(0x4F1AC0, this);
    }

    // 0x4F1980 | ?Cull@asMeshSetForm@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, asMeshSetForm>>(0x4F1980, this);
    }

    // 0x4F1960 | ?Update@asMeshSetForm@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asMeshSetForm>>(0x4F1960, this);
    }
};
