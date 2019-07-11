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
    mmanim:bridge

    0x4B65C0 | public: __thiscall mmBridgeMgr::mmBridgeMgr(void) | ??0mmBridgeMgr@@QAE@XZ
    0x4B66D0 | public: virtual __thiscall mmBridgeMgr::~mmBridgeMgr(void) | ??1mmBridgeMgr@@UAE@XZ
    0x4B6760 | public: void __thiscall mmBridgeMgr::ToggleDrawLabels(void) | ?ToggleDrawLabels@mmBridgeMgr@@QAEXXZ
    0x4B6770 | public: virtual void __thiscall mmBridgeMgr::Cull(void) | ?Cull@mmBridgeMgr@@UAEXXZ
    0x4B67B0 | public: void __thiscall mmBridgeMgr::Init(char *,class mmInstance *,class mmInstance * *,int) | ?Init@mmBridgeMgr@@QAEXPADPAVmmInstance@@PAPAV2@H@Z
    0x4B6BD0 | public: virtual void __thiscall mmBridgeMgr::Save(void) | ?Save@mmBridgeMgr@@UAEXXZ
    0x4B6BE0 | public: __thiscall mmBridgeSet::mmBridgeSet(void) | ??0mmBridgeSet@@QAE@XZ
    0x4B6CF0 | public: virtual __thiscall mmBridgeSet::~mmBridgeSet(void) | ??1mmBridgeSet@@UAE@XZ
    0x4B6D60 | public: virtual void __thiscall mmBridgeSet::Reset(void) | ?Reset@mmBridgeSet@@UAEXXZ
    0x4B6E30 | public: int __thiscall mmBridgeSet::ReadEntry(class Stream *,int) | ?ReadEntry@mmBridgeSet@@QAEHPAVStream@@H@Z
    0x4B6F70 | public: void __thiscall mmBridgeSet::InitTrigger(void) | ?InitTrigger@mmBridgeSet@@QAEXXZ
    0x4B6FA0 | public: int __thiscall mmBridgeSet::Init(char *,class Stream *) | ?Init@mmBridgeSet@@QAEHPADPAVStream@@@Z
    0x4B7060 | public: virtual void __thiscall mmBridgeSet::Update(void) | ?Update@mmBridgeSet@@UAEXXZ
    0x4B7410 | public: virtual void __thiscall mmBridgeSet::Cull(void) | ?Cull@mmBridgeSet@@UAEXXZ
    0x4B7420 | public: static void __cdecl mmBridgeSet::DeclareFields(void) | ?DeclareFields@mmBridgeSet@@SAXXZ
    0x4B74C0 | public: void __thiscall mmBridgeSet::UpdateAudio(void) | ?UpdateAudio@mmBridgeSet@@QAEXXZ
    0x4B7720 | private: void __thiscall mmBridgeSet::CalculateDistToPlayer2(void) | ?CalculateDistToPlayer2@mmBridgeSet@@AAEXXZ
    0x4B7800 | private: void __thiscall mmBridgeSet::CalculateAudioPanning(void) | ?CalculateAudioPanning@mmBridgeSet@@AAEXXZ
    0x4B7850 | private: float __thiscall mmBridgeSet::CalculateDoppler(float) | ?CalculateDoppler@mmBridgeSet@@AAEMM@Z
    0x4B7880 | public: void __thiscall mmBridgeSet::UnAssignSounds(void) | ?UnAssignSounds@mmBridgeSet@@QAEXXZ
    0x4B78A0 | public: void __thiscall mmBridgeSet::SetSoundPtrs(class AudSound *,class AudSound *) | ?SetSoundPtrs@mmBridgeSet@@QAEXPAVAudSound@@0@Z
    0x4B7900 | private: void __thiscall mmBridgeSet::RampDownBridgeVolume(void) | ?RampDownBridgeVolume@mmBridgeSet@@AAEXXZ
    0x4B7AE0 | public: virtual class MetaClass * __thiscall mmBridgeSet::GetClass(void) | ?GetClass@mmBridgeSet@@UAEPAVMetaClass@@XZ
    0x4B7AF0 | public: static void __cdecl mmBridgeMgr::DeclareFields(void) | ?DeclareFields@mmBridgeMgr@@SAXXZ
    0x4B7D70 | public: virtual class MetaClass * __thiscall mmBridgeMgr::GetClass(void) | ?GetClass@mmBridgeMgr@@UAEPAVMetaClass@@XZ
    0x4B7EA0 | public: virtual void * __thiscall mmBridgeSet::`vector deleting destructor'(unsigned int) | ??_EmmBridgeSet@@UAEPAXI@Z
    0x4B7F00 | public: virtual void * __thiscall mmBridgeMgr::`vector deleting destructor'(unsigned int) | ??_EmmBridgeMgr@@UAEPAXI@Z
    0x593F58 | const mmBridgeMgr::`vftable' | ??_7mmBridgeMgr@@6B@
    0x593F88 | const mmBridgeSet::`vftable' | ??_7mmBridgeSet@@6B@
    0x5B0650 | private: static float mmBridgeSet::s_fAudioMinDistance | ?s_fAudioMinDistance@mmBridgeSet@@0MA
    0x5B0654 | private: static float mmBridgeSet::s_fCloserMinDistMult | ?s_fCloserMinDistMult@mmBridgeSet@@0MA
    0x5B0658 | private: static float mmBridgeSet::s_fAudioMaxDistance | ?s_fAudioMaxDistance@mmBridgeSet@@0MA
    0x5B065C | private: static float mmBridgeSet::s_fAudioVolume | ?s_fAudioVolume@mmBridgeSet@@0MA
    0x6680C0 | private: static float mmBridgeSet::s_fAudioAttenuationMult | ?s_fAudioAttenuationMult@mmBridgeSet@@0MA
    0x6680C8 | class MetaClass mmBridgeMgrMetaClass | ?mmBridgeMgrMetaClass@@3VMetaClass@@A
    0x6680F8 | class MetaClass mmBridgeSetMetaClass | ?mmBridgeSetMetaClass@@3VMetaClass@@A
    0x668124 | protected: static class mmBridgeMgr * mmBridgeMgr::Instance | ?Instance@mmBridgeMgr@@1PAV1@A
    0x4B79C0 | void * __cdecl new_mmBridgeSet(int) | ?new_mmBridgeSet@@YAPAXH@Z
    0x4B7A90 | void __cdecl delete_mmBridgeSet(void *,int) | ?delete_mmBridgeSet@@YAXPAXH@Z
    0x4B7C40 | void * __cdecl new_mmBridgeMgr(int) | ?new_mmBridgeMgr@@YAPAXH@Z
    0x4B7D20 | void __cdecl delete_mmBridgeMgr(void *,int) | ?delete_mmBridgeMgr@@YAXPAXH@Z
*/

#include "hooking.h"

// 0x6680C8 | ?mmBridgeMgrMetaClass@@3VMetaClass@@A
inline extern_var(0x6680C8, class MetaClass, mmBridgeMgrMetaClass);

// 0x6680F8 | ?mmBridgeSetMetaClass@@3VMetaClass@@A
inline extern_var(0x6680F8, class MetaClass, mmBridgeSetMetaClass);

// 0x4B79C0 | ?new_mmBridgeSet@@YAPAXH@Z
inline void* new_mmBridgeSet(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4B79C0, arg1);
}

// 0x4B7A90 | ?delete_mmBridgeSet@@YAXPAXH@Z
inline void delete_mmBridgeSet(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4B7A90, arg1, arg2);
}

// 0x4B7C40 | ?new_mmBridgeMgr@@YAPAXH@Z
inline void* new_mmBridgeMgr(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4B7C40, arg1);
}

// 0x4B7D20 | ?delete_mmBridgeMgr@@YAXPAXH@Z
inline void delete_mmBridgeMgr(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4B7D20, arg1, arg2);
}

class mmBridgeSet : asNode
{
public:
    // mmBridgeSet::`vftable' @ 0x593F88

    // 0x4B6BE0 | ??0mmBridgeSet@@QAE@XZ
    inline mmBridgeSet()
    {
        stub<member_func_t<void, mmBridgeSet>>(0x4B6BE0, this);
    }

    // 0x4B6E30 | ?ReadEntry@mmBridgeSet@@QAEHPAVStream@@H@Z
    inline int32_t ReadEntry(class Stream* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmBridgeSet, class Stream*, int32_t>>(0x4B6E30, this, arg1, arg2);
    }

    // 0x4B6F70 | ?InitTrigger@mmBridgeSet@@QAEXXZ
    inline void InitTrigger()
    {
        return stub<member_func_t<void, mmBridgeSet>>(0x4B6F70, this);
    }

    // 0x4B6FA0 | ?Init@mmBridgeSet@@QAEHPADPAVStream@@@Z
    inline int32_t Init(char* arg1, class Stream* arg2)
    {
        return stub<member_func_t<int32_t, mmBridgeSet, char*, class Stream*>>(0x4B6FA0, this, arg1, arg2);
    }

    // 0x4B7420 | ?DeclareFields@mmBridgeSet@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4B7420);
    }

    // 0x4B74C0 | ?UpdateAudio@mmBridgeSet@@QAEXXZ
    inline void UpdateAudio()
    {
        return stub<member_func_t<void, mmBridgeSet>>(0x4B74C0, this);
    }

    // 0x4B7720 | ?CalculateDistToPlayer2@mmBridgeSet@@AAEXXZ
    inline void CalculateDistToPlayer2()
    {
        return stub<member_func_t<void, mmBridgeSet>>(0x4B7720, this);
    }

    // 0x4B7800 | ?CalculateAudioPanning@mmBridgeSet@@AAEXXZ
    inline void CalculateAudioPanning()
    {
        return stub<member_func_t<void, mmBridgeSet>>(0x4B7800, this);
    }

    // 0x4B7850 | ?CalculateDoppler@mmBridgeSet@@AAEMM@Z
    inline float CalculateDoppler(float arg1)
    {
        return stub<member_func_t<float, mmBridgeSet, float>>(0x4B7850, this, arg1);
    }

    // 0x4B7880 | ?UnAssignSounds@mmBridgeSet@@QAEXXZ
    inline void UnAssignSounds()
    {
        return stub<member_func_t<void, mmBridgeSet>>(0x4B7880, this);
    }

    // 0x4B78A0 | ?SetSoundPtrs@mmBridgeSet@@QAEXPAVAudSound@@0@Z
    inline void SetSoundPtrs(class AudSound* arg1, class AudSound* arg2)
    {
        return stub<member_func_t<void, mmBridgeSet, class AudSound*, class AudSound*>>(0x4B78A0, this, arg1, arg2);
    }

    // 0x4B7900 | ?RampDownBridgeVolume@mmBridgeSet@@AAEXXZ
    inline void RampDownBridgeVolume()
    {
        return stub<member_func_t<void, mmBridgeSet>>(0x4B7900, this);
    }

    // 0x5B0650 | ?s_fAudioMinDistance@mmBridgeSet@@0MA
    static inline extern_var(0x5B0650, float, s_fAudioMinDistance);

    // 0x5B0654 | ?s_fCloserMinDistMult@mmBridgeSet@@0MA
    static inline extern_var(0x5B0654, float, s_fCloserMinDistMult);

    // 0x5B0658 | ?s_fAudioMaxDistance@mmBridgeSet@@0MA
    static inline extern_var(0x5B0658, float, s_fAudioMaxDistance);

    // 0x5B065C | ?s_fAudioVolume@mmBridgeSet@@0MA
    static inline extern_var(0x5B065C, float, s_fAudioVolume);

    // 0x6680C0 | ?s_fAudioAttenuationMult@mmBridgeSet@@0MA
    static inline extern_var(0x6680C0, float, s_fAudioAttenuationMult);

    // 0x4B6CF0 | ??1mmBridgeSet@@UAE@XZ
    inline ~mmBridgeSet() override
    {
        stub<member_func_t<void, mmBridgeSet>>(0x4B6CF0, this);
    }

    // 0x4B7AE0 | ?GetClass@mmBridgeSet@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmBridgeSet>>(0x4B7AE0, this);
    }

    // 0x4B7410 | ?Cull@mmBridgeSet@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmBridgeSet>>(0x4B7410, this);
    }

    // 0x4B7060 | ?Update@mmBridgeSet@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmBridgeSet>>(0x4B7060, this);
    }

    // 0x4B6D60 | ?Reset@mmBridgeSet@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmBridgeSet>>(0x4B6D60, this);
    }
};

class mmBridgeMgr : asNode
{
public:
    // mmBridgeMgr::`vftable' @ 0x593F58

    // 0x4B65C0 | ??0mmBridgeMgr@@QAE@XZ
    inline mmBridgeMgr()
    {
        stub<member_func_t<void, mmBridgeMgr>>(0x4B65C0, this);
    }

    // 0x4B6760 | ?ToggleDrawLabels@mmBridgeMgr@@QAEXXZ
    inline void ToggleDrawLabels()
    {
        return stub<member_func_t<void, mmBridgeMgr>>(0x4B6760, this);
    }

    // 0x4B67B0 | ?Init@mmBridgeMgr@@QAEXPADPAVmmInstance@@PAPAV2@H@Z
    inline void Init(char* arg1, class mmInstance* arg2, class mmInstance** arg3, int32_t arg4)
    {
        return stub<member_func_t<void, mmBridgeMgr, char*, class mmInstance*, class mmInstance**, int32_t>>(
            0x4B67B0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4B7AF0 | ?DeclareFields@mmBridgeMgr@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4B7AF0);
    }

    // 0x668124 | ?Instance@mmBridgeMgr@@1PAV1@A
    static inline extern_var(0x668124, class mmBridgeMgr*, Instance);

    // 0x4B66D0 | ??1mmBridgeMgr@@UAE@XZ
    inline ~mmBridgeMgr() override
    {
        stub<member_func_t<void, mmBridgeMgr>>(0x4B66D0, this);
    }

    // 0x4B7D70 | ?GetClass@mmBridgeMgr@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmBridgeMgr>>(0x4B7D70, this);
    }

    // 0x4B6770 | ?Cull@mmBridgeMgr@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmBridgeMgr>>(0x4B6770, this);
    }

    // 0x4B6BD0 | ?Save@mmBridgeMgr@@UAEXXZ
    inline void Save() override
    {
        return stub<member_func_t<void, mmBridgeMgr>>(0x4B6BD0, this);
    }
};
