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
    mmai:aiVehicleOpponent

    0x447D30 | public: __thiscall aiVehicleOpponent::aiVehicleOpponent(void) | ??0aiVehicleOpponent@@QAE@XZ
    0x447D90 | public: __thiscall aiVehicleOpponent::~aiVehicleOpponent(void) | ??1aiVehicleOpponent@@QAE@XZ
    0x447EC0 | public: void __thiscall aiVehicleOpponent::Init(int,class aiRaceData *,char *) | ?Init@aiVehicleOpponent@@QAEXHPAVaiRaceData@@PAD@Z
    0x4480D0 | public: virtual void __thiscall aiVehicleOpponent::Reset(void) | ?Reset@aiVehicleOpponent@@UAEXXZ
    0x448190 | public: virtual void __thiscall aiVehicleOpponent::Update(void) | ?Update@aiVehicleOpponent@@UAEXXZ
    0x4482C0 | public: void __thiscall aiVehicleOpponent::Dump(void) | ?Dump@aiVehicleOpponent@@QAEXXZ
    0x448360 | public: void __thiscall aiVehicleOpponent::UnAssignSounds(void) | ?UnAssignSounds@aiVehicleOpponent@@QAEXXZ
    0x448380 | public: int __thiscall aiVehicleOpponent::GetEngineSoundIndex(void) | ?GetEngineSoundIndex@aiVehicleOpponent@@QAEHXZ
    0x448390 | public: void __thiscall aiVehicleOpponent::DrawTargetPt(void) | ?DrawTargetPt@aiVehicleOpponent@@QAEXXZ
    0x4483A0 | public: void __thiscall aiVehicleOpponent::DrawDamage(void) | ?DrawDamage@aiVehicleOpponent@@QAEXXZ
    0x4483B0 | public: virtual void __thiscall aiVehicleOpponent::DrawId(void) | ?DrawId@aiVehicleOpponent@@UAEXXZ
    0x4483C0 | public: void __thiscall aiVehicleOpponent::UpdateAudio(void) | ?UpdateAudio@aiVehicleOpponent@@QAEXXZ
    0x448460 | public: float __thiscall aiVehicleOpponent::GetDistanceToPlayer2(void) | ?GetDistanceToPlayer2@aiVehicleOpponent@@QAEMXZ
    0x448470 | public: void __thiscall aiVehicleOpponent::SetAudioMinDistance(float) | ?SetAudioMinDistance@aiVehicleOpponent@@QAEXM@Z
    0x448490 | public: void __thiscall aiVehicleOpponent::SetAudioMaxDistance(float) | ?SetAudioMaxDistance@aiVehicleOpponent@@QAEXM@Z
    0x4484C0 | public: void __thiscall aiVehicleOpponent::SetAudioCloserMinDistMult(float) | ?SetAudioCloserMinDistMult@aiVehicleOpponent@@QAEXM@Z
    0x4484E0 | public: class mmOpponentCarAudio * __thiscall aiVehicleOpponent::GetCarAudioPtr(void) | ?GetCarAudioPtr@aiVehicleOpponent@@QAEPAVmmOpponentCarAudio@@XZ
    0x4484F0 | private: void __thiscall aiVehicleOpponent::AddToAiAudMgr(void) | ?AddToAiAudMgr@aiVehicleOpponent@@AAEXXZ
    0x448550 | public: void __thiscall aiVehicleOpponent::AddWidget(class Bank *) | ?AddWidget@aiVehicleOpponent@@QAEXPAVBank@@@Z
    0x448560 | public: void __thiscall aiVehicleOpponent::AssignSounds(class AudSound *,class AudSound *,class mmOpponentImpactAudio *,class AudSound *) | ?AssignSounds@aiVehicleOpponent@@QAEXPAVAudSound@@0PAVmmOpponentImpactAudio@@0@Z
    0x448590 | public: static void __cdecl aiVehicleOpponent::DeclareFields(void) | ?DeclareFields@aiVehicleOpponent@@SAXXZ
    0x448720 | public: virtual class MetaClass * __thiscall aiVehicleOpponent::GetClass(void) | ?GetClass@aiVehicleOpponent@@UAEPAVMetaClass@@XZ
    0x448880 | public: virtual int __thiscall aiVehicleOpponent::Type(void) | ?Type@aiVehicleOpponent@@UAEHXZ
    0x5907E8 | const aiVehicleOpponent::`vftable' | ??_7aiVehicleOpponent@@6B@
    0x609DF8 | class MetaClass aiVehicleOpponentMetaClass | ?aiVehicleOpponentMetaClass@@3VMetaClass@@A
    0x4485E0 | void * __cdecl new_aiVehicleOpponent(int) | ?new_aiVehicleOpponent@@YAPAXH@Z
    0x4486B0 | void __cdecl delete_aiVehicleOpponent(void *,int) | ?delete_aiVehicleOpponent@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x609DF8 | ?aiVehicleOpponentMetaClass@@3VMetaClass@@A
inline extern_var(0x609DF8, class MetaClass, aiVehicleOpponentMetaClass);

// 0x4485E0 | ?new_aiVehicleOpponent@@YAPAXH@Z
inline void* new_aiVehicleOpponent(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4485E0, arg1);
}

// 0x4486B0 | ?delete_aiVehicleOpponent@@YAXPAXH@Z
inline void delete_aiVehicleOpponent(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4486B0, arg1, arg2);
}

class aiVehicleOpponent : aiVehicle
{
public:
    // aiVehicleOpponent::`vftable' @ 0x5907E8

    // 0x436D00 | ??_EaiVehicleOpponent@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x447D30 | ??0aiVehicleOpponent@@QAE@XZ
    inline aiVehicleOpponent()
    {
        stub<member_func_t<void, aiVehicleOpponent>>(0x447D30, this);
    }

    // 0x447D90 | ??1aiVehicleOpponent@@QAE@XZ
    inline ~aiVehicleOpponent()
    {
        stub<member_func_t<void, aiVehicleOpponent>>(0x447D90, this);
    }

    // 0x447EC0 | ?Init@aiVehicleOpponent@@QAEXHPAVaiRaceData@@PAD@Z
    inline void Init(int32_t arg1, class aiRaceData* arg2, char* arg3)
    {
        return stub<member_func_t<void, aiVehicleOpponent, int32_t, class aiRaceData*, char*>>(
            0x447EC0, this, arg1, arg2, arg3);
    }

    // 0x4482C0 | ?Dump@aiVehicleOpponent@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiVehicleOpponent>>(0x4482C0, this);
    }

    // 0x448360 | ?UnAssignSounds@aiVehicleOpponent@@QAEXXZ
    inline void UnAssignSounds()
    {
        return stub<member_func_t<void, aiVehicleOpponent>>(0x448360, this);
    }

    // 0x448380 | ?GetEngineSoundIndex@aiVehicleOpponent@@QAEHXZ
    inline int32_t GetEngineSoundIndex()
    {
        return stub<member_func_t<int32_t, aiVehicleOpponent>>(0x448380, this);
    }

    // 0x448390 | ?DrawTargetPt@aiVehicleOpponent@@QAEXXZ
    inline void DrawTargetPt()
    {
        return stub<member_func_t<void, aiVehicleOpponent>>(0x448390, this);
    }

    // 0x4483A0 | ?DrawDamage@aiVehicleOpponent@@QAEXXZ
    inline void DrawDamage()
    {
        return stub<member_func_t<void, aiVehicleOpponent>>(0x4483A0, this);
    }

    // 0x4483C0 | ?UpdateAudio@aiVehicleOpponent@@QAEXXZ
    inline void UpdateAudio()
    {
        return stub<member_func_t<void, aiVehicleOpponent>>(0x4483C0, this);
    }

    // 0x448460 | ?GetDistanceToPlayer2@aiVehicleOpponent@@QAEMXZ
    inline float GetDistanceToPlayer2()
    {
        return stub<member_func_t<float, aiVehicleOpponent>>(0x448460, this);
    }

    // 0x448470 | ?SetAudioMinDistance@aiVehicleOpponent@@QAEXM@Z
    inline void SetAudioMinDistance(float arg1)
    {
        return stub<member_func_t<void, aiVehicleOpponent, float>>(0x448470, this, arg1);
    }

    // 0x448490 | ?SetAudioMaxDistance@aiVehicleOpponent@@QAEXM@Z
    inline void SetAudioMaxDistance(float arg1)
    {
        return stub<member_func_t<void, aiVehicleOpponent, float>>(0x448490, this, arg1);
    }

    // 0x4484C0 | ?SetAudioCloserMinDistMult@aiVehicleOpponent@@QAEXM@Z
    inline void SetAudioCloserMinDistMult(float arg1)
    {
        return stub<member_func_t<void, aiVehicleOpponent, float>>(0x4484C0, this, arg1);
    }

    // 0x4484E0 | ?GetCarAudioPtr@aiVehicleOpponent@@QAEPAVmmOpponentCarAudio@@XZ
    inline class mmOpponentCarAudio* GetCarAudioPtr()
    {
        return stub<member_func_t<class mmOpponentCarAudio*, aiVehicleOpponent>>(0x4484E0, this);
    }

    // 0x4484F0 | ?AddToAiAudMgr@aiVehicleOpponent@@AAEXXZ
    inline void AddToAiAudMgr()
    {
        return stub<member_func_t<void, aiVehicleOpponent>>(0x4484F0, this);
    }

    // 0x448550 | ?AddWidget@aiVehicleOpponent@@QAEXPAVBank@@@Z
    inline void AddWidget(class Bank* arg1)
    {
        return stub<member_func_t<void, aiVehicleOpponent, class Bank*>>(0x448550, this, arg1);
    }

    // 0x448560 | ?AssignSounds@aiVehicleOpponent@@QAEXPAVAudSound@@0PAVmmOpponentImpactAudio@@0@Z
    inline void AssignSounds(
        class AudSound* arg1, class AudSound* arg2, class mmOpponentImpactAudio* arg3, class AudSound* arg4)
    {
        return stub<member_func_t<void, aiVehicleOpponent, class AudSound*, class AudSound*,
            class mmOpponentImpactAudio*, class AudSound*>>(0x448560, this, arg1, arg2, arg3, arg4);
    }

    // 0x448590 | ?DeclareFields@aiVehicleOpponent@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x448590);
    }

    // 0x448190 | ?Update@aiVehicleOpponent@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiVehicleOpponent>>(0x448190, this);
    }

    // 0x4480D0 | ?Reset@aiVehicleOpponent@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiVehicleOpponent>>(0x4480D0, this);
    }

    // 0x448880 | ?Type@aiVehicleOpponent@@UAEHXZ
    inline int32_t Type() override
    {
        return stub<member_func_t<int32_t, aiVehicleOpponent>>(0x448880, this);
    }

    // 0x4483B0 | ?DrawId@aiVehicleOpponent@@UAEXXZ
    inline void DrawId() override
    {
        return stub<member_func_t<void, aiVehicleOpponent>>(0x4483B0, this);
    }

    // 0x448720 | ?GetClass@aiVehicleOpponent@@UAEPAVMetaClass@@XZ
    virtual inline class MetaClass* GetClass()
    {
        return stub<member_func_t<class MetaClass*, aiVehicleOpponent>>(0x448720, this);
    }
};
