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

// mmcamcs:viewcs

#include "hooking.h"

// 0x67B670 | ?mmViewCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B670, class MetaClass, mmViewCSMetaClass);

// 0x4EB9E0 | ?new_mmViewCS@@YAPAXH@Z
inline void* new_mmViewCS(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4EB9E0, arg1);
}

// 0x4EBAB0 | ?delete_mmViewCS@@YAXPAXH@Z
inline void delete_mmViewCS(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4EBAB0, arg1, arg2);
}

class mmViewCS : asLinearCS
{
public:
    // mmViewCS::`vftable' @ 0x594BA8

    // 0x4EB5E0 | ??0mmViewCS@@QAE@XZ
    inline mmViewCS()
    {
        stub<member_func_t<void, mmViewCS>>(0x4EB5E0, this);
    }

    // 0x4EB6B0 | ?Instance@mmViewCS@@SAPAV1@PAVasCamera@@@Z
    static inline class mmViewCS* Instance(class asCamera* arg1)
    {
        return stub<cdecl_t<class mmViewCS*, class asCamera*>>(0x4EB6B0, arg1);
    }

    // 0x4EB720 | ?SetCurrentCam@mmViewCS@@QAEXPAVCarCamCS@@@Z
    inline void SetCurrentCam(class CarCamCS* arg1)
    {
        return stub<member_func_t<void, mmViewCS, class CarCamCS*>>(0x4EB720, this, arg1);
    }

    // 0x4EB790 | ?NewCam@mmViewCS@@QAEHPAVCarCamCS@@HMVCallback@@@Z
    inline int32_t NewCam(class CarCamCS* arg1, int32_t arg2, float arg3, class Callback arg4)
    {
        return stub<member_func_t<int32_t, mmViewCS, class CarCamCS*, int32_t, float, class Callback>>(
            0x4EB790, this, arg1, arg2, arg3, arg4);
    }

    // 0x4EB870 | ?Init@mmViewCS@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, mmViewCS>>(0x4EB870, this);
    }

    // 0x4EB880 | ?SetCamera@mmViewCS@@QAEXPAVasCamera@@@Z
    inline void SetCamera(class asCamera* arg1)
    {
        return stub<member_func_t<void, mmViewCS, class asCamera*>>(0x4EB880, this, arg1);
    }

    // 0x4EB930 | ?ForceMatrixDelta@mmViewCS@@QAEXABVMatrix34@@@Z
    inline void ForceMatrixDelta(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, mmViewCS, class Matrix34 const&>>(0x4EB930, this, arg1);
    }

    // 0x4EB950 | ?ForceMatrixDelta@mmViewCS@@QAEXABVVector3@@@Z
    inline void ForceMatrixDelta(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, mmViewCS, class Vector3 const&>>(0x4EB950, this, arg1);
    }

    // 0x4EB970 | ?OneShot@mmViewCS@@QAEXXZ
    inline void OneShot()
    {
        return stub<member_func_t<void, mmViewCS>>(0x4EB970, this);
    }

    // 0x4EB990 | ?DeclareFields@mmViewCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4EB990);
    }

    // 0x4EB6A0 | ??1mmViewCS@@UAE@XZ
    inline ~mmViewCS() override
    {
        stub<member_func_t<void, mmViewCS>>(0x4EB6A0, this);
    }

    // 0x4EBB00 | ?GetClass@mmViewCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmViewCS>>(0x4EBB00, this);
    }

    // 0x4EB840 | ?Update@mmViewCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmViewCS>>(0x4EB840, this);
    }

    // 0x4EB8D0 | ?Reset@mmViewCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmViewCS>>(0x4EB8D0, this);
    }
};
