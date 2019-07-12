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
    mmanim:mmbridgeaudmgr

    0x4B87A0 | public: __thiscall mmBridgeAudMgr::mmBridgeAudMgr(void) | ??0mmBridgeAudMgr@@QAE@XZ
    0x4B8950 | public: virtual __thiscall mmBridgeAudMgr::~mmBridgeAudMgr(void) | ??1mmBridgeAudMgr@@UAE@XZ
    0x4B8A10 | public: short __thiscall mmBridgeAudMgr::Add(class mmBridgeSet *) | ?Add@mmBridgeAudMgr@@QAEFPAVmmBridgeSet@@@Z
    0x4B8AA0 | public: void __thiscall mmBridgeAudMgr::Remove(class mmBridgeSet *,short) | ?Remove@mmBridgeAudMgr@@QAEXPAVmmBridgeSet@@F@Z
    0x4B8B00 | public: short __thiscall mmBridgeAudMgr::FindGreatestDistance(class mmBridgeSet *) | ?FindGreatestDistance@mmBridgeAudMgr@@QAEFPAVmmBridgeSet@@@Z
    0x4B8BA0 | public: short __thiscall mmBridgeAudMgr::FindUnusedSlot(void) | ?FindUnusedSlot@mmBridgeAudMgr@@QAEFXZ
    0x4B8BE0 | public: virtual void __thiscall mmBridgeAudMgr::Update(void) | ?Update@mmBridgeAudMgr@@UAEXXZ
    0x4B8C10 | public: void __thiscall mmBridgeAudMgr::AssignSounds(short) | ?AssignSounds@mmBridgeAudMgr@@QAEXF@Z
    0x4B8C40 | public: virtual void * __thiscall mmBridgeAudMgr::`scalar deleting destructor'(unsigned int) | ??_GmmBridgeAudMgr@@UAEPAXI@Z
    0x4B8C40 | public: virtual void * __thiscall mmBridgeAudMgr::`vector deleting destructor'(unsigned int) | ??_EmmBridgeAudMgr@@UAEPAXI@Z
    0x593FF0 | const mmBridgeAudMgr::`vftable' | ??_7mmBridgeAudMgr@@6B@
    0x668144 | class mmBridgeAudMgr * MMBRIDGEAUDMGRPTR | ?MMBRIDGEAUDMGRPTR@@3PAVmmBridgeAudMgr@@A
*/

#include "hooking.h"

// 0x668144 | ?MMBRIDGEAUDMGRPTR@@3PAVmmBridgeAudMgr@@A
inline extern_var(0x668144, class mmBridgeAudMgr*, MMBRIDGEAUDMGRPTR);

class mmBridgeAudMgr : asNode
{
public:
    // mmBridgeAudMgr::`vftable' @ 0x593FF0

    // 0x4B87A0 | ??0mmBridgeAudMgr@@QAE@XZ
    inline mmBridgeAudMgr()
    {
        // stub<member_func_t<void, mmBridgeAudMgr>>(0x4B87A0, this);

        unimplemented();
    }

    // 0x4B8A10 | ?Add@mmBridgeAudMgr@@QAEFPAVmmBridgeSet@@@Z
    inline int16_t Add(class mmBridgeSet* arg1)
    {
        return stub<member_func_t<int16_t, mmBridgeAudMgr, class mmBridgeSet*>>(0x4B8A10, this, arg1);
    }

    // 0x4B8AA0 | ?Remove@mmBridgeAudMgr@@QAEXPAVmmBridgeSet@@F@Z
    inline void Remove(class mmBridgeSet* arg1, int16_t arg2)
    {
        return stub<member_func_t<void, mmBridgeAudMgr, class mmBridgeSet*, int16_t>>(0x4B8AA0, this, arg1, arg2);
    }

    // 0x4B8B00 | ?FindGreatestDistance@mmBridgeAudMgr@@QAEFPAVmmBridgeSet@@@Z
    inline int16_t FindGreatestDistance(class mmBridgeSet* arg1)
    {
        return stub<member_func_t<int16_t, mmBridgeAudMgr, class mmBridgeSet*>>(0x4B8B00, this, arg1);
    }

    // 0x4B8BA0 | ?FindUnusedSlot@mmBridgeAudMgr@@QAEFXZ
    inline int16_t FindUnusedSlot()
    {
        return stub<member_func_t<int16_t, mmBridgeAudMgr>>(0x4B8BA0, this);
    }

    // 0x4B8C10 | ?AssignSounds@mmBridgeAudMgr@@QAEXF@Z
    inline void AssignSounds(int16_t arg1)
    {
        return stub<member_func_t<void, mmBridgeAudMgr, int16_t>>(0x4B8C10, this, arg1);
    }

    // 0x4B8950 | ??1mmBridgeAudMgr@@UAE@XZ
    inline ~mmBridgeAudMgr() override = 0
    {
        // stub<member_func_t<void, mmBridgeAudMgr>>(0x4B8950, this);

        unimplemented();
    }

    // 0x4B8BE0 | ?Update@mmBridgeAudMgr@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmBridgeAudMgr>>(0x4B8BE0, this);
    }
};
