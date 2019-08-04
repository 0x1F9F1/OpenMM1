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
    mmcityinfo:roadsect

    0x4C66B0 | public: __thiscall mmPropInfo::mmPropInfo(void) | ??0mmPropInfo@@QAE@XZ
    0x4C66E0 | public: virtual __thiscall mmPropInfo::~mmPropInfo(void) | ??1mmPropInfo@@UAE@XZ
    0x4C6740 | public: void __thiscall mmPropInfo::NewItems(int) | ?NewItems@mmPropInfo@@QAEXH@Z
    0x4C6770 | public: void __thiscall mmPropInfo::SetItem(int,char *) | ?SetItem@mmPropInfo@@QAEXHPAD@Z
    0x4C6790 | public: void __thiscall mmPropInfo::SetSpacing(float) | ?SetSpacing@mmPropInfo@@QAEXM@Z
    0x4C67A0 | public: char * __thiscall mmPropInfo::GetItem(int) | ?GetItem@mmPropInfo@@QAEPADH@Z
    0x4C67D0 | public: float __thiscall mmPropInfo::GetSpacing(void) | ?GetSpacing@mmPropInfo@@QAEMXZ
    0x4C67E0 | public: int __thiscall mmPropInfo::GetNumItems(void) | ?GetNumItems@mmPropInfo@@QAEHXZ
    0x4C67F0 | public: void __thiscall mmPropInfo::Append(char *) | ?Append@mmPropInfo@@QAEXPAD@Z
    0x4C6870 | public: __thiscall mmRoadSide::mmRoadSide(void) | ??0mmRoadSide@@QAE@XZ
    0x4C6900 | public: __thiscall mmRoadSect::mmRoadSect(void) | ??0mmRoadSect@@QAE@XZ
    0x4C6A40 | public: void __thiscall mmRoadSect::SetStreetWidth(float) | ?SetStreetWidth@mmRoadSect@@QAEXM@Z
    0x4C6A50 | public: void __thiscall mmRoadSect::SetStreetType(char *) | ?SetStreetType@mmRoadSect@@QAEXPAD@Z
    0x4C6A60 | public: void __thiscall mmRoadSect::SetRSidewalk(float,float) | ?SetRSidewalk@mmRoadSect@@QAEXMM@Z
    0x4C6A80 | public: void __thiscall mmRoadSect::SetLSidewalk(float,float) | ?SetLSidewalk@mmRoadSect@@QAEXMM@Z
    0x4C6AA0 | public: void __thiscall mmRoadSect::NewVertexs(int,int,int,int,int) | ?NewVertexs@mmRoadSect@@QAEXHHHHH@Z
    0x4C6B50 | public: void __thiscall mmRoadSect::SetRoadVertex(int,int,int,class Vector3 &) | ?SetRoadVertex@mmRoadSect@@QAEXHHHAAVVector3@@@Z
    0x4C6BA0 | public: void __thiscall mmRoadSect::SetSidewalkVertex(int,int,int,class Vector3 &) | ?SetSidewalkVertex@mmRoadSect@@QAEXHHHAAVVector3@@@Z
    0x4C6C00 | public: class Vector3 * __thiscall mmRoadSect::GetVertex(int,int,int) | ?GetVertex@mmRoadSect@@QAEPAVVector3@@HHH@Z
    0x4C6C30 | public: class Vector3 * __thiscall mmRoadSect::GetSidewalkVertex(int,int,int) | ?GetSidewalkVertex@mmRoadSect@@QAEPAVVector3@@HHH@Z
    0x4C6C70 | public: void __thiscall mmRoadSect::SetRoadNormal(int,class Vector3 &) | ?SetRoadNormal@mmRoadSect@@QAEXHAAVVector3@@@Z
    0x4C6CA0 | public: void __thiscall mmRoadSect::SetRoomId(int,int) | ?SetRoomId@mmRoadSect@@QAEXHH@Z
    0x4C6CC0 | public: void __thiscall mmRoadSect::SetIntersectionType(int,int) | ?SetIntersectionType@mmRoadSect@@QAEXHH@Z
    0x4C6CE0 | public: class Vector3 * __thiscall mmRoadSect::GetNormal(int) | ?GetNormal@mmRoadSect@@QAEPAVVector3@@H@Z
    0x4C6D00 | public: int __thiscall mmRoadSect::GetRoomId(int) | ?GetRoomId@mmRoadSect@@QAEHH@Z
    0x4C6D20 | public: int __thiscall mmRoadSect::GetIntersectionType(int) | ?GetIntersectionType@mmRoadSect@@QAEHH@Z
    0x4C6D40 | public: void __thiscall mmRoadSect::SetStopLightPos(int,class Vector3 const &,class Vector3 const &) | ?SetStopLightPos@mmRoadSect@@QAEXHABVVector3@@0@Z
    0x4C6D90 | public: void __thiscall mmRoadSect::GetStopLightPos(int,class Vector3 &,class Vector3 &) | ?GetStopLightPos@mmRoadSect@@QAEXHAAVVector3@@0@Z
    0x4C6DE0 | public: void __thiscall mmRoadSect::SetBlocked(int,int) | ?SetBlocked@mmRoadSect@@QAEXHH@Z
    0x4C6E00 | public: int __thiscall mmRoadSect::IsBlocked(int) | ?IsBlocked@mmRoadSect@@QAEHH@Z
    0x4C6E20 | public: void __thiscall mmRoadSect::SetPedBlocked(int,int) | ?SetPedBlocked@mmRoadSect@@QAEXHH@Z
    0x4C6E40 | public: int __thiscall mmRoadSect::IsPedBlocked(int) | ?IsPedBlocked@mmRoadSect@@QAEHH@Z
    0x4C6E60 | public: void __thiscall mmRoadSect::SetStopLightName(int,char *) | ?SetStopLightName@mmRoadSect@@QAEXHPAD@Z
    0x4C6E90 | public: char * __thiscall mmRoadSect::GetStopLightName(int) | ?GetStopLightName@mmRoadSect@@QAEPADH@Z
    0x4C6EB0 | public: void __thiscall mmRoadSect::SetDivided(int) | ?SetDivided@mmRoadSect@@QAEXH@Z
    0x4C6EC0 | public: int __thiscall mmRoadSect::IsDivided(void) | ?IsDivided@mmRoadSect@@QAEHXZ
    0x4C6ED0 | public: void __thiscall mmRoadSect::SetAlley(int) | ?SetAlley@mmRoadSect@@QAEXH@Z
    0x4C6EE0 | public: int __thiscall mmRoadSect::IsAlley(void) | ?IsAlley@mmRoadSect@@QAEHXZ
    0x4C6EF0 | public: static void __cdecl mmPropInfo::DeclareFields(void) | ?DeclareFields@mmPropInfo@@SAXXZ
    0x4C70B0 | public: virtual class MetaClass * __thiscall mmPropInfo::GetClass(void) | ?GetClass@mmPropInfo@@UAEPAVMetaClass@@XZ
    0x4C70C0 | public: static void __cdecl mmRoadSide::DeclareFields(void) | ?DeclareFields@mmRoadSide@@SAXXZ
    0x4C72D0 | public: virtual class MetaClass * __thiscall mmRoadSide::GetClass(void) | ?GetClass@mmRoadSide@@UAEPAVMetaClass@@XZ
    0x4C72E0 | public: static void __cdecl mmRoadSect::DeclareFields(void) | ?DeclareFields@mmRoadSect@@SAXXZ
    0x4C7690 | public: virtual class MetaClass * __thiscall mmRoadSect::GetClass(void) | ?GetClass@mmRoadSect@@UAEPAVMetaClass@@XZ
    0x4C76A0 | public: virtual void * __thiscall mmPropInfo::`vector deleting destructor'(unsigned int) | ??_EmmPropInfo@@UAEPAXI@Z
    0x4C7700 | public: virtual void * __thiscall mmRoadSide::`vector deleting destructor'(unsigned int) | ??_EmmRoadSide@@UAEPAXI@Z
    0x4C7760 | public: virtual void * __thiscall mmRoadSect::`vector deleting destructor'(unsigned int) | ??_EmmRoadSect@@UAEPAXI@Z
    0x4C77C0 | public: virtual __thiscall mmRoadSide::~mmRoadSide(void) | ??1mmRoadSide@@UAE@XZ
    0x4C7850 | public: virtual __thiscall mmRoadSect::~mmRoadSect(void) | ??1mmRoadSect@@UAE@XZ
    0x594470 | const mmPropInfo::`vftable' | ??_7mmPropInfo@@6B@
    0x594488 | const mmRoadSide::`vftable' | ??_7mmRoadSide@@6B@
    0x5944A0 | const mmRoadSect::`vftable' | ??_7mmRoadSect@@6B@
    0x66A940 | class MetaClass mmPropInfoMetaClass | ?mmPropInfoMetaClass@@3VMetaClass@@A
    0x66A968 | class MetaClass mmRoadSideMetaClass | ?mmRoadSideMetaClass@@3VMetaClass@@A
    0x66A990 | class MetaClass mmRoadSectMetaClass | ?mmRoadSectMetaClass@@3VMetaClass@@A
    0x4C6F90 | void * __cdecl new_mmPropInfo(int) | ?new_mmPropInfo@@YAPAXH@Z
    0x4C7060 | void __cdecl delete_mmPropInfo(void *,int) | ?delete_mmPropInfo@@YAXPAXH@Z
    0x4C71B0 | void * __cdecl new_mmRoadSide(int) | ?new_mmRoadSide@@YAPAXH@Z
    0x4C7280 | void __cdecl delete_mmRoadSide(void *,int) | ?delete_mmRoadSide@@YAXPAXH@Z
    0x4C7570 | void * __cdecl new_mmRoadSect(int) | ?new_mmRoadSect@@YAPAXH@Z
    0x4C7640 | void __cdecl delete_mmRoadSect(void *,int) | ?delete_mmRoadSect@@YAXPAXH@Z
*/

// 0x66A940 | ?mmPropInfoMetaClass@@3VMetaClass@@A
inline extern_var(0x66A940, class MetaClass, mmPropInfoMetaClass);

// 0x66A968 | ?mmRoadSideMetaClass@@3VMetaClass@@A
inline extern_var(0x66A968, class MetaClass, mmRoadSideMetaClass);

// 0x66A990 | ?mmRoadSectMetaClass@@3VMetaClass@@A
inline extern_var(0x66A990, class MetaClass, mmRoadSectMetaClass);

// 0x4C6F90 | ?new_mmPropInfo@@YAPAXH@Z
// 0x4C7060 | ?delete_mmPropInfo@@YAXPAXH@Z

// 0x4C71B0 | ?new_mmRoadSide@@YAPAXH@Z
// 0x4C7280 | ?delete_mmRoadSide@@YAXPAXH@Z

// 0x4C7570 | ?new_mmRoadSect@@YAPAXH@Z
// 0x4C7640 | ?delete_mmRoadSect@@YAXPAXH@Z

class mmRoadSect : mmInfoBase
{
public:
    // mmRoadSect::`vftable' @ 0x5944A0

    // 0x4C6900 | ??0mmRoadSect@@QAE@XZ
    inline mmRoadSect()
    {
        // stub<member_func_t<void, mmRoadSect>>(0x4C6900, this);

        unimplemented();
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
    inline ~mmRoadSect() override = 0
    {
        // stub<member_func_t<void, mmRoadSect>>(0x4C7850, this);

        unimplemented();
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
        // stub<member_func_t<void, mmPropInfo>>(0x4C66B0, this);

        unimplemented();
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
    inline ~mmPropInfo() override = 0
    {
        // stub<member_func_t<void, mmPropInfo>>(0x4C66E0, this);

        unimplemented();
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
        // stub<member_func_t<void, mmRoadSide>>(0x4C6870, this);

        unimplemented();
    }

    // 0x4C70C0 | ?DeclareFields@mmRoadSide@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4C70C0);
    }

    // 0x4C77C0 | ??1mmRoadSide@@UAE@XZ
    inline ~mmRoadSide() override = 0
    {
        // stub<member_func_t<void, mmRoadSide>>(0x4C77C0, this);

        unimplemented();
    }

    // 0x4C72D0 | ?GetClass@mmRoadSide@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmRoadSide>>(0x4C72D0, this);
    }
};
