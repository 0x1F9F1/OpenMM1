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
    mmanim:AnimSpline

    0x4B8260 | public: __thiscall mmAnimSpline::mmAnimSpline(void) | ??0mmAnimSpline@@QAE@XZ
    0x4B8280 | public: virtual __thiscall mmAnimSpline::~mmAnimSpline(void) | ??1mmAnimSpline@@UAE@XZ
    0x4B82E0 | public: int __thiscall mmAnimSpline::Init(char *,int) | ?Init@mmAnimSpline@@QAEHPADH@Z
    0x4B8380 | public: int __thiscall mmAnimSpline::LoadFile(char *) | ?LoadFile@mmAnimSpline@@QAEHPAD@Z
    0x4B8460 | public: void __thiscall mmAnimSpline::ClearVectors(void) | ?ClearVectors@mmAnimSpline@@QAEXXZ
    0x4B8480 | public: void __thiscall mmAnimSpline::AddVector(class Vector3 &) | ?AddVector@mmAnimSpline@@QAEXAAVVector3@@@Z
    0x4B8520 | public: int __thiscall mmAnimSpline::InitBoat(void) | ?InitBoat@mmAnimSpline@@QAEHXZ
    0x4B8530 | public: int __thiscall mmAnimSpline::InitPlane(void) | ?InitPlane@mmAnimSpline@@QAEHXZ
    0x4B85D0 | public: int __thiscall mmAnimSpline::InitTrain(void) | ?InitTrain@mmAnimSpline@@QAEHXZ
    0x4B8650 | public: virtual void __thiscall mmAnimSpline::Update(void) | ?Update@mmAnimSpline@@UAEXXZ
    0x4B8680 | public: virtual void __thiscall mmAnimSpline::Reset(void) | ?Reset@mmAnimSpline@@UAEXXZ
    0x4B86A0 | public: void __thiscall mmAnimSpline::AirlinerSwap(void) | ?AirlinerSwap@mmAnimSpline@@QAEXXZ
    0x4B8750 | public: void __thiscall mmAnimSpline::UFOSwap(void) | ?UFOSwap@mmAnimSpline@@QAEXXZ
    0x4B8770 | public: virtual void * __thiscall mmAnimSpline::`scalar deleting destructor'(unsigned int) | ??_GmmAnimSpline@@UAEPAXI@Z
    0x593FC0 | const mmAnimSpline::`vftable' | ??_7mmAnimSpline@@6B@
*/

struct mmAnimSpline : asNode
{
public:
    // mmAnimSpline::`vftable' @ 0x593FC0

    // 0x4B8260 | ??0mmAnimSpline@@QAE@XZ
    inline mmAnimSpline()
    {
        // stub<member_func_t<void, mmAnimSpline>>(0x4B8260, this);

        unimplemented();
    }

    // 0x4B82E0 | ?Init@mmAnimSpline@@QAEHPADH@Z
    inline int32_t Init(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmAnimSpline, char*, int32_t>>(0x4B82E0, this, arg1, arg2);
    }

    // 0x4B8380 | ?LoadFile@mmAnimSpline@@QAEHPAD@Z
    inline int32_t LoadFile(char* arg1)
    {
        return stub<member_func_t<int32_t, mmAnimSpline, char*>>(0x4B8380, this, arg1);
    }

    // 0x4B8460 | ?ClearVectors@mmAnimSpline@@QAEXXZ
    inline void ClearVectors()
    {
        return stub<member_func_t<void, mmAnimSpline>>(0x4B8460, this);
    }

    // 0x4B8480 | ?AddVector@mmAnimSpline@@QAEXAAVVector3@@@Z
    inline void AddVector(class Vector3& arg1)
    {
        return stub<member_func_t<void, mmAnimSpline, class Vector3&>>(0x4B8480, this, arg1);
    }

    // 0x4B8520 | ?InitBoat@mmAnimSpline@@QAEHXZ
    inline int32_t InitBoat()
    {
        return stub<member_func_t<int32_t, mmAnimSpline>>(0x4B8520, this);
    }

    // 0x4B8530 | ?InitPlane@mmAnimSpline@@QAEHXZ
    inline int32_t InitPlane()
    {
        return stub<member_func_t<int32_t, mmAnimSpline>>(0x4B8530, this);
    }

    // 0x4B85D0 | ?InitTrain@mmAnimSpline@@QAEHXZ
    inline int32_t InitTrain()
    {
        return stub<member_func_t<int32_t, mmAnimSpline>>(0x4B85D0, this);
    }

    // 0x4B86A0 | ?AirlinerSwap@mmAnimSpline@@QAEXXZ
    inline void AirlinerSwap()
    {
        return stub<member_func_t<void, mmAnimSpline>>(0x4B86A0, this);
    }

    // 0x4B8750 | ?UFOSwap@mmAnimSpline@@QAEXXZ
    inline void UFOSwap()
    {
        return stub<member_func_t<void, mmAnimSpline>>(0x4B8750, this);
    }

    // 0x4B8280 | ??1mmAnimSpline@@UAE@XZ
    inline ~mmAnimSpline() override = 0
    {
        // stub<member_func_t<void, mmAnimSpline>>(0x4B8280, this);

        unimplemented();
    }

    // 0x4B8650 | ?Update@mmAnimSpline@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmAnimSpline>>(0x4B8650, this);
    }

    // 0x4B8680 | ?Reset@mmAnimSpline@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmAnimSpline>>(0x4B8680, this);
    }
};
