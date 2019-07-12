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
    mmwidget:compcr

    0x4AC5F0 | public: __thiscall mmCompCRPlayer::mmCompCRPlayer(void) | ??0mmCompCRPlayer@@QAE@XZ
    0x4AC620 | public: virtual __thiscall mmCompCRPlayer::~mmCompCRPlayer(void) | ??1mmCompCRPlayer@@UAE@XZ
    0x4AC6B0 | public: void __thiscall mmCompCRPlayer::Init(char *,int,char *,int,int) | ?Init@mmCompCRPlayer@@QAEXPADH0HH@Z
    0x4AC7E0 | public: void __thiscall mmCompCRPlayer::InitTitle(float,float,float,float,struct LocString *,struct LocString *,struct LocString *,struct LocString *,int) | ?InitTitle@mmCompCRPlayer@@QAEXMMMMPAULocString@@000H@Z
    0x4AC7F0 | public: void __thiscall mmCompCRPlayer::LoadBitmap(char *) | ?LoadBitmap@mmCompCRPlayer@@QAEXPAD@Z
    0x4AC850 | public: virtual void __thiscall mmCompCRPlayer::Reset(void) | ?Reset@mmCompCRPlayer@@UAEXXZ
    0x4AC860 | public: virtual void __thiscall mmCompCRPlayer::Update(void) | ?Update@mmCompCRPlayer@@UAEXXZ
    0x4AC870 | public: void __thiscall mmCompCRPlayer::SetPoints(int) | ?SetPoints@mmCompCRPlayer@@QAEXH@Z
    0x4AC890 | public: void __thiscall mmCompCRPlayer::SetSubwidgetGeometry(void) | ?SetSubwidgetGeometry@mmCompCRPlayer@@QAEXXZ
    0x4AC990 | public: virtual void __thiscall mmCompCRPlayer::SetPosition(class mmTextNode *,int,float) | ?SetPosition@mmCompCRPlayer@@UAEXPAVmmTextNode@@HM@Z
    0x4ACA20 | public: virtual void __thiscall mmCompCRPlayer::SetGeometry(float,float,float,float) | ?SetGeometry@mmCompCRPlayer@@UAEXMMMM@Z
    0x4ACA50 | public: virtual void __thiscall mmCompCRPlayer::Cull(void) | ?Cull@mmCompCRPlayer@@UAEXXZ
    0x4ACAF0 | public: virtual void * __thiscall mmCompCRPlayer::`vector deleting destructor'(unsigned int) | ??_EmmCompCRPlayer@@UAEPAXI@Z
    0x4ACAF0 | public: virtual void * __thiscall mmCompCRPlayer::`scalar deleting destructor'(unsigned int) | ??_GmmCompCRPlayer@@UAEPAXI@Z
    0x593670 | const mmCompCRPlayer::`vftable' | ??_7mmCompCRPlayer@@6B@
*/

#include "hooking.h"

struct mmCompCRPlayer : mmCompBase
{
public:
    // mmCompCRPlayer::`vftable' @ 0x593670

    // 0x4AC5F0 | ??0mmCompCRPlayer@@QAE@XZ
    inline mmCompCRPlayer()
    {
        // stub<member_func_t<void, mmCompCRPlayer>>(0x4AC5F0, this);

        unimplemented();
    }

    // 0x4AC6B0 | ?Init@mmCompCRPlayer@@QAEXPADH0HH@Z
    inline void Init(char* arg1, int32_t arg2, char* arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<void, mmCompCRPlayer, char*, int32_t, char*, int32_t, int32_t>>(
            0x4AC6B0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4AC7E0 | ?InitTitle@mmCompCRPlayer@@QAEXMMMMPAULocString@@000H@Z
    inline void InitTitle(float arg1, float arg2, float arg3, float arg4, struct LocString* arg5,
        struct LocString* arg6, struct LocString* arg7, struct LocString* arg8, int32_t arg9)
    {
        return stub<member_func_t<void, mmCompCRPlayer, float, float, float, float, struct LocString*,
            struct LocString*, struct LocString*, struct LocString*, int32_t>>(
            0x4AC7E0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x4AC7F0 | ?LoadBitmap@mmCompCRPlayer@@QAEXPAD@Z
    inline void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, mmCompCRPlayer, char*>>(0x4AC7F0, this, arg1);
    }

    // 0x4AC870 | ?SetPoints@mmCompCRPlayer@@QAEXH@Z
    inline void SetPoints(int32_t arg1)
    {
        return stub<member_func_t<void, mmCompCRPlayer, int32_t>>(0x4AC870, this, arg1);
    }

    // 0x4AC890 | ?SetSubwidgetGeometry@mmCompCRPlayer@@QAEXXZ
    inline void SetSubwidgetGeometry()
    {
        return stub<member_func_t<void, mmCompCRPlayer>>(0x4AC890, this);
    }

    // 0x4AC620 | ??1mmCompCRPlayer@@UAE@XZ
    inline ~mmCompCRPlayer() override = 0
    {
        // stub<member_func_t<void, mmCompCRPlayer>>(0x4AC620, this);

        unimplemented();
    }

    // 0x4ACA50 | ?Cull@mmCompCRPlayer@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmCompCRPlayer>>(0x4ACA50, this);
    }

    // 0x4AC860 | ?Update@mmCompCRPlayer@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCompCRPlayer>>(0x4AC860, this);
    }

    // 0x4AC850 | ?Reset@mmCompCRPlayer@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCompCRPlayer>>(0x4AC850, this);
    }

    // 0x4ACA20 | ?SetGeometry@mmCompCRPlayer@@UAEXMMMM@Z
    inline void SetGeometry(float arg1, float arg2, float arg3, float arg4) override
    {
        return stub<member_func_t<void, mmCompCRPlayer, float, float, float, float>>(
            0x4ACA20, this, arg1, arg2, arg3, arg4);
    }

    // 0x4AC990 | ?SetPosition@mmCompCRPlayer@@UAEXPAVmmTextNode@@HM@Z
    inline void SetPosition(class mmTextNode* arg1, int32_t arg2, float arg3) override
    {
        return stub<member_func_t<void, mmCompCRPlayer, class mmTextNode*, int32_t, float>>(
            0x4AC990, this, arg1, arg2, arg3);
    }
};
