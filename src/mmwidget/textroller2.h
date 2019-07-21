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
    mmwidget:textroller2

    0x4AFB70 | public: __thiscall UITextRoller2::UITextRoller2(void) | ??0UITextRoller2@@QAE@XZ
    0x4AFC20 | public: virtual __thiscall UITextRoller2::~UITextRoller2(void) | ??1UITextRoller2@@UAE@XZ
    0x4AFC90 | public: void __thiscall UITextRoller2::Init(struct LocString *,int *,float,float,float,float,class string,int,int,int,int,class Callback,class UIMenu *) | ?Init@UITextRoller2@@QAEXPAULocString@@PAHMMMMVstring@@HHHHVCallback@@PAVUIMenu@@@Z
    0x4B0370 | public: virtual void __thiscall UITextRoller2::Update(void) | ?Update@UITextRoller2@@UAEXXZ
    0x4B03D0 | public: virtual void __thiscall UITextRoller2::Switch(int) | ?Switch@UITextRoller2@@UAEXH@Z
    0x4B0460 | public: virtual void __thiscall UITextRoller2::Action(union eqEvent) | ?Action@UITextRoller2@@UAEXTeqEvent@@@Z
    0x4B0540 | public: void __thiscall UITextRoller2::EvalMouseXY(float,float) | ?EvalMouseXY@UITextRoller2@@QAEXMM@Z
    0x4B06B0 | public: int __thiscall UITextRoller2::SetValue(int) | ?SetValue@UITextRoller2@@QAEHH@Z
    0x4B0760 | public: void __thiscall UITextRoller2::SetString(class string) | ?SetString@UITextRoller2@@QAEXVstring@@@Z
    0x4B0830 | public: void __thiscall UITextRoller2::SetData(int *) | ?SetData@UITextRoller2@@QAEXPAH@Z
    0x4B0850 | public: void __thiscall UITextRoller2::SetText(void) | ?SetText@UITextRoller2@@QAEXXZ
    0x4B08C0 | public: int __thiscall UITextRoller2::Inc(void) | ?Inc@UITextRoller2@@QAEHXZ
    0x4B08F0 | public: int __thiscall UITextRoller2::Dec(void) | ?Dec@UITextRoller2@@QAEHXZ
    0x4B0920 | public: virtual void __thiscall UITextRoller2::Cull(void) | ?Cull@UITextRoller2@@UAEXXZ
    0x4B09F0 | public: virtual void * __thiscall UITextRoller2::`vector deleting destructor'(unsigned int) | ??_EUITextRoller2@@UAEPAXI@Z
    0x4B09F0 | public: virtual void * __thiscall UITextRoller2::`scalar deleting destructor'(unsigned int) | ??_GUITextRoller2@@UAEPAXI@Z
    0x5939B8 | const UITextRoller2::`vftable' | ??_7UITextRoller2@@6B@
*/

class UITextRoller2 : uiWidget
{
public:
    // UITextRoller2::`vftable' @ 0x5939B8

    // 0x4AFB70 | ??0UITextRoller2@@QAE@XZ
    inline UITextRoller2()
    {
        // stub<member_func_t<void, UITextRoller2>>(0x4AFB70, this);

        unimplemented();
    }

    // 0x4AFC90 | ?Init@UITextRoller2@@QAEXPAULocString@@PAHMMMMVstring@@HHHHVCallback@@PAVUIMenu@@@Z
    inline void Init(struct LocString* arg1, int32_t* arg2, float arg3, float arg4, float arg5, float arg6,
        class string arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, class Callback arg12,
        class UIMenu* arg13)
    {
        return stub<member_func_t<void, UITextRoller2, struct LocString*, int32_t*, float, float, float, float,
            class string, int32_t, int32_t, int32_t, int32_t, class Callback, class UIMenu*>>(
            0x4AFC90, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4B0540 | ?EvalMouseXY@UITextRoller2@@QAEXMM@Z
    inline void EvalMouseXY(float arg1, float arg2)
    {
        return stub<member_func_t<void, UITextRoller2, float, float>>(0x4B0540, this, arg1, arg2);
    }

    // 0x4B06B0 | ?SetValue@UITextRoller2@@QAEHH@Z
    inline int32_t SetValue(int32_t arg1)
    {
        return stub<member_func_t<int32_t, UITextRoller2, int32_t>>(0x4B06B0, this, arg1);
    }

    // 0x4B0760 | ?SetString@UITextRoller2@@QAEXVstring@@@Z
    inline void SetString(class string arg1)
    {
        return stub<member_func_t<void, UITextRoller2, class string>>(0x4B0760, this, arg1);
    }

    // 0x4B0830 | ?SetData@UITextRoller2@@QAEXPAH@Z
    inline void SetData(int32_t* arg1)
    {
        return stub<member_func_t<void, UITextRoller2, int32_t*>>(0x4B0830, this, arg1);
    }

    // 0x4B0850 | ?SetText@UITextRoller2@@QAEXXZ
    inline void SetText()
    {
        return stub<member_func_t<void, UITextRoller2>>(0x4B0850, this);
    }

    // 0x4B08C0 | ?Inc@UITextRoller2@@QAEHXZ
    inline int32_t Inc()
    {
        return stub<member_func_t<int32_t, UITextRoller2>>(0x4B08C0, this);
    }

    // 0x4B08F0 | ?Dec@UITextRoller2@@QAEHXZ
    inline int32_t Dec()
    {
        return stub<member_func_t<int32_t, UITextRoller2>>(0x4B08F0, this);
    }

    // 0x4AFC20 | ??1UITextRoller2@@UAE@XZ
    inline ~UITextRoller2() override = 0
    {
        // stub<member_func_t<void, UITextRoller2>>(0x4AFC20, this);

        unimplemented();
    }

    // 0x4B0920 | ?Cull@UITextRoller2@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, UITextRoller2>>(0x4B0920, this);
    }

    // 0x4B0370 | ?Update@UITextRoller2@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UITextRoller2>>(0x4B0370, this);
    }

    // 0x4B0460 | ?Action@UITextRoller2@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextRoller2, union eqEvent>>(0x4B0460, this, arg1);
    }

    // 0x4B03D0 | ?Switch@UITextRoller2@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UITextRoller2, int32_t>>(0x4B03D0, this, arg1);
    }
};
