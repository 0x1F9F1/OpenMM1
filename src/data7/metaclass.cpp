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

#include "metaclass.h"

#include "base.h"
#include "metatype.h"
#include "miniparser.h"

MetaClass::MetaClass(const char* name, uint32_t size, void* (*allocate)(int32_t), void (*free)(void*, int32_t),
    void (*declare)(void), MetaClass* parent)
    : m_Name(name)
    , m_Size(size)
    , m_Allocate(allocate)
    , m_Free(free)
    , m_Declare(declare)
    , m_Parent(parent)
{
    if (parent)
    {
        m_Next = parent->m_Children;
        parent->m_Children = this;
    }

    if (NextSerial == MAX_CLASSES)
    {
        Quitf("Too many classes, raise MAX_CLASSES");
    }

    m_Index = ++NextSerial;
    ClassIndex[NextSerial] = this;
}

MetaClass::~MetaClass()
{
    if (m_Index != NextSerial)
    {
        Abortf("MetaClass '%s' destructed in wrong order", m_Name ? m_Name : "<Invalid>");
    }

    ClassIndex[NextSerial] = nullptr;
    --NextSerial;

    if (m_Parent)
    {
        MetaClass** i = &m_Parent->m_Children;

        for (; *i; i = &(*i)->m_Next)
        {
            if (*i == this)
            {
                *i = m_Next;

                break;
            }
        }
    }
}

void MetaClass::UndeclareAll()
{
    for (int32_t i = 1; i <= NextSerial; ++i)
    {
        if (ClassIndex[i])
        {
            ClassIndex[i]->m_pFields = nullptr;
        }
    }
}

int32_t MetaClass::IsSubclassOf(MetaClass* parent)
{
    for (MetaClass* i = this; i; i = i->m_Parent)
    {
        if (i == parent)
        {
            return 1;
        }
    }

    return 0;
}

MetaClass* MetaClass::FindByName(const char* name, MetaClass* root)
{
    for (MetaClass* i = root; i; i = i->m_Next)
    {
        if (!i->m_Name || !strcmp(i->m_Name, name))
        {
            return i;
        }

        if (MetaClass* j = FindByName(name, i->m_Children))
        {
            return j;
        }
    }

    return nullptr;
}

void MetaClass::InitFields()
{
    Current = this;
    ppField = &m_pFields;
    m_Declare();
}

void MetaClass::Save(MiniParser* parser, void* ptr)
{
    if (!m_pFields)
    {
        InitFields();
    }

    if (IsSubclassOf(&BaseMetaClass))
    {
        static_cast<Base*>(ptr)->BeforeSave();
    }

    void* default_ptr = nullptr;

    if (!NoDefault)
    {
        default_ptr = m_Allocate(0);
    }

    parser->Printf("%s ", m_Name);
    parser->PlaceLabel(ptr);
    parser->Printf(" {\n");
    parser->Indent(4);

    for (MetaField* i = m_pFields; i; i = i->m_Next)
    {
        void* member = static_cast<uint8_t*>(ptr) + i->m_Offset;

        if (NoDefault || memcmp(member, static_cast<uint8_t*>(default_ptr) + i->m_Offset, i->m_pType->SizeOf()) != 0)
        {
            parser->Printf("%s ", i->m_Name);
            parser->Indent(4);
            i->m_pType->Save(parser, member);
            parser->Indent(-4);
            parser->Printf("\n");
        }
    }

    parser->Indent(-4);
    parser->Printf("}");

    if (!NoDefault)
    {
        m_Free(default_ptr, 0);
    }
}

void MetaClass::SkipBlock(MiniParser* parser)
{
    parser->Errorf("'%s' is not a valid field name in %s.", parser->m_Buffer, m_Name);

    bool has_values = false;
    int32_t depth = 0;

    int32_t token;
    while ((token = parser->NextToken()) != '\0')
    {
        if (token == '{' || token == '[')
        {
            ++depth;
        }
        else if (token == '}' || token == ']')
        {
            if (!depth)
            {
                break;
            }

            --depth;
        }
        else if (token == MiniParser::Integer || token == MiniParser::String || token == MiniParser::Float)
        {
            has_values = true;
        }
        else if (token == MiniParser::Ident && has_values && !depth)
        {
            break;
        }
    }

    if (token)
    {
        parser->PutBack(token);
    }

    parser->Errorf("Resuming parsing here.");
}

void MetaClass::Load(MiniParser* parser, void* ptr)
{
    if (!m_pFields)
    {
        InitFields();
    }

    parser->Match(MiniParser::Ident);

    MetaClass* type = FindByName(parser->m_Buffer, &RootMetaClass);

    if (!type)
    {
        parser->Errorf("Unknown metaclass name '%s', skipping block", parser->m_Buffer);
        SkipBlock(parser);
        return;
    }

    if (!type->IsSubclassOf(this))
    {
        parser->Errorf("Expected subclass of '%s', got '%s' instead, skipping block", m_Name, parser->m_Buffer);
        SkipBlock(parser);
        return;
    }

    parser->Match(MiniParser::Label);
    parser->Match('{');

    for (int32_t i = parser->NextToken(); i && i != '}'; i = parser->NextToken())
    {
        if (i != MiniParser::Ident)
        {
            parser->Errorf("Expected field name here.");

            continue;
        }

        bool found = false;

        for (MetaField* j = m_pFields; j; j = j->m_Next)
        {
            if (!strcmp(j->m_Name, parser->m_Buffer))
            {
                j->m_pType->Load(parser, static_cast<uint8_t*>(ptr) + j->m_Offset);

                found = true;

                break;
            }
        }

        if (!found)
        {
            SkipBlock(parser);
        }
    }

    if (IsSubclassOf(&BaseMetaClass))
    {
        static_cast<Base*>(ptr)->AfterLoad();
    }
}

void MetaClass::DeclareNamedTypedField(const char* name, uint32_t offset, MetaType* type)
{
    MetaField* field = new MetaField {nullptr, name, offset, type};

    *ppField = field;
    ppField = &field->m_Next;
}

void _BadSafeCall(char* name, Base* ptr)
{
    Quitf("SafeCall failed: '%s' is not a '%s'.", ptr->GetTypeName(), name);
}

define_dummy_symbol(metaclass);

run_once([] {
    auto_hook_ctor(0x559400, MetaClass, const char*, uint32_t, void* (*) (int32_t), void (*)(void*, int32_t),
        void (*)(void), MetaClass*);
    auto_hook_dtor(0x559480, MetaClass);
    auto_hook(0x5594E0, MetaClass::UndeclareAll);
    auto_hook(0x559510, MetaClass::IsSubclassOf);
    auto_hook(0x559540, MetaClass::FindByName);
    auto_hook(0x5595D0, MetaClass::InitFields);
    auto_hook(0x5595F0, MetaClass::Save);
    auto_hook(0x559740, MetaClass::SkipBlock);
    auto_hook(0x5597F0, MetaClass::Load);
    auto_hook(0x559960, MetaClass::DeclareNamedTypedField);
});