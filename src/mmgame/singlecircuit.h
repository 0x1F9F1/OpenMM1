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
    mmgame:singlecircuit

    0x410E00 | public: __thiscall mmSingleCircuit::mmSingleCircuit(void) | ??0mmSingleCircuit@@QAE@XZ
    0x410EA0 | public: virtual __thiscall mmSingleCircuit::~mmSingleCircuit(void) | ??1mmSingleCircuit@@UAE@XZ
    0x410F60 | public: int __thiscall mmSingleCircuit::Init(void) | ?Init@mmSingleCircuit@@QAEHXZ
    0x4110E0 | public: virtual void __thiscall mmSingleCircuit::InitMyPlayer(void) | ?InitMyPlayer@mmSingleCircuit@@UAEXXZ
    0x411150 | public: virtual void __thiscall mmSingleCircuit::InitHUD(void) | ?InitHUD@mmSingleCircuit@@UAEXXZ
    0x4111A0 | public: virtual void __thiscall mmSingleCircuit::InitGameObjects(void) | ?InitGameObjects@mmSingleCircuit@@UAEXXZ
    0x411400 | public: virtual void __thiscall mmSingleCircuit::InitOtherPlayers(void) | ?InitOtherPlayers@mmSingleCircuit@@UAEXXZ
    0x411410 | public: virtual void __thiscall mmSingleCircuit::Reset(void) | ?Reset@mmSingleCircuit@@UAEXXZ
    0x4114E0 | public: virtual void __thiscall mmSingleCircuit::HitWaterHandler(void) | ?HitWaterHandler@mmSingleCircuit@@UAEXXZ
    0x4115A0 | private: void __thiscall mmSingleCircuit::EnableRacers(void) | ?EnableRacers@mmSingleCircuit@@AAEXXZ
    0x411630 | private: void __thiscall mmSingleCircuit::DisableRacers(void) | ?DisableRacers@mmSingleCircuit@@AAEXXZ
    0x4116A0 | public: virtual void __thiscall mmSingleCircuit::Update(void) | ?Update@mmSingleCircuit@@UAEXXZ
    0x4116C0 | public: virtual void __thiscall mmSingleCircuit::UpdateGameInput(int) | ?UpdateGameInput@mmSingleCircuit@@UAEXH@Z
    0x4116D0 | public: void __thiscall mmSingleCircuit::UpdateScore(void) | ?UpdateScore@mmSingleCircuit@@QAEXXZ
    0x411A60 | public: virtual void __thiscall mmSingleCircuit::UpdateGame(void) | ?UpdateGame@mmSingleCircuit@@UAEXXZ
    0x4121F0 | private: void __thiscall mmSingleCircuit::FinishMessage(int,int) | ?FinishMessage@mmSingleCircuit@@AAEXHH@Z
    0x412380 | private: int __thiscall mmSingleCircuit::RegisterLap(void) | ?RegisterLap@mmSingleCircuit@@AAEHXZ
    0x4123E0 | private: int __thiscall mmSingleCircuit::RegisterFinish(void) | ?RegisterFinish@mmSingleCircuit@@AAEHXZ
    0x412800 | private: int __thiscall mmSingleCircuit::ProgressCheck(int,int) | ?ProgressCheck@mmSingleCircuit@@AAEHHH@Z
    0x412830 | public: virtual void __thiscall mmSingleCircuit::NextRace(void) | ?NextRace@mmSingleCircuit@@UAEXXZ
    0x4129B0 | public: static void __cdecl mmSingleCircuit::DeclareFields(void) | ?DeclareFields@mmSingleCircuit@@SAXXZ
    0x412B20 | public: virtual class MetaClass * __thiscall mmSingleCircuit::GetClass(void) | ?GetClass@mmSingleCircuit@@UAEPAVMetaClass@@XZ
    0x412C80 | public: virtual void * __thiscall mmSingleCircuit::`vector deleting destructor'(unsigned int) | ??_EmmSingleCircuit@@UAEPAXI@Z
    0x412CE0 | public: virtual void __thiscall mmSingleCircuit::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmSingleCircuit@@UAEXH@Z
    0x412CF0 | public: virtual class mmWaypoints * __thiscall mmSingleCircuit::GetWaypoints(void) | ?GetWaypoints@mmSingleCircuit@@UAEPAVmmWaypoints@@XZ
    0x58F850 | const mmSingleCircuit::`vftable' | ??_7mmSingleCircuit@@6B@
    0x6093E0 | class MetaClass mmSingleCircuitMetaClass | ?mmSingleCircuitMetaClass@@3VMetaClass@@A
    0x412A00 | void * __cdecl new_mmSingleCircuit(int) | ?new_mmSingleCircuit@@YAPAXH@Z
    0x412AD0 | void __cdecl delete_mmSingleCircuit(void *,int) | ?delete_mmSingleCircuit@@YAXPAXH@Z
*/

// 0x6093E0 | ?mmSingleCircuitMetaClass@@3VMetaClass@@A
inline extern_var(0x6093E0, class MetaClass, mmSingleCircuitMetaClass);

// 0x412A00 | ?new_mmSingleCircuit@@YAPAXH@Z
// 0x412AD0 | ?delete_mmSingleCircuit@@YAXPAXH@Z

struct mmSingleCircuit : mmGame
{
public:
    // mmSingleCircuit::`vftable' @ 0x58F850

    // 0x410E00 | ??0mmSingleCircuit@@QAE@XZ
    inline mmSingleCircuit()
    {
        // stub<member_func_t<void, mmSingleCircuit>>(0x410E00, this);

        unimplemented();
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
    inline ~mmSingleCircuit() override = 0
    {
        // stub<member_func_t<void, mmSingleCircuit>>(0x410EA0, this);

        unimplemented();
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
