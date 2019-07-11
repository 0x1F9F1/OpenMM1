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
    mmai:aiIntersection

    0x441720 | public: __thiscall aiIntersection::aiIntersection(int) | ??0aiIntersection@@QAE@H@Z
    0x441740 | public: __thiscall aiIntersection::~aiIntersection(void) | ??1aiIntersection@@QAE@XZ
    0x4417B0 | public: void __thiscall aiIntersection::Init(void) | ?Init@aiIntersection@@QAEXXZ
    0x441960 | public: void __thiscall aiIntersection::Reset(void) | ?Reset@aiIntersection@@QAEXXZ
    0x441970 | public: void __thiscall aiIntersection::AddSinkPath(class aiPath *) | ?AddSinkPath@aiIntersection@@QAEXPAVaiPath@@@Z
    0x4419E0 | public: void __thiscall aiIntersection::AddSourcePath(class aiPath *) | ?AddSourcePath@aiIntersection@@QAEXPAVaiPath@@@Z
    0x441A50 | public: void __thiscall aiIntersection::SaveBinary(class Stream *) | ?SaveBinary@aiIntersection@@QAEXPAVStream@@@Z
    0x441B20 | public: void __thiscall aiIntersection::ReadBinary(class Stream *) | ?ReadBinary@aiIntersection@@QAEXPAVStream@@@Z
    0x441CC0 | public: void __thiscall aiIntersection::Dump(void) | ?Dump@aiIntersection@@QAEXXZ
    0x441CF0 | public: void __thiscall aiIntersection::CreateRoadMap(void) | ?CreateRoadMap@aiIntersection@@QAEXXZ
    0x442020 | public: class aiPath * __thiscall aiIntersection::Path(int) | ?Path@aiIntersection@@QAEPAVaiPath@@H@Z
*/

#include "hooking.h"

class aiIntersection
{
public:
    // 0x441720 | ??0aiIntersection@@QAE@H@Z
    inline aiIntersection(int32_t arg1)
    {
        stub<member_func_t<void, aiIntersection, int32_t>>(0x441720, this, arg1);
    }

    // 0x441740 | ??1aiIntersection@@QAE@XZ
    inline ~aiIntersection()
    {
        stub<member_func_t<void, aiIntersection>>(0x441740, this);
    }

    // 0x4417B0 | ?Init@aiIntersection@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, aiIntersection>>(0x4417B0, this);
    }

    // 0x441960 | ?Reset@aiIntersection@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, aiIntersection>>(0x441960, this);
    }

    // 0x441970 | ?AddSinkPath@aiIntersection@@QAEXPAVaiPath@@@Z
    inline void AddSinkPath(class aiPath* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class aiPath*>>(0x441970, this, arg1);
    }

    // 0x4419E0 | ?AddSourcePath@aiIntersection@@QAEXPAVaiPath@@@Z
    inline void AddSourcePath(class aiPath* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class aiPath*>>(0x4419E0, this, arg1);
    }

    // 0x441A50 | ?SaveBinary@aiIntersection@@QAEXPAVStream@@@Z
    inline void SaveBinary(class Stream* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class Stream*>>(0x441A50, this, arg1);
    }

    // 0x441B20 | ?ReadBinary@aiIntersection@@QAEXPAVStream@@@Z
    inline void ReadBinary(class Stream* arg1)
    {
        return stub<member_func_t<void, aiIntersection, class Stream*>>(0x441B20, this, arg1);
    }

    // 0x441CC0 | ?Dump@aiIntersection@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiIntersection>>(0x441CC0, this);
    }

    // 0x441CF0 | ?CreateRoadMap@aiIntersection@@QAEXXZ
    inline void CreateRoadMap()
    {
        return stub<member_func_t<void, aiIntersection>>(0x441CF0, this);
    }

    // 0x442020 | ?Path@aiIntersection@@QAEPAVaiPath@@H@Z
    inline class aiPath* Path(int32_t arg1)
    {
        return stub<member_func_t<class aiPath*, aiIntersection, int32_t>>(0x442020, this, arg1);
    }
};
