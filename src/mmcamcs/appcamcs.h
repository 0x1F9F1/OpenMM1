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
    mmcamcs:appcamcs

    0x4EE700 | public: __thiscall AppCamCS::AppCamCS(void) | ??0AppCamCS@@QAE@XZ
    0x4EE7F0 | public: virtual __thiscall AppCamCS::~AppCamCS(void) | ??1AppCamCS@@UAE@XZ
    0x4EE800 | protected: void __thiscall AppCamCS::ApproachIt(void) | ?ApproachIt@AppCamCS@@IAEXXZ
    0x4EE830 | private: void __thiscall AppCamCS::UpdateApproach(void) | ?UpdateApproach@AppCamCS@@AAEXXZ
    0x4EEDA0 | private: void __thiscall AppCamCS::UpdateMaxDist(void) | ?UpdateMaxDist@AppCamCS@@AAEXXZ
    0x4EF040 | private: int __thiscall AppCamCS::DApproach(float &,float,float,float,float &,float) | ?DApproach@AppCamCS@@AAEHAAMMMM0M@Z
    0x4EF190 | public: static void __cdecl AppCamCS::DeclareFields(void) | ?DeclareFields@AppCamCS@@SAXXZ
    0x4EF440 | public: virtual class MetaClass * __thiscall AppCamCS::GetClass(void) | ?GetClass@AppCamCS@@UAEPAVMetaClass@@XZ
    0x4EF450 | public: virtual void * __thiscall AppCamCS::`vector deleting destructor'(unsigned int) | ??_EAppCamCS@@UAEPAXI@Z
    0x594EF0 | const AppCamCS::`vftable' | ??_7AppCamCS@@6B@
    0x67B7E8 | class MetaClass AppCamCSMetaClass | ?AppCamCSMetaClass@@3VMetaClass@@A
    0x4EF320 | void * __cdecl new_AppCamCS(int) | ?new_AppCamCS@@YAPAXH@Z
    0x4EF3F0 | void __cdecl delete_AppCamCS(void *,int) | ?delete_AppCamCS@@YAXPAXH@Z
*/

// 0x67B7E8 | ?AppCamCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B7E8, class MetaClass, AppCamCSMetaClass);

// 0x4EF320 | ?new_AppCamCS@@YAPAXH@Z
// 0x4EF3F0 | ?delete_AppCamCS@@YAXPAXH@Z

struct AppCamCS : BaseCamCS
{
public:
    // AppCamCS::`vftable' @ 0x594EF0

    // 0x4EE700 | ??0AppCamCS@@QAE@XZ
    inline AppCamCS()
    {
        // stub<member_func_t<void, AppCamCS>>(0x4EE700, this);

        unimplemented();
    }

    // 0x4EE800 | ?ApproachIt@AppCamCS@@IAEXXZ
    inline void ApproachIt()
    {
        return stub<member_func_t<void, AppCamCS>>(0x4EE800, this);
    }

    // 0x4EE830 | ?UpdateApproach@AppCamCS@@AAEXXZ
    inline void UpdateApproach()
    {
        return stub<member_func_t<void, AppCamCS>>(0x4EE830, this);
    }

    // 0x4EEDA0 | ?UpdateMaxDist@AppCamCS@@AAEXXZ
    inline void UpdateMaxDist()
    {
        return stub<member_func_t<void, AppCamCS>>(0x4EEDA0, this);
    }

    // 0x4EF040 | ?DApproach@AppCamCS@@AAEHAAMMMM0M@Z
    inline int32_t DApproach(float& arg1, float arg2, float arg3, float arg4, float& arg5, float arg6)
    {
        return stub<member_func_t<int32_t, AppCamCS, float&, float, float, float, float&, float>>(
            0x4EF040, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4EF190 | ?DeclareFields@AppCamCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4EF190);
    }

    // 0x4EE7F0 | ??1AppCamCS@@UAE@XZ
    inline ~AppCamCS() override = 0
    {
        // stub<member_func_t<void, AppCamCS>>(0x4EE7F0, this);

        unimplemented();
    }

    // 0x4EF440 | ?GetClass@AppCamCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, AppCamCS>>(0x4EF440, this);
    }
};
