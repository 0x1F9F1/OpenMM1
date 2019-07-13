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
    arts7:node

    0x510C60 | public: __thiscall asNode::asNode(void) | ??0asNode@@QAE@XZ
    0x510C80 | public: virtual __thiscall asNode::~asNode(void) | ??1asNode@@UAE@XZ
    0x510CF0 | public: void __thiscall asNode::SetName(char *) | ?SetName@asNode@@QAEXPAD@Z
    0x510D20 | public: virtual void __thiscall asNode::Update(void) | ?Update@asNode@@UAEXXZ
    0x510D90 | public: virtual void __thiscall asNode::Reset(void) | ?Reset@asNode@@UAEXXZ
    0x510DB0 | public: virtual void __thiscall asNode::ResChange(int,int) | ?ResChange@asNode@@UAEXHH@Z
    0x510DE0 | public: int __thiscall asNode::AddChild(class asNode *) | ?AddChild@asNode@@QAEHPAV1@@Z
    0x510E60 | public: int __thiscall asNode::InsertChild(int,class asNode *) | ?InsertChild@asNode@@QAEHHPAV1@@Z
    0x510EF0 | public: int __thiscall asNode::RemoveChild(int) | ?RemoveChild@asNode@@QAEHH@Z
    0x510F90 | public: int __thiscall asNode::RemoveChild(class asNode *) | ?RemoveChild@asNode@@QAEHPAV1@@Z
    0x510FD0 | public: void __thiscall asNode::RemoveAllChildren(void) | ?RemoveAllChildren@asNode@@QAEXXZ
    0x510FF0 | public: class asNode * __thiscall asNode::GetChild(int) | ?GetChild@asNode@@QAEPAV1@H@Z
    0x511020 | public: class asNode * __thiscall asNode::GetNext(void) | ?GetNext@asNode@@QAEPAV1@XZ
    0x511030 | public: class asNode * __thiscall asNode::GetLastChild(void) | ?GetLastChild@asNode@@QAEPAV1@XZ
    0x511070 | public: int __thiscall asNode::NumChildren(void) | ?NumChildren@asNode@@QAEHXZ
    0x511090 | public: void __thiscall asNode::SwitchTo(int) | ?SwitchTo@asNode@@QAEXH@Z
    0x5110F0 | public: class asNode * __thiscall asNode::GetParent(class MetaClass *) | ?GetParent@asNode@@QAEPAV1@PAVMetaClass@@@Z
    0x511130 | public: char * __thiscall asNode::GetNodeType(void) | ?GetNodeType@asNode@@QAEPADXZ
    0x511140 | public: int __thiscall asNode::Load(char *) | ?Load@asNode@@QAEHPAD@Z
    0x511230 | public: int __thiscall asNode::Save(char *) | ?Save@asNode@@QAEHPAD@Z
    0x5112E0 | public: virtual void __thiscall asNode::Save(void) | ?Save@asNode@@UAEXXZ
    0x5114C0 | public: virtual void __thiscall asNode::Load(void) | ?Load@asNode@@UAEXXZ
    0x5116A0 | public: static void __cdecl asNode::DeclareFields(void) | ?DeclareFields@asNode@@SAXXZ
    0x5118A0 | public: virtual class MetaClass * __thiscall asNode::GetClass(void) | ?GetClass@asNode@@UAEPAVMetaClass@@XZ
    0x5118B0 | struct MetaType * __cdecl PtrTo(struct MetaType *) | ?PtrTo@@YAPAUMetaType@@PAU1@@Z
    0x5118E0 | public: virtual void * __thiscall asNode::`vector deleting destructor'(unsigned int) | ??_EasNode@@UAEPAXI@Z
    0x5953B0 | const asNode::`vftable' | ??_7asNode@@6B@
    0x5953E0 | const PtrToType::`vftable' | ??_7PtrToType@@6B@
    0x6F2AF0 | int DebugMemory | ?DebugMemory@@3HA
    0x6F2AF8 | class MetaClass asNodeMetaClass | ?asNodeMetaClass@@3VMetaClass@@A
    0x511780 | void * __cdecl new_asNode(int) | ?new_asNode@@YAPAXH@Z
    0x511850 | void __cdecl delete_asNode(void *,int) | ?delete_asNode@@YAXPAXH@Z
*/

#include "hooking.h"

#include "cullable.h"
#include "data7/cstr.h"

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
    asNode* m_Next {nullptr};
    asNode* m_Children {nullptr};
    asNode* m_Parent {nullptr};
    cstring_t m_Name {};
    uint32_t m_Flags {3};
    int32_t m_dword18 {0};

    // asNode::`vftable' @ 0x5953B0

    // 0x510830 | ?VerifyTree@asNode@@QAEPADXZ
    inline char* VerifyTree()
    {
        return stub<member_func_t<char*, asNode>>(0x510830, this);
    }

    // 0x510C60 | ??0asNode@@QAE@XZ
    inline asNode()
    {}

    // 0x510CF0 | ?SetName@asNode@@QAEXPAD@Z
    void SetName(char* arg1);

    // 0x510DE0 | ?AddChild@asNode@@QAEHPAV1@@Z
    int32_t AddChild(class asNode* child);

    // 0x510E60 | ?InsertChild@asNode@@QAEHHPAV1@@Z
    int32_t InsertChild(int32_t index, class asNode* child);

    // 0x510EF0 | ?RemoveChild@asNode@@QAEHH@Z
    int32_t RemoveChild(int32_t index);

    // 0x510F90 | ?RemoveChild@asNode@@QAEHPAV1@@Z
    int32_t RemoveChild(class asNode* child);

    // 0x510FD0 | ?RemoveAllChildren@asNode@@QAEXXZ
    void RemoveAllChildren();

    // 0x510FF0 | ?GetChild@asNode@@QAEPAV1@H@Z
    class asNode* GetChild(int32_t index);

    // 0x511020 | ?GetNext@asNode@@QAEPAV1@XZ
    class asNode* GetNext();

    // 0x511030 | ?GetLastChild@asNode@@QAEPAV1@XZ
    class asNode* GetLastChild();

    // 0x511070 | ?NumChildren@asNode@@QAEHXZ
    int32_t NumChildren();

    // 0x511090 | ?SwitchTo@asNode@@QAEXH@Z
    void SwitchTo(int32_t index);

    // 0x5110F0 | ?GetParent@asNode@@QAEPAV1@PAVMetaClass@@@Z
    class asNode* GetParent(class MetaClass* type);

    // 0x511130 | ?GetNodeType@asNode@@QAEPADXZ
    char* GetNodeType();

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
    ~asNode() override;

    // 0x5118A0 | ?GetClass@asNode@@UAEPAVMetaClass@@XZ
    class MetaClass* GetClass() override;

    // 0x510D20 | ?Update@asNode@@UAEXXZ
    virtual void Update();

    // 0x510D90 | ?Reset@asNode@@UAEXXZ
    virtual void Reset();

    // 0x510DB0 | ?ResChange@asNode@@UAEXHH@Z
    virtual void ResChange(int32_t arg1, int32_t arg2);

    // 0x403780 | ?UpdatePaused@asNode@@UAEXXZ
    virtual void UpdatePaused();

    // 0x5114C0 | ?Load@asNode@@UAEXXZ
    virtual void Load();

    // 0x5112E0 | ?Save@asNode@@UAEXXZ
    virtual void Save();
};

check_size(asNode, 0x1C);
