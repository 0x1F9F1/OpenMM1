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
    mmcamcs:pointcamcs

    0x4EC310 | public: __thiscall PointCamCS::PointCamCS(void) | ??0PointCamCS@@QAE@XZ
    0x4EC340 | public: void __thiscall PointCamCS::Init(class mmCar *) | ?Init@PointCamCS@@QAEXPAVmmCar@@@Z
    0x4EC370 | public: virtual void __thiscall PointCamCS::Reset(void) | ?Reset@PointCamCS@@UAEXXZ
    0x4EC380 | public: virtual void __thiscall PointCamCS::MakeActive(void) | ?MakeActive@PointCamCS@@UAEXXZ
    0x4EC3B0 | public: void __thiscall PointCamCS::SetPos(class Vector3 &) | ?SetPos@PointCamCS@@QAEXAAVVector3@@@Z
    0x4EC3F0 | public: void __thiscall PointCamCS::SetMaxDist(float) | ?SetMaxDist@PointCamCS@@QAEXM@Z
    0x4EC410 | public: void __thiscall PointCamCS::SetMinDist(float) | ?SetMinDist@PointCamCS@@QAEXM@Z
    0x4EC430 | public: void __thiscall PointCamCS::SetAppRate(float) | ?SetAppRate@PointCamCS@@QAEXM@Z
    0x4EC440 | public: void __thiscall PointCamCS::SetVel(class Vector3 &) | ?SetVel@PointCamCS@@QAEXAAVVector3@@@Z
    0x4EC460 | public: class Vector3 __thiscall PointCamCS::GetPos(void) | ?GetPos@PointCamCS@@QAE?AVVector3@@XZ
    0x4EC490 | public: virtual void __thiscall PointCamCS::Update(void) | ?Update@PointCamCS@@UAEXXZ
    0x4EC770 | public: static void __cdecl PointCamCS::DeclareFields(void) | ?DeclareFields@PointCamCS@@SAXXZ
    0x4EC8E0 | public: virtual class MetaClass * __thiscall PointCamCS::GetClass(void) | ?GetClass@PointCamCS@@UAEPAVMetaClass@@XZ
    0x4EC920 | public: virtual void * __thiscall PointCamCS::`vector deleting destructor'(unsigned int) | ??_EPointCamCS@@UAEPAXI@Z
    0x594CB0 | const PointCamCS::`vftable' | ??_7PointCamCS@@6B@
    0x67B700 | class MetaClass PointCamCSMetaClass | ?PointCamCSMetaClass@@3VMetaClass@@A
    0x4EC7C0 | void * __cdecl new_PointCamCS(int) | ?new_PointCamCS@@YAPAXH@Z
    0x4EC890 | void __cdecl delete_PointCamCS(void *,int) | ?delete_PointCamCS@@YAXPAXH@Z
*/

// 0x67B700 | ?PointCamCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B700, class MetaClass, PointCamCSMetaClass);

// 0x4EC7C0 | ?new_PointCamCS@@YAPAXH@Z
inline void* new_PointCamCS(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4EC7C0, arg1);
}

// 0x4EC890 | ?delete_PointCamCS@@YAXPAXH@Z
inline void delete_PointCamCS(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4EC890, arg1, arg2);
}

struct PointCamCS : CarCamCS
{
public:
    // PointCamCS::`vftable' @ 0x594CB0

    // 0x4EC310 | ??0PointCamCS@@QAE@XZ
    inline PointCamCS()
    {
        // stub<member_func_t<void, PointCamCS>>(0x4EC310, this);

        unimplemented();
    }

    // 0x4EC340 | ?Init@PointCamCS@@QAEXPAVmmCar@@@Z
    inline void Init(class mmCar* arg1)
    {
        return stub<member_func_t<void, PointCamCS, class mmCar*>>(0x4EC340, this, arg1);
    }

    // 0x4EC3B0 | ?SetPos@PointCamCS@@QAEXAAVVector3@@@Z
    inline void SetPos(class Vector3& arg1)
    {
        return stub<member_func_t<void, PointCamCS, class Vector3&>>(0x4EC3B0, this, arg1);
    }

    // 0x4EC3F0 | ?SetMaxDist@PointCamCS@@QAEXM@Z
    inline void SetMaxDist(float arg1)
    {
        return stub<member_func_t<void, PointCamCS, float>>(0x4EC3F0, this, arg1);
    }

    // 0x4EC410 | ?SetMinDist@PointCamCS@@QAEXM@Z
    inline void SetMinDist(float arg1)
    {
        return stub<member_func_t<void, PointCamCS, float>>(0x4EC410, this, arg1);
    }

    // 0x4EC430 | ?SetAppRate@PointCamCS@@QAEXM@Z
    inline void SetAppRate(float arg1)
    {
        return stub<member_func_t<void, PointCamCS, float>>(0x4EC430, this, arg1);
    }

    // 0x4EC440 | ?SetVel@PointCamCS@@QAEXAAVVector3@@@Z
    inline void SetVel(class Vector3& arg1)
    {
        return stub<member_func_t<void, PointCamCS, class Vector3&>>(0x4EC440, this, arg1);
    }

    // 0x4EC460 | ?GetPos@PointCamCS@@QAE?AVVector3@@XZ
    inline class Vector3 GetPos()
    {
        return stub<member_func_t<class Vector3, PointCamCS>>(0x4EC460, this);
    }

    // 0x4EC770 | ?DeclareFields@PointCamCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4EC770);
    }

    // 0x423B80 | ??1PointCamCS@@UAE@XZ
    inline ~PointCamCS() override = 0
    {
        // stub<member_func_t<void, PointCamCS>>(0x423B80, this);

        unimplemented();
    }

    // 0x4EC8E0 | ?GetClass@PointCamCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, PointCamCS>>(0x4EC8E0, this);
    }

    // 0x4EC490 | ?Update@PointCamCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, PointCamCS>>(0x4EC490, this);
    }

    // 0x4EC370 | ?Reset@PointCamCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, PointCamCS>>(0x4EC370, this);
    }

    // 0x4EC380 | ?MakeActive@PointCamCS@@UAEXXZ
    inline void MakeActive() override
    {
        return stub<member_func_t<void, PointCamCS>>(0x4EC380, this);
    }
};
