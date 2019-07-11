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

// mmgame:singlecircuit

#include "hooking.h"

// 0x6093E0 | ?mmSingleCircuitMetaClass@@3VMetaClass@@A
inline extern_var(0x6093E0, class MetaClass, mmSingleCircuitMetaClass);

// 0x412A00 | ?new_mmSingleCircuit@@YAPAXH@Z
inline void* new_mmSingleCircuit(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x412A00, arg1);
}

// 0x412AD0 | ?delete_mmSingleCircuit@@YAXPAXH@Z
inline void delete_mmSingleCircuit(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x412AD0, arg1, arg2);
}

struct mmSingleCircuit : mmGame
{
public:
    // mmSingleCircuit::`vftable' @ 0x58F850

    // 0x410E00 | ??0mmSingleCircuit@@QAE@XZ
    inline mmSingleCircuit()
    {
        stub<member_func_t<void, mmSingleCircuit>>(0x410E00, this);
    }

    // 0x410F60 | ?Init@mmSingleCircuit@@QAEHXZ
    inline int32_t Init()
    {
        return stub<member_func_t<int32_t, mmSingleCircuit>>(0x410F60, this);
    }

    // 0x4115A0 | ?EnableRacers@mmSingleCircuit@@AAEXXZ
    inline void EnableRacers()
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x4115A0, this);
    }

    // 0x411630 | ?DisableRacers@mmSingleCircuit@@AAEXXZ
    inline void DisableRacers()
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x411630, this);
    }

    // 0x4116D0 | ?UpdateScore@mmSingleCircuit@@QAEXXZ
    inline void UpdateScore()
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x4116D0, this);
    }

    // 0x4121F0 | ?FinishMessage@mmSingleCircuit@@AAEXHH@Z
    inline void FinishMessage(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmSingleCircuit, int32_t, int32_t>>(0x4121F0, this, arg1, arg2);
    }

    // 0x412380 | ?RegisterLap@mmSingleCircuit@@AAEHXZ
    inline int32_t RegisterLap()
    {
        return stub<member_func_t<int32_t, mmSingleCircuit>>(0x412380, this);
    }

    // 0x4123E0 | ?RegisterFinish@mmSingleCircuit@@AAEHXZ
    inline int32_t RegisterFinish()
    {
        return stub<member_func_t<int32_t, mmSingleCircuit>>(0x4123E0, this);
    }

    // 0x412800 | ?ProgressCheck@mmSingleCircuit@@AAEHHH@Z
    inline int32_t ProgressCheck(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmSingleCircuit, int32_t, int32_t>>(0x412800, this, arg1, arg2);
    }

    // 0x4129B0 | ?DeclareFields@mmSingleCircuit@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4129B0);
    }

    // 0x410EA0 | ??1mmSingleCircuit@@UAE@XZ
    inline ~mmSingleCircuit() override
    {
        stub<member_func_t<void, mmSingleCircuit>>(0x410EA0, this);
    }

    // 0x412B20 | ?GetClass@mmSingleCircuit@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmSingleCircuit>>(0x412B20, this);
    }

    // 0x4116A0 | ?Update@mmSingleCircuit@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x4116A0, this);
    }

    // 0x411410 | ?Reset@mmSingleCircuit@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x411410, this);
    }

    // 0x4110E0 | ?InitMyPlayer@mmSingleCircuit@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x4110E0, this);
    }

    // 0x411400 | ?InitOtherPlayers@mmSingleCircuit@@UAEXXZ
    inline void InitOtherPlayers() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x411400, this);
    }

    // 0x4111A0 | ?InitGameObjects@mmSingleCircuit@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x4111A0, this);
    }

    // 0x411150 | ?InitHUD@mmSingleCircuit@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x411150, this);
    }

    // 0x4116C0 | ?UpdateGameInput@mmSingleCircuit@@UAEXH@Z
    inline void UpdateGameInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmSingleCircuit, int32_t>>(0x4116C0, this, arg1);
    }

    // 0x412CE0 | ?UpdateDebugKeyInput@mmSingleCircuit@@UAEXH@Z
    inline void UpdateDebugKeyInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmSingleCircuit, int32_t>>(0x412CE0, this, arg1);
    }

    // 0x411A60 | ?UpdateGame@mmSingleCircuit@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x411A60, this);
    }

    // 0x412830 | ?NextRace@mmSingleCircuit@@UAEXXZ
    inline void NextRace() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x412830, this);
    }

    // 0x4114E0 | ?HitWaterHandler@mmSingleCircuit@@UAEXXZ
    inline void HitWaterHandler() override
    {
        return stub<member_func_t<void, mmSingleCircuit>>(0x4114E0, this);
    }

    // 0x412CF0 | ?GetWaypoints@mmSingleCircuit@@UAEPAVmmWaypoints@@XZ
    inline class mmWaypoints* GetWaypoints() override
    {
        return stub<member_func_t<class mmWaypoints*, mmSingleCircuit>>(0x412CF0, this);
    }
};
