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
    mmcar:engineaudioopponent

    0x47C750 | public: __thiscall EngineAudioOpponent::EngineAudioOpponent(void) | ??0EngineAudioOpponent@@QAE@XZ
    0x47C7B0 | public: virtual __thiscall EngineAudioOpponent::~EngineAudioOpponent(void) | ??1EngineAudioOpponent@@UAE@XZ
    0x47C7E0 | public: void __thiscall EngineAudioOpponent::Init(void) | ?Init@EngineAudioOpponent@@QAEXXZ
    0x47C850 | public: void __thiscall EngineAudioOpponent::Init(short) | ?Init@EngineAudioOpponent@@QAEXF@Z
    0x47C890 | public: void __thiscall EngineAudioOpponent::UpdateRPM(float) | ?UpdateRPM@EngineAudioOpponent@@QAEXM@Z
    0x47C960 | public: void __thiscall EngineAudioOpponent::ClearName(void) | ?ClearName@EngineAudioOpponent@@QAEXXZ
    0x47C980 | public: void __thiscall EngineAudioOpponent::Enable3DMode(class Vector3 *) | ?Enable3DMode@EngineAudioOpponent@@QAEXPAVVector3@@@Z
    0x47C9A0 | public: void __thiscall EngineAudioOpponent::Disable3DMode(void) | ?Disable3DMode@EngineAudioOpponent@@QAEXXZ
    0x47C9B0 | public: static void __cdecl EngineAudioOpponent::DeclareFields(void) | ?DeclareFields@EngineAudioOpponent@@SAXXZ
    0x47CBB0 | public: virtual class MetaClass * __thiscall EngineAudioOpponent::GetClass(void) | ?GetClass@EngineAudioOpponent@@UAEPAVMetaClass@@XZ
    0x47CCE0 | public: virtual void * __thiscall EngineAudioOpponent::`vector deleting destructor'(unsigned int) | ??_EEngineAudioOpponent@@UAEPAXI@Z
    0x5919D0 | const EngineAudioOpponent::`vftable' | ??_7EngineAudioOpponent@@6B@
    0x60A5D0 | class MetaClass EngineAudioOpponentMetaClass | ?EngineAudioOpponentMetaClass@@3VMetaClass@@A
    0x47CAA0 | void * __cdecl new_EngineAudioOpponent(int) | ?new_EngineAudioOpponent@@YAPAXH@Z
    0x47CB60 | void __cdecl delete_EngineAudioOpponent(void *,int) | ?delete_EngineAudioOpponent@@YAXPAXH@Z
*/

// 0x60A5D0 | ?EngineAudioOpponentMetaClass@@3VMetaClass@@A
inline extern_var(0x60A5D0, class MetaClass, EngineAudioOpponentMetaClass);

// 0x47CAA0 | ?new_EngineAudioOpponent@@YAPAXH@Z
inline void* new_EngineAudioOpponent(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x47CAA0, arg1);
}

// 0x47CB60 | ?delete_EngineAudioOpponent@@YAXPAXH@Z
inline void delete_EngineAudioOpponent(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x47CB60, arg1, arg2);
}

struct EngineAudioOpponent : asNode
{
public:
    // EngineAudioOpponent::`vftable' @ 0x5919D0

    // 0x46F3E0 | ?SetSoundPtr@EngineAudioOpponent@@QAEXPAVAudSound@@@Z
    inline void SetSoundPtr(class AudSound* arg1)
    {
        return stub<member_func_t<void, EngineAudioOpponent, class AudSound*>>(0x46F3E0, this, arg1);
    }

    // 0x47C750 | ??0EngineAudioOpponent@@QAE@XZ
    inline EngineAudioOpponent()
    {
        // stub<member_func_t<void, EngineAudioOpponent>>(0x47C750, this);

        unimplemented();
    }

    // 0x47C7E0 | ?Init@EngineAudioOpponent@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, EngineAudioOpponent>>(0x47C7E0, this);
    }

    // 0x47C850 | ?Init@EngineAudioOpponent@@QAEXF@Z
    inline void Init(int16_t arg1)
    {
        return stub<member_func_t<void, EngineAudioOpponent, int16_t>>(0x47C850, this, arg1);
    }

    // 0x47C890 | ?UpdateRPM@EngineAudioOpponent@@QAEXM@Z
    inline void UpdateRPM(float arg1)
    {
        return stub<member_func_t<void, EngineAudioOpponent, float>>(0x47C890, this, arg1);
    }

    // 0x47C960 | ?ClearName@EngineAudioOpponent@@QAEXXZ
    inline void ClearName()
    {
        return stub<member_func_t<void, EngineAudioOpponent>>(0x47C960, this);
    }

    // 0x47C980 | ?Enable3DMode@EngineAudioOpponent@@QAEXPAVVector3@@@Z
    inline void Enable3DMode(class Vector3* arg1)
    {
        return stub<member_func_t<void, EngineAudioOpponent, class Vector3*>>(0x47C980, this, arg1);
    }

    // 0x47C9A0 | ?Disable3DMode@EngineAudioOpponent@@QAEXXZ
    inline void Disable3DMode()
    {
        return stub<member_func_t<void, EngineAudioOpponent>>(0x47C9A0, this);
    }

    // 0x47C9B0 | ?DeclareFields@EngineAudioOpponent@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x47C9B0);
    }

    // 0x47C7B0 | ??1EngineAudioOpponent@@UAE@XZ
    inline ~EngineAudioOpponent() override = 0
    {
        // stub<member_func_t<void, EngineAudioOpponent>>(0x47C7B0, this);

        unimplemented();
    }

    // 0x47CBB0 | ?GetClass@EngineAudioOpponent@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, EngineAudioOpponent>>(0x47CBB0, this);
    }
};
