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
    mmcar:car

    0x46AFF0 | public: __thiscall mmCar::mmCar(void) | ??0mmCar@@QAE@XZ
    0x46B110 | public: void __thiscall mmCar::TranslateFlags(int) | ?TranslateFlags@mmCar@@QAEXH@Z
    0x46B170 | public: void __thiscall mmCar::ReleaseTrailer(void) | ?ReleaseTrailer@mmCar@@QAEXXZ
    0x46B1A0 | public: void __thiscall mmCar::Init(char *,int,int) | ?Init@mmCar@@QAEXPADHH@Z
    0x46B5D0 | public: void __thiscall mmCar::ReInit(char *,int) | ?ReInit@mmCar@@QAEXPADH@Z
    0x46B800 | public: virtual void __thiscall mmCar::Reset(void) | ?Reset@mmCar@@UAEXXZ
    0x46B8B0 | public: virtual void __thiscall mmCar::Update(void) | ?Update@mmCar@@UAEXXZ
    0x46B8D0 | public: virtual void __thiscall mmCar::PostUpdate(void) | ?PostUpdate@mmCar@@UAEXXZ
    0x46B9A0 | public: void __thiscall mmCar::EnableDriving(int) | ?EnableDriving@mmCar@@QAEXH@Z
    0x46BA10 | public: int __thiscall mmCar::IsDrivingDisabled(void) | ?IsDrivingDisabled@mmCar@@QAEHXZ
    0x46BA20 | public: void __thiscall mmCar::ToggleSiren(void) | ?ToggleSiren@mmCar@@QAEXXZ
    0x46BA50 | public: void __thiscall mmCar::StartSiren(void) | ?StartSiren@mmCar@@QAEXXZ
    0x46BA70 | public: void __thiscall mmCar::StopSiren(void) | ?StopSiren@mmCar@@QAEXXZ
    0x46BA90 | public: void __thiscall mmCar::RemoveVehicleAudio(void) | ?RemoveVehicleAudio@mmCar@@QAEXXZ
    0x46BAA0 | public: void __thiscall mmCar::ClearDamage(void) | ?ClearDamage@mmCar@@QAEXXZ
    0x46BAE0 | public: void __thiscall mmCar::Impact(class mmIntersection *,class Vector3 *,float,int,class Vector3 *) | ?Impact@mmCar@@QAEXPAVmmIntersection@@PAVVector3@@MH1@Z
    0x46BF10 | int __cdecl EggNameIndex(char *) | ?EggNameIndex@@YAHPAD@Z
    0x46BF70 | public: char * __thiscall mmCar::VehNameRemap(char *,int) | ?VehNameRemap@mmCar@@QAEPADPADH@Z
    0x46C210 | public: static void __cdecl mmCar::DeclareFields(void) | ?DeclareFields@mmCar@@SAXXZ
    0x46C380 | public: virtual class MetaClass * __thiscall mmCar::GetClass(void) | ?GetClass@mmCar@@UAEPAVMetaClass@@XZ
    0x46C3C0 | public: virtual void * __thiscall mmCar::`vector deleting destructor'(unsigned int) | ??_EmmCar@@UAEPAXI@Z
    0x46C420 | public: virtual class asInertialCS * __thiscall mmCar::GetICS(void) | ?GetICS@mmCar@@UAEPAVasInertialCS@@XZ
    0x46C430 | public: virtual class asBound * __thiscall mmCar::GetBound(void) | ?GetBound@mmCar@@UAEPAVasBound@@XZ
    0x591140 | const mmCar::`vftable' | ??_7mmCar@@6B@
    0x60A1D4 | float ffval | ?ffval@@3MA
    0x60A1D8 | class MetaClass mmCarMetaClass | ?mmCarMetaClass@@3VMetaClass@@A
    0x46C260 | void * __cdecl new_mmCar(int) | ?new_mmCar@@YAPAXH@Z
    0x46C330 | void __cdecl delete_mmCar(void *,int) | ?delete_mmCar@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x46BF10 | ?EggNameIndex@@YAHPAD@Z
inline int32_t EggNameIndex(char* arg1)
{
    return stub<cdecl_t<int32_t, char*>>(0x46BF10, arg1);
}

// 0x60A1D4 | ?ffval@@3MA
inline extern_var(0x60A1D4, float, ffval);

// 0x60A1D8 | ?mmCarMetaClass@@3VMetaClass@@A
inline extern_var(0x60A1D8, class MetaClass, mmCarMetaClass);

// 0x46C260 | ?new_mmCar@@YAPAXH@Z
inline void* new_mmCar(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x46C260, arg1);
}

// 0x46C330 | ?delete_mmCar@@YAXPAXH@Z
inline void delete_mmCar(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x46C330, arg1, arg2);
}

class mmCar : mmPhysEntity
{
public:
    // mmCar::`vftable' @ 0x591140

    // 0x46AFF0 | ??0mmCar@@QAE@XZ
    inline mmCar()
    {
        // stub<member_func_t<void, mmCar>>(0x46AFF0, this);

        unimplemented();
    }

    // 0x46B110 | ?TranslateFlags@mmCar@@QAEXH@Z
    inline void TranslateFlags(int32_t arg1)
    {
        return stub<member_func_t<void, mmCar, int32_t>>(0x46B110, this, arg1);
    }

    // 0x46B170 | ?ReleaseTrailer@mmCar@@QAEXXZ
    inline void ReleaseTrailer()
    {
        return stub<member_func_t<void, mmCar>>(0x46B170, this);
    }

    // 0x46B1A0 | ?Init@mmCar@@QAEXPADHH@Z
    inline void Init(char* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmCar, char*, int32_t, int32_t>>(0x46B1A0, this, arg1, arg2, arg3);
    }

    // 0x46B5D0 | ?ReInit@mmCar@@QAEXPADH@Z
    inline void ReInit(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmCar, char*, int32_t>>(0x46B5D0, this, arg1, arg2);
    }

    // 0x46B9A0 | ?EnableDriving@mmCar@@QAEXH@Z
    inline void EnableDriving(int32_t arg1)
    {
        return stub<member_func_t<void, mmCar, int32_t>>(0x46B9A0, this, arg1);
    }

    // 0x46BA10 | ?IsDrivingDisabled@mmCar@@QAEHXZ
    inline int32_t IsDrivingDisabled()
    {
        return stub<member_func_t<int32_t, mmCar>>(0x46BA10, this);
    }

    // 0x46BA20 | ?ToggleSiren@mmCar@@QAEXXZ
    inline void ToggleSiren()
    {
        return stub<member_func_t<void, mmCar>>(0x46BA20, this);
    }

    // 0x46BA50 | ?StartSiren@mmCar@@QAEXXZ
    inline void StartSiren()
    {
        return stub<member_func_t<void, mmCar>>(0x46BA50, this);
    }

    // 0x46BA70 | ?StopSiren@mmCar@@QAEXXZ
    inline void StopSiren()
    {
        return stub<member_func_t<void, mmCar>>(0x46BA70, this);
    }

    // 0x46BA90 | ?RemoveVehicleAudio@mmCar@@QAEXXZ
    inline void RemoveVehicleAudio()
    {
        return stub<member_func_t<void, mmCar>>(0x46BA90, this);
    }

    // 0x46BAA0 | ?ClearDamage@mmCar@@QAEXXZ
    inline void ClearDamage()
    {
        return stub<member_func_t<void, mmCar>>(0x46BAA0, this);
    }

    // 0x46BAE0 | ?Impact@mmCar@@QAEXPAVmmIntersection@@PAVVector3@@MH1@Z
    inline void Impact(class mmIntersection* arg1, class Vector3* arg2, float arg3, int32_t arg4, class Vector3* arg5)
    {
        return stub<member_func_t<void, mmCar, class mmIntersection*, class Vector3*, float, int32_t, class Vector3*>>(
            0x46BAE0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x46BF70 | ?VehNameRemap@mmCar@@QAEPADPADH@Z
    inline char* VehNameRemap(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<char*, mmCar, char*, int32_t>>(0x46BF70, this, arg1, arg2);
    }

    // 0x46C210 | ?DeclareFields@mmCar@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x46C210);
    }

    // 0x423AA0 | ??1mmCar@@UAE@XZ
    inline ~mmCar() override = 0
    {
        // stub<member_func_t<void, mmCar>>(0x423AA0, this);

        unimplemented();
    }

    // 0x46C380 | ?GetClass@mmCar@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmCar>>(0x46C380, this);
    }

    // 0x46B8B0 | ?Update@mmCar@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCar>>(0x46B8B0, this);
    }

    // 0x46B800 | ?Reset@mmCar@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCar>>(0x46B800, this);
    }

    // 0x46B8D0 | ?PostUpdate@mmCar@@UAEXXZ
    inline void PostUpdate() override
    {
        return stub<member_func_t<void, mmCar>>(0x46B8D0, this);
    }

    // 0x46C430 | ?GetBound@mmCar@@UAEPAVasBound@@XZ
    inline class asBound* GetBound() override
    {
        return stub<member_func_t<class asBound*, mmCar>>(0x46C430, this);
    }

    // 0x46C420 | ?GetICS@mmCar@@UAEPAVasInertialCS@@XZ
    inline class asInertialCS* GetICS() override
    {
        return stub<member_func_t<class asInertialCS*, mmCar>>(0x46C420, this);
    }
};
