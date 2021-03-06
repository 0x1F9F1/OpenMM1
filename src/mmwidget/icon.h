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
    mmwidget:icon

    0x4AE8E0 | public: __thiscall UIIcon::UIIcon(void) | ??0UIIcon@@QAE@XZ
    0x4AE930 | public: virtual __thiscall UIIcon::~UIIcon(void) | ??1UIIcon@@UAE@XZ
    0x4AE940 | public: void __thiscall UIIcon::Init(char *,float,float) | ?Init@UIIcon@@QAEXPADMM@Z
    0x4AE980 | public: void __thiscall UIIcon::LoadBitmap(char *) | ?LoadBitmap@UIIcon@@QAEXPAD@Z
    0x4AE9F0 | public: class agiBitmap * __thiscall UIIcon::CreateDummyBitmap(void) | ?CreateDummyBitmap@UIIcon@@QAEPAVagiBitmap@@XZ
    0x4AEA40 | public: void __thiscall UIIcon::GetHitArea(float &,float &) | ?GetHitArea@UIIcon@@QAEXAAM0@Z
    0x4AEA70 | public: virtual void __thiscall UIIcon::Switch(int) | ?Switch@UIIcon@@UAEXH@Z
    0x4AEAB0 | public: virtual void __thiscall UIIcon::Update(void) | ?Update@UIIcon@@UAEXXZ
    0x4AEAD0 | public: virtual void __thiscall UIIcon::Cull(void) | ?Cull@UIIcon@@UAEXXZ
    0x4AEB00 | public: virtual void * __thiscall UIIcon::`scalar deleting destructor'(unsigned int) | ??_GUIIcon@@UAEPAXI@Z
    0x4AEB00 | public: virtual void * __thiscall UIIcon::`vector deleting destructor'(unsigned int) | ??_EUIIcon@@UAEPAXI@Z
    0x593870 | const UIIcon::`vftable' | ??_7UIIcon@@6B@
*/

class UIIcon : uiWidget
{
public:
    // UIIcon::`vftable' @ 0x593870

    // 0x4AE8E0 | ??0UIIcon@@QAE@XZ
    inline UIIcon()
    {
        // stub<member_func_t<void, UIIcon>>(0x4AE8E0, this);

        unimplemented();
    }

    // 0x4AE940 | ?Init@UIIcon@@QAEXPADMM@Z
    inline void Init(char* arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, UIIcon, char*, float, float>>(0x4AE940, this, arg1, arg2, arg3);
    }

    // 0x4AE980 | ?LoadBitmap@UIIcon@@QAEXPAD@Z
    inline void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, UIIcon, char*>>(0x4AE980, this, arg1);
    }

    // 0x4AE9F0 | ?CreateDummyBitmap@UIIcon@@QAEPAVagiBitmap@@XZ
    inline class agiBitmap* CreateDummyBitmap()
    {
        return stub<member_func_t<class agiBitmap*, UIIcon>>(0x4AE9F0, this);
    }

    // 0x4AEA40 | ?GetHitArea@UIIcon@@QAEXAAM0@Z
    inline void GetHitArea(float& arg1, float& arg2)
    {
        return stub<member_func_t<void, UIIcon, float&, float&>>(0x4AEA40, this, arg1, arg2);
    }

    // 0x4AE930 | ??1UIIcon@@UAE@XZ
    inline ~UIIcon() override = 0
    {
        // stub<member_func_t<void, UIIcon>>(0x4AE930, this);

        unimplemented();
    }

    // 0x4AEAD0 | ?Cull@UIIcon@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, UIIcon>>(0x4AEAD0, this);
    }

    // 0x4AEAB0 | ?Update@UIIcon@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIIcon>>(0x4AEAB0, this);
    }

    // 0x4AEA70 | ?Switch@UIIcon@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UIIcon, int32_t>>(0x4AEA70, this, arg1);
    }
};
