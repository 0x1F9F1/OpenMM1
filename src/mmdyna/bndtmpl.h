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
    mmdyna:bndtmpl

    0x5093B0 | public: static class mmBoundTemplate * __cdecl mmBoundTemplate::GetBoundTemplate(char *,char *,class Vector3 *,int,int,int,int,int) | ?GetBoundTemplate@mmBoundTemplate@@SAPAV1@PAD0PAVVector3@@HHHHH@Z
    0x5094C0 | public: static class mmBoundTemplate * __cdecl mmBoundTemplate::MakeBox(char *,char *,int,class Vector3 *,class Vector3 *) | ?MakeBox@mmBoundTemplate@@SAPAV1@PAD0HPAVVector3@@1@Z
    0x5099C0 | public: void __thiscall mmBoundTemplate::AddRef(void) | ?AddRef@mmBoundTemplate@@QAEXXZ
    0x5099E0 | public: int __thiscall mmBoundTemplate::Release(void) | ?Release@mmBoundTemplate@@QAEHXZ
    0x509A10 | public: void __thiscall mmBoundTemplate::ValidatePtr(char *) | ?ValidatePtr@mmBoundTemplate@@QAEXPAD@Z
    0x509A70 | public: __thiscall mmBoundTemplate::mmBoundTemplate(void) | ??0mmBoundTemplate@@QAE@XZ
    0x509B30 | public: __thiscall mmBoundTemplate::~mmBoundTemplate(void) | ??1mmBoundTemplate@@QAE@XZ
    0x509BF0 | public: void __thiscall mmBoundTemplate::Reset(void) | ?Reset@mmBoundTemplate@@QAEXXZ
    0x509C40 | public: int __thiscall mmBoundTemplate::Collide(class mmBoundTemplate *,class Matrix34 &,class Matrix34 &,class Matrix34 &,class mmEdgeBodyIsect *,int,int,class asInertialCS *,class asInertialCS *,class Vector3 *,class Vector3 *) | ?Collide@mmBoundTemplate@@QAEHPAV1@AAVMatrix34@@11PAVmmEdgeBodyIsect@@HHPAVasInertialCS@@3PAVVector3@@4@Z
    0x50A2A0 | public: int __thiscall mmBoundTemplate::CollideTerrains(class mmBoundTemplate * *,class Matrix34 &,class mmEdgeBodyIsect *,int,int) | ?CollideTerrains@mmBoundTemplate@@QAEHPAPAV1@AAVMatrix34@@PAVmmEdgeBodyIsect@@HH@Z
    0x50A4D0 | public: int __thiscall mmBoundTemplate::Collide(class mmEdgeBodyIsect *,int) | ?Collide@mmBoundTemplate@@QAEHPAVmmEdgeBodyIsect@@H@Z
    0x50A530 | public: int __thiscall mmBoundTemplate::Collide(class mmIntersection *) | ?Collide@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    0x50A600 | public: int __thiscall mmBoundTemplate::QuickSphereSphere(class mmIntersection *) | ?QuickSphereSphere@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    0x50A6A0 | public: int __thiscall mmBoundTemplate::QuickLineSphere(class mmEdgeBodyIsect *) | ?QuickLineSphere@mmBoundTemplate@@QAEHPAVmmEdgeBodyIsect@@@Z
    0x50A800 | public: int __thiscall mmBoundTemplate::QuickLineSphere(class mmIntersection *) | ?QuickLineSphere@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    0x50A920 | public: int __thiscall mmBoundTemplate::QuickSphereBox(class mmIntersection *) | ?QuickSphereBox@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    0x50A9E0 | public: int __thiscall mmBoundTemplate::QuickLineBox(class mmEdgeBodyIsect *) | ?QuickLineBox@mmBoundTemplate@@QAEHPAVmmEdgeBodyIsect@@@Z
    0x50AAD0 | public: int __thiscall mmBoundTemplate::QuickLineBox(class mmIntersection *) | ?QuickLineBox@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    0x50ABC0 | public: int __thiscall mmBoundTemplate::SphereSphere(class mmIntersection *) | ?SphereSphere@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    0x50AD60 | public: int __thiscall mmBoundTemplate::SphereGeometry(class mmIntersection *) | ?SphereGeometry@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    0x50AE90 | public: int __thiscall mmBoundTemplate::SphereTable(class mmIntersection *) | ?SphereTable@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    0x50B0E0 | public: int __thiscall mmBoundTemplate::LineSphere(class mmIntersection *) | ?LineSphere@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    0x50B0F0 | public: int __thiscall mmBoundTemplate::LineGeometry(class mmEdgeBodyIsect *,int) | ?LineGeometry@mmBoundTemplate@@QAEHPAVmmEdgeBodyIsect@@H@Z
    0x50B1B0 | public: int __thiscall mmBoundTemplate::LineTable(class mmEdgeBodyIsect *,int) | ?LineTable@mmBoundTemplate@@QAEHPAVmmEdgeBodyIsect@@H@Z
    0x50B4D0 | public: int __thiscall mmBoundTemplate::LineSpan(class mmEdgeBodyIsect *,int,int,int,int) | ?LineSpan@mmBoundTemplate@@QAEHPAVmmEdgeBodyIsect@@HHHH@Z
    0x50B640 | public: int __thiscall mmBoundTemplate::LineGeometry(class mmIntersection *) | ?LineGeometry@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    0x50B770 | public: int __thiscall mmBoundTemplate::LineTable(class mmIntersection *) | ?LineTable@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    0x50BAF0 | public: int __thiscall mmBoundTemplate::LineSpan(class mmIntersection *,int,int,int) | ?LineSpan@mmBoundTemplate@@QAEHPAVmmIntersection@@HHH@Z
    0x50BCC0 | public: void __thiscall mmBoundTemplate::DrawGraph(void) | ?DrawGraph@mmBoundTemplate@@QAEXXZ
    0x6E16A8 | public: static unsigned short * mmBoundTemplate::LastIsect | ?LastIsect@mmBoundTemplate@@2PAGA
    0x6E16B0 | int * * CollidedLines | ?CollidedLines@@3PAPAHA
    0x6E1728 | int * InsideVerts | ?InsideVerts@@3PAHA
    0x6E17A0 | public: static unsigned short mmBoundTemplate::IsectCount | ?IsectCount@mmBoundTemplate@@2GA
    0x6E17A4 | public: static class Vector3 * mmBoundTemplate::VertPtr | ?VertPtr@mmBoundTemplate@@2PAVVector3@@A
    0x6E17A8 | public: static class mmBoundTemplate * mmBoundTemplate::BoundPtr | ?BoundPtr@mmBoundTemplate@@2PAV1@A
*/

// 0x6E16B0 | ?CollidedLines@@3PAPAHA
inline extern_var(0x6E16B0, int32_t**, CollidedLines);

// 0x6E1728 | ?InsideVerts@@3PAHA
inline extern_var(0x6E1728, int32_t*, InsideVerts);

class mmBoundTemplate
{
public:
    // 0x5093B0 | ?GetBoundTemplate@mmBoundTemplate@@SAPAV1@PAD0PAVVector3@@HHHHH@Z
    static inline class mmBoundTemplate* GetBoundTemplate(char* arg1, char* arg2, class Vector3* arg3, int32_t arg4,
        int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
    {
        return stub<
            cdecl_t<class mmBoundTemplate*, char*, char*, class Vector3*, int32_t, int32_t, int32_t, int32_t, int32_t>>(
            0x5093B0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x5094C0 | ?MakeBox@mmBoundTemplate@@SAPAV1@PAD0HPAVVector3@@1@Z
    static inline class mmBoundTemplate* MakeBox(
        char* arg1, char* arg2, int32_t arg3, class Vector3* arg4, class Vector3* arg5)
    {
        return stub<cdecl_t<class mmBoundTemplate*, char*, char*, int32_t, class Vector3*, class Vector3*>>(
            0x5094C0, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5099C0 | ?AddRef@mmBoundTemplate@@QAEXXZ
    inline void AddRef()
    {
        return stub<member_func_t<void, mmBoundTemplate>>(0x5099C0, this);
    }

    // 0x5099E0 | ?Release@mmBoundTemplate@@QAEHXZ
    inline int32_t Release()
    {
        return stub<member_func_t<int32_t, mmBoundTemplate>>(0x5099E0, this);
    }

    // 0x509A10 | ?ValidatePtr@mmBoundTemplate@@QAEXPAD@Z
    inline void ValidatePtr(char* arg1)
    {
        return stub<member_func_t<void, mmBoundTemplate, char*>>(0x509A10, this, arg1);
    }

    // 0x509A70 | ??0mmBoundTemplate@@QAE@XZ
    inline mmBoundTemplate()
    {
        // stub<member_func_t<void, mmBoundTemplate>>(0x509A70, this);

        unimplemented();
    }

    // 0x509B30 | ??1mmBoundTemplate@@QAE@XZ
    inline ~mmBoundTemplate()
    {
        stub<member_func_t<void, mmBoundTemplate>>(0x509B30, this);
    }

    // 0x509BF0 | ?Reset@mmBoundTemplate@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, mmBoundTemplate>>(0x509BF0, this);
    }

    // 0x509C40 | ?Collide@mmBoundTemplate@@QAEHPAV1@AAVMatrix34@@11PAVmmEdgeBodyIsect@@HHPAVasInertialCS@@3PAVVector3@@4@Z
    inline int32_t Collide(class mmBoundTemplate* arg1, class Matrix34& arg2, class Matrix34& arg3,
        class Matrix34& arg4, class mmEdgeBodyIsect* arg5, int32_t arg6, int32_t arg7, class asInertialCS* arg8,
        class asInertialCS* arg9, class Vector3* arg10, class Vector3* arg11)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmBoundTemplate*, class Matrix34&, class Matrix34&,
            class Matrix34&, class mmEdgeBodyIsect*, int32_t, int32_t, class asInertialCS*, class asInertialCS*,
            class Vector3*, class Vector3*>>(
            0x509C40, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x50A2A0 | ?CollideTerrains@mmBoundTemplate@@QAEHPAPAV1@AAVMatrix34@@PAVmmEdgeBodyIsect@@HH@Z
    inline int32_t CollideTerrains(
        class mmBoundTemplate** arg1, class Matrix34& arg2, class mmEdgeBodyIsect* arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmBoundTemplate**, class Matrix34&,
            class mmEdgeBodyIsect*, int32_t, int32_t>>(0x50A2A0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x50A4D0 | ?Collide@mmBoundTemplate@@QAEHPAVmmEdgeBodyIsect@@H@Z
    inline int32_t Collide(class mmEdgeBodyIsect* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmEdgeBodyIsect*, int32_t>>(
            0x50A4D0, this, arg1, arg2);
    }

    // 0x50A530 | ?Collide@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    inline int32_t Collide(class mmIntersection* arg1)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmIntersection*>>(0x50A530, this, arg1);
    }

    // 0x50A600 | ?QuickSphereSphere@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    inline int32_t QuickSphereSphere(class mmIntersection* arg1)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmIntersection*>>(0x50A600, this, arg1);
    }

    // 0x50A6A0 | ?QuickLineSphere@mmBoundTemplate@@QAEHPAVmmEdgeBodyIsect@@@Z
    inline int32_t QuickLineSphere(class mmEdgeBodyIsect* arg1)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmEdgeBodyIsect*>>(0x50A6A0, this, arg1);
    }

    // 0x50A800 | ?QuickLineSphere@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    inline int32_t QuickLineSphere(class mmIntersection* arg1)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmIntersection*>>(0x50A800, this, arg1);
    }

    // 0x50A920 | ?QuickSphereBox@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    inline int32_t QuickSphereBox(class mmIntersection* arg1)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmIntersection*>>(0x50A920, this, arg1);
    }

    // 0x50A9E0 | ?QuickLineBox@mmBoundTemplate@@QAEHPAVmmEdgeBodyIsect@@@Z
    inline int32_t QuickLineBox(class mmEdgeBodyIsect* arg1)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmEdgeBodyIsect*>>(0x50A9E0, this, arg1);
    }

    // 0x50AAD0 | ?QuickLineBox@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    inline int32_t QuickLineBox(class mmIntersection* arg1)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmIntersection*>>(0x50AAD0, this, arg1);
    }

    // 0x50ABC0 | ?SphereSphere@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    inline int32_t SphereSphere(class mmIntersection* arg1)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmIntersection*>>(0x50ABC0, this, arg1);
    }

    // 0x50AD60 | ?SphereGeometry@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    inline int32_t SphereGeometry(class mmIntersection* arg1)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmIntersection*>>(0x50AD60, this, arg1);
    }

    // 0x50AE90 | ?SphereTable@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    inline int32_t SphereTable(class mmIntersection* arg1)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmIntersection*>>(0x50AE90, this, arg1);
    }

    // 0x50B0E0 | ?LineSphere@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    inline int32_t LineSphere(class mmIntersection* arg1)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmIntersection*>>(0x50B0E0, this, arg1);
    }

    // 0x50B0F0 | ?LineGeometry@mmBoundTemplate@@QAEHPAVmmEdgeBodyIsect@@H@Z
    inline int32_t LineGeometry(class mmEdgeBodyIsect* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmEdgeBodyIsect*, int32_t>>(
            0x50B0F0, this, arg1, arg2);
    }

    // 0x50B1B0 | ?LineTable@mmBoundTemplate@@QAEHPAVmmEdgeBodyIsect@@H@Z
    inline int32_t LineTable(class mmEdgeBodyIsect* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmEdgeBodyIsect*, int32_t>>(
            0x50B1B0, this, arg1, arg2);
    }

    // 0x50B4D0 | ?LineSpan@mmBoundTemplate@@QAEHPAVmmEdgeBodyIsect@@HHHH@Z
    inline int32_t LineSpan(class mmEdgeBodyIsect* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
    {
        return stub<
            member_func_t<int32_t, mmBoundTemplate, class mmEdgeBodyIsect*, int32_t, int32_t, int32_t, int32_t>>(
            0x50B4D0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x50B640 | ?LineGeometry@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    inline int32_t LineGeometry(class mmIntersection* arg1)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmIntersection*>>(0x50B640, this, arg1);
    }

    // 0x50B770 | ?LineTable@mmBoundTemplate@@QAEHPAVmmIntersection@@@Z
    inline int32_t LineTable(class mmIntersection* arg1)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmIntersection*>>(0x50B770, this, arg1);
    }

    // 0x50BAF0 | ?LineSpan@mmBoundTemplate@@QAEHPAVmmIntersection@@HHH@Z
    inline int32_t LineSpan(class mmIntersection* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, class mmIntersection*, int32_t, int32_t, int32_t>>(
            0x50BAF0, this, arg1, arg2, arg3, arg4);
    }

    // 0x50BCC0 | ?DrawGraph@mmBoundTemplate@@QAEXXZ
    inline void DrawGraph()
    {
        return stub<member_func_t<void, mmBoundTemplate>>(0x50BCC0, this);
    }

    // 0x6E16A8 | ?LastIsect@mmBoundTemplate@@2PAGA
    static inline extern_var(0x6E16A8, uint16_t*, LastIsect);

    // 0x6E17A0 | ?IsectCount@mmBoundTemplate@@2GA
    static inline extern_var(0x6E17A0, uint16_t, IsectCount);

    // 0x6E17A4 | ?VertPtr@mmBoundTemplate@@2PAVVector3@@A
    static inline extern_var(0x6E17A4, class Vector3*, VertPtr);

    // 0x6E17A8 | ?BoundPtr@mmBoundTemplate@@2PAV1@A
    static inline extern_var(0x6E17A8, class mmBoundTemplate*, BoundPtr);

    // 0x50BCD0 | ?InitGeometry@mmBoundTemplate@@QAEXHH@Z
    inline void InitGeometry(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmBoundTemplate, int32_t, int32_t>>(0x50BCD0, this, arg1, arg2);
    }

    // 0x50BD80 | ?AddTriangle@mmBoundTemplate@@QAEXHHHHH@Z
    inline void AddTriangle(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<void, mmBoundTemplate, int32_t, int32_t, int32_t, int32_t, int32_t>>(
            0x50BD80, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x50BE70 | ?AddQuad@mmBoundTemplate@@QAEXHHHHHH@Z
    inline void AddQuad(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
    {
        return stub<member_func_t<void, mmBoundTemplate, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t>>(
            0x50BE70, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x50C0E0 | ?ComputeBounds@mmBoundTemplate@@QAEXXZ
    inline void ComputeBounds()
    {
        return stub<member_func_t<void, mmBoundTemplate>>(0x50C0E0, this);
    }

    // 0x50C180 | ?ComputeEdges@mmBoundTemplate@@QAEXXZ
    inline void ComputeEdges()
    {
        return stub<member_func_t<void, mmBoundTemplate>>(0x50C180, this);
    }

    // 0x50C350 | ?Load@mmBoundTemplate@@QAEHPAD0PAVVector3@@HHHHHH@Z
    inline int32_t Load(char* arg1, char* arg2, class Vector3* arg3, int32_t arg4, int32_t arg5, int32_t arg6,
        int32_t arg7, int32_t arg8, int32_t arg9)
    {
        return stub<member_func_t<int32_t, mmBoundTemplate, char*, char*, class Vector3*, int32_t, int32_t, int32_t,
            int32_t, int32_t, int32_t>>(0x50C350, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x50CBC0 | ?PageOutCallback@mmBoundTemplate@@CAXPAXH@Z
    static inline void PageOutCallback(void* arg1, int32_t arg2)
    {
        return stub<cdecl_t<void, void*, int32_t>>(0x50CBC0, arg1, arg2);
    }

    // 0x50CD10 | ?DoPageIn@mmBoundTemplate@@AAEXXZ
    inline void DoPageIn()
    {
        return stub<member_func_t<void, mmBoundTemplate>>(0x50CD10, this);
    }

    // 0x50D170 | ?PageInCallback@mmBoundTemplate@@CAXPAX@Z
    static inline void PageInCallback(void* arg1)
    {
        return stub<cdecl_t<void, void*>>(0x50D170, arg1);
    }

    // 0x50D180 | ?PageIn@mmBoundTemplate@@QAEXXZ
    inline void PageIn()
    {
        return stub<member_func_t<void, mmBoundTemplate>>(0x50D180, this);
    }

    // 0x50D1A0 | ?LockIfResident@mmBoundTemplate@@QAEHXZ
    inline int32_t LockIfResident()
    {
        return stub<member_func_t<int32_t, mmBoundTemplate>>(0x50D1A0, this);
    }

    // 0x50D200 | ?Unlock@mmBoundTemplate@@QAEXXZ
    inline void Unlock()
    {
        return stub<member_func_t<void, mmBoundTemplate>>(0x50D200, this);
    }

    // 0x50D220 | ?ComputeEdgeNormals@mmBoundTemplate@@QAEXXZ
    inline void ComputeEdgeNormals()
    {
        return stub<member_func_t<void, mmBoundTemplate>>(0x50D220, this);
    }

    // 0x50D6B0 | ?MakeTable@mmBoundTemplate@@AAEXHHH@Z
    inline void MakeTable(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmBoundTemplate, int32_t, int32_t, int32_t>>(0x50D6B0, this, arg1, arg2, arg3);
    }

    // 0x50D8A0 | ?DoMakeTable@mmBoundTemplate@@AAEXHHH@Z
    inline void DoMakeTable(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmBoundTemplate, int32_t, int32_t, int32_t>>(0x50D8A0, this, arg1, arg2, arg3);
    }

    // 0x50DDC0 | ?AddIndex@mmBoundTemplate@@QAEXHHH@Z
    inline void AddIndex(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmBoundTemplate, int32_t, int32_t, int32_t>>(0x50DDC0, this, arg1, arg2, arg3);
    }

    // 0x50DEB0 | ?PlotLine@mmBoundTemplate@@QAEXVVector3@@0@Z
    inline void PlotLine(class Vector3 arg1, class Vector3 arg2)
    {
        return stub<member_func_t<void, mmBoundTemplate, class Vector3, class Vector3>>(0x50DEB0, this, arg1, arg2);
    }

    // 0x50DFC0 | ?PlotSpan@mmBoundTemplate@@QAEXHHH@Z
    inline void PlotSpan(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmBoundTemplate, int32_t, int32_t, int32_t>>(0x50DFC0, this, arg1, arg2, arg3);
    }

    // 0x6E17B4 | ?WinID@mmBoundTemplate@@2HA
    static inline extern_var(0x6E17B4, int32_t, WinID);

    // 0x6E17BC | ?NumIndexs@mmBoundTemplate@@2HA
    static inline extern_var(0x6E17BC, int32_t, NumIndexs);

    // 0x6E17C8 | ?DrawGrid@mmBoundTemplate@@2HA
    static inline extern_var(0x6E17C8, int32_t, DrawGrid);

    // 0x6E1850 | ?ConstructionTable@mmBoundTemplate@@2PAGA
    static inline extern_var(0x6E1850, uint16_t*, ConstructionTable);

    // 0x6E1854 | ?MaxPerBucket@mmBoundTemplate@@2HA
    static inline extern_var(0x6E1854, int32_t, MaxPerBucket);
};
