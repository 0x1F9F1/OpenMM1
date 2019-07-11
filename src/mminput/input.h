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
    mminput:input

    0x4D3670 | void __cdecl testsuperq(void) | ?testsuperq@@YAXXZ
    0x4D36A0 | public: __thiscall mmInput::mmInput(void) | ??0mmInput@@QAE@XZ
    0x4D38C0 | public: virtual __thiscall mmInput::~mmInput(void) | ??1mmInput@@UAE@XZ
    0x4D3980 | public: int __thiscall mmInput::AttachToPipe(void) | ?AttachToPipe@mmInput@@QAEHXZ
    0x4D3E30 | public: virtual void __thiscall mmInput::Reset(void) | ?Reset@mmInput@@UAEXXZ
    0x4D3E60 | public: void __thiscall mmInput::IOInit(int,struct LocString *,long) | ?IOInit@mmInput@@QAEXHPAULocString@@J@Z
    0x4D3E90 | public: void __thiscall mmInput::AutoSetup(void) | ?AutoSetup@mmInput@@QAEXXZ
    0x4D3F60 | public: void __thiscall mmInput::SaveCB(void) | ?SaveCB@mmInput@@QAEXXZ
    0x4D3FA0 | public: void __thiscall mmInput::RestoreDefaultConfig(int) | ?RestoreDefaultConfig@mmInput@@QAEXH@Z
    0x4D4000 | public: void __thiscall mmInput::SetDefaultConfig(int) | ?SetDefaultConfig@mmInput@@QAEXH@Z
    0x4D4BF0 | public: void __thiscall mmInput::Init(int) | ?Init@mmInput@@QAEXH@Z
    0x4D4DD0 | public: void __thiscall mmInput::FlagIODevChanged(void) | ?FlagIODevChanged@mmInput@@QAEXXZ
    0x4D4DF0 | public: int __thiscall mmInput::ReturnStateCaptured(void) | ?ReturnStateCaptured@mmInput@@QAEHXZ
    0x4D4E10 | public: void __thiscall mmInput::CaptureState(int) | ?CaptureState@mmInput@@QAEXH@Z
    0x4D4E40 | public: int __thiscall mmInput::BuildCaptureIO(int,class mmIO *,union eqEvent) | ?BuildCaptureIO@mmInput@@QAEHHPAVmmIO@@TeqEvent@@@Z
    0x4D5000 | public: void __thiscall mmInput::ForceAssignment(class mmIO *) | ?ForceAssignment@mmInput@@QAEXPAVmmIO@@@Z
    0x4D5020 | public: int __thiscall mmInput::SanityCheck(class mmIO *,int,int) | ?SanityCheck@mmInput@@QAEHPAVmmIO@@HH@Z
    0x4D50A0 | public: int __thiscall mmInput::IsAlreadyAssigned(class mmIO *,int,int,int) | ?IsAlreadyAssigned@mmInput@@QAEHPAVmmIO@@HHH@Z
    0x4D5180 | public: void __thiscall mmInput::AssignIO(class mmIO *,int,int) | ?AssignIO@mmInput@@QAEXPAVmmIO@@HH@Z
    0x4D5220 | public: virtual void __thiscall mmInput::Update(void) | ?Update@mmInput@@UAEXXZ
    0x4D5300 | public: int __thiscall mmInput::PollStates(void) | ?PollStates@mmInput@@QAEHXZ
    0x4D53B0 | public: int __thiscall mmInput::PollSuperQ(void) | ?PollSuperQ@mmInput@@QAEHXZ
    0x4D53E0 | public: void __thiscall mmInput::Flush(void) | ?Flush@mmInput@@QAEXXZ
    0x4D5440 | public: void __thiscall mmInput::ClearEventHitFlags(void) | ?ClearEventHitFlags@mmInput@@QAEXXZ
    0x4D5460 | private: void __thiscall mmInput::ProcessMouseEvents(void) | ?ProcessMouseEvents@mmInput@@AAEXXZ
    0x4D54C0 | private: void __thiscall mmInput::ProcessKeyboardEvents(void) | ?ProcessKeyboardEvents@mmInput@@AAEXXZ
    0x4D5510 | private: void __thiscall mmInput::GetBufferedKeyboardData(void) | ?GetBufferedKeyboardData@mmInput@@AAEXXZ
    0x4D5530 | private: int __thiscall mmInput::GetNextKeyboardEvent(union eqEvent *) | ?GetNextKeyboardEvent@mmInput@@AAEHPATeqEvent@@@Z
    0x4D5570 | private: void __thiscall mmInput::ProcessEvents(void) | ?ProcessEvents@mmInput@@AAEXXZ
    0x4D5590 | private: __int64 __thiscall mmInput::ProcessStates(void) | ?ProcessStates@mmInput@@AAE_JXZ
    0x4D5670 | private: __int64 __thiscall mmInput::ScanState(class mmIO *) | ?ScanState@mmInput@@AAE_JPAVmmIO@@@Z
    0x4D5820 | private: int __thiscall mmInput::EventToButton(int) | ?EventToButton@mmInput@@AAEHH@Z
    0x4D5850 | private: void __thiscall mmInput::ProcessJoyEvents(void) | ?ProcessJoyEvents@mmInput@@AAEXXZ
    0x4D5D20 | private: __int64 __thiscall mmInput::ScanForEvent(union eqEvent *) | ?ScanForEvent@mmInput@@AAE_JPATeqEvent@@@Z
    0x4D5DE0 | private: void __thiscall mmInput::PutEventInQueue(__int64) | ?PutEventInQueue@mmInput@@AAEX_J@Z
    0x4D5E10 | private: void __thiscall mmInput::PollContinuous(class mmIO *) | ?PollContinuous@mmInput@@AAEXPAVmmIO@@@Z
    0x4D62A0 | public: float __thiscall mmInput::GetThrottle(void) | ?GetThrottle@mmInput@@QAEMXZ
    0x4D62C0 | public: float __thiscall mmInput::GetThrottleVal(void) | ?GetThrottleVal@mmInput@@QAEMXZ
    0x4D6330 | public: float __thiscall mmInput::GetBrakes(void) | ?GetBrakes@mmInput@@QAEMXZ
    0x4D6350 | public: float __thiscall mmInput::GetBrakesVal(void) | ?GetBrakesVal@mmInput@@QAEMXZ
    0x4D63C0 | public: float __thiscall mmInput::GetHandBrake(void) | ?GetHandBrake@mmInput@@QAEMXZ
    0x4D6440 | private: float __thiscall mmInput::FilterDiscreteSteering(float) | ?FilterDiscreteSteering@mmInput@@AAEMM@Z
    0x4D65E0 | public: float __thiscall mmInput::FilterGamepadSteering(void) | ?FilterGamepadSteering@mmInput@@QAEMXZ
    0x4D6770 | public: float __thiscall mmInput::GetSteering(void) | ?GetSteering@mmInput@@QAEMXZ
    0x4D6820 | public: float __thiscall mmInput::GetCamPan(void) | ?GetCamPan@mmInput@@QAEMXZ
    0x4D6920 | public: int __thiscall mmInput::DeviceConnected(void) | ?DeviceConnected@mmInput@@QAEHXZ
    0x4D6930 | public: int __thiscall mmInput::JoystickConnected(void) | ?JoystickConnected@mmInput@@QAEHXZ
    0x4D6940 | public: int __thiscall mmInput::GamepadConnected(void) | ?GamepadConnected@mmInput@@QAEHXZ
    0x4D6950 | public: int __thiscall mmInput::WheelConnected(void) | ?WheelConnected@mmInput@@QAEHXZ
    0x4D6960 | public: void __thiscall mmInput::SetDeadZone(float) | ?SetDeadZone@mmInput@@QAEXM@Z
    0x4D6990 | public: int __thiscall mmInput::JoystickHasCoolie(void) | ?JoystickHasCoolie@mmInput@@QAEHXZ
    0x4D69A0 | public: int __thiscall mmInput::JoystickHasThrottle(void) | ?JoystickHasThrottle@mmInput@@QAEHXZ
    0x4D69B0 | public: int __thiscall mmInput::WheelHas3Axis(void) | ?WheelHas3Axis@mmInput@@QAEHXZ
    0x4D69F0 | public: int __thiscall mmInput::DoingFF(void) | ?DoingFF@mmInput@@QAEHXZ
    0x4D6A20 | public: void __thiscall mmInput::StopAllFF(void) | ?StopAllFF@mmInput@@QAEXXZ
    0x4D6A30 | public: void __thiscall mmInput::SetForceFeedbackScale(float) | ?SetForceFeedbackScale@mmInput@@QAEXM@Z
    0x4D6A80 | public: void __thiscall mmInput::SetRoadForceScale(float) | ?SetRoadForceScale@mmInput@@QAEXM@Z
    0x4D6AD0 | public: int __thiscall mmInput::ToggleFFEnabled(int) | ?ToggleFFEnabled@mmInput@@QAEHH@Z
    0x4D6AF0 | public: int __thiscall mmInput::FFPlay(int) | ?FFPlay@mmInput@@QAEHH@Z
    0x4D6B20 | public: int __thiscall mmInput::FFStop(int) | ?FFStop@mmInput@@QAEHH@Z
    0x4D6B50 | public: int __thiscall mmInput::FFIsPlaying(int) | ?FFIsPlaying@mmInput@@QAEHH@Z
    0x4D6B80 | public: int __thiscall mmInput::FFSetValues(int,float,float) | ?FFSetValues@mmInput@@QAEHHMM@Z
    0x4D6BB0 | public: int __thiscall mmInput::PopEvent(int *) | ?PopEvent@mmInput@@QAEHPAH@Z
    0x4D6BE0 | public: int __thiscall mmInput::LoadConfig(class Stream *) | ?LoadConfig@mmInput@@QAEHPAVStream@@@Z
    0x4D6C70 | public: int __thiscall mmInput::BinaryLoadConfig(class Stream *) | ?BinaryLoadConfig@mmInput@@QAEHPAVStream@@@Z
    0x4D6D30 | public: int __thiscall mmInput::SaveConfig(class Stream *) | ?SaveConfig@mmInput@@QAEHPAVStream@@@Z
    0x4D6DB0 | public: int __thiscall mmInput::BinarySaveConfig(class Stream *) | ?BinarySaveConfig@mmInput@@QAEHPAVStream@@@Z
    0x4D6E40 | public: static void __cdecl mmInput::DeclareFields(void) | ?DeclareFields@mmInput@@SAXXZ
    0x4D6FF0 | public: virtual class MetaClass * __thiscall mmInput::GetClass(void) | ?GetClass@mmInput@@UAEPAVMetaClass@@XZ
    0x4D7000 | public: void __thiscall mmInput::PrintIODev(void) | ?PrintIODev@mmInput@@QAEXXZ
    0x4D70D0 | public: int __thiscall mmInput::SaveCodeConfig(class Stream *) | ?SaveCodeConfig@mmInput@@QAEHPAVStream@@@Z
    0x4D77A0 | public: void * __thiscall mmIO::`vector deleting destructor'(unsigned int) | ??_EmmIO@@QAEPAXI@Z
    0x4D7800 | public: virtual void * __thiscall mmIODev::`vector deleting destructor'(unsigned int) | ??_EmmIODev@@UAEPAXI@Z
    0x4D7860 | public: virtual void * __thiscall mmInput::`vector deleting destructor'(unsigned int) | ??_EmmInput@@UAEPAXI@Z
    0x594738 | const mmInput::`vftable' | ??_7mmInput@@6B@
    0x67B4F0 | class mmIODev * IODev | ?IODev@@3PAVmmIODev@@A
    0x67B4F8 | class MetaClass mmInputMetaClass | ?mmInputMetaClass@@3VMetaClass@@A
    0x67B520 | char * LocStrKey | ?LocStrKey@@3PADA
    0x67B524 | class mmInput * GameInputPtr | ?GameInputPtr@@3PAVmmInput@@A
    0x67B528 | char * LocStrButton | ?LocStrButton@@3PADA
    0x67B52C | char * LocStrUndef | ?LocStrUndef@@3PADA
    0x67B530 | char * LocStrJoystick | ?LocStrJoystick@@3PADA
    0x67B534 | int UseDIKey | ?UseDIKey@@3HA
    0x67B538 | int InputConfiguration | ?InputConfiguration@@3HA
    0x67B53C | struct IDirectInputA * gpdi | ?gpdi@@3PAUIDirectInputA@@A
    0x67B540 | float testValue | ?testValue@@3MA
    0x4D6ED0 | void * __cdecl new_mmInput(int) | ?new_mmInput@@YAPAXH@Z
    0x4D6FA0 | void __cdecl delete_mmInput(void *,int) | ?delete_mmInput@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x4D3670 | ?testsuperq@@YAXXZ
inline void testsuperq()
{
    return stub<cdecl_t<void>>(0x4D3670);
}

// 0x67B4F0 | ?IODev@@3PAVmmIODev@@A
inline extern_var(0x67B4F0, class mmIODev*, IODev);

// 0x67B4F8 | ?mmInputMetaClass@@3VMetaClass@@A
inline extern_var(0x67B4F8, class MetaClass, mmInputMetaClass);

// 0x67B520 | ?LocStrKey@@3PADA
inline extern_var(0x67B520, char*, LocStrKey);

// 0x67B524 | ?GameInputPtr@@3PAVmmInput@@A
inline extern_var(0x67B524, class mmInput*, GameInputPtr);

// 0x67B528 | ?LocStrButton@@3PADA
inline extern_var(0x67B528, char*, LocStrButton);

// 0x67B52C | ?LocStrUndef@@3PADA
inline extern_var(0x67B52C, char*, LocStrUndef);

// 0x67B530 | ?LocStrJoystick@@3PADA
inline extern_var(0x67B530, char*, LocStrJoystick);

// 0x67B534 | ?UseDIKey@@3HA
inline extern_var(0x67B534, int32_t, UseDIKey);

// 0x67B538 | ?InputConfiguration@@3HA
inline extern_var(0x67B538, int32_t, InputConfiguration);

// 0x67B53C | ?gpdi@@3PAUIDirectInputA@@A
inline extern_var(0x67B53C, struct IDirectInputA*, gpdi);

// 0x67B540 | ?testValue@@3MA
inline extern_var(0x67B540, float, testValue);

// 0x4D6ED0 | ?new_mmInput@@YAPAXH@Z
inline void* new_mmInput(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4D6ED0, arg1);
}

// 0x4D6FA0 | ?delete_mmInput@@YAXPAXH@Z
inline void delete_mmInput(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4D6FA0, arg1, arg2);
}

class mmInput : asNode
{
public:
    // mmInput::`vftable' @ 0x594738

    // 0x4D36A0 | ??0mmInput@@QAE@XZ
    inline mmInput()
    {
        stub<member_func_t<void, mmInput>>(0x4D36A0, this);
    }

    // 0x4D3980 | ?AttachToPipe@mmInput@@QAEHXZ
    inline int32_t AttachToPipe()
    {
        return stub<member_func_t<int32_t, mmInput>>(0x4D3980, this);
    }

    // 0x4D3E60 | ?IOInit@mmInput@@QAEXHPAULocString@@J@Z
    inline void IOInit(int32_t arg1, struct LocString* arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmInput, int32_t, struct LocString*, int32_t>>(
            0x4D3E60, this, arg1, arg2, arg3);
    }

    // 0x4D3E90 | ?AutoSetup@mmInput@@QAEXXZ
    inline void AutoSetup()
    {
        return stub<member_func_t<void, mmInput>>(0x4D3E90, this);
    }

    // 0x4D3F60 | ?SaveCB@mmInput@@QAEXXZ
    inline void SaveCB()
    {
        return stub<member_func_t<void, mmInput>>(0x4D3F60, this);
    }

    // 0x4D3FA0 | ?RestoreDefaultConfig@mmInput@@QAEXH@Z
    inline void RestoreDefaultConfig(int32_t arg1)
    {
        return stub<member_func_t<void, mmInput, int32_t>>(0x4D3FA0, this, arg1);
    }

    // 0x4D4000 | ?SetDefaultConfig@mmInput@@QAEXH@Z
    inline void SetDefaultConfig(int32_t arg1)
    {
        return stub<member_func_t<void, mmInput, int32_t>>(0x4D4000, this, arg1);
    }

    // 0x4D4BF0 | ?Init@mmInput@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, mmInput, int32_t>>(0x4D4BF0, this, arg1);
    }

    // 0x4D4DD0 | ?FlagIODevChanged@mmInput@@QAEXXZ
    inline void FlagIODevChanged()
    {
        return stub<member_func_t<void, mmInput>>(0x4D4DD0, this);
    }

    // 0x4D4DF0 | ?ReturnStateCaptured@mmInput@@QAEHXZ
    inline int32_t ReturnStateCaptured()
    {
        return stub<member_func_t<int32_t, mmInput>>(0x4D4DF0, this);
    }

    // 0x4D4E10 | ?CaptureState@mmInput@@QAEXH@Z
    inline void CaptureState(int32_t arg1)
    {
        return stub<member_func_t<void, mmInput, int32_t>>(0x4D4E10, this, arg1);
    }

    // 0x4D4E40 | ?BuildCaptureIO@mmInput@@QAEHHPAVmmIO@@TeqEvent@@@Z
    inline int32_t BuildCaptureIO(int32_t arg1, class mmIO* arg2, union eqEvent arg3)
    {
        return stub<member_func_t<int32_t, mmInput, int32_t, class mmIO*, union eqEvent>>(
            0x4D4E40, this, arg1, arg2, arg3);
    }

    // 0x4D5000 | ?ForceAssignment@mmInput@@QAEXPAVmmIO@@@Z
    inline void ForceAssignment(class mmIO* arg1)
    {
        return stub<member_func_t<void, mmInput, class mmIO*>>(0x4D5000, this, arg1);
    }

    // 0x4D5020 | ?SanityCheck@mmInput@@QAEHPAVmmIO@@HH@Z
    inline int32_t SanityCheck(class mmIO* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, mmInput, class mmIO*, int32_t, int32_t>>(0x4D5020, this, arg1, arg2, arg3);
    }

    // 0x4D50A0 | ?IsAlreadyAssigned@mmInput@@QAEHPAVmmIO@@HHH@Z
    inline int32_t IsAlreadyAssigned(class mmIO* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<int32_t, mmInput, class mmIO*, int32_t, int32_t, int32_t>>(
            0x4D50A0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4D5180 | ?AssignIO@mmInput@@QAEXPAVmmIO@@HH@Z
    inline void AssignIO(class mmIO* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmInput, class mmIO*, int32_t, int32_t>>(0x4D5180, this, arg1, arg2, arg3);
    }

    // 0x4D5300 | ?PollStates@mmInput@@QAEHXZ
    inline int32_t PollStates()
    {
        return stub<member_func_t<int32_t, mmInput>>(0x4D5300, this);
    }

    // 0x4D53B0 | ?PollSuperQ@mmInput@@QAEHXZ
    inline int32_t PollSuperQ()
    {
        return stub<member_func_t<int32_t, mmInput>>(0x4D53B0, this);
    }

    // 0x4D53E0 | ?Flush@mmInput@@QAEXXZ
    inline void Flush()
    {
        return stub<member_func_t<void, mmInput>>(0x4D53E0, this);
    }

    // 0x4D5440 | ?ClearEventHitFlags@mmInput@@QAEXXZ
    inline void ClearEventHitFlags()
    {
        return stub<member_func_t<void, mmInput>>(0x4D5440, this);
    }

    // 0x4D5460 | ?ProcessMouseEvents@mmInput@@AAEXXZ
    inline void ProcessMouseEvents()
    {
        return stub<member_func_t<void, mmInput>>(0x4D5460, this);
    }

    // 0x4D54C0 | ?ProcessKeyboardEvents@mmInput@@AAEXXZ
    inline void ProcessKeyboardEvents()
    {
        return stub<member_func_t<void, mmInput>>(0x4D54C0, this);
    }

    // 0x4D5510 | ?GetBufferedKeyboardData@mmInput@@AAEXXZ
    inline void GetBufferedKeyboardData()
    {
        return stub<member_func_t<void, mmInput>>(0x4D5510, this);
    }

    // 0x4D5530 | ?GetNextKeyboardEvent@mmInput@@AAEHPATeqEvent@@@Z
    inline int32_t GetNextKeyboardEvent(union eqEvent* arg1)
    {
        return stub<member_func_t<int32_t, mmInput, union eqEvent*>>(0x4D5530, this, arg1);
    }

    // 0x4D5570 | ?ProcessEvents@mmInput@@AAEXXZ
    inline void ProcessEvents()
    {
        return stub<member_func_t<void, mmInput>>(0x4D5570, this);
    }

    // 0x4D5590 | ?ProcessStates@mmInput@@AAE_JXZ
    inline int64_t ProcessStates()
    {
        return stub<member_func_t<int64_t, mmInput>>(0x4D5590, this);
    }

    // 0x4D5670 | ?ScanState@mmInput@@AAE_JPAVmmIO@@@Z
    inline int64_t ScanState(class mmIO* arg1)
    {
        return stub<member_func_t<int64_t, mmInput, class mmIO*>>(0x4D5670, this, arg1);
    }

    // 0x4D5820 | ?EventToButton@mmInput@@AAEHH@Z
    inline int32_t EventToButton(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmInput, int32_t>>(0x4D5820, this, arg1);
    }

    // 0x4D5850 | ?ProcessJoyEvents@mmInput@@AAEXXZ
    inline void ProcessJoyEvents()
    {
        return stub<member_func_t<void, mmInput>>(0x4D5850, this);
    }

    // 0x4D5D20 | ?ScanForEvent@mmInput@@AAE_JPATeqEvent@@@Z
    inline int64_t ScanForEvent(union eqEvent* arg1)
    {
        return stub<member_func_t<int64_t, mmInput, union eqEvent*>>(0x4D5D20, this, arg1);
    }

    // 0x4D5DE0 | ?PutEventInQueue@mmInput@@AAEX_J@Z
    inline void PutEventInQueue(int64_t arg1)
    {
        return stub<member_func_t<void, mmInput, int64_t>>(0x4D5DE0, this, arg1);
    }

    // 0x4D5E10 | ?PollContinuous@mmInput@@AAEXPAVmmIO@@@Z
    inline void PollContinuous(class mmIO* arg1)
    {
        return stub<member_func_t<void, mmInput, class mmIO*>>(0x4D5E10, this, arg1);
    }

    // 0x4D62A0 | ?GetThrottle@mmInput@@QAEMXZ
    inline float GetThrottle()
    {
        return stub<member_func_t<float, mmInput>>(0x4D62A0, this);
    }

    // 0x4D62C0 | ?GetThrottleVal@mmInput@@QAEMXZ
    inline float GetThrottleVal()
    {
        return stub<member_func_t<float, mmInput>>(0x4D62C0, this);
    }

    // 0x4D6330 | ?GetBrakes@mmInput@@QAEMXZ
    inline float GetBrakes()
    {
        return stub<member_func_t<float, mmInput>>(0x4D6330, this);
    }

    // 0x4D6350 | ?GetBrakesVal@mmInput@@QAEMXZ
    inline float GetBrakesVal()
    {
        return stub<member_func_t<float, mmInput>>(0x4D6350, this);
    }

    // 0x4D63C0 | ?GetHandBrake@mmInput@@QAEMXZ
    inline float GetHandBrake()
    {
        return stub<member_func_t<float, mmInput>>(0x4D63C0, this);
    }

    // 0x4D6440 | ?FilterDiscreteSteering@mmInput@@AAEMM@Z
    inline float FilterDiscreteSteering(float arg1)
    {
        return stub<member_func_t<float, mmInput, float>>(0x4D6440, this, arg1);
    }

    // 0x4D65E0 | ?FilterGamepadSteering@mmInput@@QAEMXZ
    inline float FilterGamepadSteering()
    {
        return stub<member_func_t<float, mmInput>>(0x4D65E0, this);
    }

    // 0x4D6770 | ?GetSteering@mmInput@@QAEMXZ
    inline float GetSteering()
    {
        return stub<member_func_t<float, mmInput>>(0x4D6770, this);
    }

    // 0x4D6820 | ?GetCamPan@mmInput@@QAEMXZ
    inline float GetCamPan()
    {
        return stub<member_func_t<float, mmInput>>(0x4D6820, this);
    }

    // 0x4D6920 | ?DeviceConnected@mmInput@@QAEHXZ
    inline int32_t DeviceConnected()
    {
        return stub<member_func_t<int32_t, mmInput>>(0x4D6920, this);
    }

    // 0x4D6930 | ?JoystickConnected@mmInput@@QAEHXZ
    inline int32_t JoystickConnected()
    {
        return stub<member_func_t<int32_t, mmInput>>(0x4D6930, this);
    }

    // 0x4D6940 | ?GamepadConnected@mmInput@@QAEHXZ
    inline int32_t GamepadConnected()
    {
        return stub<member_func_t<int32_t, mmInput>>(0x4D6940, this);
    }

    // 0x4D6950 | ?WheelConnected@mmInput@@QAEHXZ
    inline int32_t WheelConnected()
    {
        return stub<member_func_t<int32_t, mmInput>>(0x4D6950, this);
    }

    // 0x4D6960 | ?SetDeadZone@mmInput@@QAEXM@Z
    inline void SetDeadZone(float arg1)
    {
        return stub<member_func_t<void, mmInput, float>>(0x4D6960, this, arg1);
    }

    // 0x4D6990 | ?JoystickHasCoolie@mmInput@@QAEHXZ
    inline int32_t JoystickHasCoolie()
    {
        return stub<member_func_t<int32_t, mmInput>>(0x4D6990, this);
    }

    // 0x4D69A0 | ?JoystickHasThrottle@mmInput@@QAEHXZ
    inline int32_t JoystickHasThrottle()
    {
        return stub<member_func_t<int32_t, mmInput>>(0x4D69A0, this);
    }

    // 0x4D69B0 | ?WheelHas3Axis@mmInput@@QAEHXZ
    inline int32_t WheelHas3Axis()
    {
        return stub<member_func_t<int32_t, mmInput>>(0x4D69B0, this);
    }

    // 0x4D69F0 | ?DoingFF@mmInput@@QAEHXZ
    inline int32_t DoingFF()
    {
        return stub<member_func_t<int32_t, mmInput>>(0x4D69F0, this);
    }

    // 0x4D6A20 | ?StopAllFF@mmInput@@QAEXXZ
    inline void StopAllFF()
    {
        return stub<member_func_t<void, mmInput>>(0x4D6A20, this);
    }

    // 0x4D6A30 | ?SetForceFeedbackScale@mmInput@@QAEXM@Z
    inline void SetForceFeedbackScale(float arg1)
    {
        return stub<member_func_t<void, mmInput, float>>(0x4D6A30, this, arg1);
    }

    // 0x4D6A80 | ?SetRoadForceScale@mmInput@@QAEXM@Z
    inline void SetRoadForceScale(float arg1)
    {
        return stub<member_func_t<void, mmInput, float>>(0x4D6A80, this, arg1);
    }

    // 0x4D6AD0 | ?ToggleFFEnabled@mmInput@@QAEHH@Z
    inline int32_t ToggleFFEnabled(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmInput, int32_t>>(0x4D6AD0, this, arg1);
    }

    // 0x4D6AF0 | ?FFPlay@mmInput@@QAEHH@Z
    inline int32_t FFPlay(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmInput, int32_t>>(0x4D6AF0, this, arg1);
    }

    // 0x4D6B20 | ?FFStop@mmInput@@QAEHH@Z
    inline int32_t FFStop(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmInput, int32_t>>(0x4D6B20, this, arg1);
    }

    // 0x4D6B50 | ?FFIsPlaying@mmInput@@QAEHH@Z
    inline int32_t FFIsPlaying(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmInput, int32_t>>(0x4D6B50, this, arg1);
    }

    // 0x4D6B80 | ?FFSetValues@mmInput@@QAEHHMM@Z
    inline int32_t FFSetValues(int32_t arg1, float arg2, float arg3)
    {
        return stub<member_func_t<int32_t, mmInput, int32_t, float, float>>(0x4D6B80, this, arg1, arg2, arg3);
    }

    // 0x4D6BB0 | ?PopEvent@mmInput@@QAEHPAH@Z
    inline int32_t PopEvent(int32_t* arg1)
    {
        return stub<member_func_t<int32_t, mmInput, int32_t*>>(0x4D6BB0, this, arg1);
    }

    // 0x4D6BE0 | ?LoadConfig@mmInput@@QAEHPAVStream@@@Z
    inline int32_t LoadConfig(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmInput, class Stream*>>(0x4D6BE0, this, arg1);
    }

    // 0x4D6C70 | ?BinaryLoadConfig@mmInput@@QAEHPAVStream@@@Z
    inline int32_t BinaryLoadConfig(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmInput, class Stream*>>(0x4D6C70, this, arg1);
    }

    // 0x4D6D30 | ?SaveConfig@mmInput@@QAEHPAVStream@@@Z
    inline int32_t SaveConfig(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmInput, class Stream*>>(0x4D6D30, this, arg1);
    }

    // 0x4D6DB0 | ?BinarySaveConfig@mmInput@@QAEHPAVStream@@@Z
    inline int32_t BinarySaveConfig(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmInput, class Stream*>>(0x4D6DB0, this, arg1);
    }

    // 0x4D6E40 | ?DeclareFields@mmInput@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4D6E40);
    }

    // 0x4D7000 | ?PrintIODev@mmInput@@QAEXXZ
    inline void PrintIODev()
    {
        return stub<member_func_t<void, mmInput>>(0x4D7000, this);
    }

    // 0x4D70D0 | ?SaveCodeConfig@mmInput@@QAEHPAVStream@@@Z
    inline int32_t SaveCodeConfig(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmInput, class Stream*>>(0x4D70D0, this, arg1);
    }

    // 0x4D38C0 | ??1mmInput@@UAE@XZ
    inline ~mmInput() override
    {
        stub<member_func_t<void, mmInput>>(0x4D38C0, this);
    }

    // 0x4D6FF0 | ?GetClass@mmInput@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmInput>>(0x4D6FF0, this);
    }

    // 0x4D5220 | ?Update@mmInput@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmInput>>(0x4D5220, this);
    }

    // 0x4D3E30 | ?Reset@mmInput@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmInput>>(0x4D3E30, this);
    }
};
