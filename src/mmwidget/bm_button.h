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

// mmwidget:bm_button

#include "hooking.h"

// 0x667D00 | ?UIBMButtonMetaClass@@3VMetaClass@@A
inline extern_var(0x667D00, class MetaClass, UIBMButtonMetaClass);

// 0x4AC420 | ?new_UIBMButton@@YAPAXH@Z
inline void* new_UIBMButton(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4AC420, arg1);
}

// 0x4AC4F0 | ?delete_UIBMButton@@YAXPAXH@Z
inline void delete_UIBMButton(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4AC4F0, arg1, arg2);
}

class UIBMButton : uiWidget
{
public:
    // UIBMButton::`vftable' @ 0x593600

    // 0x4AB380 | ??0UIBMButton@@QAE@XZ
    inline UIBMButton()
    {
        stub<member_func_t<void, UIBMButton>>(0x4AB380, this);
    }

    // 0x4AB4A0 | ?Init@UIBMButton@@QAEXPADMMHHPAHHHPAULocString@@VCallback@@3@Z
    inline void Init(char* arg1, float arg2, float arg3, int32_t arg4, int32_t arg5, int32_t* arg6, int32_t arg7,
        int32_t arg8, struct LocString* arg9, class Callback arg10, class Callback arg11)
    {
        return stub<member_func_t<void, UIBMButton, char*, float, float, int32_t, int32_t, int32_t*, int32_t, int32_t,
            struct LocString*, class Callback, class Callback>>(
            0x4AB4A0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x4AB730 | ?LoadBitmap@UIBMButton@@QAEXPAD@Z
    inline void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, UIBMButton, char*>>(0x4AB730, this, arg1);
    }

    // 0x4AB7A0 | ?GetDiv@UIBMButton@@QAEHXZ
    inline int32_t GetDiv()
    {
        return stub<member_func_t<int32_t, UIBMButton>>(0x4AB7A0, this);
    }

    // 0x4AB7D0 | ?CreateDummyBitmap@UIBMButton@@QAEPAVagiBitmap@@XZ
    inline class agiBitmap* CreateDummyBitmap()
    {
        return stub<member_func_t<class agiBitmap*, UIBMButton>>(0x4AB7D0, this);
    }

    // 0x4AB830 | ?GetSize@UIBMButton@@AAEXXZ
    inline void GetSize()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4AB830, this);
    }

    // 0x4AB9D0 | ?GetHitArea@UIBMButton@@QAEXAAM0@Z
    inline void GetHitArea(float& arg1, float& arg2)
    {
        return stub<member_func_t<void, UIBMButton, float&, float&>>(0x4AB9D0, this, arg1, arg2);
    }

    // 0x4ABA30 | ?DoToggle@UIBMButton@@QAEXXZ
    inline void DoToggle()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4ABA30, this);
    }

    // 0x4ABAF0 | ?Kill@UIBMButton@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4ABAF0, this);
    }

    // 0x4ABB10 | ?Unkill@UIBMButton@@QAEXXZ
    inline void Unkill()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4ABB10, this);
    }

    // 0x4ABD30 | ?MexOff@UIBMButton@@QAEXXZ
    inline void MexOff()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4ABD30, this);
    }

    // 0x4ABD40 | ?MexOn@UIBMButton@@QAEXXZ
    inline void MexOn()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4ABD40, this);
    }

    // 0x4ABD80 | ?MexToggle@UIBMButton@@QAEXXZ
    inline void MexToggle()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4ABD80, this);
    }

    // 0x4AC1B0 | ?AllocateSounds@UIBMButton@@CAXXZ
    static inline void AllocateSounds()
    {
        return stub<cdecl_t<void>>(0x4AC1B0);
    }

    // 0x4AC3A0 | ?PlaySound@UIBMButton@@AAEXXZ
    inline void PlaySound()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4AC3A0, this);
    }

    // 0x4AC3D0 | ?DeclareFields@UIBMButton@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4AC3D0);
    }

    // 0x667D38 | ?s_pSound@UIBMButton@@0PAVAudSound@@A
    static inline extern_var(0x667D38, class AudSound*, s_pSound);

    // 0x4AB420 | ??1UIBMButton@@UAE@XZ
    inline ~UIBMButton() override
    {
        stub<member_func_t<void, UIBMButton>>(0x4AB420, this);
    }

    // 0x4AC540 | ?GetClass@UIBMButton@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, UIBMButton>>(0x4AC540, this);
    }

    // 0x4AC000 | ?Cull@UIBMButton@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, UIBMButton>>(0x4AC000, this);
    }

    // 0x4ABDB0 | ?Update@UIBMButton@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIBMButton>>(0x4ABDB0, this);
    }

    // 0x4AC570 | ?Disable@UIBMButton@@UAEXXZ
    inline void Disable() override
    {
        return stub<member_func_t<void, UIBMButton>>(0x4AC570, this);
    }

    // 0x4AC550 | ?Enable@UIBMButton@@UAEXXZ
    inline void Enable() override
    {
        return stub<member_func_t<void, UIBMButton>>(0x4AC550, this);
    }

    // 0x4ABC80 | ?Action@UIBMButton@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UIBMButton, union eqEvent>>(0x4ABC80, this, arg1);
    }

    // 0x4ABB50 | ?Switch@UIBMButton@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UIBMButton, int32_t>>(0x4ABB50, this, arg1);
    }

    // 0x4ABF40 | ?ReturnDescription@UIBMButton@@UAEPADXZ
    inline char* ReturnDescription() override
    {
        return stub<member_func_t<char*, UIBMButton>>(0x4ABF40, this);
    }

    // 0x4AB860 | ?SetPosition@UIBMButton@@UAEXMM@Z
    inline void SetPosition(float arg1, float arg2) override
    {
        return stub<member_func_t<void, UIBMButton, float, float>>(0x4AB860, this, arg1, arg2);
    }

    // 0x4ABFF0 | ?GetScreenHeight@UIBMButton@@UAEMXZ
    inline float GetScreenHeight() override
    {
        return stub<member_func_t<float, UIBMButton>>(0x4ABFF0, this);
    }
};
