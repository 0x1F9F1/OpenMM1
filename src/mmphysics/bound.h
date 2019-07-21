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
    mmphysics:bound

    0x4D2210 | public: __thiscall asBound::asBound(void) | ??0asBound@@QAE@XZ
    0x4D2250 | public: int __thiscall asBound::Impact(class mmIntersection *,class asBound *,int,int,int) | ?Impact@asBound@@QAEHPAVmmIntersection@@PAV1@HHH@Z
    0x4D2BE0 | public: class agiPhysParameters & __thiscall asBound::GetPhysMtl(class mmPolygon const &) | ?GetPhysMtl@asBound@@QAEAAVagiPhysParameters@@ABVmmPolygon@@@Z
    0x4D2CD0 | public: virtual void * __thiscall asBound::`vector deleting destructor'(unsigned int) | ??_EasBound@@UAEPAXI@Z
    0x4D2CD0 | public: virtual void * __thiscall asBound::`scalar deleting destructor'(unsigned int) | ??_GasBound@@UAEPAXI@Z
    0x5946D0 | const asBound::`vftable' | ??_7asBound@@6B@
*/

class asBound : asNode
{
public:
    // asBound::`vftable' @ 0x5946D0

    // 0x4D2210 | ??0asBound@@QAE@XZ
    inline asBound()
    {
        // stub<member_func_t<void, asBound>>(0x4D2210, this);

        unimplemented();
    }

    // 0x4D2250 | ?Impact@asBound@@QAEHPAVmmIntersection@@PAV1@HHH@Z
    inline int32_t Impact(class mmIntersection* arg1, class asBound* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<int32_t, asBound, class mmIntersection*, class asBound*, int32_t, int32_t, int32_t>>(
            0x4D2250, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4D2BE0 | ?GetPhysMtl@asBound@@QAEAAVagiPhysParameters@@ABVmmPolygon@@@Z
    inline class agiPhysParameters& GetPhysMtl(class mmPolygon const& arg1)
    {
        return stub<member_func_t<class agiPhysParameters&, asBound, class mmPolygon const&>>(0x4D2BE0, this, arg1);
    }

    // 0x44D480 | ??1asBound@@UAE@XZ
    inline ~asBound() override = 0
    {
        // stub<member_func_t<void, asBound>>(0x44D480, this);

        unimplemented();
    }
};
