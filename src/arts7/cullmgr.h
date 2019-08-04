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
    arts7:cullmgr

    0x511940 | public: __thiscall asCullManager::asCullManager(int,int) | ??0asCullManager@@QAE@HH@Z
    0x511A20 | public: virtual __thiscall asCullManager::~asCullManager(void) | ??1asCullManager@@UAE@XZ
    0x511AC0 | public: virtual void __thiscall asCullManager::Reset(void) | ?Reset@asCullManager@@UAEXXZ
    0x511B20 | protected: void __thiscall asCullManager::DisplayVersionString(void) | ?DisplayVersionString@asCullManager@@IAEXXZ
    0x511B40 | void __cdecl Statsf(char const *,...) | ?Statsf@@YAXPBDZZ
    0x511BD0 | protected: void __thiscall asCullManager::PrintMiniStats(void) | ?PrintMiniStats@asCullManager@@IAEXXZ
    0x511C60 | protected: void __thiscall asCullManager::PrintStats(void) | ?PrintStats@asCullManager@@IAEXXZ
    0x511D60 | public: virtual void __thiscall asCullManager::Update(void) | ?Update@asCullManager@@UAEXXZ
    0x512040 | public: virtual void __thiscall asCullManager::DeclareCamera(class asCamera *) | ?DeclareCamera@asCullManager@@UAEXPAVasCamera@@@Z
    0x5120A0 | public: virtual void __thiscall asCullManager::DeclareCullable(class asCullable *) | ?DeclareCullable@asCullManager@@UAEXPAVasCullable@@@Z
    0x512140 | public: virtual void __thiscall asCullManager::DeclareCullable2D(class asCullable *) | ?DeclareCullable2D@asCullManager@@UAEXPAVasCullable@@@Z
    0x5121E0 | public: void __thiscall asCullManager::DeclareBitmap(class asCullable *,class agiBitmap *) | ?DeclareBitmap@asCullManager@@QAEXPAVasCullable@@PAVagiBitmap@@@Z
    0x512250 | public: void __thiscall asCullManager::DeclarePrint(class asCullable *) | ?DeclarePrint@asCullManager@@QAEXPAVasCullable@@@Z
    0x5122C0 | public: static void __cdecl asCullManager::DeclareFields(void) | ?DeclareFields@asCullManager@@SAXXZ
    0x512440 | public: virtual class MetaClass * __thiscall asCullManager::GetClass(void) | ?GetClass@asCullManager@@UAEPAVMetaClass@@XZ
    0x512450 | public: virtual void * __thiscall asCullManager::`vector deleting destructor'(unsigned int) | ??_EasCullManager@@UAEPAXI@Z
    0x5124B0 | public: void __thiscall asCullManager::`default constructor closure'(void) | ??_FasCullManager@@QAEXXZ
    0x5953F8 | const asCullManager::`vftable' | ??_7asCullManager@@6B@
    0x6F2B2C | class asCullManager * CULLMGR | ?CULLMGR@@3PAVasCullManager@@A
    0x6F2B40 | class MetaClass asCullManagerMetaClass | ?asCullManagerMetaClass@@3VMetaClass@@A
    0x6F2B68 | float Update3D | ?Update3D@@3MA
    0x512310 | void * __cdecl new_asCullManager(int) | ?new_asCullManager@@YAPAXH@Z
    0x5123F0 | void __cdecl delete_asCullManager(void *,int) | ?delete_asCullManager@@YAXPAXH@Z
*/

// 0x511B40 | ?Statsf@@YAXPBDZZ
// Skipped (Variable Arguments)

// 0x6F2B2C | ?CULLMGR@@3PAVasCullManager@@A
inline extern_var(0x6F2B2C, class asCullManager*, CULLMGR);

// 0x6F2B40 | ?asCullManagerMetaClass@@3VMetaClass@@A
inline extern_var(0x6F2B40, class MetaClass, asCullManagerMetaClass);

// 0x6F2B68 | ?Update3D@@3MA
inline extern_var(0x6F2B68, float, Update3D);

// 0x512310 | ?new_asCullManager@@YAPAXH@Z
// 0x5123F0 | ?delete_asCullManager@@YAXPAXH@Z

class asCullManager : asNode
{
public:
    // asCullManager::`vftable' @ 0x5953F8

    // 0x511940 | ??0asCullManager@@QAE@HH@Z
    inline asCullManager(int32_t arg1, int32_t arg2)
    {
        // stub<member_func_t<void, asCullManager, int32_t, int32_t>>(0x511940, this, arg1, arg2);

        unimplemented();
    }

    // 0x511B20 | ?DisplayVersionString@asCullManager@@IAEXXZ
    inline void DisplayVersionString()
    {
        return stub<member_func_t<void, asCullManager>>(0x511B20, this);
    }

    // 0x511BD0 | ?PrintMiniStats@asCullManager@@IAEXXZ
    inline void PrintMiniStats()
    {
        return stub<member_func_t<void, asCullManager>>(0x511BD0, this);
    }

    // 0x511C60 | ?PrintStats@asCullManager@@IAEXXZ
    inline void PrintStats()
    {
        return stub<member_func_t<void, asCullManager>>(0x511C60, this);
    }

    // 0x5121E0 | ?DeclareBitmap@asCullManager@@QAEXPAVasCullable@@PAVagiBitmap@@@Z
    inline void DeclareBitmap(class asCullable* arg1, class agiBitmap* arg2)
    {
        return stub<member_func_t<void, asCullManager, class asCullable*, class agiBitmap*>>(
            0x5121E0, this, arg1, arg2);
    }

    // 0x512250 | ?DeclarePrint@asCullManager@@QAEXPAVasCullable@@@Z
    inline void DeclarePrint(class asCullable* arg1)
    {
        return stub<member_func_t<void, asCullManager, class asCullable*>>(0x512250, this, arg1);
    }

    // 0x5122C0 | ?DeclareFields@asCullManager@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x5122C0);
    }

    // 0x511A20 | ??1asCullManager@@UAE@XZ
    inline ~asCullManager() override = 0
    {
        // stub<member_func_t<void, asCullManager>>(0x511A20, this);

        unimplemented();
    }

    // 0x512440 | ?GetClass@asCullManager@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asCullManager>>(0x512440, this);
    }

    // 0x511D60 | ?Update@asCullManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asCullManager>>(0x511D60, this);
    }

    // 0x511AC0 | ?Reset@asCullManager@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, asCullManager>>(0x511AC0, this);
    }

    // 0x512040 | ?DeclareCamera@asCullManager@@UAEXPAVasCamera@@@Z
    virtual inline void DeclareCamera(class asCamera* arg1)
    {
        return stub<member_func_t<void, asCullManager, class asCamera*>>(0x512040, this, arg1);
    }

    // 0x5120A0 | ?DeclareCullable@asCullManager@@UAEXPAVasCullable@@@Z
    virtual inline void DeclareCullable(class asCullable* arg1)
    {
        return stub<member_func_t<void, asCullManager, class asCullable*>>(0x5120A0, this, arg1);
    }

    // 0x512140 | ?DeclareCullable2D@asCullManager@@UAEXPAVasCullable@@@Z
    virtual inline void DeclareCullable2D(class asCullable* arg1)
    {
        return stub<member_func_t<void, asCullManager, class asCullable*>>(0x512140, this, arg1);
    }
};
