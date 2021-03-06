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
    mmcar:engineaudio

    0x47D410 | public: __thiscall EngineAudio::EngineAudio(void) | ??0EngineAudio@@QAE@XZ
    0x47D490 | public: void __thiscall EngineAudio::Init(class Vector3 *) | ?Init@EngineAudio@@QAEXPAVVector3@@@Z
    0x47D6D0 | public: void __thiscall EngineAudio::Init(char *,char *) | ?Init@EngineAudio@@QAEXPAD0@Z
    0x47D860 | public: virtual __thiscall EngineAudio::~EngineAudio(void) | ??1EngineAudio@@UAE@XZ
    0x47D910 | public: void __thiscall EngineAudio::EchoOn(float) | ?EchoOn@EngineAudio@@QAEXM@Z
    0x47D960 | public: void __thiscall EngineAudio::EchoOff(void) | ?EchoOff@EngineAudio@@QAEXXZ
    0x47D990 | public: void __thiscall EngineAudio::EnableClutch(char *,float) | ?EnableClutch@EngineAudio@@QAEXPADM@Z
    0x47DA40 | public: virtual void __thiscall EngineAudio::UpdateRPM(float) | ?UpdateRPM@EngineAudio@@UAEXM@Z
    0x47DCA0 | public: void __thiscall EngineAudio::ResetVolume(void) | ?ResetVolume@EngineAudio@@QAEXXZ
    0x47DCC0 | public: void __thiscall EngineAudio::Stop(void) | ?Stop@EngineAudio@@QAEXXZ
    0x47DD00 | public: static void __cdecl EngineAudio::DeclareFields(void) | ?DeclareFields@EngineAudio@@SAXXZ
    0x47DFB0 | public: virtual class MetaClass * __thiscall EngineAudio::GetClass(void) | ?GetClass@EngineAudio@@UAEPAVMetaClass@@XZ
    0x47DFC0 | public: virtual void * __thiscall EngineAudio::`vector deleting destructor'(unsigned int) | ??_EEngineAudio@@UAEPAXI@Z
    0x591A20 | const EngineAudio::`vftable' | ??_7EngineAudio@@6B@
    0x60A628 | class MetaClass EngineAudioMetaClass | ?EngineAudioMetaClass@@3VMetaClass@@A
    0x47DE90 | void * __cdecl new_EngineAudio(int) | ?new_EngineAudio@@YAPAXH@Z
    0x47DF60 | void __cdecl delete_EngineAudio(void *,int) | ?delete_EngineAudio@@YAXPAXH@Z
*/

// 0x60A628 | ?EngineAudioMetaClass@@3VMetaClass@@A
inline extern_var(0x60A628, class MetaClass, EngineAudioMetaClass);

// 0x47DE90 | ?new_EngineAudio@@YAPAXH@Z
// 0x47DF60 | ?delete_EngineAudio@@YAXPAXH@Z

struct EngineAudio : asNode
{
public:
    // EngineAudio::`vftable' @ 0x591A20

    // 0x47D410 | ??0EngineAudio@@QAE@XZ
    inline EngineAudio()
    {
        // stub<member_func_t<void, EngineAudio>>(0x47D410, this);

        unimplemented();
    }

    // 0x47D490 | ?Init@EngineAudio@@QAEXPAVVector3@@@Z
    inline void Init(class Vector3* arg1)
    {
        return stub<member_func_t<void, EngineAudio, class Vector3*>>(0x47D490, this, arg1);
    }

    // 0x47D6D0 | ?Init@EngineAudio@@QAEXPAD0@Z
    inline void Init(char* arg1, char* arg2)
    {
        return stub<member_func_t<void, EngineAudio, char*, char*>>(0x47D6D0, this, arg1, arg2);
    }

    // 0x47D910 | ?EchoOn@EngineAudio@@QAEXM@Z
    inline void EchoOn(float arg1)
    {
        return stub<member_func_t<void, EngineAudio, float>>(0x47D910, this, arg1);
    }

    // 0x47D960 | ?EchoOff@EngineAudio@@QAEXXZ
    inline void EchoOff()
    {
        return stub<member_func_t<void, EngineAudio>>(0x47D960, this);
    }

    // 0x47D990 | ?EnableClutch@EngineAudio@@QAEXPADM@Z
    inline void EnableClutch(char* arg1, float arg2)
    {
        return stub<member_func_t<void, EngineAudio, char*, float>>(0x47D990, this, arg1, arg2);
    }

    // 0x47DCA0 | ?ResetVolume@EngineAudio@@QAEXXZ
    inline void ResetVolume()
    {
        return stub<member_func_t<void, EngineAudio>>(0x47DCA0, this);
    }

    // 0x47DCC0 | ?Stop@EngineAudio@@QAEXXZ
    inline void Stop()
    {
        return stub<member_func_t<void, EngineAudio>>(0x47DCC0, this);
    }

    // 0x47DD00 | ?DeclareFields@EngineAudio@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x47DD00);
    }

    // 0x47D860 | ??1EngineAudio@@UAE@XZ
    inline ~EngineAudio() override = 0
    {
        // stub<member_func_t<void, EngineAudio>>(0x47D860, this);

        unimplemented();
    }

    // 0x47DFB0 | ?GetClass@EngineAudio@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, EngineAudio>>(0x47DFB0, this);
    }

    // 0x47DA40 | ?UpdateRPM@EngineAudio@@UAEXM@Z
    virtual inline void UpdateRPM(float arg1)
    {
        return stub<member_func_t<void, EngineAudio, float>>(0x47DA40, this, arg1);
    }
};
