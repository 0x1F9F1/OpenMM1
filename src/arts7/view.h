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
    arts7:view

    0x515420 | public: __thiscall asViewCS::asViewCS(void) | ??0asViewCS@@QAE@XZ
    0x515550 | public: void __thiscall asViewCS::SetAzimuth(void) | ?SetAzimuth@asViewCS@@QAEXXZ
    0x5155B0 | public: virtual void __thiscall asViewCS::Reset(void) | ?Reset@asViewCS@@UAEXXZ
    0x515780 | public: virtual void __thiscall asViewCS::Update(void) | ?Update@asViewCS@@UAEXXZ
    0x515800 | public: void __thiscall asViewCS::UpdatePolar(void) | ?UpdatePolar@asViewCS@@QAEXXZ
    0x515940 | public: void __thiscall asViewCS::UpdateRoam(void) | ?UpdateRoam@asViewCS@@QAEXXZ
    0x515A50 | public: void __thiscall asViewCS::UpdatePOV(void) | ?UpdatePOV@asViewCS@@QAEXXZ
    0x515AA0 | public: void __thiscall asViewCS::UpdateLookAt(void) | ?UpdateLookAt@asViewCS@@QAEXXZ
    0x515B00 | public: void __thiscall asViewCS::UpdateTrack(void) | ?UpdateTrack@asViewCS@@QAEXXZ
    0x515EC0 | public: void __thiscall asViewCS::UpdateStereo(void) | ?UpdateStereo@asViewCS@@QAEXXZ
    0x515FF0 | public: void __thiscall asViewCS::FileIO(class MiniParser *) | ?FileIO@asViewCS@@QAEXPAVMiniParser@@@Z
    0x516000 | public: void __thiscall asViewCS::AddWidgets(class Bank *) | ?AddWidgets@asViewCS@@QAEXPAVBank@@@Z
    0x516010 | public: static void __cdecl asViewCS::DeclareFields(void) | ?DeclareFields@asViewCS@@SAXXZ
    0x516180 | public: virtual class MetaClass * __thiscall asViewCS::GetClass(void) | ?GetClass@asViewCS@@UAEPAVMetaClass@@XZ
    0x516190 | public: virtual void * __thiscall asViewCS::`vector deleting destructor'(unsigned int) | ??_EasViewCS@@UAEPAXI@Z
    0x5161F0 | public: virtual __thiscall asViewCS::~asViewCS(void) | ??1asViewCS@@UAE@XZ
    0x595598 | const asViewCS::`vftable' | ??_7asViewCS@@6B@
    0x6F2C68 | class MetaClass asViewCSMetaClass | ?asViewCSMetaClass@@3VMetaClass@@A
    0x516060 | void * __cdecl new_asViewCS(int) | ?new_asViewCS@@YAPAXH@Z
    0x516130 | void __cdecl delete_asViewCS(void *,int) | ?delete_asViewCS@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x6F2C68 | ?asViewCSMetaClass@@3VMetaClass@@A
inline extern_var(0x6F2C68, class MetaClass, asViewCSMetaClass);

// 0x516060 | ?new_asViewCS@@YAPAXH@Z
inline void* new_asViewCS(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x516060, arg1);
}

// 0x516130 | ?delete_asViewCS@@YAXPAXH@Z
inline void delete_asViewCS(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x516130, arg1, arg2);
}

struct asViewCS : asLinearCS
{
public:
    // asViewCS::`vftable' @ 0x595598

    // 0x515420 | ??0asViewCS@@QAE@XZ
    inline asViewCS()
    {
        stub<member_func_t<void, asViewCS>>(0x515420, this);
    }

    // 0x515550 | ?SetAzimuth@asViewCS@@QAEXXZ
    inline void SetAzimuth()
    {
        return stub<member_func_t<void, asViewCS>>(0x515550, this);
    }

    // 0x515800 | ?UpdatePolar@asViewCS@@QAEXXZ
    inline void UpdatePolar()
    {
        return stub<member_func_t<void, asViewCS>>(0x515800, this);
    }

    // 0x515940 | ?UpdateRoam@asViewCS@@QAEXXZ
    inline void UpdateRoam()
    {
        return stub<member_func_t<void, asViewCS>>(0x515940, this);
    }

    // 0x515A50 | ?UpdatePOV@asViewCS@@QAEXXZ
    inline void UpdatePOV()
    {
        return stub<member_func_t<void, asViewCS>>(0x515A50, this);
    }

    // 0x515AA0 | ?UpdateLookAt@asViewCS@@QAEXXZ
    inline void UpdateLookAt()
    {
        return stub<member_func_t<void, asViewCS>>(0x515AA0, this);
    }

    // 0x515B00 | ?UpdateTrack@asViewCS@@QAEXXZ
    inline void UpdateTrack()
    {
        return stub<member_func_t<void, asViewCS>>(0x515B00, this);
    }

    // 0x515EC0 | ?UpdateStereo@asViewCS@@QAEXXZ
    inline void UpdateStereo()
    {
        return stub<member_func_t<void, asViewCS>>(0x515EC0, this);
    }

    // 0x515FF0 | ?FileIO@asViewCS@@QAEXPAVMiniParser@@@Z
    inline void FileIO(class MiniParser* arg1)
    {
        return stub<member_func_t<void, asViewCS, class MiniParser*>>(0x515FF0, this, arg1);
    }

    // 0x516000 | ?AddWidgets@asViewCS@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, asViewCS, class Bank*>>(0x516000, this, arg1);
    }

    // 0x516010 | ?DeclareFields@asViewCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x516010);
    }

    // 0x5161F0 | ??1asViewCS@@UAE@XZ
    inline ~asViewCS() override
    {
        stub<member_func_t<void, asViewCS>>(0x5161F0, this);
    }

    // 0x516180 | ?GetClass@asViewCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asViewCS>>(0x516180, this);
    }

    // 0x515780 | ?Update@asViewCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asViewCS>>(0x515780, this);
    }

    // 0x5155B0 | ?Reset@asViewCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, asViewCS>>(0x5155B0, this);
    }
};
