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
    mmeffects:vehform

    0x4F3860 | public: __thiscall mmVehicleForm::mmVehicleForm(void) | ??0mmVehicleForm@@QAE@XZ
    0x4F38C0 | public: void __thiscall mmVehicleForm::SetShape(char *,char *,char *,class Vector3 *) | ?SetShape@mmVehicleForm@@QAEXPAD00PAVVector3@@@Z
    0x4F3930 | public: virtual void __thiscall mmVehicleForm::Update(void) | ?Update@mmVehicleForm@@UAEXXZ
    0x4F3950 | public: virtual void __thiscall mmVehicleForm::Cull(void) | ?Cull@mmVehicleForm@@UAEXXZ
    0x4F3AB0 | public: virtual void * __thiscall mmVehicleForm::`scalar deleting destructor'(unsigned int) | ??_GmmVehicleForm@@UAEPAXI@Z
    0x595128 | const mmVehicleForm::`vftable' | ??_7mmVehicleForm@@6B@
    0x5B7D34 | public: static void (__cdecl* mmVehicleForm::Lighter)(unsigned char *,unsigned int *,unsigned int *,class agiMeshSet *) | ?Lighter@mmVehicleForm@@2P6AXPAEPAI1PAVagiMeshSet@@@ZA
    0x67B8E0 | public: static class agiTexDef * mmVehicleForm::SphMapTex | ?SphMapTex@mmVehicleForm@@2PAVagiTexDef@@A
*/

#include "hooking.h"

struct mmVehicleForm : asNode
{
public:
    // mmVehicleForm::`vftable' @ 0x595128

    // 0x4F3860 | ??0mmVehicleForm@@QAE@XZ
    inline mmVehicleForm()
    {
        stub<member_func_t<void, mmVehicleForm>>(0x4F3860, this);
    }

    // 0x4F38C0 | ?SetShape@mmVehicleForm@@QAEXPAD00PAVVector3@@@Z
    inline void SetShape(char* arg1, char* arg2, char* arg3, class Vector3* arg4)
    {
        return stub<member_func_t<void, mmVehicleForm, char*, char*, char*, class Vector3*>>(
            0x4F38C0, this, arg1, arg2, arg3, arg4);
    }

    // 0x5B7D34 | ?Lighter@mmVehicleForm@@2P6AXPAEPAI1PAVagiMeshSet@@@ZA
    static inline extern_var(0x5B7D34, void(__cdecl*)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*), Lighter);

    // 0x67B8E0 | ?SphMapTex@mmVehicleForm@@2PAVagiTexDef@@A
    static inline extern_var(0x67B8E0, class agiTexDef*, SphMapTex);

    // 0x4912A0 | ??1mmVehicleForm@@UAE@XZ
    inline ~mmVehicleForm() override
    {
        stub<member_func_t<void, mmVehicleForm>>(0x4912A0, this);
    }

    // 0x4F3950 | ?Cull@mmVehicleForm@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmVehicleForm>>(0x4F3950, this);
    }

    // 0x4F3930 | ?Update@mmVehicleForm@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmVehicleForm>>(0x4F3930, this);
    }
};
