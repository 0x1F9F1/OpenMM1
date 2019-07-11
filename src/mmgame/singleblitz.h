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
    mmgame:singleblitz

    0x40F110 | public: __thiscall mmSingleBlitz::mmSingleBlitz(void) | ??0mmSingleBlitz@@QAE@XZ
    0x40F1B0 | public: virtual __thiscall mmSingleBlitz::~mmSingleBlitz(void) | ??1mmSingleBlitz@@UAE@XZ
    0x40F280 | public: int __thiscall mmSingleBlitz::Init(void) | ?Init@mmSingleBlitz@@QAEHXZ
    0x40F400 | public: virtual void __thiscall mmSingleBlitz::InitMyPlayer(void) | ?InitMyPlayer@mmSingleBlitz@@UAEXXZ
    0x40F470 | public: virtual void __thiscall mmSingleBlitz::InitHUD(void) | ?InitHUD@mmSingleBlitz@@UAEXXZ
    0x40F4F0 | public: virtual void __thiscall mmSingleBlitz::InitGameObjects(void) | ?InitGameObjects@mmSingleBlitz@@UAEXXZ
    0x40F760 | public: virtual void __thiscall mmSingleBlitz::InitOtherPlayers(void) | ?InitOtherPlayers@mmSingleBlitz@@UAEXXZ
    0x40F770 | public: virtual void __thiscall mmSingleBlitz::Reset(void) | ?Reset@mmSingleBlitz@@UAEXXZ
    0x40F870 | private: void __thiscall mmSingleBlitz::EnableRacers(void) | ?EnableRacers@mmSingleBlitz@@AAEXXZ
    0x40F900 | private: void __thiscall mmSingleBlitz::DisableRacers(void) | ?DisableRacers@mmSingleBlitz@@AAEXXZ
    0x40F970 | public: virtual void __thiscall mmSingleBlitz::HitWaterHandler(void) | ?HitWaterHandler@mmSingleBlitz@@UAEXXZ
    0x40FA00 | public: virtual void __thiscall mmSingleBlitz::Update(void) | ?Update@mmSingleBlitz@@UAEXXZ
    0x40FA20 | public: virtual void __thiscall mmSingleBlitz::UpdateGameInput(int) | ?UpdateGameInput@mmSingleBlitz@@UAEXH@Z
    0x40FA60 | public: virtual void __thiscall mmSingleBlitz::UpdateGame(void) | ?UpdateGame@mmSingleBlitz@@UAEXXZ
    0x4102C0 | private: int __thiscall mmSingleBlitz::RegisterFinish(void) | ?RegisterFinish@mmSingleBlitz@@AAEHXZ
    0x4105F0 | private: void __thiscall mmSingleBlitz::FinishMessage(int) | ?FinishMessage@mmSingleBlitz@@AAEXH@Z
    0x410620 | private: int __thiscall mmSingleBlitz::ProgressCheck(int,int) | ?ProgressCheck@mmSingleBlitz@@AAEHHH@Z
    0x4106F0 | public: virtual void __thiscall mmSingleBlitz::NextRace(void) | ?NextRace@mmSingleBlitz@@UAEXXZ
    0x410860 | public: void __thiscall mmSingleBlitz::PlayTimerWarning(float) | ?PlayTimerWarning@mmSingleBlitz@@QAEXM@Z
    0x410940 | public: static void __cdecl mmSingleBlitz::DeclareFields(void) | ?DeclareFields@mmSingleBlitz@@SAXXZ
    0x410AC0 | public: virtual class MetaClass * __thiscall mmSingleBlitz::GetClass(void) | ?GetClass@mmSingleBlitz@@UAEPAVMetaClass@@XZ
    0x410C20 | public: virtual __thiscall foobar::~foobar(void) | ??1foobar@@UAE@XZ
    0x410C30 | public: virtual void * __thiscall foobar::`vector deleting destructor'(unsigned int) | ??_Efoobar@@UAEPAXI@Z
    0x410C30 | public: virtual void * __thiscall foobar::`scalar deleting destructor'(unsigned int) | ??_Gfoobar@@UAEPAXI@Z
    0x410C60 | public: __thiscall mmPlayerRecord::mmPlayerRecord(class mmPlayerRecord const &) | ??0mmPlayerRecord@@QAE@ABV0@@Z
    0x410CE0 | public: virtual void * __thiscall Base::`vector deleting destructor'(unsigned int) | ??_EBase@@UAEPAXI@Z
    0x410CE0 | public: virtual void * __thiscall Base::`scalar deleting destructor'(unsigned int) | ??_GBase@@UAEPAXI@Z
    0x410D10 | public: virtual void * __thiscall mmPlayerRecord::`scalar deleting destructor'(unsigned int) | ??_GmmPlayerRecord@@UAEPAXI@Z
    0x410D40 | public: virtual void * __thiscall mmSingleBlitz::`vector deleting destructor'(unsigned int) | ??_EmmSingleBlitz@@UAEPAXI@Z
    0x410DA0 | public: virtual void * __thiscall mmInfoBase::`scalar deleting destructor'(unsigned int) | ??_GmmInfoBase@@UAEPAXI@Z
    0x410DD0 | public: virtual __thiscall mmInfoBase::~mmInfoBase(void) | ??1mmInfoBase@@UAE@XZ
    0x410DE0 | public: virtual void __thiscall mmSingleBlitz::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmSingleBlitz@@UAEXH@Z
    0x410DF0 | public: virtual class mmWaypoints * __thiscall mmSingleBlitz::GetWaypoints(void) | ?GetWaypoints@mmSingleBlitz@@UAEPAVmmWaypoints@@XZ
    0x58F738 | const mmSingleBlitz::`vftable' | ??_7mmSingleBlitz@@6B@
    0x58F7A8 | const foobar::`vftable' | ??_7foobar@@6B@
    0x58F7D8 | const mmPlayerRecord::`vftable' | ??_7mmPlayerRecord@@6B@
    0x58F7F0 | const mmInfoBase::`vftable' | ??_7mmInfoBase@@6B@
    0x58F808 | const Base::`vftable' | ??_7Base@@6B@
    0x609378 | class MetaClass mmSingleBlitzMetaClass | ?mmSingleBlitzMetaClass@@3VMetaClass@@A
    0x410990 | void * __cdecl new_mmSingleBlitz(int) | ?new_mmSingleBlitz@@YAPAXH@Z
    0x410A70 | void __cdecl delete_mmSingleBlitz(void *,int) | ?delete_mmSingleBlitz@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x609378 | ?mmSingleBlitzMetaClass@@3VMetaClass@@A
inline extern_var(0x609378, class MetaClass, mmSingleBlitzMetaClass);

// 0x410990 | ?new_mmSingleBlitz@@YAPAXH@Z
inline void* new_mmSingleBlitz(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x410990, arg1);
}

// 0x410A70 | ?delete_mmSingleBlitz@@YAXPAXH@Z
inline void delete_mmSingleBlitz(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x410A70, arg1, arg2);
}

struct foobar : asNode
{
public:
    // foobar::`vftable' @ 0x58F7A8

    // 0x410C20 | ??1foobar@@UAE@XZ
    inline ~foobar() override
    {
        stub<member_func_t<void, foobar>>(0x410C20, this);
    }

    // 0x40E640 | ?Update@foobar@@EAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, foobar>>(0x40E640, this);
    }

    // 0x40E670 | ?UpdatePaused@foobar@@EAEXXZ
    inline void UpdatePaused() override
    {
        return stub<member_func_t<void, foobar>>(0x40E670, this);
    }
};

struct mmSingleBlitz : mmGame
{
public:
    // mmSingleBlitz::`vftable' @ 0x58F738

    // 0x40F110 | ??0mmSingleBlitz@@QAE@XZ
    inline mmSingleBlitz()
    {
        stub<member_func_t<void, mmSingleBlitz>>(0x40F110, this);
    }

    // 0x40F280 | ?Init@mmSingleBlitz@@QAEHXZ
    inline int32_t Init()
    {
        return stub<member_func_t<int32_t, mmSingleBlitz>>(0x40F280, this);
    }

    // 0x40F870 | ?EnableRacers@mmSingleBlitz@@AAEXXZ
    inline void EnableRacers()
    {
        return stub<member_func_t<void, mmSingleBlitz>>(0x40F870, this);
    }

    // 0x40F900 | ?DisableRacers@mmSingleBlitz@@AAEXXZ
    inline void DisableRacers()
    {
        return stub<member_func_t<void, mmSingleBlitz>>(0x40F900, this);
    }

    // 0x4102C0 | ?RegisterFinish@mmSingleBlitz@@AAEHXZ
    inline int32_t RegisterFinish()
    {
        return stub<member_func_t<int32_t, mmSingleBlitz>>(0x4102C0, this);
    }

    // 0x4105F0 | ?FinishMessage@mmSingleBlitz@@AAEXH@Z
    inline void FinishMessage(int32_t arg1)
    {
        return stub<member_func_t<void, mmSingleBlitz, int32_t>>(0x4105F0, this, arg1);
    }

    // 0x410620 | ?ProgressCheck@mmSingleBlitz@@AAEHHH@Z
    inline int32_t ProgressCheck(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmSingleBlitz, int32_t, int32_t>>(0x410620, this, arg1, arg2);
    }

    // 0x410860 | ?PlayTimerWarning@mmSingleBlitz@@QAEXM@Z
    inline void PlayTimerWarning(float arg1)
    {
        return stub<member_func_t<void, mmSingleBlitz, float>>(0x410860, this, arg1);
    }

    // 0x410940 | ?DeclareFields@mmSingleBlitz@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x410940);
    }

    // 0x40F1B0 | ??1mmSingleBlitz@@UAE@XZ
    inline ~mmSingleBlitz() override
    {
        stub<member_func_t<void, mmSingleBlitz>>(0x40F1B0, this);
    }

    // 0x410AC0 | ?GetClass@mmSingleBlitz@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmSingleBlitz>>(0x410AC0, this);
    }

    // 0x40FA00 | ?Update@mmSingleBlitz@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmSingleBlitz>>(0x40FA00, this);
    }

    // 0x40F770 | ?Reset@mmSingleBlitz@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmSingleBlitz>>(0x40F770, this);
    }

    // 0x40F400 | ?InitMyPlayer@mmSingleBlitz@@UAEXXZ
    inline void InitMyPlayer() override
    {
        return stub<member_func_t<void, mmSingleBlitz>>(0x40F400, this);
    }

    // 0x40F760 | ?InitOtherPlayers@mmSingleBlitz@@UAEXXZ
    inline void InitOtherPlayers() override
    {
        return stub<member_func_t<void, mmSingleBlitz>>(0x40F760, this);
    }

    // 0x40F4F0 | ?InitGameObjects@mmSingleBlitz@@UAEXXZ
    inline void InitGameObjects() override
    {
        return stub<member_func_t<void, mmSingleBlitz>>(0x40F4F0, this);
    }

    // 0x40F470 | ?InitHUD@mmSingleBlitz@@UAEXXZ
    inline void InitHUD() override
    {
        return stub<member_func_t<void, mmSingleBlitz>>(0x40F470, this);
    }

    // 0x40FA20 | ?UpdateGameInput@mmSingleBlitz@@UAEXH@Z
    inline void UpdateGameInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmSingleBlitz, int32_t>>(0x40FA20, this, arg1);
    }

    // 0x410DE0 | ?UpdateDebugKeyInput@mmSingleBlitz@@UAEXH@Z
    inline void UpdateDebugKeyInput(int32_t arg1) override
    {
        return stub<member_func_t<void, mmSingleBlitz, int32_t>>(0x410DE0, this, arg1);
    }

    // 0x40FA60 | ?UpdateGame@mmSingleBlitz@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmSingleBlitz>>(0x40FA60, this);
    }

    // 0x4106F0 | ?NextRace@mmSingleBlitz@@UAEXXZ
    inline void NextRace() override
    {
        return stub<member_func_t<void, mmSingleBlitz>>(0x4106F0, this);
    }

    // 0x40F970 | ?HitWaterHandler@mmSingleBlitz@@UAEXXZ
    inline void HitWaterHandler() override
    {
        return stub<member_func_t<void, mmSingleBlitz>>(0x40F970, this);
    }

    // 0x410DF0 | ?GetWaypoints@mmSingleBlitz@@UAEPAVmmWaypoints@@XZ
    inline class mmWaypoints* GetWaypoints() override
    {
        return stub<member_func_t<class mmWaypoints*, mmSingleBlitz>>(0x410DF0, this);
    }
};
