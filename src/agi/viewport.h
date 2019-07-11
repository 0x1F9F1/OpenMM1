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

// agi:viewport

#include "hooking.h"

class agiViewport : agiRefreshable
{
public:
    // agiViewport::`vftable' @ 0x595B70

    // 0x539970 | ?Aspect@agiViewport@@QAEMXZ
    inline float Aspect()
    {
        return stub<member_func_t<float, agiViewport>>(0x539970, this);
    }

    // 0x5399E0 | ??0agiViewport@@IAE@PAVagiPipeline@@@Z
    inline agiViewport(class agiPipeline* arg1)
    {
        stub<member_func_t<void, agiViewport, class agiPipeline*>>(0x5399E0, this, arg1);
    }

    // 0x706538 | ?Active@agiViewport@@1PAV1@A
    static inline extern_var(0x706538, class agiViewport*, Active);

    // 0x539AD0 | ?GetName@agiViewport@@UAEPADXZ
    inline char* GetName() override
    {
        return stub<member_func_t<char*, agiViewport>>(0x539AD0, this);
    }

    // 0x539A40 | ??1agiViewport@@MAE@XZ
    inline ~agiViewport() override
    {
        stub<member_func_t<void, agiViewport>>(0x539A40, this);
    }

    // 0x567350 | __purecall
    virtual inline void Activate()
    {
        return stub<member_func_t<void, agiViewport>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline void SetBackground(class Vector3& arg1)
    {
        return stub<member_func_t<void, agiViewport, class Vector3&>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline void Clear(int32_t arg1)
    {
        return stub<member_func_t<void, agiViewport, int32_t>>(0x567350, this, arg1);
    }

    // 0x5399A0 | ?SetWorld@agiViewport@@UAEXAAVMatrix34@@@Z
    virtual inline void SetWorld(class Matrix34& arg1)
    {
        return stub<member_func_t<void, agiViewport, class Matrix34&>>(0x5399A0, this, arg1);
    }
};

class agiViewParameters
{
public:
    // 0x5392D0 | ??0agiViewParameters@@QAE@XZ
    inline agiViewParameters()
    {
        stub<member_func_t<void, agiViewParameters>>(0x5392D0, this);
    }

    // 0x539340 | ?Perspective@agiViewParameters@@QAEXMMMM@Z
    inline void Perspective(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, agiViewParameters, float, float, float, float>>(
            0x539340, this, arg1, arg2, arg3, arg4);
    }

    // 0x539410 | ?Ortho@agiViewParameters@@QAEXMMMM@Z
    inline void Ortho(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, agiViewParameters, float, float, float, float>>(
            0x539410, this, arg1, arg2, arg3, arg4);
    }

    // 0x5394B0 | ?Frustum@agiViewParameters@@QAEXMMMMMM@Z
    inline void Frustum(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6)
    {
        return stub<member_func_t<void, agiViewParameters, float, float, float, float, float, float>>(
            0x5394B0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x539590 | ?SphereVisible@agiViewParameters@@QAEHAAVVector3@@M@Z
    inline int32_t SphereVisible(class Vector3& arg1, float arg2)
    {
        return stub<member_func_t<int32_t, agiViewParameters, class Vector3&, float>>(0x539590, this, arg1, arg2);
    }

    // 0x539690 | ?SetBill@agiViewParameters@@QAEXAAVVector3@@@Z
    inline void SetBill(class Vector3& arg1)
    {
        return stub<member_func_t<void, agiViewParameters, class Vector3&>>(0x539690, this, arg1);
    }

    // 0x5397D0 | ?SetBillY@agiViewParameters@@QAEXAAVMatrix34@@@Z
    inline void SetBillY(class Matrix34& arg1)
    {
        return stub<member_func_t<void, agiViewParameters, class Matrix34&>>(0x5397D0, this, arg1);
    }

    // 0x539A60 | ?Project@agiViewParameters@@QAEXAAVVector3@@0@Z
    inline void Project(class Vector3& arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, agiViewParameters, class Vector3&, class Vector3&>>(0x539A60, this, arg1, arg2);
    }

    // 0x706530 | ?ViewSerial@agiViewParameters@@2IA
    static inline extern_var(0x706530, uint32_t, ViewSerial);

    // 0x706534 | ?MtxSerial@agiViewParameters@@2IA
    static inline extern_var(0x706534, uint32_t, MtxSerial);
};
