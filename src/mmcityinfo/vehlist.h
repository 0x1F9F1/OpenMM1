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
    mmcityinfo:vehlist

    0x4C0580 | public: __thiscall mmVehList::mmVehList(void) | ??0mmVehList@@QAE@XZ
    0x4C05A0 | public: virtual __thiscall mmVehList::~mmVehList(void) | ??1mmVehList@@UAE@XZ
    0x4C0600 | public: void __thiscall mmVehList::Init(int) | ?Init@mmVehList@@QAEXH@Z
    0x4C0610 | public: class mmVehInfo * __thiscall mmVehList::GetVehicleInfo(int) | ?GetVehicleInfo@mmVehList@@QAEPAVmmVehInfo@@H@Z
    0x4C0640 | public: class mmVehInfo * __thiscall mmVehList::GetVehicleInfo(char *) | ?GetVehicleInfo@mmVehList@@QAEPAVmmVehInfo@@PAD@Z
    0x4C06C0 | public: void __thiscall mmVehList::SetDefaultVehicle(char *) | ?SetDefaultVehicle@mmVehList@@QAEXPAD@Z
    0x4C0700 | public: int __thiscall mmVehList::GetVehicleID(char *) | ?GetVehicleID@mmVehList@@QAEHPAD@Z
    0x4C0780 | public: void __thiscall mmVehList::Load(char *) | ?Load@mmVehList@@QAEXPAD@Z
    0x4C08B0 | public: void __thiscall mmVehList::Print(void) | ?Print@mmVehList@@QAEXXZ
    0x4C0900 | public: void __thiscall mmVehList::LoadAll(void) | ?LoadAll@mmVehList@@QAEXXZ
    0x4C09B0 | public: virtual void * __thiscall mmVehList::`scalar deleting destructor'(unsigned int) | ??_GmmVehList@@UAEPAXI@Z
    0x4C09B0 | public: virtual void * __thiscall mmVehList::`vector deleting destructor'(unsigned int) | ??_EmmVehList@@UAEPAXI@Z
    0x594408 | const mmVehList::`vftable' | ??_7mmVehList@@6B@
    0x66A814 | class mmVehList * VehicleListPtr | ?VehicleListPtr@@3PAVmmVehList@@A
*/

// 0x66A814 | ?VehicleListPtr@@3PAVmmVehList@@A
inline extern_var(0x66A814, class mmVehList*, VehicleListPtr);

class mmVehList
{
public:
    // mmVehList::`vftable' @ 0x594408

    // 0x4C0580 | ??0mmVehList@@QAE@XZ
    inline mmVehList()
    {
        // stub<member_func_t<void, mmVehList>>(0x4C0580, this);

        unimplemented();
    }

    // 0x4C0600 | ?Init@mmVehList@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, mmVehList, int32_t>>(0x4C0600, this, arg1);
    }

    // 0x4C0610 | ?GetVehicleInfo@mmVehList@@QAEPAVmmVehInfo@@H@Z
    inline class mmVehInfo* GetVehicleInfo(int32_t arg1)
    {
        return stub<member_func_t<class mmVehInfo*, mmVehList, int32_t>>(0x4C0610, this, arg1);
    }

    // 0x4C0640 | ?GetVehicleInfo@mmVehList@@QAEPAVmmVehInfo@@PAD@Z
    inline class mmVehInfo* GetVehicleInfo(char* arg1)
    {
        return stub<member_func_t<class mmVehInfo*, mmVehList, char*>>(0x4C0640, this, arg1);
    }

    // 0x4C06C0 | ?SetDefaultVehicle@mmVehList@@QAEXPAD@Z
    inline void SetDefaultVehicle(char* arg1)
    {
        return stub<member_func_t<void, mmVehList, char*>>(0x4C06C0, this, arg1);
    }

    // 0x4C0700 | ?GetVehicleID@mmVehList@@QAEHPAD@Z
    inline int32_t GetVehicleID(char* arg1)
    {
        return stub<member_func_t<int32_t, mmVehList, char*>>(0x4C0700, this, arg1);
    }

    // 0x4C0780 | ?Load@mmVehList@@QAEXPAD@Z
    inline void Load(char* arg1)
    {
        return stub<member_func_t<void, mmVehList, char*>>(0x4C0780, this, arg1);
    }

    // 0x4C08B0 | ?Print@mmVehList@@QAEXXZ
    inline void Print()
    {
        return stub<member_func_t<void, mmVehList>>(0x4C08B0, this);
    }

    // 0x4C0900 | ?LoadAll@mmVehList@@QAEXXZ
    inline void LoadAll()
    {
        return stub<member_func_t<void, mmVehList>>(0x4C0900, this);
    }

    // 0x4C05A0 | ??1mmVehList@@UAE@XZ
    virtual inline ~mmVehList()
    {
        stub<member_func_t<void, mmVehList>>(0x4C05A0, this);
    }
};
