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

// 0x5CE3B0 | ?NoDefault@@3HA
inline extern_var(0x5CE3B0, int32_t, NoDefault);

struct MetaType;
class Base;
class MiniParser;

struct MetaField
{
    MetaField* m_Next {nullptr};
    const char* m_Name {nullptr};
    uint32_t m_Offset {0};
    MetaType* m_pType {nullptr};
};

constexpr const size_t MAX_CLASSES = 256;

class MetaClass
{
public:
    const char* m_Name {nullptr};
    uint32_t m_Size {0};
    void* (*m_Allocate)(int32_t) {nullptr};
    void (*m_Free)(void*, int32_t) {nullptr};
    void (*m_Declare)() {nullptr};
    MetaClass* m_Parent {nullptr};
    MetaClass* m_Children {nullptr};
    MetaClass* m_Next {nullptr};
    MetaField* m_pFields {nullptr};
    int32_t m_Index {0};

    // 0x559400 | ??0MetaClass@@QAE@PADIP6APAXH@ZP6AXPAXH@ZP6AXXZPAV0@@Z
    MetaClass(const char* name, uint32_t size, void* (*allocate)(int32_t), void (*free)(void*, int32_t),
        void (*declare)(void), MetaClass* parent);

    // 0x559480 | ??1MetaClass@@QAE@XZ
    ~MetaClass();

    // 0x5594E0 | ?UndeclareAll@MetaClass@@SAXXZ
    static void UndeclareAll();

    // 0x559510 | ?IsSubclassOf@MetaClass@@QAEHPAV1@@Z
    int32_t IsSubclassOf(class MetaClass* parent);

    // 0x559540 | ?FindByName@MetaClass@@SAPAV1@PADPAV1@@Z
    static class MetaClass* FindByName(const char* name, class MetaClass* classes);

    // 0x5595D0 | ?InitFields@MetaClass@@QAEXXZ
    void InitFields();

    // 0x5595F0 | ?Save@MetaClass@@QAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr);

    // 0x559740 | ?SkipBlock@MetaClass@@QAEXPAVMiniParser@@@Z
    void SkipBlock(class MiniParser* parser);

    // 0x5597F0 | ?Load@MetaClass@@QAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr);

    // 0x559960 | ?DeclareNamedTypedField@MetaClass@@SAXPADIPAUMetaType@@@Z
    static void DeclareNamedTypedField(const char* name, uint32_t offset, struct MetaType* type);

    // 0x711B38 | ?NextSerial@MetaClass@@2HA
    static inline extern_var(0x711B38, int32_t, NextSerial);

    // 0x711B40 | ?ClassIndex@MetaClass@@2PAPAV1@A
    static inline extern_var(0x711B40, class MetaClass * [MAX_CLASSES], ClassIndex);

    // 0x711F40 | ?Current@MetaClass@@2PAV1@A
    static inline extern_var(0x711F40, class MetaClass*, Current);

    // 0x711F44 | ?ppField@MetaClass@@2PAPAUMetaField@@A
    static inline extern_var(0x711F44, struct MetaField**, ppField);

    // 0x711F48 | ?RootMetaClass@MetaClass@@2V1@A
    static inline extern_var(0x711F48, class MetaClass, RootMetaClass);
};

check_size(MetaField, 0x10);
check_size(MetaClass, 0x28);

// 0x5595B0 | ?__BadSafeCall@@YAXPADPAVBase@@@Z
void _BadSafeCall(char* name, Base* ptr);

template <typename T>
inline void* ptrCreator(int32_t count)
{
    return static_cast<void*>(count ? new T[count]() : new T());
}

template <typename T>
inline void ptrDestructor(void* ptr, int32_t count)
{
    if (count)
    {
        delete[] static_cast<T*>(ptr);
    }
    else
    {
        delete static_cast<T*>(ptr);
    }
}
