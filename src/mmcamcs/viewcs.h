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
    mmcamcs:viewcs

    0x4EB5E0 | public: __thiscall mmViewCS::mmViewCS(void) | ??0mmViewCS@@QAE@XZ
    0x4EB6A0 | public: virtual __thiscall mmViewCS::~mmViewCS(void) | ??1mmViewCS@@UAE@XZ
    0x4EB6B0 | public: static class mmViewCS * __cdecl mmViewCS::Instance(class asCamera *) | ?Instance@mmViewCS@@SAPAV1@PAVasCamera@@@Z
    0x4EB720 | public: void __thiscall mmViewCS::SetCurrentCam(class CarCamCS *) | ?SetCurrentCam@mmViewCS@@QAEXPAVCarCamCS@@@Z
    0x4EB790 | public: int __thiscall mmViewCS::NewCam(class CarCamCS *,int,float,class Callback) | ?NewCam@mmViewCS@@QAEHPAVCarCamCS@@HMVCallback@@@Z
    0x4EB840 | public: virtual void __thiscall mmViewCS::Update(void) | ?Update@mmViewCS@@UAEXXZ
    0x4EB870 | public: void __thiscall mmViewCS::Init(void) | ?Init@mmViewCS@@QAEXXZ
    0x4EB880 | public: void __thiscall mmViewCS::SetCamera(class asCamera *) | ?SetCamera@mmViewCS@@QAEXPAVasCamera@@@Z
    0x4EB8D0 | public: virtual void __thiscall mmViewCS::Reset(void) | ?Reset@mmViewCS@@UAEXXZ
    0x4EB930 | public: void __thiscall mmViewCS::ForceMatrixDelta(class Matrix34 const &) | ?ForceMatrixDelta@mmViewCS@@QAEXABVMatrix34@@@Z
    0x4EB950 | public: void __thiscall mmViewCS::ForceMatrixDelta(class Vector3 const &) | ?ForceMatrixDelta@mmViewCS@@QAEXABVVector3@@@Z
    0x4EB970 | public: void __thiscall mmViewCS::OneShot(void) | ?OneShot@mmViewCS@@QAEXXZ
    0x4EB990 | public: static void __cdecl mmViewCS::DeclareFields(void) | ?DeclareFields@mmViewCS@@SAXXZ
    0x4EBB00 | public: virtual class MetaClass * __thiscall mmViewCS::GetClass(void) | ?GetClass@mmViewCS@@UAEPAVMetaClass@@XZ
    0x4EBB10 | public: virtual void * __thiscall mmViewCS::`vector deleting destructor'(unsigned int) | ??_EmmViewCS@@UAEPAXI@Z
    0x594BA8 | const mmViewCS::`vftable' | ??_7mmViewCS@@6B@
    0x67B670 | class MetaClass mmViewCSMetaClass | ?mmViewCSMetaClass@@3VMetaClass@@A
    0x4EB9E0 | void * __cdecl new_mmViewCS(int) | ?new_mmViewCS@@YAPAXH@Z
    0x4EBAB0 | void __cdecl delete_mmViewCS(void *,int) | ?delete_mmViewCS@@YAXPAXH@Z
*/

// 0x67B670 | ?mmViewCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B670, class MetaClass, mmViewCSMetaClass);

// 0x4EB9E0 | ?new_mmViewCS@@YAPAXH@Z
// 0x4EBAB0 | ?delete_mmViewCS@@YAXPAXH@Z

class mmViewCS : asLinearCS
{
public:
    // mmViewCS::`vftable' @ 0x594BA8

    // 0x4EB5E0 | ??0mmViewCS@@QAE@XZ
    inline mmViewCS()
    {
        // stub<member_func_t<void, mmViewCS>>(0x4EB5E0, this);

        unimplemented();
    }

    // 0x4EB6B0 | ?Instance@mmViewCS@@SAPAV1@PAVasCamera@@@Z
    static inline class mmViewCS* Instance(class asCamera* arg1)
    {
        return stub<cdecl_t<class mmViewCS*, class asCamera*>>(0x4EB6B0, arg1);
    }

    // 0x4EB720 | ?SetCurrentCam@mmViewCS@@QAEXPAVCarCamCS@@@Z
    inline void SetCurrentCam(class CarCamCS* arg1)
    {
        return stub<member_func_t<void, mmViewCS, class CarCamCS*>>(0x4EB720, this, arg1);
    }

    // 0x4EB790 | ?NewCam@mmViewCS@@QAEHPAVCarCamCS@@HMVCallback@@@Z
    inline int32_t NewCam(class CarCamCS* arg1, int32_t arg2, float arg3, class Callback arg4)
    {
        return stub<member_func_t<int32_t, mmViewCS, class CarCamCS*, int32_t, float, class Callback>>(
            0x4EB790, this, arg1, arg2, arg3, arg4);
    }

    // 0x4EB870 | ?Init@mmViewCS@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, mmViewCS>>(0x4EB870, this);
    }

    // 0x4EB880 | ?SetCamera@mmViewCS@@QAEXPAVasCamera@@@Z
    inline void SetCamera(class asCamera* arg1)
    {
        return stub<member_func_t<void, mmViewCS, class asCamera*>>(0x4EB880, this, arg1);
    }

    // 0x4EB930 | ?ForceMatrixDelta@mmViewCS@@QAEXABVMatrix34@@@Z
    inline void ForceMatrixDelta(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, mmViewCS, class Matrix34 const&>>(0x4EB930, this, arg1);
    }

    // 0x4EB950 | ?ForceMatrixDelta@mmViewCS@@QAEXABVVector3@@@Z
    inline void ForceMatrixDelta(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, mmViewCS, class Vector3 const&>>(0x4EB950, this, arg1);
    }

    // 0x4EB970 | ?OneShot@mmViewCS@@QAEXXZ
    inline void OneShot()
    {
        return stub<member_func_t<void, mmViewCS>>(0x4EB970, this);
    }

    // 0x4EB990 | ?DeclareFields@mmViewCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4EB990);
    }

    // 0x4EB6A0 | ??1mmViewCS@@UAE@XZ
    inline ~mmViewCS() override = 0
    {
        // stub<member_func_t<void, mmViewCS>>(0x4EB6A0, this);

        unimplemented();
    }

    // 0x4EBB00 | ?GetClass@mmViewCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmViewCS>>(0x4EBB00, this);
    }

    // 0x4EB840 | ?Update@mmViewCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmViewCS>>(0x4EB840, this);
    }

    // 0x4EB8D0 | ?Reset@mmViewCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmViewCS>>(0x4EB8D0, this);
    }
};
