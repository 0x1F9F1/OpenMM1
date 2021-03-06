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
    mmui:dlg_ctrl

    0x495190 | public: __thiscall Dialog_ControlAssign::Dialog_ControlAssign(int,float,float,float,float,char *) | ??0Dialog_ControlAssign@@QAE@HMMMMPAD@Z
    0x495290 | public: virtual __thiscall Dialog_ControlAssign::~Dialog_ControlAssign(void) | ??1Dialog_ControlAssign@@UAE@XZ
    0x4952A0 | public: virtual void __thiscall Dialog_ControlAssign::PreSetup(void) | ?PreSetup@Dialog_ControlAssign@@UAEXXZ
    0x4952B0 | public: virtual void * __thiscall Dialog_ControlAssign::`scalar deleting destructor'(unsigned int) | ??_GDialog_ControlAssign@@UAEPAXI@Z
    0x4952B0 | public: virtual void * __thiscall Dialog_ControlAssign::`vector deleting destructor'(unsigned int) | ??_EDialog_ControlAssign@@UAEPAXI@Z
    0x592658 | const Dialog_ControlAssign::`vftable' | ??_7Dialog_ControlAssign@@6B@
*/

struct Dialog_ControlAssign : PUMenuBase
{
public:
    // Dialog_ControlAssign::`vftable' @ 0x592658

    // 0x495190 | ??0Dialog_ControlAssign@@QAE@HMMMMPAD@Z
    inline Dialog_ControlAssign(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_ControlAssign, int32_t, float, float, float, float, char*>>(
            0x495190, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x495290 | ??1Dialog_ControlAssign@@UAE@XZ
    inline ~Dialog_ControlAssign() override = 0
    {
        stub<member_func_t<void, Dialog_ControlAssign>>(0x495290, this);
    }

    // 0x4952A0 | ?PreSetup@Dialog_ControlAssign@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_ControlAssign>>(0x4952A0, this);
    }
};
