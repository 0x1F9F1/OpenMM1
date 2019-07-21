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
    mmwidget:slider

    0x4A86D0 | public: __thiscall UISlider::UISlider(void) | ??0UISlider@@QAE@XZ
    0x4A8760 | public: virtual __thiscall UISlider::~UISlider(void) | ??1UISlider@@UAE@XZ
    0x4A87D0 | public: void __thiscall UISlider::Init(struct LocString *,float *,float,float,float,float,float,float,int,int,int,int,class Callback,class UIMenu *) | ?Init@UISlider@@QAEXPAULocString@@PAMMMMMMMHHHHVCallback@@PAVUIMenu@@@Z
    0x4A89E0 | public: virtual void __thiscall UISlider::SetPosition(float,float) | ?SetPosition@UISlider@@UAEXMM@Z
    0x4A8B30 | public: void __thiscall UISlider::SetText(struct LocString *) | ?SetText@UISlider@@QAEXPAULocString@@@Z
    0x4A8B40 | public: virtual void __thiscall UISlider::Update(void) | ?Update@UISlider@@UAEXXZ
    0x4A8BA0 | public: virtual void __thiscall UISlider::Action(union eqEvent) | ?Action@UISlider@@UAEXTeqEvent@@@Z
    0x4A8C60 | public: virtual void __thiscall UISlider::Switch(int) | ?Switch@UISlider@@UAEXH@Z
    0x4A8CD0 | public: int __thiscall UISlider::TestHit(float,float) | ?TestHit@UISlider@@QAEHMM@Z
    0x4A8CE0 | public: void __thiscall UISlider::SetReadWrite(int) | ?SetReadWrite@UISlider@@QAEXH@Z
    0x4A8D20 | public: int __thiscall UISlider::IsReadWrite(void) | ?IsReadWrite@UISlider@@QAEHXZ
    0x4A8D30 | public: float __thiscall UISlider::GetValue(void) | ?GetValue@UISlider@@QAEMXZ
    0x4A8D40 | public: float __thiscall UISlider::SetValue(float) | ?SetValue@UISlider@@QAEMM@Z
    0x4A8D70 | public: void __thiscall UISlider::SetMouseParams(float) | ?SetMouseParams@UISlider@@QAEXM@Z
    0x4A8DC0 | public: void __thiscall UISlider::EvalMouseXY(float,float) | ?EvalMouseXY@UISlider@@QAEXMM@Z
    0x4A8EE0 | public: void __thiscall UISlider::SetData(float) | ?SetData@UISlider@@QAEXM@Z
    0x4A8F00 | public: float __thiscall UISlider::GetFudgeWidth(void) | ?GetFudgeWidth@UISlider@@QAEMXZ
    0x4A8F10 | public: virtual void * __thiscall UISlider::`scalar deleting destructor'(unsigned int) | ??_GUISlider@@UAEPAXI@Z
    0x4A8F10 | public: virtual void * __thiscall UISlider::`vector deleting destructor'(unsigned int) | ??_EUISlider@@UAEPAXI@Z
    0x4A8F40 | public: virtual float __thiscall UISlider::GetScreenHeight(void) | ?GetScreenHeight@UISlider@@UAEMXZ
    0x5932D8 | const UISlider::`vftable' | ??_7UISlider@@6B@
*/

class UISlider : uiWidget
{
public:
    // UISlider::`vftable' @ 0x5932D8

    // 0x4A86D0 | ??0UISlider@@QAE@XZ
    inline UISlider()
    {
        // stub<member_func_t<void, UISlider>>(0x4A86D0, this);

        unimplemented();
    }

    // 0x4A87D0 | ?Init@UISlider@@QAEXPAULocString@@PAMMMMMMMHHHHVCallback@@PAVUIMenu@@@Z
    inline void Init(struct LocString* arg1, float* arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
        float arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12, class Callback arg13,
        class UIMenu* arg14)
    {
        return stub<member_func_t<void, UISlider, struct LocString*, float*, float, float, float, float, float, float,
            int32_t, int32_t, int32_t, int32_t, class Callback, class UIMenu*>>(
            0x4A87D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }

    // 0x4A8B30 | ?SetText@UISlider@@QAEXPAULocString@@@Z
    inline void SetText(struct LocString* arg1)
    {
        return stub<member_func_t<void, UISlider, struct LocString*>>(0x4A8B30, this, arg1);
    }

    // 0x4A8CD0 | ?TestHit@UISlider@@QAEHMM@Z
    inline int32_t TestHit(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, UISlider, float, float>>(0x4A8CD0, this, arg1, arg2);
    }

    // 0x4A8CE0 | ?SetReadWrite@UISlider@@QAEXH@Z
    inline void SetReadWrite(int32_t arg1)
    {
        return stub<member_func_t<void, UISlider, int32_t>>(0x4A8CE0, this, arg1);
    }

    // 0x4A8D20 | ?IsReadWrite@UISlider@@QAEHXZ
    inline int32_t IsReadWrite()
    {
        return stub<member_func_t<int32_t, UISlider>>(0x4A8D20, this);
    }

    // 0x4A8D30 | ?GetValue@UISlider@@QAEMXZ
    inline float GetValue()
    {
        return stub<member_func_t<float, UISlider>>(0x4A8D30, this);
    }

    // 0x4A8D40 | ?SetValue@UISlider@@QAEMM@Z
    inline float SetValue(float arg1)
    {
        return stub<member_func_t<float, UISlider, float>>(0x4A8D40, this, arg1);
    }

    // 0x4A8D70 | ?SetMouseParams@UISlider@@QAEXM@Z
    inline void SetMouseParams(float arg1)
    {
        return stub<member_func_t<void, UISlider, float>>(0x4A8D70, this, arg1);
    }

    // 0x4A8DC0 | ?EvalMouseXY@UISlider@@QAEXMM@Z
    inline void EvalMouseXY(float arg1, float arg2)
    {
        return stub<member_func_t<void, UISlider, float, float>>(0x4A8DC0, this, arg1, arg2);
    }

    // 0x4A8EE0 | ?SetData@UISlider@@QAEXM@Z
    inline void SetData(float arg1)
    {
        return stub<member_func_t<void, UISlider, float>>(0x4A8EE0, this, arg1);
    }

    // 0x4A8F00 | ?GetFudgeWidth@UISlider@@QAEMXZ
    inline float GetFudgeWidth()
    {
        return stub<member_func_t<float, UISlider>>(0x4A8F00, this);
    }

    // 0x4A8760 | ??1UISlider@@UAE@XZ
    inline ~UISlider() override = 0
    {
        // stub<member_func_t<void, UISlider>>(0x4A8760, this);

        unimplemented();
    }

    // 0x4A8B40 | ?Update@UISlider@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UISlider>>(0x4A8B40, this);
    }

    // 0x4A8BA0 | ?Action@UISlider@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UISlider, union eqEvent>>(0x4A8BA0, this, arg1);
    }

    // 0x4A8C60 | ?Switch@UISlider@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UISlider, int32_t>>(0x4A8C60, this, arg1);
    }

    // 0x4A89E0 | ?SetPosition@UISlider@@UAEXMM@Z
    inline void SetPosition(float arg1, float arg2) override
    {
        return stub<member_func_t<void, UISlider, float, float>>(0x4A89E0, this, arg1, arg2);
    }

    // 0x4A8F40 | ?GetScreenHeight@UISlider@@UAEMXZ
    inline float GetScreenHeight() override
    {
        return stub<member_func_t<float, UISlider>>(0x4A8F40, this);
    }
};
