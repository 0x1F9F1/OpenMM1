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
    mmcityinfo:playerdata

    0x4C4180 | public: __thiscall mmPlayerRecord::mmPlayerRecord(void) | ??0mmPlayerRecord@@QAE@XZ
    0x4C41A0 | public: virtual __thiscall mmPlayerRecord::~mmPlayerRecord(void) | ??1mmPlayerRecord@@UAE@XZ
    0x4C41B0 | public: void __thiscall mmPlayerRecord::Reset(void) | ?Reset@mmPlayerRecord@@QAEXXZ
    0x4C41E0 | public: void __thiscall mmPlayerRecord::operator=(class mmPlayerRecord &) | ??4mmPlayerRecord@@QAEXAAV0@@Z
    0x4C4230 | public: unsigned int __thiscall mmPlayerRecord::ComputeCRC(void) | ?ComputeCRC@mmPlayerRecord@@QAEIXZ
    0x4C4290 | public: int __thiscall mmPlayerRecord::SaveBinary(class Stream *) | ?SaveBinary@mmPlayerRecord@@QAEHPAVStream@@@Z
    0x4C4310 | public: int __thiscall mmPlayerRecord::LoadBinary(class Stream *) | ?LoadBinary@mmPlayerRecord@@QAEHPAVStream@@@Z
    0x4C4390 | public: static void __cdecl mmPlayerRecord::DeclareFields(void) | ?DeclareFields@mmPlayerRecord@@SAXXZ
    0x4C4560 | public: virtual class MetaClass * __thiscall mmPlayerRecord::GetClass(void) | ?GetClass@mmPlayerRecord@@UAEPAVMetaClass@@XZ
    0x4C4570 | public: __thiscall mmPlayerData::mmPlayerData(void) | ??0mmPlayerData@@QAE@XZ
    0x4C4690 | public: void __thiscall mmPlayerData::operator=(class mmPlayerData &) | ??4mmPlayerData@@QAEXAAV0@@Z
    0x4C47D0 | public: int __thiscall mmPlayerData::RegisterFinish(int,float,char) | ?RegisterFinish@mmPlayerData@@QAEHHMD@Z
    0x4C47E0 | public: int __thiscall mmPlayerData::GetCheckpointProgress(int) | ?GetCheckpointProgress@mmPlayerData@@QAEHH@Z
    0x4C4800 | public: int __thiscall mmPlayerData::GetBlitzMask(void) | ?GetBlitzMask@mmPlayerData@@QAEHXZ
    0x4C4830 | public: int __thiscall mmPlayerData::GetCheckpointMask(void) | ?GetCheckpointMask@mmPlayerData@@QAEHXZ
    0x4C4860 | public: int __thiscall mmPlayerData::GetCircuitMask(void) | ?GetCircuitMask@mmPlayerData@@QAEHXZ
    0x4C4890 | public: int __thiscall mmPlayerData::GetBlitzPassed(void) | ?GetBlitzPassed@mmPlayerData@@QAEHXZ
    0x4C48B0 | public: int __thiscall mmPlayerData::GetCheckpointPassed(void) | ?GetCheckpointPassed@mmPlayerData@@QAEHXZ
    0x4C48D0 | public: int __thiscall mmPlayerData::GetCircuitPassed(void) | ?GetCircuitPassed@mmPlayerData@@QAEHXZ
    0x4C48F0 | public: int __thiscall mmPlayerData::GetTotalPassed(void) | ?GetTotalPassed@mmPlayerData@@QAEHXZ
    0x4C4910 | public: int __thiscall mmPlayerData::GetTotalScore(void) | ?GetTotalScore@mmPlayerData@@QAEHXZ
    0x4C4960 | public: void __thiscall mmPlayerData::ResolveCheckpointProgress(void) | ?ResolveCheckpointProgress@mmPlayerData@@QAEXXZ
    0x4C49F0 | public: int __thiscall mmPlayerData::RegisterFinish(class mmPlayerRecord,int,int) | ?RegisterFinish@mmPlayerData@@QAEHVmmPlayerRecord@@HH@Z
    0x4C4CA0 | public: void __thiscall mmPlayerData::Reset(void) | ?Reset@mmPlayerData@@QAEXXZ
    0x4C4D70 | public: void __thiscall mmPlayerData::SetName(char *) | ?SetName@mmPlayerData@@QAEXPAD@Z
    0x4C4DB0 | public: char * __thiscall mmPlayerData::GetName(void) | ?GetName@mmPlayerData@@QAEPADXZ
    0x4C4DC0 | public: void __thiscall mmPlayerData::SetNetName(char *) | ?SetNetName@mmPlayerData@@QAEXPAD@Z
    0x4C4E00 | public: char * __thiscall mmPlayerData::GetNetName(void) | ?GetNetName@mmPlayerData@@QAEPADXZ
    0x4C4E10 | public: void __thiscall mmPlayerData::SetFileName(char *) | ?SetFileName@mmPlayerData@@QAEXPAD@Z
    0x4C4E50 | public: char * __thiscall mmPlayerData::GetFileName(void) | ?GetFileName@mmPlayerData@@QAEPADXZ
    0x4C4E60 | public: int __thiscall mmPlayerData::Load(char *) | ?Load@mmPlayerData@@QAEHPAD@Z
    0x4C4E90 | public: int __thiscall mmPlayerData::Save(char *,int) | ?Save@mmPlayerData@@QAEHPADH@Z
    0x4C4F30 | public: unsigned int __thiscall mmPlayerData::ComputeCRC(void) | ?ComputeCRC@mmPlayerData@@QAEIXZ
    0x4C4FE0 | public: int __thiscall mmPlayerData::LoadBinary(char *) | ?LoadBinary@mmPlayerData@@QAEHPAD@Z
    0x4C5240 | public: int __thiscall mmPlayerData::SaveBinary(char *) | ?SaveBinary@mmPlayerData@@QAEHPAD@Z
    0x4C5450 | public: static void __cdecl mmPlayerData::DeclareFields(void) | ?DeclareFields@mmPlayerData@@SAXXZ
    0x4C5730 | public: virtual class MetaClass * __thiscall mmPlayerData::GetClass(void) | ?GetClass@mmPlayerData@@UAEPAVMetaClass@@XZ
    0x4C5740 | public: virtual void * __thiscall mmPlayerRecord::`vector deleting destructor'(unsigned int) | ??_EmmPlayerRecord@@UAEPAXI@Z
    0x4C57A0 | public: virtual void * __thiscall mmPlayerData::`vector deleting destructor'(unsigned int) | ??_EmmPlayerData@@UAEPAXI@Z
    0x66A898 | class MetaClass mmPlayerDataMetaClass | ?mmPlayerDataMetaClass@@3VMetaClass@@A
    0x66A8C0 | class MetaClass mmPlayerRecordMetaClass | ?mmPlayerRecordMetaClass@@3VMetaClass@@A
    0x4C4440 | void * __cdecl new_mmPlayerRecord(int) | ?new_mmPlayerRecord@@YAPAXH@Z
    0x4C4510 | void __cdecl delete_mmPlayerRecord(void *,int) | ?delete_mmPlayerRecord@@YAXPAXH@Z
    0x4C5610 | void * __cdecl new_mmPlayerData(int) | ?new_mmPlayerData@@YAPAXH@Z
    0x4C56E0 | void __cdecl delete_mmPlayerData(void *,int) | ?delete_mmPlayerData@@YAXPAXH@Z
*/

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
        // stub<member_func_t<void, mmPlayerRecord, class mmPlayerRecord const&>>(0x410C60, this, arg1);

        unimplemented();
    }

    // 0x4C4180 | ??0mmPlayerRecord@@QAE@XZ
    inline mmPlayerRecord()
    {
        // stub<member_func_t<void, mmPlayerRecord>>(0x4C4180, this);

        unimplemented();
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
    inline ~mmPlayerRecord() override = 0
    {
        // stub<member_func_t<void, mmPlayerRecord>>(0x4C41A0, this);

        unimplemented();
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
        // stub<member_func_t<void, mmPlayerData>>(0x4C4570, this);

        unimplemented();
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
    inline ~mmPlayerData() override = 0
    {
        // stub<member_func_t<void, mmPlayerData>>(0x4C0040, this);

        unimplemented();
    }

    // 0x4C5730 | ?GetClass@mmPlayerData@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmPlayerData>>(0x4C5730, this);
    }
};
