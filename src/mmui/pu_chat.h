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
    mmui:pu_chat

    0x49E370 | public: __thiscall PUChat::PUChat(int,float,float,float,float,char *) | ??0PUChat@@QAE@HMMMMPAD@Z
    0x49E470 | public: virtual __thiscall PUChat::~PUChat(void) | ??1PUChat@@UAE@XZ
    0x49E480 | public: void __thiscall PUChat::ClearChat(void) | ?ClearChat@PUChat@@QAEXXZ
    0x49E4C0 | public: void __thiscall PUChat::ChatEntry(void) | ?ChatEntry@PUChat@@QAEXXZ
    0x49E520 | public: virtual void * __thiscall PUChat::`vector deleting destructor'(unsigned int) | ??_EPUChat@@UAEPAXI@Z
    0x49E520 | public: virtual void * __thiscall PUChat::`scalar deleting destructor'(unsigned int) | ??_GPUChat@@UAEPAXI@Z
    0x592C60 | const PUChat::`vftable' | ??_7PUChat@@6B@
*/

struct PUChat : PUMenuBase
{
public:
    // PUChat::`vftable' @ 0x592C60

    // 0x49E370 | ??0PUChat@@QAE@HMMMMPAD@Z
    inline PUChat(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, PUChat, int32_t, float, float, float, float, char*>>(
            0x49E370, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x49E480 | ?ClearChat@PUChat@@QAEXXZ
    inline void ClearChat()
    {
        return stub<member_func_t<void, PUChat>>(0x49E480, this);
    }

    // 0x49E4C0 | ?ChatEntry@PUChat@@QAEXXZ
    inline void ChatEntry()
    {
        return stub<member_func_t<void, PUChat>>(0x49E4C0, this);
    }

    // 0x49E470 | ??1PUChat@@UAE@XZ
    inline ~PUChat() override = 0
    {
        // stub<member_func_t<void, PUChat>>(0x49E470, this);

        unimplemented();
    }
};
