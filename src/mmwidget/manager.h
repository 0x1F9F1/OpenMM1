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

// mmwidget:manager

#include "hooking.h"

// 0x5AFE34 | ?DELAYTTIME@@3MA
inline extern_var(0x5AFE34, float, DELAYTTIME);

// 0x4A6560 | ?HelpWatcher@@YGKPAX@Z
inline uint32_t __stdcall HelpWatcher(void* arg1)
{
    return stub<stdcall_t<uint32_t, void*>>(0x4A6560, arg1);
}

class MenuManager : asNode
{
public:
    // MenuManager::`vftable' @ 0x593058

    // 0x4A3930 | ??0MenuManager@@QAE@XZ
    inline MenuManager()
    {
        stub<member_func_t<void, MenuManager>>(0x4A3930, this);
    }

    // 0x4A3D10 | ?GetScale@MenuManager@@QAEXAAM000@Z
    inline void GetScale(float& arg1, float& arg2, float& arg3, float& arg4)
    {
        return stub<member_func_t<void, MenuManager, float&, float&, float&, float&>>(
            0x4A3D10, this, arg1, arg2, arg3, arg4);
    }

    // 0x4A3D80 | ?MouseAction@MenuManager@@QAEPAVuiWidget@@HMM@Z
    inline class uiWidget* MouseAction(int32_t arg1, float arg2, float arg3)
    {
        return stub<member_func_t<class uiWidget*, MenuManager, int32_t, float, float>>(
            0x4A3D80, this, arg1, arg2, arg3);
    }

    // 0x4A3E00 | ?ClearAllWidgets@MenuManager@@QAEXXZ
    inline void ClearAllWidgets()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A3E00, this);
    }

    // 0x4A3E40 | ?Init@MenuManager@@QAEXHHPAD@Z
    inline void Init(int32_t arg1, int32_t arg2, char* arg3)
    {
        return stub<member_func_t<void, MenuManager, int32_t, int32_t, char*>>(0x4A3E40, this, arg1, arg2, arg3);
    }

    // 0x4A41D0 | ?Init@MenuManager@@QAEXPAVasCamera@@HHMMMM@Z
    inline void Init(class asCamera* arg1, int32_t arg2, int32_t arg3, float arg4, float arg5, float arg6, float arg7)
    {
        return stub<member_func_t<void, MenuManager, class asCamera*, int32_t, int32_t, float, float, float, float>>(
            0x4A41D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4A4440 | ?InitCommonStuff@MenuManager@@QAEXHH@Z
    inline void InitCommonStuff(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, MenuManager, int32_t, int32_t>>(0x4A4440, this, arg1, arg2);
    }

    // 0x4A4720 | ?AddPointer@MenuManager@@QAEXXZ
    inline void AddPointer()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A4720, this);
    }

    // 0x4A4730 | ?InitGlobalStrings@MenuManager@@QAEXXZ
    inline void InitGlobalStrings()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A4730, this);
    }

    // 0x4A4EA0 | ?LoadRaceNames@MenuManager@@QAEXXZ
    inline void LoadRaceNames()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A4EA0, this);
    }

    // 0x4A5190 | ?GetControllerName@MenuManager@@QAEPADH@Z
    inline char* GetControllerName(int32_t arg1)
    {
        return stub<member_func_t<char*, MenuManager, int32_t>>(0x4A5190, this, arg1);
    }

    // 0x4A5230 | ?GetFont@MenuManager@@QAEPAXH@Z
    inline void* GetFont(int32_t arg1)
    {
        return stub<member_func_t<void*, MenuManager, int32_t>>(0x4A5230, this, arg1);
    }

    // 0x4A5300 | ?GetFGColor@MenuManager@@QAEAAVVector4@@H@Z
    inline class Vector4& GetFGColor(int32_t arg1)
    {
        return stub<member_func_t<class Vector4&, MenuManager, int32_t>>(0x4A5300, this, arg1);
    }

    // 0x4A54A0 | ?CheckBG@MenuManager@@QAEXPAVUIMenu@@@Z
    inline void CheckBG(class UIMenu* arg1)
    {
        return stub<member_func_t<void, MenuManager, class UIMenu*>>(0x4A54A0, this, arg1);
    }

    // 0x4A54C0 | ?SetDefaultBackgroundImage@MenuManager@@QAEXPAD@Z
    inline void SetDefaultBackgroundImage(char* arg1)
    {
        return stub<member_func_t<void, MenuManager, char*>>(0x4A54C0, this, arg1);
    }

    // 0x4A5520 | ?SetBackgroundImage@MenuManager@@QAEXPAD@Z
    inline void SetBackgroundImage(char* arg1)
    {
        return stub<member_func_t<void, MenuManager, char*>>(0x4A5520, this, arg1);
    }

    // 0x4A5570 | ?TogglePU@MenuManager@@QAEXXZ
    inline void TogglePU()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A5570, this);
    }

    // 0x4A5590 | ?EnablePU@MenuManager@@QAEXXZ
    inline void EnablePU()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A5590, this);
    }

    // 0x4A5610 | ?AdjustPopupCard@MenuManager@@QAEXPAVUIMenu@@@Z
    inline void AdjustPopupCard(class UIMenu* arg1)
    {
        return stub<member_func_t<void, MenuManager, class UIMenu*>>(0x4A5610, this, arg1);
    }

    // 0x4A5660 | ?DisablePU@MenuManager@@QAEXXZ
    inline void DisablePU()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A5660, this);
    }

    // 0x4A56A0 | ?OpenDialog@MenuManager@@QAEXH@Z
    inline void OpenDialog(int32_t arg1)
    {
        return stub<member_func_t<void, MenuManager, int32_t>>(0x4A56A0, this, arg1);
    }

    // 0x4A5720 | ?CloseDialog@MenuManager@@QAEXXZ
    inline void CloseDialog()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A5720, this);
    }

    // 0x4A5750 | ?Enable@MenuManager@@QAEXH@Z
    inline void Enable(int32_t arg1)
    {
        return stub<member_func_t<void, MenuManager, int32_t>>(0x4A5750, this, arg1);
    }

    // 0x4A57C0 | ?Disable@MenuManager@@QAEXH@Z
    inline void Disable(int32_t arg1)
    {
        return stub<member_func_t<void, MenuManager, int32_t>>(0x4A57C0, this, arg1);
    }

    // 0x4A5800 | ?EnableNavBar@MenuManager@@QAEXXZ
    inline void EnableNavBar()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A5800, this);
    }

    // 0x4A5820 | ?DisableNavBar@MenuManager@@QAEXXZ
    inline void DisableNavBar()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A5820, this);
    }

    // 0x4A5830 | ?Kill@MenuManager@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A5830, this);
    }

    // 0x4A58D0 | ?PlaySound@MenuManager@@QAEXH@Z
    inline void PlaySound(int32_t arg1)
    {
        return stub<member_func_t<void, MenuManager, int32_t>>(0x4A58D0, this, arg1);
    }

    // 0x4A5980 | ?DeclareLastDrawn@MenuManager@@QAEXPAVasNode@@@Z
    inline void DeclareLastDrawn(class asNode* arg1)
    {
        return stub<member_func_t<void, MenuManager, class asNode*>>(0x4A5980, this, arg1);
    }

    // 0x4A59F0 | ?Flush@MenuManager@@QAEXXZ
    inline void Flush()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A59F0, this);
    }

    // 0x4A5A20 | ?CheckInput@MenuManager@@QAEXXZ
    inline void CheckInput()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A5A20, this);
    }

    // 0x4A5AA0 | ?ToggleFocus@MenuManager@@QAEXH@Z
    inline void ToggleFocus(int32_t arg1)
    {
        return stub<member_func_t<void, MenuManager, int32_t>>(0x4A5AA0, this, arg1);
    }

    // 0x4A5B20 | ?RegisterWidgetFocus@MenuManager@@QAEXHMMMMPAVuiWidget@@@Z
    inline void RegisterWidgetFocus(int32_t arg1, float arg2, float arg3, float arg4, float arg5, class uiWidget* arg6)
    {
        return stub<member_func_t<void, MenuManager, int32_t, float, float, float, float, class uiWidget*>>(
            0x4A5B20, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4A5B80 | ?ScanGlobalKeys@MenuManager@@QAEHH@Z
    inline int32_t ScanGlobalKeys(int32_t arg1)
    {
        return stub<member_func_t<int32_t, MenuManager, int32_t>>(0x4A5B80, this, arg1);
    }

    // 0x4A5D90 | ?SwitchFocus@MenuManager@@QAEXPAVUIMenu@@@Z
    inline void SwitchFocus(class UIMenu* arg1)
    {
        return stub<member_func_t<void, MenuManager, class UIMenu*>>(0x4A5D90, this, arg1);
    }

    // 0x4A5DE0 | ?NotifyMouseSelect@MenuManager@@QAEXPAVUIMenu@@@Z
    inline void NotifyMouseSelect(class UIMenu* arg1)
    {
        return stub<member_func_t<void, MenuManager, class UIMenu*>>(0x4A5DE0, this, arg1);
    }

    // 0x4A5E20 | ?AddWidgets@MenuManager@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, MenuManager, class Bank*>>(0x4A5E20, this, arg1);
    }

    // 0x4A5E30 | ?GetCurrentMenu@MenuManager@@QAEPAVUIMenu@@XZ
    inline class UIMenu* GetCurrentMenu()
    {
        return stub<member_func_t<class UIMenu*, MenuManager>>(0x4A5E30, this);
    }

    // 0x4A5E60 | ?FindMenu@MenuManager@@QAEHH@Z
    inline int32_t FindMenu(int32_t arg1)
    {
        return stub<member_func_t<int32_t, MenuManager, int32_t>>(0x4A5E60, this, arg1);
    }

    // 0x4A5EA0 | ?CurrentMenuSelected@MenuManager@@QAEHXZ
    inline int32_t CurrentMenuSelected()
    {
        return stub<member_func_t<int32_t, MenuManager>>(0x4A5EA0, this);
    }

    // 0x4A5EC0 | ?MenuState@MenuManager@@QAEHH@Z
    inline int32_t MenuState(int32_t arg1)
    {
        return stub<member_func_t<int32_t, MenuManager, int32_t>>(0x4A5EC0, this, arg1);
    }

    // 0x4A5F10 | ?ActionID@MenuManager@@QAEHH@Z
    inline int32_t ActionID(int32_t arg1)
    {
        return stub<member_func_t<int32_t, MenuManager, int32_t>>(0x4A5F10, this, arg1);
    }

    // 0x4A5F50 | ?ForceCurrentFocus@MenuManager@@QAEXXZ
    inline void ForceCurrentFocus()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A5F50, this);
    }

    // 0x4A5F80 | ?SetFocus@MenuManager@@QAEXPAVUIMenu@@@Z
    inline void SetFocus(class UIMenu* arg1)
    {
        return stub<member_func_t<void, MenuManager, class UIMenu*>>(0x4A5F80, this, arg1);
    }

    // 0x4A5F90 | ?Switch@MenuManager@@QAEHH@Z
    inline int32_t Switch(int32_t arg1)
    {
        return stub<member_func_t<int32_t, MenuManager, int32_t>>(0x4A5F90, this, arg1);
    }

    // 0x4A6050 | ?SetPreviousMenu@MenuManager@@QAEXH@Z
    inline void SetPreviousMenu(int32_t arg1)
    {
        return stub<member_func_t<void, MenuManager, int32_t>>(0x4A6050, this, arg1);
    }

    // 0x4A6080 | ?GetPreviousMenu@MenuManager@@QAEHXZ
    inline int32_t GetPreviousMenu()
    {
        return stub<member_func_t<int32_t, MenuManager>>(0x4A6080, this);
    }

    // 0x4A60A0 | ?AddMenu2@MenuManager@@QAEHPAVUIMenu@@@Z
    inline int32_t AddMenu2(class UIMenu* arg1)
    {
        return stub<member_func_t<int32_t, MenuManager, class UIMenu*>>(0x4A60A0, this, arg1);
    }

    // 0x4A6100 | ?DeleteMenu@MenuManager@@QAEXPAVUIMenu@@@Z
    inline void DeleteMenu(class UIMenu* arg1)
    {
        return stub<member_func_t<void, MenuManager, class UIMenu*>>(0x4A6100, this, arg1);
    }

    // 0x4A6160 | ?PlayMenuSwitchSound@MenuManager@@AAEXXZ
    inline void PlayMenuSwitchSound()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A6160, this);
    }

    // 0x4A6200 | ?AllocateMenuSwitchAudio@MenuManager@@QAEXXZ
    inline void AllocateMenuSwitchAudio()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A6200, this);
    }

    // 0x4A6380 | ?PlayRecordsSound@MenuManager@@QAEXXZ
    inline void PlayRecordsSound()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A6380, this);
    }

    // 0x4A63B0 | ?AddBrackets@MenuManager@@QAEXPAVUIIcon@@0PAVuiWidget@@MM@Z
    inline void AddBrackets(class UIIcon* arg1, class UIIcon* arg2, class uiWidget* arg3, float arg4, float arg5)
    {
        return stub<member_func_t<void, MenuManager, class UIIcon*, class UIIcon*, class uiWidget*, float, float>>(
            0x4A63B0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4A6490 | ?Help@MenuManager@@QAEXXZ
    inline void Help()
    {
        return stub<member_func_t<void, MenuManager>>(0x4A6490, this);
    }

    // 0x667C94 | ?Instance@MenuManager@@2PAV1@A
    static inline extern_var(0x667C94, class MenuManager*, Instance);

    // 0x4A3AF0 | ??1MenuManager@@UAE@XZ
    inline ~MenuManager() override
    {
        stub<member_func_t<void, MenuManager>>(0x4A3AF0, this);
    }

    // 0x4A59C0 | ?Update@MenuManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, MenuManager>>(0x4A59C0, this);
    }

    // 0x4A5990 | ?ResChange@MenuManager@@UAEXHH@Z
    inline void ResChange(int32_t arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, MenuManager, int32_t, int32_t>>(0x4A5990, this, arg1, arg2);
    }
};
