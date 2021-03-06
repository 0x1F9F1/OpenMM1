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
    mmwidget:compdrec

    0x4AAD70 | public: __thiscall mmCompDRecord::mmCompDRecord(void) | ??0mmCompDRecord@@QAE@XZ
    0x4AADB0 | public: virtual __thiscall mmCompDRecord::~mmCompDRecord(void) | ??1mmCompDRecord@@UAE@XZ
    0x4AAE60 | public: void __thiscall mmCompDRecord::Init(int,char *,float,char *,int,int,int) | ?Init@mmCompDRecord@@QAEXHPADM0HHH@Z
    0x4AAF40 | public: void __thiscall mmCompDRecord::InitTitle(float,float,float,float,struct LocString *,struct LocString *,struct LocString *,struct LocString *,struct LocString *,int) | ?InitTitle@mmCompDRecord@@QAEXMMMMPAULocString@@0000H@Z
    0x4AAFB0 | public: void __thiscall mmCompDRecord::LoadBitmap(char *) | ?LoadBitmap@mmCompDRecord@@QAEXPAD@Z
    0x4AB020 | public: virtual void __thiscall mmCompDRecord::Reset(void) | ?Reset@mmCompDRecord@@UAEXXZ
    0x4AB030 | public: virtual void __thiscall mmCompDRecord::Update(void) | ?Update@mmCompDRecord@@UAEXXZ
    0x4AB060 | public: void __thiscall mmCompDRecord::SetSubwidgetGeometry(void) | ?SetSubwidgetGeometry@mmCompDRecord@@QAEXXZ
    0x4AB180 | public: virtual void __thiscall mmCompDRecord::SetPosition(class mmTextNode *,int,float) | ?SetPosition@mmCompDRecord@@UAEXPAVmmTextNode@@HM@Z
    0x4AB220 | public: virtual void __thiscall mmCompDRecord::SetGeometry(float,float,float,float) | ?SetGeometry@mmCompDRecord@@UAEXMMMM@Z
    0x4AB250 | public: virtual void __thiscall mmCompDRecord::SetBltXY(float,float) | ?SetBltXY@mmCompDRecord@@UAEXMM@Z
    0x4AB2A0 | public: virtual void __thiscall mmCompDRecord::Cull(void) | ?Cull@mmCompDRecord@@UAEXXZ
    0x4AB340 | public: virtual void * __thiscall mmCompDRecord::`scalar deleting destructor'(unsigned int) | ??_GmmCompDRecord@@UAEPAXI@Z
    0x4AB340 | public: virtual void * __thiscall mmCompDRecord::`vector deleting destructor'(unsigned int) | ??_EmmCompDRecord@@UAEPAXI@Z
    0x4AB370 | public: virtual void __thiscall mmCompDRecord::DisableBlt(void) | ?DisableBlt@mmCompDRecord@@UAEXXZ
    0x593590 | const mmCompDRecord::`vftable' | ??_7mmCompDRecord@@6B@
*/

struct mmCompDRecord : mmCompBase
{
public:
    // mmCompDRecord::`vftable' @ 0x593590

    // 0x4AAD70 | ??0mmCompDRecord@@QAE@XZ
    inline mmCompDRecord()
    {
        // stub<member_func_t<void, mmCompDRecord>>(0x4AAD70, this);

        unimplemented();
    }

    // 0x4AAE60 | ?Init@mmCompDRecord@@QAEXHPADM0HHH@Z
    inline void Init(int32_t arg1, char* arg2, float arg3, char* arg4, int32_t arg5, int32_t arg6, int32_t arg7)
    {
        return stub<member_func_t<void, mmCompDRecord, int32_t, char*, float, char*, int32_t, int32_t, int32_t>>(
            0x4AAE60, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4AAF40 | ?InitTitle@mmCompDRecord@@QAEXMMMMPAULocString@@0000H@Z
    inline void InitTitle(float arg1, float arg2, float arg3, float arg4, struct LocString* arg5,
        struct LocString* arg6, struct LocString* arg7, struct LocString* arg8, struct LocString* arg9, int32_t arg10)
    {
        return stub<member_func_t<void, mmCompDRecord, float, float, float, float, struct LocString*, struct LocString*,
            struct LocString*, struct LocString*, struct LocString*, int32_t>>(
            0x4AAF40, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4AAFB0 | ?LoadBitmap@mmCompDRecord@@QAEXPAD@Z
    inline void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, mmCompDRecord, char*>>(0x4AAFB0, this, arg1);
    }

    // 0x4AB060 | ?SetSubwidgetGeometry@mmCompDRecord@@QAEXXZ
    inline void SetSubwidgetGeometry()
    {
        return stub<member_func_t<void, mmCompDRecord>>(0x4AB060, this);
    }

    // 0x4AADB0 | ??1mmCompDRecord@@UAE@XZ
    inline ~mmCompDRecord() override = 0
    {
        // stub<member_func_t<void, mmCompDRecord>>(0x4AADB0, this);

        unimplemented();
    }

    // 0x4AB2A0 | ?Cull@mmCompDRecord@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmCompDRecord>>(0x4AB2A0, this);
    }

    // 0x4AB030 | ?Update@mmCompDRecord@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCompDRecord>>(0x4AB030, this);
    }

    // 0x4AB020 | ?Reset@mmCompDRecord@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCompDRecord>>(0x4AB020, this);
    }

    // 0x4AB370 | ?DisableBlt@mmCompDRecord@@UAEXXZ
    inline void DisableBlt() override
    {
        return stub<member_func_t<void, mmCompDRecord>>(0x4AB370, this);
    }

    // 0x4AB250 | ?SetBltXY@mmCompDRecord@@UAEXMM@Z
    inline void SetBltXY(float arg1, float arg2) override
    {
        return stub<member_func_t<void, mmCompDRecord, float, float>>(0x4AB250, this, arg1, arg2);
    }

    // 0x4AB220 | ?SetGeometry@mmCompDRecord@@UAEXMMMM@Z
    inline void SetGeometry(float arg1, float arg2, float arg3, float arg4) override
    {
        return stub<member_func_t<void, mmCompDRecord, float, float, float, float>>(
            0x4AB220, this, arg1, arg2, arg3, arg4);
    }

    // 0x4AB180 | ?SetPosition@mmCompDRecord@@UAEXPAVmmTextNode@@HM@Z
    inline void SetPosition(class mmTextNode* arg1, int32_t arg2, float arg3) override
    {
        return stub<member_func_t<void, mmCompDRecord, class mmTextNode*, int32_t, float>>(
            0x4AB180, this, arg1, arg2, arg3);
    }
};
