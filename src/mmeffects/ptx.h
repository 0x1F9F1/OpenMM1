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
    mmeffects:ptx

    0x4F1AD0 | public: __thiscall asParticles::asParticles(void) | ??0asParticles@@QAE@XZ
    0x4F1B40 | public: virtual __thiscall asParticles::~asParticles(void) | ??1asParticles@@UAE@XZ
    0x4F1BC0 | public: void __thiscall asParticles::Init(int,int,int,int,struct agiMeshCardVertex *) | ?Init@asParticles@@QAEXHHHHPAUagiMeshCardVertex@@@Z
    0x4F1C30 | public: virtual void __thiscall asParticles::Reset(void) | ?Reset@asParticles@@UAEXXZ
    0x4F1C40 | public: void __thiscall asParticles::SetTexture(class agiTexDef *) | ?SetTexture@asParticles@@QAEXPAVagiTexDef@@@Z
    0x4F1C70 | public: void __thiscall asParticles::SetTexture(char *) | ?SetTexture@asParticles@@QAEXPAD@Z
    0x4F1CC0 | public: virtual void __thiscall asParticles::Update(void) | ?Update@asParticles@@UAEXXZ
    0x4F2010 | public: void __thiscall asParticles::Blast(int,class asBirthRule *) | ?Blast@asParticles@@QAEXHPAVasBirthRule@@@Z
    0x4F20B0 | int __cdecl cmpPtx(void const *,void const *) | ?cmpPtx@@YAHPBX0@Z
    0x4F20D0 | public: virtual void __thiscall asParticles::Cull(void) | ?Cull@asParticles@@UAEXXZ
    0x4F2170 | public: void __thiscall asParticles::AddWidgets(class Bank *) | ?AddWidgets@asParticles@@QAEXPAVBank@@@Z
    0x4F2180 | public: static void __cdecl asParticles::DeclareFields(void) | ?DeclareFields@asParticles@@SAXXZ
    0x4F22E0 | public: virtual class MetaClass * __thiscall asParticles::GetClass(void) | ?GetClass@asParticles@@UAEPAVMetaClass@@XZ
    0x4F22F0 | public: virtual void * __thiscall asParticles::`vector deleting destructor'(unsigned int) | ??_EasParticles@@UAEPAXI@Z
    0x595098 | const asParticles::`vftable' | ??_7asParticles@@6B@
    0x67B878 | class MetaClass asParticlesMetaClass | ?asParticlesMetaClass@@3VMetaClass@@A
    0x67B8A0 | int EnablePtxSorting | ?EnablePtxSorting@@3HA
    0x4F21D0 | void * __cdecl new_asParticles(int) | ?new_asParticles@@YAPAXH@Z
    0x4F2290 | void __cdecl delete_asParticles(void *,int) | ?delete_asParticles@@YAXPAXH@Z
*/

// 0x4F20B0 | ?cmpPtx@@YAHPBX0@Z
inline int32_t cmpPtx(void const* arg1, void const* arg2)
{
    return stub<cdecl_t<int32_t, void const*, void const*>>(0x4F20B0, arg1, arg2);
}

// 0x67B878 | ?asParticlesMetaClass@@3VMetaClass@@A
inline extern_var(0x67B878, class MetaClass, asParticlesMetaClass);

// 0x67B8A0 | ?EnablePtxSorting@@3HA
inline extern_var(0x67B8A0, int32_t, EnablePtxSorting);

// 0x4F21D0 | ?new_asParticles@@YAPAXH@Z
inline void* new_asParticles(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4F21D0, arg1);
}

// 0x4F2290 | ?delete_asParticles@@YAXPAXH@Z
inline void delete_asParticles(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4F2290, arg1, arg2);
}

struct asParticles : asNode
{
public:
    // asParticles::`vftable' @ 0x595098

    // 0x4F1AD0 | ??0asParticles@@QAE@XZ
    inline asParticles()
    {
        // stub<member_func_t<void, asParticles>>(0x4F1AD0, this);

        unimplemented();
    }

    // 0x4F1BC0 | ?Init@asParticles@@QAEXHHHHPAUagiMeshCardVertex@@@Z
    inline void Init(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, struct agiMeshCardVertex* arg5)
    {
        return stub<member_func_t<void, asParticles, int32_t, int32_t, int32_t, int32_t, struct agiMeshCardVertex*>>(
            0x4F1BC0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4F1C40 | ?SetTexture@asParticles@@QAEXPAVagiTexDef@@@Z
    inline void SetTexture(class agiTexDef* arg1)
    {
        return stub<member_func_t<void, asParticles, class agiTexDef*>>(0x4F1C40, this, arg1);
    }

    // 0x4F1C70 | ?SetTexture@asParticles@@QAEXPAD@Z
    inline void SetTexture(char* arg1)
    {
        return stub<member_func_t<void, asParticles, char*>>(0x4F1C70, this, arg1);
    }

    // 0x4F2010 | ?Blast@asParticles@@QAEXHPAVasBirthRule@@@Z
    inline void Blast(int32_t arg1, class asBirthRule* arg2)
    {
        return stub<member_func_t<void, asParticles, int32_t, class asBirthRule*>>(0x4F2010, this, arg1, arg2);
    }

    // 0x4F2170 | ?AddWidgets@asParticles@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, asParticles, class Bank*>>(0x4F2170, this, arg1);
    }

    // 0x4F2180 | ?DeclareFields@asParticles@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4F2180);
    }

    // 0x4F1B40 | ??1asParticles@@UAE@XZ
    inline ~asParticles() override = 0
    {
        // stub<member_func_t<void, asParticles>>(0x4F1B40, this);

        unimplemented();
    }

    // 0x4F22E0 | ?GetClass@asParticles@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asParticles>>(0x4F22E0, this);
    }

    // 0x4F20D0 | ?Cull@asParticles@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, asParticles>>(0x4F20D0, this);
    }

    // 0x4F1CC0 | ?Update@asParticles@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asParticles>>(0x4F1CC0, this);
    }

    // 0x4F1C30 | ?Reset@asParticles@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, asParticles>>(0x4F1C30, this);
    }
};
