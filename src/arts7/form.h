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

// arts7:form

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
        stub<member_func_t<void, asForm>>(0x5142F0, this);
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
    inline ~asForm() override
    {
        stub<member_func_t<void, asForm>>(0x514310, this);
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
