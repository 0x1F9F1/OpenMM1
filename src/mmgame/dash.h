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

// mmgame:dash

#include "hooking.h"

// 0x5A6AAC | ?MAX_SPEED@@3MA
inline extern_var(0x5A6AAC, float, MAX_SPEED);

// 0x609B60 | ?mmDashViewMetaClass@@3VMetaClass@@A
inline extern_var(0x609B60, class MetaClass, mmDashViewMetaClass);

// 0x42F500 | ?new_mmDashView@@YAPAXH@Z
inline void* new_mmDashView(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x42F500, arg1);
}

// 0x42F5D0 | ?delete_mmDashView@@YAXPAXH@Z
inline void delete_mmDashView(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x42F5D0, arg1, arg2);
}

class mmExternalView : asNode
{
public:
    // mmExternalView::`vftable' @ 0x5902C0

    // 0x42EF40 | ??0mmExternalView@@QAE@XZ
    inline mmExternalView()
    {
        stub<member_func_t<void, mmExternalView>>(0x42EF40, this);
    }

    // 0x42EFC0 | ?Init@mmExternalView@@QAEXPAVmmPlayer@@@Z
    inline void Init(class mmPlayer* arg1)
    {
        return stub<member_func_t<void, mmExternalView, class mmPlayer*>>(0x42EFC0, this, arg1);
    }

    // 0x42F180 | ?WideFOV@mmExternalView@@QAEXH@Z
    inline void WideFOV(int32_t arg1)
    {
        return stub<member_func_t<void, mmExternalView, int32_t>>(0x42F180, this, arg1);
    }

    // 0x425980 | ??1mmExternalView@@UAE@XZ
    inline ~mmExternalView() override
    {
        stub<member_func_t<void, mmExternalView>>(0x425980, this);
    }

    // 0x42F190 | ?Cull@mmExternalView@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmExternalView>>(0x42F190, this);
    }

    // 0x42F160 | ?Update@mmExternalView@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmExternalView>>(0x42F160, this);
    }

    // 0x42F150 | ?Reset@mmExternalView@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmExternalView>>(0x42F150, this);
    }

    // 0x42F000 | ?ResChange@mmExternalView@@UAEXHH@Z
    inline void ResChange(int32_t arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, mmExternalView, int32_t, int32_t>>(0x42F000, this, arg1, arg2);
    }
};

struct mmDashView : asLinearCS
{
public:
    // mmDashView::`vftable' @ 0x590290

    // 0x42E410 | ??0mmDashView@@QAE@XZ
    inline mmDashView()
    {
        stub<member_func_t<void, mmDashView>>(0x42E410, this);
    }

    // 0x42E6C0 | ?Init@mmDashView@@QAEXPADPAVmmPlayer@@@Z
    inline void Init(char* arg1, class mmPlayer* arg2)
    {
        return stub<member_func_t<void, mmDashView, char*, class mmPlayer*>>(0x42E6C0, this, arg1, arg2);
    }

    // 0x42EBA0 | ?ActivateUntilTransitionIsOver@mmDashView@@QAEXXZ
    inline void ActivateUntilTransitionIsOver()
    {
        return stub<member_func_t<void, mmDashView>>(0x42EBA0, this);
    }

    // 0x42EBC0 | ?Activate@mmDashView@@QAEXXZ
    inline void Activate()
    {
        return stub<member_func_t<void, mmDashView>>(0x42EBC0, this);
    }

    // 0x42EBE0 | ?Deactivate@mmDashView@@QAEXXZ
    inline void Deactivate()
    {
        return stub<member_func_t<void, mmDashView>>(0x42EBE0, this);
    }

    // 0x42EC00 | ?TempDeactivate@mmDashView@@QAEXXZ
    inline void TempDeactivate()
    {
        return stub<member_func_t<void, mmDashView>>(0x42EC00, this);
    }

    // 0x42F330 | ?DeclareFields@mmDashView@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x42F330);
    }

    // 0x42E5B0 | ??1mmDashView@@UAE@XZ
    inline ~mmDashView() override
    {
        stub<member_func_t<void, mmDashView>>(0x42E5B0, this);
    }

    // 0x42F620 | ?GetClass@mmDashView@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmDashView>>(0x42F620, this);
    }

    // 0x42EA60 | ?BeforeSave@mmDashView@@UAEXXZ
    inline void BeforeSave() override
    {
        return stub<member_func_t<void, mmDashView>>(0x42EA60, this);
    }

    // 0x42EB00 | ?AfterLoad@mmDashView@@UAEXXZ
    inline void AfterLoad() override
    {
        return stub<member_func_t<void, mmDashView>>(0x42EB00, this);
    }

    // 0x42ED40 | ?Cull@mmDashView@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmDashView>>(0x42ED40, this);
    }

    // 0x42EC10 | ?Update@mmDashView@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmDashView>>(0x42EC10, this);
    }

    // 0x42EA50 | ?Reset@mmDashView@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmDashView>>(0x42EA50, this);
    }
};
