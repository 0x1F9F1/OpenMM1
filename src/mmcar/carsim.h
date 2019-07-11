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

// mmcar:carsim

#include "hooking.h"

// 0x4645B0 | ?IMPACTCB@@YAXPAVmmCarSim@@PAVasBound@@PAVmmIntersection@@PAVVector3@@M3@Z
inline void IMPACTCB(class mmCarSim* arg1, class asBound* arg2, class mmIntersection* arg3, class Vector3* arg4,
    float arg5, class Vector3* arg6)
{
    return stub<
        cdecl_t<void, class mmCarSim*, class asBound*, class mmIntersection*, class Vector3*, float, class Vector3*>>(
        0x4645B0, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x468310 | ?Struct@@YAPAUMetaType@@PAVMetaClass@@@Z
inline struct MetaType* Struct(class MetaClass* arg1)
{
    return stub<cdecl_t<struct MetaType*, class MetaClass*>>(0x468310, arg1);
}

// 0x5A9F78 | ?MetricFactor@@3MA
inline extern_var(0x5A9F78, float, MetricFactor);

// 0x5A9F7C | ?WeatherFriction@@3MA
inline extern_var(0x5A9F7C, float, WeatherFriction);

// 0x5A9F80 | ?EnableSmoke@@3HA
inline extern_var(0x5A9F80, int32_t, EnableSmoke);

// 0x609FE0 | ?PlayerPos@@3VVector3@@A
inline extern_var(0x609FE0, class Vector3, PlayerPos);

// 0x609FF0 | ?mmCarSimMetaClass@@3VMetaClass@@A
inline extern_var(0x609FF0, class MetaClass, mmCarSimMetaClass);

// 0x60A018 | ?HitWaterTimer@@3MA
inline extern_var(0x60A018, float, HitWaterTimer);

// 0x60A03C | ?ForceSmoke@@3HA
inline extern_var(0x60A03C, int32_t, ForceSmoke);

// 0x467FF0 | ?new_mmCarSim@@YAPAXH@Z
inline void* new_mmCarSim(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x467FF0, arg1);
}

// 0x4680C0 | ?delete_mmCarSim@@YAXPAXH@Z
inline void delete_mmCarSim(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4680C0, arg1, arg2);
}

class mmCarSim : asNode
{
public:
    // mmCarSim::`vftable' @ 0x590F28

    // 0x464610 | ??0mmCarSim@@QAE@XZ
    inline mmCarSim()
    {
        stub<member_func_t<void, mmCarSim>>(0x464610, this);
    }

    // 0x464CB0 | ?OnGround@mmCarSim@@QAEHXZ
    inline int32_t OnGround()
    {
        return stub<member_func_t<int32_t, mmCarSim>>(0x464CB0, this);
    }

    // 0x464CF0 | ?SetGlobalTuning@mmCarSim@@SAXMM@Z
    static inline void SetGlobalTuning(float arg1, float arg2)
    {
        return stub<cdecl_t<void, float, float>>(0x464CF0, arg1, arg2);
    }

    // 0x465000 | ?AddPlayerSpecifics@mmCarSim@@QAEXXZ
    inline void AddPlayerSpecifics()
    {
        return stub<member_func_t<void, mmCarSim>>(0x465000, this);
    }

    // 0x465080 | ?PlayHorn@mmCarSim@@QAEXXZ
    inline void PlayHorn()
    {
        return stub<member_func_t<void, mmCarSim>>(0x465080, this);
    }

    // 0x4650F0 | ?StopHorn@mmCarSim@@QAEXXZ
    inline void StopHorn()
    {
        return stub<member_func_t<void, mmCarSim>>(0x4650F0, this);
    }

    // 0x465160 | ?StartSiren@mmCarSim@@QAEXXZ
    inline void StartSiren()
    {
        return stub<member_func_t<void, mmCarSim>>(0x465160, this);
    }

    // 0x465190 | ?StopSiren@mmCarSim@@QAEXXZ
    inline void StopSiren()
    {
        return stub<member_func_t<void, mmCarSim>>(0x465190, this);
    }

    // 0x4651C0 | ?Init@mmCarSim@@QAEXPADPAVmmCar@@H@Z
    inline void Init(char* arg1, class mmCar* arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmCarSim, char*, class mmCar*, int32_t>>(0x4651C0, this, arg1, arg2, arg3);
    }

    // 0x4657E0 | ?ReInit@mmCarSim@@QAEXPAD@Z
    inline void ReInit(char* arg1)
    {
        return stub<member_func_t<void, mmCarSim, char*>>(0x4657E0, this, arg1);
    }

    // 0x465CE0 | ?RestoreImpactParams@mmCarSim@@QAEXXZ
    inline void RestoreImpactParams()
    {
        return stub<member_func_t<void, mmCarSim>>(0x465CE0, this);
    }

    // 0x465D00 | ?SetHackedImpactParams@mmCarSim@@QAEXXZ
    inline void SetHackedImpactParams()
    {
        return stub<member_func_t<void, mmCarSim>>(0x465D00, this);
    }

    // 0x465D20 | ?ReconfigureDrivetrain@mmCarSim@@QAEXXZ
    inline void ReconfigureDrivetrain()
    {
        return stub<member_func_t<void, mmCarSim>>(0x465D20, this);
    }

    // 0x465D40 | ?ConfigureDrivetrain@mmCarSim@@QAEXXZ
    inline void ConfigureDrivetrain()
    {
        return stub<member_func_t<void, mmCarSim>>(0x465D40, this);
    }

    // 0x465FC0 | ?UnconfigureDrivetrain@mmCarSim@@QAEXXZ
    inline void UnconfigureDrivetrain()
    {
        return stub<member_func_t<void, mmCarSim>>(0x465FC0, this);
    }

    // 0x4661C0 | ?SetResetPos@mmCarSim@@QAEXAAVVector3@@@Z
    inline void SetResetPos(class Vector3& arg1)
    {
        return stub<member_func_t<void, mmCarSim, class Vector3&>>(0x4661C0, this, arg1);
    }

    // 0x466340 | ?UpdateICSParams@mmCarSim@@QAEXXZ
    inline void UpdateICSParams()
    {
        return stub<member_func_t<void, mmCarSim>>(0x466340, this);
    }

    // 0x466D50 | ?Explode@mmCarSim@@QAEXXZ
    inline void Explode()
    {
        return stub<member_func_t<void, mmCarSim>>(0x466D50, this);
    }

    // 0x466E30 | ?UpdateExhaust@mmCarSim@@QAEXXZ
    inline void UpdateExhaust()
    {
        return stub<member_func_t<void, mmCarSim>>(0x466E30, this);
    }

    // 0x466F40 | ?UpdateDamage@mmCarSim@@QAEXXZ
    inline void UpdateDamage()
    {
        return stub<member_func_t<void, mmCarSim>>(0x466F40, this);
    }

    // 0x4671F0 | ?UpdateFF@mmCarSim@@QAEXXZ
    inline void UpdateFF()
    {
        return stub<member_func_t<void, mmCarSim>>(0x4671F0, this);
    }

    // 0x4674B0 | ?ShouldSkid@mmCarSim@@QAEHXZ
    inline int32_t ShouldSkid()
    {
        return stub<member_func_t<int32_t, mmCarSim>>(0x4674B0, this);
    }

    // 0x467500 | ?RemoveNetVehicleAudio@mmCarSim@@QAEXXZ
    inline void RemoveNetVehicleAudio()
    {
        return stub<member_func_t<void, mmCarSim>>(0x467500, this);
    }

    // 0x467510 | ?AddWidgets@mmCarSim@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, mmCarSim, class Bank*>>(0x467510, this, arg1);
    }

    // 0x467520 | ?InitPtx@mmCarSim@@QAEXXZ
    inline void InitPtx()
    {
        return stub<member_func_t<void, mmCarSim>>(0x467520, this);
    }

    // 0x467A10 | ?PlayImpactAudio@mmCarSim@@QAEXFPAVmmIntersection@@PAVVector3@@@Z
    inline void PlayImpactAudio(int16_t arg1, class mmIntersection* arg2, class Vector3* arg3)
    {
        return stub<member_func_t<void, mmCarSim, int16_t, class mmIntersection*, class Vector3*>>(
            0x467A10, this, arg1, arg2, arg3);
    }

    // 0x467B30 | ?DeclareFields@mmCarSim@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x467B30);
    }

    // 0x60A030 | ?GrassTex@mmCarSim@@2PAVagiTexDef@@A
    static inline extern_var(0x60A030, class agiTexDef*, GrassTex);

    // 0x60A034 | ?DirtTex@mmCarSim@@2PAVagiTexDef@@A
    static inline extern_var(0x60A034, class agiTexDef*, DirtTex);

    // 0x60A038 | ?SnowTex@mmCarSim@@2PAVagiTexDef@@A
    static inline extern_var(0x60A038, class agiTexDef*, SnowTex);

    // 0x60A040 | ?PlayerRawSteering@mmCarSim@@2MA
    static inline extern_var(0x60A040, float, PlayerRawSteering);

    // 0x464D00 | ??1mmCarSim@@UAE@XZ
    inline ~mmCarSim() override
    {
        stub<member_func_t<void, mmCarSim>>(0x464D00, this);
    }

    // 0x468110 | ?GetClass@mmCarSim@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmCarSim>>(0x468110, this);
    }

    // 0x4662C0 | ?BeforeSave@mmCarSim@@UAEXXZ
    inline void BeforeSave() override
    {
        return stub<member_func_t<void, mmCarSim>>(0x4662C0, this);
    }

    // 0x466200 | ?AfterLoad@mmCarSim@@UAEXXZ
    inline void AfterLoad() override
    {
        return stub<member_func_t<void, mmCarSim>>(0x466200, this);
    }

    // 0x466520 | ?Update@mmCarSim@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCarSim>>(0x466520, this);
    }

    // 0x466370 | ?Reset@mmCarSim@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCarSim>>(0x466370, this);
    }
};
