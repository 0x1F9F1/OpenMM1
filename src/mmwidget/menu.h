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
    mmwidget:menu

    0x4A13E0 | public: __thiscall UIMenu::UIMenu(int) | ??0UIMenu@@QAE@H@Z
    0x4A14E0 | public: virtual __thiscall UIMenu::~UIMenu(void) | ??1UIMenu@@UAE@XZ
    0x4A1580 | public: void __thiscall UIMenu::AssignName(struct LocString *) | ?AssignName@UIMenu@@QAEXPAULocString@@@Z
    0x4A15D0 | public: void __thiscall UIMenu::AssignBackground(char *) | ?AssignBackground@UIMenu@@QAEXPAD@Z
    0x4A1620 | public: void __thiscall UIMenu::Enable(void) | ?Enable@UIMenu@@QAEXXZ
    0x4A1690 | public: void __thiscall UIMenu::Disable(void) | ?Disable@UIMenu@@QAEXXZ
    0x4A16B0 | public: virtual void __thiscall UIMenu::PreSetup(void) | ?PreSetup@UIMenu@@UAEXXZ
    0x4A16E0 | public: virtual void __thiscall UIMenu::PostSetup(void) | ?PostSetup@UIMenu@@UAEXXZ
    0x4A16F0 | public: virtual void __thiscall UIMenu::Update(void) | ?Update@UIMenu@@UAEXXZ
    0x4A1700 | public: void __thiscall UIMenu::SetAction(enum UIMenu::eSource) | ?SetAction@UIMenu@@QAEXW4eSource@1@@Z
    0x4A1720 | public: void __thiscall UIMenu::ForceWidgetAction(int) | ?ForceWidgetAction@UIMenu@@QAEXH@Z
    0x4A1740 | public: void __thiscall UIMenu::ClearAction(void) | ?ClearAction@UIMenu@@QAEXXZ
    0x4A1750 | public: void __thiscall UIMenu::ClearToolTip(void) | ?ClearToolTip@UIMenu@@QAEXXZ
    0x4A1780 | public: virtual void __thiscall UIMenu::BackUp(void) | ?BackUp@UIMenu@@UAEXXZ
    0x4A1790 | public: void __thiscall UIMenu::SetBstate(int) | ?SetBstate@UIMenu@@QAEXH@Z
    0x4A17C0 | public: void __thiscall UIMenu::SetFocusWidget(int) | ?SetFocusWidget@UIMenu@@QAEXH@Z
    0x4A1800 | public: int __thiscall UIMenu::GetWidgetID(void) | ?GetWidgetID@UIMenu@@QAEHXZ
    0x4A1810 | public: int __thiscall UIMenu::GetBstate(void) | ?GetBstate@UIMenu@@QAEHXZ
    0x4A1820 | public: void __thiscall UIMenu::GetDimensions(float &,float &,float &,float &) | ?GetDimensions@UIMenu@@QAEXAAM000@Z
    0x4A1850 | public: void __thiscall UIMenu::DisableIME(void) | ?DisableIME@UIMenu@@QAEXXZ
    0x4A1870 | public: int __thiscall UIMenu::FindTheFirstFocusWidget(void) | ?FindTheFirstFocusWidget@UIMenu@@QAEHXZ
    0x4A18B0 | public: int __thiscall UIMenu::Increment(void) | ?Increment@UIMenu@@QAEHXZ
    0x4A1970 | public: int __thiscall UIMenu::Decrement(void) | ?Decrement@UIMenu@@QAEHXZ
    0x4A1A20 | public: int __thiscall UIMenu::ScanInput(union eqEvent *) | ?ScanInput@UIMenu@@QAEHPATeqEvent@@@Z
    0x4A1A60 | public: virtual void __thiscall UIMenu::CheckInput(void) | ?CheckInput@UIMenu@@UAEXXZ
    0x4A1AF0 | public: void __thiscall UIMenu::ScaleWidget(float &,float &,float &,float &) | ?ScaleWidget@UIMenu@@QAEXAAM000@Z
    0x4A1B30 | public: class uiWidget * __thiscall UIMenu::AddHotSpot(int,char *,float,float,float,float,class Callback) | ?AddHotSpot@UIMenu@@QAEPAVuiWidget@@HPADMMMMVCallback@@@Z
    0x4A1C10 | public: class UITextDropdown * __thiscall UIMenu::AddTextDropdown(int,struct LocString *,int *,float,float,float,float,class string,int,int,int,class Callback,char *) | ?AddTextDropdown@UIMenu@@QAEPAVUITextDropdown@@HPAULocString@@PAHMMMMVstring@@HHHVCallback@@PAD@Z
    0x4A1D90 | public: class UITextRoller * __thiscall UIMenu::AddTextRoller(int,struct LocString *,int *,float,float,float,float,class string,int,int,int,int,class Callback) | ?AddTextRoller@UIMenu@@QAEPAVUITextRoller@@HPAULocString@@PAHMMMMVstring@@HHHHVCallback@@@Z
    0x4A1EE0 | public: class UITextRoller2 * __thiscall UIMenu::AddTextRoller2(int,struct LocString *,int *,float,float,float,float,class string,int,int,int,int,class Callback) | ?AddTextRoller2@UIMenu@@QAEPAVUITextRoller2@@HPAULocString@@PAHMMMMVstring@@HHHHVCallback@@@Z
    0x4A2060 | public: class UITextScroll * __thiscall UIMenu::AddTextScroll(int,void *,float,float,float,float,class string,int,int *,class Callback) | ?AddTextScroll@UIMenu@@QAEPAVUITextScroll@@HPAXMMMMVstring@@HPAHVCallback@@@Z
    0x4A2200 | public: class UICompositeScroll * __thiscall UIMenu::AddCompScroll(int,float,float,float,float,float,int,int *,int,int,class Callback) | ?AddCompScroll@UIMenu@@QAEPAVUICompositeScroll@@HMMMMMHPAHHHVCallback@@@Z
    0x4A2380 | public: class UITextField * __thiscall UIMenu::AddTextField(int,struct LocString *,char *,float,float,float,float,int,int,int,int,int,class Callback) | ?AddTextField@UIMenu@@QAEPAVUITextField@@HPAULocString@@PADMMMMHHHHHVCallback@@@Z
    0x4A24F0 | public: class UIControlWidget * __thiscall UIMenu::AddUIControl(int,float,float,float,float,float,class mmIO *,class Callback) | ?AddUIControl@UIMenu@@QAEPAVUIControlWidget@@HMMMMMPAVmmIO@@VCallback@@@Z
    0x4A25C0 | public: class UISlider * __thiscall UIMenu::AddSlider(int,struct LocString *,float *,float,float,float,float,float,float,int,int,int,int,class Callback) | ?AddSlider@UIMenu@@QAEPAVUISlider@@HPAULocString@@PAMMMMMMMHHHHVCallback@@@Z
    0x4A2700 | public: class UIButton * __thiscall UIMenu::AddButton(int,struct LocString *,float,float,float,float,int,int,class Callback) | ?AddButton@UIMenu@@QAEPAVUIButton@@HPAULocString@@MMMMHHVCallback@@@Z
    0x4A2820 | public: class UILabel * __thiscall UIMenu::AddLabel(int,struct LocString *,float,float,float,float,int,int) | ?AddLabel@UIMenu@@QAEPAVUILabel@@HPAULocString@@MMMMHH@Z
    0x4A2930 | public: class UIBMLabel * __thiscall UIMenu::AddBMLabel(int,char *,class string *,float,float,int *) | ?AddBMLabel@UIMenu@@QAEPAVUIBMLabel@@HPADPAVstring@@MMPAH@Z
    0x4A2A40 | public: class UIIcon * __thiscall UIMenu::AddIcon(int,char *,float,float) | ?AddIcon@UIMenu@@QAEPAVUIIcon@@HPADMM@Z
    0x4A2B50 | public: class UIIconW * __thiscall UIMenu::AddIconW(int,struct LocString *,char *,float,float,float,float,class Callback) | ?AddIconW@UIMenu@@QAEPAVUIIconW@@HPAULocString@@PADMMMMVCallback@@@Z
    0x4A2C60 | public: class UIToggleButton * __thiscall UIMenu::AddToggle(int,struct LocString *,int *,float,float,float,float,int,int,class Callback) | ?AddToggle@UIMenu@@QAEPAVUIToggleButton@@HPAULocString@@PAHMMMMHHVCallback@@@Z
    0x4A2D80 | public: class UIToggleButton2 * __thiscall UIMenu::AddToggle2(int,struct LocString *,int *,float,float,float,float,int,int,class Callback) | ?AddToggle2@UIMenu@@QAEPAVUIToggleButton2@@HPAULocString@@PAHMMMMHHVCallback@@@Z
    0x4A2EA0 | public: class UIMexButton * __thiscall UIMenu::AddMex(int,struct LocString *,int *,int,float,float,float,float,int,int,class Callback) | ?AddMex@UIMenu@@QAEPAVUIMexButton@@HPAULocString@@PAHHMMMMHHVCallback@@@Z
    0x4A2FC0 | public: class UIBMButton * __thiscall UIMenu::AddBMButton(int,char *,float,float,int,class Callback,int *,int,int,class Callback) | ?AddBMButton@UIMenu@@QAEPAVUIBMButton@@HPADMMHVCallback@@PAHHH1@Z
    0x4A3150 | public: class UICWArray * __thiscall UIMenu::AddCWArray(int,float,float,float,float,int,class Callback) | ?AddCWArray@UIMenu@@QAEPAVUICWArray@@HMMMMHVCallback@@@Z
    0x4A3290 | public: class UIVScrollBar * __thiscall UIMenu::AddVScrollBar(int,int *,float,float,float,float,float,float,int,int,class Callback) | ?AddVScrollBar@UIMenu@@QAEPAVUIVScrollBar@@HPAHMMMMMMHHVCallback@@@Z
    0x4A33E0 | public: void __thiscall UIMenu::MouseAction(union eqEvent) | ?MouseAction@UIMenu@@QAEXTeqEvent@@@Z
    0x4A3450 | public: void __thiscall UIMenu::KeyboardAction(union eqEvent) | ?KeyboardAction@UIMenu@@QAEXTeqEvent@@@Z
    0x4A34E0 | public: class uiWidget * __thiscall UIMenu::MouseHitCheck(int,float,float) | ?MouseHitCheck@UIMenu@@QAEPAVuiWidget@@HMM@Z
    0x4A3610 | public: void __thiscall UIMenu::SetSelected(void) | ?SetSelected@UIMenu@@QAEXXZ
    0x4A3640 | public: void __thiscall UIMenu::ClearSelected(void) | ?ClearSelected@UIMenu@@QAEXXZ
    0x4A3670 | public: void __thiscall UIMenu::ClearWidgets(void) | ?ClearWidgets@UIMenu@@QAEXXZ
    0x4A36A0 | public: void __thiscall UIMenu::CheckMouseHits(void) | ?CheckMouseHits@UIMenu@@QAEXXZ
    0x4A3810 | public: void __thiscall UIMenu::AddWidget(class uiWidget *,char *,float,float,float,float,int,char *) | ?AddWidget@UIMenu@@QAEXPAVuiWidget@@PADMMMMH1@Z
    0x4A3900 | public: virtual void * __thiscall UIMenu::`scalar deleting destructor'(unsigned int) | ??_GUIMenu@@UAEPAXI@Z
    0x4A3900 | public: virtual void * __thiscall UIMenu::`vector deleting destructor'(unsigned int) | ??_EUIMenu@@UAEPAXI@Z
    0x593010 | const UIMenu::`vftable' | ??_7UIMenu@@6B@
    0x5AFDC8 | public: static float UIMenu::UI_LEFT_MARGIN | ?UI_LEFT_MARGIN@UIMenu@@2MA
    0x5AFDCC | public: static float UIMenu::UI_LEFT_MARGIN2 | ?UI_LEFT_MARGIN2@UIMenu@@2MA
    0x5AFDD0 | public: static float UIMenu::UI_TOP_MARGIN | ?UI_TOP_MARGIN@UIMenu@@2MA
    0x5AFDD4 | public: static float UIMenu::UI_BOTTOM_MARGIN | ?UI_BOTTOM_MARGIN@UIMenu@@2MA
    0x5AFDD8 | public: static float UIMenu::WIDGET_WIDTH | ?WIDGET_WIDTH@UIMenu@@2MA
    0x5AFDDC | public: static float UIMenu::WIDGET_HEIGHT | ?WIDGET_HEIGHT@UIMenu@@2MA
    0x667C8C | public: static float UIMenu::UI_RIGHT_MARGIN | ?UI_RIGHT_MARGIN@UIMenu@@2MA
*/

#include "hooking.h"

class UIMenu : asNode
{
public:
    // UIMenu::`vftable' @ 0x593010

    // 0x4A13E0 | ??0UIMenu@@QAE@H@Z
    inline UIMenu(int32_t arg1)
    {
        // stub<member_func_t<void, UIMenu, int32_t>>(0x4A13E0, this, arg1);

        unimplemented();
    }

    // 0x4A1580 | ?AssignName@UIMenu@@QAEXPAULocString@@@Z
    inline void AssignName(struct LocString* arg1)
    {
        return stub<member_func_t<void, UIMenu, struct LocString*>>(0x4A1580, this, arg1);
    }

    // 0x4A15D0 | ?AssignBackground@UIMenu@@QAEXPAD@Z
    inline void AssignBackground(char* arg1)
    {
        return stub<member_func_t<void, UIMenu, char*>>(0x4A15D0, this, arg1);
    }

    // 0x4A1620 | ?Enable@UIMenu@@QAEXXZ
    inline void Enable()
    {
        return stub<member_func_t<void, UIMenu>>(0x4A1620, this);
    }

    // 0x4A1690 | ?Disable@UIMenu@@QAEXXZ
    inline void Disable()
    {
        return stub<member_func_t<void, UIMenu>>(0x4A1690, this);
    }

    // 0x4A1700 | ?SetAction@UIMenu@@QAEXW4eSource@1@@Z
    inline void SetAction(enum UIMenu::eSource arg1)
    {
        return stub<member_func_t<void, UIMenu, enum UIMenu::eSource>>(0x4A1700, this, arg1);
    }

    // 0x4A1720 | ?ForceWidgetAction@UIMenu@@QAEXH@Z
    inline void ForceWidgetAction(int32_t arg1)
    {
        return stub<member_func_t<void, UIMenu, int32_t>>(0x4A1720, this, arg1);
    }

    // 0x4A1740 | ?ClearAction@UIMenu@@QAEXXZ
    inline void ClearAction()
    {
        return stub<member_func_t<void, UIMenu>>(0x4A1740, this);
    }

    // 0x4A1750 | ?ClearToolTip@UIMenu@@QAEXXZ
    inline void ClearToolTip()
    {
        return stub<member_func_t<void, UIMenu>>(0x4A1750, this);
    }

    // 0x4A1790 | ?SetBstate@UIMenu@@QAEXH@Z
    inline void SetBstate(int32_t arg1)
    {
        return stub<member_func_t<void, UIMenu, int32_t>>(0x4A1790, this, arg1);
    }

    // 0x4A17C0 | ?SetFocusWidget@UIMenu@@QAEXH@Z
    inline void SetFocusWidget(int32_t arg1)
    {
        return stub<member_func_t<void, UIMenu, int32_t>>(0x4A17C0, this, arg1);
    }

    // 0x4A1800 | ?GetWidgetID@UIMenu@@QAEHXZ
    inline int32_t GetWidgetID()
    {
        return stub<member_func_t<int32_t, UIMenu>>(0x4A1800, this);
    }

    // 0x4A1810 | ?GetBstate@UIMenu@@QAEHXZ
    inline int32_t GetBstate()
    {
        return stub<member_func_t<int32_t, UIMenu>>(0x4A1810, this);
    }

    // 0x4A1820 | ?GetDimensions@UIMenu@@QAEXAAM000@Z
    inline void GetDimensions(float& arg1, float& arg2, float& arg3, float& arg4)
    {
        return stub<member_func_t<void, UIMenu, float&, float&, float&, float&>>(
            0x4A1820, this, arg1, arg2, arg3, arg4);
    }

    // 0x4A1850 | ?DisableIME@UIMenu@@QAEXXZ
    inline void DisableIME()
    {
        return stub<member_func_t<void, UIMenu>>(0x4A1850, this);
    }

    // 0x4A1870 | ?FindTheFirstFocusWidget@UIMenu@@QAEHXZ
    inline int32_t FindTheFirstFocusWidget()
    {
        return stub<member_func_t<int32_t, UIMenu>>(0x4A1870, this);
    }

    // 0x4A18B0 | ?Increment@UIMenu@@QAEHXZ
    inline int32_t Increment()
    {
        return stub<member_func_t<int32_t, UIMenu>>(0x4A18B0, this);
    }

    // 0x4A1970 | ?Decrement@UIMenu@@QAEHXZ
    inline int32_t Decrement()
    {
        return stub<member_func_t<int32_t, UIMenu>>(0x4A1970, this);
    }

    // 0x4A1A20 | ?ScanInput@UIMenu@@QAEHPATeqEvent@@@Z
    inline int32_t ScanInput(union eqEvent* arg1)
    {
        return stub<member_func_t<int32_t, UIMenu, union eqEvent*>>(0x4A1A20, this, arg1);
    }

    // 0x4A1AF0 | ?ScaleWidget@UIMenu@@QAEXAAM000@Z
    inline void ScaleWidget(float& arg1, float& arg2, float& arg3, float& arg4)
    {
        return stub<member_func_t<void, UIMenu, float&, float&, float&, float&>>(
            0x4A1AF0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4A1B30 | ?AddHotSpot@UIMenu@@QAEPAVuiWidget@@HPADMMMMVCallback@@@Z
    inline class uiWidget* AddHotSpot(
        int32_t arg1, char* arg2, float arg3, float arg4, float arg5, float arg6, class Callback arg7)
    {
        return stub<member_func_t<class uiWidget*, UIMenu, int32_t, char*, float, float, float, float, class Callback>>(
            0x4A1B30, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4A1C10 | ?AddTextDropdown@UIMenu@@QAEPAVUITextDropdown@@HPAULocString@@PAHMMMMVstring@@HHHVCallback@@PAD@Z
    inline class UITextDropdown* AddTextDropdown(int32_t arg1, struct LocString* arg2, int32_t* arg3, float arg4,
        float arg5, float arg6, float arg7, class string arg8, int32_t arg9, int32_t arg10, int32_t arg11,
        class Callback arg12, char* arg13)
    {
        return stub<member_func_t<class UITextDropdown*, UIMenu, int32_t, struct LocString*, int32_t*, float, float,
            float, float, class string, int32_t, int32_t, int32_t, class Callback, char*>>(
            0x4A1C10, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4A1D90 | ?AddTextRoller@UIMenu@@QAEPAVUITextRoller@@HPAULocString@@PAHMMMMVstring@@HHHHVCallback@@@Z
    inline class UITextRoller* AddTextRoller(int32_t arg1, struct LocString* arg2, int32_t* arg3, float arg4,
        float arg5, float arg6, float arg7, class string arg8, int32_t arg9, int32_t arg10, int32_t arg11,
        int32_t arg12, class Callback arg13)
    {
        return stub<member_func_t<class UITextRoller*, UIMenu, int32_t, struct LocString*, int32_t*, float, float,
            float, float, class string, int32_t, int32_t, int32_t, int32_t, class Callback>>(
            0x4A1D90, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4A1EE0 | ?AddTextRoller2@UIMenu@@QAEPAVUITextRoller2@@HPAULocString@@PAHMMMMVstring@@HHHHVCallback@@@Z
    inline class UITextRoller2* AddTextRoller2(int32_t arg1, struct LocString* arg2, int32_t* arg3, float arg4,
        float arg5, float arg6, float arg7, class string arg8, int32_t arg9, int32_t arg10, int32_t arg11,
        int32_t arg12, class Callback arg13)
    {
        return stub<member_func_t<class UITextRoller2*, UIMenu, int32_t, struct LocString*, int32_t*, float, float,
            float, float, class string, int32_t, int32_t, int32_t, int32_t, class Callback>>(
            0x4A1EE0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4A2060 | ?AddTextScroll@UIMenu@@QAEPAVUITextScroll@@HPAXMMMMVstring@@HPAHVCallback@@@Z
    inline class UITextScroll* AddTextScroll(int32_t arg1, void* arg2, float arg3, float arg4, float arg5, float arg6,
        class string arg7, int32_t arg8, int32_t* arg9, class Callback arg10)
    {
        return stub<member_func_t<class UITextScroll*, UIMenu, int32_t, void*, float, float, float, float, class string,
            int32_t, int32_t*, class Callback>>(
            0x4A2060, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4A2200 | ?AddCompScroll@UIMenu@@QAEPAVUICompositeScroll@@HMMMMMHPAHHHVCallback@@@Z
    inline class UICompositeScroll* AddCompScroll(int32_t arg1, float arg2, float arg3, float arg4, float arg5,
        float arg6, int32_t arg7, int32_t* arg8, int32_t arg9, int32_t arg10, class Callback arg11)
    {
        return stub<member_func_t<class UICompositeScroll*, UIMenu, int32_t, float, float, float, float, float, int32_t,
            int32_t*, int32_t, int32_t, class Callback>>(
            0x4A2200, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x4A2380 | ?AddTextField@UIMenu@@QAEPAVUITextField@@HPAULocString@@PADMMMMHHHHHVCallback@@@Z
    inline class UITextField* AddTextField(int32_t arg1, struct LocString* arg2, char* arg3, float arg4, float arg5,
        float arg6, float arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12,
        class Callback arg13)
    {
        return stub<member_func_t<class UITextField*, UIMenu, int32_t, struct LocString*, char*, float, float, float,
            float, int32_t, int32_t, int32_t, int32_t, int32_t, class Callback>>(
            0x4A2380, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4A24F0 | ?AddUIControl@UIMenu@@QAEPAVUIControlWidget@@HMMMMMPAVmmIO@@VCallback@@@Z
    inline class UIControlWidget* AddUIControl(
        int32_t arg1, float arg2, float arg3, float arg4, float arg5, float arg6, class mmIO* arg7, class Callback arg8)
    {
        return stub<member_func_t<class UIControlWidget*, UIMenu, int32_t, float, float, float, float, float,
            class mmIO*, class Callback>>(0x4A24F0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x4A25C0 | ?AddSlider@UIMenu@@QAEPAVUISlider@@HPAULocString@@PAMMMMMMMHHHHVCallback@@@Z
    inline class UISlider* AddSlider(int32_t arg1, struct LocString* arg2, float* arg3, float arg4, float arg5,
        float arg6, float arg7, float arg8, float arg9, int32_t arg10, int32_t arg11, int32_t arg12, int32_t arg13,
        class Callback arg14)
    {
        return stub<member_func_t<class UISlider*, UIMenu, int32_t, struct LocString*, float*, float, float, float,
            float, float, float, int32_t, int32_t, int32_t, int32_t, class Callback>>(
            0x4A25C0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }

    // 0x4A2700 | ?AddButton@UIMenu@@QAEPAVUIButton@@HPAULocString@@MMMMHHVCallback@@@Z
    inline class UIButton* AddButton(int32_t arg1, struct LocString* arg2, float arg3, float arg4, float arg5,
        float arg6, int32_t arg7, int32_t arg8, class Callback arg9)
    {
        return stub<member_func_t<class UIButton*, UIMenu, int32_t, struct LocString*, float, float, float, float,
            int32_t, int32_t, class Callback>>(0x4A2700, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x4A2820 | ?AddLabel@UIMenu@@QAEPAVUILabel@@HPAULocString@@MMMMHH@Z
    inline class UILabel* AddLabel(int32_t arg1, struct LocString* arg2, float arg3, float arg4, float arg5, float arg6,
        int32_t arg7, int32_t arg8)
    {
        return stub<member_func_t<class UILabel*, UIMenu, int32_t, struct LocString*, float, float, float, float,
            int32_t, int32_t>>(0x4A2820, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x4A2930 | ?AddBMLabel@UIMenu@@QAEPAVUIBMLabel@@HPADPAVstring@@MMPAH@Z
    inline class UIBMLabel* AddBMLabel(
        int32_t arg1, char* arg2, class string* arg3, float arg4, float arg5, int32_t* arg6)
    {
        return stub<member_func_t<class UIBMLabel*, UIMenu, int32_t, char*, class string*, float, float, int32_t*>>(
            0x4A2930, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4A2A40 | ?AddIcon@UIMenu@@QAEPAVUIIcon@@HPADMM@Z
    inline class UIIcon* AddIcon(int32_t arg1, char* arg2, float arg3, float arg4)
    {
        return stub<member_func_t<class UIIcon*, UIMenu, int32_t, char*, float, float>>(
            0x4A2A40, this, arg1, arg2, arg3, arg4);
    }

    // 0x4A2B50 | ?AddIconW@UIMenu@@QAEPAVUIIconW@@HPAULocString@@PADMMMMVCallback@@@Z
    inline class UIIconW* AddIconW(int32_t arg1, struct LocString* arg2, char* arg3, float arg4, float arg5, float arg6,
        float arg7, class Callback arg8)
    {
        return stub<member_func_t<class UIIconW*, UIMenu, int32_t, struct LocString*, char*, float, float, float, float,
            class Callback>>(0x4A2B50, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x4A2C60 | ?AddToggle@UIMenu@@QAEPAVUIToggleButton@@HPAULocString@@PAHMMMMHHVCallback@@@Z
    inline class UIToggleButton* AddToggle(int32_t arg1, struct LocString* arg2, int32_t* arg3, float arg4, float arg5,
        float arg6, float arg7, int32_t arg8, int32_t arg9, class Callback arg10)
    {
        return stub<member_func_t<class UIToggleButton*, UIMenu, int32_t, struct LocString*, int32_t*, float, float,
            float, float, int32_t, int32_t, class Callback>>(
            0x4A2C60, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4A2D80 | ?AddToggle2@UIMenu@@QAEPAVUIToggleButton2@@HPAULocString@@PAHMMMMHHVCallback@@@Z
    inline class UIToggleButton2* AddToggle2(int32_t arg1, struct LocString* arg2, int32_t* arg3, float arg4,
        float arg5, float arg6, float arg7, int32_t arg8, int32_t arg9, class Callback arg10)
    {
        return stub<member_func_t<class UIToggleButton2*, UIMenu, int32_t, struct LocString*, int32_t*, float, float,
            float, float, int32_t, int32_t, class Callback>>(
            0x4A2D80, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4A2EA0 | ?AddMex@UIMenu@@QAEPAVUIMexButton@@HPAULocString@@PAHHMMMMHHVCallback@@@Z
    inline class UIMexButton* AddMex(int32_t arg1, struct LocString* arg2, int32_t* arg3, int32_t arg4, float arg5,
        float arg6, float arg7, float arg8, int32_t arg9, int32_t arg10, class Callback arg11)
    {
        return stub<member_func_t<class UIMexButton*, UIMenu, int32_t, struct LocString*, int32_t*, int32_t, float,
            float, float, float, int32_t, int32_t, class Callback>>(
            0x4A2EA0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x4A2FC0 | ?AddBMButton@UIMenu@@QAEPAVUIBMButton@@HPADMMHVCallback@@PAHHH1@Z
    inline class UIBMButton* AddBMButton(int32_t arg1, char* arg2, float arg3, float arg4, int32_t arg5,
        class Callback arg6, int32_t* arg7, int32_t arg8, int32_t arg9, class Callback arg10)
    {
        return stub<member_func_t<class UIBMButton*, UIMenu, int32_t, char*, float, float, int32_t, class Callback,
            int32_t*, int32_t, int32_t, class Callback>>(
            0x4A2FC0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4A3150 | ?AddCWArray@UIMenu@@QAEPAVUICWArray@@HMMMMHVCallback@@@Z
    inline class UICWArray* AddCWArray(
        int32_t arg1, float arg2, float arg3, float arg4, float arg5, int32_t arg6, class Callback arg7)
    {
        return stub<
            member_func_t<class UICWArray*, UIMenu, int32_t, float, float, float, float, int32_t, class Callback>>(
            0x4A3150, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4A3290 | ?AddVScrollBar@UIMenu@@QAEPAVUIVScrollBar@@HPAHMMMMMMHHVCallback@@@Z
    inline class UIVScrollBar* AddVScrollBar(int32_t arg1, int32_t* arg2, float arg3, float arg4, float arg5,
        float arg6, float arg7, float arg8, int32_t arg9, int32_t arg10, class Callback arg11)
    {
        return stub<member_func_t<class UIVScrollBar*, UIMenu, int32_t, int32_t*, float, float, float, float, float,
            float, int32_t, int32_t, class Callback>>(
            0x4A3290, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x4A33E0 | ?MouseAction@UIMenu@@QAEXTeqEvent@@@Z
    inline void MouseAction(union eqEvent arg1)
    {
        return stub<member_func_t<void, UIMenu, union eqEvent>>(0x4A33E0, this, arg1);
    }

    // 0x4A3450 | ?KeyboardAction@UIMenu@@QAEXTeqEvent@@@Z
    inline void KeyboardAction(union eqEvent arg1)
    {
        return stub<member_func_t<void, UIMenu, union eqEvent>>(0x4A3450, this, arg1);
    }

    // 0x4A34E0 | ?MouseHitCheck@UIMenu@@QAEPAVuiWidget@@HMM@Z
    inline class uiWidget* MouseHitCheck(int32_t arg1, float arg2, float arg3)
    {
        return stub<member_func_t<class uiWidget*, UIMenu, int32_t, float, float>>(0x4A34E0, this, arg1, arg2, arg3);
    }

    // 0x4A3610 | ?SetSelected@UIMenu@@QAEXXZ
    inline void SetSelected()
    {
        return stub<member_func_t<void, UIMenu>>(0x4A3610, this);
    }

    // 0x4A3640 | ?ClearSelected@UIMenu@@QAEXXZ
    inline void ClearSelected()
    {
        return stub<member_func_t<void, UIMenu>>(0x4A3640, this);
    }

    // 0x4A3670 | ?ClearWidgets@UIMenu@@QAEXXZ
    inline void ClearWidgets()
    {
        return stub<member_func_t<void, UIMenu>>(0x4A3670, this);
    }

    // 0x4A36A0 | ?CheckMouseHits@UIMenu@@QAEXXZ
    inline void CheckMouseHits()
    {
        return stub<member_func_t<void, UIMenu>>(0x4A36A0, this);
    }

    // 0x4A3810 | ?AddWidget@UIMenu@@QAEXPAVuiWidget@@PADMMMMH1@Z
    inline void AddWidget(
        class uiWidget* arg1, char* arg2, float arg3, float arg4, float arg5, float arg6, int32_t arg7, char* arg8)
    {
        return stub<member_func_t<void, UIMenu, class uiWidget*, char*, float, float, float, float, int32_t, char*>>(
            0x4A3810, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x5AFDC8 | ?UI_LEFT_MARGIN@UIMenu@@2MA
    static inline extern_var(0x5AFDC8, float, UI_LEFT_MARGIN);

    // 0x5AFDCC | ?UI_LEFT_MARGIN2@UIMenu@@2MA
    static inline extern_var(0x5AFDCC, float, UI_LEFT_MARGIN2);

    // 0x5AFDD0 | ?UI_TOP_MARGIN@UIMenu@@2MA
    static inline extern_var(0x5AFDD0, float, UI_TOP_MARGIN);

    // 0x5AFDD4 | ?UI_BOTTOM_MARGIN@UIMenu@@2MA
    static inline extern_var(0x5AFDD4, float, UI_BOTTOM_MARGIN);

    // 0x5AFDD8 | ?WIDGET_WIDTH@UIMenu@@2MA
    static inline extern_var(0x5AFDD8, float, WIDGET_WIDTH);

    // 0x5AFDDC | ?WIDGET_HEIGHT@UIMenu@@2MA
    static inline extern_var(0x5AFDDC, float, WIDGET_HEIGHT);

    // 0x667C8C | ?UI_RIGHT_MARGIN@UIMenu@@2MA
    static inline extern_var(0x667C8C, float, UI_RIGHT_MARGIN);

    // 0x4A14E0 | ??1UIMenu@@UAE@XZ
    inline ~UIMenu() override = 0
    {
        // stub<member_func_t<void, UIMenu>>(0x4A14E0, this);

        unimplemented();
    }

    // 0x4A16F0 | ?Update@UIMenu@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIMenu>>(0x4A16F0, this);
    }

    // 0x4A16B0 | ?PreSetup@UIMenu@@UAEXXZ
    virtual inline void PreSetup()
    {
        return stub<member_func_t<void, UIMenu>>(0x4A16B0, this);
    }

    // 0x4A16E0 | ?PostSetup@UIMenu@@UAEXXZ
    virtual inline void PostSetup()
    {
        return stub<member_func_t<void, UIMenu>>(0x4A16E0, this);
    }

    // 0x4A1780 | ?BackUp@UIMenu@@UAEXXZ
    virtual inline void BackUp()
    {
        return stub<member_func_t<void, UIMenu>>(0x4A1780, this);
    }

    // 0x4A1A60 | ?CheckInput@UIMenu@@UAEXXZ
    virtual inline void CheckInput()
    {
        return stub<member_func_t<void, UIMenu>>(0x4A1A60, this);
    }

    // 0x48F5A0 | ?IsAnOptionMenu@UIMenu@@UAEHXZ
    virtual inline int32_t IsAnOptionMenu()
    {
        return stub<member_func_t<int32_t, UIMenu>>(0x48F5A0, this);
    }
};
