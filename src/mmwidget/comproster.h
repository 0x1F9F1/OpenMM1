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

// mmwidget:comproster

#include "hooking.h"

struct mmCompRoster : mmCompBase
{
public:
    // mmCompRoster::`vftable' @ 0x5936E8

    // 0x4ACB20 | ??0mmCompRoster@@QAE@XZ
    inline mmCompRoster()
    {
        stub<member_func_t<void, mmCompRoster>>(0x4ACB20, this);
    }

    // 0x4ACC20 | ?Init@mmCompRoster@@QAEXPAD00K@Z
    inline void Init(char* arg1, char* arg2, char* arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, mmCompRoster, char*, char*, char*, uint32_t>>(
            0x4ACC20, this, arg1, arg2, arg3, arg4);
    }

    // 0x4ACCA0 | ?InitTitle@mmCompRoster@@QAEXMMMMPAULocString@@000H@Z
    inline void InitTitle(float arg1, float arg2, float arg3, float arg4, struct LocString* arg5,
        struct LocString* arg6, struct LocString* arg7, struct LocString* arg8, int32_t arg9)
    {
        return stub<member_func_t<void, mmCompRoster, float, float, float, float, struct LocString*, struct LocString*,
            struct LocString*, struct LocString*, int32_t>>(
            0x4ACCA0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x4ACCB0 | ?LoadBitmap@mmCompRoster@@QAEXPAD@Z
    inline void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, mmCompRoster, char*>>(0x4ACCB0, this, arg1);
    }

    // 0x4ACD40 | ?SetReady@mmCompRoster@@QAEXH@Z
    inline void SetReady(int32_t arg1)
    {
        return stub<member_func_t<void, mmCompRoster, int32_t>>(0x4ACD40, this, arg1);
    }

    // 0x4ACD60 | ?SetSubwidgetGeometry@mmCompRoster@@QAEXXZ
    inline void SetSubwidgetGeometry()
    {
        return stub<member_func_t<void, mmCompRoster>>(0x4ACD60, this);
    }

    // 0x4ACB90 | ??1mmCompRoster@@UAE@XZ
    inline ~mmCompRoster() override
    {
        stub<member_func_t<void, mmCompRoster>>(0x4ACB90, this);
    }

    // 0x4ACEF0 | ?Cull@mmCompRoster@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmCompRoster>>(0x4ACEF0, this);
    }

    // 0x4ACD10 | ?Update@mmCompRoster@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCompRoster>>(0x4ACD10, this);
    }

    // 0x4ACD00 | ?Reset@mmCompRoster@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCompRoster>>(0x4ACD00, this);
    }

    // 0x4ACEB0 | ?SetBltXY@mmCompRoster@@UAEXMM@Z
    inline void SetBltXY(float arg1, float arg2) override
    {
        return stub<member_func_t<void, mmCompRoster, float, float>>(0x4ACEB0, this, arg1, arg2);
    }

    // 0x4ACE80 | ?SetGeometry@mmCompRoster@@UAEXMMMM@Z
    inline void SetGeometry(float arg1, float arg2, float arg3, float arg4) override
    {
        return stub<member_func_t<void, mmCompRoster, float, float, float, float>>(
            0x4ACE80, this, arg1, arg2, arg3, arg4);
    }

    // 0x4ACE00 | ?SetPosition@mmCompRoster@@UAEXPAVmmTextNode@@HM@Z
    inline void SetPosition(class mmTextNode* arg1, int32_t arg2, float arg3) override
    {
        return stub<member_func_t<void, mmCompRoster, class mmTextNode*, int32_t, float>>(
            0x4ACE00, this, arg1, arg2, arg3);
    }
};
