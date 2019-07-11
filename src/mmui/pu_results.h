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
    mmui:pu_results

    0x49CC50 | public: __thiscall PUResults::PUResults(int,float,float,float,float,char *) | ??0PUResults@@QAE@HMMMMPAD@Z
    0x49CD80 | public: void __thiscall PUResults::Init320(void) | ?Init320@PUResults@@QAEXXZ
    0x49D160 | public: void __thiscall PUResults::Init640(void) | ?Init640@PUResults@@QAEXXZ
    0x49D590 | public: virtual __thiscall PUResults::~PUResults(void) | ??1PUResults@@UAE@XZ
    0x49D5A0 | public: void __thiscall PUResults::AddTitle(struct LocString *,struct LocString *) | ?AddTitle@PUResults@@QAEXPAULocString@@0@Z
    0x49D5D0 | public: virtual void __thiscall PUResults::Reset(void) | ?Reset@PUResults@@UAEXXZ
    0x49D5E0 | public: void __thiscall PUResults::RosterRO(int) | ?RosterRO@PUResults@@QAEXH@Z
    0x49D600 | public: void __thiscall PUResults::RestartRO(int) | ?RestartRO@PUResults@@QAEXH@Z
    0x49D620 | public: void __thiscall PUResults::AddName(int,char *,float) | ?AddName@PUResults@@QAEXHPADM@Z
    0x49D6D0 | public: void __thiscall PUResults::AddName(int,char *,int) | ?AddName@PUResults@@QAEXHPADH@Z
    0x49D790 | public: void __thiscall PUResults::ClearNames(void) | ?ClearNames@PUResults@@QAEXXZ
    0x49D800 | public: void __thiscall PUResults::DisableNextRace(void) | ?DisableNextRace@PUResults@@QAEXXZ
    0x49D810 | public: void __thiscall PUResults::EnableNextRace(void) | ?EnableNextRace@PUResults@@QAEXXZ
    0x49D820 | public: void __thiscall PUResults::SetMessage(struct LocString *) | ?SetMessage@PUResults@@QAEXPAULocString@@@Z
    0x49D840 | public: virtual void * __thiscall PUResults::`vector deleting destructor'(unsigned int) | ??_EPUResults@@UAEPAXI@Z
    0x49D840 | public: virtual void * __thiscall PUResults::`scalar deleting destructor'(unsigned int) | ??_GPUResults@@UAEPAXI@Z
    0x592B50 | const PUResults::`vftable' | ??_7PUResults@@6B@
*/

#include "hooking.h"

struct PUResults : PUMenuBase
{
public:
    // PUResults::`vftable' @ 0x592B50

    // 0x49CC50 | ??0PUResults@@QAE@HMMMMPAD@Z
    inline PUResults(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, PUResults, int32_t, float, float, float, float, char*>>(
            0x49CC50, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x49CD80 | ?Init320@PUResults@@QAEXXZ
    inline void Init320()
    {
        return stub<member_func_t<void, PUResults>>(0x49CD80, this);
    }

    // 0x49D160 | ?Init640@PUResults@@QAEXXZ
    inline void Init640()
    {
        return stub<member_func_t<void, PUResults>>(0x49D160, this);
    }

    // 0x49D5A0 | ?AddTitle@PUResults@@QAEXPAULocString@@0@Z
    inline void AddTitle(struct LocString* arg1, struct LocString* arg2)
    {
        return stub<member_func_t<void, PUResults, struct LocString*, struct LocString*>>(0x49D5A0, this, arg1, arg2);
    }

    // 0x49D5E0 | ?RosterRO@PUResults@@QAEXH@Z
    inline void RosterRO(int32_t arg1)
    {
        return stub<member_func_t<void, PUResults, int32_t>>(0x49D5E0, this, arg1);
    }

    // 0x49D600 | ?RestartRO@PUResults@@QAEXH@Z
    inline void RestartRO(int32_t arg1)
    {
        return stub<member_func_t<void, PUResults, int32_t>>(0x49D600, this, arg1);
    }

    // 0x49D620 | ?AddName@PUResults@@QAEXHPADM@Z
    inline void AddName(int32_t arg1, char* arg2, float arg3)
    {
        return stub<member_func_t<void, PUResults, int32_t, char*, float>>(0x49D620, this, arg1, arg2, arg3);
    }

    // 0x49D6D0 | ?AddName@PUResults@@QAEXHPADH@Z
    inline void AddName(int32_t arg1, char* arg2, int32_t arg3)
    {
        return stub<member_func_t<void, PUResults, int32_t, char*, int32_t>>(0x49D6D0, this, arg1, arg2, arg3);
    }

    // 0x49D790 | ?ClearNames@PUResults@@QAEXXZ
    inline void ClearNames()
    {
        return stub<member_func_t<void, PUResults>>(0x49D790, this);
    }

    // 0x49D800 | ?DisableNextRace@PUResults@@QAEXXZ
    inline void DisableNextRace()
    {
        return stub<member_func_t<void, PUResults>>(0x49D800, this);
    }

    // 0x49D810 | ?EnableNextRace@PUResults@@QAEXXZ
    inline void EnableNextRace()
    {
        return stub<member_func_t<void, PUResults>>(0x49D810, this);
    }

    // 0x49D820 | ?SetMessage@PUResults@@QAEXPAULocString@@@Z
    inline void SetMessage(struct LocString* arg1)
    {
        return stub<member_func_t<void, PUResults, struct LocString*>>(0x49D820, this, arg1);
    }

    // 0x49D590 | ??1PUResults@@UAE@XZ
    inline ~PUResults() override
    {
        stub<member_func_t<void, PUResults>>(0x49D590, this);
    }

    // 0x49D5D0 | ?Reset@PUResults@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, PUResults>>(0x49D5D0, this);
    }
};
