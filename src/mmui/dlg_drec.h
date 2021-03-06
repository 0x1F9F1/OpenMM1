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
    mmui:dlg_drec

    0x493B70 | public: __thiscall Dialog_DriverRec::Dialog_DriverRec(int,float,float,float,float,char *) | ??0Dialog_DriverRec@@QAE@HMMMMPAD@Z
    0x493ED0 | public: virtual __thiscall Dialog_DriverRec::~Dialog_DriverRec(void) | ??1Dialog_DriverRec@@UAE@XZ
    0x493EE0 | public: virtual void __thiscall Dialog_DriverRec::PreSetup(void) | ?PreSetup@Dialog_DriverRec@@UAEXXZ
    0x493EF0 | public: void __thiscall Dialog_DriverRec::InitDriverRecord(int) | ?InitDriverRecord@Dialog_DriverRec@@QAEXH@Z
    0x493FC0 | public: int __thiscall Dialog_DriverRec::AddDriverRecord(int,char *,int,float,char *,int) | ?AddDriverRecord@Dialog_DriverRec@@QAEHHPADHM0H@Z
    0x494100 | public: void __thiscall Dialog_DriverRec::ResetDriverRecord(void) | ?ResetDriverRecord@Dialog_DriverRec@@QAEXXZ
    0x494190 | public: void __thiscall Dialog_DriverRec::SetRecordPosition(int) | ?SetRecordPosition@Dialog_DriverRec@@QAEXH@Z
    0x4941B0 | public: void __thiscall Dialog_DriverRec::SetSortState(void) | ?SetSortState@Dialog_DriverRec@@QAEXXZ
    0x494210 | public: virtual void * __thiscall Dialog_DriverRec::`scalar deleting destructor'(unsigned int) | ??_GDialog_DriverRec@@UAEPAXI@Z
    0x494210 | public: virtual void * __thiscall Dialog_DriverRec::`vector deleting destructor'(unsigned int) | ??_EDialog_DriverRec@@UAEPAXI@Z
    0x592530 | const Dialog_DriverRec::`vftable' | ??_7Dialog_DriverRec@@6B@
*/

struct Dialog_DriverRec : PUMenuBase
{
public:
    // Dialog_DriverRec::`vftable' @ 0x592530

    // 0x493B70 | ??0Dialog_DriverRec@@QAE@HMMMMPAD@Z
    inline Dialog_DriverRec(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_DriverRec, int32_t, float, float, float, float, char*>>(
            0x493B70, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x493EF0 | ?InitDriverRecord@Dialog_DriverRec@@QAEXH@Z
    inline void InitDriverRecord(int32_t arg1)
    {
        return stub<member_func_t<void, Dialog_DriverRec, int32_t>>(0x493EF0, this, arg1);
    }

    // 0x493FC0 | ?AddDriverRecord@Dialog_DriverRec@@QAEHHPADHM0H@Z
    inline int32_t AddDriverRecord(int32_t arg1, char* arg2, int32_t arg3, float arg4, char* arg5, int32_t arg6)
    {
        return stub<member_func_t<int32_t, Dialog_DriverRec, int32_t, char*, int32_t, float, char*, int32_t>>(
            0x493FC0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x494100 | ?ResetDriverRecord@Dialog_DriverRec@@QAEXXZ
    inline void ResetDriverRecord()
    {
        return stub<member_func_t<void, Dialog_DriverRec>>(0x494100, this);
    }

    // 0x494190 | ?SetRecordPosition@Dialog_DriverRec@@QAEXH@Z
    inline void SetRecordPosition(int32_t arg1)
    {
        return stub<member_func_t<void, Dialog_DriverRec, int32_t>>(0x494190, this, arg1);
    }

    // 0x4941B0 | ?SetSortState@Dialog_DriverRec@@QAEXXZ
    inline void SetSortState()
    {
        return stub<member_func_t<void, Dialog_DriverRec>>(0x4941B0, this);
    }

    // 0x493ED0 | ??1Dialog_DriverRec@@UAE@XZ
    inline ~Dialog_DriverRec() override = 0
    {
        stub<member_func_t<void, Dialog_DriverRec>>(0x493ED0, this);
    }

    // 0x493EE0 | ?PreSetup@Dialog_DriverRec@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_DriverRec>>(0x493EE0, this);
    }
};
