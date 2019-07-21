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
    mmanim:AnimTrigger

    0x4B8C70 | public: __thiscall mmAnimTrigger::mmAnimTrigger(void) | ??0mmAnimTrigger@@QAE@XZ
    0x4B8C80 | public: __thiscall mmAnimTrigger::~mmAnimTrigger(void) | ??1mmAnimTrigger@@QAE@XZ
    0x4B8C90 | public: void __thiscall mmAnimTrigger::Init(class mmInstance *,int) | ?Init@mmAnimTrigger@@QAEXPAVmmInstance@@H@Z
    0x4B8CB0 | public: void __thiscall mmAnimTrigger::Init(class Vector3 *,float *) | ?Init@mmAnimTrigger@@QAEXPAVVector3@@PAM@Z
    0x4B8CD0 | public: void __thiscall mmAnimTrigger::Init(int *,float) | ?Init@mmAnimTrigger@@QAEXPAHM@Z
    0x4B8D00 | public: void __thiscall mmAnimTrigger::Init(float) | ?Init@mmAnimTrigger@@QAEXM@Z
    0x4B8D20 | public: int __thiscall mmAnimTrigger::CheckCondition(void) | ?CheckCondition@mmAnimTrigger@@QAEHXZ
    0x4B8D90 | public: int __thiscall mmAnimTrigger::CheckObjectHit(void) | ?CheckObjectHit@mmAnimTrigger@@QAEHXZ
    0x4B8DB0 | public: int __thiscall mmAnimTrigger::CheckTimeDelay(void) | ?CheckTimeDelay@mmAnimTrigger@@QAEHXZ
    0x4B8DE0 | public: int __thiscall mmAnimTrigger::CheckStateStatus(void) | ?CheckStateStatus@mmAnimTrigger@@QAEHXZ
    0x4B8E30 | public: void __thiscall mmAnimTrigger::Reset(void) | ?Reset@mmAnimTrigger@@QAEXXZ
    0x4B8E40 | public: int __thiscall mmAnimTrigger::CheckObjectDistance(void) | ?CheckObjectDistance@mmAnimTrigger@@QAEHXZ
*/

class mmAnimTrigger
{
public:
    // 0x4B8C70 | ??0mmAnimTrigger@@QAE@XZ
    inline mmAnimTrigger()
    {
        // stub<member_func_t<void, mmAnimTrigger>>(0x4B8C70, this);

        unimplemented();
    }

    // 0x4B8C80 | ??1mmAnimTrigger@@QAE@XZ
    inline ~mmAnimTrigger()
    {
        stub<member_func_t<void, mmAnimTrigger>>(0x4B8C80, this);
    }

    // 0x4B8C90 | ?Init@mmAnimTrigger@@QAEXPAVmmInstance@@H@Z
    inline void Init(class mmInstance* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmAnimTrigger, class mmInstance*, int32_t>>(0x4B8C90, this, arg1, arg2);
    }

    // 0x4B8CB0 | ?Init@mmAnimTrigger@@QAEXPAVVector3@@PAM@Z
    inline void Init(class Vector3* arg1, float* arg2)
    {
        return stub<member_func_t<void, mmAnimTrigger, class Vector3*, float*>>(0x4B8CB0, this, arg1, arg2);
    }

    // 0x4B8CD0 | ?Init@mmAnimTrigger@@QAEXPAHM@Z
    inline void Init(int32_t* arg1, float arg2)
    {
        return stub<member_func_t<void, mmAnimTrigger, int32_t*, float>>(0x4B8CD0, this, arg1, arg2);
    }

    // 0x4B8D00 | ?Init@mmAnimTrigger@@QAEXM@Z
    inline void Init(float arg1)
    {
        return stub<member_func_t<void, mmAnimTrigger, float>>(0x4B8D00, this, arg1);
    }

    // 0x4B8D20 | ?CheckCondition@mmAnimTrigger@@QAEHXZ
    inline int32_t CheckCondition()
    {
        return stub<member_func_t<int32_t, mmAnimTrigger>>(0x4B8D20, this);
    }

    // 0x4B8D90 | ?CheckObjectHit@mmAnimTrigger@@QAEHXZ
    inline int32_t CheckObjectHit()
    {
        return stub<member_func_t<int32_t, mmAnimTrigger>>(0x4B8D90, this);
    }

    // 0x4B8DB0 | ?CheckTimeDelay@mmAnimTrigger@@QAEHXZ
    inline int32_t CheckTimeDelay()
    {
        return stub<member_func_t<int32_t, mmAnimTrigger>>(0x4B8DB0, this);
    }

    // 0x4B8DE0 | ?CheckStateStatus@mmAnimTrigger@@QAEHXZ
    inline int32_t CheckStateStatus()
    {
        return stub<member_func_t<int32_t, mmAnimTrigger>>(0x4B8DE0, this);
    }

    // 0x4B8E30 | ?Reset@mmAnimTrigger@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmAnimTrigger>>(0x4B8E30, this);
    }

    // 0x4B8E40 | ?CheckObjectDistance@mmAnimTrigger@@QAEHXZ
    inline int32_t CheckObjectDistance()
    {
        return stub<member_func_t<int32_t, mmAnimTrigger>>(0x4B8E40, this);
    }
};
