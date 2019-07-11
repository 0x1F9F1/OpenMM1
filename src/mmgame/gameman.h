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

// mmgame:gameman

#include "hooking.h"

// 0x5D4504 | ?dummyGlobal2@@3EA
inline extern_var(0x5D4504, uint8_t, dummyGlobal2);

// 0x6090F0 | ?ScreenClearCount@@3HA
inline extern_var(0x6090F0, int32_t, ScreenClearCount);

// 0x6090F8 | ?ReplayLog@@3PAVStream@@A
inline extern_var(0x6090F8, class Stream*, ReplayLog);

// 0x609100 | ?mmGameManagerMetaClass@@3VMetaClass@@A
inline extern_var(0x609100, class MetaClass, mmGameManagerMetaClass);

// 0x402F50 | ?randcall@@YAXXZ
inline void randcall()
{
    return stub<cdecl_t<void>>(0x402F50);
}

// 0x4032B0 | ?DoScan@@YAXPAX@Z
inline void DoScan(void* arg1)
{
    return stub<cdecl_t<void, void*>>(0x4032B0, arg1);
}

// 0x4035E0 | ?new_mmGameManager@@YAPAXH@Z
inline void* new_mmGameManager(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4035E0, arg1);
}

// 0x4036B0 | ?delete_mmGameManager@@YAXPAXH@Z
inline void delete_mmGameManager(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4036B0, arg1, arg2);
}

class mmGameManager : asNode
{
public:
    // mmGameManager::`vftable' @ 0x58F468

    // 0x402B60 | ??0mmGameManager@@QAE@XZ
    inline mmGameManager()
    {
        stub<member_func_t<void, mmGameManager>>(0x402B60, this);
    }

    // 0x403080 | ?BeDone@mmGameManager@@QAEXXZ
    inline void BeDone()
    {
        return stub<member_func_t<void, mmGameManager>>(0x403080, this);
    }

    // 0x403370 | ?StartReplay@mmGameManager@@QAEXXZ
    inline void StartReplay()
    {
        return stub<member_func_t<void, mmGameManager>>(0x403370, this);
    }

    // 0x403390 | ?LoadReplay@mmGameManager@@QAEXPAD@Z
    inline void LoadReplay(char* arg1)
    {
        return stub<member_func_t<void, mmGameManager, char*>>(0x403390, this, arg1);
    }

    // 0x403460 | ?SaveReplay@mmGameManager@@QAEXPAD@Z
    inline void SaveReplay(char* arg1)
    {
        return stub<member_func_t<void, mmGameManager, char*>>(0x403460, this, arg1);
    }

    // 0x403500 | ?GetBrakes@mmGameManager@@QAEMXZ
    inline float GetBrakes()
    {
        return stub<member_func_t<float, mmGameManager>>(0x403500, this);
    }

    // 0x403530 | ?GetSteering@mmGameManager@@QAEMXZ
    inline float GetSteering()
    {
        return stub<member_func_t<float, mmGameManager>>(0x403530, this);
    }

    // 0x403560 | ?GetThrottle@mmGameManager@@QAEMXZ
    inline float GetThrottle()
    {
        return stub<member_func_t<float, mmGameManager>>(0x403560, this);
    }

    // 0x403590 | ?DeclareFields@mmGameManager@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x403590);
    }

    // 0x60912C | ?Instance@mmGameManager@@0PAV1@A
    static inline extern_var(0x60912C, class mmGameManager*, Instance);

    // 0x402F70 | ??1mmGameManager@@UAE@XZ
    inline ~mmGameManager() override
    {
        stub<member_func_t<void, mmGameManager>>(0x402F70, this);
    }

    // 0x403700 | ?GetClass@mmGameManager@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmGameManager>>(0x403700, this);
    }

    // 0x403330 | ?Cull@mmGameManager@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmGameManager>>(0x403330, this);
    }

    // 0x403090 | ?Update@mmGameManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmGameManager>>(0x403090, this);
    }

    // 0x4034F0 | ?Reset@mmGameManager@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmGameManager>>(0x4034F0, this);
    }
};

struct mmScreenClearFlunky : asNode
{
public:
    // mmScreenClearFlunky::`vftable' @ 0x58F438

    // 0x403770 | ??1mmScreenClearFlunky@@UAE@XZ
    inline ~mmScreenClearFlunky() override
    {
        stub<member_func_t<void, mmScreenClearFlunky>>(0x403770, this);
    }

    // 0x402A20 | ?Cull@mmScreenClearFlunky@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmScreenClearFlunky>>(0x402A20, this);
    }

    // 0x4029F0 | ?Update@mmScreenClearFlunky@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmScreenClearFlunky>>(0x4029F0, this);
    }
};
