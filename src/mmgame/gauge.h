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
    mmgame:gauge

    0x42F740 | public: __thiscall RadialGauge::RadialGauge(void) | ??0RadialGauge@@QAE@XZ
    0x42F7B0 | public: void __thiscall RadialGauge::Init(char *,char *,float *,float *,float) | ?Init@RadialGauge@@QAEXPAD0PAM1M@Z
    0x42F810 | public: virtual void __thiscall RadialGauge::Update(void) | ?Update@RadialGauge@@UAEXXZ
    0x42F930 | public: virtual void __thiscall RadialGauge::Cull(void) | ?Cull@RadialGauge@@UAEXXZ
    0x42F960 | public: __thiscall mmLinearGauge::mmLinearGauge(void) | ??0mmLinearGauge@@QAE@XZ
    0x42F970 | public: __thiscall mmLinearGauge::~mmLinearGauge(void) | ??1mmLinearGauge@@QAE@XZ
    0x42F980 | public: void __thiscall mmLinearGauge::Init(char *,float *,float *,float *,int,class mmExternalView *) | ?Init@mmLinearGauge@@QAEXPADPAM11HPAVmmExternalView@@@Z
    0x42FA90 | public: void __thiscall mmLinearGauge::Draw(void) | ?Draw@mmLinearGauge@@QAEXXZ
    0x42FB20 | public: void __thiscall mmRadGauge::Init(float *,float *,class mmExternalView *,int,unsigned int) | ?Init@mmRadGauge@@QAEXPAM0PAVmmExternalView@@HI@Z
    0x42FB50 | public: void __thiscall mmRadGauge::ResChange(void) | ?ResChange@mmRadGauge@@QAEXXZ
    0x42FBA0 | public: void __thiscall mmRadGauge::Draw(void) | ?Draw@mmRadGauge@@QAEXXZ
    0x42FCD0 | public: void __thiscall mmGearIndicator::Init(class mmExternalView *,class mmPlayer *) | ?Init@mmGearIndicator@@QAEXPAVmmExternalView@@PAVmmPlayer@@@Z
    0x42FE00 | public: void __thiscall mmGearIndicator::Draw(void) | ?Draw@mmGearIndicator@@QAEXXZ
    0x42FE80 | public: void __thiscall mmSpeedIndicator::Init(class mmExternalView *,class mmCarSim *) | ?Init@mmSpeedIndicator@@QAEXPAVmmExternalView@@PAVmmCarSim@@@Z
    0x42FF10 | public: void __thiscall mmSpeedIndicator::Draw(void) | ?Draw@mmSpeedIndicator@@QAEXXZ
    0x430060 | public: virtual void * __thiscall RadialGauge::`vector deleting destructor'(unsigned int) | ??_ERadialGauge@@UAEPAXI@Z
    0x430060 | public: virtual void * __thiscall RadialGauge::`scalar deleting destructor'(unsigned int) | ??_GRadialGauge@@UAEPAXI@Z
    0x590300 | const RadialGauge::`vftable' | ??_7RadialGauge@@6B@
*/

struct RadialGauge : asNode
{
public:
    // RadialGauge::`vftable' @ 0x590300

    // 0x42F740 | ??0RadialGauge@@QAE@XZ
    inline RadialGauge()
    {
        // stub<member_func_t<void, RadialGauge>>(0x42F740, this);

        unimplemented();
    }

    // 0x42F7B0 | ?Init@RadialGauge@@QAEXPAD0PAM1M@Z
    inline void Init(char* arg1, char* arg2, float* arg3, float* arg4, float arg5)
    {
        return stub<member_func_t<void, RadialGauge, char*, char*, float*, float*, float>>(
            0x42F7B0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x42F660 | ??1RadialGauge@@UAE@XZ
    inline ~RadialGauge() override = 0
    {
        // stub<member_func_t<void, RadialGauge>>(0x42F660, this);

        unimplemented();
    }

    // 0x42F930 | ?Cull@RadialGauge@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, RadialGauge>>(0x42F930, this);
    }

    // 0x42F810 | ?Update@RadialGauge@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, RadialGauge>>(0x42F810, this);
    }
};

struct mmLinearGauge
{
public:
    // 0x42F960 | ??0mmLinearGauge@@QAE@XZ
    inline mmLinearGauge()
    {
        // stub<member_func_t<void, mmLinearGauge>>(0x42F960, this);

        unimplemented();
    }

    // 0x42F970 | ??1mmLinearGauge@@QAE@XZ
    inline ~mmLinearGauge()
    {
        stub<member_func_t<void, mmLinearGauge>>(0x42F970, this);
    }

    // 0x42F980 | ?Init@mmLinearGauge@@QAEXPADPAM11HPAVmmExternalView@@@Z
    inline void Init(char* arg1, float* arg2, float* arg3, float* arg4, int32_t arg5, class mmExternalView* arg6)
    {
        return stub<member_func_t<void, mmLinearGauge, char*, float*, float*, float*, int32_t, class mmExternalView*>>(
            0x42F980, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x42FA90 | ?Draw@mmLinearGauge@@QAEXXZ
    inline void Draw()
    {
        return stub<member_func_t<void, mmLinearGauge>>(0x42FA90, this);
    }
};

struct mmRadGauge
{
public:
    // 0x42FB20 | ?Init@mmRadGauge@@QAEXPAM0PAVmmExternalView@@HI@Z
    inline void Init(float* arg1, float* arg2, class mmExternalView* arg3, int32_t arg4, uint32_t arg5)
    {
        return stub<member_func_t<void, mmRadGauge, float*, float*, class mmExternalView*, int32_t, uint32_t>>(
            0x42FB20, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x42FB50 | ?ResChange@mmRadGauge@@QAEXXZ
    inline void ResChange()
    {
        return stub<member_func_t<void, mmRadGauge>>(0x42FB50, this);
    }

    // 0x42FBA0 | ?Draw@mmRadGauge@@QAEXXZ
    inline void Draw()
    {
        return stub<member_func_t<void, mmRadGauge>>(0x42FBA0, this);
    }
};

struct mmGearIndicator
{
public:
    // 0x42FCD0 | ?Init@mmGearIndicator@@QAEXPAVmmExternalView@@PAVmmPlayer@@@Z
    inline void Init(class mmExternalView* arg1, class mmPlayer* arg2)
    {
        return stub<member_func_t<void, mmGearIndicator, class mmExternalView*, class mmPlayer*>>(
            0x42FCD0, this, arg1, arg2);
    }

    // 0x42FE00 | ?Draw@mmGearIndicator@@QAEXXZ
    inline void Draw()
    {
        return stub<member_func_t<void, mmGearIndicator>>(0x42FE00, this);
    }
};

struct mmSpeedIndicator
{
public:
    // 0x42FE80 | ?Init@mmSpeedIndicator@@QAEXPAVmmExternalView@@PAVmmCarSim@@@Z
    inline void Init(class mmExternalView* arg1, class mmCarSim* arg2)
    {
        return stub<member_func_t<void, mmSpeedIndicator, class mmExternalView*, class mmCarSim*>>(
            0x42FE80, this, arg1, arg2);
    }

    // 0x42FF10 | ?Draw@mmSpeedIndicator@@QAEXXZ
    inline void Draw()
    {
        return stub<member_func_t<void, mmSpeedIndicator>>(0x42FF10, this);
    }
};
