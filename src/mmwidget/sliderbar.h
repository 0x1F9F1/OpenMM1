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
    mmwidget:sliderbar

    0x4B35E0 | public: __thiscall mmSlider::mmSlider(void) | ??0mmSlider@@QAE@XZ
    0x4B3670 | public: virtual __thiscall mmSlider::~mmSlider(void) | ??1mmSlider@@UAE@XZ
    0x4B3710 | public: void __thiscall mmSlider::Init(char *,class uiWidget *,float,float,float,float,int,float,float,int,int) | ?Init@mmSlider@@QAEXPADPAVuiWidget@@MMMMHMMHH@Z
    0x4B3770 | public: void __thiscall mmSlider::LoadBitmap(char *) | ?LoadBitmap@mmSlider@@QAEXPAD@Z
    0x4B3920 | public: void __thiscall mmSlider::SetReadWrite(int) | ?SetReadWrite@mmSlider@@QAEXH@Z
    0x4B3940 | public: int __thiscall mmSlider::IsReadWrite(void) | ?IsReadWrite@mmSlider@@QAEHXZ
    0x4B3950 | public: float __thiscall mmSlider::SetValue(float) | ?SetValue@mmSlider@@QAEMM@Z
    0x4B39B0 | public: float __thiscall mmSlider::GetScreenHeight(void) | ?GetScreenHeight@mmSlider@@QAEMXZ
    0x4B39E0 | public: float __thiscall mmSlider::FudgeWidth(void) | ?FudgeWidth@mmSlider@@QAEMXZ
    0x4B3A10 | public: void __thiscall mmSlider::SetPosition(float,float) | ?SetPosition@mmSlider@@QAEXMM@Z
    0x4B3A30 | public: void __thiscall mmSlider::GetSliderHotSpots(float &,float &,float &,float &,float &,float &) | ?GetSliderHotSpots@mmSlider@@QAEXAAM00000@Z
    0x4B3B00 | public: void __thiscall mmSlider::UpdatePosition(void) | ?UpdatePosition@mmSlider@@QAEXXZ
    0x4B3B30 | public: float __thiscall mmSlider::Inc(void) | ?Inc@mmSlider@@QAEMXZ
    0x4B3B50 | public: float __thiscall mmSlider::Dec(void) | ?Dec@mmSlider@@QAEMXZ
    0x4B3B70 | public: void __thiscall mmSlider::SetStep(float) | ?SetStep@mmSlider@@QAEXM@Z
    0x4B3BF0 | public: void __thiscall mmSlider::SetRange(float,float) | ?SetRange@mmSlider@@QAEXMM@Z
    0x4B3C60 | public: virtual void __thiscall mmSlider::Update(void) | ?Update@mmSlider@@UAEXXZ
    0x4B3C80 | public: virtual void __thiscall mmSlider::Cull(void) | ?Cull@mmSlider@@UAEXXZ
    0x4B3E40 | public: static void __cdecl mmSlider::DeclareFields(void) | ?DeclareFields@mmSlider@@SAXXZ
    0x4B3FB0 | public: virtual class MetaClass * __thiscall mmSlider::GetClass(void) | ?GetClass@mmSlider@@UAEPAVMetaClass@@XZ
    0x4B3FC0 | public: virtual void * __thiscall mmSlider::`vector deleting destructor'(unsigned int) | ??_EmmSlider@@UAEPAXI@Z
    0x593D88 | const mmSlider::`vftable' | ??_7mmSlider@@6B@
    0x667FC8 | class MetaClass mmSliderMetaClass | ?mmSliderMetaClass@@3VMetaClass@@A
    0x4B3E90 | void * __cdecl new_mmSlider(int) | ?new_mmSlider@@YAPAXH@Z
    0x4B3F60 | void __cdecl delete_mmSlider(void *,int) | ?delete_mmSlider@@YAXPAXH@Z
*/

// 0x667FC8 | ?mmSliderMetaClass@@3VMetaClass@@A
inline extern_var(0x667FC8, class MetaClass, mmSliderMetaClass);

// 0x4B3E90 | ?new_mmSlider@@YAPAXH@Z
inline void* new_mmSlider(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4B3E90, arg1);
}

// 0x4B3F60 | ?delete_mmSlider@@YAXPAXH@Z
inline void delete_mmSlider(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4B3F60, arg1, arg2);
}

struct mmSlider : asNode
{
public:
    // mmSlider::`vftable' @ 0x593D88

    // 0x4B35E0 | ??0mmSlider@@QAE@XZ
    inline mmSlider()
    {
        // stub<member_func_t<void, mmSlider>>(0x4B35E0, this);

        unimplemented();
    }

    // 0x4B3710 | ?Init@mmSlider@@QAEXPADPAVuiWidget@@MMMMHMMHH@Z
    inline void Init(char* arg1, class uiWidget* arg2, float arg3, float arg4, float arg5, float arg6, int32_t arg7,
        float arg8, float arg9, int32_t arg10, int32_t arg11)
    {
        return stub<member_func_t<void, mmSlider, char*, class uiWidget*, float, float, float, float, int32_t, float,
            float, int32_t, int32_t>>(
            0x4B3710, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x4B3770 | ?LoadBitmap@mmSlider@@QAEXPAD@Z
    inline void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, mmSlider, char*>>(0x4B3770, this, arg1);
    }

    // 0x4B3920 | ?SetReadWrite@mmSlider@@QAEXH@Z
    inline void SetReadWrite(int32_t arg1)
    {
        return stub<member_func_t<void, mmSlider, int32_t>>(0x4B3920, this, arg1);
    }

    // 0x4B3940 | ?IsReadWrite@mmSlider@@QAEHXZ
    inline int32_t IsReadWrite()
    {
        return stub<member_func_t<int32_t, mmSlider>>(0x4B3940, this);
    }

    // 0x4B3950 | ?SetValue@mmSlider@@QAEMM@Z
    inline float SetValue(float arg1)
    {
        return stub<member_func_t<float, mmSlider, float>>(0x4B3950, this, arg1);
    }

    // 0x4B39B0 | ?GetScreenHeight@mmSlider@@QAEMXZ
    inline float GetScreenHeight()
    {
        return stub<member_func_t<float, mmSlider>>(0x4B39B0, this);
    }

    // 0x4B39E0 | ?FudgeWidth@mmSlider@@QAEMXZ
    inline float FudgeWidth()
    {
        return stub<member_func_t<float, mmSlider>>(0x4B39E0, this);
    }

    // 0x4B3A10 | ?SetPosition@mmSlider@@QAEXMM@Z
    inline void SetPosition(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmSlider, float, float>>(0x4B3A10, this, arg1, arg2);
    }

    // 0x4B3A30 | ?GetSliderHotSpots@mmSlider@@QAEXAAM00000@Z
    inline void GetSliderHotSpots(float& arg1, float& arg2, float& arg3, float& arg4, float& arg5, float& arg6)
    {
        return stub<member_func_t<void, mmSlider, float&, float&, float&, float&, float&, float&>>(
            0x4B3A30, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4B3B00 | ?UpdatePosition@mmSlider@@QAEXXZ
    inline void UpdatePosition()
    {
        return stub<member_func_t<void, mmSlider>>(0x4B3B00, this);
    }

    // 0x4B3B30 | ?Inc@mmSlider@@QAEMXZ
    inline float Inc()
    {
        return stub<member_func_t<float, mmSlider>>(0x4B3B30, this);
    }

    // 0x4B3B50 | ?Dec@mmSlider@@QAEMXZ
    inline float Dec()
    {
        return stub<member_func_t<float, mmSlider>>(0x4B3B50, this);
    }

    // 0x4B3B70 | ?SetStep@mmSlider@@QAEXM@Z
    inline void SetStep(float arg1)
    {
        return stub<member_func_t<void, mmSlider, float>>(0x4B3B70, this, arg1);
    }

    // 0x4B3BF0 | ?SetRange@mmSlider@@QAEXMM@Z
    inline void SetRange(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmSlider, float, float>>(0x4B3BF0, this, arg1, arg2);
    }

    // 0x4B3E40 | ?DeclareFields@mmSlider@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4B3E40);
    }

    // 0x4B3670 | ??1mmSlider@@UAE@XZ
    inline ~mmSlider() override = 0
    {
        // stub<member_func_t<void, mmSlider>>(0x4B3670, this);

        unimplemented();
    }

    // 0x4B3FB0 | ?GetClass@mmSlider@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmSlider>>(0x4B3FB0, this);
    }

    // 0x4B3C80 | ?Cull@mmSlider@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmSlider>>(0x4B3C80, this);
    }

    // 0x4B3C60 | ?Update@mmSlider@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmSlider>>(0x4B3C60, this);
    }
};
