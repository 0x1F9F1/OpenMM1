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

// agiworld:meshrend

#include "hooking.h"

// 0x4F4B60 | ?SetClipMode@@YAXH@Z
inline void SetClipMode(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x4F4B60, arg1);
}

// 0x4F5E60 | ?EyePlaneOutcode@@YAIPAEEAAVVector4@@PAVVector3@@H@Z
inline uint32_t EyePlaneOutcode(uint8_t* arg1, uint8_t arg2, class Vector4& arg3, class Vector3* arg4, int32_t arg5)
{
    return stub<cdecl_t<uint32_t, uint8_t*, uint8_t, class Vector4&, class Vector3*, int32_t>>(
        0x4F5E60, arg1, arg2, arg3, arg4, arg5);
}

// 0x4F62C0 | ?begin_invert@@YIXPAVVector4@@@Z
inline void begin_invert(class Vector4* arg1)
{
    return stub<cdecl_t<void, class Vector4*>>(0x4F62C0, arg1);
}

// 0x4F62D0 | ?end_invert@@YIXPAVVector4@@@Z
inline void end_invert(class Vector4* arg1)
{
    return stub<cdecl_t<void, class Vector4*>>(0x4F62D0, arg1);
}

// 0x5B805C | ?ShadowFudge@@3MA
inline extern_var(0x5B805C, float, ShadowFudge);

// 0x5B8060 | ?ShadowColor@@3IA
inline extern_var(0x5B8060, uint32_t, ShadowColor);

// 0x5B8064 | ?SphMapColor@@3IA
inline extern_var(0x5B8064, uint32_t, SphMapColor);

// 0x5B80E8 | ?MaxCardSize@@3MA
inline extern_var(0x5B80E8, float, MaxCardSize);

// 0x69F68C | ?MinCardSize@@3MA
inline extern_var(0x69F68C, float, MinCardSize);

// 0x4F6650 | ?FullClip@@YAHPAUCV@@0H@Z
inline int32_t FullClip(struct CV* arg1, struct CV* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, struct CV*, struct CV*, int32_t>>(0x4F6650, arg1, arg2, arg3);
}

// 0x4F6700 | ?ClipNX@@YAHPAUCV@@0H@Z
inline int32_t ClipNX(struct CV* arg1, struct CV* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, struct CV*, struct CV*, int32_t>>(0x4F6700, arg1, arg2, arg3);
}

// 0x4F6820 | ?ClipNX@@YIXAAUCV@@0@Z
inline void ClipNX(struct CV& arg1, struct CV& arg2)
{
    return stub<cdecl_t<void, struct CV&, struct CV&>>(0x4F6820, arg1, arg2);
}

// 0x4F6910 | ?ClipPX@@YAHPAUCV@@0H@Z
inline int32_t ClipPX(struct CV* arg1, struct CV* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, struct CV*, struct CV*, int32_t>>(0x4F6910, arg1, arg2, arg3);
}

// 0x4F6A30 | ?ClipPX@@YIXAAUCV@@0@Z
inline void ClipPX(struct CV& arg1, struct CV& arg2)
{
    return stub<cdecl_t<void, struct CV&, struct CV&>>(0x4F6A30, arg1, arg2);
}

// 0x4F6B20 | ?ClipNY@@YAHPAUCV@@0H@Z
inline int32_t ClipNY(struct CV* arg1, struct CV* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, struct CV*, struct CV*, int32_t>>(0x4F6B20, arg1, arg2, arg3);
}

// 0x4F6C40 | ?ClipNY@@YIXAAUCV@@0@Z
inline void ClipNY(struct CV& arg1, struct CV& arg2)
{
    return stub<cdecl_t<void, struct CV&, struct CV&>>(0x4F6C40, arg1, arg2);
}

// 0x4F6D30 | ?ClipPY@@YAHPAUCV@@0H@Z
inline int32_t ClipPY(struct CV* arg1, struct CV* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, struct CV*, struct CV*, int32_t>>(0x4F6D30, arg1, arg2, arg3);
}

// 0x4F6E50 | ?ClipPY@@YIXAAUCV@@0@Z
inline void ClipPY(struct CV& arg1, struct CV& arg2)
{
    return stub<cdecl_t<void, struct CV&, struct CV&>>(0x4F6E50, arg1, arg2);
}

// 0x4F6F30 | ?ClipNZ@@YAHPAUCV@@0H@Z
inline int32_t ClipNZ(struct CV* arg1, struct CV* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, struct CV*, struct CV*, int32_t>>(0x4F6F30, arg1, arg2, arg3);
}

// 0x4F7050 | ?ClipNZ@@YIXAAUCV@@0@Z
inline void ClipNZ(struct CV& arg1, struct CV& arg2)
{
    return stub<cdecl_t<void, struct CV&, struct CV&>>(0x4F7050, arg1, arg2);
}

// 0x4F7140 | ?ClipPZ@@YAHPAUCV@@0H@Z
inline int32_t ClipPZ(struct CV* arg1, struct CV* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, struct CV*, struct CV*, int32_t>>(0x4F7140, arg1, arg2, arg3);
}

// 0x4F7260 | ?ClipPZ@@YIXAAUCV@@0@Z
inline void ClipPZ(struct CV& arg1, struct CV& arg2)
{
    return stub<cdecl_t<void, struct CV&, struct CV&>>(0x4F7260, arg1, arg2);
}

// 0x4F7340 | ?ZClipOnly@@YAHPAUCV@@0H@Z
inline int32_t ZClipOnly(struct CV* arg1, struct CV* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, struct CV*, struct CV*, int32_t>>(0x4F7340, arg1, arg2, arg3);
}

class agiMeshSet
{
public:
    // 0x4F4C00 | ?InitMtx@agiMeshSet@@KIXAAVagiViewParameters@@H@Z
    static inline void InitMtx(class agiViewParameters& arg1, int32_t arg2)
    {
        return stub<cdecl_t<void, class agiViewParameters&, int32_t>>(0x4F4C00, arg1, arg2);
    }

    // 0x4F4ED0 | ?InitLocalize@agiMeshSet@@SAXXZ
    static inline void InitLocalize()
    {
        return stub<cdecl_t<void>>(0x4F4ED0);
    }

    // 0x4F4F90 | ?Localize@agiMeshSet@@SAXAAVVector3@@0@Z
    static inline void Localize(class Vector3& arg1, class Vector3& arg2)
    {
        return stub<cdecl_t<void, class Vector3&, class Vector3&>>(0x4F4F90, arg1, arg2);
    }

    // 0x4F5040 | ?LocalizeDirection@agiMeshSet@@SAXAAVVector3@@0@Z
    static inline void LocalizeDirection(class Vector3& arg1, class Vector3& arg2)
    {
        return stub<cdecl_t<void, class Vector3&, class Vector3&>>(0x4F5040, arg1, arg2);
    }

    // 0x4F50D0 | ?Init@agiMeshSet@@SIXH@Z
    static inline void Init(int32_t arg1)
    {
        return stub<cdecl_t<void, int32_t>>(0x4F50D0, arg1);
    }

    // 0x4F5150 | ?ShadowInit@agiMeshSet@@KIXABVVector4@@ABVVector3@@@Z
    static inline void ShadowInit(class Vector4 const& arg1, class Vector3 const& arg2)
    {
        return stub<cdecl_t<void, class Vector4 const&, class Vector3 const&>>(0x4F5150, arg1, arg2);
    }

    // 0x4F5380 | ?InitViewport@agiMeshSet@@KIXAAVagiViewParameters@@@Z
    static inline void InitViewport(class agiViewParameters& arg1)
    {
        return stub<cdecl_t<void, class agiViewParameters&>>(0x4F5380, arg1);
    }

    // 0x4F5590 | ?SetFog@agiMeshSet@@SAXMH@Z
    static inline void SetFog(float arg1, int32_t arg2)
    {
        return stub<cdecl_t<void, float, int32_t>>(0x4F5590, arg1, arg2);
    }

    // 0x4F55C0 | ?Transform@agiMeshSet@@KIXPAVVector4@@PAVVector3@@H@Z
    static inline void Transform(class Vector4* arg1, class Vector3* arg2, int32_t arg3)
    {
        return stub<cdecl_t<void, class Vector4*, class Vector3*, int32_t>>(0x4F55C0, arg1, arg2, arg3);
    }

    // 0x4F5830 | ?ShadowTransform@agiMeshSet@@KIXPAVVector4@@PAVVector3@@H@Z
    static inline void ShadowTransform(class Vector4* arg1, class Vector3* arg2, int32_t arg3)
    {
        return stub<cdecl_t<void, class Vector4*, class Vector3*, int32_t>>(0x4F5830, arg1, arg2, arg3);
    }

    // 0x4F5AC0 | ?TransformOutcode@agiMeshSet@@KIIPAEPAVVector4@@PAVVector3@@H@Z
    static inline uint32_t TransformOutcode(uint8_t* arg1, class Vector4* arg2, class Vector3* arg3, int32_t arg4)
    {
        return stub<cdecl_t<uint32_t, uint8_t*, class Vector4*, class Vector3*, int32_t>>(
            0x4F5AC0, arg1, arg2, arg3, arg4);
    }

    // 0x4F5F00 | ?ShadowTransformOutcode@agiMeshSet@@KIIPAEPAVVector4@@PAVVector3@@H@Z
    static inline uint32_t ShadowTransformOutcode(uint8_t* arg1, class Vector4* arg2, class Vector3* arg3, int32_t arg4)
    {
        return stub<cdecl_t<uint32_t, uint8_t*, class Vector4*, class Vector3*, int32_t>>(
            0x4F5F00, arg1, arg2, arg3, arg4);
    }

    // 0x4F62E0 | ?BeginGfx@agiMeshSet@@AAEXXZ
    inline void BeginGfx()
    {
        return stub<member_func_t<void, agiMeshSet>>(0x4F62E0, this);
    }

    // 0x4F62F0 | ?EndGfx@agiMeshSet@@AAEXXZ
    inline void EndGfx()
    {
        return stub<member_func_t<void, agiMeshSet>>(0x4F62F0, this);
    }

    // 0x4F6300 | ?ClipTri@agiMeshSet@@IAEXHHHH@Z
    inline void ClipTri(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<void, agiMeshSet, int32_t, int32_t, int32_t, int32_t>>(
            0x4F6300, this, arg1, arg2, arg3, arg4);
    }

    // 0x4F7370 | ?Draw@agiMeshSet@@QAEHI@Z
    inline int32_t Draw(uint32_t arg1)
    {
        return stub<member_func_t<int32_t, agiMeshSet, uint32_t>>(0x4F7370, this, arg1);
    }

    // 0x4F73E0 | ?DrawShadow@agiMeshSet@@QAEXIABVVector4@@ABVVector3@@@Z
    inline void DrawShadow(uint32_t arg1, class Vector4 const& arg2, class Vector3 const& arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t, class Vector4 const&, class Vector3 const&>>(
            0x4F73E0, this, arg1, arg2, arg3);
    }

    // 0x4F7470 | ?DrawColor@agiMeshSet@@QAEHII@Z
    inline int32_t DrawColor(uint32_t arg1, uint32_t arg2)
    {
        return stub<member_func_t<int32_t, agiMeshSet, uint32_t, uint32_t>>(0x4F7470, this, arg1, arg2);
    }

    // 0x4F74E0 | ?DrawLit@agiMeshSet@@QAEHP6AXPAEPAI1PAV1@@ZI1@Z
    inline int32_t DrawLit(
        void(__cdecl* arg1)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*), uint32_t arg2, uint32_t* arg3)
    {
        return stub<member_func_t<int32_t, agiMeshSet,
            void(__cdecl*)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*), uint32_t, uint32_t*>>(
            0x4F74E0, this, arg1, arg2, arg3);
    }

    // 0x4F75A0 | ?DrawLitEnv@agiMeshSet@@QAEXP6AXPAEPAI1PAV1@@ZPAVagiTexDef@@AAVMatrix34@@I@Z
    inline void DrawLitEnv(void(__cdecl* arg1)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*),
        class agiTexDef* arg2, class Matrix34& arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, agiMeshSet, void(__cdecl*)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*),
            class agiTexDef*, class Matrix34&, uint32_t>>(0x4F75A0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4F76B0 | ?DrawLitSph@agiMeshSet@@QAEXP6AXPAEPAI1PAV1@@ZPAVagiTexDef@@I@Z
    inline void DrawLitSph(
        void(__cdecl* arg1)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*), class agiTexDef* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, void(__cdecl*)(uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*),
            class agiTexDef*, uint32_t>>(0x4F76B0, this, arg1, arg2, arg3);
    }

    // 0x4F7760 | ?Geometry@agiMeshSet@@QAEHIPAVVector3@@PAVVector4@@@Z
    inline int32_t Geometry(uint32_t arg1, class Vector3* arg2, class Vector4* arg3)
    {
        return stub<member_func_t<int32_t, agiMeshSet, uint32_t, class Vector3*, class Vector4*>>(
            0x4F7760, this, arg1, arg2, arg3);
    }

    // 0x4F7D20 | ?ShadowGeometry@agiMeshSet@@QAEHIPAVVector3@@ABVVector4@@ABV2@@Z
    inline int32_t ShadowGeometry(
        uint32_t arg1, class Vector3* arg2, class Vector4 const& arg3, class Vector3 const& arg4)
    {
        return stub<
            member_func_t<int32_t, agiMeshSet, uint32_t, class Vector3*, class Vector4 const&, class Vector3 const&>>(
            0x4F7D20, this, arg1, arg2, arg3, arg4);
    }

    // 0x4F8100 | ?FirstPass_SW_UV_CPV_DYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_SW_UV_CPV_DYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4F8100, this, arg1, arg2, arg3);
    }

    // 0x4F8700 | ?FirstPass_SW_UV_CPV_noDYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_SW_UV_CPV_noDYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4F8700, this, arg1, arg2, arg3);
    }

    // 0x4F8CE0 | ?FirstPass_SW_UV_noCPV_DYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_SW_UV_noCPV_DYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4F8CE0, this, arg1, arg2, arg3);
    }

    // 0x4F9100 | ?FirstPass_SW_UV_noCPV_noDYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_SW_UV_noCPV_noDYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4F9100, this, arg1, arg2, arg3);
    }

    // 0x4F9500 | ?FirstPass_SW_noUV_CPV_DYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_SW_noUV_CPV_DYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4F9500, this, arg1, arg2, arg3);
    }

    // 0x4F99B0 | ?FirstPass_SW_noUV_CPV_noDYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_SW_noUV_CPV_noDYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4F99B0, this, arg1, arg2, arg3);
    }

    // 0x4F9E40 | ?FirstPass_SW_noUV_noCPV_DYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_SW_noUV_noCPV_DYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4F9E40, this, arg1, arg2, arg3);
    }

    // 0x4FA110 | ?FirstPass_SW_noUV_noCPV_noDYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_SW_noUV_noCPV_noDYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4FA110, this, arg1, arg2, arg3);
    }

    // 0x4FA3C0 | ?FirstPass_HW_UV_CPV_DYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_HW_UV_CPV_DYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4FA3C0, this, arg1, arg2, arg3);
    }

    // 0x4FAB40 | ?FirstPass_HW_UV_CPV_noDYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_HW_UV_CPV_noDYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4FAB40, this, arg1, arg2, arg3);
    }

    // 0x4FB2B0 | ?FirstPass_HW_UV_noCPV_DYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_HW_UV_noCPV_DYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4FB2B0, this, arg1, arg2, arg3);
    }

    // 0x4FB850 | ?FirstPass_HW_UV_noCPV_noDYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_HW_UV_noCPV_noDYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4FB850, this, arg1, arg2, arg3);
    }

    // 0x4FBDE0 | ?FirstPass_HW_noUV_CPV_DYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_HW_noUV_CPV_DYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4FBDE0, this, arg1, arg2, arg3);
    }

    // 0x4FC440 | ?FirstPass_HW_noUV_CPV_noDYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_HW_noUV_CPV_noDYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4FC440, this, arg1, arg2, arg3);
    }

    // 0x4FCA90 | ?FirstPass_HW_noUV_noCPV_DYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_HW_noUV_noCPV_DYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4FCA90, this, arg1, arg2, arg3);
    }

    // 0x4FCF20 | ?FirstPass_HW_noUV_noCPV_noDYNTEX@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass_HW_noUV_noCPV_noDYNTEX(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4FCF20, this, arg1, arg2, arg3);
    }

    // 0x4FD390 | ?FirstPass@agiMeshSet@@QAEXPAIPAVVector2@@I@Z
    inline void FirstPass(uint32_t* arg1, class Vector2* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, class Vector2*, uint32_t>>(
            0x4FD390, this, arg1, arg2, arg3);
    }

    // 0x4FD3E0 | ?MultiTexEnvMap@agiMeshSet@@QAEXPAIIPAVagiTexDef@@AAVMatrix34@@@Z
    inline void MultiTexEnvMap(uint32_t* arg1, uint32_t arg2, class agiTexDef* arg3, class Matrix34& arg4)
    {
        return stub<member_func_t<void, agiMeshSet, uint32_t*, uint32_t, class agiTexDef*, class Matrix34&>>(
            0x4FD3E0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4FDD50 | ?EnvMap@agiMeshSet@@QAEXAAVMatrix34@@PAVagiTexDef@@I@Z
    inline void EnvMap(class Matrix34& arg1, class agiTexDef* arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, agiMeshSet, class Matrix34&, class agiTexDef*, uint32_t>>(
            0x4FDD50, this, arg1, arg2, arg3);
    }

    // 0x4FE3B0 | ?SphereMap@agiMeshSet@@QAEXPAVagiTexDef@@I@Z
    inline void SphereMap(class agiTexDef* arg1, uint32_t arg2)
    {
        return stub<member_func_t<void, agiMeshSet, class agiTexDef*, uint32_t>>(0x4FE3B0, this, arg1, arg2);
    }

    // 0x4FED50 | ?DrawNormals@agiMeshSet@@QAEXAAVVector3@@@Z
    inline void DrawNormals(class Vector3& arg1)
    {
        return stub<member_func_t<void, agiMeshSet, class Vector3&>>(0x4FED50, this, arg1);
    }

    // 0x4FEF10 | ?InitCards@agiMeshSet@@SAXAAUagiMeshCardInfo@@@Z
    static inline void InitCards(struct agiMeshCardInfo& arg1)
    {
        return stub<cdecl_t<void, struct agiMeshCardInfo&>>(0x4FEF10, arg1);
    }

    // 0x4FEF50 | ?DrawCard@agiMeshSet@@SAXAAVVector3@@MIII@Z
    static inline void DrawCard(class Vector3& arg1, float arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5)
    {
        return stub<cdecl_t<void, class Vector3&, float, uint32_t, uint32_t, uint32_t>>(
            0x4FEF50, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4FFA70 | ?DrawLines@agiMeshSet@@SAXPAVVector3@@0PAIH@Z
    static inline void DrawLines(class Vector3* arg1, class Vector3* arg2, uint32_t* arg3, int32_t arg4)
    {
        return stub<cdecl_t<void, class Vector3*, class Vector3*, uint32_t*, int32_t>>(
            0x4FFA70, arg1, arg2, arg3, arg4);
    }

    // 0x4FFEC0 | ?DrawWideLines@agiMeshSet@@SAXPAVVector3@@0PAMPAIH@Z
    static inline void DrawWideLines(
        class Vector3* arg1, class Vector3* arg2, float* arg3, uint32_t* arg4, int32_t arg5)
    {
        return stub<cdecl_t<void, class Vector3*, class Vector3*, float*, uint32_t*, int32_t>>(
            0x4FFEC0, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5B8054 | ?DepthScale@agiMeshSet@@2MA
    static inline extern_var(0x5B8054, float, DepthScale);

    // 0x5B8058 | ?DepthOffset@agiMeshSet@@2MA
    static inline extern_var(0x5B8058, float, DepthOffset);

    // 0x5B80A8 | ?DefaultQuad@agiMeshSet@@2PAUagiMeshCardVertex@@A
    static inline extern_var(0x5B80A8, struct agiMeshCardVertex*, DefaultQuad);

    // 0x67BF10 | ?indexCounts@agiMeshSet@@1PAFA
    static inline extern_var(0x67BF10, int16_t*, indexCounts);

    // 0x67C114 | ?MtxSerial@agiMeshSet@@1IA
    static inline extern_var(0x67C114, uint32_t, MtxSerial);

    // 0x67C118 | ?codes@agiMeshSet@@2PAEA
    static inline extern_var(0x67C118, uint8_t*, codes);

    // 0x680118 | ?EyePos@agiMeshSet@@2VVector3@@A
    static inline extern_var(0x680118, class Vector3, EyePos);

    // 0x680128 | ?M@agiMeshSet@@1VMatrix34@@A
    static inline extern_var(0x680128, class Matrix34, M);

    // 0x680158 | ?OffsX@agiMeshSet@@1MA
    static inline extern_var(0x680158, float, OffsX);

    // 0x683160 | ?MaxY@agiMeshSet@@1MA
    static inline extern_var(0x683160, float, MaxY);

    // 0x683180 | ?HitEyePlanes@agiMeshSet@@2PAVVector4@@A
    static inline extern_var(0x683180, class Vector4*, HitEyePlanes);

    // 0x6831A0 | ?EyePlaneCount@agiMeshSet@@2HA
    static inline extern_var(0x6831A0, int32_t, EyePlaneCount);

    // 0x6831A4 | ?MaxX@agiMeshSet@@1MA
    static inline extern_var(0x6831A4, float, MaxX);

    // 0x6831A8 | ?vertCounts@agiMeshSet@@1PAFA
    static inline extern_var(0x6831A8, int16_t*, vertCounts);

    // 0x6833A8 | ?MinY@agiMeshSet@@1MA
    static inline extern_var(0x6833A8, float, MinY);

    // 0x6833AC | ?MirrorMode@agiMeshSet@@2HA
    static inline extern_var(0x6833AC, int32_t, MirrorMode);

    // 0x6833F0 | ?fogout@agiMeshSet@@1PAEA
    static inline extern_var(0x6833F0, uint8_t*, fogout);

    // 0x6873F0 | ?ViewSerial@agiMeshSet@@1IA
    static inline extern_var(0x6873F0, uint32_t, ViewSerial);

    // 0x6873F4 | ?ProjZW@agiMeshSet@@1MA
    static inline extern_var(0x6873F4, float, ProjZW);

    // 0x6873F8 | ?EyePlanesHit@agiMeshSet@@2HA
    static inline extern_var(0x6873F8, int32_t, EyePlanesHit);

    // 0x687404 | ?HalfWidth@agiMeshSet@@1MA
    static inline extern_var(0x687404, float, HalfWidth);

    // 0x687408 | ?nextFacet@agiMeshSet@@1PAFA
    static inline extern_var(0x687408, int16_t*, nextFacet);

    // 0x68F408 | ?ProjZZ@agiMeshSet@@1MA
    static inline extern_var(0x68F408, float, ProjZZ);

    // 0x68F410 | ?LocPos@agiMeshSet@@1VVector3@@A
    static inline extern_var(0x68F410, class Vector3, LocPos);

    // 0x68F41C | ?FlipX@agiMeshSet@@2HA
    static inline extern_var(0x68F41C, int32_t, FlipX);

    // 0x68F420 | ?FogValue@agiMeshSet@@2MA
    static inline extern_var(0x68F420, float, FogValue);

    // 0x68F428 | ?firstFacet@agiMeshSet@@1PAFA
    static inline extern_var(0x68F428, int16_t*, firstFacet);

    // 0x69F658 | ?MinX@agiMeshSet@@1MA
    static inline extern_var(0x69F658, float, MinX);

    // 0x69F660 | ?EyePlanes@agiMeshSet@@2PAVVector4@@A
    static inline extern_var(0x69F660, class Vector4*, EyePlanes);

    // 0x69F680 | ?OffsY@agiMeshSet@@1MA
    static inline extern_var(0x69F680, float, OffsY);

    // 0x69F684 | ?AllowEyeBackfacing@agiMeshSet@@1HA
    static inline extern_var(0x69F684, int32_t, AllowEyeBackfacing);

    // 0x69F688 | ?HalfHeight@agiMeshSet@@1MA
    static inline extern_var(0x69F688, float, HalfHeight);

    // 0x503200 | ??0agiMeshSet@@QAE@XZ
    inline agiMeshSet()
    {
        stub<member_func_t<void, agiMeshSet>>(0x503200, this);
    }

    // 0x503220 | ??1agiMeshSet@@QAE@XZ
    inline ~agiMeshSet()
    {
        stub<member_func_t<void, agiMeshSet>>(0x503220, this);
    }

    // 0x5032B0 | ?Offset@agiMeshSet@@QAEXVVector3@@@Z
    inline void Offset(class Vector3 arg1)
    {
        return stub<member_func_t<void, agiMeshSet, class Vector3>>(0x5032B0, this, arg1);
    }

    // 0x503300 | ?ComputePlaneEquations@agiMeshSet@@QAEXXZ
    inline void ComputePlaneEquations()
    {
        return stub<member_func_t<void, agiMeshSet>>(0x503300, this);
    }

    // 0x503520 | ?PageInCallback@agiMeshSet@@CAXPAX@Z
    static inline void PageInCallback(void* arg1)
    {
        return stub<cdecl_t<void, void*>>(0x503520, arg1);
    }

    // 0x503530 | ?PageIn@agiMeshSet@@QAEXXZ
    inline void PageIn()
    {
        return stub<member_func_t<void, agiMeshSet>>(0x503530, this);
    }

    // 0x503550 | ?LockIfResident@agiMeshSet@@QAEHXZ
    inline int32_t LockIfResident()
    {
        return stub<member_func_t<int32_t, agiMeshSet>>(0x503550, this);
    }

    // 0x503580 | ?Unlock@agiMeshSet@@QAEXXZ
    inline void Unlock()
    {
        return stub<member_func_t<void, agiMeshSet>>(0x503580, this);
    }

    // 0x5035A0 | ?UnlockAndFree@agiMeshSet@@QAEXXZ
    inline void UnlockAndFree()
    {
        return stub<member_func_t<void, agiMeshSet>>(0x5035A0, this);
    }

    // 0x5035C0 | ?MakeResident@agiMeshSet@@QAEXXZ
    inline void MakeResident()
    {
        return stub<member_func_t<void, agiMeshSet>>(0x5035C0, this);
    }

    // 0x5035F0 | ?IsFullyResident@agiMeshSet@@QAEHH@Z
    inline int32_t IsFullyResident(int32_t arg1)
    {
        return stub<member_func_t<int32_t, agiMeshSet, int32_t>>(0x5035F0, this, arg1);
    }

    // 0x505050 | ?ToScreen@agiMeshSet@@KIXPAEPAVVector4@@H@Z
    static inline void ToScreen(uint8_t* arg1, class Vector4* arg2, int32_t arg3)
    {
        return stub<cdecl_t<void, uint8_t*, class Vector4*, int32_t>>(0x505050, arg1, arg2, arg3);
    }

    // 0x6A10F0 | ?out@agiMeshSet@@1PAVVector4@@A
    static inline extern_var(0x6A10F0, class Vector4*, out);

    // 0x50505E | ?ToScreen$$1@agiMeshSet@@KIXPAEPAVVector4@@H@Z
    static inline void ToScreen$$1(uint8_t* arg1, class Vector4* arg2, int32_t arg3)
    {
        return stub<cdecl_t<void, uint8_t*, class Vector4*, int32_t>>(0x50505E, arg1, arg2, arg3);
    }

    // 0x505530 | ?BinaryLoad@agiMeshSet@@QAEXPAVStream@@@Z
    inline void BinaryLoad(class Stream* arg1)
    {
        return stub<member_func_t<void, agiMeshSet, class Stream*>>(0x505530, this, arg1);
    }

    // 0x505AE0 | ?PageOutCallback@agiMeshSet@@CAXPAXH@Z
    static inline void PageOutCallback(void* arg1, int32_t arg2)
    {
        return stub<cdecl_t<void, void*, int32_t>>(0x505AE0, arg1, arg2);
    }

    // 0x505C00 | ?DoPageIn@agiMeshSet@@AAEXXZ
    inline void DoPageIn()
    {
        return stub<member_func_t<void, agiMeshSet>>(0x505C00, this);
    }
};

struct agiMeshCardInfo
{
public:
    // 0x4FED60 | ?Init@agiMeshCardInfo@@QAEXHPAUagiMeshCardVertex@@HHH@Z
    inline void Init(int32_t arg1, struct agiMeshCardVertex* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
    {
        return stub<
            member_func_t<void, agiMeshCardInfo, int32_t, struct agiMeshCardVertex*, int32_t, int32_t, int32_t>>(
            0x4FED60, this, arg1, arg2, arg3, arg4, arg5);
    }
};
