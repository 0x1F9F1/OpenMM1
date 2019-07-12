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
    mmcity:cullcity

    0x482B40 | public: __thiscall mmCullCity::mmCullCity(void) | ??0mmCullCity@@QAE@XZ
    0x482D60 | public: virtual __thiscall mmCullCity::~mmCullCity(void) | ??1mmCullCity@@UAE@XZ
    0x482F00 | public: short __thiscall mmCullCity::GetHitId(class Vector3 &) | ?GetHitId@mmCullCity@@QAEFAAVVector3@@@Z
    0x482F30 | private: virtual void __fastcall mmUpperInstance::Draw(int) | ?Draw@mmUpperInstance@@EAIXH@Z
    0x482F90 | public: __thiscall mmRunwayLight::mmRunwayLight(char *,class Vector3 &,class Vector3 &) | ??0mmRunwayLight@@QAE@PADAAVVector3@@1@Z
    0x483150 | public: virtual class Vector3 & __fastcall mmRunwayLight::GetPos(void) | ?GetPos@mmRunwayLight@@UAIAAVVector3@@XZ
    0x483160 | public: virtual void __fastcall mmRunwayLight::FromMatrix(class Matrix34 const &) | ?FromMatrix@mmRunwayLight@@UAIXABVMatrix34@@@Z
    0x483170 | public: virtual class Matrix34 & __fastcall mmRunwayLight::ToMatrix(class Matrix34 &) | ?ToMatrix@mmRunwayLight@@UAIAAVMatrix34@@AAV2@@Z
    0x4831A0 | public: virtual void __fastcall mmRunwayLight::Draw(int) | ?Draw@mmRunwayLight@@UAIXH@Z
    0x4832A0 | public: virtual float __fastcall mmRunwayLight::GetScale(void) | ?GetScale@mmRunwayLight@@UAIMXZ
    0x4832B0 | private: void __thiscall mmCullCity::AddInstance(int,char *,char *,int,class Vector3 *,class Vector3 *,class Vector3 *,float) | ?AddInstance@mmCullCity@@AAEXHPAD0HPAVVector3@@11M@Z
    0x483630 | public: void __thiscall mmCullCity::ReparentObject(class mmInstance *) | ?ReparentObject@mmCullCity@@QAEXPAVmmInstance@@@Z
    0x4836C0 | public: void __thiscall mmCullCity::Init(char *,class asCamera *) | ?Init@mmCullCity@@QAEXPADPAVasCamera@@@Z
    0x483BB0 | public: virtual void __thiscall mmCullCity::Reset(void) | ?Reset@mmCullCity@@UAEXXZ
    0x483C80 | public: void __thiscall mmCullCity::InitObjectDetail(void) | ?InitObjectDetail@mmCullCity@@QAEXXZ
    0x483CB0 | public: void __thiscall mmCullCity::LoadBangers(char *) | ?LoadBangers@mmCullCity@@QAEXPAD@Z
    0x483DD0 | public: void __thiscall mmCullCity::LoadFacades(char *) | ?LoadFacades@mmCullCity@@QAEXPAD@Z
    0x483EE0 | private: void __thiscall mmCullCity::InitSnowTextures(void) | ?InitSnowTextures@mmCullCity@@AAEXXZ
    0x4840D0 | private: void __thiscall mmCullCity::UpdateSnowTextures(void) | ?UpdateSnowTextures@mmCullCity@@AAEXXZ
    0x484370 | public: int __thiscall mmCullCity::IsPolyWater(class mmPolygon *) | ?IsPolyWater@mmCullCity@@QAEHPAVmmPolygon@@@Z
    0x4843B0 | public: virtual void __thiscall mmCullCity::Update(void) | ?Update@mmCullCity@@UAEXXZ
    0x4845F0 | public: virtual void __thiscall mmCullCity::Cull(void) | ?Cull@mmCullCity@@UAEXXZ
    0x484720 | public: void __thiscall mmCullCity::ToggleSky(void) | ?ToggleSky@mmCullCity@@QAEXXZ
    0x484730 | public: short __thiscall mmCullCity::GetRoomFlags(short) | ?GetRoomFlags@mmCullCity@@QAEFF@Z
    0x484770 | public: void __thiscall mmCullCity::RelightEverything(void) | ?RelightEverything@mmCullCity@@QAEXXZ
    0x4847D0 | void __cdecl fix_clip(void) | ?fix_clip@@YAXXZ
    0x484840 | void __cdecl fix_lighting(void) | ?fix_lighting@@YAXXZ
    0x4848E0 | private: void __thiscall mmCullCity::InitTimeOfDayAndWeather(void) | ?InitTimeOfDayAndWeather@mmCullCity@@AAEXXZ
    0x485220 | public: static void __cdecl mmCullCity::DeclareFields(void) | ?DeclareFields@mmCullCity@@SAXXZ
    0x485390 | public: virtual class MetaClass * __thiscall mmCullCity::GetClass(void) | ?GetClass@mmCullCity@@UAEPAVMetaClass@@XZ
    0x4853A0 | public: virtual void __thiscall mmRunwayLight::AddWidgets(class Bank *) | ?AddWidgets@mmRunwayLight@@UAEXPAVBank@@@Z
    0x4853B0 | public: virtual void * __thiscall mmRunwayLight::`vector deleting destructor'(unsigned int) | ??_EmmRunwayLight@@UAEPAXI@Z
    0x4853B0 | public: virtual void * __thiscall mmRunwayLight::`scalar deleting destructor'(unsigned int) | ??_GmmRunwayLight@@UAEPAXI@Z
    0x4853D0 | public: virtual __thiscall mmRunwayLight::~mmRunwayLight(void) | ??1mmRunwayLight@@UAE@XZ
    0x4853E0 | public: virtual void * __thiscall mmUpperInstance::`scalar deleting destructor'(unsigned int) | ??_GmmUpperInstance@@UAEPAXI@Z
    0x4853E0 | public: virtual void * __thiscall mmUpperInstance::`vector deleting destructor'(unsigned int) | ??_EmmUpperInstance@@UAEPAXI@Z
    0x485400 | public: virtual __thiscall mmUpperInstance::~mmUpperInstance(void) | ??1mmUpperInstance@@UAE@XZ
    0x485410 | public: virtual void * __thiscall mmCullCity::`vector deleting destructor'(unsigned int) | ??_EmmCullCity@@UAEPAXI@Z
    0x485470 | public: int __thiscall agiLib<class agiTexParameters,class agiTexDef>::Add(class agiTexParameters &) | ?Add@?$agiLib@VagiTexParameters@@VagiTexDef@@@@QAEHAAVagiTexParameters@@@Z
    0x485550 | public: virtual void * __thiscall mmShearInstance::`scalar deleting destructor'(unsigned int) | ??_GmmShearInstance@@UAEPAXI@Z
    0x485570 | public: virtual __thiscall mmShearInstance::~mmShearInstance(void) | ??1mmShearInstance@@UAE@XZ
    0x485580 | public: virtual void * __thiscall mmBuildingInstance::`scalar deleting destructor'(unsigned int) | ??_GmmBuildingInstance@@UAEPAXI@Z
    0x4855A0 | public: virtual __thiscall mmBuildingInstance::~mmBuildingInstance(void) | ??1mmBuildingInstance@@UAE@XZ
    0x4855B0 | public: virtual void * __thiscall mmUnhitBangerInstance::`vector deleting destructor'(unsigned int) | ??_EmmUnhitBangerInstance@@UAEPAXI@Z
    0x4855B0 | public: virtual void * __thiscall mmUnhitBangerInstance::`scalar deleting destructor'(unsigned int) | ??_GmmUnhitBangerInstance@@UAEPAXI@Z
    0x4855D0 | public: virtual __thiscall mmUnhitBangerInstance::~mmUnhitBangerInstance(void) | ??1mmUnhitBangerInstance@@UAE@XZ
    0x4855E0 | public: virtual void * __thiscall mmBangerManager::`vector deleting destructor'(unsigned int) | ??_EmmBangerManager@@UAEPAXI@Z
    0x4855E0 | public: virtual void * __thiscall mmBangerManager::`scalar deleting destructor'(unsigned int) | ??_GmmBangerManager@@UAEPAXI@Z
    0x485610 | public: virtual __thiscall mmBangerManager::~mmBangerManager(void) | ??1mmBangerManager@@UAE@XZ
    0x591C08 | const mmCullCity::`vftable' | ??_7mmCullCity@@6B@
    0x591C38 | const mmBangerManager::`vftable' | ??_7mmBangerManager@@6B@
    0x591C68 | const mmRunwayLight::`vftable' | ??_7mmRunwayLight@@6B@
    0x591CC8 | const mmUpperInstance::`vftable' | ??_7mmUpperInstance@@6B@
    0x591D28 | const mmBuildingInstance::`vftable' | ??_7mmBuildingInstance@@6B@
    0x591D88 | const mmShearInstance::`vftable' | ??_7mmShearInstance@@6B@
    0x591DE8 | const mmUnhitBangerInstance::`vftable' | ??_7mmUnhitBangerInstance@@6B@
    0x5AD110 | struct t_mmEnvSetup (* mmEnvSetup)[4] | ?mmEnvSetup@@3PAY03Ut_mmEnvSetup@@A
    0x5AD394 | float BoneScale | ?BoneScale@@3MA
    0x60B150 | float EnvVel | ?EnvVel@@3MA
    0x60B190 | int UsePixelFog | ?UsePixelFog@@3HA
    0x60B194 | private: static class mmCullCity * mmCullCity::Instance | ?Instance@mmCullCity@@0PAV1@A
    0x60B198 | class Vector3 PlaneFudge | ?PlaneFudge@@3VVector3@@A
    0x60B1A8 | class MetaClass mmCullCityMetaClass | ?mmCullCityMetaClass@@3VMetaClass@@A
    0x60B1D0 | float FadeConstant | ?FadeConstant@@3MA
    0x60B1D4 | public: static float mmRunwayLight::Phase | ?Phase@mmRunwayLight@@2MA
    0x60B1D8 | float FadeScale | ?FadeScale@@3MA
    0x60B1DC | int DisableUpper | ?DisableUpper@@3HA
    0x484F80 | void __cdecl fix_sun(void) | ?fix_sun@@YAXXZ
    0x484FF0 | void __cdecl fix_fill1(void) | ?fix_fill1@@YAXXZ
    0x485060 | void __cdecl fix_fill2(void) | ?fix_fill2@@YAXXZ
    0x4850D0 | void __cdecl parseFloat(float &) | ?parseFloat@@YAXAAM@Z
    0x485100 | void __cdecl parseVector3(class Vector3 &) | ?parseVector3@@YAXAAVVector3@@@Z
    0x485130 | void __cdecl parseRGB(unsigned int &) | ?parseRGB@@YAXAAI@Z
    0x4851A0 | void __cdecl parseARGB(unsigned int &) | ?parseARGB@@YAXAAI@Z
    0x485270 | void * __cdecl new_mmCullCity(int) | ?new_mmCullCity@@YAPAXH@Z
    0x485340 | void __cdecl delete_mmCullCity(void *,int) | ?delete_mmCullCity@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x4847D0 | ?fix_clip@@YAXXZ
inline void fix_clip()
{
    return stub<cdecl_t<void>>(0x4847D0);
}

// 0x484840 | ?fix_lighting@@YAXXZ
inline void fix_lighting()
{
    return stub<cdecl_t<void>>(0x484840);
}

// 0x5AD110 | ?mmEnvSetup@@3PAY03Ut_mmEnvSetup@@A
inline extern_var(0x5AD110, struct t_mmEnvSetup (*)[4], mmEnvSetup);

// 0x5AD394 | ?BoneScale@@3MA
inline extern_var(0x5AD394, float, BoneScale);

// 0x60B150 | ?EnvVel@@3MA
inline extern_var(0x60B150, float, EnvVel);

// 0x60B190 | ?UsePixelFog@@3HA
inline extern_var(0x60B190, int32_t, UsePixelFog);

// 0x60B198 | ?PlaneFudge@@3VVector3@@A
inline extern_var(0x60B198, class Vector3, PlaneFudge);

// 0x60B1A8 | ?mmCullCityMetaClass@@3VMetaClass@@A
inline extern_var(0x60B1A8, class MetaClass, mmCullCityMetaClass);

// 0x60B1D0 | ?FadeConstant@@3MA
inline extern_var(0x60B1D0, float, FadeConstant);

// 0x60B1D8 | ?FadeScale@@3MA
inline extern_var(0x60B1D8, float, FadeScale);

// 0x60B1DC | ?DisableUpper@@3HA
inline extern_var(0x60B1DC, int32_t, DisableUpper);

// 0x484F80 | ?fix_sun@@YAXXZ
inline void fix_sun()
{
    return stub<cdecl_t<void>>(0x484F80);
}

// 0x484FF0 | ?fix_fill1@@YAXXZ
inline void fix_fill1()
{
    return stub<cdecl_t<void>>(0x484FF0);
}

// 0x485060 | ?fix_fill2@@YAXXZ
inline void fix_fill2()
{
    return stub<cdecl_t<void>>(0x485060);
}

// 0x4850D0 | ?parseFloat@@YAXAAM@Z
inline void parseFloat(float& arg1)
{
    return stub<cdecl_t<void, float&>>(0x4850D0, arg1);
}

// 0x485100 | ?parseVector3@@YAXAAVVector3@@@Z
inline void parseVector3(class Vector3& arg1)
{
    return stub<cdecl_t<void, class Vector3&>>(0x485100, arg1);
}

// 0x485130 | ?parseRGB@@YAXAAI@Z
inline void parseRGB(uint32_t& arg1)
{
    return stub<cdecl_t<void, uint32_t&>>(0x485130, arg1);
}

// 0x4851A0 | ?parseARGB@@YAXAAI@Z
inline void parseARGB(uint32_t& arg1)
{
    return stub<cdecl_t<void, uint32_t&>>(0x4851A0, arg1);
}

// 0x485270 | ?new_mmCullCity@@YAPAXH@Z
inline void* new_mmCullCity(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x485270, arg1);
}

// 0x485340 | ?delete_mmCullCity@@YAXPAXH@Z
inline void delete_mmCullCity(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x485340, arg1, arg2);
}

class mmCullCity : asNode
{
public:
    // mmCullCity::`vftable' @ 0x591C08

    // 0x482B40 | ??0mmCullCity@@QAE@XZ
    inline mmCullCity()
    {
        // stub<member_func_t<void, mmCullCity>>(0x482B40, this);

        unimplemented();
    }

    // 0x482F00 | ?GetHitId@mmCullCity@@QAEFAAVVector3@@@Z
    inline int16_t GetHitId(class Vector3& arg1)
    {
        return stub<member_func_t<int16_t, mmCullCity, class Vector3&>>(0x482F00, this, arg1);
    }

    // 0x4832B0 | ?AddInstance@mmCullCity@@AAEXHPAD0HPAVVector3@@11M@Z
    inline void AddInstance(int32_t arg1, char* arg2, char* arg3, int32_t arg4, class Vector3* arg5,
        class Vector3* arg6, class Vector3* arg7, float arg8)
    {
        return stub<member_func_t<void, mmCullCity, int32_t, char*, char*, int32_t, class Vector3*, class Vector3*,
            class Vector3*, float>>(0x4832B0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x483630 | ?ReparentObject@mmCullCity@@QAEXPAVmmInstance@@@Z
    inline void ReparentObject(class mmInstance* arg1)
    {
        return stub<member_func_t<void, mmCullCity, class mmInstance*>>(0x483630, this, arg1);
    }

    // 0x4836C0 | ?Init@mmCullCity@@QAEXPADPAVasCamera@@@Z
    inline void Init(char* arg1, class asCamera* arg2)
    {
        return stub<member_func_t<void, mmCullCity, char*, class asCamera*>>(0x4836C0, this, arg1, arg2);
    }

    // 0x483C80 | ?InitObjectDetail@mmCullCity@@QAEXXZ
    inline void InitObjectDetail()
    {
        return stub<member_func_t<void, mmCullCity>>(0x483C80, this);
    }

    // 0x483CB0 | ?LoadBangers@mmCullCity@@QAEXPAD@Z
    inline void LoadBangers(char* arg1)
    {
        return stub<member_func_t<void, mmCullCity, char*>>(0x483CB0, this, arg1);
    }

    // 0x483DD0 | ?LoadFacades@mmCullCity@@QAEXPAD@Z
    inline void LoadFacades(char* arg1)
    {
        return stub<member_func_t<void, mmCullCity, char*>>(0x483DD0, this, arg1);
    }

    // 0x483EE0 | ?InitSnowTextures@mmCullCity@@AAEXXZ
    inline void InitSnowTextures()
    {
        return stub<member_func_t<void, mmCullCity>>(0x483EE0, this);
    }

    // 0x4840D0 | ?UpdateSnowTextures@mmCullCity@@AAEXXZ
    inline void UpdateSnowTextures()
    {
        return stub<member_func_t<void, mmCullCity>>(0x4840D0, this);
    }

    // 0x484370 | ?IsPolyWater@mmCullCity@@QAEHPAVmmPolygon@@@Z
    inline int32_t IsPolyWater(class mmPolygon* arg1)
    {
        return stub<member_func_t<int32_t, mmCullCity, class mmPolygon*>>(0x484370, this, arg1);
    }

    // 0x484720 | ?ToggleSky@mmCullCity@@QAEXXZ
    inline void ToggleSky()
    {
        return stub<member_func_t<void, mmCullCity>>(0x484720, this);
    }

    // 0x484730 | ?GetRoomFlags@mmCullCity@@QAEFF@Z
    inline int16_t GetRoomFlags(int16_t arg1)
    {
        return stub<member_func_t<int16_t, mmCullCity, int16_t>>(0x484730, this, arg1);
    }

    // 0x484770 | ?RelightEverything@mmCullCity@@QAEXXZ
    inline void RelightEverything()
    {
        return stub<member_func_t<void, mmCullCity>>(0x484770, this);
    }

    // 0x4848E0 | ?InitTimeOfDayAndWeather@mmCullCity@@AAEXXZ
    inline void InitTimeOfDayAndWeather()
    {
        return stub<member_func_t<void, mmCullCity>>(0x4848E0, this);
    }

    // 0x485220 | ?DeclareFields@mmCullCity@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x485220);
    }

    // 0x60B194 | ?Instance@mmCullCity@@0PAV1@A
    static inline extern_var(0x60B194, class mmCullCity*, Instance);

    // 0x49EB30 | ?GetInstance@mmCullCity@@SAPAV1@XZ
    static inline class mmCullCity* GetInstance()
    {
        return stub<cdecl_t<class mmCullCity*>>(0x49EB30);
    }

    // 0x482D60 | ??1mmCullCity@@UAE@XZ
    inline ~mmCullCity() override = 0
    {
        // stub<member_func_t<void, mmCullCity>>(0x482D60, this);

        unimplemented();
    }

    // 0x485390 | ?GetClass@mmCullCity@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmCullCity>>(0x485390, this);
    }

    // 0x4845F0 | ?Cull@mmCullCity@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmCullCity>>(0x4845F0, this);
    }

    // 0x4843B0 | ?Update@mmCullCity@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCullCity>>(0x4843B0, this);
    }

    // 0x483BB0 | ?Reset@mmCullCity@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCullCity>>(0x483BB0, this);
    }
};

struct mmRunwayLight : mmInstance
{
public:
    // mmRunwayLight::`vftable' @ 0x591C68

    // 0x482F90 | ??0mmRunwayLight@@QAE@PADAAVVector3@@1@Z
    inline mmRunwayLight(char* arg1, class Vector3& arg2, class Vector3& arg3)
    {
        stub<member_func_t<void, mmRunwayLight, char*, class Vector3&, class Vector3&>>(
            0x482F90, this, arg1, arg2, arg3);
    }

    // 0x60B1D4 | ?Phase@mmRunwayLight@@2MA
    static inline extern_var(0x60B1D4, float, Phase);

    // 0x4853D0 | ??1mmRunwayLight@@UAE@XZ
    inline ~mmRunwayLight() override = 0
    {
        // stub<member_func_t<void, mmRunwayLight>>(0x4853D0, this);

        unimplemented();
    }

    // 0x483160 | ?FromMatrix@mmRunwayLight@@UAIXABVMatrix34@@@Z
    inline void FromMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, mmRunwayLight, class Matrix34 const&>>(0x483160, this, arg1);
    }

    // 0x483170 | ?ToMatrix@mmRunwayLight@@UAIAAVMatrix34@@AAV2@@Z
    inline class Matrix34& ToMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34&, mmRunwayLight, class Matrix34&>>(0x483170, this, arg1);
    }

    // 0x483150 | ?GetPos@mmRunwayLight@@UAIAAVVector3@@XZ
    inline class Vector3& GetPos() override
    {
        return stub<member_func_t<class Vector3&, mmRunwayLight>>(0x483150, this);
    }

    // 0x4831A0 | ?Draw@mmRunwayLight@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmRunwayLight, int32_t>>(0x4831A0, this, arg1);
    }

    // 0x4832A0 | ?GetScale@mmRunwayLight@@UAIMXZ
    inline float GetScale() override
    {
        return stub<member_func_t<float, mmRunwayLight>>(0x4832A0, this);
    }

    // 0x4853A0 | ?AddWidgets@mmRunwayLight@@UAEXPAVBank@@@Z
    virtual inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, mmRunwayLight, class Bank*>>(0x4853A0, this, arg1);
    }
};

struct mmUpperInstance : mmMatrixInstance
{
public:
    // mmUpperInstance::`vftable' @ 0x591CC8

    // 0x485400 | ??1mmUpperInstance@@UAE@XZ
    inline ~mmUpperInstance() override = 0
    {
        // stub<member_func_t<void, mmUpperInstance>>(0x485400, this);

        unimplemented();
    }

    // 0x482F30 | ?Draw@mmUpperInstance@@EAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmUpperInstance, int32_t>>(0x482F30, this, arg1);
    }
};
