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
    arts7:sim

    0x50F7C0 | public: __thiscall asSimulation::asSimulation(void) | ??0asSimulation@@QAE@XZ
    0x50F960 | public: virtual __thiscall asSimulation::~asSimulation(void) | ??1asSimulation@@UAE@XZ
    0x50FAD0 | public: void __thiscall asSimulation::Quiet(void) | ?Quiet@asSimulation@@QAEXXZ
    0x50FB00 | public: void __thiscall asSimulation::Init(char *,int,char * *) | ?Init@asSimulation@@QAEXPADHPAPAD@Z
    0x50FE40 | public: virtual void __thiscall asSimulation::Reset(void) | ?Reset@asSimulation@@UAEXXZ
    0x50FE50 | public: void __thiscall asSimulation::FirstUpdate(void) | ?FirstUpdate@asSimulation@@QAEXXZ
    0x50FE70 | public: virtual void __thiscall asSimulation::Update(void) | ?Update@asSimulation@@UAEXXZ
    0x510110 | public: void __thiscall asSimulation::Device(void) | ?Device@asSimulation@@QAEXXZ
    0x5101D0 | public: void __thiscall asSimulation::Widgets(void) | ?Widgets@asSimulation@@QAEXXZ
    0x510200 | public: void __thiscall asSimulation::Simulate(void) | ?Simulate@asSimulation@@QAEXXZ
    0x510290 | public: void __thiscall asSimulation::UpdatePaused(class asNode *) | ?UpdatePaused@asSimulation@@QAEXPAVasNode@@@Z
    0x510300 | public: void __thiscall asSimulation::ResetClock(void) | ?ResetClock@asSimulation@@QAEXXZ
    0x510350 | public: void __thiscall asSimulation::BeginOverSample(int) | ?BeginOverSample@asSimulation@@QAEXH@Z
    0x510390 | public: void __thiscall asSimulation::EndOverSample(void) | ?EndOverSample@asSimulation@@QAEXXZ
    0x5103C0 | public: void __thiscall asSimulation::EndOverSample(int) | ?EndOverSample@asSimulation@@QAEXH@Z
    0x5103F0 | public: void __thiscall asSimulation::RealTime(float) | ?RealTime@asSimulation@@QAEXM@Z
    0x510450 | public: void __thiscall asSimulation::FixedFrame(float,int) | ?FixedFrame@asSimulation@@QAEXMH@Z
    0x510490 | public: void __thiscall asSimulation::FrameLock(int,int) | ?FrameLock@asSimulation@@QAEXHH@Z
    0x5104A0 | public: void __thiscall asSimulation::Benchmark(void) | ?Benchmark@asSimulation@@QAEXXZ
    0x510520 | public: void __thiscall asSimulation::Pause(void) | ?Pause@asSimulation@@QAEXXZ
    0x510600 | int __cdecl InitPipeline(char *,int,char * *) | ?InitPipeline@@YAHPADHPAPAD@Z
    0x5106C0 | void __cdecl ShutdownPipeline(void) | ?ShutdownPipeline@@YAXXZ
    0x510730 | int __cdecl RestartPipeline(int,int,int,int,int) | ?RestartPipeline@@YAHHHHHH@Z
    0x510830 | public: char * __thiscall asNode::VerifyTree(void) | ?VerifyTree@asNode@@QAEPADXZ
    0x510920 | public: static void __cdecl asSimulation::DeclareFields(void) | ?DeclareFields@asSimulation@@SAXXZ
    0x510A90 | public: virtual class MetaClass * __thiscall asSimulation::GetClass(void) | ?GetClass@asSimulation@@UAEPAVMetaClass@@XZ
    0x510AA0 | public: __thiscall artsReplayChannel::artsReplayChannel(void) | ??0artsReplayChannel@@QAE@XZ
    0x510AC0 | public: virtual void __thiscall artsReplayChannel::DoRecord(class Stream *) | ?DoRecord@artsReplayChannel@@UAEXPAVStream@@@Z
    0x510B00 | public: virtual void __thiscall artsReplayChannel::DoPlayback(class Stream *) | ?DoPlayback@artsReplayChannel@@UAEXPAVStream@@@Z
    0x510B30 | public: __thiscall artsReplayChannel::~artsReplayChannel(void) | ??1artsReplayChannel@@QAE@XZ
    0x510B40 | public: virtual void * __thiscall asSimulation::`vector deleting destructor'(unsigned int) | ??_EasSimulation@@UAEPAXI@Z
    0x510BA0 | public: void __thiscall agiLib<class agiPhysParameters,class agiPhysDef>::Kill(void) | ?Kill@?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@QAEXXZ
    0x510BE0 | public: void __thiscall agiLib<class agiPhysParameters,class agiPhysDef>::Init(int) | ?Init@?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@QAEXH@Z
    0x595358 | const asSimulation::`vftable' | ??_7asSimulation@@6B@
    0x595398 | const artsReplayChannel::`vftable' | ??_7artsReplayChannel@@6B@
    0x6F2A10 | class MetaClass asSimulationMetaClass | ?asSimulationMetaClass@@3VMetaClass@@A
    0x6F2A3C | class asSimulation * ARTSPTR | ?ARTSPTR@@3PAVasSimulation@@A
    0x6F2AC0 | int Argc | ?Argc@@3HA
    0x6F2AC4 | char * * Argv | ?Argv@@3PAPADA
    0x6F2AC8 | class VirtualFileSystem * VFS | ?VFS@@3PAVVirtualFileSystem@@A
    0x6F2AE0 | int StereoBuffer | ?StereoBuffer@@3HA
    0x50FAE0 | void __cdecl QuietPrinter(int,char const *,char *) | ?QuietPrinter@@YAXHPBDPAD@Z
    0x510900 | int __cdecl IsValidPointer(void *,unsigned int,int) | ?IsValidPointer@@YAHPAXIH@Z
    0x510970 | void * __cdecl new_asSimulation(int) | ?new_asSimulation@@YAPAXH@Z
    0x510A40 | void __cdecl delete_asSimulation(void *,int) | ?delete_asSimulation@@YAXPAXH@Z
*/

#include "node.h"

#include "eventq7/replay.h"

// 0x510600 | ?InitPipeline@@YAHPADHPAPAD@Z
int32_t InitPipeline(const char* title, int32_t argc, char** argv);

// 0x5106C0 | ?ShutdownPipeline@@YAXXZ
void ShutdownPipeline();

// 0x510730 | ?RestartPipeline@@YAHHHHHH@Z
inline int32_t RestartPipeline(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    return stub<cdecl_t<int32_t, int32_t, int32_t, int32_t, int32_t, int32_t>>(0x510730, arg1, arg2, arg3, arg4, arg5);
}

// 0x6F2A10 | ?asSimulationMetaClass@@3VMetaClass@@A
inline extern_var(0x6F2A10, class MetaClass, asSimulationMetaClass);

// 0x6F2A3C | ?ARTSPTR@@3PAVasSimulation@@A
inline extern_var(0x6F2A3C, class asSimulation*, ARTSPTR);

// 0x6F2AC0 | ?Argc@@3HA
inline extern_var(0x6F2AC0, int32_t, Argc);

// 0x6F2AC4 | ?Argv@@3PAPADA
inline extern_var(0x6F2AC4, char**, Argv);

// 0x6F2AC8 | ?VFS@@3PAVVirtualFileSystem@@A
inline extern_var(0x6F2AC8, class VirtualFileSystem*, VFS);

// 0x6F2AE0 | ?StereoBuffer@@3HA
inline extern_var(0x6F2AE0, int32_t, StereoBuffer);

// 0x50FAE0 | ?QuietPrinter@@YAXHPBDPAD@Z
inline void QuietPrinter(int32_t arg1, char const* arg2, char* arg3)
{
    return stub<cdecl_t<void, int32_t, char const*, char*>>(0x50FAE0, arg1, arg2, arg3);
}

// 0x510970 | ?new_asSimulation@@YAPAXH@Z
// 0x510A40 | ?delete_asSimulation@@YAXPAXH@Z

#if 0
class agiLib<class agiPhysParameters, class agiPhysDef>
{
public:
    // 0x510BA0 | ?Kill@?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, agiLib<class agiPhysParameters, class agiPhysDef>>>(0x510BA0, this);
    }

    // 0x510BE0 | ?Init@?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, agiLib<class agiPhysParameters, class agiPhysDef>, int32_t>>(
            0x510BE0, this, arg1);
    }

    // 0x539220 | ??0?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@QAE@XZ
    inline agiLib<class agiPhysParameters, class agiPhysDef>()
    {
        stub<member_func_t<void, agiLib<class agiPhysParameters, class agiPhysDef>>>(0x539220, this);
    }

    // 0x539250 | ??1?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@QAE@XZ
    inline ~agiLib<class agiPhysParameters, class agiPhysDef>()
    {
        stub<member_func_t<void, agiLib<class agiPhysParameters, class agiPhysDef>>>(0x539250, this);
    }

    // 0x53BF80 | ?Add@?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@QAEHAAVagiPhysParameters@@@Z
    inline int32_t Add(class agiPhysParameters& arg1)
    {
        return stub<
            member_func_t<int32_t, agiLib<class agiPhysParameters, class agiPhysDef>, class agiPhysParameters&>>(
            0x53BF80, this, arg1);
    }
};
#endif

class asSimulation : public asNode
{
public:
    // asSimulation::`vftable' @ 0x595358

    char pad1C[0x270];

    // 0x50F7C0 | ??0asSimulation@@QAE@XZ
    inline asSimulation()
    {
        // stub<member_func_t<void, asSimulation>>(0x50F7C0, this);

        unimplemented();
    }

    // 0x50FAD0 | ?Quiet@asSimulation@@QAEXXZ
    inline void Quiet()
    {
        return stub<member_func_t<void, asSimulation>>(0x50FAD0, this);
    }

    // 0x50FB00 | ?Init@asSimulation@@QAEXPADHPAPAD@Z
    inline void Init(char* arg1, int32_t arg2, char** arg3)
    {
        return stub<member_func_t<void, asSimulation, char*, int32_t, char**>>(0x50FB00, this, arg1, arg2, arg3);
    }

    // 0x50FE50 | ?FirstUpdate@asSimulation@@QAEXXZ
    inline void FirstUpdate()
    {
        return stub<member_func_t<void, asSimulation>>(0x50FE50, this);
    }

    // 0x510110 | ?Device@asSimulation@@QAEXXZ
    inline void Device()
    {
        return stub<member_func_t<void, asSimulation>>(0x510110, this);
    }

    // 0x5101D0 | ?Widgets@asSimulation@@QAEXXZ
    inline void Widgets()
    {
        return stub<member_func_t<void, asSimulation>>(0x5101D0, this);
    }

    // 0x510200 | ?Simulate@asSimulation@@QAEXXZ
    inline void Simulate()
    {
        return stub<member_func_t<void, asSimulation>>(0x510200, this);
    }

    // 0x510290 | ?UpdatePaused@asSimulation@@QAEXPAVasNode@@@Z
    inline void UpdatePaused(class asNode* arg1)
    {
        return stub<member_func_t<void, asSimulation, class asNode*>>(0x510290, this, arg1);
    }

    // 0x510300 | ?ResetClock@asSimulation@@QAEXXZ
    inline void ResetClock()
    {
        return stub<member_func_t<void, asSimulation>>(0x510300, this);
    }

    // 0x510350 | ?BeginOverSample@asSimulation@@QAEXH@Z
    inline void BeginOverSample(int32_t arg1)
    {
        return stub<member_func_t<void, asSimulation, int32_t>>(0x510350, this, arg1);
    }

    // 0x510390 | ?EndOverSample@asSimulation@@QAEXXZ
    inline void EndOverSample()
    {
        return stub<member_func_t<void, asSimulation>>(0x510390, this);
    }

    // 0x5103C0 | ?EndOverSample@asSimulation@@QAEXH@Z
    inline void EndOverSample(int32_t arg1)
    {
        return stub<member_func_t<void, asSimulation, int32_t>>(0x5103C0, this, arg1);
    }

    // 0x5103F0 | ?RealTime@asSimulation@@QAEXM@Z
    inline void RealTime(float arg1)
    {
        return stub<member_func_t<void, asSimulation, float>>(0x5103F0, this, arg1);
    }

    // 0x510450 | ?FixedFrame@asSimulation@@QAEXMH@Z
    inline void FixedFrame(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, asSimulation, float, int32_t>>(0x510450, this, arg1, arg2);
    }

    // 0x510490 | ?FrameLock@asSimulation@@QAEXHH@Z
    inline void FrameLock(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, asSimulation, int32_t, int32_t>>(0x510490, this, arg1, arg2);
    }

    // 0x5104A0 | ?Benchmark@asSimulation@@QAEXXZ
    inline void Benchmark()
    {
        return stub<member_func_t<void, asSimulation>>(0x5104A0, this);
    }

    // 0x510520 | ?Pause@asSimulation@@QAEXXZ
    inline void Pause()
    {
        return stub<member_func_t<void, asSimulation>>(0x510520, this);
    }

    // 0x510920 | ?DeclareFields@asSimulation@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x510920);
    }

    // 0x50F960 | ??1asSimulation@@UAE@XZ
    inline ~asSimulation() override = 0
    {
        // stub<member_func_t<void, asSimulation>>(0x50F960, this);

        unimplemented();
    }

    // 0x510A90 | ?GetClass@asSimulation@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asSimulation>>(0x510A90, this);
    }

    // 0x50FE70 | ?Update@asSimulation@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asSimulation>>(0x50FE70, this);
    }

    // 0x50FE40 | ?Reset@asSimulation@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, asSimulation>>(0x50FE40, this);
    }
};

check_size(asSimulation, 0x28C);

struct artsReplayChannel : eqReplayChannel
{
public:
    // artsReplayChannel::`vftable' @ 0x595398

    // 0x510AA0 | ??0artsReplayChannel@@QAE@XZ
    artsReplayChannel();

    // 0x510B30 | ??1artsReplayChannel@@QAE@XZ
    ~artsReplayChannel();

    // 0x510AC0 | ?DoRecord@artsReplayChannel@@UAEXPAVStream@@@Z
    inline void DoRecord(class Stream* arg1) override
    {
        return stub<member_func_t<void, artsReplayChannel, class Stream*>>(0x510AC0, this, arg1);
    }

    // 0x510B00 | ?DoPlayback@artsReplayChannel@@UAEXPAVStream@@@Z
    inline void DoPlayback(class Stream* arg1) override
    {
        return stub<member_func_t<void, artsReplayChannel, class Stream*>>(0x510B00, this, arg1);
    }
};

check_size(artsReplayChannel, 0xC);
