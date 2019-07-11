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

// mmgame:wphud

#include "hooking.h"

// 0x5A6618 | ?fontscalar@@3MA
inline extern_var(0x5A6618, float, fontscalar);

struct mmWPHUD : asNode
{
public:
    // mmWPHUD::`vftable' @ 0x590018

    // 0x4263E0 | ??0mmWPHUD@@QAE@XZ
    inline mmWPHUD()
    {
        stub<member_func_t<void, mmWPHUD>>(0x4263E0, this);
    }

    // 0x426590 | ?SetWPCleared@mmWPHUD@@QAEXXZ
    inline void SetWPCleared()
    {
        return stub<member_func_t<void, mmWPHUD>>(0x426590, this);
    }

    // 0x4265D0 | ?SetStandings@mmWPHUD@@QAEXHH@Z
    inline void SetStandings(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmWPHUD, int32_t, int32_t>>(0x4265D0, this, arg1, arg2);
    }

    // 0x426610 | ?Init@mmWPHUD@@QAEXHPAH0H@Z
    inline void Init(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
    {
        return stub<member_func_t<void, mmWPHUD, int32_t, int32_t*, int32_t*, int32_t>>(
            0x426610, this, arg1, arg2, arg3, arg4);
    }

    // 0x4264E0 | ??1mmWPHUD@@UAE@XZ
    inline ~mmWPHUD() override
    {
        stub<member_func_t<void, mmWPHUD>>(0x4264E0, this);
    }

    // 0x426960 | ?Cull@mmWPHUD@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmWPHUD>>(0x426960, this);
    }

    // 0x426930 | ?Update@mmWPHUD@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmWPHUD>>(0x426930, this);
    }

    // 0x4268E0 | ?Reset@mmWPHUD@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmWPHUD>>(0x4268E0, this);
    }
};

struct mmCircuitHUD : asNode
{
public:
    // mmCircuitHUD::`vftable' @ 0x590048

    // 0x426970 | ??0mmCircuitHUD@@QAE@XZ
    inline mmCircuitHUD()
    {
        stub<member_func_t<void, mmCircuitHUD>>(0x426970, this);
    }

    // 0x426B60 | ?Init@mmCircuitHUD@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, mmCircuitHUD>>(0x426B60, this);
    }

    // 0x4270F0 | ?SetStandings@mmCircuitHUD@@QAEXHH@Z
    inline void SetStandings(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmCircuitHUD, int32_t, int32_t>>(0x4270F0, this, arg1, arg2);
    }

    // 0x427130 | ?SetLapTime@mmCircuitHUD@@QAEXHMPADH@Z
    inline void SetLapTime(int32_t arg1, float arg2, char* arg3, int32_t arg4)
    {
        return stub<member_func_t<void, mmCircuitHUD, int32_t, float, char*, int32_t>>(
            0x427130, this, arg1, arg2, arg3, arg4);
    }

    // 0x4271C0 | ?SetWPCleared@mmCircuitHUD@@QAEXHH@Z
    inline void SetWPCleared(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmCircuitHUD, int32_t, int32_t>>(0x4271C0, this, arg1, arg2);
    }

    // 0x426A70 | ??1mmCircuitHUD@@UAE@XZ
    inline ~mmCircuitHUD() override
    {
        stub<member_func_t<void, mmCircuitHUD>>(0x426A70, this);
    }

    // 0x4270E0 | ?Update@mmCircuitHUD@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCircuitHUD>>(0x4270E0, this);
    }

    // 0x427200 | ?Reset@mmCircuitHUD@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCircuitHUD>>(0x427200, this);
    }
};

struct mmCRHUD : asNode
{
public:
    // mmCRHUD::`vftable' @ 0x590078

    // 0x4272A0 | ??0mmCRHUD@@QAE@XZ
    inline mmCRHUD()
    {
        stub<member_func_t<void, mmCRHUD>>(0x4272A0, this);
    }

    // 0x427570 | ?Init@mmCRHUD@@QAEXPAVasLinearCS@@PADW4mmCRGameClass@@@Z
    inline void Init(class asLinearCS* arg1, char* arg2, enum mmCRGameClass arg3)
    {
        return stub<member_func_t<void, mmCRHUD, class asLinearCS*, char*, enum mmCRGameClass>>(
            0x427570, this, arg1, arg2, arg3);
    }

    // 0x427D70 | ?ToggleScores@mmCRHUD@@QAEXXZ
    inline void ToggleScores()
    {
        return stub<member_func_t<void, mmCRHUD>>(0x427D70, this);
    }

    // 0x427DA0 | ?AddPlayer@mmCRHUD@@QAEXPADKHI@Z
    inline void AddPlayer(char* arg1, uint32_t arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, mmCRHUD, char*, uint32_t, int32_t, uint32_t>>(
            0x427DA0, this, arg1, arg2, arg3, arg4);
    }

    // 0x427EE0 | ?UnPackColor@mmCRHUD@@QAEXIAAVVector4@@@Z
    inline void UnPackColor(uint32_t arg1, class Vector4& arg2)
    {
        return stub<member_func_t<void, mmCRHUD, uint32_t, class Vector4&>>(0x427EE0, this, arg1, arg2);
    }

    // 0x427F60 | ?SetScore@mmCRHUD@@QAEXPAD@Z
    inline void SetScore(char* arg1)
    {
        return stub<member_func_t<void, mmCRHUD, char*>>(0x427F60, this, arg1);
    }

    // 0x427F80 | ?SetName@mmCRHUD@@QAEXPADH@Z
    inline void SetName(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmCRHUD, char*, int32_t>>(0x427F80, this, arg1, arg2);
    }

    // 0x428000 | ?SetScore@mmCRHUD@@QAEXKH@Z
    inline void SetScore(uint32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmCRHUD, uint32_t, int32_t>>(0x428000, this, arg1, arg2);
    }

    // 0x428070 | ?RemovePlayer@mmCRHUD@@QAEXK@Z
    inline void RemovePlayer(uint32_t arg1)
    {
        return stub<member_func_t<void, mmCRHUD, uint32_t>>(0x428070, this, arg1);
    }

    // 0x4281F0 | ?ActivateGold@mmCRHUD@@QAEXXZ
    inline void ActivateGold()
    {
        return stub<member_func_t<void, mmCRHUD>>(0x4281F0, this);
    }

    // 0x428200 | ?DeactivateGold@mmCRHUD@@QAEXXZ
    inline void DeactivateGold()
    {
        return stub<member_func_t<void, mmCRHUD>>(0x428200, this);
    }

    // 0x428210 | ?ActivateRosterGold@mmCRHUD@@QAEXK@Z
    inline void ActivateRosterGold(uint32_t arg1)
    {
        return stub<member_func_t<void, mmCRHUD, uint32_t>>(0x428210, this, arg1);
    }

    // 0x428260 | ?DeactivateRosterGold@mmCRHUD@@QAEXXZ
    inline void DeactivateRosterGold()
    {
        return stub<member_func_t<void, mmCRHUD>>(0x428260, this);
    }

    // 0x4282A0 | ?UpdateGold@mmCRHUD@@QAEXXZ
    inline void UpdateGold()
    {
        return stub<member_func_t<void, mmCRHUD>>(0x4282A0, this);
    }

    // 0x4282F0 | ?SetBlueScore@mmCRHUD@@QAEXH@Z
    inline void SetBlueScore(int32_t arg1)
    {
        return stub<member_func_t<void, mmCRHUD, int32_t>>(0x4282F0, this, arg1);
    }

    // 0x428330 | ?SetRedScore@mmCRHUD@@QAEXH@Z
    inline void SetRedScore(int32_t arg1)
    {
        return stub<member_func_t<void, mmCRHUD, int32_t>>(0x428330, this, arg1);
    }

    // 0x427440 | ??1mmCRHUD@@UAE@XZ
    inline ~mmCRHUD() override
    {
        stub<member_func_t<void, mmCRHUD>>(0x427440, this);
    }

    // 0x4282C0 | ?Update@mmCRHUD@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCRHUD>>(0x4282C0, this);
    }

    // 0x4282E0 | ?Reset@mmCRHUD@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCRHUD>>(0x4282E0, this);
    }
};
