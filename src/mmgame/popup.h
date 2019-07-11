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
    mmgame:popup

    0x41DCE0 | public: __thiscall mmPopup::mmPopup(class mmGame *,float,float,float,float) | ??0mmPopup@@QAE@PAVmmGame@@MMMM@Z
    0x41E150 | public: virtual __thiscall mmPopup::~mmPopup(void) | ??1mmPopup@@UAE@XZ
    0x41E160 | public: int __thiscall mmPopup::IsEnabled(void) | ?IsEnabled@mmPopup@@QAEHXZ
    0x41E170 | public: void __thiscall mmPopup::DisablePU(int) | ?DisablePU@mmPopup@@QAEXH@Z
    0x41E250 | public: void __thiscall mmPopup::ProcessEscape(int) | ?ProcessEscape@mmPopup@@QAEXH@Z
    0x41E390 | public: void __thiscall mmPopup::ProcessChat(void) | ?ProcessChat@mmPopup@@QAEXXZ
    0x41E490 | public: void __thiscall mmPopup::ProcessKeymap(int) | ?ProcessKeymap@mmPopup@@QAEXH@Z
    0x41E610 | public: void __thiscall mmPopup::ShowResults(void) | ?ShowResults@mmPopup@@QAEXXZ
    0x41E6A0 | public: void __thiscall mmPopup::ShowRoster(void) | ?ShowRoster@mmPopup@@QAEXXZ
    0x41E740 | public: void __thiscall mmPopup::ForceRoster(void) | ?ForceRoster@mmPopup@@QAEXXZ
    0x41E7C0 | public: virtual void __thiscall mmPopup::Update(void) | ?Update@mmPopup@@UAEXXZ
    0x41EDB0 | public: virtual void __thiscall mmPopup::Reset(void) | ?Reset@mmPopup@@UAEXXZ
    0x41EDD0 | public: char * __thiscall mmPopup::GetComment(void) | ?GetComment@mmPopup@@QAEPADXZ
    0x41EDE0 | public: void __thiscall mmPopup::SetComment(char *) | ?SetComment@mmPopup@@QAEXPAD@Z
    0x41EE00 | public: void __thiscall mmPopup::RecordPosition(void) | ?RecordPosition@mmPopup@@QAEXXZ
    0x41EE30 | public: void __thiscall mmPopup::Lock(void) | ?Lock@mmPopup@@QAEXXZ
    0x41EE40 | public: void __thiscall mmPopup::Unlock(void) | ?Unlock@mmPopup@@QAEXXZ
    0x41EE50 | public: void __thiscall mmPopup::ChatCB(void) | ?ChatCB@mmPopup@@QAEXXZ
    0x41EEE0 | public: virtual void * __thiscall mmPopup::`vector deleting destructor'(unsigned int) | ??_EmmPopup@@UAEPAXI@Z
    0x41EEE0 | public: virtual void * __thiscall mmPopup::`scalar deleting destructor'(unsigned int) | ??_GmmPopup@@UAEPAXI@Z
    0x58FCB8 | const mmPopup::`vftable' | ??_7mmPopup@@6B@
*/

#include "hooking.h"

struct mmPopup : asNode
{
public:
    // mmPopup::`vftable' @ 0x58FCB8

    // 0x41DCE0 | ??0mmPopup@@QAE@PAVmmGame@@MMMM@Z
    inline mmPopup(class mmGame* arg1, float arg2, float arg3, float arg4, float arg5)
    {
        stub<member_func_t<void, mmPopup, class mmGame*, float, float, float, float>>(
            0x41DCE0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x41E160 | ?IsEnabled@mmPopup@@QAEHXZ
    inline int32_t IsEnabled()
    {
        return stub<member_func_t<int32_t, mmPopup>>(0x41E160, this);
    }

    // 0x41E170 | ?DisablePU@mmPopup@@QAEXH@Z
    inline void DisablePU(int32_t arg1)
    {
        return stub<member_func_t<void, mmPopup, int32_t>>(0x41E170, this, arg1);
    }

    // 0x41E250 | ?ProcessEscape@mmPopup@@QAEXH@Z
    inline void ProcessEscape(int32_t arg1)
    {
        return stub<member_func_t<void, mmPopup, int32_t>>(0x41E250, this, arg1);
    }

    // 0x41E390 | ?ProcessChat@mmPopup@@QAEXXZ
    inline void ProcessChat()
    {
        return stub<member_func_t<void, mmPopup>>(0x41E390, this);
    }

    // 0x41E490 | ?ProcessKeymap@mmPopup@@QAEXH@Z
    inline void ProcessKeymap(int32_t arg1)
    {
        return stub<member_func_t<void, mmPopup, int32_t>>(0x41E490, this, arg1);
    }

    // 0x41E610 | ?ShowResults@mmPopup@@QAEXXZ
    inline void ShowResults()
    {
        return stub<member_func_t<void, mmPopup>>(0x41E610, this);
    }

    // 0x41E6A0 | ?ShowRoster@mmPopup@@QAEXXZ
    inline void ShowRoster()
    {
        return stub<member_func_t<void, mmPopup>>(0x41E6A0, this);
    }

    // 0x41E740 | ?ForceRoster@mmPopup@@QAEXXZ
    inline void ForceRoster()
    {
        return stub<member_func_t<void, mmPopup>>(0x41E740, this);
    }

    // 0x41EDD0 | ?GetComment@mmPopup@@QAEPADXZ
    inline char* GetComment()
    {
        return stub<member_func_t<char*, mmPopup>>(0x41EDD0, this);
    }

    // 0x41EDE0 | ?SetComment@mmPopup@@QAEXPAD@Z
    inline void SetComment(char* arg1)
    {
        return stub<member_func_t<void, mmPopup, char*>>(0x41EDE0, this, arg1);
    }

    // 0x41EE00 | ?RecordPosition@mmPopup@@QAEXXZ
    inline void RecordPosition()
    {
        return stub<member_func_t<void, mmPopup>>(0x41EE00, this);
    }

    // 0x41EE30 | ?Lock@mmPopup@@QAEXXZ
    inline void Lock()
    {
        return stub<member_func_t<void, mmPopup>>(0x41EE30, this);
    }

    // 0x41EE40 | ?Unlock@mmPopup@@QAEXXZ
    inline void Unlock()
    {
        return stub<member_func_t<void, mmPopup>>(0x41EE40, this);
    }

    // 0x41EE50 | ?ChatCB@mmPopup@@QAEXXZ
    inline void ChatCB()
    {
        return stub<member_func_t<void, mmPopup>>(0x41EE50, this);
    }

    // 0x41E150 | ??1mmPopup@@UAE@XZ
    inline ~mmPopup() override
    {
        stub<member_func_t<void, mmPopup>>(0x41E150, this);
    }

    // 0x41E7C0 | ?Update@mmPopup@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmPopup>>(0x41E7C0, this);
    }

    // 0x41EDB0 | ?Reset@mmPopup@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmPopup>>(0x41EDB0, this);
    }
};
