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
    mmgame:gamesingle

    0x412D00 | unsigned long __stdcall ThreadFunc(void *) | ?ThreadFunc@@YGKPAX@Z
    0x412D10 | public: __thiscall mmGameSingle::mmGameSingle(void) | ??0mmGameSingle@@QAE@XZ
    0x412DA0 | public: virtual __thiscall mmGameSingle::~mmGameSingle(void) | ??1mmGameSingle@@UAE@XZ
    0x412E60 | public: int __thiscall mmGameSingle::Init(void) | ?Init@mmGameSingle@@QAEHXZ
    0x412FE0 | public: virtual void __thiscall mmGameSingle::InitMyPlayer(void) | ?InitMyPlayer@mmGameSingle@@UAEXXZ
    0x413050 | public: virtual void __thiscall mmGameSingle::InitHUD(void) | ?InitHUD@mmGameSingle@@UAEXXZ
    0x4130B0 | public: virtual void __thiscall mmGameSingle::InitGameObjects(void) | ?InitGameObjects@mmGameSingle@@UAEXXZ
    0x4133B0 | public: virtual void __thiscall mmGameSingle::InitOtherPlayers(void) | ?InitOtherPlayers@mmGameSingle@@UAEXXZ
    0x413410 | public: virtual void __thiscall mmGameSingle::Reset(void) | ?Reset@mmGameSingle@@UAEXXZ
    0x413500 | private: void __thiscall mmGameSingle::EnableRacers(void) | ?EnableRacers@mmGameSingle@@AAEXXZ
    0x413590 | private: void __thiscall mmGameSingle::DisableRacers(void) | ?DisableRacers@mmGameSingle@@AAEXXZ
    0x413600 | public: virtual void __thiscall mmGameSingle::HitWaterHandler(void) | ?HitWaterHandler@mmGameSingle@@UAEXXZ
    0x4136C0 | public: virtual void __thiscall mmGameSingle::Update(void) | ?Update@mmGameSingle@@UAEXXZ
    0x4136E0 | public: virtual void __thiscall mmGameSingle::UpdateGameInput(int) | ?UpdateGameInput@mmGameSingle@@UAEXH@Z
    0x413720 | public: virtual void __thiscall mmGameSingle::UpdateGame(void) | ?UpdateGame@mmGameSingle@@UAEXXZ
    0x413F70 | public: void __thiscall mmGameSingle::UpdateScore(void) | ?UpdateScore@mmGameSingle@@QAEXXZ
    0x4142F0 | private: void __thiscall mmGameSingle::FinishMessage(int,int) | ?FinishMessage@mmGameSingle@@AAEXHH@Z
    0x414470 | private: int __thiscall mmGameSingle::RegisterFinish(void) | ?RegisterFinish@mmGameSingle@@AAEHXZ
    0x414870 | private: int __thiscall mmGameSingle::ProgressCheck(int,int) | ?ProgressCheck@mmGameSingle@@AAEHHH@Z
    0x4148C0 | public: virtual void __thiscall mmGameSingle::NextRace(void) | ?NextRace@mmGameSingle@@UAEXXZ
    0x414A60 | public: static void __cdecl mmGameSingle::DeclareFields(void) | ?DeclareFields@mmGameSingle@@SAXXZ
    0x414BD0 | public: virtual class MetaClass * __thiscall mmGameSingle::GetClass(void) | ?GetClass@mmGameSingle@@UAEPAVMetaClass@@XZ
    0x414D30 | public: virtual void * __thiscall mmGameSingle::`vector deleting destructor'(unsigned int) | ??_EmmGameSingle@@UAEPAXI@Z
    0x414D90 | public: virtual void __thiscall mmGameSingle::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmGameSingle@@UAEXH@Z
    0x414DA0 | public: virtual class mmWaypoints * __thiscall mmGameSingle::GetWaypoints(void) | ?GetWaypoints@mmGameSingle@@UAEPAVmmWaypoints@@XZ
    0x58F8F0 | const mmGameSingle::`vftable' | ??_7mmGameSingle@@6B@
    0x609448 | class MetaClass mmGameSingleMetaClass | ?mmGameSingleMetaClass@@3VMetaClass@@A
    0x414AB0 | void * __cdecl new_mmGameSingle(int) | ?new_mmGameSingle@@YAPAXH@Z
    0x414B80 | void __cdecl delete_mmGameSingle(void *,int) | ?delete_mmGameSingle@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x412D00 | ?ThreadFunc@@YGKPAX@Z
inline uint32_t __stdcall ThreadFunc(void* arg1)
{
    return stub<stdcall_t<uint32_t, void*>>(0x412D00, arg1);
}

// 0x609448 | ?mmGameSingleMetaClass@@3VMetaClass@@A
inline extern_var(0x609448, class MetaClass, mmGameSingleMetaClass);

// 0x414AB0 | ?new_mmGameSingle@@YAPAXH@Z
inline void* new_mmGameSingle(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x414AB0, arg1);
}

// 0x414B80 | ?delete_mmGameSingle@@YAXPAXH@Z
inline void delete_mmGameSingle(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x414B80, arg1, arg2);
}

struct mmGameSingle : mmGame
{
public:
    // mmGameSingle::`vftable' @ 0x58F8F0

    // 0x412D10 | ??0mmGameSingle@@QAE@XZ
    inline mmGameSingle()
    {
        // stub<member_func_t<void, mmGameSingle>>(0x412D10, this);

        unimplemented();
    }

    // 0x412E60 | ?Init@mmGameSingle@@QAEHXZ
    inline int32_t Init()
    {
        return stub<member_func_t<int32_t, mmGameSingle>>(0x412E60, this);
    }

    // 0x413500 | ?EnableRacers@mmGameSingle@@AAEXXZ
    inline void EnableRacers()
    {
        return stub<member_func_t<void, mmGameSingle>>(0x413500, this);
    }

    // 0x413590 | ?DisableRacers@mmGameSingle@@AAEXXZ
    inline void DisableRacers()
    {
        return stub<member_func_t<void, mmGameSingle>>(0x413590, this);
    }

    // 0x413F70 | ?UpdateScore@mmGameSingle@@QAEXXZ
    inline void UpdateScore()
    {
        return stub<member_func_t<void, mmGameSingle>>(0x413F70, this);
    }

    // 0x4142F0 | ?FinishMessage@mmGameSingle@@AAEXHH@Z
    inline void FinishMessage(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmGameSingle, int32_t, int32_t>>(0x4142F0, this, arg1, arg2);
    }

    // 0x414470 | ?RegisterFinish@mmGameSingle@@AAEHXZ
    inline int32_t RegisterFinish()
    {
        return stub<member_func_t<int32_t, mmGameSingle>>(0x414470, this);
    }

    // 0x414870 | ?ProgressCheck@mmGameSingle@@AAEHHH@Z
    inline int32_t ProgressCheck(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmGameSingle, int32_t, int32_t>>(0x414870, this, arg1, arg2);
    }

    // 0x414A60 | ?DeclareFields@mmGameSingle@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x414A60);
    }

    // 0x412DA0 | ??1mmGameSingle@@UAE@XZ
    inline ~mmGameSingle() override = 0
    {
        // stub<member_func_t<void, mmGameSingle>>(0x412DA0, this);

        unimplemented();
    }

    // 0x414BD0 | ?GetClass@mmGameSingle@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmGameSingle>>(0x414BD0, this);
    }

    // 0x4136C0 | ?Update@mmGameSingle@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x4136C0, this);
    }

    // 0x413410 | ?Reset@mmGameSingle@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x413410, this);
    }

    // 0x412FE0 | ?InitMyPlayer@mmGameSingle@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x412FE0, this);
    }

    // 0x4133B0 | ?InitOtherPlayers@mmGameSingle@@UAEXXZ
    inline void InitOtherPlayers() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x4133B0, this);
    }

    // 0x4130B0 | ?InitGameObjects@mmGameSingle@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x4130B0, this);
    }

    // 0x413050 | ?InitHUD@mmGameSingle@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x413050, this);
    }

    // 0x4136E0 | ?UpdateGameInput@mmGameSingle@@UAEXH@Z
    inline void UpdateGameInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmGameSingle, int32_t>>(0x4136E0, this, arg1);
    }

    // 0x414D90 | ?UpdateDebugKeyInput@mmGameSingle@@UAEXH@Z
    inline void UpdateDebugKeyInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmGameSingle, int32_t>>(0x414D90, this, arg1);
    }

    // 0x413720 | ?UpdateGame@mmGameSingle@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x413720, this);
    }

    // 0x4148C0 | ?NextRace@mmGameSingle@@UAEXXZ
    inline void NextRace() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x4148C0, this);
    }

    // 0x413600 | ?HitWaterHandler@mmGameSingle@@UAEXXZ
    inline void HitWaterHandler() override
    {
        return stub<member_func_t<void, mmGameSingle>>(0x413600, this);
    }

    // 0x414DA0 | ?GetWaypoints@mmGameSingle@@UAEPAVmmWaypoints@@XZ
    inline class mmWaypoints* GetWaypoints() override
    {
        return stub<member_func_t<class mmWaypoints*, mmGameSingle>>(0x414DA0, this);
    }
};
