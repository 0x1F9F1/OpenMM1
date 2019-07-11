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
    agi:refresh

    0x53A0A0 | public: __thiscall agiRefreshable::agiRefreshable(class agiPipeline *) | ??0agiRefreshable@@QAE@PAVagiPipeline@@@Z
    0x53A0E0 | protected: virtual __thiscall agiRefreshable::~agiRefreshable(void) | ??1agiRefreshable@@MAE@XZ
    0x53A120 | public: int __thiscall agiRefreshable::SafeBeginGfx(void) | ?SafeBeginGfx@agiRefreshable@@QAEHXZ
    0x53A150 | public: virtual void __thiscall agiRefreshable::Restore(void) | ?Restore@agiRefreshable@@UAEXXZ
    0x53A160 | public: void __thiscall agiRefreshable::AddRef(void) | ?AddRef@agiRefreshable@@QAEXXZ
    0x53A180 | public: int __thiscall agiRefreshable::Release(void) | ?Release@agiRefreshable@@QAEHXZ
    0x53A1B0 | private: void __thiscall agiRefreshable::ValidatePtr(char *) | ?ValidatePtr@agiRefreshable@@AAEXPAD@Z
    0x53A210 | public: virtual char * __thiscall agiRefreshable::GetName(void) | ?GetName@agiRefreshable@@UAEPADXZ
    0x53A220 | protected: virtual int __thiscall agiRefreshable::IsTexture(void) | ?IsTexture@agiRefreshable@@MAEHXZ
    0x53A230 | protected: virtual void * __thiscall agiRefreshable::`vector deleting destructor'(unsigned int) | ??_EagiRefreshable@@MAEPAXI@Z
    0x53A230 | protected: virtual void * __thiscall agiRefreshable::`scalar deleting destructor'(unsigned int) | ??_GagiRefreshable@@MAEPAXI@Z
    0x595BE8 | const agiRefreshable::`vftable' | ??_7agiRefreshable@@6B@
*/

#include "hooking.h"

class agiRefreshable
{
public:
    // agiRefreshable::`vftable' @ 0x595BE8

    // 0x53A0A0 | ??0agiRefreshable@@QAE@PAVagiPipeline@@@Z
    inline agiRefreshable(class agiPipeline* arg1)
    {
        stub<member_func_t<void, agiRefreshable, class agiPipeline*>>(0x53A0A0, this, arg1);
    }

    // 0x53A120 | ?SafeBeginGfx@agiRefreshable@@QAEHXZ
    inline int32_t SafeBeginGfx()
    {
        return stub<member_func_t<int32_t, agiRefreshable>>(0x53A120, this);
    }

    // 0x53A160 | ?AddRef@agiRefreshable@@QAEXXZ
    inline void AddRef()
    {
        return stub<member_func_t<void, agiRefreshable>>(0x53A160, this);
    }

    // 0x53A180 | ?Release@agiRefreshable@@QAEHXZ
    inline int32_t Release()
    {
        return stub<member_func_t<int32_t, agiRefreshable>>(0x53A180, this);
    }

    // 0x53A1B0 | ?ValidatePtr@agiRefreshable@@AAEXPAD@Z
    inline void ValidatePtr(char* arg1)
    {
        return stub<member_func_t<void, agiRefreshable, char*>>(0x53A1B0, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline void EndGfx()
    {
        return stub<member_func_t<void, agiRefreshable>>(0x567350, this);
    }

    // 0x53A150 | ?Restore@agiRefreshable@@UAEXXZ
    virtual inline void Restore()
    {
        return stub<member_func_t<void, agiRefreshable>>(0x53A150, this);
    }

    // 0x53A210 | ?GetName@agiRefreshable@@UAEPADXZ
    virtual inline char* GetName()
    {
        return stub<member_func_t<char*, agiRefreshable>>(0x53A210, this);
    }

    // 0x53A0E0 | ??1agiRefreshable@@MAE@XZ
    virtual inline ~agiRefreshable()
    {
        stub<member_func_t<void, agiRefreshable>>(0x53A0E0, this);
    }

    // 0x567350 | __purecall
    virtual inline int32_t BeginGfx()
    {
        return stub<member_func_t<int32_t, agiRefreshable>>(0x567350, this);
    }

    // 0x53A220 | ?IsTexture@agiRefreshable@@MAEHXZ
    virtual inline int32_t IsTexture()
    {
        return stub<member_func_t<int32_t, agiRefreshable>>(0x53A220, this);
    }
};
