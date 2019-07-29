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

class MiniParser;

struct MetaType
{
public:
    virtual void Save(class MiniParser* parser, void* ptr) = 0;
    virtual void Load(class MiniParser* parser, void* ptr) = 0;
    virtual uint32_t SizeOf() = 0;
    virtual void* New(int32_t count) = 0;
    virtual void Delete(void* ptr, int32_t count) = 0;
};

check_size(MetaType, 4);

// 0x71258C | ?UnsignedCharInst@@3UUnsignedCharType@@A
extern struct UnsignedCharType UnsignedCharInst;

// 0x712590 | ?CharInst@@3UCharType@@A
extern struct CharType CharInst;

// 0x712594 | ?SignedIntInst@@3USignedIntType@@A
extern struct SignedIntType SignedIntInst;

// 0x712598 | ?FloatInst@@3UFloatType@@A
extern struct FloatType FloatInst;

// 0x71259C | ?SignedShortInst@@3USignedShortType@@A
extern struct SignedShortType SignedShortInst;

// 0x7125A0 | ?StringInst@@3UStringType@@A
extern struct StringType StringInst;

// 0x7125A4 | ?SignedCharInst@@3USignedCharType@@A
extern struct SignedCharType SignedCharInst;

// 0x7125A8 | ?UnsignedIntInst@@3UUnsignedIntType@@A
extern struct UnsignedIntType UnsignedIntInst;

// 0x7125AC | ?UnsignedShortInst@@3UUnsignedShortType@@A
extern struct UnsignedShortType UnsignedShortInst;

// 0x7125B0 | ?SignedInt64Inst@@3USignedInt64Type@@A
extern struct SignedInt64Type SignedInt64Inst;