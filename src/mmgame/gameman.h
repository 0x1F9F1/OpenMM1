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
    mmgame:gameman

    0x4029F0 | public: virtual void __thiscall mmScreenClearFlunky::Update(void) | ?Update@mmScreenClearFlunky@@UAEXXZ
    0x402A20 | public: virtual void __thiscall mmScreenClearFlunky::Cull(void) | ?Cull@mmScreenClearFlunky@@UAEXXZ
    0x402B60 | public: __thiscall mmGameManager::mmGameManager(void) | ??0mmGameManager@@QAE@XZ
    0x402F70 | public: virtual __thiscall mmGameManager::~mmGameManager(void) | ??1mmGameManager@@UAE@XZ
    0x403080 | public: void __thiscall mmGameManager::BeDone(void) | ?BeDone@mmGameManager@@QAEXXZ
    0x403090 | public: virtual void __thiscall mmGameManager::Update(void) | ?Update@mmGameManager@@UAEXXZ
    0x403330 | public: virtual void __thiscall mmGameManager::Cull(void) | ?Cull@mmGameManager@@UAEXXZ
    0x403370 | public: void __thiscall mmGameManager::StartReplay(void) | ?StartReplay@mmGameManager@@QAEXXZ
    0x403390 | public: void __thiscall mmGameManager::LoadReplay(char *) | ?LoadReplay@mmGameManager@@QAEXPAD@Z
    0x403460 | public: void __thiscall mmGameManager::SaveReplay(char *) | ?SaveReplay@mmGameManager@@QAEXPAD@Z
    0x4034F0 | public: virtual void __thiscall mmGameManager::Reset(void) | ?Reset@mmGameManager@@UAEXXZ
    0x403500 | public: float __thiscall mmGameManager::GetBrakes(void) | ?GetBrakes@mmGameManager@@QAEMXZ
    0x403530 | public: float __thiscall mmGameManager::GetSteering(void) | ?GetSteering@mmGameManager@@QAEMXZ
    0x403560 | public: float __thiscall mmGameManager::GetThrottle(void) | ?GetThrottle@mmGameManager@@QAEMXZ
    0x403590 | public: static void __cdecl mmGameManager::DeclareFields(void) | ?DeclareFields@mmGameManager@@SAXXZ
    0x403700 | public: virtual class MetaClass * __thiscall mmGameManager::GetClass(void) | ?GetClass@mmGameManager@@UAEPAVMetaClass@@XZ
    0x403740 | public: virtual void * __thiscall mmScreenClearFlunky::`scalar deleting destructor'(unsigned int) | ??_GmmScreenClearFlunky@@UAEPAXI@Z
    0x403740 | public: virtual void * __thiscall mmScreenClearFlunky::`vector deleting destructor'(unsigned int) | ??_EmmScreenClearFlunky@@UAEPAXI@Z
    0x403770 | public: virtual __thiscall mmScreenClearFlunky::~mmScreenClearFlunky(void) | ??1mmScreenClearFlunky@@UAE@XZ
    0x403780 | public: virtual void __thiscall asNode::UpdatePaused(void) | ?UpdatePaused@asNode@@UAEXXZ
    0x403790 | public: virtual void * __thiscall mmGameManager::`vector deleting destructor'(unsigned int) | ??_EmmGameManager@@UAEPAXI@Z
    0x58F438 | const mmScreenClearFlunky::`vftable' | ??_7mmScreenClearFlunky@@6B@
    0x58F468 | const mmGameManager::`vftable' | ??_7mmGameManager@@6B@
    0x5D4504 | unsigned char dummyGlobal2 | ?dummyGlobal2@@3EA
    0x6090F0 | int ScreenClearCount | ?ScreenClearCount@@3HA
    0x6090F8 | class Stream * ReplayLog | ?ReplayLog@@3PAVStream@@A
    0x609100 | class MetaClass mmGameManagerMetaClass | ?mmGameManagerMetaClass@@3VMetaClass@@A
    0x60912C | private: static class mmGameManager * mmGameManager::Instance | ?Instance@mmGameManager@@0PAV1@A
    0x402F50 | void __cdecl randcall(void) | ?randcall@@YAXXZ
    0x4032B0 | void __cdecl DoScan(void *) | ?DoScan@@YAXPAX@Z
    0x4035E0 | void * __cdecl new_mmGameManager(int) | ?new_mmGameManager@@YAPAXH@Z
    0x4036B0 | void __cdecl delete_mmGameManager(void *,int) | ?delete_mmGameManager@@YAXPAXH@Z
*/

// 0x5D4504 | ?dummyGlobal2@@3EA
inline extern_var(0x5D4504, uint8_t, dummyGlobal2);

// 0x6090F0 | ?ScreenClearCount@@3HA
inline extern_var(0x6090F0, int32_t, ScreenClearCount);

// 0x6090F8 | ?ReplayLog@@3PAVStream@@A
inline extern_var(0x6090F8, class Stream*, ReplayLog);

// 0x609100 | ?mmGameManagerMetaClass@@3VMetaClass@@A
inline extern_var(0x609100, class MetaClass, mmGameManagerMetaClass);

// 0x402F50 | ?randcall@@YAXXZ
inline void randcall()
{
    return stub<cdecl_t<void>>(0x402F50);
}

// 0x4032B0 | ?DoScan@@YAXPAX@Z
inline void DoScan(void* arg1)
{
    return stub<cdecl_t<void, void*>>(0x4032B0, arg1);
}

// 0x4035E0 | ?new_mmGameManager@@YAPAXH@Z
// 0x4036B0 | ?delete_mmGameManager@@YAXPAXH@Z

class mmGameManager : asNode
{
public:
    // mmGameManager::`vftable' @ 0x58F468

    // 0x402B60 | ??0mmGameManager@@QAE@XZ
    inline mmGameManager()
    {
        // stub<member_func_t<void, mmGameManager>>(0x402B60, this);

        unimplemented();
    }

    // 0x403080 | ?BeDone@mmGameManager@@QAEXXZ
    inline void BeDone()
    {
        return stub<member_func_t<void, mmGameManager>>(0x403080, this);
    }

    // 0x403370 | ?StartReplay@mmGameManager@@QAEXXZ
    inline void StartReplay()
    {
        return stub<member_func_t<void, mmGameManager>>(0x403370, this);
    }

    // 0x403390 | ?LoadReplay@mmGameManager@@QAEXPAD@Z
    inline void LoadReplay(char* arg1)
    {
        return stub<member_func_t<void, mmGameManager, char*>>(0x403390, this, arg1);
    }

    // 0x403460 | ?SaveReplay@mmGameManager@@QAEXPAD@Z
    inline void SaveReplay(char* arg1)
    {
        return stub<member_func_t<void, mmGameManager, char*>>(0x403460, this, arg1);
    }

    // 0x403500 | ?GetBrakes@mmGameManager@@QAEMXZ
    inline float GetBrakes()
    {
        return stub<member_func_t<float, mmGameManager>>(0x403500, this);
    }

    // 0x403530 | ?GetSteering@mmGameManager@@QAEMXZ
    inline float GetSteering()
    {
        return stub<member_func_t<float, mmGameManager>>(0x403530, this);
    }

    // 0x403560 | ?GetThrottle@mmGameManager@@QAEMXZ
    inline float GetThrottle()
    {
        return stub<member_func_t<float, mmGameManager>>(0x403560, this);
    }

    // 0x403590 | ?DeclareFields@mmGameManager@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x403590);
    }

    // 0x60912C | ?Instance@mmGameManager@@0PAV1@A
    static inline extern_var(0x60912C, class mmGameManager*, Instance);

    // 0x402F70 | ??1mmGameManager@@UAE@XZ
    inline ~mmGameManager() override = 0
    {
        // stub<member_func_t<void, mmGameManager>>(0x402F70, this);

        unimplemented();
    }

    // 0x403700 | ?GetClass@mmGameManager@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmGameManager>>(0x403700, this);
    }

    // 0x403330 | ?Cull@mmGameManager@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmGameManager>>(0x403330, this);
    }

    // 0x403090 | ?Update@mmGameManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmGameManager>>(0x403090, this);
    }

    // 0x4034F0 | ?Reset@mmGameManager@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmGameManager>>(0x4034F0, this);
    }
};

struct mmScreenClearFlunky : asNode
{
public:
    // mmScreenClearFlunky::`vftable' @ 0x58F438

    // 0x403770 | ??1mmScreenClearFlunky@@UAE@XZ
    inline ~mmScreenClearFlunky() override = 0
    {
        // stub<member_func_t<void, mmScreenClearFlunky>>(0x403770, this);

        unimplemented();
    }

    // 0x402A20 | ?Cull@mmScreenClearFlunky@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmScreenClearFlunky>>(0x402A20, this);
    }

    // 0x4029F0 | ?Update@mmScreenClearFlunky@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmScreenClearFlunky>>(0x4029F0, this);
    }
};
