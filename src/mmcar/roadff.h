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

// mmcar:roadff

#include "hooking.h"

// 0x60A4F8 | ?mmCarRoadFFMetaClass@@3VMetaClass@@A
inline extern_var(0x60A4F8, class MetaClass, mmCarRoadFFMetaClass);

// 0x4788C0 | ?new_mmCarRoadFF@@YAPAXH@Z
inline void* new_mmCarRoadFF(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4788C0, arg1);
}

// 0x478980 | ?delete_mmCarRoadFF@@YAXPAXH@Z
inline void delete_mmCarRoadFF(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x478980, arg1, arg2);
}

struct mmCarRoadFF : asNode
{
public:
    // mmCarRoadFF::`vftable' @ 0x591880

    // 0x478530 | ??0mmCarRoadFF@@QAE@XZ
    inline mmCarRoadFF()
    {
        stub<member_func_t<void, mmCarRoadFF>>(0x478530, this);
    }

    // 0x4785D0 | ?AssignProperties@mmCarRoadFF@@QAEXMH@Z
    inline void AssignProperties(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmCarRoadFF, float, int32_t>>(0x4785D0, this, arg1, arg2);
    }

    // 0x478670 | ?SetFGVals@mmCarRoadFF@@QAEXMMM@Z
    inline void SetFGVals(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, mmCarRoadFF, float, float, float>>(0x478670, this, arg1, arg2, arg3);
    }

    // 0x478760 | ?Start@mmCarRoadFF@@QAEXXZ
    inline void Start()
    {
        return stub<member_func_t<void, mmCarRoadFF>>(0x478760, this);
    }

    // 0x478780 | ?Stop@mmCarRoadFF@@QAEXXZ
    inline void Stop()
    {
        return stub<member_func_t<void, mmCarRoadFF>>(0x478780, this);
    }

    // 0x4787C0 | ?IsPlaying@mmCarRoadFF@@QAEHXZ
    inline int32_t IsPlaying()
    {
        return stub<member_func_t<int32_t, mmCarRoadFF>>(0x4787C0, this);
    }

    // 0x478820 | ?UpdateVals@mmCarRoadFF@@QAEXXZ
    inline void UpdateVals()
    {
        return stub<member_func_t<void, mmCarRoadFF>>(0x478820, this);
    }

    // 0x478870 | ?DeclareFields@mmCarRoadFF@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x478870);
    }

    // 0x478570 | ??1mmCarRoadFF@@UAE@XZ
    inline ~mmCarRoadFF() override
    {
        stub<member_func_t<void, mmCarRoadFF>>(0x478570, this);
    }

    // 0x4789D0 | ?GetClass@mmCarRoadFF@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmCarRoadFF>>(0x4789D0, this);
    }

    // 0x4787D0 | ?Update@mmCarRoadFF@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCarRoadFF>>(0x4787D0, this);
    }

    // 0x478790 | ?Reset@mmCarRoadFF@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCarRoadFF>>(0x478790, this);
    }
};
