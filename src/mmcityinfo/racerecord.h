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
    mmcityinfo:racerecord

    0x4C5B90 | public: __thiscall mmRecord::mmRecord(void) | ??0mmRecord@@QAE@XZ
    0x4C5BD0 | public: virtual __thiscall mmRecord::~mmRecord(void) | ??1mmRecord@@UAE@XZ
    0x4C5BE0 | public: float __thiscall mmRecord::GetTime(void) | ?GetTime@mmRecord@@QAEMXZ
    0x4C5BF0 | public: char * __thiscall mmRecord::GetCarName(void) | ?GetCarName@mmRecord@@QAEPADXZ
    0x4C5C00 | public: char * __thiscall mmRecord::GetName(void) | ?GetName@mmRecord@@QAEPADXZ
    0x4C5C10 | public: int __thiscall mmRecord::GetPassed(void) | ?GetPassed@mmRecord@@QAEHXZ
    0x4C5C20 | public: int __thiscall mmRecord::GetScore(void) | ?GetScore@mmRecord@@QAEHXZ
    0x4C5C30 | public: void __thiscall mmRecord::SetTime(float) | ?SetTime@mmRecord@@QAEXM@Z
    0x4C5C40 | public: void __thiscall mmRecord::SetCarName(char *) | ?SetCarName@mmRecord@@QAEXPAD@Z
    0x4C5C60 | public: void __thiscall mmRecord::SetName(char *) | ?SetName@mmRecord@@QAEXPAD@Z
    0x4C5CA0 | public: void __thiscall mmRecord::SetPassed(int) | ?SetPassed@mmRecord@@QAEXH@Z
    0x4C5CC0 | public: void __thiscall mmRecord::SetScore(int) | ?SetScore@mmRecord@@QAEXH@Z
    0x4C5CD0 | public: void __thiscall mmRecord::operator=(class mmRecord &) | ??4mmRecord@@QAEXAAV0@@Z
    0x4C5D60 | public: int __thiscall mmRecord::SaveBinary(class Stream *) | ?SaveBinary@mmRecord@@QAEHPAVStream@@@Z
    0x4C5DE0 | public: int __thiscall mmRecord::LoadBinary(class Stream *) | ?LoadBinary@mmRecord@@QAEHPAVStream@@@Z
    0x4C5E60 | public: unsigned int __thiscall mmRecord::ComputeCRC(void) | ?ComputeCRC@mmRecord@@QAEIXZ
    0x4C5EC0 | public: static void __cdecl mmRecord::DeclareFields(void) | ?DeclareFields@mmRecord@@SAXXZ
    0x4C60A0 | public: virtual class MetaClass * __thiscall mmRecord::GetClass(void) | ?GetClass@mmRecord@@UAEPAVMetaClass@@XZ
    0x4C60B0 | public: virtual void * __thiscall mmRecord::`vector deleting destructor'(unsigned int) | ??_EmmRecord@@UAEPAXI@Z
    0x66A918 | class MetaClass mmRecordMetaClass | ?mmRecordMetaClass@@3VMetaClass@@A
    0x4C5F80 | void * __cdecl new_mmRecord(int) | ?new_mmRecord@@YAPAXH@Z
    0x4C6050 | void __cdecl delete_mmRecord(void *,int) | ?delete_mmRecord@@YAXPAXH@Z
*/

// 0x66A918 | ?mmRecordMetaClass@@3VMetaClass@@A
inline extern_var(0x66A918, class MetaClass, mmRecordMetaClass);

// 0x4C5F80 | ?new_mmRecord@@YAPAXH@Z
inline void* new_mmRecord(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4C5F80, arg1);
}

// 0x4C6050 | ?delete_mmRecord@@YAXPAXH@Z
inline void delete_mmRecord(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4C6050, arg1, arg2);
}

class mmRecord : mmInfoBase
{
public:
    // mmRecord::`vftable' @ 0x594428

    // 0x4C5B90 | ??0mmRecord@@QAE@XZ
    inline mmRecord()
    {
        // stub<member_func_t<void, mmRecord>>(0x4C5B90, this);

        unimplemented();
    }

    // 0x4C5BE0 | ?GetTime@mmRecord@@QAEMXZ
    inline float GetTime()
    {
        return stub<member_func_t<float, mmRecord>>(0x4C5BE0, this);
    }

    // 0x4C5BF0 | ?GetCarName@mmRecord@@QAEPADXZ
    inline char* GetCarName()
    {
        return stub<member_func_t<char*, mmRecord>>(0x4C5BF0, this);
    }

    // 0x4C5C00 | ?GetName@mmRecord@@QAEPADXZ
    inline char* GetName()
    {
        return stub<member_func_t<char*, mmRecord>>(0x4C5C00, this);
    }

    // 0x4C5C10 | ?GetPassed@mmRecord@@QAEHXZ
    inline int32_t GetPassed()
    {
        return stub<member_func_t<int32_t, mmRecord>>(0x4C5C10, this);
    }

    // 0x4C5C20 | ?GetScore@mmRecord@@QAEHXZ
    inline int32_t GetScore()
    {
        return stub<member_func_t<int32_t, mmRecord>>(0x4C5C20, this);
    }

    // 0x4C5C30 | ?SetTime@mmRecord@@QAEXM@Z
    inline void SetTime(float arg1)
    {
        return stub<member_func_t<void, mmRecord, float>>(0x4C5C30, this, arg1);
    }

    // 0x4C5C40 | ?SetCarName@mmRecord@@QAEXPAD@Z
    inline void SetCarName(char* arg1)
    {
        return stub<member_func_t<void, mmRecord, char*>>(0x4C5C40, this, arg1);
    }

    // 0x4C5C60 | ?SetName@mmRecord@@QAEXPAD@Z
    inline void SetName(char* arg1)
    {
        return stub<member_func_t<void, mmRecord, char*>>(0x4C5C60, this, arg1);
    }

    // 0x4C5CA0 | ?SetPassed@mmRecord@@QAEXH@Z
    inline void SetPassed(int32_t arg1)
    {
        return stub<member_func_t<void, mmRecord, int32_t>>(0x4C5CA0, this, arg1);
    }

    // 0x4C5CC0 | ?SetScore@mmRecord@@QAEXH@Z
    inline void SetScore(int32_t arg1)
    {
        return stub<member_func_t<void, mmRecord, int32_t>>(0x4C5CC0, this, arg1);
    }

    // 0x4C5CD0 | ??4mmRecord@@QAEXAAV0@@Z
    inline void operator=(class mmRecord& arg1)
    {
        return stub<member_func_t<void, mmRecord, class mmRecord&>>(0x4C5CD0, this, arg1);
    }

    // 0x4C5D60 | ?SaveBinary@mmRecord@@QAEHPAVStream@@@Z
    inline int32_t SaveBinary(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmRecord, class Stream*>>(0x4C5D60, this, arg1);
    }

    // 0x4C5DE0 | ?LoadBinary@mmRecord@@QAEHPAVStream@@@Z
    inline int32_t LoadBinary(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, mmRecord, class Stream*>>(0x4C5DE0, this, arg1);
    }

    // 0x4C5E60 | ?ComputeCRC@mmRecord@@QAEIXZ
    inline uint32_t ComputeCRC()
    {
        return stub<member_func_t<uint32_t, mmRecord>>(0x4C5E60, this);
    }

    // 0x4C5EC0 | ?DeclareFields@mmRecord@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4C5EC0);
    }

    // 0x4C5BD0 | ??1mmRecord@@UAE@XZ
    inline ~mmRecord() override = 0
    {
        // stub<member_func_t<void, mmRecord>>(0x4C5BD0, this);

        unimplemented();
    }

    // 0x4C60A0 | ?GetClass@mmRecord@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmRecord>>(0x4C60A0, this);
    }
};
