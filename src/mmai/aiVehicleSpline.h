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
    mmai:aiVehicleSpline

    0x452BA0 | public: __thiscall aiVehicleSpline::aiVehicleSpline(void) | ??0aiVehicleSpline@@QAE@XZ
    0x452C10 | public: __thiscall aiVehicleSpline::~aiVehicleSpline(void) | ??1aiVehicleSpline@@QAE@XZ
    0x452C80 | public: void __thiscall aiVehicleSpline::Init(char *,int) | ?Init@aiVehicleSpline@@QAEXPADH@Z
    0x452F70 | public: virtual void __thiscall aiVehicleSpline::Reset(void) | ?Reset@aiVehicleSpline@@UAEXXZ
    0x452FB0 | public: virtual void __thiscall aiVehicleSpline::Update(void) | ?Update@aiVehicleSpline@@UAEXXZ
    0x453000 | public: void __thiscall aiVehicleSpline::ResetReactTicks(void) | ?ResetReactTicks@aiVehicleSpline@@QAEXXZ
    0x453060 | public: void __thiscall aiVehicleSpline::SolvePositionAndOrientation(void) | ?SolvePositionAndOrientation@aiVehicleSpline@@QAEXXZ
    0x453770 | public: void __thiscall aiVehicleSpline::SolveYPositionAndOrientation(void) | ?SolveYPositionAndOrientation@aiVehicleSpline@@QAEXXZ
    0x453D00 | public: int __thiscall aiVehicleSpline::DetectPlayerForwardCollision(void) | ?DetectPlayerForwardCollision@aiVehicleSpline@@QAEHXZ
    0x453DF0 | public: int __thiscall aiVehicleSpline::DetectPlayerTargetPtCollision(void) | ?DetectPlayerTargetPtCollision@aiVehicleSpline@@QAEHXZ
    0x453F30 | public: int __thiscall aiVehicleSpline::DetectPlayerCollision(int,float) | ?DetectPlayerCollision@aiVehicleSpline@@QAEHHM@Z
    0x454530 | public: int __thiscall aiVehicleSpline::DetectPlayerZoneCollision(void) | ?DetectPlayerZoneCollision@aiVehicleSpline@@QAEHXZ
    0x454720 | public: int __thiscall aiVehicleSpline::IsThePlayerInFrontOfMe(void) | ?IsThePlayerInFrontOfMe@aiVehicleSpline@@QAEHXZ
    0x454820 | public: int __thiscall aiVehicleSpline::IsAmbientBlockingPlayer(void) | ?IsAmbientBlockingPlayer@aiVehicleSpline@@QAEHXZ
    0x454910 | public: void __thiscall aiVehicleSpline::AvoidPlayerCollision(void) | ?AvoidPlayerCollision@aiVehicleSpline@@QAEXXZ
    0x454990 | public: int __thiscall aiVehicleSpline::WaitTime(void) | ?WaitTime@aiVehicleSpline@@QAEHXZ
    0x4549B0 | public: float __thiscall aiVehicleSpline::TotLength(void) | ?TotLength@aiVehicleSpline@@QAEMXZ
    0x4549C0 | public: virtual void __thiscall aiVehicleSpline::Impact(int) | ?Impact@aiVehicleSpline@@UAEXH@Z
    0x4549D0 | public: float __thiscall aiVehicleSpline::DistanceToVehicle(class aiVehicleSpline *) | ?DistanceToVehicle@aiVehicleSpline@@QAEMPAV1@@Z
    0x454CB0 | public: float __thiscall aiVehicleSpline::DistanceToIntersection(void) | ?DistanceToIntersection@aiVehicleSpline@@QAEMXZ
    0x454D50 | public: void __thiscall aiVehicleSpline::Dump(void) | ?Dump@aiVehicleSpline@@QAEXXZ
    0x454EB0 | public: void __thiscall aiVehicleSpline::AddWidgets(class Bank *) | ?AddWidgets@aiVehicleSpline@@QAEXPAVBank@@@Z
    0x454EC0 | public: virtual void __thiscall aiVehicleSpline::DrawId(void) | ?DrawId@aiVehicleSpline@@UAEXXZ
    0x454ED0 | public: static void __cdecl aiVehicleSpline::DeclareFields(void) | ?DeclareFields@aiVehicleSpline@@SAXXZ
    0x455060 | public: virtual class MetaClass * __thiscall aiVehicleSpline::GetClass(void) | ?GetClass@aiVehicleSpline@@UAEPAVMetaClass@@XZ
    0x4550A0 | public: class Vector3 __thiscall Vector3::operator%(class Vector3 const &) const | ??LVector3@@QBE?AV0@ABV0@@Z
    0x4550F0 | public: void __thiscall Vector3::Scale(class Vector3 const &,float) | ?Scale@Vector3@@QAEXABV1@M@Z
    0x455120 | public: void * __thiscall aiVehicleSpline::`vector deleting destructor'(unsigned int) | ??_EaiVehicleSpline@@QAEPAXI@Z
    0x455180 | public: virtual int __thiscall aiVehicleSpline::Type(void) | ?Type@aiVehicleSpline@@UAEHXZ
    0x455190 | public: virtual void * __thiscall aiVehicleInstance::`vector deleting destructor'(unsigned int) | ??_EaiVehicleInstance@@UAEPAXI@Z
    0x455190 | public: virtual void * __thiscall aiVehicleInstance::`scalar deleting destructor'(unsigned int) | ??_GaiVehicleInstance@@UAEPAXI@Z
    0x4551B0 | public: virtual __thiscall aiVehicleInstance::~aiVehicleInstance(void) | ??1aiVehicleInstance@@UAE@XZ
    0x590A80 | const aiVehicleSpline::`vftable' | ??_7aiVehicleSpline@@6B@
    0x590AA8 | const aiVehicleInstance::`vftable' | ??_7aiVehicleInstance@@6B@
    0x609F40 | class MetaClass aiVehicleSplineMetaClass | ?aiVehicleSplineMetaClass@@3VMetaClass@@A
    0x454F20 | void * __cdecl new_aiVehicleSpline(int) | ?new_aiVehicleSpline@@YAPAXH@Z
    0x454FF0 | void __cdecl delete_aiVehicleSpline(void *,int) | ?delete_aiVehicleSpline@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x609F40 | ?aiVehicleSplineMetaClass@@3VMetaClass@@A
inline extern_var(0x609F40, class MetaClass, aiVehicleSplineMetaClass);

// 0x454F20 | ?new_aiVehicleSpline@@YAPAXH@Z
inline void* new_aiVehicleSpline(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x454F20, arg1);
}

// 0x454FF0 | ?delete_aiVehicleSpline@@YAXPAXH@Z
inline void delete_aiVehicleSpline(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x454FF0, arg1, arg2);
}

class aiVehicleSpline : aiVehicle
{
public:
    // aiVehicleSpline::`vftable' @ 0x590A80

    // 0x452BA0 | ??0aiVehicleSpline@@QAE@XZ
    inline aiVehicleSpline()
    {
        stub<member_func_t<void, aiVehicleSpline>>(0x452BA0, this);
    }

    // 0x452C10 | ??1aiVehicleSpline@@QAE@XZ
    inline ~aiVehicleSpline()
    {
        stub<member_func_t<void, aiVehicleSpline>>(0x452C10, this);
    }

    // 0x452C80 | ?Init@aiVehicleSpline@@QAEXPADH@Z
    inline void Init(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, aiVehicleSpline, char*, int32_t>>(0x452C80, this, arg1, arg2);
    }

    // 0x453000 | ?ResetReactTicks@aiVehicleSpline@@QAEXXZ
    inline void ResetReactTicks()
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x453000, this);
    }

    // 0x453060 | ?SolvePositionAndOrientation@aiVehicleSpline@@QAEXXZ
    inline void SolvePositionAndOrientation()
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x453060, this);
    }

    // 0x453770 | ?SolveYPositionAndOrientation@aiVehicleSpline@@QAEXXZ
    inline void SolveYPositionAndOrientation()
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x453770, this);
    }

    // 0x453D00 | ?DetectPlayerForwardCollision@aiVehicleSpline@@QAEHXZ
    inline int32_t DetectPlayerForwardCollision()
    {
        return stub<member_func_t<int32_t, aiVehicleSpline>>(0x453D00, this);
    }

    // 0x453DF0 | ?DetectPlayerTargetPtCollision@aiVehicleSpline@@QAEHXZ
    inline int32_t DetectPlayerTargetPtCollision()
    {
        return stub<member_func_t<int32_t, aiVehicleSpline>>(0x453DF0, this);
    }

    // 0x453F30 | ?DetectPlayerCollision@aiVehicleSpline@@QAEHHM@Z
    inline int32_t DetectPlayerCollision(int32_t arg1, float arg2)
    {
        return stub<member_func_t<int32_t, aiVehicleSpline, int32_t, float>>(0x453F30, this, arg1, arg2);
    }

    // 0x454530 | ?DetectPlayerZoneCollision@aiVehicleSpline@@QAEHXZ
    inline int32_t DetectPlayerZoneCollision()
    {
        return stub<member_func_t<int32_t, aiVehicleSpline>>(0x454530, this);
    }

    // 0x454720 | ?IsThePlayerInFrontOfMe@aiVehicleSpline@@QAEHXZ
    inline int32_t IsThePlayerInFrontOfMe()
    {
        return stub<member_func_t<int32_t, aiVehicleSpline>>(0x454720, this);
    }

    // 0x454820 | ?IsAmbientBlockingPlayer@aiVehicleSpline@@QAEHXZ
    inline int32_t IsAmbientBlockingPlayer()
    {
        return stub<member_func_t<int32_t, aiVehicleSpline>>(0x454820, this);
    }

    // 0x454910 | ?AvoidPlayerCollision@aiVehicleSpline@@QAEXXZ
    inline void AvoidPlayerCollision()
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x454910, this);
    }

    // 0x454990 | ?WaitTime@aiVehicleSpline@@QAEHXZ
    inline int32_t WaitTime()
    {
        return stub<member_func_t<int32_t, aiVehicleSpline>>(0x454990, this);
    }

    // 0x4549B0 | ?TotLength@aiVehicleSpline@@QAEMXZ
    inline float TotLength()
    {
        return stub<member_func_t<float, aiVehicleSpline>>(0x4549B0, this);
    }

    // 0x4549D0 | ?DistanceToVehicle@aiVehicleSpline@@QAEMPAV1@@Z
    inline float DistanceToVehicle(class aiVehicleSpline* arg1)
    {
        return stub<member_func_t<float, aiVehicleSpline, class aiVehicleSpline*>>(0x4549D0, this, arg1);
    }

    // 0x454CB0 | ?DistanceToIntersection@aiVehicleSpline@@QAEMXZ
    inline float DistanceToIntersection()
    {
        return stub<member_func_t<float, aiVehicleSpline>>(0x454CB0, this);
    }

    // 0x454D50 | ?Dump@aiVehicleSpline@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x454D50, this);
    }

    // 0x454EB0 | ?AddWidgets@aiVehicleSpline@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, aiVehicleSpline, class Bank*>>(0x454EB0, this, arg1);
    }

    // 0x454ED0 | ?DeclareFields@aiVehicleSpline@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x454ED0);
    }

    // 0x455120 | ??_EaiVehicleSpline@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x452FB0 | ?Update@aiVehicleSpline@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x452FB0, this);
    }

    // 0x452F70 | ?Reset@aiVehicleSpline@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x452F70, this);
    }

    // 0x455180 | ?Type@aiVehicleSpline@@UAEHXZ
    inline int32_t Type() override
    {
        return stub<member_func_t<int32_t, aiVehicleSpline>>(0x455180, this);
    }

    // 0x454EC0 | ?DrawId@aiVehicleSpline@@UAEXXZ
    inline void DrawId() override
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x454EC0, this);
    }

    // 0x4549C0 | ?Impact@aiVehicleSpline@@UAEXH@Z
    virtual inline void Impact(int32_t arg1)
    {
        return stub<member_func_t<void, aiVehicleSpline, int32_t>>(0x4549C0, this, arg1);
    }

    // 0x440A20 | ?GetImpactAudioPtr@aiVehicleSpline@@UAEPAVmmOpponentImpactAudio@@XZ
    virtual inline class mmOpponentImpactAudio* GetImpactAudioPtr()
    {
        return stub<member_func_t<class mmOpponentImpactAudio*, aiVehicleSpline>>(0x440A20, this);
    }

    // 0x440A30 | ?PlayHorn@aiVehicleSpline@@UAEXMM@Z
    virtual inline void PlayHorn(float arg1, float arg2)
    {
        return stub<member_func_t<void, aiVehicleSpline, float, float>>(0x440A30, this, arg1, arg2);
    }

    // 0x440A40 | ?ImpactAudioReaction@aiVehicleSpline@@UAEXM@Z
    virtual inline void ImpactAudioReaction(float arg1)
    {
        return stub<member_func_t<void, aiVehicleSpline, float>>(0x440A40, this, arg1);
    }

    // 0x440A50 | ?StopVoice@aiVehicleSpline@@UAEXXZ
    virtual inline void StopVoice()
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x440A50, this);
    }

    // 0x455060 | ?GetClass@aiVehicleSpline@@UAEPAVMetaClass@@XZ
    virtual inline class MetaClass* GetClass()
    {
        return stub<member_func_t<class MetaClass*, aiVehicleSpline>>(0x455060, this);
    }
};
