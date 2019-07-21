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
    mmdyna:bndtmpl2

    0x50BCD0 | public: void __thiscall mmBoundTemplate::InitGeometry(int,int) | ?InitGeometry@mmBoundTemplate@@QAEXHH@Z
    0x50BD80 | public: void __thiscall mmBoundTemplate::AddTriangle(int,int,int,int,int) | ?AddTriangle@mmBoundTemplate@@QAEXHHHHH@Z
    0x50BE70 | public: void __thiscall mmBoundTemplate::AddQuad(int,int,int,int,int,int) | ?AddQuad@mmBoundTemplate@@QAEXHHHHHH@Z
    0x50C0E0 | public: void __thiscall mmBoundTemplate::ComputeBounds(void) | ?ComputeBounds@mmBoundTemplate@@QAEXXZ
    0x50C120 | bool __cdecl EdgeInList(int,int,long,int *,int *) | ?EdgeInList@@YA_NHHJPAH0@Z
    0x50C180 | public: void __thiscall mmBoundTemplate::ComputeEdges(void) | ?ComputeEdges@mmBoundTemplate@@QAEXXZ
    0x50C350 | public: int __thiscall mmBoundTemplate::Load(char *,char *,class Vector3 *,int,int,int,int,int,int) | ?Load@mmBoundTemplate@@QAEHPAD0PAVVector3@@HHHHHH@Z
    0x50CBC0 | private: static void __cdecl mmBoundTemplate::PageOutCallback(void *,int) | ?PageOutCallback@mmBoundTemplate@@CAXPAXH@Z
    0x50CD10 | private: void __thiscall mmBoundTemplate::DoPageIn(void) | ?DoPageIn@mmBoundTemplate@@AAEXXZ
    0x50D170 | private: static void __cdecl mmBoundTemplate::PageInCallback(void *) | ?PageInCallback@mmBoundTemplate@@CAXPAX@Z
    0x50D180 | public: void __thiscall mmBoundTemplate::PageIn(void) | ?PageIn@mmBoundTemplate@@QAEXXZ
    0x50D1A0 | public: int __thiscall mmBoundTemplate::LockIfResident(void) | ?LockIfResident@mmBoundTemplate@@QAEHXZ
    0x50D200 | public: void __thiscall mmBoundTemplate::Unlock(void) | ?Unlock@mmBoundTemplate@@QAEXXZ
    0x50D220 | public: void __thiscall mmBoundTemplate::ComputeEdgeNormals(void) | ?ComputeEdgeNormals@mmBoundTemplate@@QAEXXZ
    0x50D6B0 | private: void __thiscall mmBoundTemplate::MakeTable(int,int,int) | ?MakeTable@mmBoundTemplate@@AAEXHHH@Z
    0x50D8A0 | private: void __thiscall mmBoundTemplate::DoMakeTable(int,int,int) | ?DoMakeTable@mmBoundTemplate@@AAEXHHH@Z
    0x50DDC0 | public: void __thiscall mmBoundTemplate::AddIndex(int,int,int) | ?AddIndex@mmBoundTemplate@@QAEXHHH@Z
    0x50DEB0 | public: void __thiscall mmBoundTemplate::PlotLine(class Vector3,class Vector3) | ?PlotLine@mmBoundTemplate@@QAEXVVector3@@0@Z
    0x50DFC0 | public: void __thiscall mmBoundTemplate::PlotSpan(int,int,int) | ?PlotSpan@mmBoundTemplate@@QAEXHHH@Z
    0x6E17B0 | int BoundBytesPaged | ?BoundBytesPaged@@3HA
    0x6E17B4 | public: static int mmBoundTemplate::WinID | ?WinID@mmBoundTemplate@@2HA
    0x6E17BC | public: static int mmBoundTemplate::NumIndexs | ?NumIndexs@mmBoundTemplate@@2HA
    0x6E17C4 | int BoundsPaged | ?BoundsPaged@@3HA
    0x6E17C8 | public: static int mmBoundTemplate::DrawGrid | ?DrawGrid@mmBoundTemplate@@2HA
    0x6E1850 | public: static unsigned short * mmBoundTemplate::ConstructionTable | ?ConstructionTable@mmBoundTemplate@@2PAGA
    0x6E1854 | public: static int mmBoundTemplate::MaxPerBucket | ?MaxPerBucket@mmBoundTemplate@@2HA
    0x6E1858 | class Stream * MakeTableStats | ?MakeTableStats@@3PAVStream@@A
*/

// 0x50C120 | ?EdgeInList@@YA_NHHJPAH0@Z
inline bool EdgeInList(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t* arg5)
{
    return stub<cdecl_t<bool, int32_t, int32_t, int32_t, int32_t*, int32_t*>>(0x50C120, arg1, arg2, arg3, arg4, arg5);
}

// 0x6E17B0 | ?BoundBytesPaged@@3HA
inline extern_var(0x6E17B0, int32_t, BoundBytesPaged);

// 0x6E17C4 | ?BoundsPaged@@3HA
inline extern_var(0x6E17C4, int32_t, BoundsPaged);

// 0x6E1858 | ?MakeTableStats@@3PAVStream@@A
inline extern_var(0x6E1858, class Stream*, MakeTableStats);
