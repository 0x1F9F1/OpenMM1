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
    mmaudio:head

    0x4DCF60 | public: __thiscall AudHead::AudHead(class Matrix34 *) | ??0AudHead@@QAE@PAVMatrix34@@@Z
    0x4DCFB0 | public: virtual __thiscall AudHead::~AudHead(void) | ??1AudHead@@UAE@XZ
    0x4DCFC0 | public: int __thiscall AudHead::Init(void) | ?Init@AudHead@@QAEHXZ
    0x4DD010 | private: virtual void __thiscall AudHead::Update(void) | ?Update@AudHead@@EAEXXZ
    0x4DD190 | public: void __thiscall AudHead::WidgetSetRolloff(void) | ?WidgetSetRolloff@AudHead@@QAEXXZ
    0x4DD1A0 | public: void __thiscall AudHead::SetRolloff(float) | ?SetRolloff@AudHead@@QAEXM@Z
    0x4DD200 | public: void __thiscall AudHead::SetDoppler(float) | ?SetDoppler@AudHead@@QAEXM@Z
    0x4DD260 | public: class Vector3 * __thiscall AudHead::GetPositionPtr(void) | ?GetPositionPtr@AudHead@@QAEPAVVector3@@XZ
    0x4DD270 | public: void __thiscall AudHead::SetHeadPtr(class Matrix34 *) | ?SetHeadPtr@AudHead@@QAEXPAVMatrix34@@@Z
    0x4DD280 | public: class Matrix34 * __thiscall AudHead::GetHeadPtr(void) | ?GetHeadPtr@AudHead@@QAEPAVMatrix34@@XZ
    0x4DD290 | public: virtual void * __thiscall AudHead::`scalar deleting destructor'(unsigned int) | ??_GAudHead@@UAEPAXI@Z
    0x4DD290 | public: virtual void * __thiscall AudHead::`vector deleting destructor'(unsigned int) | ??_EAudHead@@UAEPAXI@Z
    0x594888 | const AudHead::`vftable' | ??_7AudHead@@6B@
*/

struct AudHead : asNode
{
public:
    // AudHead::`vftable' @ 0x594888

    // 0x4DCF60 | ??0AudHead@@QAE@PAVMatrix34@@@Z
    inline AudHead(class Matrix34* arg1)
    {
        // stub<member_func_t<void, AudHead, class Matrix34*>>(0x4DCF60, this, arg1);

        unimplemented();
    }

    // 0x4DCFC0 | ?Init@AudHead@@QAEHXZ
    inline int32_t Init()
    {
        return stub<member_func_t<int32_t, AudHead>>(0x4DCFC0, this);
    }

    // 0x4DD190 | ?WidgetSetRolloff@AudHead@@QAEXXZ
    inline void WidgetSetRolloff()
    {
        return stub<member_func_t<void, AudHead>>(0x4DD190, this);
    }

    // 0x4DD1A0 | ?SetRolloff@AudHead@@QAEXM@Z
    inline void SetRolloff(float arg1)
    {
        return stub<member_func_t<void, AudHead, float>>(0x4DD1A0, this, arg1);
    }

    // 0x4DD200 | ?SetDoppler@AudHead@@QAEXM@Z
    inline void SetDoppler(float arg1)
    {
        return stub<member_func_t<void, AudHead, float>>(0x4DD200, this, arg1);
    }

    // 0x4DD260 | ?GetPositionPtr@AudHead@@QAEPAVVector3@@XZ
    inline class Vector3* GetPositionPtr()
    {
        return stub<member_func_t<class Vector3*, AudHead>>(0x4DD260, this);
    }

    // 0x4DD270 | ?SetHeadPtr@AudHead@@QAEXPAVMatrix34@@@Z
    inline void SetHeadPtr(class Matrix34* arg1)
    {
        return stub<member_func_t<void, AudHead, class Matrix34*>>(0x4DD270, this, arg1);
    }

    // 0x4DD280 | ?GetHeadPtr@AudHead@@QAEPAVMatrix34@@XZ
    inline class Matrix34* GetHeadPtr()
    {
        return stub<member_func_t<class Matrix34*, AudHead>>(0x4DD280, this);
    }

    // 0x4DCFB0 | ??1AudHead@@UAE@XZ
    inline ~AudHead() override = 0
    {
        // stub<member_func_t<void, AudHead>>(0x4DCFB0, this);

        unimplemented();
    }

    // 0x4DD010 | ?Update@AudHead@@EAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, AudHead>>(0x4DD010, this);
    }
};
