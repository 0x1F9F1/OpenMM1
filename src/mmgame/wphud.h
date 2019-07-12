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
    mmgame:wphud

    0x4263E0 | public: __thiscall mmWPHUD::mmWPHUD(void) | ??0mmWPHUD@@QAE@XZ
    0x4264E0 | public: virtual __thiscall mmWPHUD::~mmWPHUD(void) | ??1mmWPHUD@@UAE@XZ
    0x426590 | public: void __thiscall mmWPHUD::SetWPCleared(void) | ?SetWPCleared@mmWPHUD@@QAEXXZ
    0x4265D0 | public: void __thiscall mmWPHUD::SetStandings(int,int) | ?SetStandings@mmWPHUD@@QAEXHH@Z
    0x426610 | public: void __thiscall mmWPHUD::Init(int,int *,int *,int) | ?Init@mmWPHUD@@QAEXHPAH0H@Z
    0x4268E0 | public: virtual void __thiscall mmWPHUD::Reset(void) | ?Reset@mmWPHUD@@UAEXXZ
    0x426930 | public: virtual void __thiscall mmWPHUD::Update(void) | ?Update@mmWPHUD@@UAEXXZ
    0x426960 | public: virtual void __thiscall mmWPHUD::Cull(void) | ?Cull@mmWPHUD@@UAEXXZ
    0x426970 | public: __thiscall mmCircuitHUD::mmCircuitHUD(void) | ??0mmCircuitHUD@@QAE@XZ
    0x426A70 | public: virtual __thiscall mmCircuitHUD::~mmCircuitHUD(void) | ??1mmCircuitHUD@@UAE@XZ
    0x426B60 | public: void __thiscall mmCircuitHUD::Init(void) | ?Init@mmCircuitHUD@@QAEXXZ
    0x4270E0 | public: virtual void __thiscall mmCircuitHUD::Update(void) | ?Update@mmCircuitHUD@@UAEXXZ
    0x4270F0 | public: void __thiscall mmCircuitHUD::SetStandings(int,int) | ?SetStandings@mmCircuitHUD@@QAEXHH@Z
    0x427130 | public: void __thiscall mmCircuitHUD::SetLapTime(int,float,char *,int) | ?SetLapTime@mmCircuitHUD@@QAEXHMPADH@Z
    0x4271C0 | public: void __thiscall mmCircuitHUD::SetWPCleared(int,int) | ?SetWPCleared@mmCircuitHUD@@QAEXHH@Z
    0x427200 | public: virtual void __thiscall mmCircuitHUD::Reset(void) | ?Reset@mmCircuitHUD@@UAEXXZ
    0x4272A0 | public: __thiscall mmCRHUD::mmCRHUD(void) | ??0mmCRHUD@@QAE@XZ
    0x427440 | public: virtual __thiscall mmCRHUD::~mmCRHUD(void) | ??1mmCRHUD@@UAE@XZ
    0x427570 | public: void __thiscall mmCRHUD::Init(class asLinearCS *,char *,enum mmCRGameClass) | ?Init@mmCRHUD@@QAEXPAVasLinearCS@@PADW4mmCRGameClass@@@Z
    0x427D70 | public: void __thiscall mmCRHUD::ToggleScores(void) | ?ToggleScores@mmCRHUD@@QAEXXZ
    0x427DA0 | public: void __thiscall mmCRHUD::AddPlayer(char *,unsigned long,int,unsigned int) | ?AddPlayer@mmCRHUD@@QAEXPADKHI@Z
    0x427EE0 | public: void __thiscall mmCRHUD::UnPackColor(unsigned int,class Vector4 &) | ?UnPackColor@mmCRHUD@@QAEXIAAVVector4@@@Z
    0x427F60 | public: void __thiscall mmCRHUD::SetScore(char *) | ?SetScore@mmCRHUD@@QAEXPAD@Z
    0x427F80 | public: void __thiscall mmCRHUD::SetName(char *,int) | ?SetName@mmCRHUD@@QAEXPADH@Z
    0x428000 | public: void __thiscall mmCRHUD::SetScore(unsigned long,int) | ?SetScore@mmCRHUD@@QAEXKH@Z
    0x428070 | public: void __thiscall mmCRHUD::RemovePlayer(unsigned long) | ?RemovePlayer@mmCRHUD@@QAEXK@Z
    0x4281F0 | public: void __thiscall mmCRHUD::ActivateGold(void) | ?ActivateGold@mmCRHUD@@QAEXXZ
    0x428200 | public: void __thiscall mmCRHUD::DeactivateGold(void) | ?DeactivateGold@mmCRHUD@@QAEXXZ
    0x428210 | public: void __thiscall mmCRHUD::ActivateRosterGold(unsigned long) | ?ActivateRosterGold@mmCRHUD@@QAEXK@Z
    0x428260 | public: void __thiscall mmCRHUD::DeactivateRosterGold(void) | ?DeactivateRosterGold@mmCRHUD@@QAEXXZ
    0x4282A0 | public: void __thiscall mmCRHUD::UpdateGold(void) | ?UpdateGold@mmCRHUD@@QAEXXZ
    0x4282C0 | public: virtual void __thiscall mmCRHUD::Update(void) | ?Update@mmCRHUD@@UAEXXZ
    0x4282E0 | public: virtual void __thiscall mmCRHUD::Reset(void) | ?Reset@mmCRHUD@@UAEXXZ
    0x4282F0 | public: void __thiscall mmCRHUD::SetBlueScore(int) | ?SetBlueScore@mmCRHUD@@QAEXH@Z
    0x428330 | public: void __thiscall mmCRHUD::SetRedScore(int) | ?SetRedScore@mmCRHUD@@QAEXH@Z
    0x4283A0 | public: virtual void * __thiscall mmWPHUD::`scalar deleting destructor'(unsigned int) | ??_GmmWPHUD@@UAEPAXI@Z
    0x4283A0 | public: virtual void * __thiscall mmWPHUD::`vector deleting destructor'(unsigned int) | ??_EmmWPHUD@@UAEPAXI@Z
    0x4283D0 | public: virtual void * __thiscall mmCircuitHUD::`vector deleting destructor'(unsigned int) | ??_EmmCircuitHUD@@UAEPAXI@Z
    0x4283D0 | public: virtual void * __thiscall mmCircuitHUD::`scalar deleting destructor'(unsigned int) | ??_GmmCircuitHUD@@UAEPAXI@Z
    0x428400 | public: virtual void * __thiscall mmNumber::`vector deleting destructor'(unsigned int) | ??_EmmNumber@@UAEPAXI@Z
    0x428460 | public: virtual void * __thiscall mmTextNode::`vector deleting destructor'(unsigned int) | ??_EmmTextNode@@UAEPAXI@Z
    0x4284C0 | public: virtual void * __thiscall mmCRHUD::`vector deleting destructor'(unsigned int) | ??_EmmCRHUD@@UAEPAXI@Z
    0x4284C0 | public: virtual void * __thiscall mmCRHUD::`scalar deleting destructor'(unsigned int) | ??_GmmCRHUD@@UAEPAXI@Z
    0x4284F0 | public: virtual __thiscall asLinearCS::~asLinearCS(void) | ??1asLinearCS@@UAE@XZ
    0x590018 | const mmWPHUD::`vftable' | ??_7mmWPHUD@@6B@
    0x590048 | const mmCircuitHUD::`vftable' | ??_7mmCircuitHUD@@6B@
    0x590078 | const mmCRHUD::`vftable' | ??_7mmCRHUD@@6B@
    0x5A6618 | float fontscalar | ?fontscalar@@3MA
*/

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
        // stub<member_func_t<void, mmWPHUD>>(0x4263E0, this);

        unimplemented();
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
    inline ~mmWPHUD() override = 0
    {
        // stub<member_func_t<void, mmWPHUD>>(0x4264E0, this);

        unimplemented();
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
        // stub<member_func_t<void, mmCircuitHUD>>(0x426970, this);

        unimplemented();
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
    inline ~mmCircuitHUD() override = 0
    {
        // stub<member_func_t<void, mmCircuitHUD>>(0x426A70, this);

        unimplemented();
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
        // stub<member_func_t<void, mmCRHUD>>(0x4272A0, this);

        unimplemented();
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
    inline ~mmCRHUD() override = 0
    {
        // stub<member_func_t<void, mmCRHUD>>(0x427440, this);

        unimplemented();
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
