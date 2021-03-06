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
    mminput:joystick

    0x4D8DE0 | public: __thiscall mmJaxis::mmJaxis(void) | ??0mmJaxis@@QAE@XZ
    0x4D8E00 | public: __thiscall mmJaxis::~mmJaxis(void) | ??1mmJaxis@@QAE@XZ
    0x4D8E10 | public: void __thiscall mmJaxis::SetRange(float,float) | ?SetRange@mmJaxis@@QAEXMM@Z
    0x4D8E30 | public: void __thiscall mmJaxis::Normalize(float) | ?Normalize@mmJaxis@@QAEXM@Z
    0x4D8E50 | public: void __thiscall mmJaxis::NormalizePOV(unsigned long) | ?NormalizePOV@mmJaxis@@QAEXK@Z
    0x4D8E90 | public: int __thiscall mmJaxis::Capture(void) | ?Capture@mmJaxis@@QAEHXZ
    0x4D8EC0 | public: void __thiscall mmJaxis::ResetCapture(void) | ?ResetCapture@mmJaxis@@QAEXXZ
    0x4D8EE0 | public: __thiscall mmJoystick::mmJoystick(void) | ??0mmJoystick@@QAE@XZ
    0x4D8FA0 | public: __thiscall mmJoystick::~mmJoystick(void) | ??1mmJoystick@@QAE@XZ
    0x4D90C0 | public: int __thiscall mmJoystick::Init(struct IDirectInputDevice2A *,struct HWND__ *) | ?Init@mmJoystick@@QAEHPAUIDirectInputDevice2A@@PAUHWND__@@@Z
    0x4D91D0 | public: int __thiscall mmJoystick::inputPrepareDevice(void) | ?inputPrepareDevice@mmJoystick@@QAEHXZ
    0x4D9380 | public: int __thiscall mmJoystick::SetDeadZone(float) | ?SetDeadZone@mmJoystick@@QAEHM@Z
    0x4D9420 | public: int __thiscall mmJoystick::DisableAutoCenter(void) | ?DisableAutoCenter@mmJoystick@@QAEHXZ
    0x4D9480 | public: unsigned long __thiscall mmJoystick::Poll(void) | ?Poll@mmJoystick@@QAEKXZ
    0x4D95B0 | public: float __thiscall mmJoystick::GetAxis(int) | ?GetAxis@mmJoystick@@QAEMH@Z
    0x4D96B0 | public: float __thiscall mmJoystick::GetButton(int) | ?GetButton@mmJoystick@@QAEMH@Z
    0x4D96E0 | public: void __thiscall mmJoystick::Update(void) | ?Update@mmJoystick@@QAEXXZ
    0x4D9770 | public: void __thiscall mmJoystick::ResetAxisCapture(void) | ?ResetAxisCapture@mmJoystick@@QAEXXZ
    0x4D97F0 | public: void __thiscall mmJoystick::InputCreateEffect(void) | ?InputCreateEffect@mmJoystick@@QAEXXZ
    0x4D9910 | public: void __thiscall mmJoystick::InputInitEffect(void) | ?InputInitEffect@mmJoystick@@QAEXXZ
    0x4D9950 | public: void __thiscall mmJoystick::InputStopEffect(void) | ?InputStopEffect@mmJoystick@@QAEXXZ
    0x4D9990 | public: int __thiscall mmJoystick::SetShake(unsigned long,unsigned long) | ?SetShake@mmJoystick@@QAEHKK@Z
    0x4D99C0 | public: int __thiscall mmJoystick::PlayShake(void) | ?PlayShake@mmJoystick@@QAEHXZ
    0x4D99E0 | public: int __thiscall mmJoystick::StopShake(void) | ?StopShake@mmJoystick@@QAEHXZ
    0x4D9A00 | public: int __thiscall mmJoystick::PlayCollision(void) | ?PlayCollision@mmJoystick@@QAEHXZ
    0x4D9A20 | public: int __thiscall mmJoystick::SetSteer(long) | ?SetSteer@mmJoystick@@QAEHJ@Z
    0x4D9A40 | public: int __thiscall mmJoystick::PlaySteer(void) | ?PlaySteer@mmJoystick@@QAEHXZ
    0x4D9A60 | public: int __thiscall mmJoystick::StopSteer(void) | ?StopSteer@mmJoystick@@QAEHXZ
    0x4D9A80 | public: int __thiscall mmJoystick::SetFriction(long) | ?SetFriction@mmJoystick@@QAEHJ@Z
    0x4D9AA0 | public: int __thiscall mmJoystick::PlayFriction(void) | ?PlayFriction@mmJoystick@@QAEHXZ
    0x4D9AC0 | public: int __thiscall mmJoystick::StopFriction(void) | ?StopFriction@mmJoystick@@QAEHXZ
    0x4D9AE0 | public: class mmEffectFF * __thiscall mmJoystick::GetFFEffect(int) | ?GetFFEffect@mmJoystick@@QAEPAVmmEffectFF@@H@Z
    0x4D9B30 | public: void __thiscall mmJoystick::PrintDeviceCaps(void) | ?PrintDeviceCaps@mmJoystick@@QAEXXZ
    0x4D9D10 | void __cdecl DecodeDIErrorMFlag(long) | ?DecodeDIErrorMFlag@@YAXJ@Z
    0x5947C8 | const mmFrictionFF::`vftable' | ??_7mmFrictionFF@@6B@
    0x5947D8 | const mmCollideFF::`vftable' | ??_7mmCollideFF@@6B@
    0x5947E8 | const mmSpringFF::`vftable' | ??_7mmSpringFF@@6B@
    0x5947F8 | const mmRoadFF::`vftable' | ??_7mmRoadFF@@6B@
*/

// 0x4D9D10 | ?DecodeDIErrorMFlag@@YAXJ@Z
inline void DecodeDIErrorMFlag(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x4D9D10, arg1);
}

struct mmJoystick
{
public:
    // 0x4D8D80 | ??_EmmJoystick@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x4D8EE0 | ??0mmJoystick@@QAE@XZ
    inline mmJoystick()
    {
        // stub<member_func_t<void, mmJoystick>>(0x4D8EE0, this);

        unimplemented();
    }

    // 0x4D8FA0 | ??1mmJoystick@@QAE@XZ
    inline ~mmJoystick()
    {
        stub<member_func_t<void, mmJoystick>>(0x4D8FA0, this);
    }

    // 0x4D90C0 | ?Init@mmJoystick@@QAEHPAUIDirectInputDevice2A@@PAUHWND__@@@Z
    inline int32_t Init(struct IDirectInputDevice2A* arg1, struct HWND__* arg2)
    {
        return stub<member_func_t<int32_t, mmJoystick, struct IDirectInputDevice2A*, struct HWND__*>>(
            0x4D90C0, this, arg1, arg2);
    }

    // 0x4D91D0 | ?inputPrepareDevice@mmJoystick@@QAEHXZ
    inline int32_t inputPrepareDevice()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x4D91D0, this);
    }

    // 0x4D9380 | ?SetDeadZone@mmJoystick@@QAEHM@Z
    inline int32_t SetDeadZone(float arg1)
    {
        return stub<member_func_t<int32_t, mmJoystick, float>>(0x4D9380, this, arg1);
    }

    // 0x4D9420 | ?DisableAutoCenter@mmJoystick@@QAEHXZ
    inline int32_t DisableAutoCenter()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x4D9420, this);
    }

    // 0x4D9480 | ?Poll@mmJoystick@@QAEKXZ
    inline uint32_t Poll()
    {
        return stub<member_func_t<uint32_t, mmJoystick>>(0x4D9480, this);
    }

    // 0x4D95B0 | ?GetAxis@mmJoystick@@QAEMH@Z
    inline float GetAxis(int32_t arg1)
    {
        return stub<member_func_t<float, mmJoystick, int32_t>>(0x4D95B0, this, arg1);
    }

    // 0x4D96B0 | ?GetButton@mmJoystick@@QAEMH@Z
    inline float GetButton(int32_t arg1)
    {
        return stub<member_func_t<float, mmJoystick, int32_t>>(0x4D96B0, this, arg1);
    }

    // 0x4D96E0 | ?Update@mmJoystick@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmJoystick>>(0x4D96E0, this);
    }

    // 0x4D9770 | ?ResetAxisCapture@mmJoystick@@QAEXXZ
    inline void ResetAxisCapture()
    {
        return stub<member_func_t<void, mmJoystick>>(0x4D9770, this);
    }

    // 0x4D97F0 | ?InputCreateEffect@mmJoystick@@QAEXXZ
    inline void InputCreateEffect()
    {
        return stub<member_func_t<void, mmJoystick>>(0x4D97F0, this);
    }

    // 0x4D9910 | ?InputInitEffect@mmJoystick@@QAEXXZ
    inline void InputInitEffect()
    {
        return stub<member_func_t<void, mmJoystick>>(0x4D9910, this);
    }

    // 0x4D9950 | ?InputStopEffect@mmJoystick@@QAEXXZ
    inline void InputStopEffect()
    {
        return stub<member_func_t<void, mmJoystick>>(0x4D9950, this);
    }

    // 0x4D9990 | ?SetShake@mmJoystick@@QAEHKK@Z
    inline int32_t SetShake(uint32_t arg1, uint32_t arg2)
    {
        return stub<member_func_t<int32_t, mmJoystick, uint32_t, uint32_t>>(0x4D9990, this, arg1, arg2);
    }

    // 0x4D99C0 | ?PlayShake@mmJoystick@@QAEHXZ
    inline int32_t PlayShake()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x4D99C0, this);
    }

    // 0x4D99E0 | ?StopShake@mmJoystick@@QAEHXZ
    inline int32_t StopShake()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x4D99E0, this);
    }

    // 0x4D9A00 | ?PlayCollision@mmJoystick@@QAEHXZ
    inline int32_t PlayCollision()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x4D9A00, this);
    }

    // 0x4D9A20 | ?SetSteer@mmJoystick@@QAEHJ@Z
    inline int32_t SetSteer(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmJoystick, int32_t>>(0x4D9A20, this, arg1);
    }

    // 0x4D9A40 | ?PlaySteer@mmJoystick@@QAEHXZ
    inline int32_t PlaySteer()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x4D9A40, this);
    }

    // 0x4D9A60 | ?StopSteer@mmJoystick@@QAEHXZ
    inline int32_t StopSteer()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x4D9A60, this);
    }

    // 0x4D9A80 | ?SetFriction@mmJoystick@@QAEHJ@Z
    inline int32_t SetFriction(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmJoystick, int32_t>>(0x4D9A80, this, arg1);
    }

    // 0x4D9AA0 | ?PlayFriction@mmJoystick@@QAEHXZ
    inline int32_t PlayFriction()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x4D9AA0, this);
    }

    // 0x4D9AC0 | ?StopFriction@mmJoystick@@QAEHXZ
    inline int32_t StopFriction()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x4D9AC0, this);
    }

    // 0x4D9AE0 | ?GetFFEffect@mmJoystick@@QAEPAVmmEffectFF@@H@Z
    inline class mmEffectFF* GetFFEffect(int32_t arg1)
    {
        return stub<member_func_t<class mmEffectFF*, mmJoystick, int32_t>>(0x4D9AE0, this, arg1);
    }

    // 0x4D9B30 | ?PrintDeviceCaps@mmJoystick@@QAEXXZ
    inline void PrintDeviceCaps()
    {
        return stub<member_func_t<void, mmJoystick>>(0x4D9B30, this);
    }
};

struct mmJaxis
{
public:
    // 0x4D8DE0 | ??0mmJaxis@@QAE@XZ
    inline mmJaxis()
    {
        // stub<member_func_t<void, mmJaxis>>(0x4D8DE0, this);

        unimplemented();
    }

    // 0x4D8E00 | ??1mmJaxis@@QAE@XZ
    inline ~mmJaxis()
    {
        stub<member_func_t<void, mmJaxis>>(0x4D8E00, this);
    }

    // 0x4D8E10 | ?SetRange@mmJaxis@@QAEXMM@Z
    inline void SetRange(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmJaxis, float, float>>(0x4D8E10, this, arg1, arg2);
    }

    // 0x4D8E30 | ?Normalize@mmJaxis@@QAEXM@Z
    inline void Normalize(float arg1)
    {
        return stub<member_func_t<void, mmJaxis, float>>(0x4D8E30, this, arg1);
    }

    // 0x4D8E50 | ?NormalizePOV@mmJaxis@@QAEXK@Z
    inline void NormalizePOV(uint32_t arg1)
    {
        return stub<member_func_t<void, mmJaxis, uint32_t>>(0x4D8E50, this, arg1);
    }

    // 0x4D8E90 | ?Capture@mmJaxis@@QAEHXZ
    inline int32_t Capture()
    {
        return stub<member_func_t<int32_t, mmJaxis>>(0x4D8E90, this);
    }

    // 0x4D8EC0 | ?ResetCapture@mmJaxis@@QAEXXZ
    inline void ResetCapture()
    {
        return stub<member_func_t<void, mmJaxis>>(0x4D8EC0, this);
    }
};
