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
    arts7:form

    0x5142F0 | public: __thiscall asForm::asForm(void) | ??0asForm@@QAE@XZ
    0x514310 | public: virtual __thiscall asForm::~asForm(void) | ??1asForm@@UAE@XZ
    0x514370 | public: void __thiscall asForm::SetDLP(class DLP *) | ?SetDLP@asForm@@QAEXPAVDLP@@@Z
    0x5143A0 | public: void __thiscall asForm::SetShape(char *,char *,class Vector3 *,int,int) | ?SetShape@asForm@@QAEXPAD0PAVVector3@@HH@Z
    0x5143F0 | public: void __thiscall asForm::SetCull(int,float) | ?SetCull@asForm@@QAEXHM@Z
    0x514410 | public: virtual void __thiscall asForm::Update(void) | ?Update@asForm@@UAEXXZ
    0x514440 | public: virtual void __thiscall asForm::Cull(void) | ?Cull@asForm@@UAEXXZ
    0x5144D0 | public: int __thiscall asForm::Visible(class asCamera *,class Matrix34 const &) const | ?Visible@asForm@@QBEHPAVasCamera@@ABVMatrix34@@@Z
    0x514690 | public: class Vector3 __thiscall asForm::GetBoundMin(void) | ?GetBoundMin@asForm@@QAE?AVVector3@@XZ
    0x5146E0 | public: class Vector3 __thiscall asForm::GetBoundMax(void) | ?GetBoundMax@asForm@@QAE?AVVector3@@XZ
    0x514730 | public: class Vector4 __thiscall asForm::GetBoundSphere(void) | ?GetBoundSphere@asForm@@QAE?AVVector4@@XZ
    0x514790 | public: void __thiscall asForm::FileIO(class MiniParser *) | ?FileIO@asForm@@QAEXPAVMiniParser@@@Z
    0x5147A0 | public: void __thiscall asForm::AddWidgets(class Bank *) | ?AddWidgets@asForm@@QAEXPAVBank@@@Z
    0x5147B0 | public: static void __cdecl asForm::DeclareFields(void) | ?DeclareFields@asForm@@SAXXZ
    0x514910 | public: virtual class MetaClass * __thiscall asForm::GetClass(void) | ?GetClass@asForm@@UAEPAVMetaClass@@XZ
    0x514920 | public: virtual void * __thiscall asForm::`vector deleting destructor'(unsigned int) | ??_EasForm@@UAEPAXI@Z
    0x595520 | const asForm::`vftable' | ??_7asForm@@6B@
    0x6F2C18 | class MetaClass asFormMetaClass | ?asFormMetaClass@@3VMetaClass@@A
    0x514800 | void * __cdecl new_asForm(int) | ?new_asForm@@YAPAXH@Z
    0x5148C0 | void __cdecl delete_asForm(void *,int) | ?delete_asForm@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x6F2C18 | ?asFormMetaClass@@3VMetaClass@@A
inline extern_var(0x6F2C18, class MetaClass, asFormMetaClass);

// 0x514800 | ?new_asForm@@YAPAXH@Z
inline void* new_asForm(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x514800, arg1);
}

// 0x5148C0 | ?delete_asForm@@YAXPAXH@Z
inline void delete_asForm(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x5148C0, arg1, arg2);
}

struct asForm : asNode
{
public:
    // asForm::`vftable' @ 0x595520

    // 0x5142F0 | ??0asForm@@QAE@XZ
    inline asForm()
    {
        // stub<member_func_t<void, asForm>>(0x5142F0, this);

        unimplemented();
    }

    // 0x514370 | ?SetDLP@asForm@@QAEXPAVDLP@@@Z
    inline void SetDLP(class DLP* arg1)
    {
        return stub<member_func_t<void, asForm, class DLP*>>(0x514370, this, arg1);
    }

    // 0x5143A0 | ?SetShape@asForm@@QAEXPAD0PAVVector3@@HH@Z
    inline void SetShape(char* arg1, char* arg2, class Vector3* arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<void, asForm, char*, char*, class Vector3*, int32_t, int32_t>>(
            0x5143A0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5143F0 | ?SetCull@asForm@@QAEXHM@Z
    inline void SetCull(int32_t arg1, float arg2)
    {
        return stub<member_func_t<void, asForm, int32_t, float>>(0x5143F0, this, arg1, arg2);
    }

    // 0x5144D0 | ?Visible@asForm@@QBEHPAVasCamera@@ABVMatrix34@@@Z
    inline int32_t Visible(class asCamera* arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<int32_t, asForm, class asCamera*, class Matrix34 const&>>(0x5144D0, this, arg1, arg2);
    }

    // 0x514690 | ?GetBoundMin@asForm@@QAE?AVVector3@@XZ
    inline class Vector3 GetBoundMin()
    {
        return stub<member_func_t<class Vector3, asForm>>(0x514690, this);
    }

    // 0x5146E0 | ?GetBoundMax@asForm@@QAE?AVVector3@@XZ
    inline class Vector3 GetBoundMax()
    {
        return stub<member_func_t<class Vector3, asForm>>(0x5146E0, this);
    }

    // 0x514730 | ?GetBoundSphere@asForm@@QAE?AVVector4@@XZ
    inline class Vector4 GetBoundSphere()
    {
        return stub<member_func_t<class Vector4, asForm>>(0x514730, this);
    }

    // 0x514790 | ?FileIO@asForm@@QAEXPAVMiniParser@@@Z
    inline void FileIO(class MiniParser* arg1)
    {
        return stub<member_func_t<void, asForm, class MiniParser*>>(0x514790, this, arg1);
    }

    // 0x5147A0 | ?AddWidgets@asForm@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, asForm, class Bank*>>(0x5147A0, this, arg1);
    }

    // 0x5147B0 | ?DeclareFields@asForm@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x5147B0);
    }

    // 0x514310 | ??1asForm@@UAE@XZ
    inline ~asForm() override = 0
    {
        // stub<member_func_t<void, asForm>>(0x514310, this);

        unimplemented();
    }

    // 0x514910 | ?GetClass@asForm@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asForm>>(0x514910, this);
    }

    // 0x514440 | ?Cull@asForm@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, asForm>>(0x514440, this);
    }

    // 0x514410 | ?Update@asForm@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asForm>>(0x514410, this);
    }
};
