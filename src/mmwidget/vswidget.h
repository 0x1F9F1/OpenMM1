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
    mmwidget:vswidget

    0x4B4020 | public: __thiscall VSWidget::VSWidget(void) | ??0VSWidget@@QAE@XZ
    0x4B40A0 | public: virtual __thiscall VSWidget::~VSWidget(void) | ??1VSWidget@@UAE@XZ
    0x4B4120 | public: void __thiscall VSWidget::Init(float,float,float,float,int *,class Callback,int) | ?Init@VSWidget@@QAEXMMMMPAHVCallback@@H@Z
    0x4B4180 | public: void __thiscall VSWidget::LoadBitmap(void) | ?LoadBitmap@VSWidget@@QAEXXZ
    0x4B42D0 | public: void __thiscall VSWidget::CalcTroughRatio(float) | ?CalcTroughRatio@VSWidget@@QAEXM@Z
    0x4B4350 | public: void __thiscall VSWidget::SetHotSpots(void) | ?SetHotSpots@VSWidget@@QAEXXZ
    0x4B4400 | public: void __thiscall VSWidget::SyncData(void) | ?SyncData@VSWidget@@QAEXXZ
    0x4B4440 | public: float __thiscall VSWidget::Inc(void) | ?Inc@VSWidget@@QAEMXZ
    0x4B44A0 | public: float __thiscall VSWidget::Dec(void) | ?Dec@VSWidget@@QAEMXZ
    0x4B4500 | public: void __thiscall VSWidget::SetStep(int,float) | ?SetStep@VSWidget@@QAEXHM@Z
    0x4B4570 | public: void __thiscall VSWidget::SetTrough(float) | ?SetTrough@VSWidget@@QAEXM@Z
    0x4B4600 | public: virtual void __thiscall VSWidget::Update(void) | ?Update@VSWidget@@UAEXXZ
    0x4B4630 | public: void __thiscall VSWidget::Switch(int,float,float) | ?Switch@VSWidget@@QAEXHMM@Z
    0x4B4680 | public: int __thiscall VSWidget::Action(union eqEvent,float,float,int) | ?Action@VSWidget@@QAEHTeqEvent@@MMH@Z
    0x4B4730 | public: void __thiscall VSWidget::EvalMouseXY(float,float,int) | ?EvalMouseXY@VSWidget@@QAEXMMH@Z
    0x4B48E0 | public: virtual void __thiscall VSWidget::Cull(void) | ?Cull@VSWidget@@UAEXXZ
    0x4B4A60 | public: static void __cdecl VSWidget::DeclareFields(void) | ?DeclareFields@VSWidget@@SAXXZ
    0x4B4BD0 | public: virtual class MetaClass * __thiscall VSWidget::GetClass(void) | ?GetClass@VSWidget@@UAEPAVMetaClass@@XZ
    0x4B4BE0 | public: virtual void * __thiscall VSWidget::`vector deleting destructor'(unsigned int) | ??_EVSWidget@@UAEPAXI@Z
    0x593DC8 | const VSWidget::`vftable' | ??_7VSWidget@@6B@
    0x667FF0 | class MetaClass VSWidgetMetaClass | ?VSWidgetMetaClass@@3VMetaClass@@A
    0x4B4AB0 | void * __cdecl new_VSWidget(int) | ?new_VSWidget@@YAPAXH@Z
    0x4B4B80 | void __cdecl delete_VSWidget(void *,int) | ?delete_VSWidget@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x667FF0 | ?VSWidgetMetaClass@@3VMetaClass@@A
inline extern_var(0x667FF0, class MetaClass, VSWidgetMetaClass);

// 0x4B4AB0 | ?new_VSWidget@@YAPAXH@Z
inline void* new_VSWidget(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4B4AB0, arg1);
}

// 0x4B4B80 | ?delete_VSWidget@@YAXPAXH@Z
inline void delete_VSWidget(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4B4B80, arg1, arg2);
}

struct VSWidget : asNode
{
public:
    // VSWidget::`vftable' @ 0x593DC8

    // 0x4B4020 | ??0VSWidget@@QAE@XZ
    inline VSWidget()
    {
        stub<member_func_t<void, VSWidget>>(0x4B4020, this);
    }

    // 0x4B4120 | ?Init@VSWidget@@QAEXMMMMPAHVCallback@@H@Z
    inline void Init(float arg1, float arg2, float arg3, float arg4, int32_t* arg5, class Callback arg6, int32_t arg7)
    {
        return stub<member_func_t<void, VSWidget, float, float, float, float, int32_t*, class Callback, int32_t>>(
            0x4B4120, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4B4180 | ?LoadBitmap@VSWidget@@QAEXXZ
    inline void LoadBitmap()
    {
        return stub<member_func_t<void, VSWidget>>(0x4B4180, this);
    }

    // 0x4B42D0 | ?CalcTroughRatio@VSWidget@@QAEXM@Z
    inline void CalcTroughRatio(float arg1)
    {
        return stub<member_func_t<void, VSWidget, float>>(0x4B42D0, this, arg1);
    }

    // 0x4B4350 | ?SetHotSpots@VSWidget@@QAEXXZ
    inline void SetHotSpots()
    {
        return stub<member_func_t<void, VSWidget>>(0x4B4350, this);
    }

    // 0x4B4400 | ?SyncData@VSWidget@@QAEXXZ
    inline void SyncData()
    {
        return stub<member_func_t<void, VSWidget>>(0x4B4400, this);
    }

    // 0x4B4440 | ?Inc@VSWidget@@QAEMXZ
    inline float Inc()
    {
        return stub<member_func_t<float, VSWidget>>(0x4B4440, this);
    }

    // 0x4B44A0 | ?Dec@VSWidget@@QAEMXZ
    inline float Dec()
    {
        return stub<member_func_t<float, VSWidget>>(0x4B44A0, this);
    }

    // 0x4B4500 | ?SetStep@VSWidget@@QAEXHM@Z
    inline void SetStep(int32_t arg1, float arg2)
    {
        return stub<member_func_t<void, VSWidget, int32_t, float>>(0x4B4500, this, arg1, arg2);
    }

    // 0x4B4570 | ?SetTrough@VSWidget@@QAEXM@Z
    inline void SetTrough(float arg1)
    {
        return stub<member_func_t<void, VSWidget, float>>(0x4B4570, this, arg1);
    }

    // 0x4B4630 | ?Switch@VSWidget@@QAEXHMM@Z
    inline void Switch(int32_t arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, VSWidget, int32_t, float, float>>(0x4B4630, this, arg1, arg2, arg3);
    }

    // 0x4B4680 | ?Action@VSWidget@@QAEHTeqEvent@@MMH@Z
    inline int32_t Action(union eqEvent arg1, float arg2, float arg3, int32_t arg4)
    {
        return stub<member_func_t<int32_t, VSWidget, union eqEvent, float, float, int32_t>>(
            0x4B4680, this, arg1, arg2, arg3, arg4);
    }

    // 0x4B4730 | ?EvalMouseXY@VSWidget@@QAEXMMH@Z
    inline void EvalMouseXY(float arg1, float arg2, int32_t arg3)
    {
        return stub<member_func_t<void, VSWidget, float, float, int32_t>>(0x4B4730, this, arg1, arg2, arg3);
    }

    // 0x4B4A60 | ?DeclareFields@VSWidget@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4B4A60);
    }

    // 0x4B40A0 | ??1VSWidget@@UAE@XZ
    inline ~VSWidget() override
    {
        stub<member_func_t<void, VSWidget>>(0x4B40A0, this);
    }

    // 0x4B4BD0 | ?GetClass@VSWidget@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, VSWidget>>(0x4B4BD0, this);
    }

    // 0x4B48E0 | ?Cull@VSWidget@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, VSWidget>>(0x4B48E0, this);
    }

    // 0x4B4600 | ?Update@VSWidget@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, VSWidget>>(0x4B4600, this);
    }
};
