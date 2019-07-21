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
    mmai:aiGoalStop

    0x458350 | public: __thiscall aiGoalStop::aiGoalStop(class mmCar *,short *) | ??0aiGoalStop@@QAE@PAVmmCar@@PAF@Z
    0x458380 | public: __thiscall aiGoalStop::~aiGoalStop(void) | ??1aiGoalStop@@QAE@XZ
    0x458390 | public: virtual void __thiscall aiGoalStop::Init(void) | ?Init@aiGoalStop@@UAEXXZ
    0x4583A0 | public: virtual void __thiscall aiGoalStop::Reset(void) | ?Reset@aiGoalStop@@UAEXXZ
    0x4583B0 | public: virtual void __thiscall aiGoalStop::Update(void) | ?Update@aiGoalStop@@UAEXXZ
    0x458410 | public: virtual int __thiscall aiGoalStop::Context(void) | ?Context@aiGoalStop@@UAEHXZ
    0x458430 | public: virtual int __thiscall aiGoalStop::Priority(void) | ?Priority@aiGoalStop@@UAEHXZ
    0x590BA0 | const aiGoalStop::`vftable' | ??_7aiGoalStop@@6B@
*/

struct aiGoalStop : aiGoal
{
public:
    // aiGoalStop::`vftable' @ 0x590BA0

    // 0x458350 | ??0aiGoalStop@@QAE@PAVmmCar@@PAF@Z
    inline aiGoalStop(class mmCar* arg1, int16_t* arg2)
    {
        // stub<member_func_t<void, aiGoalStop, class mmCar*, int16_t*>>(0x458350, this, arg1, arg2);

        unimplemented();
    }

    // 0x458380 | ??1aiGoalStop@@QAE@XZ
    inline ~aiGoalStop()
    {
        stub<member_func_t<void, aiGoalStop>>(0x458380, this);
    }

    // 0x458390 | ?Init@aiGoalStop@@UAEXXZ
    inline void Init() override
    {
        return stub<member_func_t<void, aiGoalStop>>(0x458390, this);
    }

    // 0x4583A0 | ?Reset@aiGoalStop@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiGoalStop>>(0x4583A0, this);
    }

    // 0x458410 | ?Context@aiGoalStop@@UAEHXZ
    inline int32_t Context() override
    {
        return stub<member_func_t<int32_t, aiGoalStop>>(0x458410, this);
    }

    // 0x458430 | ?Priority@aiGoalStop@@UAEHXZ
    inline int32_t Priority() override
    {
        return stub<member_func_t<int32_t, aiGoalStop>>(0x458430, this);
    }

    // 0x4583B0 | ?Update@aiGoalStop@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiGoalStop>>(0x4583B0, this);
    }
};
