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
    mmaudio:mixer

    0x4E0C10 | public: void __thiscall VolumeDW::Set(float,float) | ?Set@VolumeDW@@QAEXMM@Z
    0x4E0CE0 | public: unsigned long __thiscall VolumeDW::Value(void) | ?Value@VolumeDW@@QAEKXZ
    0x4E0D10 | public: unsigned long __thiscall MixerCTL::Init(void) | ?Init@MixerCTL@@QAEKXZ
    0x4E0D50 | public: virtual __thiscall MixerCTL::~MixerCTL(void) | ??1MixerCTL@@UAE@XZ
    0x4E0DC0 | public: void __thiscall MixerCTL::AssignWaveBalance(float) | ?AssignWaveBalance@MixerCTL@@QAEXM@Z
    0x4E0E10 | public: void __thiscall MixerCTL::AssignCDBalance(float) | ?AssignCDBalance@MixerCTL@@QAEXM@Z
    0x4E0E60 | public: void __thiscall MixerCTL::RefreshAll(unsigned long) | ?RefreshAll@MixerCTL@@QAEXK@Z
    0x4E0E70 | public: float __thiscall MixerCTL::GetWaveBalance(void) | ?GetWaveBalance@MixerCTL@@QAEMXZ
    0x4E0E80 | public: float __thiscall MixerCTL::GetWaveVolume(void) | ?GetWaveVolume@MixerCTL@@QAEMXZ
    0x4E0E90 | public: void __thiscall MixerCTL::AssignWaveVolume(float) | ?AssignWaveVolume@MixerCTL@@QAEXM@Z
    0x4E0EB0 | public: void __thiscall MixerCTL::AssignCDVolume(float) | ?AssignCDVolume@MixerCTL@@QAEXM@Z
    0x4E0ED0 | public: float __thiscall MixerCTL::GetCDBalance(void) | ?GetCDBalance@MixerCTL@@QAEMXZ
    0x4E0EE0 | public: float __thiscall MixerCTL::GetCDVolume(void) | ?GetCDVolume@MixerCTL@@QAEMXZ
    0x4E0EF0 | public: unsigned long __thiscall MixerCTL::AssignMixerVolume(float,unsigned long) | ?AssignMixerVolume@MixerCTL@@QAEKMK@Z
    0x4E1150 | public: unsigned long __thiscall MixerCTL::AssignMixerBalance(float,unsigned long) | ?AssignMixerBalance@MixerCTL@@QAEKMK@Z
    0x4E1400 | public: float __thiscall MixerCTL::GetMixerBalance(unsigned long) | ?GetMixerBalance@MixerCTL@@QAEMK@Z
    0x4E1680 | public: void __thiscall MixerCTL::SetDeviceNum(unsigned int) | ?SetDeviceNum@MixerCTL@@QAEXI@Z
    0x4E16A0 | private: char * __thiscall MixerCTL::GetErrorMessage(unsigned long) | ?GetErrorMessage@MixerCTL@@AAEPADK@Z
    0x4E1740 | private: virtual long __thiscall MixerCTL::WindowProc(struct HWND__ *,unsigned int,unsigned int,long) | ?WindowProc@MixerCTL@@EAEJPAUHWND__@@IIJ@Z
    0x4E1750 | public: __thiscall VolumeDW::~VolumeDW(void) | ??1VolumeDW@@QAE@XZ
    0x4E1760 | public: virtual void * __thiscall MixerCTL::`scalar deleting destructor'(unsigned int) | ??_GMixerCTL@@UAEPAXI@Z
    0x4E1760 | public: virtual void * __thiscall MixerCTL::`vector deleting destructor'(unsigned int) | ??_EMixerCTL@@UAEPAXI@Z
    0x594978 | const MixerCTL::`vftable'{for `Base'} | ??_7MixerCTL@@6BBase@@@
    0x59498C | const MixerCTL::`vftable'{for `Dispatchable'} | ??_7MixerCTL@@6BDispatchable@@@
*/

class MixerCTL
{
public:
    // 0x4E0D10 | ?Init@MixerCTL@@QAEKXZ
    inline uint32_t Init()
    {
        return stub<member_func_t<uint32_t, MixerCTL>>(0x4E0D10, this);
    }

    // 0x4E0DC0 | ?AssignWaveBalance@MixerCTL@@QAEXM@Z
    inline void AssignWaveBalance(float arg1)
    {
        return stub<member_func_t<void, MixerCTL, float>>(0x4E0DC0, this, arg1);
    }

    // 0x4E0E10 | ?AssignCDBalance@MixerCTL@@QAEXM@Z
    inline void AssignCDBalance(float arg1)
    {
        return stub<member_func_t<void, MixerCTL, float>>(0x4E0E10, this, arg1);
    }

    // 0x4E0E60 | ?RefreshAll@MixerCTL@@QAEXK@Z
    inline void RefreshAll(uint32_t arg1)
    {
        return stub<member_func_t<void, MixerCTL, uint32_t>>(0x4E0E60, this, arg1);
    }

    // 0x4E0E70 | ?GetWaveBalance@MixerCTL@@QAEMXZ
    inline float GetWaveBalance()
    {
        return stub<member_func_t<float, MixerCTL>>(0x4E0E70, this);
    }

    // 0x4E0E80 | ?GetWaveVolume@MixerCTL@@QAEMXZ
    inline float GetWaveVolume()
    {
        return stub<member_func_t<float, MixerCTL>>(0x4E0E80, this);
    }

    // 0x4E0E90 | ?AssignWaveVolume@MixerCTL@@QAEXM@Z
    inline void AssignWaveVolume(float arg1)
    {
        return stub<member_func_t<void, MixerCTL, float>>(0x4E0E90, this, arg1);
    }

    // 0x4E0EB0 | ?AssignCDVolume@MixerCTL@@QAEXM@Z
    inline void AssignCDVolume(float arg1)
    {
        return stub<member_func_t<void, MixerCTL, float>>(0x4E0EB0, this, arg1);
    }

    // 0x4E0ED0 | ?GetCDBalance@MixerCTL@@QAEMXZ
    inline float GetCDBalance()
    {
        return stub<member_func_t<float, MixerCTL>>(0x4E0ED0, this);
    }

    // 0x4E0EE0 | ?GetCDVolume@MixerCTL@@QAEMXZ
    inline float GetCDVolume()
    {
        return stub<member_func_t<float, MixerCTL>>(0x4E0EE0, this);
    }

    // 0x4E0EF0 | ?AssignMixerVolume@MixerCTL@@QAEKMK@Z
    inline uint32_t AssignMixerVolume(float arg1, uint32_t arg2)
    {
        return stub<member_func_t<uint32_t, MixerCTL, float, uint32_t>>(0x4E0EF0, this, arg1, arg2);
    }

    // 0x4E1150 | ?AssignMixerBalance@MixerCTL@@QAEKMK@Z
    inline uint32_t AssignMixerBalance(float arg1, uint32_t arg2)
    {
        return stub<member_func_t<uint32_t, MixerCTL, float, uint32_t>>(0x4E1150, this, arg1, arg2);
    }

    // 0x4E1400 | ?GetMixerBalance@MixerCTL@@QAEMK@Z
    inline float GetMixerBalance(uint32_t arg1)
    {
        return stub<member_func_t<float, MixerCTL, uint32_t>>(0x4E1400, this, arg1);
    }

    // 0x4E1680 | ?SetDeviceNum@MixerCTL@@QAEXI@Z
    inline void SetDeviceNum(uint32_t arg1)
    {
        return stub<member_func_t<void, MixerCTL, uint32_t>>(0x4E1680, this, arg1);
    }

    // 0x4E16A0 | ?GetErrorMessage@MixerCTL@@AAEPADK@Z
    inline char* GetErrorMessage(uint32_t arg1)
    {
        return stub<member_func_t<char*, MixerCTL, uint32_t>>(0x4E16A0, this, arg1);
    }
};

struct VolumeDW
{
public:
    // 0x4E0C10 | ?Set@VolumeDW@@QAEXMM@Z
    inline void Set(float arg1, float arg2)
    {
        return stub<member_func_t<void, VolumeDW, float, float>>(0x4E0C10, this, arg1, arg2);
    }

    // 0x4E0CE0 | ?Value@VolumeDW@@QAEKXZ
    inline uint32_t Value()
    {
        return stub<member_func_t<uint32_t, VolumeDW>>(0x4E0CE0, this);
    }

    // 0x4E1750 | ??1VolumeDW@@QAE@XZ
    inline ~VolumeDW()
    {
        stub<member_func_t<void, VolumeDW>>(0x4E1750, this);
    }
};
