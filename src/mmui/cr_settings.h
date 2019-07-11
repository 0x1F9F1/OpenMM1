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

// mmui:cr_settings

#include "hooking.h"

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
        stub<member_func_t<void, CRSettings, int32_t>>(0x4954B0, this, arg1);
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
    inline ~CRSettings() override
    {
        stub<member_func_t<void, CRSettings>>(0x495DF0, this);
    }
};
