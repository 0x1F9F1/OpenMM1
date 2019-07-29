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

#include "vector2.h"

#include "data7/metatype.h"
#include "data7/miniparser.h"

struct Vector2Type : MetaType
{
public:
    // Vector2Type::`vftable' @ 0x596218

    // 0x553FB0 | ?Save@Vector2Type@@UAEXPAVMiniParser@@PAX@Z
    void Save(class MiniParser* parser, void* ptr) override
    {
        Vector2 val = *static_cast<Vector2*>(ptr);

        parser->Printf("%.4g %.4g", val.x, val.y);
    }

    // 0x553FE0 | ?Load@Vector2Type@@UAEXPAVMiniParser@@PAX@Z
    void Load(class MiniParser* parser, void* ptr) override
    {
        Vector2& val = *static_cast<Vector2*>(ptr);

        val.x = parser->FloatVal();
        val.y = parser->FloatVal();
    }

    // 0x554010 | ?SizeOf@Vector2Type@@UAEIXZ
    uint32_t SizeOf() override
    {
        return sizeof(Vector2);
    }

    // 0x554020 | ?New@Vector2Type@@UAEPAXH@Z
    void* New(int32_t count) override
    {
        return ptrCreator<Vector2>(count);
    }

    // 0x554070 | ?Delete@Vector2Type@@UAEXPAXH@Z
    void Delete(void* ptr, int32_t count) override
    {
        ptrDestructor<Vector2>(ptr, count);
    }
};

Vector2Type Vector2Inst;
