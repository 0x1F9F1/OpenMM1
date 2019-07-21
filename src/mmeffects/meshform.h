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
    mmeffects:meshform

    0x4F18C0 | public: __thiscall asMeshSetForm::asMeshSetForm(void) | ??0asMeshSetForm@@QAE@XZ
    0x4F18E0 | public: void __thiscall asMeshSetForm::SetShape(char *,char *,class Vector3 *) | ?SetShape@asMeshSetForm@@QAEXPAD0PAVVector3@@@Z
    0x4F1920 | public: void __thiscall asMeshSetForm::SetZRead(int) | ?SetZRead@asMeshSetForm@@QAEXH@Z
    0x4F1940 | public: void __thiscall asMeshSetForm::SetZWrite(int) | ?SetZWrite@asMeshSetForm@@QAEXH@Z
    0x4F1960 | public: virtual void __thiscall asMeshSetForm::Update(void) | ?Update@asMeshSetForm@@UAEXXZ
    0x4F1980 | public: virtual void __thiscall asMeshSetForm::Cull(void) | ?Cull@asMeshSetForm@@UAEXXZ
    0x4F1A90 | public: virtual void * __thiscall asMeshSetForm::`scalar deleting destructor'(unsigned int) | ??_GasMeshSetForm@@UAEPAXI@Z
    0x4F1A90 | public: virtual void * __thiscall asMeshSetForm::`vector deleting destructor'(unsigned int) | ??_EasMeshSetForm@@UAEPAXI@Z
    0x4F1AC0 | public: virtual __thiscall asMeshSetForm::~asMeshSetForm(void) | ??1asMeshSetForm@@UAE@XZ
    0x595068 | const asMeshSetForm::`vftable' | ??_7asMeshSetForm@@6B@
    0x5B796C | public: static void (__cdecl* asMeshSetForm::Lighter)(unsigned char *,unsigned int *,unsigned int *,class agiMeshSet *) | ?Lighter@asMeshSetForm@@2P6AXPAEPAI1PAVagiMeshSet@@@ZA
    0x67B870 | public: static class agiTexDef * asMeshSetForm::SphMapTex | ?SphMapTex@asMeshSetForm@@2PAVagiTexDef@@A
*/

struct asMeshSetForm : asNode
{
public:
    // asMeshSetForm::`vftable' @ 0x595068

    // 0x4F18C0 | ??0asMeshSetForm@@QAE@XZ
    inline asMeshSetForm()
    {
        // stub<member_func_t<void, asMeshSetForm>>(0x4F18C0, this);

        unimplemented();
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
    inline ~asMeshSetForm() override = 0
    {
        // stub<member_func_t<void, asMeshSetForm>>(0x4F1AC0, this);

        unimplemented();
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
