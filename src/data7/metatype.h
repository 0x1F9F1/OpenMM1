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
    data7:metatype

    0x55CEF0 | public: virtual void __thiscall PtrToType::Save(class MiniParser *,void *) | ?Save@PtrToType@@UAEXPAVMiniParser@@PAX@Z
    0x55CF10 | public: virtual void __thiscall PtrToType::Load(class MiniParser *,void *) | ?Load@PtrToType@@UAEXPAVMiniParser@@PAX@Z
    0x55CF30 | public: virtual void * __thiscall PtrToType::New(int) | ?New@PtrToType@@UAEPAXH@Z
    0x55CF40 | public: virtual void __thiscall PtrToType::Delete(void *,int) | ?Delete@PtrToType@@UAEXPAXH@Z
    0x55CF50 | public: virtual unsigned int __thiscall PtrToType::SizeOf(void) | ?SizeOf@PtrToType@@UAEIXZ
    0x55CF60 | public: int __thiscall RefToType::GetCount(void *) | ?GetCount@RefToType@@QAEHPAX@Z
    0x55CFA0 | public: virtual void __thiscall RefToType::Save(class MiniParser *,void *) | ?Save@RefToType@@UAEXPAVMiniParser@@PAX@Z
    0x55D050 | public: virtual void __thiscall RefToType::Load(class MiniParser *,void *) | ?Load@RefToType@@UAEXPAVMiniParser@@PAX@Z
    0x55D100 | public: virtual void * __thiscall RefToType::New(int) | ?New@RefToType@@UAEPAXH@Z
    0x55D110 | public: virtual void __thiscall RefToType::Delete(void *,int) | ?Delete@RefToType@@UAEXPAXH@Z
    0x55D120 | public: virtual unsigned int __thiscall RefToType::SizeOf(void) | ?SizeOf@RefToType@@UAEIXZ
    0x55D130 | public: virtual void __thiscall ArrayOfType::Save(class MiniParser *,void *) | ?Save@ArrayOfType@@UAEXPAVMiniParser@@PAX@Z
    0x55D1D0 | public: virtual void __thiscall ArrayOfType::Load(class MiniParser *,void *) | ?Load@ArrayOfType@@UAEXPAVMiniParser@@PAX@Z
    0x55D260 | public: virtual unsigned int __thiscall ArrayOfType::SizeOf(void) | ?SizeOf@ArrayOfType@@UAEIXZ
    0x55D280 | public: virtual void * __thiscall ArrayOfType::New(int) | ?New@ArrayOfType@@UAEPAXH@Z
    0x55D2A0 | public: virtual void __thiscall ArrayOfType::Delete(void *,int) | ?Delete@ArrayOfType@@UAEXPAXH@Z
    0x55D2C0 | public: virtual void __thiscall StructType::Save(class MiniParser *,void *) | ?Save@StructType@@UAEXPAVMiniParser@@PAX@Z
    0x55D2E0 | public: virtual void __thiscall StructType::Load(class MiniParser *,void *) | ?Load@StructType@@UAEXPAVMiniParser@@PAX@Z
    0x55D300 | public: virtual unsigned int __thiscall StructType::SizeOf(void) | ?SizeOf@StructType@@UAEIXZ
    0x55D310 | public: virtual void * __thiscall StructType::New(int) | ?New@StructType@@UAEPAXH@Z
    0x55D330 | public: virtual void __thiscall StructType::Delete(void *,int) | ?Delete@StructType@@UAEXPAXH@Z
    0x55D350 | public: virtual void __thiscall CharType::Save(class MiniParser *,void *) | ?Save@CharType@@UAEXPAVMiniParser@@PAX@Z
    0x55D370 | public: virtual void __thiscall CharType::Load(class MiniParser *,void *) | ?Load@CharType@@UAEXPAVMiniParser@@PAX@Z
    0x55D390 | public: virtual unsigned int __thiscall CharType::SizeOf(void) | ?SizeOf@CharType@@UAEIXZ
    0x55D3A0 | public: virtual void * __thiscall CharType::New(int) | ?New@CharType@@UAEPAXH@Z
    0x55D3D0 | public: virtual void __thiscall CharType::Delete(void *,int) | ?Delete@CharType@@UAEXPAXH@Z
    0x55D420 | public: virtual void __thiscall SignedCharType::Save(class MiniParser *,void *) | ?Save@SignedCharType@@UAEXPAVMiniParser@@PAX@Z
    0x55D440 | public: virtual void __thiscall SignedCharType::Load(class MiniParser *,void *) | ?Load@SignedCharType@@UAEXPAVMiniParser@@PAX@Z
    0x55D460 | public: virtual unsigned int __thiscall SignedCharType::SizeOf(void) | ?SizeOf@SignedCharType@@UAEIXZ
    0x55D470 | public: virtual void * __thiscall SignedCharType::New(int) | ?New@SignedCharType@@UAEPAXH@Z
    0x55D4A0 | public: virtual void __thiscall SignedCharType::Delete(void *,int) | ?Delete@SignedCharType@@UAEXPAXH@Z
    0x55D4F0 | public: virtual void __thiscall UnsignedCharType::Save(class MiniParser *,void *) | ?Save@UnsignedCharType@@UAEXPAVMiniParser@@PAX@Z
    0x55D510 | public: virtual void __thiscall UnsignedCharType::Load(class MiniParser *,void *) | ?Load@UnsignedCharType@@UAEXPAVMiniParser@@PAX@Z
    0x55D530 | public: virtual unsigned int __thiscall UnsignedCharType::SizeOf(void) | ?SizeOf@UnsignedCharType@@UAEIXZ
    0x55D540 | public: virtual void * __thiscall UnsignedCharType::New(int) | ?New@UnsignedCharType@@UAEPAXH@Z
    0x55D570 | public: virtual void __thiscall UnsignedCharType::Delete(void *,int) | ?Delete@UnsignedCharType@@UAEXPAXH@Z
    0x55D5C0 | public: virtual void __thiscall SignedShortType::Save(class MiniParser *,void *) | ?Save@SignedShortType@@UAEXPAVMiniParser@@PAX@Z
    0x55D5E0 | public: virtual void __thiscall SignedShortType::Load(class MiniParser *,void *) | ?Load@SignedShortType@@UAEXPAVMiniParser@@PAX@Z
    0x55D600 | public: virtual unsigned int __thiscall SignedShortType::SizeOf(void) | ?SizeOf@SignedShortType@@UAEIXZ
    0x55D610 | public: virtual void * __thiscall SignedShortType::New(int) | ?New@SignedShortType@@UAEPAXH@Z
    0x55D640 | public: virtual void __thiscall SignedShortType::Delete(void *,int) | ?Delete@SignedShortType@@UAEXPAXH@Z
    0x55D690 | public: virtual void __thiscall UnsignedShortType::Save(class MiniParser *,void *) | ?Save@UnsignedShortType@@UAEXPAVMiniParser@@PAX@Z
    0x55D6C0 | public: virtual void __thiscall UnsignedShortType::Load(class MiniParser *,void *) | ?Load@UnsignedShortType@@UAEXPAVMiniParser@@PAX@Z
    0x55D6E0 | public: virtual unsigned int __thiscall UnsignedShortType::SizeOf(void) | ?SizeOf@UnsignedShortType@@UAEIXZ
    0x55D6F0 | public: virtual void * __thiscall UnsignedShortType::New(int) | ?New@UnsignedShortType@@UAEPAXH@Z
    0x55D720 | public: virtual void __thiscall UnsignedShortType::Delete(void *,int) | ?Delete@UnsignedShortType@@UAEXPAXH@Z
    0x55D770 | public: virtual void __thiscall SignedIntType::Save(class MiniParser *,void *) | ?Save@SignedIntType@@UAEXPAVMiniParser@@PAX@Z
    0x55D790 | public: virtual void __thiscall SignedIntType::Load(class MiniParser *,void *) | ?Load@SignedIntType@@UAEXPAVMiniParser@@PAX@Z
    0x55D7B0 | public: virtual unsigned int __thiscall SignedIntType::SizeOf(void) | ?SizeOf@SignedIntType@@UAEIXZ
    0x55D7C0 | public: virtual void * __thiscall SignedIntType::New(int) | ?New@SignedIntType@@UAEPAXH@Z
    0x55D7F0 | public: virtual void __thiscall SignedIntType::Delete(void *,int) | ?Delete@SignedIntType@@UAEXPAXH@Z
    0x55D840 | public: virtual void __thiscall SignedInt64Type::Save(class MiniParser *,void *) | ?Save@SignedInt64Type@@UAEXPAVMiniParser@@PAX@Z
    0x55D870 | public: virtual void __thiscall SignedInt64Type::Load(class MiniParser *,void *) | ?Load@SignedInt64Type@@UAEXPAVMiniParser@@PAX@Z
    0x55D890 | public: virtual unsigned int __thiscall SignedInt64Type::SizeOf(void) | ?SizeOf@SignedInt64Type@@UAEIXZ
    0x55D8A0 | public: virtual void * __thiscall SignedInt64Type::New(int) | ?New@SignedInt64Type@@UAEPAXH@Z
    0x55D8D0 | public: virtual void __thiscall SignedInt64Type::Delete(void *,int) | ?Delete@SignedInt64Type@@UAEXPAXH@Z
    0x55D920 | public: virtual void __thiscall UnsignedIntType::Save(class MiniParser *,void *) | ?Save@UnsignedIntType@@UAEXPAVMiniParser@@PAX@Z
    0x55D940 | public: virtual void __thiscall UnsignedIntType::Load(class MiniParser *,void *) | ?Load@UnsignedIntType@@UAEXPAVMiniParser@@PAX@Z
    0x55D960 | public: virtual unsigned int __thiscall UnsignedIntType::SizeOf(void) | ?SizeOf@UnsignedIntType@@UAEIXZ
    0x55D970 | public: virtual void * __thiscall UnsignedIntType::New(int) | ?New@UnsignedIntType@@UAEPAXH@Z
    0x55D9A0 | public: virtual void __thiscall UnsignedIntType::Delete(void *,int) | ?Delete@UnsignedIntType@@UAEXPAXH@Z
    0x55D9F0 | public: virtual void __thiscall FloatType::Save(class MiniParser *,void *) | ?Save@FloatType@@UAEXPAVMiniParser@@PAX@Z
    0x55DA20 | public: virtual void __thiscall FloatType::Load(class MiniParser *,void *) | ?Load@FloatType@@UAEXPAVMiniParser@@PAX@Z
    0x55DA40 | public: virtual unsigned int __thiscall FloatType::SizeOf(void) | ?SizeOf@FloatType@@UAEIXZ
    0x55DA50 | public: virtual void * __thiscall FloatType::New(int) | ?New@FloatType@@UAEPAXH@Z
    0x55DA80 | public: virtual void __thiscall FloatType::Delete(void *,int) | ?Delete@FloatType@@UAEXPAXH@Z
    0x55DAF0 | public: virtual void __thiscall StringType::Save(class MiniParser *,void *) | ?Save@StringType@@UAEXPAVMiniParser@@PAX@Z
    0x55DB30 | public: virtual void __thiscall StringType::Load(class MiniParser *,void *) | ?Load@StringType@@UAEXPAVMiniParser@@PAX@Z
    0x55DB80 | public: virtual void * __thiscall StringType::New(int) | ?New@StringType@@UAEPAXH@Z
    0x55DBC0 | public: virtual void __thiscall StringType::Delete(void *,int) | ?Delete@StringType@@UAEXPAXH@Z
    0x55DBD0 | public: virtual unsigned int __thiscall StringType::SizeOf(void) | ?SizeOf@StringType@@UAEIXZ
    0x5962D8 | const CharType::`vftable' | ??_7CharType@@6B@
    0x5962F0 | const SignedCharType::`vftable' | ??_7SignedCharType@@6B@
    0x596308 | const UnsignedCharType::`vftable' | ??_7UnsignedCharType@@6B@
    0x596320 | const SignedShortType::`vftable' | ??_7SignedShortType@@6B@
    0x596338 | const UnsignedShortType::`vftable' | ??_7UnsignedShortType@@6B@
    0x596350 | const SignedIntType::`vftable' | ??_7SignedIntType@@6B@
    0x596368 | const SignedInt64Type::`vftable' | ??_7SignedInt64Type@@6B@
    0x596380 | const UnsignedIntType::`vftable' | ??_7UnsignedIntType@@6B@
    0x596398 | const FloatType::`vftable' | ??_7FloatType@@6B@
    0x5963B0 | const StringType::`vftable' | ??_7StringType@@6B@
    0x71258C | struct UnsignedCharType UnsignedCharInst | ?UnsignedCharInst@@3UUnsignedCharType@@A
    0x712590 | struct CharType CharInst | ?CharInst@@3UCharType@@A
    0x712594 | struct SignedIntType SignedIntInst | ?SignedIntInst@@3USignedIntType@@A
    0x712598 | struct FloatType FloatInst | ?FloatInst@@3UFloatType@@A
    0x71259C | struct SignedShortType SignedShortInst | ?SignedShortInst@@3USignedShortType@@A
    0x7125A0 | struct StringType StringInst | ?StringInst@@3UStringType@@A
    0x7125A4 | struct SignedCharType SignedCharInst | ?SignedCharInst@@3USignedCharType@@A
    0x7125A8 | struct UnsignedIntType UnsignedIntInst | ?UnsignedIntInst@@3UUnsignedIntType@@A
    0x7125AC | struct UnsignedShortType UnsignedShortInst | ?UnsignedShortInst@@3UUnsignedShortType@@A
    0x7125B0 | struct SignedInt64Type SignedInt64Inst | ?SignedInt64Inst@@3USignedInt64Type@@A
*/

#include "hooking.h"

// 0x71258C | ?UnsignedCharInst@@3UUnsignedCharType@@A
inline extern_var(0x71258C, struct UnsignedCharType, UnsignedCharInst);

// 0x712590 | ?CharInst@@3UCharType@@A
inline extern_var(0x712590, struct CharType, CharInst);

// 0x712594 | ?SignedIntInst@@3USignedIntType@@A
inline extern_var(0x712594, struct SignedIntType, SignedIntInst);

// 0x712598 | ?FloatInst@@3UFloatType@@A
inline extern_var(0x712598, struct FloatType, FloatInst);

// 0x71259C | ?SignedShortInst@@3USignedShortType@@A
inline extern_var(0x71259C, struct SignedShortType, SignedShortInst);

// 0x7125A0 | ?StringInst@@3UStringType@@A
inline extern_var(0x7125A0, struct StringType, StringInst);

// 0x7125A4 | ?SignedCharInst@@3USignedCharType@@A
inline extern_var(0x7125A4, struct SignedCharType, SignedCharInst);

// 0x7125A8 | ?UnsignedIntInst@@3UUnsignedIntType@@A
inline extern_var(0x7125A8, struct UnsignedIntType, UnsignedIntInst);

// 0x7125AC | ?UnsignedShortInst@@3UUnsignedShortType@@A
inline extern_var(0x7125AC, struct UnsignedShortType, UnsignedShortInst);

// 0x7125B0 | ?SignedInt64Inst@@3USignedInt64Type@@A
inline extern_var(0x7125B0, struct SignedInt64Type, SignedInt64Inst);

struct SignedInt64Type
{
public:
    // SignedInt64Type::`vftable' @ 0x596368

    // 0x55D840 | ?Save@SignedInt64Type@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, SignedInt64Type, class MiniParser*, void*>>(0x55D840, this, arg1, arg2);
    }

    // 0x55D870 | ?Load@SignedInt64Type@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, SignedInt64Type, class MiniParser*, void*>>(0x55D870, this, arg1, arg2);
    }

    // 0x55D890 | ?SizeOf@SignedInt64Type@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, SignedInt64Type>>(0x55D890, this);
    }

    // 0x55D8A0 | ?New@SignedInt64Type@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, SignedInt64Type, int32_t>>(0x55D8A0, this, arg1);
    }

    // 0x55D8D0 | ?Delete@SignedInt64Type@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, SignedInt64Type, void*, int32_t>>(0x55D8D0, this, arg1, arg2);
    }
};

struct UnsignedShortType
{
public:
    // UnsignedShortType::`vftable' @ 0x596338

    // 0x55D690 | ?Save@UnsignedShortType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, UnsignedShortType, class MiniParser*, void*>>(0x55D690, this, arg1, arg2);
    }

    // 0x55D6C0 | ?Load@UnsignedShortType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, UnsignedShortType, class MiniParser*, void*>>(0x55D6C0, this, arg1, arg2);
    }

    // 0x55D6E0 | ?SizeOf@UnsignedShortType@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, UnsignedShortType>>(0x55D6E0, this);
    }

    // 0x55D6F0 | ?New@UnsignedShortType@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, UnsignedShortType, int32_t>>(0x55D6F0, this, arg1);
    }

    // 0x55D720 | ?Delete@UnsignedShortType@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, UnsignedShortType, void*, int32_t>>(0x55D720, this, arg1, arg2);
    }
};

struct UnsignedIntType
{
public:
    // UnsignedIntType::`vftable' @ 0x596380

    // 0x55D920 | ?Save@UnsignedIntType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, UnsignedIntType, class MiniParser*, void*>>(0x55D920, this, arg1, arg2);
    }

    // 0x55D940 | ?Load@UnsignedIntType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, UnsignedIntType, class MiniParser*, void*>>(0x55D940, this, arg1, arg2);
    }

    // 0x55D960 | ?SizeOf@UnsignedIntType@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, UnsignedIntType>>(0x55D960, this);
    }

    // 0x55D970 | ?New@UnsignedIntType@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, UnsignedIntType, int32_t>>(0x55D970, this, arg1);
    }

    // 0x55D9A0 | ?Delete@UnsignedIntType@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, UnsignedIntType, void*, int32_t>>(0x55D9A0, this, arg1, arg2);
    }
};

struct SignedCharType
{
public:
    // SignedCharType::`vftable' @ 0x5962F0

    // 0x55D420 | ?Save@SignedCharType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, SignedCharType, class MiniParser*, void*>>(0x55D420, this, arg1, arg2);
    }

    // 0x55D440 | ?Load@SignedCharType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, SignedCharType, class MiniParser*, void*>>(0x55D440, this, arg1, arg2);
    }

    // 0x55D460 | ?SizeOf@SignedCharType@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, SignedCharType>>(0x55D460, this);
    }

    // 0x55D470 | ?New@SignedCharType@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, SignedCharType, int32_t>>(0x55D470, this, arg1);
    }

    // 0x55D4A0 | ?Delete@SignedCharType@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, SignedCharType, void*, int32_t>>(0x55D4A0, this, arg1, arg2);
    }
};

struct StringType
{
public:
    // StringType::`vftable' @ 0x5963B0

    // 0x55DAF0 | ?Save@StringType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, StringType, class MiniParser*, void*>>(0x55DAF0, this, arg1, arg2);
    }

    // 0x55DB30 | ?Load@StringType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, StringType, class MiniParser*, void*>>(0x55DB30, this, arg1, arg2);
    }

    // 0x55DBD0 | ?SizeOf@StringType@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, StringType>>(0x55DBD0, this);
    }

    // 0x55DB80 | ?New@StringType@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, StringType, int32_t>>(0x55DB80, this, arg1);
    }

    // 0x55DBC0 | ?Delete@StringType@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, StringType, void*, int32_t>>(0x55DBC0, this, arg1, arg2);
    }
};

struct SignedShortType
{
public:
    // SignedShortType::`vftable' @ 0x596320

    // 0x55D5C0 | ?Save@SignedShortType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, SignedShortType, class MiniParser*, void*>>(0x55D5C0, this, arg1, arg2);
    }

    // 0x55D5E0 | ?Load@SignedShortType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, SignedShortType, class MiniParser*, void*>>(0x55D5E0, this, arg1, arg2);
    }

    // 0x55D600 | ?SizeOf@SignedShortType@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, SignedShortType>>(0x55D600, this);
    }

    // 0x55D610 | ?New@SignedShortType@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, SignedShortType, int32_t>>(0x55D610, this, arg1);
    }

    // 0x55D640 | ?Delete@SignedShortType@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, SignedShortType, void*, int32_t>>(0x55D640, this, arg1, arg2);
    }
};

struct FloatType
{
public:
    // FloatType::`vftable' @ 0x596398

    // 0x55D9F0 | ?Save@FloatType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, FloatType, class MiniParser*, void*>>(0x55D9F0, this, arg1, arg2);
    }

    // 0x55DA20 | ?Load@FloatType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, FloatType, class MiniParser*, void*>>(0x55DA20, this, arg1, arg2);
    }

    // 0x55DA40 | ?SizeOf@FloatType@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, FloatType>>(0x55DA40, this);
    }

    // 0x55DA50 | ?New@FloatType@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, FloatType, int32_t>>(0x55DA50, this, arg1);
    }

    // 0x55DA80 | ?Delete@FloatType@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, FloatType, void*, int32_t>>(0x55DA80, this, arg1, arg2);
    }
};

struct SignedIntType
{
public:
    // SignedIntType::`vftable' @ 0x596350

    // 0x55D770 | ?Save@SignedIntType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, SignedIntType, class MiniParser*, void*>>(0x55D770, this, arg1, arg2);
    }

    // 0x55D790 | ?Load@SignedIntType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, SignedIntType, class MiniParser*, void*>>(0x55D790, this, arg1, arg2);
    }

    // 0x55D7B0 | ?SizeOf@SignedIntType@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, SignedIntType>>(0x55D7B0, this);
    }

    // 0x55D7C0 | ?New@SignedIntType@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, SignedIntType, int32_t>>(0x55D7C0, this, arg1);
    }

    // 0x55D7F0 | ?Delete@SignedIntType@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, SignedIntType, void*, int32_t>>(0x55D7F0, this, arg1, arg2);
    }
};

struct CharType
{
public:
    // CharType::`vftable' @ 0x5962D8

    // 0x55D350 | ?Save@CharType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, CharType, class MiniParser*, void*>>(0x55D350, this, arg1, arg2);
    }

    // 0x55D370 | ?Load@CharType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, CharType, class MiniParser*, void*>>(0x55D370, this, arg1, arg2);
    }

    // 0x55D390 | ?SizeOf@CharType@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, CharType>>(0x55D390, this);
    }

    // 0x55D3A0 | ?New@CharType@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, CharType, int32_t>>(0x55D3A0, this, arg1);
    }

    // 0x55D3D0 | ?Delete@CharType@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, CharType, void*, int32_t>>(0x55D3D0, this, arg1, arg2);
    }
};

struct UnsignedCharType
{
public:
    // UnsignedCharType::`vftable' @ 0x596308

    // 0x55D4F0 | ?Save@UnsignedCharType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, UnsignedCharType, class MiniParser*, void*>>(0x55D4F0, this, arg1, arg2);
    }

    // 0x55D510 | ?Load@UnsignedCharType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, UnsignedCharType, class MiniParser*, void*>>(0x55D510, this, arg1, arg2);
    }

    // 0x55D530 | ?SizeOf@UnsignedCharType@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, UnsignedCharType>>(0x55D530, this);
    }

    // 0x55D540 | ?New@UnsignedCharType@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, UnsignedCharType, int32_t>>(0x55D540, this, arg1);
    }

    // 0x55D570 | ?Delete@UnsignedCharType@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, UnsignedCharType, void*, int32_t>>(0x55D570, this, arg1, arg2);
    }
};

struct PtrToType
{
public:
    // PtrToType::`vftable' @ 0x5953E0

    // 0x55CEF0 | ?Save@PtrToType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, PtrToType, class MiniParser*, void*>>(0x55CEF0, this, arg1, arg2);
    }

    // 0x55CF10 | ?Load@PtrToType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, PtrToType, class MiniParser*, void*>>(0x55CF10, this, arg1, arg2);
    }

    // 0x55CF50 | ?SizeOf@PtrToType@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, PtrToType>>(0x55CF50, this);
    }

    // 0x55CF30 | ?New@PtrToType@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, PtrToType, int32_t>>(0x55CF30, this, arg1);
    }

    // 0x55CF40 | ?Delete@PtrToType@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, PtrToType, void*, int32_t>>(0x55CF40, this, arg1, arg2);
    }
};

struct RefToType
{
public:
    // RefToType::`vftable' @ 0x5942A8

    // 0x55CF60 | ?GetCount@RefToType@@QAEHPAX@Z
    inline int32_t GetCount(void* arg1)
    {
        return stub<member_func_t<int32_t, RefToType, void*>>(0x55CF60, this, arg1);
    }

    // 0x55CFA0 | ?Save@RefToType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, RefToType, class MiniParser*, void*>>(0x55CFA0, this, arg1, arg2);
    }

    // 0x55D050 | ?Load@RefToType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, RefToType, class MiniParser*, void*>>(0x55D050, this, arg1, arg2);
    }

    // 0x55D120 | ?SizeOf@RefToType@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, RefToType>>(0x55D120, this);
    }

    // 0x55D100 | ?New@RefToType@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, RefToType, int32_t>>(0x55D100, this, arg1);
    }

    // 0x55D110 | ?Delete@RefToType@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, RefToType, void*, int32_t>>(0x55D110, this, arg1, arg2);
    }
};

struct ArrayOfType
{
public:
    // ArrayOfType::`vftable' @ 0x590FB8

    // 0x55D130 | ?Save@ArrayOfType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, ArrayOfType, class MiniParser*, void*>>(0x55D130, this, arg1, arg2);
    }

    // 0x55D1D0 | ?Load@ArrayOfType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, ArrayOfType, class MiniParser*, void*>>(0x55D1D0, this, arg1, arg2);
    }

    // 0x55D260 | ?SizeOf@ArrayOfType@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, ArrayOfType>>(0x55D260, this);
    }

    // 0x55D280 | ?New@ArrayOfType@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, ArrayOfType, int32_t>>(0x55D280, this, arg1);
    }

    // 0x55D2A0 | ?Delete@ArrayOfType@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, ArrayOfType, void*, int32_t>>(0x55D2A0, this, arg1, arg2);
    }
};

struct StructType
{
public:
    // StructType::`vftable' @ 0x590F58

    // 0x55D2C0 | ?Save@StructType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, StructType, class MiniParser*, void*>>(0x55D2C0, this, arg1, arg2);
    }

    // 0x55D2E0 | ?Load@StructType@@UAEXPAVMiniParser@@PAX@Z
    virtual inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, StructType, class MiniParser*, void*>>(0x55D2E0, this, arg1, arg2);
    }

    // 0x55D300 | ?SizeOf@StructType@@UAEIXZ
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, StructType>>(0x55D300, this);
    }

    // 0x55D310 | ?New@StructType@@UAEPAXH@Z
    virtual inline void* New(int32_t arg1)
    {
        return stub<member_func_t<void*, StructType, int32_t>>(0x55D310, this, arg1);
    }

    // 0x55D330 | ?Delete@StructType@@UAEXPAXH@Z
    virtual inline void Delete(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, StructType, void*, int32_t>>(0x55D330, this, arg1, arg2);
    }
};
