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
    mmbangers:data

    0x4BCB70 | public: int __thiscall mmBangerData::LoadEntry(char *) | ?LoadEntry@mmBangerData@@QAEHPAD@Z
    0x4BCD30 | public: void __thiscall mmBangerData::LaunchInstance(float,class Vector3 *) | ?LaunchInstance@mmBangerData@@QAEXMPAVVector3@@@Z
    0x4BD000 | public: __thiscall mmBangerDataManager::mmBangerDataManager(void) | ??0mmBangerDataManager@@QAE@XZ
    0x4BD120 | public: virtual __thiscall mmBangerDataManager::~mmBangerDataManager(void) | ??1mmBangerDataManager@@UAE@XZ
    0x4BD1E0 | public: int __thiscall mmBangerDataManager::AddBangerDataEntry(char *,char *) | ?AddBangerDataEntry@mmBangerDataManager@@QAEHPAD0@Z
    0x4BD430 | public: int __thiscall mmBangerData::Bootstrap(char *,char *) | ?Bootstrap@mmBangerData@@QAEHPAD0@Z
    0x4BD490 | public: void __thiscall mmBangerData::BootstrapBreakablesOnly(char *) | ?BootstrapBreakablesOnly@mmBangerData@@QAEXPAD@Z
    0x4BD4D0 | public: void __thiscall mmBangerData::InitBreakables(char *) | ?InitBreakables@mmBangerData@@QAEXPAD@Z
    0x4BD710 | public: int __thiscall mmBangerData::InitPhysics(char *,char *) | ?InitPhysics@mmBangerData@@QAEHPAD0@Z
    0x4BD990 | public: void __thiscall mmBangerData::ComputeYRadius(char *) | ?ComputeYRadius@mmBangerData@@QAEXPAD@Z
    0x4BDAD0 | public: virtual void __thiscall mmBangerDataManager::Save(void) | ?Save@mmBangerDataManager@@UAEXXZ
    0x4BDB00 | public: static void __cdecl mmBangerData::DeclareFields(void) | ?DeclareFields@mmBangerData@@SAXXZ
    0x4BDE80 | public: virtual class MetaClass * __thiscall mmBangerData::GetClass(void) | ?GetClass@mmBangerData@@UAEPAVMetaClass@@XZ
    0x4BDE90 | public: static void __cdecl mmBangerDataManager::DeclareFields(void) | ?DeclareFields@mmBangerDataManager@@SAXXZ
    0x4BE000 | public: virtual class MetaClass * __thiscall mmBangerDataManager::GetClass(void) | ?GetClass@mmBangerDataManager@@UAEPAVMetaClass@@XZ
    0x4BE010 | struct MetaType * __cdecl RefTo(struct MetaType *,int,short *) | ?RefTo@@YAPAUMetaType@@PAU1@HPAF@Z
    0x4BE050 | public: virtual void * __thiscall mmBangerData::`vector deleting destructor'(unsigned int) | ??_EmmBangerData@@UAEPAXI@Z
    0x4BE0B0 | public: virtual void * __thiscall mmBangerDataManager::`vector deleting destructor'(unsigned int) | ??_EmmBangerDataManager@@UAEPAXI@Z
    0x4BE110 | public: __thiscall mmBangerData::mmBangerData(void) | ??0mmBangerData@@QAE@XZ
    0x4BE1A0 | public: virtual __thiscall mmBangerData::~mmBangerData(void) | ??1mmBangerData@@UAE@XZ
    0x594278 | const mmBangerDataManager::`vftable' | ??_7mmBangerDataManager@@6B@
    0x5942A8 | const RefToType::`vftable' | ??_7RefToType@@6B@
    0x5942C0 | const mmBangerData::`vftable' | ??_7mmBangerData@@6B@
    0x6682D8 | class MetaClass mmBangerDataMetaClass | ?mmBangerDataMetaClass@@3VMetaClass@@A
    0x668300 | public: static float mmBangerDataManager::FloatClock | ?FloatClock@mmBangerDataManager@@2MA
    0x668304 | protected: static class mmBangerDataManager * mmBangerDataManager::Instance | ?Instance@mmBangerDataManager@@1PAV1@A
    0x668318 | public: static int mmBangerDataManager::SignalClock | ?SignalClock@mmBangerDataManager@@2HA
    0x668330 | class MetaClass mmBangerDataManagerMetaClass | ?mmBangerDataManagerMetaClass@@3VMetaClass@@A
    0x4BDD00 | void * __cdecl new_mmBangerData(int) | ?new_mmBangerData@@YAPAXH@Z
    0x4BDE30 | void __cdecl delete_mmBangerData(void *,int) | ?delete_mmBangerData@@YAXPAXH@Z
    0x4BDEE0 | void * __cdecl new_mmBangerDataManager(int) | ?new_mmBangerDataManager@@YAPAXH@Z
    0x4BDFB0 | void __cdecl delete_mmBangerDataManager(void *,int) | ?delete_mmBangerDataManager@@YAXPAXH@Z
*/

// 0x4BE010 | ?RefTo@@YAPAUMetaType@@PAU1@HPAF@Z
inline struct MetaType* RefTo(struct MetaType* arg1, int32_t arg2, int16_t* arg3)
{
    return stub<cdecl_t<struct MetaType*, struct MetaType*, int32_t, int16_t*>>(0x4BE010, arg1, arg2, arg3);
}

// 0x6682D8 | ?mmBangerDataMetaClass@@3VMetaClass@@A
inline extern_var(0x6682D8, class MetaClass, mmBangerDataMetaClass);

// 0x668330 | ?mmBangerDataManagerMetaClass@@3VMetaClass@@A
inline extern_var(0x668330, class MetaClass, mmBangerDataManagerMetaClass);

// 0x4BDD00 | ?new_mmBangerData@@YAPAXH@Z
inline void* new_mmBangerData(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4BDD00, arg1);
}

// 0x4BDE30 | ?delete_mmBangerData@@YAXPAXH@Z
inline void delete_mmBangerData(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4BDE30, arg1, arg2);
}

// 0x4BDEE0 | ?new_mmBangerDataManager@@YAPAXH@Z
inline void* new_mmBangerDataManager(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4BDEE0, arg1);
}

// 0x4BDFB0 | ?delete_mmBangerDataManager@@YAXPAXH@Z
inline void delete_mmBangerDataManager(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4BDFB0, arg1, arg2);
}

class mmBangerData : asNode
{
public:
    // mmBangerData::`vftable' @ 0x5942C0

    // 0x4BCB70 | ?LoadEntry@mmBangerData@@QAEHPAD@Z
    inline int32_t LoadEntry(char* arg1)
    {
        return stub<member_func_t<int32_t, mmBangerData, char*>>(0x4BCB70, this, arg1);
    }

    // 0x4BCD30 | ?LaunchInstance@mmBangerData@@QAEXMPAVVector3@@@Z
    inline void LaunchInstance(float arg1, class Vector3* arg2)
    {
        return stub<member_func_t<void, mmBangerData, float, class Vector3*>>(0x4BCD30, this, arg1, arg2);
    }

    // 0x4BD430 | ?Bootstrap@mmBangerData@@QAEHPAD0@Z
    inline int32_t Bootstrap(char* arg1, char* arg2)
    {
        return stub<member_func_t<int32_t, mmBangerData, char*, char*>>(0x4BD430, this, arg1, arg2);
    }

    // 0x4BD490 | ?BootstrapBreakablesOnly@mmBangerData@@QAEXPAD@Z
    inline void BootstrapBreakablesOnly(char* arg1)
    {
        return stub<member_func_t<void, mmBangerData, char*>>(0x4BD490, this, arg1);
    }

    // 0x4BD4D0 | ?InitBreakables@mmBangerData@@QAEXPAD@Z
    inline void InitBreakables(char* arg1)
    {
        return stub<member_func_t<void, mmBangerData, char*>>(0x4BD4D0, this, arg1);
    }

    // 0x4BD710 | ?InitPhysics@mmBangerData@@QAEHPAD0@Z
    inline int32_t InitPhysics(char* arg1, char* arg2)
    {
        return stub<member_func_t<int32_t, mmBangerData, char*, char*>>(0x4BD710, this, arg1, arg2);
    }

    // 0x4BD990 | ?ComputeYRadius@mmBangerData@@QAEXPAD@Z
    inline void ComputeYRadius(char* arg1)
    {
        return stub<member_func_t<void, mmBangerData, char*>>(0x4BD990, this, arg1);
    }

    // 0x4BDB00 | ?DeclareFields@mmBangerData@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4BDB00);
    }

    // 0x4BE110 | ??0mmBangerData@@QAE@XZ
    inline mmBangerData()
    {
        // stub<member_func_t<void, mmBangerData>>(0x4BE110, this);

        unimplemented();
    }

    // 0x4BE1A0 | ??1mmBangerData@@UAE@XZ
    inline ~mmBangerData() override = 0
    {
        // stub<member_func_t<void, mmBangerData>>(0x4BE1A0, this);

        unimplemented();
    }

    // 0x4BDE80 | ?GetClass@mmBangerData@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmBangerData>>(0x4BDE80, this);
    }
};

class mmBangerDataManager : asNode
{
public:
    // mmBangerDataManager::`vftable' @ 0x594278

    // 0x4BD000 | ??0mmBangerDataManager@@QAE@XZ
    inline mmBangerDataManager()
    {
        // stub<member_func_t<void, mmBangerDataManager>>(0x4BD000, this);

        unimplemented();
    }

    // 0x4BD1E0 | ?AddBangerDataEntry@mmBangerDataManager@@QAEHPAD0@Z
    inline int32_t AddBangerDataEntry(char* arg1, char* arg2)
    {
        return stub<member_func_t<int32_t, mmBangerDataManager, char*, char*>>(0x4BD1E0, this, arg1, arg2);
    }

    // 0x4BDE90 | ?DeclareFields@mmBangerDataManager@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4BDE90);
    }

    // 0x668300 | ?FloatClock@mmBangerDataManager@@2MA
    static inline extern_var(0x668300, float, FloatClock);

    // 0x668304 | ?Instance@mmBangerDataManager@@1PAV1@A
    static inline extern_var(0x668304, class mmBangerDataManager*, Instance);

    // 0x668318 | ?SignalClock@mmBangerDataManager@@2HA
    static inline extern_var(0x668318, int32_t, SignalClock);

    // 0x4BD120 | ??1mmBangerDataManager@@UAE@XZ
    inline ~mmBangerDataManager() override = 0
    {
        // stub<member_func_t<void, mmBangerDataManager>>(0x4BD120, this);

        unimplemented();
    }

    // 0x4BE000 | ?GetClass@mmBangerDataManager@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmBangerDataManager>>(0x4BE000, this);
    }

    // 0x4BDAD0 | ?Save@mmBangerDataManager@@UAEXXZ
    inline void Save() override
    {
        return stub<member_func_t<void, mmBangerDataManager>>(0x4BDAD0, this);
    }
};
