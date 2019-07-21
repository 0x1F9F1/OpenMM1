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
    mmui:cr_settings

    0x4954B0 | public: __thiscall CRSettings::CRSettings(int) | ??0CRSettings@@QAE@H@Z
    0x495DF0 | public: virtual __thiscall CRSettings::~CRSettings(void) | ??1CRSettings@@UAE@XZ
    0x495E70 | public: void __thiscall CRSettings::SettingsCB(void) | ?SettingsCB@CRSettings@@QAEXXZ
    0x495E80 | public: void __thiscall CRSettings::SetTeam(void) | ?SetTeam@CRSettings@@QAEXXZ
    0x495EA0 | public: void __thiscall CRSettings::SetTeamWidget(void) | ?SetTeamWidget@CRSettings@@QAEXXZ
    0x495EB0 | public: void __thiscall CRSettings::SetHost(int) | ?SetHost@CRSettings@@QAEXH@Z
    0x495FB0 | public: void __thiscall CRSettings::InitPlayerRecord(void) | ?InitPlayerRecord@CRSettings@@QAEXXZ
    0x496080 | public: int __thiscall CRSettings::AddPlayerRecord(char *,int,int,char *) | ?AddPlayerRecord@CRSettings@@QAEHPADHH0@Z
    0x4961C0 | public: void __thiscall CRSettings::SetPlayerScore(int,int) | ?SetPlayerScore@CRSettings@@QAEXHH@Z
    0x496200 | public: void __thiscall CRSettings::ResetPlayerRecord(void) | ?ResetPlayerRecord@CRSettings@@QAEXXZ
    0x496290 | public: void __thiscall CRSettings::SetLimitControl(void) | ?SetLimitControl@CRSettings@@QAEXXZ
    0x4963F0 | public: int __thiscall CRSettings::EncodeCRData(void) | ?EncodeCRData@CRSettings@@QAEHXZ
    0x496440 | public: void __thiscall CRSettings::DecodeCRData(int) | ?DecodeCRData@CRSettings@@QAEXH@Z
    0x4964B0 | public: void __thiscall CRSettings::GetLimit(int &,int &) | ?GetLimit@CRSettings@@QAEXAAH0@Z
    0x496500 | public: void __thiscall CRSettings::SetLimit(int &,int &) | ?SetLimit@CRSettings@@QAEXAAH0@Z
    0x496580 | public: void __thiscall CRSettings::SetGoldMass(int) | ?SetGoldMass@CRSettings@@QAEXH@Z
    0x4965B0 | public: int __thiscall CRSettings::GetGoldMass(void) | ?GetGoldMass@CRSettings@@QAEHXZ
    0x4965C0 | public: int __thiscall CRSettings::GetLimitVal(int &) | ?GetLimitVal@CRSettings@@QAEHAAH@Z
    0x496610 | public: int __thiscall CRSettings::GetGoldMassVal(void) | ?GetGoldMassVal@CRSettings@@QAEHXZ
    0x496620 | public: void __thiscall CRSettings::SetGameClassCallback(void) | ?SetGameClassCallback@CRSettings@@QAEXXZ
    0x496640 | public: void __thiscall CRSettings::SetTeamWidgets(void) | ?SetTeamWidgets@CRSettings@@QAEXXZ
    0x4966C0 | public: virtual void * __thiscall CRSettings::`vector deleting destructor'(unsigned int) | ??_ECRSettings@@UAEPAXI@Z
    0x4966C0 | public: virtual void * __thiscall CRSettings::`scalar deleting destructor'(unsigned int) | ??_GCRSettings@@UAEPAXI@Z
    0x592700 | const CRSettings::`vftable' | ??_7CRSettings@@6B@
    0x5AF040 | int * GameType_PenaltyTable | ?GameType_PenaltyTable@@3PAHA
    0x5AF068 | int * Limit_ValueTable | ?Limit_ValueTable@@3PAHA
*/

// 0x5AF040 | ?GameType_PenaltyTable@@3PAHA
inline extern_var(0x5AF040, int32_t*, GameType_PenaltyTable);

// 0x5AF068 | ?Limit_ValueTable@@3PAHA
inline extern_var(0x5AF068, int32_t*, Limit_ValueTable);

struct CRSettings : UIMenu
{
public:
    // CRSettings::`vftable' @ 0x592700

    // 0x4954B0 | ??0CRSettings@@QAE@H@Z
    inline CRSettings(int32_t arg1)
    {
        // stub<member_func_t<void, CRSettings, int32_t>>(0x4954B0, this, arg1);

        unimplemented();
    }

    // 0x495E70 | ?SettingsCB@CRSettings@@QAEXXZ
    inline void SettingsCB()
    {
        return stub<member_func_t<void, CRSettings>>(0x495E70, this);
    }

    // 0x495E80 | ?SetTeam@CRSettings@@QAEXXZ
    inline void SetTeam()
    {
        return stub<member_func_t<void, CRSettings>>(0x495E80, this);
    }

    // 0x495EA0 | ?SetTeamWidget@CRSettings@@QAEXXZ
    inline void SetTeamWidget()
    {
        return stub<member_func_t<void, CRSettings>>(0x495EA0, this);
    }

    // 0x495EB0 | ?SetHost@CRSettings@@QAEXH@Z
    inline void SetHost(int32_t arg1)
    {
        return stub<member_func_t<void, CRSettings, int32_t>>(0x495EB0, this, arg1);
    }

    // 0x495FB0 | ?InitPlayerRecord@CRSettings@@QAEXXZ
    inline void InitPlayerRecord()
    {
        return stub<member_func_t<void, CRSettings>>(0x495FB0, this);
    }

    // 0x496080 | ?AddPlayerRecord@CRSettings@@QAEHPADHH0@Z
    inline int32_t AddPlayerRecord(char* arg1, int32_t arg2, int32_t arg3, char* arg4)
    {
        return stub<member_func_t<int32_t, CRSettings, char*, int32_t, int32_t, char*>>(
            0x496080, this, arg1, arg2, arg3, arg4);
    }

    // 0x4961C0 | ?SetPlayerScore@CRSettings@@QAEXHH@Z
    inline void SetPlayerScore(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, CRSettings, int32_t, int32_t>>(0x4961C0, this, arg1, arg2);
    }

    // 0x496200 | ?ResetPlayerRecord@CRSettings@@QAEXXZ
    inline void ResetPlayerRecord()
    {
        return stub<member_func_t<void, CRSettings>>(0x496200, this);
    }

    // 0x496290 | ?SetLimitControl@CRSettings@@QAEXXZ
    inline void SetLimitControl()
    {
        return stub<member_func_t<void, CRSettings>>(0x496290, this);
    }

    // 0x4963F0 | ?EncodeCRData@CRSettings@@QAEHXZ
    inline int32_t EncodeCRData()
    {
        return stub<member_func_t<int32_t, CRSettings>>(0x4963F0, this);
    }

    // 0x496440 | ?DecodeCRData@CRSettings@@QAEXH@Z
    inline void DecodeCRData(int32_t arg1)
    {
        return stub<member_func_t<void, CRSettings, int32_t>>(0x496440, this, arg1);
    }

    // 0x4964B0 | ?GetLimit@CRSettings@@QAEXAAH0@Z
    inline void GetLimit(int32_t& arg1, int32_t& arg2)
    {
        return stub<member_func_t<void, CRSettings, int32_t&, int32_t&>>(0x4964B0, this, arg1, arg2);
    }

    // 0x496500 | ?SetLimit@CRSettings@@QAEXAAH0@Z
    inline void SetLimit(int32_t& arg1, int32_t& arg2)
    {
        return stub<member_func_t<void, CRSettings, int32_t&, int32_t&>>(0x496500, this, arg1, arg2);
    }

    // 0x496580 | ?SetGoldMass@CRSettings@@QAEXH@Z
    inline void SetGoldMass(int32_t arg1)
    {
        return stub<member_func_t<void, CRSettings, int32_t>>(0x496580, this, arg1);
    }

    // 0x4965B0 | ?GetGoldMass@CRSettings@@QAEHXZ
    inline int32_t GetGoldMass()
    {
        return stub<member_func_t<int32_t, CRSettings>>(0x4965B0, this);
    }

    // 0x4965C0 | ?GetLimitVal@CRSettings@@QAEHAAH@Z
    inline int32_t GetLimitVal(int32_t& arg1)
    {
        return stub<member_func_t<int32_t, CRSettings, int32_t&>>(0x4965C0, this, arg1);
    }

    // 0x496610 | ?GetGoldMassVal@CRSettings@@QAEHXZ
    inline int32_t GetGoldMassVal()
    {
        return stub<member_func_t<int32_t, CRSettings>>(0x496610, this);
    }

    // 0x496620 | ?SetGameClassCallback@CRSettings@@QAEXXZ
    inline void SetGameClassCallback()
    {
        return stub<member_func_t<void, CRSettings>>(0x496620, this);
    }

    // 0x496640 | ?SetTeamWidgets@CRSettings@@QAEXXZ
    inline void SetTeamWidgets()
    {
        return stub<member_func_t<void, CRSettings>>(0x496640, this);
    }

    // 0x495DF0 | ??1CRSettings@@UAE@XZ
    inline ~CRSettings() override = 0
    {
        // stub<member_func_t<void, CRSettings>>(0x495DF0, this);

        unimplemented();
    }
};
