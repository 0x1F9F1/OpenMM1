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

// mmcity:cullcity

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
        stub<member_func_t<void, mmCullCity>>(0x482B40, this);
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
    inline ~mmCullCity() override
    {
        stub<member_func_t<void, mmCullCity>>(0x482D60, this);
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
    inline ~mmRunwayLight() override
    {
        stub<member_func_t<void, mmRunwayLight>>(0x4853D0, this);
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
    inline ~mmUpperInstance() override
    {
        stub<member_func_t<void, mmUpperInstance>>(0x485400, this);
    }

    // 0x482F30 | ?Draw@mmUpperInstance@@EAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmUpperInstance, int32_t>>(0x482F30, this, arg1);
    }
};
