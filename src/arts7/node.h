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

// arts7:node

#include "hooking.h"

#include "cullable.h"

// 0x5118B0 | ?PtrTo@@YAPAUMetaType@@PAU1@@Z
inline struct MetaType* PtrTo(struct MetaType* arg1)
{
    return stub<cdecl_t<struct MetaType*, struct MetaType*>>(0x5118B0, arg1);
}

// 0x6F2AF0 | ?DebugMemory@@3HA
inline extern_var(0x6F2AF0, int32_t, DebugMemory);

// 0x6F2AF8 | ?asNodeMetaClass@@3VMetaClass@@A
inline extern_var(0x6F2AF8, class MetaClass, asNodeMetaClass);

// 0x511780 | ?new_asNode@@YAPAXH@Z
inline void* new_asNode(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x511780, arg1);
}

// 0x511850 | ?delete_asNode@@YAXPAXH@Z
inline void delete_asNode(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x511850, arg1, arg2);
}

class asNode : asCullable
{
public:
    // asNode::`vftable' @ 0x5953B0

    // 0x510830 | ?VerifyTree@asNode@@QAEPADXZ
    inline char* VerifyTree()
    {
        return stub<member_func_t<char*, asNode>>(0x510830, this);
    }

    // 0x510C60 | ??0asNode@@QAE@XZ
    inline asNode()
    {
        stub<member_func_t<void, asNode>>(0x510C60, this);
    }

    // 0x510CF0 | ?SetName@asNode@@QAEXPAD@Z
    inline void SetName(char* arg1)
    {
        return stub<member_func_t<void, asNode, char*>>(0x510CF0, this, arg1);
    }

    // 0x510DE0 | ?AddChild@asNode@@QAEHPAV1@@Z
    inline int32_t AddChild(class asNode* arg1)
    {
        return stub<member_func_t<int32_t, asNode, class asNode*>>(0x510DE0, this, arg1);
    }

    // 0x510E60 | ?InsertChild@asNode@@QAEHHPAV1@@Z
    inline int32_t InsertChild(int32_t arg1, class asNode* arg2)
    {
        return stub<member_func_t<int32_t, asNode, int32_t, class asNode*>>(0x510E60, this, arg1, arg2);
    }

    // 0x510EF0 | ?RemoveChild@asNode@@QAEHH@Z
    inline int32_t RemoveChild(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNode, int32_t>>(0x510EF0, this, arg1);
    }

    // 0x510F90 | ?RemoveChild@asNode@@QAEHPAV1@@Z
    inline int32_t RemoveChild(class asNode* arg1)
    {
        return stub<member_func_t<int32_t, asNode, class asNode*>>(0x510F90, this, arg1);
    }

    // 0x510FD0 | ?RemoveAllChildren@asNode@@QAEXXZ
    inline void RemoveAllChildren()
    {
        return stub<member_func_t<void, asNode>>(0x510FD0, this);
    }

    // 0x510FF0 | ?GetChild@asNode@@QAEPAV1@H@Z
    inline class asNode* GetChild(int32_t arg1)
    {
        return stub<member_func_t<class asNode*, asNode, int32_t>>(0x510FF0, this, arg1);
    }

    // 0x511020 | ?GetNext@asNode@@QAEPAV1@XZ
    inline class asNode* GetNext()
    {
        return stub<member_func_t<class asNode*, asNode>>(0x511020, this);
    }

    // 0x511030 | ?GetLastChild@asNode@@QAEPAV1@XZ
    inline class asNode* GetLastChild()
    {
        return stub<member_func_t<class asNode*, asNode>>(0x511030, this);
    }

    // 0x511070 | ?NumChildren@asNode@@QAEHXZ
    inline int32_t NumChildren()
    {
        return stub<member_func_t<int32_t, asNode>>(0x511070, this);
    }

    // 0x511090 | ?SwitchTo@asNode@@QAEXH@Z
    inline void SwitchTo(int32_t arg1)
    {
        return stub<member_func_t<void, asNode, int32_t>>(0x511090, this, arg1);
    }

    // 0x5110F0 | ?GetParent@asNode@@QAEPAV1@PAVMetaClass@@@Z
    inline class asNode* GetParent(class MetaClass* arg1)
    {
        return stub<member_func_t<class asNode*, asNode, class MetaClass*>>(0x5110F0, this, arg1);
    }

    // 0x511130 | ?GetNodeType@asNode@@QAEPADXZ
    inline char* GetNodeType()
    {
        return stub<member_func_t<char*, asNode>>(0x511130, this);
    }

    // 0x511140 | ?Load@asNode@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, asNode, char*>>(0x511140, this, arg1);
    }

    // 0x511230 | ?Save@asNode@@QAEHPAD@Z
    inline int32_t Save(char* arg1)
    {
        return stub<member_func_t<int32_t, asNode, char*>>(0x511230, this, arg1);
    }

    // 0x5116A0 | ?DeclareFields@asNode@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x5116A0);
    }

    // 0x510C80 | ??1asNode@@UAE@XZ
    inline ~asNode() override
    {
        stub<member_func_t<void, asNode>>(0x510C80, this);
    }

    // 0x5118A0 | ?GetClass@asNode@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asNode>>(0x5118A0, this);
    }

    // 0x510D20 | ?Update@asNode@@UAEXXZ
    virtual inline void Update()
    {
        return stub<member_func_t<void, asNode>>(0x510D20, this);
    }

    // 0x510D90 | ?Reset@asNode@@UAEXXZ
    virtual inline void Reset()
    {
        return stub<member_func_t<void, asNode>>(0x510D90, this);
    }

    // 0x510DB0 | ?ResChange@asNode@@UAEXHH@Z
    virtual inline void ResChange(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, asNode, int32_t, int32_t>>(0x510DB0, this, arg1, arg2);
    }

    // 0x403780 | ?UpdatePaused@asNode@@UAEXXZ
    virtual inline void UpdatePaused()
    {
        return stub<member_func_t<void, asNode>>(0x403780, this);
    }

    // 0x5114C0 | ?Load@asNode@@UAEXXZ
    virtual inline void Load()
    {
        return stub<member_func_t<void, asNode>>(0x5114C0, this);
    }

    // 0x5112E0 | ?Save@asNode@@UAEXXZ
    virtual inline void Save()
    {
        return stub<member_func_t<void, asNode>>(0x5112E0, this);
    }
};
