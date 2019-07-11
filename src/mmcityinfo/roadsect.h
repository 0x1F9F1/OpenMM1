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

// mmcityinfo:roadsect

#include "hooking.h"

// 0x66A940 | ?mmPropInfoMetaClass@@3VMetaClass@@A
inline extern_var(0x66A940, class MetaClass, mmPropInfoMetaClass);

// 0x66A968 | ?mmRoadSideMetaClass@@3VMetaClass@@A
inline extern_var(0x66A968, class MetaClass, mmRoadSideMetaClass);

// 0x66A990 | ?mmRoadSectMetaClass@@3VMetaClass@@A
inline extern_var(0x66A990, class MetaClass, mmRoadSectMetaClass);

// 0x4C6F90 | ?new_mmPropInfo@@YAPAXH@Z
inline void* new_mmPropInfo(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4C6F90, arg1);
}

// 0x4C7060 | ?delete_mmPropInfo@@YAXPAXH@Z
inline void delete_mmPropInfo(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4C7060, arg1, arg2);
}

// 0x4C71B0 | ?new_mmRoadSide@@YAPAXH@Z
inline void* new_mmRoadSide(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4C71B0, arg1);
}

// 0x4C7280 | ?delete_mmRoadSide@@YAXPAXH@Z
inline void delete_mmRoadSide(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4C7280, arg1, arg2);
}

// 0x4C7570 | ?new_mmRoadSect@@YAPAXH@Z
inline void* new_mmRoadSect(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4C7570, arg1);
}

// 0x4C7640 | ?delete_mmRoadSect@@YAXPAXH@Z
inline void delete_mmRoadSect(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4C7640, arg1, arg2);
}

class mmRoadSect : mmInfoBase
{
public:
    // mmRoadSect::`vftable' @ 0x5944A0

    // 0x4C6900 | ??0mmRoadSect@@QAE@XZ
    inline mmRoadSect()
    {
        stub<member_func_t<void, mmRoadSect>>(0x4C6900, this);
    }

    // 0x4C6A40 | ?SetStreetWidth@mmRoadSect@@QAEXM@Z
    inline void SetStreetWidth(float arg1)
    {
        return stub<member_func_t<void, mmRoadSect, float>>(0x4C6A40, this, arg1);
    }

    // 0x4C6A50 | ?SetStreetType@mmRoadSect@@QAEXPAD@Z
    inline void SetStreetType(char* arg1)
    {
        return stub<member_func_t<void, mmRoadSect, char*>>(0x4C6A50, this, arg1);
    }

    // 0x4C6A60 | ?SetRSidewalk@mmRoadSect@@QAEXMM@Z
    inline void SetRSidewalk(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmRoadSect, float, float>>(0x4C6A60, this, arg1, arg2);
    }

    // 0x4C6A80 | ?SetLSidewalk@mmRoadSect@@QAEXMM@Z
    inline void SetLSidewalk(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmRoadSect, float, float>>(0x4C6A80, this, arg1, arg2);
    }

    // 0x4C6AA0 | ?NewVertexs@mmRoadSect@@QAEXHHHHH@Z
    inline void NewVertexs(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<void, mmRoadSect, int32_t, int32_t, int32_t, int32_t, int32_t>>(
            0x4C6AA0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4C6B50 | ?SetRoadVertex@mmRoadSect@@QAEXHHHAAVVector3@@@Z
    inline void SetRoadVertex(int32_t arg1, int32_t arg2, int32_t arg3, class Vector3& arg4)
    {
        return stub<member_func_t<void, mmRoadSect, int32_t, int32_t, int32_t, class Vector3&>>(
            0x4C6B50, this, arg1, arg2, arg3, arg4);
    }

    // 0x4C6BA0 | ?SetSidewalkVertex@mmRoadSect@@QAEXHHHAAVVector3@@@Z
    inline void SetSidewalkVertex(int32_t arg1, int32_t arg2, int32_t arg3, class Vector3& arg4)
    {
        return stub<member_func_t<void, mmRoadSect, int32_t, int32_t, int32_t, class Vector3&>>(
            0x4C6BA0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4C6C00 | ?GetVertex@mmRoadSect@@QAEPAVVector3@@HHH@Z
    inline class Vector3* GetVertex(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<class Vector3*, mmRoadSect, int32_t, int32_t, int32_t>>(
            0x4C6C00, this, arg1, arg2, arg3);
    }

    // 0x4C6C30 | ?GetSidewalkVertex@mmRoadSect@@QAEPAVVector3@@HHH@Z
    inline class Vector3* GetSidewalkVertex(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<class Vector3*, mmRoadSect, int32_t, int32_t, int32_t>>(
            0x4C6C30, this, arg1, arg2, arg3);
    }

    // 0x4C6C70 | ?SetRoadNormal@mmRoadSect@@QAEXHAAVVector3@@@Z
    inline void SetRoadNormal(int32_t arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, mmRoadSect, int32_t, class Vector3&>>(0x4C6C70, this, arg1, arg2);
    }

    // 0x4C6CA0 | ?SetRoomId@mmRoadSect@@QAEXHH@Z
    inline void SetRoomId(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmRoadSect, int32_t, int32_t>>(0x4C6CA0, this, arg1, arg2);
    }

    // 0x4C6CC0 | ?SetIntersectionType@mmRoadSect@@QAEXHH@Z
    inline void SetIntersectionType(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmRoadSect, int32_t, int32_t>>(0x4C6CC0, this, arg1, arg2);
    }

    // 0x4C6CE0 | ?GetNormal@mmRoadSect@@QAEPAVVector3@@H@Z
    inline class Vector3* GetNormal(int32_t arg1)
    {
        return stub<member_func_t<class Vector3*, mmRoadSect, int32_t>>(0x4C6CE0, this, arg1);
    }

    // 0x4C6D00 | ?GetRoomId@mmRoadSect@@QAEHH@Z
    inline int32_t GetRoomId(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmRoadSect, int32_t>>(0x4C6D00, this, arg1);
    }

    // 0x4C6D20 | ?GetIntersectionType@mmRoadSect@@QAEHH@Z
    inline int32_t GetIntersectionType(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmRoadSect, int32_t>>(0x4C6D20, this, arg1);
    }

    // 0x4C6D40 | ?SetStopLightPos@mmRoadSect@@QAEXHABVVector3@@0@Z
    inline void SetStopLightPos(int32_t arg1, class Vector3 const& arg2, class Vector3 const& arg3)
    {
        return stub<member_func_t<void, mmRoadSect, int32_t, class Vector3 const&, class Vector3 const&>>(
            0x4C6D40, this, arg1, arg2, arg3);
    }

    // 0x4C6D90 | ?GetStopLightPos@mmRoadSect@@QAEXHAAVVector3@@0@Z
    inline void GetStopLightPos(int32_t arg1, class Vector3& arg2, class Vector3& arg3)
    {
        return stub<member_func_t<void, mmRoadSect, int32_t, class Vector3&, class Vector3&>>(
            0x4C6D90, this, arg1, arg2, arg3);
    }

    // 0x4C6DE0 | ?SetBlocked@mmRoadSect@@QAEXHH@Z
    inline void SetBlocked(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmRoadSect, int32_t, int32_t>>(0x4C6DE0, this, arg1, arg2);
    }

    // 0x4C6E00 | ?IsBlocked@mmRoadSect@@QAEHH@Z
    inline int32_t IsBlocked(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmRoadSect, int32_t>>(0x4C6E00, this, arg1);
    }

    // 0x4C6E20 | ?SetPedBlocked@mmRoadSect@@QAEXHH@Z
    inline void SetPedBlocked(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmRoadSect, int32_t, int32_t>>(0x4C6E20, this, arg1, arg2);
    }

    // 0x4C6E40 | ?IsPedBlocked@mmRoadSect@@QAEHH@Z
    inline int32_t IsPedBlocked(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmRoadSect, int32_t>>(0x4C6E40, this, arg1);
    }

    // 0x4C6E60 | ?SetStopLightName@mmRoadSect@@QAEXHPAD@Z
    inline void SetStopLightName(int32_t arg1, char* arg2)
    {
        return stub<member_func_t<void, mmRoadSect, int32_t, char*>>(0x4C6E60, this, arg1, arg2);
    }

    // 0x4C6E90 | ?GetStopLightName@mmRoadSect@@QAEPADH@Z
    inline char* GetStopLightName(int32_t arg1)
    {
        return stub<member_func_t<char*, mmRoadSect, int32_t>>(0x4C6E90, this, arg1);
    }

    // 0x4C6EB0 | ?SetDivided@mmRoadSect@@QAEXH@Z
    inline void SetDivided(int32_t arg1)
    {
        return stub<member_func_t<void, mmRoadSect, int32_t>>(0x4C6EB0, this, arg1);
    }

    // 0x4C6EC0 | ?IsDivided@mmRoadSect@@QAEHXZ
    inline int32_t IsDivided()
    {
        return stub<member_func_t<int32_t, mmRoadSect>>(0x4C6EC0, this);
    }

    // 0x4C6ED0 | ?SetAlley@mmRoadSect@@QAEXH@Z
    inline void SetAlley(int32_t arg1)
    {
        return stub<member_func_t<void, mmRoadSect, int32_t>>(0x4C6ED0, this, arg1);
    }

    // 0x4C6EE0 | ?IsAlley@mmRoadSect@@QAEHXZ
    inline int32_t IsAlley()
    {
        return stub<member_func_t<int32_t, mmRoadSect>>(0x4C6EE0, this);
    }

    // 0x4C72E0 | ?DeclareFields@mmRoadSect@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4C72E0);
    }

    // 0x4C7850 | ??1mmRoadSect@@UAE@XZ
    inline ~mmRoadSect() override
    {
        stub<member_func_t<void, mmRoadSect>>(0x4C7850, this);
    }

    // 0x4C7690 | ?GetClass@mmRoadSect@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmRoadSect>>(0x4C7690, this);
    }
};

struct mmPropInfo : mmInfoBase
{
public:
    // mmPropInfo::`vftable' @ 0x594470

    // 0x4C66B0 | ??0mmPropInfo@@QAE@XZ
    inline mmPropInfo()
    {
        stub<member_func_t<void, mmPropInfo>>(0x4C66B0, this);
    }

    // 0x4C6740 | ?NewItems@mmPropInfo@@QAEXH@Z
    inline void NewItems(int32_t arg1)
    {
        return stub<member_func_t<void, mmPropInfo, int32_t>>(0x4C6740, this, arg1);
    }

    // 0x4C6770 | ?SetItem@mmPropInfo@@QAEXHPAD@Z
    inline void SetItem(int32_t arg1, char* arg2)
    {
        return stub<member_func_t<void, mmPropInfo, int32_t, char*>>(0x4C6770, this, arg1, arg2);
    }

    // 0x4C6790 | ?SetSpacing@mmPropInfo@@QAEXM@Z
    inline void SetSpacing(float arg1)
    {
        return stub<member_func_t<void, mmPropInfo, float>>(0x4C6790, this, arg1);
    }

    // 0x4C67A0 | ?GetItem@mmPropInfo@@QAEPADH@Z
    inline char* GetItem(int32_t arg1)
    {
        return stub<member_func_t<char*, mmPropInfo, int32_t>>(0x4C67A0, this, arg1);
    }

    // 0x4C67D0 | ?GetSpacing@mmPropInfo@@QAEMXZ
    inline float GetSpacing()
    {
        return stub<member_func_t<float, mmPropInfo>>(0x4C67D0, this);
    }

    // 0x4C67E0 | ?GetNumItems@mmPropInfo@@QAEHXZ
    inline int32_t GetNumItems()
    {
        return stub<member_func_t<int32_t, mmPropInfo>>(0x4C67E0, this);
    }

    // 0x4C67F0 | ?Append@mmPropInfo@@QAEXPAD@Z
    inline void Append(char* arg1)
    {
        return stub<member_func_t<void, mmPropInfo, char*>>(0x4C67F0, this, arg1);
    }

    // 0x4C6EF0 | ?DeclareFields@mmPropInfo@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4C6EF0);
    }

    // 0x4C66E0 | ??1mmPropInfo@@UAE@XZ
    inline ~mmPropInfo() override
    {
        stub<member_func_t<void, mmPropInfo>>(0x4C66E0, this);
    }

    // 0x4C70B0 | ?GetClass@mmPropInfo@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmPropInfo>>(0x4C70B0, this);
    }
};

struct mmRoadSide : mmInfoBase
{
public:
    // mmRoadSide::`vftable' @ 0x594488

    // 0x4C6870 | ??0mmRoadSide@@QAE@XZ
    inline mmRoadSide()
    {
        stub<member_func_t<void, mmRoadSide>>(0x4C6870, this);
    }

    // 0x4C70C0 | ?DeclareFields@mmRoadSide@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4C70C0);
    }

    // 0x4C77C0 | ??1mmRoadSide@@UAE@XZ
    inline ~mmRoadSide() override
    {
        stub<member_func_t<void, mmRoadSide>>(0x4C77C0, this);
    }

    // 0x4C72D0 | ?GetClass@mmRoadSide@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmRoadSide>>(0x4C72D0, this);
    }
};
