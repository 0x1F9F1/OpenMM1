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

// mmui:control

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
        stub<member_func_t<void, ControlSetup, int32_t>>(0x497C10, this, arg1);
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
    inline ~ControlSetup() override
    {
        stub<member_func_t<void, ControlSetup>>(0x497E00, this);
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
