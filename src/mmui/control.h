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
    mmui:control

    0x497C10 | public: __thiscall ControlSetup::ControlSetup(int) | ??0ControlSetup@@QAE@H@Z
    0x497E00 | public: virtual __thiscall ControlSetup::~ControlSetup(void) | ??1ControlSetup@@UAE@XZ
    0x497E60 | public: void __thiscall ControlSetup::CreateDeviceOptions(void) | ?CreateDeviceOptions@ControlSetup@@QAEXXZ
    0x498120 | public: void __thiscall ControlSetup::DeactivateAllDeviceOptions(void) | ?DeactivateAllDeviceOptions@ControlSetup@@QAEXXZ
    0x498180 | public: void __thiscall ControlSetup::ActivateDeviceOptions(void) | ?ActivateDeviceOptions@ControlSetup@@QAEXXZ
    0x498460 | public: float __thiscall ControlSetup::SetControlPosition(class uiWidget *,float,float) | ?SetControlPosition@ControlSetup@@QAEMPAVuiWidget@@MM@Z
    0x498480 | public: void __thiscall ControlSetup::POVCB(void) | ?POVCB@ControlSetup@@QAEXXZ
    0x498490 | public: void __thiscall ControlSetup::SetSensitivityCB(void) | ?SetSensitivityCB@ControlSetup@@QAEXXZ
    0x4984A0 | public: void __thiscall ControlSetup::ControlSelect(void) | ?ControlSelect@ControlSetup@@QAEXXZ
    0x4984F0 | public: virtual void __thiscall ControlSetup::PreSetup(void) | ?PreSetup@ControlSetup@@UAEXXZ
    0x498520 | public: void __thiscall ControlSetup::SetFFPermissions(void) | ?SetFFPermissions@ControlSetup@@QAEXXZ
    0x498560 | public: void __thiscall ControlSetup::InitCustomControls(void) | ?InitCustomControls@ControlSetup@@QAEXXZ
    0x4985F0 | public: virtual void __thiscall ControlSetup::Update(void) | ?Update@ControlSetup@@UAEXXZ
    0x498610 | public: virtual void __thiscall ControlSetup::StoreCurrentSetup(void) | ?StoreCurrentSetup@ControlSetup@@UAEXXZ
    0x498620 | public: virtual void __thiscall ControlSetup::ResetDefaultAction(void) | ?ResetDefaultAction@ControlSetup@@UAEXXZ
    0x498660 | public: void __thiscall ControlSetup::LaunchJoyCpl(void) | ?LaunchJoyCpl@ControlSetup@@QAEXXZ
    0x4987F0 | public: virtual void __thiscall ControlSetup::CancelAction(void) | ?CancelAction@ControlSetup@@UAEXXZ
    0x498800 | public: virtual void __thiscall ControlSetup::DoneAction(void) | ?DoneAction@ControlSetup@@UAEXXZ
    0x498810 | public: void __thiscall ControlSetup::BadAssignCB(void) | ?BadAssignCB@ControlSetup@@QAEXXZ
    0x498840 | public: void __thiscall ControlSetup::ClearBadAssignment(void) | ?ClearBadAssignment@ControlSetup@@QAEXXZ
    0x498850 | public: void __thiscall ControlSetup::CancelBadAssignment(void) | ?CancelBadAssignment@ControlSetup@@QAEXXZ
    0x498870 | public: void __thiscall ControlSetup::VerifyBadAssignment(void) | ?VerifyBadAssignment@ControlSetup@@QAEXXZ
    0x498890 | public: virtual void * __thiscall ControlSetup::`scalar deleting destructor'(unsigned int) | ??_GControlSetup@@UAEPAXI@Z
    0x498890 | public: virtual void * __thiscall ControlSetup::`vector deleting destructor'(unsigned int) | ??_EControlSetup@@UAEPAXI@Z
    0x592810 | const ControlSetup::`vftable' | ??_7ControlSetup@@6B@
    0x498710 | unsigned long __stdcall CalibrateWatcher(void *) | ?CalibrateWatcher@@YGKPAX@Z
*/

#include "hooking.h"

// 0x498710 | ?CalibrateWatcher@@YGKPAX@Z
inline uint32_t __stdcall CalibrateWatcher(void* arg1)
{
    return stub<stdcall_t<uint32_t, void*>>(0x498710, arg1);
}

struct ControlSetup : OptionsBase
{
public:
    // ControlSetup::`vftable' @ 0x592810

    // 0x497C10 | ??0ControlSetup@@QAE@H@Z
    inline ControlSetup(int32_t arg1)
    {
        // stub<member_func_t<void, ControlSetup, int32_t>>(0x497C10, this, arg1);

        unimplemented();
    }

    // 0x497E60 | ?CreateDeviceOptions@ControlSetup@@QAEXXZ
    inline void CreateDeviceOptions()
    {
        return stub<member_func_t<void, ControlSetup>>(0x497E60, this);
    }

    // 0x498120 | ?DeactivateAllDeviceOptions@ControlSetup@@QAEXXZ
    inline void DeactivateAllDeviceOptions()
    {
        return stub<member_func_t<void, ControlSetup>>(0x498120, this);
    }

    // 0x498180 | ?ActivateDeviceOptions@ControlSetup@@QAEXXZ
    inline void ActivateDeviceOptions()
    {
        return stub<member_func_t<void, ControlSetup>>(0x498180, this);
    }

    // 0x498460 | ?SetControlPosition@ControlSetup@@QAEMPAVuiWidget@@MM@Z
    inline float SetControlPosition(class uiWidget* arg1, float arg2, float arg3)
    {
        return stub<member_func_t<float, ControlSetup, class uiWidget*, float, float>>(
            0x498460, this, arg1, arg2, arg3);
    }

    // 0x498480 | ?POVCB@ControlSetup@@QAEXXZ
    inline void POVCB()
    {
        return stub<member_func_t<void, ControlSetup>>(0x498480, this);
    }

    // 0x498490 | ?SetSensitivityCB@ControlSetup@@QAEXXZ
    inline void SetSensitivityCB()
    {
        return stub<member_func_t<void, ControlSetup>>(0x498490, this);
    }

    // 0x4984A0 | ?ControlSelect@ControlSetup@@QAEXXZ
    inline void ControlSelect()
    {
        return stub<member_func_t<void, ControlSetup>>(0x4984A0, this);
    }

    // 0x498520 | ?SetFFPermissions@ControlSetup@@QAEXXZ
    inline void SetFFPermissions()
    {
        return stub<member_func_t<void, ControlSetup>>(0x498520, this);
    }

    // 0x498560 | ?InitCustomControls@ControlSetup@@QAEXXZ
    inline void InitCustomControls()
    {
        return stub<member_func_t<void, ControlSetup>>(0x498560, this);
    }

    // 0x498660 | ?LaunchJoyCpl@ControlSetup@@QAEXXZ
    inline void LaunchJoyCpl()
    {
        return stub<member_func_t<void, ControlSetup>>(0x498660, this);
    }

    // 0x498810 | ?BadAssignCB@ControlSetup@@QAEXXZ
    inline void BadAssignCB()
    {
        return stub<member_func_t<void, ControlSetup>>(0x498810, this);
    }

    // 0x498840 | ?ClearBadAssignment@ControlSetup@@QAEXXZ
    inline void ClearBadAssignment()
    {
        return stub<member_func_t<void, ControlSetup>>(0x498840, this);
    }

    // 0x498850 | ?CancelBadAssignment@ControlSetup@@QAEXXZ
    inline void CancelBadAssignment()
    {
        return stub<member_func_t<void, ControlSetup>>(0x498850, this);
    }

    // 0x498870 | ?VerifyBadAssignment@ControlSetup@@QAEXXZ
    inline void VerifyBadAssignment()
    {
        return stub<member_func_t<void, ControlSetup>>(0x498870, this);
    }

    // 0x497E00 | ??1ControlSetup@@UAE@XZ
    inline ~ControlSetup() override = 0
    {
        // stub<member_func_t<void, ControlSetup>>(0x497E00, this);

        unimplemented();
    }

    // 0x4985F0 | ?Update@ControlSetup@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, ControlSetup>>(0x4985F0, this);
    }

    // 0x4984F0 | ?PreSetup@ControlSetup@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, ControlSetup>>(0x4984F0, this);
    }

    // 0x4987F0 | ?CancelAction@ControlSetup@@UAEXXZ
    inline void CancelAction() override
    {
        return stub<member_func_t<void, ControlSetup>>(0x4987F0, this);
    }

    // 0x498800 | ?DoneAction@ControlSetup@@UAEXXZ
    inline void DoneAction() override
    {
        return stub<member_func_t<void, ControlSetup>>(0x498800, this);
    }

    // 0x498620 | ?ResetDefaultAction@ControlSetup@@UAEXXZ
    inline void ResetDefaultAction() override
    {
        return stub<member_func_t<void, ControlSetup>>(0x498620, this);
    }

    // 0x498610 | ?StoreCurrentSetup@ControlSetup@@UAEXXZ
    inline void StoreCurrentSetup() override
    {
        return stub<member_func_t<void, ControlSetup>>(0x498610, this);
    }
};
