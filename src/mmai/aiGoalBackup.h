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
    mmai:aiGoalBackup

    0x458470 | public: __thiscall aiGoalBackup::aiGoalBackup(class aiRailSet *,class mmCar *,short *) | ??0aiGoalBackup@@QAE@PAVaiRailSet@@PAVmmCar@@PAF@Z
    0x4584A0 | public: __thiscall aiGoalBackup::~aiGoalBackup(void) | ??1aiGoalBackup@@QAE@XZ
    0x4584B0 | public: virtual void __thiscall aiGoalBackup::Init(void) | ?Init@aiGoalBackup@@UAEXXZ
    0x4584C0 | public: virtual int __thiscall aiGoalBackup::Context(void) | ?Context@aiGoalBackup@@UAEHXZ
    0x4584D0 | public: virtual int __thiscall aiGoalBackup::Priority(void) | ?Priority@aiGoalBackup@@UAEHXZ
    0x4584E0 | public: virtual void __thiscall aiGoalBackup::Reset(void) | ?Reset@aiGoalBackup@@UAEXXZ
    0x458510 | public: virtual void __thiscall aiGoalBackup::Update(void) | ?Update@aiGoalBackup@@UAEXXZ
    0x458850 | private: void __thiscall aiGoalBackup::FinishedBackingUp(void) | ?FinishedBackingUp@aiGoalBackup@@AAEXXZ
    0x590BD8 | const aiGoalBackup::`vftable' | ??_7aiGoalBackup@@6B@
*/

struct aiGoalBackup : aiGoal
{
public:
    // aiGoalBackup::`vftable' @ 0x590BD8

    // 0x458470 | ??0aiGoalBackup@@QAE@PAVaiRailSet@@PAVmmCar@@PAF@Z
    inline aiGoalBackup(class aiRailSet* arg1, class mmCar* arg2, int16_t* arg3)
    {
        stub<member_func_t<void, aiGoalBackup, class aiRailSet*, class mmCar*, int16_t*>>(
            0x458470, this, arg1, arg2, arg3);
    }

    // 0x4584A0 | ??1aiGoalBackup@@QAE@XZ
    inline ~aiGoalBackup()
    {
        stub<member_func_t<void, aiGoalBackup>>(0x4584A0, this);
    }

    // 0x458850 | ?FinishedBackingUp@aiGoalBackup@@AAEXXZ
    inline void FinishedBackingUp()
    {
        return stub<member_func_t<void, aiGoalBackup>>(0x458850, this);
    }

    // 0x4584B0 | ?Init@aiGoalBackup@@UAEXXZ
    inline void Init() override
    {
        return stub<member_func_t<void, aiGoalBackup>>(0x4584B0, this);
    }

    // 0x4584E0 | ?Reset@aiGoalBackup@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiGoalBackup>>(0x4584E0, this);
    }

    // 0x4584C0 | ?Context@aiGoalBackup@@UAEHXZ
    inline int32_t Context() override
    {
        return stub<member_func_t<int32_t, aiGoalBackup>>(0x4584C0, this);
    }

    // 0x4584D0 | ?Priority@aiGoalBackup@@UAEHXZ
    inline int32_t Priority() override
    {
        return stub<member_func_t<int32_t, aiGoalBackup>>(0x4584D0, this);
    }

    // 0x458510 | ?Update@aiGoalBackup@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiGoalBackup>>(0x458510, this);
    }
};
