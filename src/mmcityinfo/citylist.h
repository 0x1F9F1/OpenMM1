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
    mmcityinfo:citylist

    0x4C0110 | public: __thiscall mmCityList::mmCityList(void) | ??0mmCityList@@QAE@XZ
    0x4C0130 | public: virtual __thiscall mmCityList::~mmCityList(void) | ??1mmCityList@@UAE@XZ
    0x4C0190 | public: void __thiscall mmCityList::Init(int) | ?Init@mmCityList@@QAEXH@Z
    0x4C01A0 | public: class mmCityInfo * __thiscall mmCityList::GetCityInfo(int) | ?GetCityInfo@mmCityList@@QAEPAVmmCityInfo@@H@Z
    0x4C01D0 | public: class mmCityInfo * __thiscall mmCityList::GetCityInfo(char *) | ?GetCityInfo@mmCityList@@QAEPAVmmCityInfo@@PAD@Z
    0x4C0250 | public: int __thiscall mmCityList::GetCityID(char *) | ?GetCityID@mmCityList@@QAEHPAD@Z
    0x4C02D0 | public: void __thiscall mmCityList::SetCurrentCity(char *) | ?SetCurrentCity@mmCityList@@QAEXPAD@Z
    0x4C02F0 | public: void __thiscall mmCityList::SetCurrentCity(int) | ?SetCurrentCity@mmCityList@@QAEXH@Z
    0x4C0320 | public: class mmCityInfo * __thiscall mmCityList::GetCurrentCity(void) | ?GetCurrentCity@mmCityList@@QAEPAVmmCityInfo@@XZ
    0x4C0330 | public: void __thiscall mmCityList::Load(char *) | ?Load@mmCityList@@QAEXPAD@Z
    0x4C0460 | public: void __thiscall mmCityList::Print(void) | ?Print@mmCityList@@QAEXXZ
    0x4C04A0 | public: void __thiscall mmCityList::LoadAll(void) | ?LoadAll@mmCityList@@QAEXXZ
    0x4C0550 | public: virtual void * __thiscall mmCityList::`scalar deleting destructor'(unsigned int) | ??_GmmCityList@@UAEPAXI@Z
    0x4C0550 | public: virtual void * __thiscall mmCityList::`vector deleting destructor'(unsigned int) | ??_EmmCityList@@UAEPAXI@Z
    0x594404 | const mmCityList::`vftable' | ??_7mmCityList@@6B@
    0x66A80C | class mmCityList * CityListPtr | ?CityListPtr@@3PAVmmCityList@@A
*/

// 0x66A80C | ?CityListPtr@@3PAVmmCityList@@A
inline extern_var(0x66A80C, class mmCityList*, CityListPtr);

class mmCityList
{
public:
    // mmCityList::`vftable' @ 0x594404

    // 0x4C0110 | ??0mmCityList@@QAE@XZ
    inline mmCityList()
    {
        // stub<member_func_t<void, mmCityList>>(0x4C0110, this);

        unimplemented();
    }

    // 0x4C0190 | ?Init@mmCityList@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, mmCityList, int32_t>>(0x4C0190, this, arg1);
    }

    // 0x4C01A0 | ?GetCityInfo@mmCityList@@QAEPAVmmCityInfo@@H@Z
    inline class mmCityInfo* GetCityInfo(int32_t arg1)
    {
        return stub<member_func_t<class mmCityInfo*, mmCityList, int32_t>>(0x4C01A0, this, arg1);
    }

    // 0x4C01D0 | ?GetCityInfo@mmCityList@@QAEPAVmmCityInfo@@PAD@Z
    inline class mmCityInfo* GetCityInfo(char* arg1)
    {
        return stub<member_func_t<class mmCityInfo*, mmCityList, char*>>(0x4C01D0, this, arg1);
    }

    // 0x4C0250 | ?GetCityID@mmCityList@@QAEHPAD@Z
    inline int32_t GetCityID(char* arg1)
    {
        return stub<member_func_t<int32_t, mmCityList, char*>>(0x4C0250, this, arg1);
    }

    // 0x4C02D0 | ?SetCurrentCity@mmCityList@@QAEXPAD@Z
    inline void SetCurrentCity(char* arg1)
    {
        return stub<member_func_t<void, mmCityList, char*>>(0x4C02D0, this, arg1);
    }

    // 0x4C02F0 | ?SetCurrentCity@mmCityList@@QAEXH@Z
    inline void SetCurrentCity(int32_t arg1)
    {
        return stub<member_func_t<void, mmCityList, int32_t>>(0x4C02F0, this, arg1);
    }

    // 0x4C0320 | ?GetCurrentCity@mmCityList@@QAEPAVmmCityInfo@@XZ
    inline class mmCityInfo* GetCurrentCity()
    {
        return stub<member_func_t<class mmCityInfo*, mmCityList>>(0x4C0320, this);
    }

    // 0x4C0330 | ?Load@mmCityList@@QAEXPAD@Z
    inline void Load(char* arg1)
    {
        return stub<member_func_t<void, mmCityList, char*>>(0x4C0330, this, arg1);
    }

    // 0x4C0460 | ?Print@mmCityList@@QAEXXZ
    inline void Print()
    {
        return stub<member_func_t<void, mmCityList>>(0x4C0460, this);
    }

    // 0x4C04A0 | ?LoadAll@mmCityList@@QAEXXZ
    inline void LoadAll()
    {
        return stub<member_func_t<void, mmCityList>>(0x4C04A0, this);
    }

    // 0x4C0130 | ??1mmCityList@@UAE@XZ
    virtual inline ~mmCityList()
    {
        stub<member_func_t<void, mmCityList>>(0x4C0130, this);
    }
};
