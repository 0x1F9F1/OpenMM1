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

#include "node.h"

#include "arts7/sim.h"
#include "data7/format.h"
#include "data7/metaclass.h"
#include "data7/str.h"
#include "stream/sparser.h"
#include "stream/stream.h"

// 0x510900 | ?IsValidPointer@@YAHPAXIH@Z
inline int32_t IsValidPointer(void* ptr, uint32_t size, int32_t writable)
{
    return stub<cdecl_t<int32_t, void*, uint32_t, int32_t>>(0x510900, ptr, size, writable);
}

const char* asNode::VerifyTree()
{
    if (!IsValidPointer(this, sizeof(*this), 1))
    {
        return "Bad 'this'";
    }

    if (!IsValidPointer(*reinterpret_cast<void**>(this), 8 * sizeof(void*), 0))
    {
        return "Bad virtual table";
    }

    if (!IsValidPointer(m_Parent, sizeof(*this), 1) && this != ARTSPTR)
    {
        return "Bad parent";
    }

    const char* result = nullptr;

    int32_t index = 1;

    for (asNode* i = m_Children; i; i = i->m_Next, ++index)
    {
        result = i->VerifyTree();

        if (result)
        {
            Errorf("Kid %d(%x) of type %s name %s: %s", index, i, GetClass()->m_Name, m_Name.get(), result);

            break;
        }
    }

    return result;
}

void asNode::SetName(char* arg1)
{
    m_Name = arg1;
}

int32_t asNode::AddChild(asNode* child)
{
    if (!child)
    {
        Errorf("asNode::AddChild()- N=0");

        return 0;
    }

    if (child->m_Parent)
    {
        Errorf("asNode::AddChild()- Node already parented");

        return 0;
    }

    child->m_Parent = this;
    child->m_Next = nullptr;

    asNode** last = &m_Children;

    while (*last)
    {
        last = &(*last)->m_Next;
    }

    *last = child;

    return 1;
}

int32_t asNode::InsertChild(int32_t index, asNode* child)
{
    if (!child)
    {
        Errorf("asNode::InsertChild()- N==0");

        return 0;
    }

    if (index < 1 || index > NumChildren() + 1)
    {
        Errorf("asNode::InsertChild()- %d is out of range", index);

        return 0;
    }

    if (index == 1)
    {
        child->m_Next = m_Children;
        m_Children = child;
    }
    else
    {
        asNode* i = GetChild(index - 1);
        child->m_Next = i->m_Next;
        i->m_Next = child;
    }

    child->m_Parent = this;

    return 1;
}

int32_t asNode::RemoveChild(int32_t index)
{
    if (!m_Children)
    {
        Errorf("asNode::RemoveChild()- No children!");

        return 0;
    }

    if (index < 1 || index > NumChildren())
    {
        Errorf("asNode::RemoveChild()- Bad child num");

        return 0;
    }

    asNode* i = GetChild(index);

    if (index == 1)
    {
        m_Children = m_Children->m_Next;
    }
    else
    {
        GetChild(index - 1)->m_Next = i->m_Next;
    }

    i->m_Next = nullptr;
    i->m_Parent = nullptr;

    return 1;
}

int32_t asNode::RemoveChild(asNode* child)
{
    int32_t count = 1;

    for (asNode* i = m_Children; i; i = i->m_Next, ++count)
    {
        if (i == child)
        {
            return RemoveChild(count);
        }
    }

    return 0;
}

void asNode::RemoveAllChildren()
{
    while (m_Children)
    {
        RemoveChild(1);
    }
}

asNode* asNode::GetChild(int32_t index)
{
    int32_t count = 1;

    for (asNode* i = m_Children; i; i = i->m_Next, ++count)
    {
        if (count == index)
        {
            return i;
        }
    }

    return nullptr;
}

asNode* asNode::GetNext()
{
    return m_Next;
}

asNode* asNode::GetLastChild()
{
    if (!m_Parent)
    {
        Errorf("LastasNode() - Need ParentNode set.");

        return nullptr;
    }

    asNode* i = m_Parent->m_Children;

    if (i == this)
    {
        return nullptr;
    }

    for (; i; i = i->m_Next)
    {
        if (i->m_Next == this)
        {
            return i;
        }
    }

    return nullptr;
}

int32_t asNode::NumChildren()
{
    int32_t count = 0;

    for (asNode* i = m_Children; i; i = i->m_Next)
    {
        ++count;
    }

    return count;
}

void asNode::SwitchTo(int32_t index)
{
    if (index > -1)
    {
        int32_t num_children = NumChildren();

        if (num_children < index)
        {
            index = num_children;
        }
    }
    else
    {
        index = -1;
    }

    int32_t count = 1;

    for (asNode* i = m_Children; i; i = i->m_Next, ++count)
    {
        uint32_t flags = i->m_Flags;

        if (index == -1 || index == count)
        {
            flags |= 1;
        }
        else
        {
            flags &= 0xFFFFFFFE;
        }

        i->m_Flags = flags;
    }
}

asNode* asNode::GetParent(MetaClass* type)
{
    for (asNode* i = m_Parent; i; i = i->m_Parent)
    {
        if (i->GetClass()->IsSubclassOf(type))
        {
            return i;
        }
    }

    return nullptr;
}

char* asNode::GetNodeType()
{
    return const_cast<char*>(GetClass()->m_Name);
}

asNode::~asNode()
{
    if (m_Parent)
    {
        m_Parent->RemoveChild(this);
    }

    RemoveAllChildren();
}

class MetaClass* asNode::GetClass()
{
    return &asNodeMetaClass;
}

void asNode::Update()
{
    if (DebugMemory & 4)
    {
        const char* verify_msg = VerifyTree();

        if (verify_msg)
        {
            Quitf("Before update: %s", verify_msg);
        }
    }

    for (asNode* i = m_Children; i; i = i->m_Next)
    {
        if (i->m_Flags & 1)
        {
            i->Update();
        }
    }

    if (DebugMemory & 4)
    {
        const char* verify_msg = VerifyTree();

        if (verify_msg)
        {
            Quitf("After update: %s", verify_msg);
        }
    }
}

void asNode::Reset()
{
    for (asNode* i = m_Children; i; i = i->m_Next)
    {
        i->Reset();
    }
}

void asNode::ResChange(int32_t arg1, int32_t arg2)
{
    for (asNode* i = m_Children; i; i = i->m_Next)
    {
        i->ResChange(arg1, arg2);
    }
}

void asNode::UpdatePaused()
{}

int32_t asNode::Load(const char* path)
{
    export_hook(0x511140);

    Ptr<Stream> input(s_fopen(path, "r"));

    if (!input)
    {
        Errorf("asNode::Load(%s) failed.", path);

        return 0;
    }

    StreamMiniParser parser(path, input.Release());

    GetClass()->Load(&parser, this);

    if (parser.m_ErrorCount)
    {
        m_Flags |= 4u;

        return 0;
    }
    else
    {
        m_Flags &= ~4u;

        return 1;
    }
}

int32_t asNode::Save(const char* path)
{
    export_hook(0x511230);

    Ptr<Stream> output(s_fopen(path, "w"));

    if (!output)
    {
        Errorf("asNode::Save(%s) failed.", path);

        return 0;
    }

    StreamMiniParser parser(path, output.Release());

    GetClass()->Save(&parser, this);

    return 1;
}

void asNode::Load()
{
    const char* name = m_Name;

    if (!name || !strcmp(name, "_"))
    {
        name = "default";
    }

    char buffer[100];
    formatf(buffer, ".%s", GetClass()->m_Name);

    string path;
    path.SaveName(name, 0, "tune", buffer);

    Load(path.m_pData);
}

void asNode::Save()
{
    const char* name = m_Name;

    if (!name || !strcmp(name, "_"))
    {
        name = "default";
    }

    char buffer[100];
    formatf(buffer, ".%s", GetClass()->m_Name);

    string path;
    path.SaveName(name, 0, "tune", buffer);

    Save(path.m_pData);
}
