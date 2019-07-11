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

// mmcityinfo:playerdata

#include "hooking.h"

// 0x66A898 | ?mmPlayerDataMetaClass@@3VMetaClass@@A
inline extern_var(0x66A898, class MetaClass, mmPlayerDataMetaClass);

// 0x66A8C0 | ?mmPlayerRecordMetaClass@@3VMetaClass@@A
inline extern_var(0x66A8C0, class MetaClass, mmPlayerRecordMetaClass);

// 0x4C4440 | ?new_mmPlayerRecord@@YAPAXH@Z
inline void* new_mmPlayerRecord(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4C4440, arg1);
}

// 0x4C4510 | ?delete_mmPlayerRecord@@YAXPAXH@Z
inline void delete_mmPlayerRecord(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4C4510, arg1, arg2);
}

// 0x4C5610 | ?new_mmPlayerData@@YAPAXH@Z
inline void* new_mmPlayerData(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4C5610, arg1);
}

// 0x4C56E0 | ?delete_mmPlayerData@@YAXPAXH@Z
inline void delete_mmPlayerData(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4C56E0, arg1, arg2);
}

class mmPlayerRecord : mmInfoBase
{
public:
    // mmPlayerRecord::`vftable' @ 0x58F7D8

    // 0x410C60 | ??0mmPlayerRecord@@QAE@ABV0@@Z
    inline mmPlayerRecord(class mmPlayerRecord const& arg1)
    {
        stub<member_func_t<void, mmPlayerRecord, class mmPlayerRecord const&>>(0x410C60, this, arg1);
    }

    // 0x4C4180 | ??0mmPlayerRecord@@QAE@XZ
    inline mmPlayerRecord()
    {
        stub<member_func_t<void, mmPlayerRecord>>(0x4C4180, this);
    }

    // 0x4C41B0 | ?Reset@mmPlayerRecord@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmPlayerRecord>>(0x4C41B0, this);
    }

    // 0x4C41E0 | ??4mmPlayerRecord@@QAEXAAV0@@Z
    inline void operator=(class mmPlayerRecord& arg1)
    {
        return stub<member_func_t<void, mmPlayerRecord, class mmPlayerRecord&>>(0x4C41E0, this, arg1);
    }

    // 0x4C4230 | ?ComputeCRC@mmPlayerRecord@@QAEIXZ
    inline uint32_t ComputeCRC()
    {
        return stub<member_func_t<uint32_t, mmPlayerRecord>>(0x4C4230, this);
    }

    // 0x4C4290 | ?SaveBinary@mmPlayerRecord@@QAEHPAVStream@@@Z
    inline int32_t SaveBinary(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerRecord, class Stream*>>(0x4C4290, this, arg1);
    }

    // 0x4C4310 | ?LoadBinary@mmPlayerRecord@@QAEHPAVStream@@@Z
    inline int32_t LoadBinary(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerRecord, class Stream*>>(0x4C4310, this, arg1);
    }

    // 0x4C4390 | ?DeclareFields@mmPlayerRecord@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4C4390);
    }

    // 0x4C41A0 | ??1mmPlayerRecord@@UAE@XZ
    inline ~mmPlayerRecord() override
    {
        stub<member_func_t<void, mmPlayerRecord>>(0x4C41A0, this);
    }

    // 0x4C4560 | ?GetClass@mmPlayerRecord@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmPlayerRecord>>(0x4C4560, this);
    }
};

class mmPlayerData : mmInfoBase
{
public:
    // mmPlayerData::`vftable' @ 0x5943F0

    // 0x4C4570 | ??0mmPlayerData@@QAE@XZ
    inline mmPlayerData()
    {
        stub<member_func_t<void, mmPlayerData>>(0x4C4570, this);
    }

    // 0x4C4690 | ??4mmPlayerData@@QAEXAAV0@@Z
    inline void operator=(class mmPlayerData& arg1)
    {
        return stub<member_func_t<void, mmPlayerData, class mmPlayerData&>>(0x4C4690, this, arg1);
    }

    // 0x4C47D0 | ?RegisterFinish@mmPlayerData@@QAEHHMD@Z
    inline int32_t RegisterFinish(int32_t arg1, float arg2, char arg3)
    {
        return stub<member_func_t<int32_t, mmPlayerData, int32_t, float, char>>(0x4C47D0, this, arg1, arg2, arg3);
    }

    // 0x4C47E0 | ?GetCheckpointProgress@mmPlayerData@@QAEHH@Z
    inline int32_t GetCheckpointProgress(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerData, int32_t>>(0x4C47E0, this, arg1);
    }

    // 0x4C4800 | ?GetBlitzMask@mmPlayerData@@QAEHXZ
    inline int32_t GetBlitzMask()
    {
        return stub<member_func_t<int32_t, mmPlayerData>>(0x4C4800, this);
    }

    // 0x4C4830 | ?GetCheckpointMask@mmPlayerData@@QAEHXZ
    inline int32_t GetCheckpointMask()
    {
        return stub<member_func_t<int32_t, mmPlayerData>>(0x4C4830, this);
    }

    // 0x4C4860 | ?GetCircuitMask@mmPlayerData@@QAEHXZ
    inline int32_t GetCircuitMask()
    {
        return stub<member_func_t<int32_t, mmPlayerData>>(0x4C4860, this);
    }

    // 0x4C4890 | ?GetBlitzPassed@mmPlayerData@@QAEHXZ
    inline int32_t GetBlitzPassed()
    {
        return stub<member_func_t<int32_t, mmPlayerData>>(0x4C4890, this);
    }

    // 0x4C48B0 | ?GetCheckpointPassed@mmPlayerData@@QAEHXZ
    inline int32_t GetCheckpointPassed()
    {
        return stub<member_func_t<int32_t, mmPlayerData>>(0x4C48B0, this);
    }

    // 0x4C48D0 | ?GetCircuitPassed@mmPlayerData@@QAEHXZ
    inline int32_t GetCircuitPassed()
    {
        return stub<member_func_t<int32_t, mmPlayerData>>(0x4C48D0, this);
    }

    // 0x4C48F0 | ?GetTotalPassed@mmPlayerData@@QAEHXZ
    inline int32_t GetTotalPassed()
    {
        return stub<member_func_t<int32_t, mmPlayerData>>(0x4C48F0, this);
    }

    // 0x4C4910 | ?GetTotalScore@mmPlayerData@@QAEHXZ
    inline int32_t GetTotalScore()
    {
        return stub<member_func_t<int32_t, mmPlayerData>>(0x4C4910, this);
    }

    // 0x4C4960 | ?ResolveCheckpointProgress@mmPlayerData@@QAEXXZ
    inline void ResolveCheckpointProgress()
    {
        return stub<member_func_t<void, mmPlayerData>>(0x4C4960, this);
    }

    // 0x4C49F0 | ?RegisterFinish@mmPlayerData@@QAEHVmmPlayerRecord@@HH@Z
    inline int32_t RegisterFinish(class mmPlayerRecord arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, mmPlayerData, class mmPlayerRecord, int32_t, int32_t>>(
            0x4C49F0, this, arg1, arg2, arg3);
    }

    // 0x4C4CA0 | ?Reset@mmPlayerData@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmPlayerData>>(0x4C4CA0, this);
    }

    // 0x4C4D70 | ?SetName@mmPlayerData@@QAEXPAD@Z
    inline void SetName(char* arg1)
    {
        return stub<member_func_t<void, mmPlayerData, char*>>(0x4C4D70, this, arg1);
    }

    // 0x4C4DB0 | ?GetName@mmPlayerData@@QAEPADXZ
    inline char* GetName()
    {
        return stub<member_func_t<char*, mmPlayerData>>(0x4C4DB0, this);
    }

    // 0x4C4DC0 | ?SetNetName@mmPlayerData@@QAEXPAD@Z
    inline void SetNetName(char* arg1)
    {
        return stub<member_func_t<void, mmPlayerData, char*>>(0x4C4DC0, this, arg1);
    }

    // 0x4C4E00 | ?GetNetName@mmPlayerData@@QAEPADXZ
    inline char* GetNetName()
    {
        return stub<member_func_t<char*, mmPlayerData>>(0x4C4E00, this);
    }

    // 0x4C4E10 | ?SetFileName@mmPlayerData@@QAEXPAD@Z
    inline void SetFileName(char* arg1)
    {
        return stub<member_func_t<void, mmPlayerData, char*>>(0x4C4E10, this, arg1);
    }

    // 0x4C4E50 | ?GetFileName@mmPlayerData@@QAEPADXZ
    inline char* GetFileName()
    {
        return stub<member_func_t<char*, mmPlayerData>>(0x4C4E50, this);
    }

    // 0x4C4E60 | ?Load@mmPlayerData@@QAEHPAD@Z
    inline int32_t Load(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*>>(0x4C4E60, this, arg1);
    }

    // 0x4C4E90 | ?Save@mmPlayerData@@QAEHPADH@Z
    inline int32_t Save(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*, int32_t>>(0x4C4E90, this, arg1, arg2);
    }

    // 0x4C4F30 | ?ComputeCRC@mmPlayerData@@QAEIXZ
    inline uint32_t ComputeCRC()
    {
        return stub<member_func_t<uint32_t, mmPlayerData>>(0x4C4F30, this);
    }

    // 0x4C4FE0 | ?LoadBinary@mmPlayerData@@QAEHPAD@Z
    inline int32_t LoadBinary(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*>>(0x4C4FE0, this, arg1);
    }

    // 0x4C5240 | ?SaveBinary@mmPlayerData@@QAEHPAD@Z
    inline int32_t SaveBinary(char* arg1)
    {
        return stub<member_func_t<int32_t, mmPlayerData, char*>>(0x4C5240, this, arg1);
    }

    // 0x4C5450 | ?DeclareFields@mmPlayerData@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4C5450);
    }

    // 0x4C0040 | ??1mmPlayerData@@UAE@XZ
    inline ~mmPlayerData() override
    {
        stub<member_func_t<void, mmPlayerData>>(0x4C0040, this);
    }

    // 0x4C5730 | ?GetClass@mmPlayerData@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmPlayerData>>(0x4C5730, this);
    }
};
