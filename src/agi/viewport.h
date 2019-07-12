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
    agi:viewport

    0x5392D0 | public: __thiscall agiViewParameters::agiViewParameters(void) | ??0agiViewParameters@@QAE@XZ
    0x539340 | public: void __thiscall agiViewParameters::Perspective(float,float,float,float) | ?Perspective@agiViewParameters@@QAEXMMMM@Z
    0x539410 | public: void __thiscall agiViewParameters::Ortho(float,float,float,float) | ?Ortho@agiViewParameters@@QAEXMMMM@Z
    0x5394B0 | public: void __thiscall agiViewParameters::Frustum(float,float,float,float,float,float) | ?Frustum@agiViewParameters@@QAEXMMMMMM@Z
    0x539590 | public: int __thiscall agiViewParameters::SphereVisible(class Vector3 &,float) | ?SphereVisible@agiViewParameters@@QAEHAAVVector3@@M@Z
    0x539690 | public: void __thiscall agiViewParameters::SetBill(class Vector3 &) | ?SetBill@agiViewParameters@@QAEXAAVVector3@@@Z
    0x5397D0 | public: void __thiscall agiViewParameters::SetBillY(class Matrix34 &) | ?SetBillY@agiViewParameters@@QAEXAAVMatrix34@@@Z
    0x539970 | public: float __thiscall agiViewport::Aspect(void) | ?Aspect@agiViewport@@QAEMXZ
    0x5399A0 | public: virtual void __thiscall agiViewport::SetWorld(class Matrix34 &) | ?SetWorld@agiViewport@@UAEXAAVMatrix34@@@Z
    0x5399E0 | protected: __thiscall agiViewport::agiViewport(class agiPipeline *) | ??0agiViewport@@IAE@PAVagiPipeline@@@Z
    0x539A40 | protected: virtual __thiscall agiViewport::~agiViewport(void) | ??1agiViewport@@MAE@XZ
    0x539A60 | public: void __thiscall agiViewParameters::Project(class Vector3 &,class Vector3 &) | ?Project@agiViewParameters@@QAEXAAVVector3@@0@Z
    0x539AD0 | public: virtual char * __thiscall agiViewport::GetName(void) | ?GetName@agiViewport@@UAEPADXZ
    0x539AF0 | protected: virtual void * __thiscall agiViewport::`scalar deleting destructor'(unsigned int) | ??_GagiViewport@@MAEPAXI@Z
    0x539AF0 | protected: virtual void * __thiscall agiViewport::`vector deleting destructor'(unsigned int) | ??_EagiViewport@@MAEPAXI@Z
    0x595B70 | const agiViewport::`vftable' | ??_7agiViewport@@6B@
    0x706530 | public: static unsigned int agiViewParameters::ViewSerial | ?ViewSerial@agiViewParameters@@2IA
    0x706534 | public: static unsigned int agiViewParameters::MtxSerial | ?MtxSerial@agiViewParameters@@2IA
    0x706538 | protected: static class agiViewport * agiViewport::Active | ?Active@agiViewport@@1PAV1@A
*/

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
        // stub<member_func_t<void, agiViewport, class agiPipeline*>>(0x5399E0, this, arg1);

        unimplemented();
    }

    // 0x706538 | ?Active@agiViewport@@1PAV1@A
    static inline extern_var(0x706538, class agiViewport*, Active);

    // 0x539AD0 | ?GetName@agiViewport@@UAEPADXZ
    inline char* GetName() override
    {
        return stub<member_func_t<char*, agiViewport>>(0x539AD0, this);
    }

    // 0x539A40 | ??1agiViewport@@MAE@XZ
    inline ~agiViewport() override = 0
    {
        // stub<member_func_t<void, agiViewport>>(0x539A40, this);

        unimplemented();
    }

    // 0x567350 | __purecall
    virtual inline void Activate() = 0;

    // 0x567350 | __purecall
    virtual inline void SetBackground(class Vector3& arg1) = 0;

    // 0x567350 | __purecall
    virtual inline void Clear(int32_t arg1) = 0;

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
        // stub<member_func_t<void, agiViewParameters>>(0x5392D0, this);

        unimplemented();
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
