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
    mmnetwork:netobject

    0x482450 | public: __thiscall asNetObject::asNetObject(void) | ??0asNetObject@@QAE@XZ
    0x482470 | public: virtual __thiscall asNetObject::~asNetObject(void) | ??1asNetObject@@UAE@XZ
    0x482480 | public: virtual void __thiscall asNetObject::PositionUpdate(class Matrix34 *,class Vector3,float,float,float) | ?PositionUpdate@asNetObject@@UAEXPAVMatrix34@@VVector3@@MMM@Z
    0x4824A0 | public: virtual void __thiscall asNetObject::Update(void) | ?Update@asNetObject@@UAEXXZ
    0x4824B0 | public: virtual void * __thiscall asNetObject::`vector deleting destructor'(unsigned int) | ??_EasNetObject@@UAEPAXI@Z
    0x4824B0 | public: virtual void * __thiscall asNetObject::`scalar deleting destructor'(unsigned int) | ??_GasNetObject@@UAEPAXI@Z
    0x591AB0 | const asNetObject::`vftable' | ??_7asNetObject@@6B@
*/

#include "hooking.h"

struct asNetObject : asNode
{
public:
    // asNetObject::`vftable' @ 0x591AB0

    // 0x482450 | ??0asNetObject@@QAE@XZ
    inline asNetObject()
    {
        stub<member_func_t<void, asNetObject>>(0x482450, this);
    }

    // 0x482470 | ??1asNetObject@@UAE@XZ
    inline ~asNetObject() override
    {
        stub<member_func_t<void, asNetObject>>(0x482470, this);
    }

    // 0x4824A0 | ?Update@asNetObject@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asNetObject>>(0x4824A0, this);
    }

    // 0x567350 | __purecall
    virtual inline void SetLocalData() = 0;

    // 0x482480 | ?PositionUpdate@asNetObject@@UAEXPAVMatrix34@@VVector3@@MMM@Z
    virtual inline void PositionUpdate(class Matrix34* arg1, class Vector3 arg2, float arg3, float arg4, float arg5)
    {
        return stub<member_func_t<void, asNetObject, class Matrix34*, class Vector3, float, float, float>>(
            0x482480, this, arg1, arg2, arg3, arg4, arg5);
    }
};
