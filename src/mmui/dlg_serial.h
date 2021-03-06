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
    mmui:dlg_serial

    0x4947B0 | public: __thiscall Dialog_Serial::Dialog_Serial(int,float,float,float,float,char *) | ??0Dialog_Serial@@QAE@HMMMMPAD@Z
    0x495010 | public: virtual __thiscall Dialog_Serial::~Dialog_Serial(void) | ??1Dialog_Serial@@UAE@XZ
    0x495070 | public: virtual void __thiscall Dialog_Serial::PreSetup(void) | ?PreSetup@Dialog_Serial@@UAEXXZ
    0x495080 | public: void __thiscall Dialog_Serial::IPAddressCallback(void) | ?IPAddressCallback@Dialog_Serial@@QAEXXZ
    0x495090 | public: void __thiscall Dialog_Serial::BuildComs(void) | ?BuildComs@Dialog_Serial@@QAEXXZ
    0x495150 | public: struct NETCOMMPACK * __thiscall Dialog_Serial::GetCommPack(void) | ?GetCommPack@Dialog_Serial@@QAEPAUNETCOMMPACK@@XZ
    0x495160 | public: virtual void * __thiscall Dialog_Serial::`vector deleting destructor'(unsigned int) | ??_EDialog_Serial@@UAEPAXI@Z
    0x495160 | public: virtual void * __thiscall Dialog_Serial::`scalar deleting destructor'(unsigned int) | ??_GDialog_Serial@@UAEPAXI@Z
    0x592610 | const Dialog_Serial::`vftable' | ??_7Dialog_Serial@@6B@
*/

struct Dialog_Serial : PUMenuBase
{
public:
    // Dialog_Serial::`vftable' @ 0x592610

    // 0x4947B0 | ??0Dialog_Serial@@QAE@HMMMMPAD@Z
    inline Dialog_Serial(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_Serial, int32_t, float, float, float, float, char*>>(
            0x4947B0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x495080 | ?IPAddressCallback@Dialog_Serial@@QAEXXZ
    inline void IPAddressCallback()
    {
        return stub<member_func_t<void, Dialog_Serial>>(0x495080, this);
    }

    // 0x495090 | ?BuildComs@Dialog_Serial@@QAEXXZ
    inline void BuildComs()
    {
        return stub<member_func_t<void, Dialog_Serial>>(0x495090, this);
    }

    // 0x495150 | ?GetCommPack@Dialog_Serial@@QAEPAUNETCOMMPACK@@XZ
    inline struct NETCOMMPACK* GetCommPack()
    {
        return stub<member_func_t<struct NETCOMMPACK*, Dialog_Serial>>(0x495150, this);
    }

    // 0x495010 | ??1Dialog_Serial@@UAE@XZ
    inline ~Dialog_Serial() override = 0
    {
        stub<member_func_t<void, Dialog_Serial>>(0x495010, this);
    }

    // 0x495070 | ?PreSetup@Dialog_Serial@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_Serial>>(0x495070, this);
    }
};
