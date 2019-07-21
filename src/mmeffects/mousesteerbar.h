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
    mmeffects:mousesteerbar

    0x4F3AE0 | public: __thiscall mmMouseSteerBar::mmMouseSteerBar(void) | ??0mmMouseSteerBar@@QAE@XZ
    0x4F3B00 | public: virtual __thiscall mmMouseSteerBar::~mmMouseSteerBar(void) | ??1mmMouseSteerBar@@UAE@XZ
    0x4F3B10 | public: void __thiscall mmMouseSteerBar::Init(float,float,float *) | ?Init@mmMouseSteerBar@@QAEXMMPAM@Z
    0x4F3BB0 | public: virtual void __thiscall mmMouseSteerBar::Update(void) | ?Update@mmMouseSteerBar@@UAEXXZ
    0x4F3BE0 | public: virtual void __thiscall mmMouseSteerBar::Cull(void) | ?Cull@mmMouseSteerBar@@UAEXXZ
    0x4F3C60 | public: virtual void * __thiscall mmMouseSteerBar::`scalar deleting destructor'(unsigned int) | ??_GmmMouseSteerBar@@UAEPAXI@Z
    0x4F3C60 | public: virtual void * __thiscall mmMouseSteerBar::`vector deleting destructor'(unsigned int) | ??_EmmMouseSteerBar@@UAEPAXI@Z
    0x595158 | const mmMouseSteerBar::`vftable' | ??_7mmMouseSteerBar@@6B@
*/

struct mmMouseSteerBar : asNode
{
public:
    // mmMouseSteerBar::`vftable' @ 0x595158

    // 0x4F3AE0 | ??0mmMouseSteerBar@@QAE@XZ
    inline mmMouseSteerBar()
    {
        // stub<member_func_t<void, mmMouseSteerBar>>(0x4F3AE0, this);

        unimplemented();
    }

    // 0x4F3B10 | ?Init@mmMouseSteerBar@@QAEXMMPAM@Z
    inline void Init(float arg1, float arg2, float* arg3)
    {
        return stub<member_func_t<void, mmMouseSteerBar, float, float, float*>>(0x4F3B10, this, arg1, arg2, arg3);
    }

    // 0x4F3B00 | ??1mmMouseSteerBar@@UAE@XZ
    inline ~mmMouseSteerBar() override = 0
    {
        // stub<member_func_t<void, mmMouseSteerBar>>(0x4F3B00, this);

        unimplemented();
    }

    // 0x4F3BE0 | ?Cull@mmMouseSteerBar@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmMouseSteerBar>>(0x4F3BE0, this);
    }

    // 0x4F3BB0 | ?Update@mmMouseSteerBar@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmMouseSteerBar>>(0x4F3BB0, this);
    }
};
