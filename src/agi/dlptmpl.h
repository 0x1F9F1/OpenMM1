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
    agi:dlptmpl

    0x53A2D0 | public: __thiscall DLPTemplate::DLPTemplate(char *) | ??0DLPTemplate@@QAE@PAD@Z
    0x53A320 | private: __thiscall DLPTemplate::~DLPTemplate(void) | ??1DLPTemplate@@AAE@XZ
    0x53A3C0 | public: void __thiscall DLPTemplate::Init(int,int,int) | ?Init@DLPTemplate@@QAEXHHH@Z
    0x53A4F0 | public: void __thiscall DLPTemplate::Save(class Stream *) | ?Save@DLPTemplate@@QAEXPAVStream@@@Z
    0x53A630 | public: void __thiscall DLPTemplate::Load(class Stream *) | ?Load@DLPTemplate@@QAEXPAVStream@@@Z
    0x53A980 | public: char * __thiscall DLPPatch::GetProp(char *) | ?GetProp@DLPPatch@@QAEPADPAD@Z
    0x53AA30 | public: void __thiscall DLPTemplate::InitRemap(class agiLib<class agiMtlParameters,class agiMtlDef> &,class agiLib<class agiTexParameters,class agiTexDef> &,class agiLib<class agiPhysParameters,class agiPhysDef> &) | ?InitRemap@DLPTemplate@@QAEXAAV?$agiLib@VagiMtlParameters@@VagiMtlDef@@@@AAV?$agiLib@VagiTexParameters@@VagiTexDef@@@@AAV?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@@Z
    0x53AB50 | public: int __thiscall DLPTemplate::Load(char *) | ?Load@DLPTemplate@@QAEHPAD@Z
    0x53AB90 | public: void __thiscall DLPTemplate::Print(class Stream *) | ?Print@DLPTemplate@@QAEXPAVStream@@@Z
    0x53AC80 | public: __thiscall DLPGroup::DLPGroup(void) | ??0DLPGroup@@QAE@XZ
    0x53ACA0 | public: __thiscall DLPGroup::DLPGroup(class DLPTemplate *,class DLPGroup *) | ??0DLPGroup@@QAE@PAVDLPTemplate@@PAV0@@Z
    0x53AE80 | public: __thiscall DLPGroup::~DLPGroup(void) | ??1DLPGroup@@QAE@XZ
    0x53AEB0 | public: void __thiscall DLPGroup::Load(class Stream *) | ?Load@DLPGroup@@QAEXPAVStream@@@Z
    0x53AF30 | public: void __thiscall DLPGroup::Save(class Stream *) | ?Save@DLPGroup@@QAEXPAVStream@@@Z
    0x53AFB0 | public: void __thiscall DLPGroup::Print(class Stream *) | ?Print@DLPGroup@@QAEXPAVStream@@@Z
    0x53B030 | public: void __thiscall DLPGroup::Init(int,int) | ?Init@DLPGroup@@QAEXHH@Z
    0x53B070 | public: void __thiscall DLPPatch::Load(class Stream *) | ?Load@DLPPatch@@QAEXPAVStream@@@Z
    0x53B170 | public: void __thiscall DLPPatch::Save(class Stream *) | ?Save@DLPPatch@@QAEXPAVStream@@@Z
    0x53B240 | public: void __thiscall DLPPatch::Print(class Stream *) | ?Print@DLPPatch@@QAEXPAVStream@@@Z
    0x53B300 | float __cdecl UnpackAngle(unsigned char) | ?UnpackAngle@@YAME@Z
    0x53B330 | void __cdecl UnpackNormal(class Vector3 &,unsigned short &) | ?UnpackNormal@@YAXAAVVector3@@AAG@Z
    0x53B390 | unsigned int __cdecl PackAngle(float) | ?PackAngle@@YAIM@Z
    0x53B3F0 | void __cdecl PackNormal(unsigned short &,class Vector3 &) | ?PackNormal@@YAXAAGAAVVector3@@@Z
    0x53B4C0 | public: void __thiscall DLPVertex::Load(class Stream *) | ?Load@DLPVertex@@QAEXPAVStream@@@Z
    0x53B590 | public: void __thiscall DLPVertex::Save(class Stream *) | ?Save@DLPVertex@@QAEXPAVStream@@@Z
    0x53B620 | public: class DLPGroup * __thiscall DLPTemplate::GroupExists(char *) | ?GroupExists@DLPTemplate@@QAEPAVDLPGroup@@PAD@Z
    0x53B6A0 | public: int __thiscall DLPTemplate::Restrict(char *) | ?Restrict@DLPTemplate@@QAEHPAD@Z
    0x53B7B0 | public: void __thiscall DLPTemplate::AddRef(void) | ?AddRef@DLPTemplate@@QAEXXZ
    0x53B7C0 | public: int __thiscall DLPTemplate::Release(void) | ?Release@DLPTemplate@@QAEHXZ
    0x53B7F0 | public: int __thiscall DLPTemplate::GetVertexCentroid(class Vector3 &,char *) | ?GetVertexCentroid@DLPTemplate@@QAEHAAVVector3@@PAD@Z
    0x53B920 | public: int __thiscall DLPTemplate::GetCentroid(class Vector3 &,char *) | ?GetCentroid@DLPTemplate@@QAEHAAVVector3@@PAD@Z
    0x53B9A0 | public: class Vector3 * __thiscall DLPTemplate::GetGroupVertex(char *) | ?GetGroupVertex@DLPTemplate@@QAEPAVVector3@@PAD@Z
    0x53B9F0 | public: int __thiscall DLPTemplate::BoundBox(class Vector3 &,class Vector3 &,char *) | ?BoundBox@DLPTemplate@@QAEHAAVVector3@@0PAD@Z
    0x53BC10 | public: void * __thiscall DLPGroup::`vector deleting destructor'(unsigned int) | ??_EDLPGroup@@QAEPAXI@Z
    0x53BC70 | public: void * __thiscall DLPPatch::`vector deleting destructor'(unsigned int) | ??_EDLPPatch@@QAEPAXI@Z
    0x53BCE0 | public: __thiscall agiLib<class agiMtlParameters,class agiMtlDef>::~agiLib<class agiMtlParameters,class agiMtlDef>(void) | ??1?$agiLib@VagiMtlParameters@@VagiMtlDef@@@@QAE@XZ
    0x53BD80 | public: int __thiscall agiLib<class agiMtlParameters,class agiMtlDef>::Add(class agiMtlParameters &) | ?Add@?$agiLib@VagiMtlParameters@@VagiMtlDef@@@@QAEHAAVagiMtlParameters@@@Z
    0x53BEE0 | public: __thiscall agiLib<class agiTexParameters,class agiTexDef>::~agiLib<class agiTexParameters,class agiTexDef>(void) | ??1?$agiLib@VagiTexParameters@@VagiTexDef@@@@QAE@XZ
    0x53BF80 | public: int __thiscall agiLib<class agiPhysParameters,class agiPhysDef>::Add(class agiPhysParameters &) | ?Add@?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@QAEHAAVagiPhysParameters@@@Z
    0x53C0C0 | public: void __thiscall agiLib<class agiMtlParameters,class agiMtlDef>::Kill(void) | ?Kill@?$agiLib@VagiMtlParameters@@VagiMtlDef@@@@QAEXXZ
    0x53C110 | public: void __thiscall agiLib<class agiMtlParameters,class agiMtlDef>::Init(int) | ?Init@?$agiLib@VagiMtlParameters@@VagiMtlDef@@@@QAEXH@Z
    0x53C1D0 | public: void __thiscall agiLib<class agiTexParameters,class agiTexDef>::Kill(void) | ?Kill@?$agiLib@VagiTexParameters@@VagiTexDef@@@@QAEXXZ
    0x53C220 | public: void __thiscall agiLib<class agiTexParameters,class agiTexDef>::Init(int) | ?Init@?$agiLib@VagiTexParameters@@VagiTexDef@@@@QAEXH@Z
    0x53C2E0 | public: __thiscall DLPPatch::DLPPatch(void) | ??0DLPPatch@@QAE@XZ
    0x53C2F0 | public: __thiscall DLPPatch::~DLPPatch(void) | ??1DLPPatch@@QAE@XZ
    0x706608 | class HashTable DLPTemplateHash | ?DLPTemplateHash@@3VHashTable@@A
*/

// 0x53B300 | ?UnpackAngle@@YAME@Z
inline float UnpackAngle(uint8_t arg1)
{
    return stub<cdecl_t<float, uint8_t>>(0x53B300, arg1);
}

// 0x53B330 | ?UnpackNormal@@YAXAAVVector3@@AAG@Z
inline void UnpackNormal(class Vector3& arg1, uint16_t& arg2)
{
    return stub<cdecl_t<void, class Vector3&, uint16_t&>>(0x53B330, arg1, arg2);
}

// 0x53B390 | ?PackAngle@@YAIM@Z
inline uint32_t PackAngle(float arg1)
{
    return stub<cdecl_t<uint32_t, float>>(0x53B390, arg1);
}

// 0x53B3F0 | ?PackNormal@@YAXAAGAAVVector3@@@Z
inline void PackNormal(uint16_t& arg1, class Vector3& arg2)
{
    return stub<cdecl_t<void, uint16_t&, class Vector3&>>(0x53B3F0, arg1, arg2);
}

// 0x706608 | ?DLPTemplateHash@@3VHashTable@@A
inline extern_var(0x706608, class HashTable, DLPTemplateHash);

class DLPTemplate
{
public:
    // 0x53A2D0 | ??0DLPTemplate@@QAE@PAD@Z
    inline DLPTemplate(char* arg1)
    {
        // stub<member_func_t<void, DLPTemplate, char*>>(0x53A2D0, this, arg1);

        unimplemented();
    }

    // 0x53A320 | ??1DLPTemplate@@AAE@XZ
    inline ~DLPTemplate()
    {
        stub<member_func_t<void, DLPTemplate>>(0x53A320, this);
    }

    // 0x53A3C0 | ?Init@DLPTemplate@@QAEXHHH@Z
    inline void Init(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, DLPTemplate, int32_t, int32_t, int32_t>>(0x53A3C0, this, arg1, arg2, arg3);
    }

    // 0x53A4F0 | ?Save@DLPTemplate@@QAEXPAVStream@@@Z
    inline void Save(class Stream* arg1)
    {
        return stub<member_func_t<void, DLPTemplate, class Stream*>>(0x53A4F0, this, arg1);
    }

    // 0x53A630 | ?Load@DLPTemplate@@QAEXPAVStream@@@Z
    inline void Load(class Stream* arg1)
    {
        return stub<member_func_t<void, DLPTemplate, class Stream*>>(0x53A630, this, arg1);
    }

    // 0x53AA30 | ?InitRemap@DLPTemplate@@QAEXAAV?$agiLib@VagiMtlParameters@@VagiMtlDef@@@@AAV?$agiLib@VagiTexParameters@@VagiTexDef@@@@AAV?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@@Z
    inline void InitRemap(class agiLib<class agiMtlParameters, class agiMtlDef>& arg1,
        class agiLib<class agiTexParameters, class agiTexDef>& arg2,
        class agiLib<class agiPhysParameters, class agiPhysDef>& arg3)
    {
        return stub<member_func_t<void, DLPTemplate, class agiLib<class agiMtlParameters, class agiMtlDef>&,
            class agiLib<class agiTexParameters, class agiTexDef>&,
            class agiLib<class agiPhysParameters, class agiPhysDef>&>>(0x53AA30, this, arg1, arg2, arg3);
    }

    // 0x53AB50 | ?Load@DLPTemplate@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, DLPTemplate, char*>>(0x53AB50, this, arg1);
    }

    // 0x53AB90 | ?Print@DLPTemplate@@QAEXPAVStream@@@Z
    inline void Print(class Stream* arg1)
    {
        return stub<member_func_t<void, DLPTemplate, class Stream*>>(0x53AB90, this, arg1);
    }

    // 0x53B620 | ?GroupExists@DLPTemplate@@QAEPAVDLPGroup@@PAD@Z
    inline class DLPGroup* GroupExists(char* arg1)
    {
        return stub<member_func_t<class DLPGroup*, DLPTemplate, char*>>(0x53B620, this, arg1);
    }

    // 0x53B6A0 | ?Restrict@DLPTemplate@@QAEHPAD@Z
    inline int32_t Restrict(char* arg1)
    {
        return stub<member_func_t<int32_t, DLPTemplate, char*>>(0x53B6A0, this, arg1);
    }

    // 0x53B7B0 | ?AddRef@DLPTemplate@@QAEXXZ
    inline void AddRef()
    {
        return stub<member_func_t<void, DLPTemplate>>(0x53B7B0, this);
    }

    // 0x53B7C0 | ?Release@DLPTemplate@@QAEHXZ
    inline int32_t Release()
    {
        return stub<member_func_t<int32_t, DLPTemplate>>(0x53B7C0, this);
    }

    // 0x53B7F0 | ?GetVertexCentroid@DLPTemplate@@QAEHAAVVector3@@PAD@Z
    inline int32_t GetVertexCentroid(class Vector3& arg1, char* arg2)
    {
        return stub<member_func_t<int32_t, DLPTemplate, class Vector3&, char*>>(0x53B7F0, this, arg1, arg2);
    }

    // 0x53B920 | ?GetCentroid@DLPTemplate@@QAEHAAVVector3@@PAD@Z
    inline int32_t GetCentroid(class Vector3& arg1, char* arg2)
    {
        return stub<member_func_t<int32_t, DLPTemplate, class Vector3&, char*>>(0x53B920, this, arg1, arg2);
    }

    // 0x53B9A0 | ?GetGroupVertex@DLPTemplate@@QAEPAVVector3@@PAD@Z
    inline class Vector3* GetGroupVertex(char* arg1)
    {
        return stub<member_func_t<class Vector3*, DLPTemplate, char*>>(0x53B9A0, this, arg1);
    }

    // 0x53B9F0 | ?BoundBox@DLPTemplate@@QAEHAAVVector3@@0PAD@Z
    inline int32_t BoundBox(class Vector3& arg1, class Vector3& arg2, char* arg3)
    {
        return stub<member_func_t<int32_t, DLPTemplate, class Vector3&, class Vector3&, char*>>(
            0x53B9F0, this, arg1, arg2, arg3);
    }
};

class agiLib<class agiMtlParameters, class agiMtlDef>
{
public:
    // 0x53BCE0 | ??1?$agiLib@VagiMtlParameters@@VagiMtlDef@@@@QAE@XZ
    inline ~agiLib<class agiMtlParameters, class agiMtlDef>()
    {
        stub<member_func_t<void, agiLib<class agiMtlParameters, class agiMtlDef>>>(0x53BCE0, this);
    }

    // 0x53BD80 | ?Add@?$agiLib@VagiMtlParameters@@VagiMtlDef@@@@QAEHAAVagiMtlParameters@@@Z
    inline int32_t Add(class agiMtlParameters& arg1)
    {
        return stub<member_func_t<int32_t, agiLib<class agiMtlParameters, class agiMtlDef>, class agiMtlParameters&>>(
            0x53BD80, this, arg1);
    }

    // 0x53C0C0 | ?Kill@?$agiLib@VagiMtlParameters@@VagiMtlDef@@@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, agiLib<class agiMtlParameters, class agiMtlDef>>>(0x53C0C0, this);
    }

    // 0x53C110 | ?Init@?$agiLib@VagiMtlParameters@@VagiMtlDef@@@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, agiLib<class agiMtlParameters, class agiMtlDef>, int32_t>>(
            0x53C110, this, arg1);
    }

    // 0x53DA60 | ??0?$agiLib@VagiMtlParameters@@VagiMtlDef@@@@QAE@XZ
    inline agiLib<class agiMtlParameters, class agiMtlDef>()
    {
        stub<member_func_t<void, agiLib<class agiMtlParameters, class agiMtlDef>>>(0x53DA60, this);
    }
};

class agiLib<class agiTexParameters, class agiTexDef>
{
public:
    // 0x485470 | ?Add@?$agiLib@VagiTexParameters@@VagiTexDef@@@@QAEHAAVagiTexParameters@@@Z
    inline int32_t Add(class agiTexParameters& arg1)
    {
        return stub<member_func_t<int32_t, agiLib<class agiTexParameters, class agiTexDef>, class agiTexParameters&>>(
            0x485470, this, arg1);
    }

    // 0x53BEE0 | ??1?$agiLib@VagiTexParameters@@VagiTexDef@@@@QAE@XZ
    inline ~agiLib<class agiTexParameters, class agiTexDef>()
    {
        stub<member_func_t<void, agiLib<class agiTexParameters, class agiTexDef>>>(0x53BEE0, this);
    }

    // 0x53C1D0 | ?Kill@?$agiLib@VagiTexParameters@@VagiTexDef@@@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, agiLib<class agiTexParameters, class agiTexDef>>>(0x53C1D0, this);
    }

    // 0x53C220 | ?Init@?$agiLib@VagiTexParameters@@VagiTexDef@@@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, agiLib<class agiTexParameters, class agiTexDef>, int32_t>>(
            0x53C220, this, arg1);
    }

    // 0x53C730 | ??0?$agiLib@VagiTexParameters@@VagiTexDef@@@@QAE@XZ
    inline agiLib<class agiTexParameters, class agiTexDef>()
    {
        stub<member_func_t<void, agiLib<class agiTexParameters, class agiTexDef>>>(0x53C730, this);
    }
};

class DLPGroup
{
public:
    // 0x53AC80 | ??0DLPGroup@@QAE@XZ
    inline DLPGroup()
    {
        // stub<member_func_t<void, DLPGroup>>(0x53AC80, this);

        unimplemented();
    }

    // 0x53ACA0 | ??0DLPGroup@@QAE@PAVDLPTemplate@@PAV0@@Z
    inline DLPGroup(class DLPTemplate* arg1, class DLPGroup* arg2)
    {
        // stub<member_func_t<void, DLPGroup, class DLPTemplate*, class DLPGroup*>>(0x53ACA0, this, arg1, arg2);

        unimplemented();
    }

    // 0x53AE80 | ??1DLPGroup@@QAE@XZ
    inline ~DLPGroup()
    {
        stub<member_func_t<void, DLPGroup>>(0x53AE80, this);
    }

    // 0x53AEB0 | ?Load@DLPGroup@@QAEXPAVStream@@@Z
    inline void Load(class Stream* arg1)
    {
        return stub<member_func_t<void, DLPGroup, class Stream*>>(0x53AEB0, this, arg1);
    }

    // 0x53AF30 | ?Save@DLPGroup@@QAEXPAVStream@@@Z
    inline void Save(class Stream* arg1)
    {
        return stub<member_func_t<void, DLPGroup, class Stream*>>(0x53AF30, this, arg1);
    }

    // 0x53AFB0 | ?Print@DLPGroup@@QAEXPAVStream@@@Z
    inline void Print(class Stream* arg1)
    {
        return stub<member_func_t<void, DLPGroup, class Stream*>>(0x53AFB0, this, arg1);
    }

    // 0x53B030 | ?Init@DLPGroup@@QAEXHH@Z
    inline void Init(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, DLPGroup, int32_t, int32_t>>(0x53B030, this, arg1, arg2);
    }

    // 0x53BC10 | ??_EDLPGroup@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)
};

struct DLPPatch
{
public:
    // 0x53A980 | ?GetProp@DLPPatch@@QAEPADPAD@Z
    inline char* GetProp(char* arg1)
    {
        return stub<member_func_t<char*, DLPPatch, char*>>(0x53A980, this, arg1);
    }

    // 0x53B070 | ?Load@DLPPatch@@QAEXPAVStream@@@Z
    inline void Load(class Stream* arg1)
    {
        return stub<member_func_t<void, DLPPatch, class Stream*>>(0x53B070, this, arg1);
    }

    // 0x53B170 | ?Save@DLPPatch@@QAEXPAVStream@@@Z
    inline void Save(class Stream* arg1)
    {
        return stub<member_func_t<void, DLPPatch, class Stream*>>(0x53B170, this, arg1);
    }

    // 0x53B240 | ?Print@DLPPatch@@QAEXPAVStream@@@Z
    inline void Print(class Stream* arg1)
    {
        return stub<member_func_t<void, DLPPatch, class Stream*>>(0x53B240, this, arg1);
    }

    // 0x53BC70 | ??_EDLPPatch@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x53C2E0 | ??0DLPPatch@@QAE@XZ
    inline DLPPatch()
    {
        // stub<member_func_t<void, DLPPatch>>(0x53C2E0, this);

        unimplemented();
    }

    // 0x53C2F0 | ??1DLPPatch@@QAE@XZ
    inline ~DLPPatch()
    {
        stub<member_func_t<void, DLPPatch>>(0x53C2F0, this);
    }
};

struct DLPVertex
{
public:
    // 0x53B4C0 | ?Load@DLPVertex@@QAEXPAVStream@@@Z
    inline void Load(class Stream* arg1)
    {
        return stub<member_func_t<void, DLPVertex, class Stream*>>(0x53B4C0, this, arg1);
    }

    // 0x53B590 | ?Save@DLPVertex@@QAEXPAVStream@@@Z
    inline void Save(class Stream* arg1)
    {
        return stub<member_func_t<void, DLPVertex, class Stream*>>(0x53B590, this, arg1);
    }
};
