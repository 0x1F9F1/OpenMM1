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
    mmcamcs:carcamcs

    0x4ED750 | public: __thiscall CarCamCS::CarCamCS(void) | ??0CarCamCS@@QAE@XZ
    0x4ED770 | public: virtual __thiscall CarCamCS::~CarCamCS(void) | ??1CarCamCS@@UAE@XZ
    0x4ED780 | public: void __thiscall CarCamCS::Init(class mmCar *,char *) | ?Init@CarCamCS@@QAEXPAVmmCar@@PAD@Z
    0x4ED7B0 | public: static void __cdecl CarCamCS::DeclareFields(void) | ?DeclareFields@CarCamCS@@SAXXZ
    0x4ED920 | public: virtual class MetaClass * __thiscall CarCamCS::GetClass(void) | ?GetClass@CarCamCS@@UAEPAVMetaClass@@XZ
    0x4ED960 | public: virtual void * __thiscall CarCamCS::`vector deleting destructor'(unsigned int) | ??_ECarCamCS@@UAEPAXI@Z
    0x4ED9C0 | public: virtual void __thiscall BaseCamCS::MakeActive(void) | ?MakeActive@BaseCamCS@@UAEXXZ
    0x594DE0 | const CarCamCS::`vftable' | ??_7CarCamCS@@6B@
    0x67B790 | class MetaClass CarCamCSMetaClass | ?CarCamCSMetaClass@@3VMetaClass@@A
    0x4ED800 | void * __cdecl new_CarCamCS(int) | ?new_CarCamCS@@YAPAXH@Z
    0x4ED8D0 | void __cdecl delete_CarCamCS(void *,int) | ?delete_CarCamCS@@YAXPAXH@Z
*/

// 0x67B790 | ?CarCamCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B790, class MetaClass, CarCamCSMetaClass);

// 0x4ED800 | ?new_CarCamCS@@YAPAXH@Z
// 0x4ED8D0 | ?delete_CarCamCS@@YAXPAXH@Z

class CarCamCS : AppCamCS
{
public:
    // CarCamCS::`vftable' @ 0x594DE0

    // 0x4ED750 | ??0CarCamCS@@QAE@XZ
    inline CarCamCS()
    {
        // stub<member_func_t<void, CarCamCS>>(0x4ED750, this);

        unimplemented();
    }

    // 0x4ED780 | ?Init@CarCamCS@@QAEXPAVmmCar@@PAD@Z
    inline void Init(class mmCar* arg1, char* arg2)
    {
        return stub<member_func_t<void, CarCamCS, class mmCar*, char*>>(0x4ED780, this, arg1, arg2);
    }

    // 0x4ED7B0 | ?DeclareFields@CarCamCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4ED7B0);
    }

    // 0x4ED770 | ??1CarCamCS@@UAE@XZ
    inline ~CarCamCS() override = 0
    {
        // stub<member_func_t<void, CarCamCS>>(0x4ED770, this);

        unimplemented();
    }

    // 0x4ED920 | ?GetClass@CarCamCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, CarCamCS>>(0x4ED920, this);
    }
};
