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
    mmgame:game

    0x40B860 | public: __thiscall mmGame::mmGame(void) | ??0mmGame@@QAE@XZ
    0x40B9F0 | public: int __thiscall mmGame::Init(void) | ?Init@mmGame@@QAEHXZ
    0x40C8B0 | public: virtual void __thiscall mmGame::InitOtherPlayers(void) | ?InitOtherPlayers@mmGame@@UAEXXZ
    0x40C9B0 | public: void __thiscall mmGame::CollideAIOpponents(void) | ?CollideAIOpponents@mmGame@@QAEXXZ
    0x40CAB0 | public: virtual void __thiscall mmGame::InitGameStrings(void) | ?InitGameStrings@mmGame@@UAEXXZ
    0x40CD90 | public: virtual __thiscall mmGame::~mmGame(void) | ??1mmGame@@UAE@XZ
    0x40CF80 | public: void __thiscall mmGame::Stats(void) | ?Stats@mmGame@@QAEXXZ
    0x40D060 | protected: void __thiscall mmGame::RespawnXYZ(class Vector3 &,float &) | ?RespawnXYZ@mmGame@@IAEXAAVVector3@@AAM@Z
    0x40D160 | public: int __thiscall mmGame::IsPopupEnabled(void) | ?IsPopupEnabled@mmGame@@QAEHXZ
    0x40D170 | public: virtual void __thiscall mmGame::Reset(void) | ?Reset@mmGame@@UAEXXZ
    0x40D1D0 | public: virtual void __thiscall mmGame::Update(void) | ?Update@mmGame@@UAEXXZ
    0x40D360 | public: virtual void __thiscall mmGame::DropThruCityHandler(void) | ?DropThruCityHandler@mmGame@@UAEXXZ
    0x40D370 | public: virtual void __thiscall mmGame::HitWaterHandler(void) | ?HitWaterHandler@mmGame@@UAEXXZ
    0x40D380 | public: virtual void __thiscall mmGame::UpdateDebugInput(void) | ?UpdateDebugInput@mmGame@@UAEXXZ
    0x40D540 | public: virtual void __thiscall mmGame::UpdatePaused(void) | ?UpdatePaused@mmGame@@UAEXXZ
    0x40D630 | public: void __thiscall mmGame::UpdateGameInput(void) | ?UpdateGameInput@mmGame@@QAEXXZ
    0x40DAB0 | public: void __thiscall mmGame::UpdateSteeringBrakes(void) | ?UpdateSteeringBrakes@mmGame@@QAEXXZ
    0x40DB90 | public: void __thiscall mmGame::SetIconsState(void) | ?SetIconsState@mmGame@@QAEXXZ
    0x40DBB0 | public: void __thiscall mmGame::PlayerSetState(void) | ?PlayerSetState@mmGame@@QAEXXZ
    0x40DCB0 | protected: int __thiscall mmGame::CalculateRaceScore(int,int) | ?CalculateRaceScore@mmGame@@IAEHHH@Z
    0x40DD20 | public: virtual void __thiscall mmGame::SendChatMessage(char *) | ?SendChatMessage@mmGame@@UAEXPAD@Z
    0x40E170 | public: int __thiscall mmGame::GetCDTrack(short) | ?GetCDTrack@mmGame@@QAEHF@Z
    0x40E640 | private: virtual void __thiscall foobar::Update(void) | ?Update@foobar@@EAEXXZ
    0x40E670 | private: virtual void __thiscall foobar::UpdatePaused(void) | ?UpdatePaused@foobar@@EAEXXZ
    0x40E680 | public: static void __cdecl mmGame::DeclareFields(void) | ?DeclareFields@mmGame@@SAXXZ
    0x40E720 | public: virtual class MetaClass * __thiscall mmGame::GetClass(void) | ?GetClass@mmGame@@UAEPAVMetaClass@@XZ
    0x40E880 | public: virtual void * __thiscall mmGame::`vector deleting destructor'(unsigned int) | ??_EmmGame@@UAEPAXI@Z
    0x40E880 | public: virtual void * __thiscall mmGame::`scalar deleting destructor'(unsigned int) | ??_GmmGame@@UAEPAXI@Z
    0x40E8B0 | public: virtual void __thiscall mmGame::BeDone(void) | ?BeDone@mmGame@@UAEXXZ
    0x58F600 | const mmGame::`vftable' | ??_7mmGame@@6B@
    0x5A56B8 | float ProjectileY | ?ProjectileY@@3MA
    0x5A56C0 | unsigned int * IconColor | ?IconColor@@3PAIA
    0x609268 | char * LocPlayerName | ?LocPlayerName@@3PADA
    0x609298 | class MetaClass mmGameMetaClass | ?mmGameMetaClass@@3VMetaClass@@A
    0x6092C8 | class Vector3 ProjectileV | ?ProjectileV@@3VVector3@@A
    0x6092EC | int masscycle | ?masscycle@@3HA
    0x6092F0 | class mmBangerData * BangerProjectile | ?BangerProjectile@@3PAVmmBangerData@@A
    0x40E6D0 | void __cdecl delete_mmGame(void *,int) | ?delete_mmGame@@YAXPAXH@Z
*/

// 0x5A56B8 | ?ProjectileY@@3MA
inline extern_var(0x5A56B8, float, ProjectileY);

// 0x5A56C0 | ?IconColor@@3PAIA
inline extern_var(0x5A56C0, uint32_t*, IconColor);

// 0x609268 | ?LocPlayerName@@3PADA
inline extern_var(0x609268, char*, LocPlayerName);

// 0x609298 | ?mmGameMetaClass@@3VMetaClass@@A
inline extern_var(0x609298, class MetaClass, mmGameMetaClass);

// 0x6092C8 | ?ProjectileV@@3VVector3@@A
inline extern_var(0x6092C8, class Vector3, ProjectileV);

// 0x6092EC | ?masscycle@@3HA
inline extern_var(0x6092EC, int32_t, masscycle);

// 0x6092F0 | ?BangerProjectile@@3PAVmmBangerData@@A
inline extern_var(0x6092F0, class mmBangerData*, BangerProjectile);

// 0x40E6D0 | ?delete_mmGame@@YAXPAXH@Z

class mmGame : asNode
{
public:
    // mmGame::`vftable' @ 0x58F600

    // 0x40B860 | ??0mmGame@@QAE@XZ
    inline mmGame()
    {
        // stub<member_func_t<void, mmGame>>(0x40B860, this);

        unimplemented();
    }

    // 0x40B9F0 | ?Init@mmGame@@QAEHXZ
    inline int32_t Init()
    {
        return stub<member_func_t<int32_t, mmGame>>(0x40B9F0, this);
    }

    // 0x40C9B0 | ?CollideAIOpponents@mmGame@@QAEXXZ
    inline void CollideAIOpponents()
    {
        return stub<member_func_t<void, mmGame>>(0x40C9B0, this);
    }

    // 0x40CF80 | ?Stats@mmGame@@QAEXXZ
    inline void Stats()
    {
        return stub<member_func_t<void, mmGame>>(0x40CF80, this);
    }

    // 0x40D060 | ?RespawnXYZ@mmGame@@IAEXAAVVector3@@AAM@Z
    inline void RespawnXYZ(class Vector3& arg1, float& arg2)
    {
        return stub<member_func_t<void, mmGame, class Vector3&, float&>>(0x40D060, this, arg1, arg2);
    }

    // 0x40D160 | ?IsPopupEnabled@mmGame@@QAEHXZ
    inline int32_t IsPopupEnabled()
    {
        return stub<member_func_t<int32_t, mmGame>>(0x40D160, this);
    }

    // 0x40D630 | ?UpdateGameInput@mmGame@@QAEXXZ
    inline void UpdateGameInput()
    {
        return stub<member_func_t<void, mmGame>>(0x40D630, this);
    }

    // 0x40DAB0 | ?UpdateSteeringBrakes@mmGame@@QAEXXZ
    inline void UpdateSteeringBrakes()
    {
        return stub<member_func_t<void, mmGame>>(0x40DAB0, this);
    }

    // 0x40DB90 | ?SetIconsState@mmGame@@QAEXXZ
    inline void SetIconsState()
    {
        return stub<member_func_t<void, mmGame>>(0x40DB90, this);
    }

    // 0x40DBB0 | ?PlayerSetState@mmGame@@QAEXXZ
    inline void PlayerSetState()
    {
        return stub<member_func_t<void, mmGame>>(0x40DBB0, this);
    }

    // 0x40DCB0 | ?CalculateRaceScore@mmGame@@IAEHHH@Z
    inline int32_t CalculateRaceScore(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmGame, int32_t, int32_t>>(0x40DCB0, this, arg1, arg2);
    }

    // 0x40E170 | ?GetCDTrack@mmGame@@QAEHF@Z
    inline int32_t GetCDTrack(int16_t arg1)
    {
        return stub<member_func_t<int32_t, mmGame, int16_t>>(0x40E170, this, arg1);
    }

    // 0x40E680 | ?DeclareFields@mmGame@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x40E680);
    }

    // 0x40CD90 | ??1mmGame@@UAE@XZ
    inline ~mmGame() override = 0
    {
        // stub<member_func_t<void, mmGame>>(0x40CD90, this);

        unimplemented();
    }

    // 0x40E720 | ?GetClass@mmGame@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmGame>>(0x40E720, this);
    }

    // 0x40D1D0 | ?Update@mmGame@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmGame>>(0x40D1D0, this);
    }

    // 0x40D170 | ?Reset@mmGame@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmGame>>(0x40D170, this);
    }

    // 0x40D540 | ?UpdatePaused@mmGame@@UAEXXZ
    inline void UpdatePaused() override
    {
        return stub<member_func_t<void, mmGame>>(0x40D540, this);
    }

    // 0x40CAB0 | ?InitGameStrings@mmGame@@UAEXXZ
    virtual inline void InitGameStrings()
    {
        return stub<member_func_t<void, mmGame>>(0x40CAB0, this);
    }

    // 0x567350 | __purecall
    virtual inline void InitMyPlayer() = 0;

    // 0x40C8B0 | ?InitOtherPlayers@mmGame@@UAEXXZ
    virtual inline void InitOtherPlayers()
    {
        return stub<member_func_t<void, mmGame>>(0x40C8B0, this);
    }

    // 0x567350 | __purecall
    virtual inline void InitGameObjects() = 0;

    // 0x567350 | __purecall
    virtual inline void InitHUD() = 0;

    // 0x567350 | __purecall
    virtual inline void UpdateGameInput(int32_t arg1) = 0;

    // 0x40D380 | ?UpdateDebugInput@mmGame@@UAEXXZ
    virtual inline void UpdateDebugInput()
    {
        return stub<member_func_t<void, mmGame>>(0x40D380, this);
    }

    // 0x567350 | __purecall
    virtual inline void UpdateDebugKeyInput(int32_t arg1) = 0;

    // 0x567350 | __purecall
    virtual inline void UpdateGame() = 0;

    // 0x567350 | __purecall
    virtual inline void NextRace() = 0;

    // 0x40D370 | ?HitWaterHandler@mmGame@@UAEXXZ
    virtual inline void HitWaterHandler()
    {
        return stub<member_func_t<void, mmGame>>(0x40D370, this);
    }

    // 0x40D360 | ?DropThruCityHandler@mmGame@@UAEXXZ
    virtual inline void DropThruCityHandler()
    {
        return stub<member_func_t<void, mmGame>>(0x40D360, this);
    }

    // 0x40DD20 | ?SendChatMessage@mmGame@@UAEXPAD@Z
    virtual inline void SendChatMessage(char* arg1)
    {
        return stub<member_func_t<void, mmGame, char*>>(0x40DD20, this, arg1);
    }

    // 0x40E8B0 | ?BeDone@mmGame@@UAEXXZ
    virtual inline void BeDone()
    {
        return stub<member_func_t<void, mmGame>>(0x40E8B0, this);
    }

    // 0x567350 | __purecall
    virtual inline class mmWaypoints* GetWaypoints() = 0;
};
