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

#include "metatype.h"

#include "cstr.h"
#include "metaclass.h"
#include "miniparser.h"

#include <cinttypes>

struct SignedInt64Type : MetaType
{
public:
    // SignedInt64Type::`vftable' @ 0x596368

    // 0x55D840 | ?Save@SignedInt64Type@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        parser->Printf("%" PRId64 " ", *static_cast<int64_t*>(ptr));
    }

    // 0x55D870 | ?Load@SignedInt64Type@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        *static_cast<int64_t*>(ptr) = parser->Int64Val();
    }

    // 0x55D890 | ?SizeOf@SignedInt64Type@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(int64_t);
    }

    // 0x55D8A0 | ?New@SignedInt64Type@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        return ptrCreator<int64_t>(count);
    }

    // 0x55D8D0 | ?Delete@SignedInt64Type@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        ptrDestructor<int64_t>(ptr, count);
    }
};

struct UnsignedShortType : MetaType
{
public:
    // UnsignedShortType::`vftable' @ 0x596338

    // 0x55D690 | ?Save@UnsignedShortType@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        parser->Printf("%" PRIu16 " ", *static_cast<uint16_t*>(ptr));
    }

    // 0x55D6C0 | ?Load@UnsignedShortType@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        *static_cast<uint16_t*>(ptr) = static_cast<uint16_t>(parser->IntVal());
    }

    // 0x55D6E0 | ?SizeOf@UnsignedShortType@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(uint16_t);
    }

    // 0x55D6F0 | ?New@UnsignedShortType@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        return ptrCreator<uint16_t>(count);
    }

    // 0x55D720 | ?Delete@UnsignedShortType@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        ptrDestructor<uint16_t>(ptr, count);
    }
};

struct UnsignedIntType : MetaType
{
public:
    // UnsignedIntType::`vftable' @ 0x596380

    // 0x55D920 | ?Save@UnsignedIntType@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        parser->Printf("%" PRIu32 " ", *static_cast<uint32_t*>(ptr));
    }

    // 0x55D940 | ?Load@UnsignedIntType@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        *static_cast<uint32_t*>(ptr) = static_cast<uint32_t>(parser->IntVal());
    }

    // 0x55D960 | ?SizeOf@UnsignedIntType@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(uint32_t);
    }

    // 0x55D970 | ?New@UnsignedIntType@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        return ptrCreator<uint32_t>(count);
    }

    // 0x55D9A0 | ?Delete@UnsignedIntType@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        ptrDestructor<uint32_t>(ptr, count);
    }
};

struct SignedCharType : MetaType
{
public:
    // SignedCharType::`vftable' @ 0x5962F0

    // 0x55D420 | ?Save@SignedCharType@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        parser->Printf("%" PRIi8 " ", *static_cast<int8_t*>(ptr));
    }

    // 0x55D440 | ?Load@SignedCharType@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        *static_cast<int8_t*>(ptr) = static_cast<int8_t>(parser->IntVal());
    }

    // 0x55D460 | ?SizeOf@SignedCharType@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(int8_t);
    }

    // 0x55D470 | ?New@SignedCharType@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        return ptrCreator<int8_t>(count);
    }

    // 0x55D4A0 | ?Delete@SignedCharType@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        ptrDestructor<int8_t>(ptr, count);
    }
};

struct SignedShortType : MetaType
{
public:
    // SignedShortType::`vftable' @ 0x596320

    // 0x55D5C0 | ?Save@SignedShortType@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        parser->Printf("%" PRIi16 " ", *static_cast<int16_t*>(ptr));
    }

    // 0x55D5E0 | ?Load@SignedShortType@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        *static_cast<int16_t*>(ptr) = static_cast<int16_t>(parser->IntVal());
    }

    // 0x55D600 | ?SizeOf@SignedShortType@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(int16_t);
    }

    // 0x55D610 | ?New@SignedShortType@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        return ptrCreator<int16_t>(count);
    }

    // 0x55D640 | ?Delete@SignedShortType@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        ptrDestructor<int16_t>(ptr, count);
    }
};

struct FloatType : MetaType
{
public:
    // FloatType::`vftable' @ 0x596398

    // 0x55D9F0 | ?Save@FloatType@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        parser->Printf("%g ", *static_cast<float*>(ptr));
    }

    // 0x55DA20 | ?Load@FloatType@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        *static_cast<float*>(ptr) = parser->FloatVal();
    }

    // 0x55DA40 | ?SizeOf@FloatType@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(float);
    }

    // 0x55DA50 | ?New@FloatType@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        return ptrCreator<float>(count);
    }

    // 0x55DA80 | ?Delete@FloatType@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        ptrDestructor<float>(ptr, count);
    }
};

struct SignedIntType : MetaType
{
public:
    // SignedIntType::`vftable' @ 0x596350

    // 0x55D770 | ?Save@SignedIntType@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        parser->Printf("%" PRIi32 " ", *static_cast<int32_t*>(ptr));
    }

    // 0x55D790 | ?Load@SignedIntType@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        *static_cast<int32_t*>(ptr) = static_cast<int32_t>(parser->IntVal());
    }

    // 0x55D7B0 | ?SizeOf@SignedIntType@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(int32_t);
    }

    // 0x55D7C0 | ?New@SignedIntType@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        return ptrCreator<int32_t>(count);
    }

    // 0x55D7F0 | ?Delete@SignedIntType@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        return ptrDestructor<int32_t>(ptr, count);
    }
};

struct CharType : MetaType
{
public:
    // CharType::`vftable' @ 0x5962D8

    // 0x55D350 | ?Save@CharType@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        parser->Printf("'%c' ", *static_cast<char*>(ptr));
    }

    // 0x55D370 | ?Load@CharType@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        *static_cast<char*>(ptr) = static_cast<char>(parser->IntVal());
    }

    // 0x55D390 | ?SizeOf@CharType@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(char);
    }

    // 0x55D3A0 | ?New@CharType@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        return ptrCreator<char>(count);
    }

    // 0x55D3D0 | ?Delete@CharType@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        ptrDestructor<char>(ptr, count);
    }
};

struct UnsignedCharType : MetaType
{
public:
    // UnsignedCharType::`vftable' @ 0x596308

    // 0x55D4F0 | ?Save@UnsignedCharType@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        parser->Printf("%" PRIu8 " ", *static_cast<uint8_t*>(ptr));
    }

    // 0x55D510 | ?Load@UnsignedCharType@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        *static_cast<uint8_t*>(ptr) = static_cast<uint8_t>(parser->IntVal());
    }

    // 0x55D530 | ?SizeOf@UnsignedCharType@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(uint8_t);
    }

    // 0x55D540 | ?New@UnsignedCharType@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        return ptrCreator<uint8_t>(count);
    }

    // 0x55D570 | ?Delete@UnsignedCharType@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        ptrDestructor<uint8_t>(ptr, count);
    }
};

struct StringType : MetaType
{
public:
    // StringType::`vftable' @ 0x5963B0

    // 0x55DAF0 | ?Save@StringType@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        cstring_t& val = *static_cast<cstring_t*>(ptr);

        if (val)
        {
            parser->PrintString(val, 1024);
        }
        else
        {
            parser->Printf("$0");
        }
    }

    // 0x55DB30 | ?Load@StringType@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        cstring_t& val = *static_cast<cstring_t*>(ptr);

        if (parser->NextToken() == MiniParser::LabelRef)
        {
            val = nullptr;
        }
        else
        {
            val = parser->m_Buffer;
        }
    }

    // 0x55DBD0 | ?SizeOf@StringType@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(cstring_t);
    }

    // 0x55DB80 | ?New@StringType@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        return ptrCreator<cstring_t>(count);
    }

    // 0x55DBC0 | ?Delete@StringType@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        ptrDestructor<cstring_t>(ptr, count); // TODO: Is this valid?
    }
};

struct PtrToType : MetaType
{
public:
    MetaType* m_pType {nullptr};

    // PtrToType::`vftable' @ 0x5953E0

    // 0x55CEF0 | ?Save@PtrToType@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        parser->PlaceLabelRef(*static_cast<void**>(ptr));
    }

    // 0x55CF10 | ?Load@PtrToType@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* /*ptr*/) override
    {
        parser->Match(MiniParser::LabelRef);
    }

    // 0x55CF50 | ?SizeOf@PtrToType@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(void*);
    }

    // 0x55CF30 | ?New@PtrToType@@UAEPAXH@Z
    void* New(int32_t /*count*/) override
    {
        return nullptr;
    }

    // 0x55CF40 | ?Delete@PtrToType@@UAEXPAXH@Z
    void Delete(void* /*ptr*/, int32_t /*count*/) override
    {}
};

struct RefToType : MetaType
{
public:
    MetaType* m_pType {nullptr};
    uint32_t m_RefOffset {0};
    uint32_t m_RefSize {0};

    // RefToType::`vftable' @ 0x5942A8

    // 0x55CF60 | ?GetCount@RefToType@@QAEHPAX@Z
    int32_t GetCount(void* ptr)
    {
        ptr = static_cast<uint8_t*>(ptr) + m_RefOffset;

        switch (m_RefSize)
        {
            case 0: return 1;
            case 1: return *static_cast<uint8_t*>(ptr);
            case 2: return *static_cast<uint16_t*>(ptr);
            case 4: return *static_cast<uint32_t*>(ptr);

            default: Quit("Invalid Ref Size");
        }
    }

    // 0x55CFA0 | ?Save@RefToType@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        void* values = *static_cast<void**>(ptr);

        if (values)
        {
            parser->Printf("[\n");
            parser->Indent(1);

            const uint32_t size = m_pType->SizeOf();

            for (int32_t i = 0, count = GetCount(ptr); i < count; ++i)
            {
                m_pType->Save(parser, static_cast<uint8_t*>(values) + i * size);
            }

            parser->Indent(-1);
            parser->Printf("]");
        }
        else
        {
            parser->Printf("$0");
        }
    }

    // 0x55D050 | ?Load@RefToType@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        const int32_t count = GetCount(ptr);

        m_pType->Delete(*static_cast<void**>(ptr), count);

        int32_t token = parser->NextToken();

        if (token == MiniParser::LabelRef)
        {
            *static_cast<void**>(ptr) = nullptr;
        }
        else
        {
            parser->PutBack(token);
            parser->Match('[');

            void* values = m_pType->New(m_RefSize ? count : 0);

            *static_cast<void**>(ptr) = values;

            const uint32_t size = m_pType->SizeOf();

            for (int32_t i = 0; i < count; ++i)
            {
                m_pType->Load(parser, static_cast<uint8_t*>(values) + i * size);
            }

            parser->Match(']');
        }
    }

    // 0x55D120 | ?SizeOf@RefToType@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(void*);
    }

    // 0x55D100 | ?New@RefToType@@UAEPAXH@Z
    void* New(int32_t /*count*/) override
    {
        return nullptr;
    }

    // 0x55D110 | ?Delete@RefToType@@UAEXPAXH@Z
    void Delete(void* /*ptr*/, int32_t /*count*/) override
    {}
};

struct ArrayOfType : MetaType
{
public:
    MetaType* m_pType {nullptr};
    int32_t m_nCount {0};

    // ArrayOfType::`vftable' @ 0x590FB8

    // 0x55D130 | ?Save@ArrayOfType@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        if (m_pType == &CharInst)
        {
            parser->PrintString(static_cast<const char*>(ptr), m_nCount);
        }
        else
        {
            parser->Printf("[\n");
            parser->Indent(1);

            const uint32_t size = m_pType->SizeOf();

            for (int32_t i = 0, count = m_nCount; i < count; ++i)
            {
                m_pType->Save(parser, static_cast<uint8_t*>(ptr) + i * size);
            }

            parser->Indent(-1);
            parser->Printf("]");
        }
    }

    // 0x55D1D0 | ?Load@ArrayOfType@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        if (m_pType == &CharInst)
        {
            parser->Match(MiniParser::String);

            for (int32_t i = 0, count = m_nCount; i < count; ++i)
            {
                const char v = parser->m_Buffer[i];

                static_cast<char*>(ptr)[i] = v;

                if (!v)
                {
                    break;
                }
            }
        }
        else
        {
            parser->Match('[');

            const uint32_t size = m_pType->SizeOf();

            for (int32_t i = 0, count = m_nCount; i < count; ++i)
            {
                m_pType->Load(parser, static_cast<uint8_t*>(ptr) + i * size);
            }

            parser->Match(']');
        }
    }

    // 0x55D260 | ?SizeOf@ArrayOfType@@UAEIXZ
    uint32_t SizeOf() override
    {
        return m_nCount * m_pType->SizeOf();
    }

    // 0x55D280 | ?New@ArrayOfType@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        int32_t total = m_nCount;

        if (count)
        {
            total *= count;
        }

        return m_pType->New(count);
    }

    // 0x55D2A0 | ?Delete@ArrayOfType@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        int32_t total = m_nCount;

        if (count)
        {
            total *= count;
        }

        m_pType->Delete(ptr, total);
    }
};

struct StructType : MetaType
{
public:
    MetaClass* m_pClass {nullptr};

    // StructType::`vftable' @ 0x590F58

    // 0x55D2C0 | ?Save@StructType@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        m_pClass->Save(parser, ptr);
    }

    // 0x55D2E0 | ?Load@StructType@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        m_pClass->Load(parser, ptr);
    }

    // 0x55D300 | ?SizeOf@StructType@@UAEIXZ
    uint32_t SizeOf() override
    {
        return m_pClass->m_Size;
    }

    // 0x55D310 | ?New@StructType@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        return m_pClass->m_Allocate(count);
    }

    // 0x55D330 | ?Delete@StructType@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        m_pClass->m_Free(ptr, count);
    }
};

UnsignedCharType UnsignedCharInst;
CharType CharInst;
SignedIntType SignedIntInst;
FloatType FloatInst;
SignedShortType SignedShortInst;
StringType StringInst;
SignedCharType SignedCharInst;
UnsignedIntType UnsignedIntInst;
UnsignedShortType UnsignedShortInst;
SignedInt64Type SignedInt64Inst;

check_size(SignedInt64Type, 4);
check_size(UnsignedShortType, 4);
check_size(UnsignedIntType, 4);
check_size(SignedCharType, 4);
check_size(SignedShortType, 4);
check_size(FloatType, 4);
check_size(SignedIntType, 4);
check_size(CharType, 4);
check_size(UnsignedCharType, 4);
check_size(StringType, 4);
check_size(PtrToType, 8);
check_size(RefToType, 16);
check_size(ArrayOfType, 12);
check_size(StructType, 8);
