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
    mmcar:shard

    0x470130 | public: __thiscall mmShard::mmShard(void) | ??0mmShard@@QAE@XZ
    0x470170 | public: void __thiscall mmShard::Init(char *,int) | ?Init@mmShard@@QAEXPADH@Z
    0x4701A0 | public: virtual __thiscall mmShard::~mmShard(void) | ??1mmShard@@UAE@XZ
    0x4701B0 | public: void __thiscall mmShard::AddShard(class Vector3,class Vector3,class Vector3,float) | ?AddShard@mmShard@@QAEXVVector3@@00M@Z
    0x470210 | public: void __thiscall mmShard::Update(void) | ?Update@mmShard@@QAEXXZ
    0x4702F0 | public: virtual void __fastcall mmShard::Draw(int) | ?Draw@mmShard@@UAIXH@Z
    0x4703A0 | public: __thiscall mmShardManager::mmShardManager(void) | ??0mmShardManager@@QAE@XZ
    0x470410 | public: virtual __thiscall mmShardManager::~mmShardManager(void) | ??1mmShardManager@@UAE@XZ
    0x470480 | public: static class mmShardManager * __cdecl mmShardManager::GetInstance(int) | ?GetInstance@mmShardManager@@SAPAV1@H@Z
    0x4704A0 | public: void __thiscall mmShardManager::Init(char *,int,class mmCarSim *) | ?Init@mmShardManager@@QAEXPADHPAVmmCarSim@@@Z
    0x470590 | public: void __thiscall mmShardManager::ReInit(class mmCarSim *) | ?ReInit@mmShardManager@@QAEXPAVmmCarSim@@@Z
    0x4705A0 | public: void __thiscall mmShardManager::EmitShards(class Vector3,float,float) | ?EmitShards@mmShardManager@@QAEXVVector3@@MM@Z
    0x470610 | public: void __thiscall mmShardManager::EmitAllShards(class Vector3,float) | ?EmitAllShards@mmShardManager@@QAEXVVector3@@M@Z
    0x470660 | public: void __thiscall mmShardManager::EmitShard(class Vector3,float) | ?EmitShard@mmShardManager@@QAEXVVector3@@M@Z
    0x470810 | public: virtual void __thiscall mmShardManager::Update(void) | ?Update@mmShardManager@@UAEXXZ
    0x470840 | public: static void __cdecl mmShard::DeclareFields(void) | ?DeclareFields@mmShard@@SAXXZ
    0x4709C0 | public: virtual class MetaClass * __thiscall mmShard::GetClass(void) | ?GetClass@mmShard@@UAEPAVMetaClass@@XZ
    0x4709D0 | public: static void __cdecl mmShardManager::DeclareFields(void) | ?DeclareFields@mmShardManager@@SAXXZ
    0x470B90 | public: virtual class MetaClass * __thiscall mmShardManager::GetClass(void) | ?GetClass@mmShardManager@@UAEPAVMetaClass@@XZ
    0x470BA0 | public: virtual void * __thiscall mmShard::`vector deleting destructor'(unsigned int) | ??_EmmShard@@UAEPAXI@Z
    0x470C00 | public: virtual void * __thiscall mmShardManager::`vector deleting destructor'(unsigned int) | ??_EmmShardManager@@UAEPAXI@Z
    0x5912D8 | const mmShard::`vftable' | ??_7mmShard@@6B@
    0x591368 | const mmShardManager::`vftable' | ??_7mmShardManager@@6B@
    0x60A280 | class MetaClass mmShardManagerMetaClass | ?mmShardManagerMetaClass@@3VMetaClass@@A
    0x60A2A8 | protected: static class mmShardManager * * mmShardManager::Instances | ?Instances@mmShardManager@@1PAPAV1@A
    0x60A2F8 | class MetaClass mmShardMetaClass | ?mmShardMetaClass@@3VMetaClass@@A
    0x60A320 | protected: static int mmShardManager::NumInstances | ?NumInstances@mmShardManager@@1HA
    0x470890 | void * __cdecl new_mmShard(int) | ?new_mmShard@@YAPAXH@Z
    0x470970 | void __cdecl delete_mmShard(void *,int) | ?delete_mmShard@@YAXPAXH@Z
    0x470A80 | void * __cdecl new_mmShardManager(int) | ?new_mmShardManager@@YAPAXH@Z
    0x470B40 | void __cdecl delete_mmShardManager(void *,int) | ?delete_mmShardManager@@YAXPAXH@Z
*/

// 0x60A280 | ?mmShardManagerMetaClass@@3VMetaClass@@A
inline extern_var(0x60A280, class MetaClass, mmShardManagerMetaClass);

// 0x60A2F8 | ?mmShardMetaClass@@3VMetaClass@@A
inline extern_var(0x60A2F8, class MetaClass, mmShardMetaClass);

// 0x470890 | ?new_mmShard@@YAPAXH@Z
inline void* new_mmShard(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x470890, arg1);
}

// 0x470970 | ?delete_mmShard@@YAXPAXH@Z
inline void delete_mmShard(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x470970, arg1, arg2);
}

// 0x470A80 | ?new_mmShardManager@@YAPAXH@Z
inline void* new_mmShardManager(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x470A80, arg1);
}

// 0x470B40 | ?delete_mmShardManager@@YAXPAXH@Z
inline void delete_mmShardManager(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x470B40, arg1, arg2);
}

class mmShardManager : asNode
{
public:
    // mmShardManager::`vftable' @ 0x591368

    // 0x4703A0 | ??0mmShardManager@@QAE@XZ
    inline mmShardManager()
    {
        // stub<member_func_t<void, mmShardManager>>(0x4703A0, this);

        unimplemented();
    }

    // 0x470480 | ?GetInstance@mmShardManager@@SAPAV1@H@Z
    static inline class mmShardManager* GetInstance(int32_t arg1)
    {
        return stub<cdecl_t<class mmShardManager*, int32_t>>(0x470480, arg1);
    }

    // 0x4704A0 | ?Init@mmShardManager@@QAEXPADHPAVmmCarSim@@@Z
    inline void Init(char* arg1, int32_t arg2, class mmCarSim* arg3)
    {
        return stub<member_func_t<void, mmShardManager, char*, int32_t, class mmCarSim*>>(
            0x4704A0, this, arg1, arg2, arg3);
    }

    // 0x470590 | ?ReInit@mmShardManager@@QAEXPAVmmCarSim@@@Z
    inline void ReInit(class mmCarSim* arg1)
    {
        return stub<member_func_t<void, mmShardManager, class mmCarSim*>>(0x470590, this, arg1);
    }

    // 0x4705A0 | ?EmitShards@mmShardManager@@QAEXVVector3@@MM@Z
    inline void EmitShards(class Vector3 arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, mmShardManager, class Vector3, float, float>>(0x4705A0, this, arg1, arg2, arg3);
    }

    // 0x470610 | ?EmitAllShards@mmShardManager@@QAEXVVector3@@M@Z
    inline void EmitAllShards(class Vector3 arg1, float arg2)
    {
        return stub<member_func_t<void, mmShardManager, class Vector3, float>>(0x470610, this, arg1, arg2);
    }

    // 0x470660 | ?EmitShard@mmShardManager@@QAEXVVector3@@M@Z
    inline void EmitShard(class Vector3 arg1, float arg2)
    {
        return stub<member_func_t<void, mmShardManager, class Vector3, float>>(0x470660, this, arg1, arg2);
    }

    // 0x4709D0 | ?DeclareFields@mmShardManager@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4709D0);
    }

    // 0x60A2A8 | ?Instances@mmShardManager@@1PAPAV1@A
    static inline extern_var(0x60A2A8, class mmShardManager**, Instances);

    // 0x60A320 | ?NumInstances@mmShardManager@@1HA
    static inline extern_var(0x60A320, int32_t, NumInstances);

    // 0x470410 | ??1mmShardManager@@UAE@XZ
    inline ~mmShardManager() override = 0
    {
        // stub<member_func_t<void, mmShardManager>>(0x470410, this);

        unimplemented();
    }

    // 0x470B90 | ?GetClass@mmShardManager@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmShardManager>>(0x470B90, this);
    }

    // 0x470810 | ?Update@mmShardManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmShardManager>>(0x470810, this);
    }
};

struct mmShard : mmMatrixInstance
{
public:
    // mmShard::`vftable' @ 0x5912D8

    // 0x470130 | ??0mmShard@@QAE@XZ
    inline mmShard()
    {
        // stub<member_func_t<void, mmShard>>(0x470130, this);

        unimplemented();
    }

    // 0x470170 | ?Init@mmShard@@QAEXPADH@Z
    inline void Init(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmShard, char*, int32_t>>(0x470170, this, arg1, arg2);
    }

    // 0x4701B0 | ?AddShard@mmShard@@QAEXVVector3@@00M@Z
    inline void AddShard(class Vector3 arg1, class Vector3 arg2, class Vector3 arg3, float arg4)
    {
        return stub<member_func_t<void, mmShard, class Vector3, class Vector3, class Vector3, float>>(
            0x4701B0, this, arg1, arg2, arg3, arg4);
    }

    // 0x470210 | ?Update@mmShard@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmShard>>(0x470210, this);
    }

    // 0x470840 | ?DeclareFields@mmShard@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x470840);
    }

    // 0x4701A0 | ??1mmShard@@UAE@XZ
    inline ~mmShard() override = 0
    {
        // stub<member_func_t<void, mmShard>>(0x4701A0, this);

        unimplemented();
    }

    // 0x4709C0 | ?GetClass@mmShard@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmShard>>(0x4709C0, this);
    }

    // 0x4702F0 | ?Draw@mmShard@@UAIXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, mmShard, int32_t>>(0x4702F0, this, arg1);
    }
};
