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
    data7:metaclass

    0x559400 | public: __thiscall MetaClass::MetaClass(char *,unsigned int,void * (__cdecl*)(int),void (__cdecl*)(void *,int),void (__cdecl*)(void),class MetaClass *) | ??0MetaClass@@QAE@PADIP6APAXH@ZP6AXPAXH@ZP6AXXZPAV0@@Z
    0x559480 | public: __thiscall MetaClass::~MetaClass(void) | ??1MetaClass@@QAE@XZ
    0x5594E0 | public: static void __cdecl MetaClass::UndeclareAll(void) | ?UndeclareAll@MetaClass@@SAXXZ
    0x559510 | public: int __thiscall MetaClass::IsSubclassOf(class MetaClass *) | ?IsSubclassOf@MetaClass@@QAEHPAV1@@Z
    0x559540 | public: static class MetaClass * __cdecl MetaClass::FindByName(char *,class MetaClass *) | ?FindByName@MetaClass@@SAPAV1@PADPAV1@@Z
    0x5595B0 | void __cdecl __BadSafeCall(char *,class Base *) | ?__BadSafeCall@@YAXPADPAVBase@@@Z
    0x5595D0 | public: void __thiscall MetaClass::InitFields(void) | ?InitFields@MetaClass@@QAEXXZ
    0x5595F0 | public: void __thiscall MetaClass::Save(class MiniParser *,void *) | ?Save@MetaClass@@QAEXPAVMiniParser@@PAX@Z
    0x559740 | public: void __thiscall MetaClass::SkipBlock(class MiniParser *) | ?SkipBlock@MetaClass@@QAEXPAVMiniParser@@@Z
    0x5597F0 | public: void __thiscall MetaClass::Load(class MiniParser *,void *) | ?Load@MetaClass@@QAEXPAVMiniParser@@PAX@Z
    0x559960 | public: static void __cdecl MetaClass::DeclareNamedTypedField(char *,unsigned int,struct MetaType *) | ?DeclareNamedTypedField@MetaClass@@SAXPADIPAUMetaType@@@Z
    0x5CE3B0 | int NoDefault | ?NoDefault@@3HA
    0x711B38 | public: static int MetaClass::NextSerial | ?NextSerial@MetaClass@@2HA
    0x711B40 | public: static class MetaClass * * MetaClass::ClassIndex | ?ClassIndex@MetaClass@@2PAPAV1@A
    0x711F40 | public: static class MetaClass * MetaClass::Current | ?Current@MetaClass@@2PAV1@A
    0x711F44 | public: static struct MetaField * * MetaClass::ppField | ?ppField@MetaClass@@2PAPAUMetaField@@A
    0x711F48 | public: static class MetaClass MetaClass::RootMetaClass | ?RootMetaClass@MetaClass@@2V1@A
*/

#include "hooking.h"

// 0x5595B0 | ?__BadSafeCall@@YAXPADPAVBase@@@Z
inline void __BadSafeCall(char* arg1, class Base* arg2)
{
    return stub<cdecl_t<void, char*, class Base*>>(0x5595B0, arg1, arg2);
}

// 0x5CE3B0 | ?NoDefault@@3HA
inline extern_var(0x5CE3B0, int32_t, NoDefault);

class MetaClass
{
public:
    // 0x559400 | ??0MetaClass@@QAE@PADIP6APAXH@ZP6AXPAXH@ZP6AXXZPAV0@@Z
    inline MetaClass(char* arg1, uint32_t arg2, void*(__cdecl* arg3)(int32_t), void(__cdecl* arg4)(void*, int32_t),
        void(__cdecl* arg5)(void), class MetaClass* arg6)
    {
        stub<member_func_t<void, MetaClass, char*, uint32_t, void*(__cdecl*) (int32_t), void(__cdecl*)(void*, int32_t),
            void(__cdecl*)(void), class MetaClass*>>(0x559400, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x559480 | ??1MetaClass@@QAE@XZ
    inline ~MetaClass()
    {
        stub<member_func_t<void, MetaClass>>(0x559480, this);
    }

    // 0x5594E0 | ?UndeclareAll@MetaClass@@SAXXZ
    static inline void UndeclareAll()
    {
        return stub<cdecl_t<void>>(0x5594E0);
    }

    // 0x559510 | ?IsSubclassOf@MetaClass@@QAEHPAV1@@Z
    inline int32_t IsSubclassOf(class MetaClass* arg1)
    {
        return stub<member_func_t<int32_t, MetaClass, class MetaClass*>>(0x559510, this, arg1);
    }

    // 0x559540 | ?FindByName@MetaClass@@SAPAV1@PADPAV1@@Z
    static inline class MetaClass* FindByName(char* arg1, class MetaClass* arg2)
    {
        return stub<cdecl_t<class MetaClass*, char*, class MetaClass*>>(0x559540, arg1, arg2);
    }

    // 0x5595D0 | ?InitFields@MetaClass@@QAEXXZ
    inline void InitFields()
    {
        return stub<member_func_t<void, MetaClass>>(0x5595D0, this);
    }

    // 0x5595F0 | ?Save@MetaClass@@QAEXPAVMiniParser@@PAX@Z
    inline void Save(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, MetaClass, class MiniParser*, void*>>(0x5595F0, this, arg1, arg2);
    }

    // 0x559740 | ?SkipBlock@MetaClass@@QAEXPAVMiniParser@@@Z
    inline void SkipBlock(class MiniParser* arg1)
    {
        return stub<member_func_t<void, MetaClass, class MiniParser*>>(0x559740, this, arg1);
    }

    // 0x5597F0 | ?Load@MetaClass@@QAEXPAVMiniParser@@PAX@Z
    inline void Load(class MiniParser* arg1, void* arg2)
    {
        return stub<member_func_t<void, MetaClass, class MiniParser*, void*>>(0x5597F0, this, arg1, arg2);
    }

    // 0x559960 | ?DeclareNamedTypedField@MetaClass@@SAXPADIPAUMetaType@@@Z
    static inline void DeclareNamedTypedField(char* arg1, uint32_t arg2, struct MetaType* arg3)
    {
        return stub<cdecl_t<void, char*, uint32_t, struct MetaType*>>(0x559960, arg1, arg2, arg3);
    }

    // 0x711B38 | ?NextSerial@MetaClass@@2HA
    static inline extern_var(0x711B38, int32_t, NextSerial);

    // 0x711B40 | ?ClassIndex@MetaClass@@2PAPAV1@A
    static inline extern_var(0x711B40, class MetaClass**, ClassIndex);

    // 0x711F40 | ?Current@MetaClass@@2PAV1@A
    static inline extern_var(0x711F40, class MetaClass*, Current);

    // 0x711F44 | ?ppField@MetaClass@@2PAPAUMetaField@@A
    static inline extern_var(0x711F44, struct MetaField**, ppField);

    // 0x711F48 | ?RootMetaClass@MetaClass@@2V1@A
    static inline extern_var(0x711F48, class MetaClass, RootMetaClass);
};
