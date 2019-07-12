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
    mmui:optionsbase

    0x4A00B0 | public: __thiscall OptionsBase::OptionsBase(int) | ??0OptionsBase@@QAE@H@Z
    0x4A0210 | public: void __thiscall OptionsBase::CreateTitle(struct LocString *) | ?CreateTitle@OptionsBase@@QAEXPAULocString@@@Z
    0x4A0240 | public: virtual __thiscall OptionsBase::~OptionsBase(void) | ??1OptionsBase@@UAE@XZ
    0x4A0290 | public: virtual void * __thiscall OptionsBase::`vector deleting destructor'(unsigned int) | ??_EOptionsBase@@UAEPAXI@Z
    0x4A0290 | public: virtual void * __thiscall OptionsBase::`scalar deleting destructor'(unsigned int) | ??_GOptionsBase@@UAEPAXI@Z
    0x4A02C0 | [thunk]: __thiscall `vcall'{68,{flat}}' }' | ??_9@$BEE@AE
    0x4A02D0 | [thunk]: __thiscall `vcall'{72,{flat}}' }' | ??_9@$BEI@AE
    0x4A02E0 | public: virtual void __thiscall OptionsBase::ResetDefaultAction(void) | ?ResetDefaultAction@OptionsBase@@UAEXXZ
    0x592F88 | const OptionsBase::`vftable' | ??_7OptionsBase@@6B@
*/

#include "hooking.h"

// 0x4A02C0 | ??_9@$BEE@AE

// 0x4A02D0 | ??_9@$BEI@AE

struct OptionsBase : UIMenu
{
public:
    // OptionsBase::`vftable' @ 0x592F88

    // 0x4A00B0 | ??0OptionsBase@@QAE@H@Z
    inline OptionsBase(int32_t arg1)
    {
        // stub<member_func_t<void, OptionsBase, int32_t>>(0x4A00B0, this, arg1);

        unimplemented();
    }

    // 0x4A0210 | ?CreateTitle@OptionsBase@@QAEXPAULocString@@@Z
    inline void CreateTitle(struct LocString* arg1)
    {
        return stub<member_func_t<void, OptionsBase, struct LocString*>>(0x4A0210, this, arg1);
    }

    // 0x4A0240 | ??1OptionsBase@@UAE@XZ
    inline ~OptionsBase() override = 0
    {
        // stub<member_func_t<void, OptionsBase>>(0x4A0240, this);

        unimplemented();
    }

    // 0x48F100 | ?IsAnOptionMenu@OptionsBase@@UAEHXZ
    inline int32_t IsAnOptionMenu() override
    {
        return stub<member_func_t<int32_t, OptionsBase>>(0x48F100, this);
    }

    // 0x567350 | __purecall
    virtual inline void CancelAction() = 0;

    // 0x567350 | __purecall
    virtual inline void DoneAction() = 0;

    // 0x4A02E0 | ?ResetDefaultAction@OptionsBase@@UAEXXZ
    virtual inline void ResetDefaultAction()
    {
        return stub<member_func_t<void, OptionsBase>>(0x4A02E0, this);
    }

    // 0x48F0F0 | ?StoreCurrentSetup@OptionsBase@@UAEXXZ
    virtual inline void StoreCurrentSetup()
    {
        return stub<member_func_t<void, OptionsBase>>(0x48F0F0, this);
    }
};
