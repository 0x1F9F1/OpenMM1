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
    mmwidget:bm_button

    0x4AB380 | public: __thiscall UIBMButton::UIBMButton(void) | ??0UIBMButton@@QAE@XZ
    0x4AB420 | public: virtual __thiscall UIBMButton::~UIBMButton(void) | ??1UIBMButton@@UAE@XZ
    0x4AB4A0 | public: void __thiscall UIBMButton::Init(char *,float,float,int,int,int *,int,int,struct LocString *,class Callback,class Callback) | ?Init@UIBMButton@@QAEXPADMMHHPAHHHPAULocString@@VCallback@@3@Z
    0x4AB730 | public: void __thiscall UIBMButton::LoadBitmap(char *) | ?LoadBitmap@UIBMButton@@QAEXPAD@Z
    0x4AB7A0 | public: int __thiscall UIBMButton::GetDiv(void) | ?GetDiv@UIBMButton@@QAEHXZ
    0x4AB7D0 | public: class agiBitmap * __thiscall UIBMButton::CreateDummyBitmap(void) | ?CreateDummyBitmap@UIBMButton@@QAEPAVagiBitmap@@XZ
    0x4AB830 | private: void __thiscall UIBMButton::GetSize(void) | ?GetSize@UIBMButton@@AAEXXZ
    0x4AB860 | public: virtual void __thiscall UIBMButton::SetPosition(float,float) | ?SetPosition@UIBMButton@@UAEXMM@Z
    0x4AB9D0 | public: void __thiscall UIBMButton::GetHitArea(float &,float &) | ?GetHitArea@UIBMButton@@QAEXAAM0@Z
    0x4ABA30 | public: void __thiscall UIBMButton::DoToggle(void) | ?DoToggle@UIBMButton@@QAEXXZ
    0x4ABAF0 | public: void __thiscall UIBMButton::Kill(void) | ?Kill@UIBMButton@@QAEXXZ
    0x4ABB10 | public: void __thiscall UIBMButton::Unkill(void) | ?Unkill@UIBMButton@@QAEXXZ
    0x4ABB50 | public: virtual void __thiscall UIBMButton::Switch(int) | ?Switch@UIBMButton@@UAEXH@Z
    0x4ABC80 | public: virtual void __thiscall UIBMButton::Action(union eqEvent) | ?Action@UIBMButton@@UAEXTeqEvent@@@Z
    0x4ABD30 | public: void __thiscall UIBMButton::MexOff(void) | ?MexOff@UIBMButton@@QAEXXZ
    0x4ABD40 | public: void __thiscall UIBMButton::MexOn(void) | ?MexOn@UIBMButton@@QAEXXZ
    0x4ABD80 | public: void __thiscall UIBMButton::MexToggle(void) | ?MexToggle@UIBMButton@@QAEXXZ
    0x4ABDB0 | public: virtual void __thiscall UIBMButton::Update(void) | ?Update@UIBMButton@@UAEXXZ
    0x4ABF40 | public: virtual char * __thiscall UIBMButton::ReturnDescription(void) | ?ReturnDescription@UIBMButton@@UAEPADXZ
    0x4ABFF0 | public: virtual float __thiscall UIBMButton::GetScreenHeight(void) | ?GetScreenHeight@UIBMButton@@UAEMXZ
    0x4AC000 | public: virtual void __thiscall UIBMButton::Cull(void) | ?Cull@UIBMButton@@UAEXXZ
    0x4AC1B0 | private: static void __cdecl UIBMButton::AllocateSounds(void) | ?AllocateSounds@UIBMButton@@CAXXZ
    0x4AC3A0 | private: void __thiscall UIBMButton::PlaySound(void) | ?PlaySound@UIBMButton@@AAEXXZ
    0x4AC3D0 | public: static void __cdecl UIBMButton::DeclareFields(void) | ?DeclareFields@UIBMButton@@SAXXZ
    0x4AC540 | public: virtual class MetaClass * __thiscall UIBMButton::GetClass(void) | ?GetClass@UIBMButton@@UAEPAVMetaClass@@XZ
    0x4AC550 | public: virtual void __thiscall UIBMButton::Enable(void) | ?Enable@UIBMButton@@UAEXXZ
    0x4AC570 | public: virtual void __thiscall UIBMButton::Disable(void) | ?Disable@UIBMButton@@UAEXXZ
    0x4AC590 | public: virtual void * __thiscall UIBMButton::`vector deleting destructor'(unsigned int) | ??_EUIBMButton@@UAEPAXI@Z
    0x593600 | const UIBMButton::`vftable' | ??_7UIBMButton@@6B@
    0x667D00 | class MetaClass UIBMButtonMetaClass | ?UIBMButtonMetaClass@@3VMetaClass@@A
    0x667D38 | private: static class AudSound * UIBMButton::s_pSound | ?s_pSound@UIBMButton@@0PAVAudSound@@A
    0x4AC420 | void * __cdecl new_UIBMButton(int) | ?new_UIBMButton@@YAPAXH@Z
    0x4AC4F0 | void __cdecl delete_UIBMButton(void *,int) | ?delete_UIBMButton@@YAXPAXH@Z
*/

// 0x667D00 | ?UIBMButtonMetaClass@@3VMetaClass@@A
inline extern_var(0x667D00, class MetaClass, UIBMButtonMetaClass);

// 0x4AC420 | ?new_UIBMButton@@YAPAXH@Z
// 0x4AC4F0 | ?delete_UIBMButton@@YAXPAXH@Z

class UIBMButton : uiWidget
{
public:
    // UIBMButton::`vftable' @ 0x593600

    // 0x4AB380 | ??0UIBMButton@@QAE@XZ
    inline UIBMButton()
    {
        // stub<member_func_t<void, UIBMButton>>(0x4AB380, this);

        unimplemented();
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
    inline ~UIBMButton() override = 0
    {
        // stub<member_func_t<void, UIBMButton>>(0x4AB420, this);

        unimplemented();
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
