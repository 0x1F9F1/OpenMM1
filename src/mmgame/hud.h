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

// mmgame:hud

#include "hooking.h"

// 0x5A64C4 | ?arotX@@3MA
inline extern_var(0x5A64C4, float, arotX);

// 0x5A64C8 | ?FirstPrintTime@@3HA
inline extern_var(0x5A64C8, int32_t, FirstPrintTime);

// 0x609A70 | ?defmass@@3MA
inline extern_var(0x609A70, float, defmass);

// 0x609A80 | ?mmHUDMetaClass@@3VMetaClass@@A
inline extern_var(0x609A80, class MetaClass, mmHUDMetaClass);

// 0x609AA8 | ?LastResetTime@@3MA
inline extern_var(0x609AA8, float, LastResetTime);

// 0x425820 | ?new_mmHUD@@YAPAXH@Z
inline void* new_mmHUD(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x425820, arg1);
}

// 0x4258F0 | ?delete_mmHUD@@YAXPAXH@Z
inline void delete_mmHUD(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4258F0, arg1, arg2);
}

class mmHUD : asNode
{
public:
    // mmHUD::`vftable' @ 0x58FEB8

    // 0x423DD0 | ??0mmHUD@@QAE@XZ
    inline mmHUD()
    {
        stub<member_func_t<void, mmHUD>>(0x423DD0, this);
    }

    // 0x424210 | ?PostChatMessage@mmHUD@@QAEXPAD@Z
    inline void PostChatMessage(char* arg1)
    {
        return stub<member_func_t<void, mmHUD, char*>>(0x424210, this, arg1);
    }

    // 0x4244D0 | ?StartTimers@mmHUD@@QAEXXZ
    inline void StartTimers()
    {
        return stub<member_func_t<void, mmHUD>>(0x4244D0, this);
    }

    // 0x4244F0 | ?StopTimers@mmHUD@@QAEXXZ
    inline void StopTimers()
    {
        return stub<member_func_t<void, mmHUD>>(0x4244F0, this);
    }

    // 0x424510 | ?ResetTimers@mmHUD@@QAEXXZ
    inline void ResetTimers()
    {
        return stub<member_func_t<void, mmHUD>>(0x424510, this);
    }

    // 0x424540 | ?ShowClockTime@mmHUD@@QAEXXZ
    inline void ShowClockTime()
    {
        return stub<member_func_t<void, mmHUD>>(0x424540, this);
    }

    // 0x424590 | ?Init@mmHUD@@QAEXPADPAVmmPlayer@@@Z
    inline void Init(char* arg1, class mmPlayer* arg2)
    {
        return stub<member_func_t<void, mmHUD, char*, class mmPlayer*>>(0x424590, this, arg1, arg2);
    }

    // 0x424870 | ?Enable@mmHUD@@QAEXXZ
    inline void Enable()
    {
        return stub<member_func_t<void, mmHUD>>(0x424870, this);
    }

    // 0x4248B0 | ?Disable@mmHUD@@QAEXH@Z
    inline void Disable(int32_t arg1)
    {
        return stub<member_func_t<void, mmHUD, int32_t>>(0x4248B0, this, arg1);
    }

    // 0x424900 | ?Toggle@mmHUD@@QAEXXZ
    inline void Toggle()
    {
        return stub<member_func_t<void, mmHUD>>(0x424900, this);
    }

    // 0x424920 | ?ToggleExternalView@mmHUD@@QAEXXZ
    inline void ToggleExternalView()
    {
        return stub<member_func_t<void, mmHUD>>(0x424920, this);
    }

    // 0x424970 | ?ToggleDash@mmHUD@@QAEXXZ
    inline void ToggleDash()
    {
        return stub<member_func_t<void, mmHUD>>(0x424970, this);
    }

    // 0x4249B0 | ?ActivateDash@mmHUD@@QAEXXZ
    inline void ActivateDash()
    {
        return stub<member_func_t<void, mmHUD>>(0x4249B0, this);
    }

    // 0x4249E0 | ?DeactivateDash@mmHUD@@QAEXXZ
    inline void DeactivateDash()
    {
        return stub<member_func_t<void, mmHUD>>(0x4249E0, this);
    }

    // 0x424A10 | ?IsDashActive@mmHUD@@QAEHXZ
    inline int32_t IsDashActive()
    {
        return stub<member_func_t<int32_t, mmHUD>>(0x424A10, this);
    }

    // 0x424DF0 | ?ToggleMirror@mmHUD@@QAEXXZ
    inline void ToggleMirror()
    {
        return stub<member_func_t<void, mmHUD>>(0x424DF0, this);
    }

    // 0x424EE0 | ?SetStandings@mmHUD@@QAEXHH@Z
    inline void SetStandings(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmHUD, int32_t, int32_t>>(0x424EE0, this, arg1, arg2);
    }

    // 0x424F20 | ?SetLapTime@mmHUD@@QAEXHMH@Z
    inline void SetLapTime(int32_t arg1, float arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmHUD, int32_t, float, int32_t>>(0x424F20, this, arg1, arg2, arg3);
    }

    // 0x424F60 | ?SetWPCleared@mmHUD@@QAEXHH@Z
    inline void SetWPCleared(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmHUD, int32_t, int32_t>>(0x424F60, this, arg1, arg2);
    }

    // 0x424F80 | ?SetMessage@mmHUD@@QAEXPAULocString@@MH@Z
    inline void SetMessage(struct LocString* arg1, float arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmHUD, struct LocString*, float, int32_t>>(0x424F80, this, arg1, arg2, arg3);
    }

    // 0x424FC0 | ?SetMessage2@mmHUD@@QAEXPAULocString@@@Z
    inline void SetMessage2(struct LocString* arg1)
    {
        return stub<member_func_t<void, mmHUD, struct LocString*>>(0x424FC0, this, arg1);
    }

    // 0x424FF0 | ?SetScore@mmHUD@@QAEXPAD@Z
    inline void SetScore(char* arg1)
    {
        return stub<member_func_t<void, mmHUD, char*>>(0x424FF0, this, arg1);
    }

    // 0x425010 | ?AddPlayer@mmHUD@@QAEXPADKHH@Z
    inline void AddPlayer(char* arg1, uint32_t arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<void, mmHUD, char*, uint32_t, int32_t, int32_t>>(
            0x425010, this, arg1, arg2, arg3, arg4);
    }

    // 0x425040 | ?SetScore@mmHUD@@QAEXKH@Z
    inline void SetScore(uint32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmHUD, uint32_t, int32_t>>(0x425040, this, arg1, arg2);
    }

    // 0x425060 | ?RemovePlayer@mmHUD@@QAEXK@Z
    inline void RemovePlayer(uint32_t arg1)
    {
        return stub<member_func_t<void, mmHUD, uint32_t>>(0x425060, this, arg1);
    }

    // 0x425080 | ?ActivateGold@mmHUD@@QAEXXZ
    inline void ActivateGold()
    {
        return stub<member_func_t<void, mmHUD>>(0x425080, this);
    }

    // 0x425090 | ?DeactivateGold@mmHUD@@QAEXXZ
    inline void DeactivateGold()
    {
        return stub<member_func_t<void, mmHUD>>(0x425090, this);
    }

    // 0x4250A0 | ?GetTime@mmHUD@@QAEXPADM@Z
    inline void GetTime(char* arg1, float arg2)
    {
        return stub<member_func_t<void, mmHUD, char*, float>>(0x4250A0, this, arg1, arg2);
    }

    // 0x4250C0 | ?PlayNetAlert@mmHUD@@QAEXXZ
    inline void PlayNetAlert()
    {
        return stub<member_func_t<void, mmHUD>>(0x4250C0, this);
    }

    // 0x4250E0 | ?TogglePositionDisplay@mmHUD@@QAEXH@Z
    inline void TogglePositionDisplay(int32_t arg1)
    {
        return stub<member_func_t<void, mmHUD, int32_t>>(0x4250E0, this, arg1);
    }

    // 0x425140 | ?GetPosHdg@mmHUD@@QAEXAAVVector4@@@Z
    inline void GetPosHdg(class Vector4& arg1)
    {
        return stub<member_func_t<void, mmHUD, class Vector4&>>(0x425140, this, arg1);
    }

    // 0x4251D0 | ?RecordPosition@mmHUD@@QAEXPAD@Z
    inline void RecordPosition(char* arg1)
    {
        return stub<member_func_t<void, mmHUD, char*>>(0x4251D0, this, arg1);
    }

    // 0x4257D0 | ?DeclareFields@mmHUD@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4257D0);
    }

    // 0x424340 | ??1mmHUD@@UAE@XZ
    inline ~mmHUD() override
    {
        stub<member_func_t<void, mmHUD>>(0x424340, this);
    }

    // 0x425940 | ?GetClass@mmHUD@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmHUD>>(0x425940, this);
    }

    // 0x424E10 | ?Cull@mmHUD@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmHUD>>(0x424E10, this);
    }

    // 0x424A60 | ?Update@mmHUD@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmHUD>>(0x424A60, this);
    }

    // 0x424A20 | ?Reset@mmHUD@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmHUD>>(0x424A20, this);
    }

    // 0x424270 | ?ResChange@mmHUD@@UAEXHH@Z
    inline void ResChange(int32_t arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, mmHUD, int32_t, int32_t>>(0x424270, this, arg1, arg2);
    }

    // 0x424DC0 | ?UpdatePaused@mmHUD@@UAEXXZ
    inline void UpdatePaused() override
    {
        return stub<member_func_t<void, mmHUD>>(0x424DC0, this);
    }
};

struct mmTimer : asNode
{
public:
    // mmTimer::`vftable' @ 0x58FEE8

    // 0x425250 | ??0mmTimer@@QAE@XZ
    inline mmTimer()
    {
        stub<member_func_t<void, mmTimer>>(0x425250, this);
    }

    // 0x425280 | ?Init@mmTimer@@QAEXHM@Z
    inline void Init(int32_t arg1, float arg2)
    {
        return stub<member_func_t<void, mmTimer, int32_t, float>>(0x425280, this, arg1, arg2);
    }

    // 0x4252A0 | ?GetTime@mmTimer@@QAEMXZ
    inline float GetTime()
    {
        return stub<member_func_t<float, mmTimer>>(0x4252A0, this);
    }

    // 0x425310 | ?Start@mmTimer@@QAEXXZ
    inline void Start()
    {
        return stub<member_func_t<void, mmTimer>>(0x425310, this);
    }

    // 0x425320 | ?Stop@mmTimer@@QAEXXZ
    inline void Stop()
    {
        return stub<member_func_t<void, mmTimer>>(0x425320, this);
    }

    // 0x425330 | ?StartStop@mmTimer@@QAEXXZ
    inline void StartStop()
    {
        return stub<member_func_t<void, mmTimer>>(0x425330, this);
    }

    // 0x425270 | ??1mmTimer@@UAE@XZ
    inline ~mmTimer() override
    {
        stub<member_func_t<void, mmTimer>>(0x425270, this);
    }

    // 0x4252B0 | ?Update@mmTimer@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmTimer>>(0x4252B0, this);
    }

    // 0x425300 | ?Reset@mmTimer@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmTimer>>(0x425300, this);
    }
};

struct mmArrow : asNode
{
public:
    // mmArrow::`vftable' @ 0x58FF18

    // 0x425340 | ??0mmArrow@@QAE@XZ
    inline mmArrow()
    {
        stub<member_func_t<void, mmArrow>>(0x425340, this);
    }

    // 0x425530 | ?Init@mmArrow@@QAEXPAVMatrix34@@@Z
    inline void Init(class Matrix34* arg1)
    {
        return stub<member_func_t<void, mmArrow, class Matrix34*>>(0x425530, this, arg1);
    }

    // 0x425550 | ?SetInterest@mmArrow@@QAEXPAVVector3@@@Z
    inline void SetInterest(class Vector3* arg1)
    {
        return stub<member_func_t<void, mmArrow, class Vector3*>>(0x425550, this, arg1);
    }

    // 0x425560 | ?ReColorArrow@mmArrow@@AAEXH@Z
    inline void ReColorArrow(int32_t arg1)
    {
        return stub<member_func_t<void, mmArrow, int32_t>>(0x425560, this, arg1);
    }

    // 0x4254C0 | ??1mmArrow@@UAE@XZ
    inline ~mmArrow() override
    {
        stub<member_func_t<void, mmArrow>>(0x4254C0, this);
    }

    // 0x4255D0 | ?Update@mmArrow@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmArrow>>(0x4255D0, this);
    }

    // 0x425540 | ?Reset@mmArrow@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmArrow>>(0x425540, this);
    }
};
