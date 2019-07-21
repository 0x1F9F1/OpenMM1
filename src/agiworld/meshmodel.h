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
    agiworld:meshmodel

    0x502D50 | public: int __thiscall agiMeshModel::ModelGeometry(unsigned int,class bnAnimation *,int) | ?ModelGeometry@agiMeshModel@@QAEHIPAVbnAnimation@@H@Z
    0x502E50 | public: int __thiscall agiMeshModel::ModelDraw(unsigned int,class agiLitAnimation *,int) | ?ModelDraw@agiMeshModel@@QAEHIPAVagiLitAnimation@@H@Z
    0x502E70 | public: int __thiscall agiMeshModel::ModelDraw(unsigned int,class bnAnimation *,int) | ?ModelDraw@agiMeshModel@@QAEHIPAVbnAnimation@@H@Z
    0x502ED0 | public: int __thiscall agiMeshModel::ModelDrawSkel(unsigned int,class bnAnimation *,int) | ?ModelDrawSkel@agiMeshModel@@QAEHIPAVbnAnimation@@H@Z
    0x503090 | public: int __thiscall agiMeshModel::ModelDrawLit(void (__cdecl*)(unsigned char *,unsigned int *,unsigned int *,class agiMeshSet *),unsigned int,class agiLitAnimation *,int) | ?ModelDrawLit@agiMeshModel@@QAEHP6AXPAEPAI1PAVagiMeshSet@@@ZIPAVagiLitAnimation@@H@Z
    0x503160 | public: __thiscall agiLitAnimation::agiLitAnimation(class agiMeshModel *,class bnAnimation *,class Stream *) | ??0agiLitAnimation@@QAE@PAVagiMeshModel@@PAVbnAnimation@@PAVStream@@@Z
*/

class agiMeshModel
{
public:
    // 0x502D50 | ?ModelGeometry@agiMeshModel@@QAEHIPAVbnAnimation@@H@Z
    inline int32_t ModelGeometry(uint32_t arg1, class bnAnimation* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, agiMeshModel, uint32_t, class bnAnimation*, int32_t>>(
            0x502D50, this, arg1, arg2, arg3);
    }

    // 0x502E50 | ?ModelDraw@agiMeshModel@@QAEHIPAVagiLitAnimation@@H@Z
    inline int32_t ModelDraw(uint32_t arg1, class agiLitAnimation* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, agiMeshModel, uint32_t, class agiLitAnimation*, int32_t>>(
            0x502E50, this, arg1, arg2, arg3);
    }

    // 0x502E70 | ?ModelDraw@agiMeshModel@@QAEHIPAVbnAnimation@@H@Z
    inline int32_t ModelDraw(uint32_t arg1, class bnAnimation* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, agiMeshModel, uint32_t, class bnAnimation*, int32_t>>(
            0x502E70, this, arg1, arg2, arg3);
    }

    // 0x502ED0 | ?ModelDrawSkel@agiMeshModel@@QAEHIPAVbnAnimation@@H@Z
    inline int32_t ModelDrawSkel(uint32_t arg1, class bnAnimation* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, agiMeshModel, uint32_t, class bnAnimation*, int32_t>>(
            0x502ED0, this, arg1, arg2, arg3);
    }

    // 0x503090 | ?ModelDrawLit@agiMeshModel@@QAEHP6AXPAEPAI1PAVagiMeshSet@@@ZIPAVagiLitAnimation@@H@Z
    inline int32_t ModelDrawLit(void(__cdecl* arg1)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*), uint32_t arg2,
        class agiLitAnimation* arg3, int32_t arg4)
    {
        return stub<
            member_func_t<int32_t, agiMeshModel, void(__cdecl*)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*),
                uint32_t, class agiLitAnimation*, int32_t>>(0x503090, this, arg1, arg2, arg3, arg4);
    }
};

class agiLitAnimation
{
public:
    // 0x503160 | ??0agiLitAnimation@@QAE@PAVagiMeshModel@@PAVbnAnimation@@PAVStream@@@Z
    inline agiLitAnimation(class agiMeshModel* arg1, class bnAnimation* arg2, class Stream* arg3)
    {
        stub<member_func_t<void, agiLitAnimation, class agiMeshModel*, class bnAnimation*, class Stream*>>(
            0x503160, this, arg1, arg2, arg3);
    }
};
