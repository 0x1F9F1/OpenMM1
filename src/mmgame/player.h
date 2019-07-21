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
    mmgame:player

    0x4210B0 | public: __thiscall mmPlayer::mmPlayer(void) | ??0mmPlayer@@QAE@XZ
    0x4213C0 | public: virtual void __thiscall mmPlayer::BeforeSave(void) | ?BeforeSave@mmPlayer@@UAEXXZ
    0x4213D0 | public: virtual void __thiscall mmPlayer::AfterLoad(void) | ?AfterLoad@mmPlayer@@UAEXXZ
    0x4213E0 | public: void __thiscall mmPlayer::ReInit(char *) | ?ReInit@mmPlayer@@QAEXPAD@Z
    0x421570 | public: void __thiscall mmPlayer::Init(char *,char *,class mmGame *) | ?Init@mmPlayer@@QAEXPAD0PAVmmGame@@@Z
    0x4219F0 | public: void __thiscall mmPlayer::SetMirrorFOV(void) | ?SetMirrorFOV@mmPlayer@@QAEXXZ
    0x421A20 | public: void __thiscall mmPlayer::SetPreRaceCam(void) | ?SetPreRaceCam@mmPlayer@@QAEXXZ
    0x421B40 | public: void __thiscall mmPlayer::SetPostRaceCam(void) | ?SetPostRaceCam@mmPlayer@@QAEXXZ
    0x421C60 | public: int __thiscall mmPlayer::IsPOV(void) | ?IsPOV@mmPlayer@@QAEHXZ
    0x421CB0 | public: void __thiscall mmPlayer::SetWideFOV(int) | ?SetWideFOV@mmPlayer@@QAEXH@Z
    0x421E40 | public: void __thiscall mmPlayer::ToggleWideFOV(void) | ?ToggleWideFOV@mmPlayer@@QAEXXZ
    0x421E60 | public: void __thiscall mmPlayer::ToggleCam(void) | ?ToggleCam@mmPlayer@@QAEXXZ
    0x421F80 | public: void __thiscall mmPlayer::ToggleExternalView(void) | ?ToggleExternalView@mmPlayer@@QAEXXZ
    0x422130 | public: void __thiscall mmPlayer::ToggleDash(void) | ?ToggleDash@mmPlayer@@QAEXXZ
    0x422360 | public: void __thiscall mmPlayer::UpdateHOG(void) | ?UpdateHOG@mmPlayer@@QAEXXZ
    0x422490 | public: virtual void __thiscall mmPlayer::Reset(void) | ?Reset@mmPlayer@@UAEXXZ
    0x422640 | public: void __thiscall mmPlayer::SetSteering(float) | ?SetSteering@mmPlayer@@QAEXM@Z
    0x422C10 | public: virtual void __thiscall mmPlayer::Update(void) | ?Update@mmPlayer@@UAEXXZ
    0x423470 | public: void __thiscall mmPlayer::SetCamInterest(class asInertialCS *) | ?SetCamInterest@mmPlayer@@QAEXPAVasInertialCS@@@Z
    0x4234E0 | public: int __thiscall mmPlayer::IsMaxDamaged(void) | ?IsMaxDamaged@mmPlayer@@QAEHXZ
    0x423510 | public: void __thiscall mmPlayer::EnableRegen(int) | ?EnableRegen@mmPlayer@@QAEXH@Z
    0x423530 | public: void __thiscall mmPlayer::ResetDamage(void) | ?ResetDamage@mmPlayer@@QAEXXZ
    0x423540 | public: void __thiscall mmPlayer::UpdateRegen(void) | ?UpdateRegen@mmPlayer@@QAEXXZ
    0x4235E0 | public: static void __cdecl mmPlayer::DeclareFields(void) | ?DeclareFields@mmPlayer@@SAXXZ
    0x423A60 | public: virtual class MetaClass * __thiscall mmPlayer::GetClass(void) | ?GetClass@mmPlayer@@UAEPAVMetaClass@@XZ
    0x423AA0 | public: virtual __thiscall mmCar::~mmCar(void) | ??1mmCar@@UAE@XZ
    0x423B60 | public: virtual __thiscall PolarCamCS::~PolarCamCS(void) | ??1PolarCamCS@@UAE@XZ
    0x423B70 | public: virtual __thiscall AICamCS::~AICamCS(void) | ??1AICamCS@@UAE@XZ
    0x423B80 | public: virtual __thiscall PointCamCS::~PointCamCS(void) | ??1PointCamCS@@UAE@XZ
    0x423B90 | public: virtual __thiscall PreCamCS::~PreCamCS(void) | ??1PreCamCS@@UAE@XZ
    0x423BA0 | public: virtual __thiscall PostCamCS::~PostCamCS(void) | ??1PostCamCS@@UAE@XZ
    0x423BB0 | public: virtual __thiscall asOverSample::~asOverSample(void) | ??1asOverSample@@UAE@XZ
    0x423BC0 | public: virtual void * __thiscall mmPlayer::`vector deleting destructor'(unsigned int) | ??_EmmPlayer@@UAEPAXI@Z
    0x423C20 | public: virtual __thiscall mmPlayer::~mmPlayer(void) | ??1mmPlayer@@UAE@XZ
    0x423DC0 | public: virtual __thiscall mmPhysEntity::~mmPhysEntity(void) | ??1mmPhysEntity@@UAE@XZ
    0x58FE18 | const mmPlayer::`vftable' | ??_7mmPlayer@@6B@
    0x609A38 | int XcamCheat | ?XcamCheat@@3HA
    0x609A40 | class MetaClass mmPlayerMetaClass | ?mmPlayerMetaClass@@3VMetaClass@@A
    0x609A68 | int RestoreCityCam | ?RestoreCityCam@@3HA
    0x423930 | void * __cdecl new_mmPlayer(int) | ?new_mmPlayer@@YAPAXH@Z
    0x423A10 | void __cdecl delete_mmPlayer(void *,int) | ?delete_mmPlayer@@YAXPAXH@Z
*/

// 0x609A38 | ?XcamCheat@@3HA
inline extern_var(0x609A38, int32_t, XcamCheat);

// 0x609A40 | ?mmPlayerMetaClass@@3VMetaClass@@A
inline extern_var(0x609A40, class MetaClass, mmPlayerMetaClass);

// 0x609A68 | ?RestoreCityCam@@3HA
inline extern_var(0x609A68, int32_t, RestoreCityCam);

// 0x423930 | ?new_mmPlayer@@YAPAXH@Z
inline void* new_mmPlayer(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x423930, arg1);
}

// 0x423A10 | ?delete_mmPlayer@@YAXPAXH@Z
inline void delete_mmPlayer(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x423A10, arg1, arg2);
}

class mmPlayer : asNode
{
public:
    // mmPlayer::`vftable' @ 0x58FE18

    // 0x4210B0 | ??0mmPlayer@@QAE@XZ
    inline mmPlayer()
    {
        // stub<member_func_t<void, mmPlayer>>(0x4210B0, this);

        unimplemented();
    }

    // 0x4213E0 | ?ReInit@mmPlayer@@QAEXPAD@Z
    inline void ReInit(char* arg1)
    {
        return stub<member_func_t<void, mmPlayer, char*>>(0x4213E0, this, arg1);
    }

    // 0x421570 | ?Init@mmPlayer@@QAEXPAD0PAVmmGame@@@Z
    inline void Init(char* arg1, char* arg2, class mmGame* arg3)
    {
        return stub<member_func_t<void, mmPlayer, char*, char*, class mmGame*>>(0x421570, this, arg1, arg2, arg3);
    }

    // 0x4219F0 | ?SetMirrorFOV@mmPlayer@@QAEXXZ
    inline void SetMirrorFOV()
    {
        return stub<member_func_t<void, mmPlayer>>(0x4219F0, this);
    }

    // 0x421A20 | ?SetPreRaceCam@mmPlayer@@QAEXXZ
    inline void SetPreRaceCam()
    {
        return stub<member_func_t<void, mmPlayer>>(0x421A20, this);
    }

    // 0x421B40 | ?SetPostRaceCam@mmPlayer@@QAEXXZ
    inline void SetPostRaceCam()
    {
        return stub<member_func_t<void, mmPlayer>>(0x421B40, this);
    }

    // 0x421C60 | ?IsPOV@mmPlayer@@QAEHXZ
    inline int32_t IsPOV()
    {
        return stub<member_func_t<int32_t, mmPlayer>>(0x421C60, this);
    }

    // 0x421CB0 | ?SetWideFOV@mmPlayer@@QAEXH@Z
    inline void SetWideFOV(int32_t arg1)
    {
        return stub<member_func_t<void, mmPlayer, int32_t>>(0x421CB0, this, arg1);
    }

    // 0x421E40 | ?ToggleWideFOV@mmPlayer@@QAEXXZ
    inline void ToggleWideFOV()
    {
        return stub<member_func_t<void, mmPlayer>>(0x421E40, this);
    }

    // 0x421E60 | ?ToggleCam@mmPlayer@@QAEXXZ
    inline void ToggleCam()
    {
        return stub<member_func_t<void, mmPlayer>>(0x421E60, this);
    }

    // 0x421F80 | ?ToggleExternalView@mmPlayer@@QAEXXZ
    inline void ToggleExternalView()
    {
        return stub<member_func_t<void, mmPlayer>>(0x421F80, this);
    }

    // 0x422130 | ?ToggleDash@mmPlayer@@QAEXXZ
    inline void ToggleDash()
    {
        return stub<member_func_t<void, mmPlayer>>(0x422130, this);
    }

    // 0x422360 | ?UpdateHOG@mmPlayer@@QAEXXZ
    inline void UpdateHOG()
    {
        return stub<member_func_t<void, mmPlayer>>(0x422360, this);
    }

    // 0x422640 | ?SetSteering@mmPlayer@@QAEXM@Z
    inline void SetSteering(float arg1)
    {
        return stub<member_func_t<void, mmPlayer, float>>(0x422640, this, arg1);
    }

    // 0x423470 | ?SetCamInterest@mmPlayer@@QAEXPAVasInertialCS@@@Z
    inline void SetCamInterest(class asInertialCS* arg1)
    {
        return stub<member_func_t<void, mmPlayer, class asInertialCS*>>(0x423470, this, arg1);
    }

    // 0x4234E0 | ?IsMaxDamaged@mmPlayer@@QAEHXZ
    inline int32_t IsMaxDamaged()
    {
        return stub<member_func_t<int32_t, mmPlayer>>(0x4234E0, this);
    }

    // 0x423510 | ?EnableRegen@mmPlayer@@QAEXH@Z
    inline void EnableRegen(int32_t arg1)
    {
        return stub<member_func_t<void, mmPlayer, int32_t>>(0x423510, this, arg1);
    }

    // 0x423530 | ?ResetDamage@mmPlayer@@QAEXXZ
    inline void ResetDamage()
    {
        return stub<member_func_t<void, mmPlayer>>(0x423530, this);
    }

    // 0x423540 | ?UpdateRegen@mmPlayer@@QAEXXZ
    inline void UpdateRegen()
    {
        return stub<member_func_t<void, mmPlayer>>(0x423540, this);
    }

    // 0x4235E0 | ?DeclareFields@mmPlayer@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4235E0);
    }

    // 0x423C20 | ??1mmPlayer@@UAE@XZ
    inline ~mmPlayer() override = 0
    {
        // stub<member_func_t<void, mmPlayer>>(0x423C20, this);

        unimplemented();
    }

    // 0x423A60 | ?GetClass@mmPlayer@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmPlayer>>(0x423A60, this);
    }

    // 0x4213C0 | ?BeforeSave@mmPlayer@@UAEXXZ
    inline void BeforeSave() override
    {
        return stub<member_func_t<void, mmPlayer>>(0x4213C0, this);
    }

    // 0x4213D0 | ?AfterLoad@mmPlayer@@UAEXXZ
    inline void AfterLoad() override
    {
        return stub<member_func_t<void, mmPlayer>>(0x4213D0, this);
    }

    // 0x422C10 | ?Update@mmPlayer@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmPlayer>>(0x422C10, this);
    }

    // 0x422490 | ?Reset@mmPlayer@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmPlayer>>(0x422490, this);
    }
};
