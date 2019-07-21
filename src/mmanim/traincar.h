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
    mmanim:traincar

    0x4BC9F0 | public: __thiscall mmAnimTrainCar::mmAnimTrainCar(void) | ??0mmAnimTrainCar@@QAE@XZ
    0x4BCA10 | public: virtual __thiscall mmAnimTrainCar::~mmAnimTrainCar(void) | ??1mmAnimTrainCar@@UAE@XZ
    0x4BCA20 | public: void __thiscall mmAnimTrainCar::Init(char *,char *) | ?Init@mmAnimTrainCar@@QAEXPAD0@Z
    0x4BCAA0 | public: void __thiscall mmAnimTrainCar::SetMatrix(class Matrix34 &) | ?SetMatrix@mmAnimTrainCar@@QAEXAAVMatrix34@@@Z
    0x4BCAC0 | public: virtual void __fastcall mmAnimTrainCar::Draw(int) | ?Draw@mmAnimTrainCar@@UAIXH@Z
    0x4BCB10 | public: virtual void __thiscall mmAnimTrainCar::Reset(void) | ?Reset@mmAnimTrainCar@@UAEXXZ
    0x4BCB20 | public: void __thiscall mmAnimTrainCar::SetStart(float,float) | ?SetStart@mmAnimTrainCar@@QAEXMM@Z
    0x4BCB50 | public: virtual void * __thiscall mmAnimTrainCar::`scalar deleting destructor'(unsigned int) | ??_GmmAnimTrainCar@@UAEPAXI@Z
    0x5941F0 | const mmAnimTrainCar::`vftable' | ??_7mmAnimTrainCar@@6B@
*/

struct mmAnimTrainCar : mmMatrixInstance
{
public:
    // mmAnimTrainCar::`vftable' @ 0x5941F0

    // 0x4BC9F0 | ??0mmAnimTrainCar@@QAE@XZ
    inline mmAnimTrainCar()
    {
        // stub<member_func_t<void, mmAnimTrainCar>>(0x4BC9F0, this);

        unimplemented();
    }

    // 0x4BCA20 | ?Init@mmAnimTrainCar@@QAEXPAD0@Z
    inline void Init(char* arg1, char* arg2)
    {
        return stub<member_func_t<void, mmAnimTrainCar, char*, char*>>(0x4BCA20, this, arg1, arg2);
    }

    // 0x4BCAA0 | ?SetMatrix@mmAnimTrainCar@@QAEXAAVMatrix34@@@Z
    inline void SetMatrix(class Matrix34& arg1)
    {
        return stub<member_func_t<void, mmAnimTrainCar, class Matrix34&>>(0x4BCAA0, this, arg1);
    }

    // 0x4BCB20 | ?SetStart@mmAnimTrainCar@@QAEXMM@Z
    inline void SetStart(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmAnimTrainCar, float, float>>(0x4BCB20, this, arg1, arg2);
    }

    // 0x4BCA10 | ??1mmAnimTrainCar@@UAE@XZ
    inline ~mmAnimTrainCar() override = 0
    {
        // stub<member_func_t<void, mmAnimTrainCar>>(0x4BCA10, this);

        unimplemented();
    }

    // 0x4BCAC0 | ?Draw@mmAnimTrainCar@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmAnimTrainCar, int32_t>>(0x4BCAC0, this, arg1);
    }

    // 0x4BCB10 | ?Reset@mmAnimTrainCar@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmAnimTrainCar>>(0x4BCB10, this);
    }
};
