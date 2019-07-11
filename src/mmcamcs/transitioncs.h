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

// mmcamcs:transitioncs

#include "hooking.h"

struct TransitionCS : CarCamCS
{
public:
    // TransitionCS::`vftable' @ 0x594E68

    // 0x4ED9D0 | ??0TransitionCS@@QAE@XZ
    inline TransitionCS()
    {
        stub<member_func_t<void, TransitionCS>>(0x4ED9D0, this);
    }

    // 0x4EDA70 | ?Init@TransitionCS@@QAEXPAVmmCar@@@Z
    inline void Init(class mmCar* arg1)
    {
        return stub<member_func_t<void, TransitionCS, class mmCar*>>(0x4EDA70, this, arg1);
    }

    // 0x4EE150 | ?NewTransition@TransitionCS@@QAEXPAVCarCamCS@@0@Z
    inline void NewTransition(class CarCamCS* arg1, class CarCamCS* arg2)
    {
        return stub<member_func_t<void, TransitionCS, class CarCamCS*, class CarCamCS*>>(0x4EE150, this, arg1, arg2);
    }

    // 0x4EE180 | ?NextTransition@TransitionCS@@QAEXPAVCarCamCS@@@Z
    inline void NextTransition(class CarCamCS* arg1)
    {
        return stub<member_func_t<void, TransitionCS, class CarCamCS*>>(0x4EE180, this, arg1);
    }

    // 0x4EE1C0 | ?StartTransition@TransitionCS@@QAEXXZ
    inline void StartTransition()
    {
        return stub<member_func_t<void, TransitionCS>>(0x4EE1C0, this);
    }

    // 0x4EE230 | ?StartNextTransition@TransitionCS@@QAEXXZ
    inline void StartNextTransition()
    {
        return stub<member_func_t<void, TransitionCS>>(0x4EE230, this);
    }

    // 0x4EE270 | ?ReverseTransition@TransitionCS@@QAEXXZ
    inline void ReverseTransition()
    {
        return stub<member_func_t<void, TransitionCS>>(0x4EE270, this);
    }

    // 0x4EDA60 | ??1TransitionCS@@UAE@XZ
    inline ~TransitionCS() override
    {
        stub<member_func_t<void, TransitionCS>>(0x4EDA60, this);
    }

    // 0x4EDAA0 | ?Update@TransitionCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, TransitionCS>>(0x4EDAA0, this);
    }

    // 0x4EDA90 | ?Reset@TransitionCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, TransitionCS>>(0x4EDA90, this);
    }

    // 0x4EE120 | ?ForceMatrixDelta@TransitionCS@@UAEXABVVector3@@@Z
    inline void ForceMatrixDelta(class Vector3 const& arg1) override
    {
        return stub<member_func_t<void, TransitionCS, class Vector3 const&>>(0x4EE120, this, arg1);
    }
};
