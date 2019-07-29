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

#include "vector3.h"

#include "data7/metatype.h"
#include "data7/miniparser.h"

class Vector3 Vector3::operator%(class Vector3 const& other) noexcept
{
    return {(y * other.z) - (z * other.y), (z * other.x) - (x * other.z), (x * other.y) - (y * other.x)};
}

struct Vector3Type : MetaType
{
public:
    // Vector3Type::`vftable' @ 0x5960C8

    // 0x548DB0 | ?Save@Vector3Type@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        Vector3 val = *static_cast<Vector3*>(ptr);

        parser->Printf("%.4g %.4g %.4g", val.x, val.y, val.z);
    }

    // 0x548DF0 | ?Load@Vector3Type@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        Vector3& val = *static_cast<Vector3*>(ptr);

        val.x = parser->FloatVal();
        val.y = parser->FloatVal();
        val.z = parser->FloatVal();
    }

    // 0x548E20 | ?SizeOf@Vector3Type@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(Vector3);
    }

    // 0x548E30 | ?New@Vector3Type@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        return ptrCreator<Vector3>(count);
    }

    // 0x548E80 | ?Delete@Vector3Type@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        ptrDestructor<Vector3>(ptr, count);
    }
};

Vector3Type Vector3Inst;