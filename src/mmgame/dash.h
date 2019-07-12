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
    mmgame:dash

    0x42E410 | public: __thiscall mmDashView::mmDashView(void) | ??0mmDashView@@QAE@XZ
    0x42E5B0 | public: virtual __thiscall mmDashView::~mmDashView(void) | ??1mmDashView@@UAE@XZ
    0x42E6C0 | public: void __thiscall mmDashView::Init(char *,class mmPlayer *) | ?Init@mmDashView@@QAEXPADPAVmmPlayer@@@Z
    0x42EA50 | public: virtual void __thiscall mmDashView::Reset(void) | ?Reset@mmDashView@@UAEXXZ
    0x42EA60 | public: virtual void __thiscall mmDashView::BeforeSave(void) | ?BeforeSave@mmDashView@@UAEXXZ
    0x42EB00 | public: virtual void __thiscall mmDashView::AfterLoad(void) | ?AfterLoad@mmDashView@@UAEXXZ
    0x42EBA0 | public: void __thiscall mmDashView::ActivateUntilTransitionIsOver(void) | ?ActivateUntilTransitionIsOver@mmDashView@@QAEXXZ
    0x42EBC0 | public: void __thiscall mmDashView::Activate(void) | ?Activate@mmDashView@@QAEXXZ
    0x42EBE0 | public: void __thiscall mmDashView::Deactivate(void) | ?Deactivate@mmDashView@@QAEXXZ
    0x42EC00 | public: void __thiscall mmDashView::TempDeactivate(void) | ?TempDeactivate@mmDashView@@QAEXXZ
    0x42EC10 | public: virtual void __thiscall mmDashView::Update(void) | ?Update@mmDashView@@UAEXXZ
    0x42ED40 | public: virtual void __thiscall mmDashView::Cull(void) | ?Cull@mmDashView@@UAEXXZ
    0x42EF40 | public: __thiscall mmExternalView::mmExternalView(void) | ??0mmExternalView@@QAE@XZ
    0x42EFC0 | public: void __thiscall mmExternalView::Init(class mmPlayer *) | ?Init@mmExternalView@@QAEXPAVmmPlayer@@@Z
    0x42F000 | public: virtual void __thiscall mmExternalView::ResChange(int,int) | ?ResChange@mmExternalView@@UAEXHH@Z
    0x42F150 | public: virtual void __thiscall mmExternalView::Reset(void) | ?Reset@mmExternalView@@UAEXXZ
    0x42F160 | public: virtual void __thiscall mmExternalView::Update(void) | ?Update@mmExternalView@@UAEXXZ
    0x42F180 | public: void __thiscall mmExternalView::WideFOV(int) | ?WideFOV@mmExternalView@@QAEXH@Z
    0x42F190 | public: virtual void __thiscall mmExternalView::Cull(void) | ?Cull@mmExternalView@@UAEXXZ
    0x42F330 | public: static void __cdecl mmDashView::DeclareFields(void) | ?DeclareFields@mmDashView@@SAXXZ
    0x42F620 | public: virtual class MetaClass * __thiscall mmDashView::GetClass(void) | ?GetClass@mmDashView@@UAEPAVMetaClass@@XZ
    0x42F660 | public: virtual __thiscall RadialGauge::~RadialGauge(void) | ??1RadialGauge@@UAE@XZ
    0x42F6B0 | public: virtual void * __thiscall mmExternalView::`vector deleting destructor'(unsigned int) | ??_EmmExternalView@@UAEPAXI@Z
    0x42F6B0 | public: virtual void * __thiscall mmExternalView::`scalar deleting destructor'(unsigned int) | ??_GmmExternalView@@UAEPAXI@Z
    0x42F6E0 | public: virtual void * __thiscall mmDashView::`vector deleting destructor'(unsigned int) | ??_EmmDashView@@UAEPAXI@Z
    0x590290 | const mmDashView::`vftable' | ??_7mmDashView@@6B@
    0x5902C0 | const mmExternalView::`vftable' | ??_7mmExternalView@@6B@
    0x5A6AAC | float MAX_SPEED | ?MAX_SPEED@@3MA
    0x609B60 | class MetaClass mmDashViewMetaClass | ?mmDashViewMetaClass@@3VMetaClass@@A
    0x42F500 | void * __cdecl new_mmDashView(int) | ?new_mmDashView@@YAPAXH@Z
    0x42F5D0 | void __cdecl delete_mmDashView(void *,int) | ?delete_mmDashView@@YAXPAXH@Z
*/

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
        // stub<member_func_t<void, mmExternalView>>(0x42EF40, this);

        unimplemented();
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
    inline ~mmExternalView() override = 0
    {
        // stub<member_func_t<void, mmExternalView>>(0x425980, this);

        unimplemented();
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
        // stub<member_func_t<void, mmDashView>>(0x42E410, this);

        unimplemented();
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
    inline ~mmDashView() override = 0
    {
        // stub<member_func_t<void, mmDashView>>(0x42E5B0, this);

        unimplemented();
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
