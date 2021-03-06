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
    mmwidget:textroller

    0x4AEF70 | public: __thiscall UITextRoller::UITextRoller(void) | ??0UITextRoller@@QAE@XZ
    0x4AF040 | public: virtual __thiscall UITextRoller::~UITextRoller(void) | ??1UITextRoller@@UAE@XZ
    0x4AF0B0 | public: void __thiscall UITextRoller::Init(struct LocString *,int *,float,float,float,float,class string,int,int,int,int,class Callback,class UIMenu *) | ?Init@UITextRoller@@QAEXPAULocString@@PAHMMMMVstring@@HHHHVCallback@@PAVUIMenu@@@Z
    0x4AF570 | public: virtual void __thiscall UITextRoller::Update(void) | ?Update@UITextRoller@@UAEXXZ
    0x4AF5D0 | public: virtual void __thiscall UITextRoller::Switch(int) | ?Switch@UITextRoller@@UAEXH@Z
    0x4AF600 | public: virtual void __thiscall UITextRoller::Action(union eqEvent) | ?Action@UITextRoller@@UAEXTeqEvent@@@Z
    0x4AF6E0 | public: void __thiscall UITextRoller::EvalMouseXY(float,float) | ?EvalMouseXY@UITextRoller@@QAEXMM@Z
    0x4AF870 | public: int __thiscall UITextRoller::SetValue(int) | ?SetValue@UITextRoller@@QAEHH@Z
    0x4AF910 | public: void __thiscall UITextRoller::SetString(class string) | ?SetString@UITextRoller@@QAEXVstring@@@Z
    0x4AF9E0 | public: void __thiscall UITextRoller::SetText(void) | ?SetText@UITextRoller@@QAEXXZ
    0x4AFA50 | public: int __thiscall UITextRoller::Inc(void) | ?Inc@UITextRoller@@QAEHXZ
    0x4AFA70 | public: int __thiscall UITextRoller::Dec(void) | ?Dec@UITextRoller@@QAEHXZ
    0x4AFA90 | public: virtual void __thiscall UITextRoller::Cull(void) | ?Cull@UITextRoller@@UAEXXZ
    0x4AFB40 | public: virtual void * __thiscall UITextRoller::`scalar deleting destructor'(unsigned int) | ??_GUITextRoller@@UAEPAXI@Z
    0x4AFB40 | public: virtual void * __thiscall UITextRoller::`vector deleting destructor'(unsigned int) | ??_EUITextRoller@@UAEPAXI@Z
    0x593940 | const UITextRoller::`vftable' | ??_7UITextRoller@@6B@
*/

class UITextRoller : uiWidget
{
public:
    // UITextRoller::`vftable' @ 0x593940

    // 0x4AEF70 | ??0UITextRoller@@QAE@XZ
    inline UITextRoller()
    {
        // stub<member_func_t<void, UITextRoller>>(0x4AEF70, this);

        unimplemented();
    }

    // 0x4AF0B0 | ?Init@UITextRoller@@QAEXPAULocString@@PAHMMMMVstring@@HHHHVCallback@@PAVUIMenu@@@Z
    inline void Init(struct LocString* arg1, int32_t* arg2, float arg3, float arg4, float arg5, float arg6,
        class string arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, class Callback arg12,
        class UIMenu* arg13)
    {
        return stub<member_func_t<void, UITextRoller, struct LocString*, int32_t*, float, float, float, float,
            class string, int32_t, int32_t, int32_t, int32_t, class Callback, class UIMenu*>>(
            0x4AF0B0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4AF6E0 | ?EvalMouseXY@UITextRoller@@QAEXMM@Z
    inline void EvalMouseXY(float arg1, float arg2)
    {
        return stub<member_func_t<void, UITextRoller, float, float>>(0x4AF6E0, this, arg1, arg2);
    }

    // 0x4AF870 | ?SetValue@UITextRoller@@QAEHH@Z
    inline int32_t SetValue(int32_t arg1)
    {
        return stub<member_func_t<int32_t, UITextRoller, int32_t>>(0x4AF870, this, arg1);
    }

    // 0x4AF910 | ?SetString@UITextRoller@@QAEXVstring@@@Z
    inline void SetString(class string arg1)
    {
        return stub<member_func_t<void, UITextRoller, class string>>(0x4AF910, this, arg1);
    }

    // 0x4AF9E0 | ?SetText@UITextRoller@@QAEXXZ
    inline void SetText()
    {
        return stub<member_func_t<void, UITextRoller>>(0x4AF9E0, this);
    }

    // 0x4AFA50 | ?Inc@UITextRoller@@QAEHXZ
    inline int32_t Inc()
    {
        return stub<member_func_t<int32_t, UITextRoller>>(0x4AFA50, this);
    }

    // 0x4AFA70 | ?Dec@UITextRoller@@QAEHXZ
    inline int32_t Dec()
    {
        return stub<member_func_t<int32_t, UITextRoller>>(0x4AFA70, this);
    }

    // 0x4AF040 | ??1UITextRoller@@UAE@XZ
    inline ~UITextRoller() override = 0
    {
        // stub<member_func_t<void, UITextRoller>>(0x4AF040, this);

        unimplemented();
    }

    // 0x4AFA90 | ?Cull@UITextRoller@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, UITextRoller>>(0x4AFA90, this);
    }

    // 0x4AF570 | ?Update@UITextRoller@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UITextRoller>>(0x4AF570, this);
    }

    // 0x4AF600 | ?Action@UITextRoller@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextRoller, union eqEvent>>(0x4AF600, this, arg1);
    }

    // 0x4AF5D0 | ?Switch@UITextRoller@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UITextRoller, int32_t>>(0x4AF5D0, this, arg1);
    }
};
