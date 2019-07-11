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

// arts7:camera

#include "hooking.h"

// 0x6F2BE8 | ?asCameraMetaClass@@3VMetaClass@@A
inline extern_var(0x6F2BE8, class MetaClass, asCameraMetaClass);

// 0x6F2C10 | ?VW@@3PAVagiViewport@@A
inline extern_var(0x6F2C10, class agiViewport*, VW);

// 0x514160 | ?new_asCamera@@YAPAXH@Z
inline void* new_asCamera(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x514160, arg1);
}

// 0x514230 | ?delete_asCamera@@YAXPAXH@Z
inline void delete_asCamera(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x514230, arg1, arg2);
}

class asCamera : asNode
{
public:
    // asCamera::`vftable' @ 0x5954B8

    // 0x512ED0 | ??0asCamera@@QAE@XZ
    inline asCamera()
    {
        stub<member_func_t<void, asCamera>>(0x512ED0, this);
    }

    // 0x513390 | ?SetClipArea@asCamera@@QAEXMMMM@Z
    inline void SetClipArea(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, asCamera, float, float, float, float>>(0x513390, this, arg1, arg2, arg3, arg4);
    }

    // 0x5134C0 | ?SetLighting@asCamera@@QAEXH@Z
    inline void SetLighting(int32_t arg1)
    {
        return stub<member_func_t<void, asCamera, int32_t>>(0x5134C0, this, arg1);
    }

    // 0x5134E0 | ?SetWorld@asCamera@@QAEXAAVMatrix34@@@Z
    inline void SetWorld(class Matrix34& arg1)
    {
        return stub<member_func_t<void, asCamera, class Matrix34&>>(0x5134E0, this, arg1);
    }

    // 0x513500 | ?GetNearClip@asCamera@@QAEXPAVVector3@@AAVMatrix34@@W4kNearClip@1@@Z
    inline void GetNearClip(class Vector3* arg1, class Matrix34& arg2, enum asCamera::kNearClip arg3)
    {
        return stub<member_func_t<void, asCamera, class Vector3*, class Matrix34&, enum asCamera::kNearClip>>(
            0x513500, this, arg1, arg2, arg3);
    }

    // 0x513A60 | ?DrawBegin@asCamera@@QAEXXZ
    inline void DrawBegin()
    {
        return stub<member_func_t<void, asCamera>>(0x513A60, this);
    }

    // 0x513C40 | ?DrawEnd@asCamera@@QAEXXZ
    inline void DrawEnd()
    {
        return stub<member_func_t<void, asCamera>>(0x513C40, this);
    }

    // 0x513CB0 | ?SetViewport@asCamera@@QAEXMMMMH@Z
    inline void SetViewport(float arg1, float arg2, float arg3, float arg4, int32_t arg5)
    {
        return stub<member_func_t<void, asCamera, float, float, float, float, int32_t>>(
            0x513CB0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x513D00 | ?SetView@asCamera@@QAEXMMMM@Z
    inline void SetView(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, asCamera, float, float, float, float>>(0x513D00, this, arg1, arg2, arg3, arg4);
    }

    // 0x513D50 | ?SetFog@asCamera@@QAEXMMMM@Z
    inline void SetFog(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, asCamera, float, float, float, float>>(0x513D50, this, arg1, arg2, arg3, arg4);
    }

    // 0x513D80 | ?SetUnderlay@asCamera@@QAEXPAD@Z
    inline void SetUnderlay(char* arg1)
    {
        return stub<member_func_t<void, asCamera, char*>>(0x513D80, this, arg1);
    }

    // 0x513DC0 | ?SetUnderlayCB@asCamera@@QAEXPAVagiBitmap@@PAVCallback@@@Z
    inline void SetUnderlayCB(class agiBitmap* arg1, class Callback* arg2)
    {
        return stub<member_func_t<void, asCamera, class agiBitmap*, class Callback*>>(0x513DC0, this, arg1, arg2);
    }

    // 0x513DE0 | ?GetViewportWidth@asCamera@@QAEHXZ
    inline int32_t GetViewportWidth()
    {
        return stub<member_func_t<int32_t, asCamera>>(0x513DE0, this);
    }

    // 0x513E00 | ?GetViewportHeight@asCamera@@QAEHXZ
    inline int32_t GetViewportHeight()
    {
        return stub<member_func_t<int32_t, asCamera>>(0x513E00, this);
    }

    // 0x513E20 | ?FadeOut@asCamera@@QAEXMH@Z
    inline void FadeOut(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, asCamera, float, int32_t>>(0x513E20, this, arg1, arg2);
    }

    // 0x513E80 | ?FadeIn@asCamera@@QAEXMH@Z
    inline void FadeIn(float arg1, int32_t arg2)
    {
        return stub<member_func_t<void, asCamera, float, int32_t>>(0x513E80, this, arg1, arg2);
    }

    // 0x513EE0 | ?FileIO@asCamera@@QAEXPAVMiniParser@@@Z
    inline void FileIO(class MiniParser* arg1)
    {
        return stub<member_func_t<void, asCamera, class MiniParser*>>(0x513EE0, this, arg1);
    }

    // 0x513EF0 | ?SphereVisible@asCamera@@QAEMABVVector3@@MPAM@Z
    inline float SphereVisible(class Vector3 const& arg1, float arg2, float* arg3)
    {
        return stub<member_func_t<float, asCamera, class Vector3 const&, float, float*>>(
            0x513EF0, this, arg1, arg2, arg3);
    }

    // 0x514080 | ?SetAmbient@asCamera@@QAEXABVVector3@@@Z
    inline void SetAmbient(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, asCamera, class Vector3 const&>>(0x514080, this, arg1);
    }

    // 0x5140C0 | ?SetMonochrome@asCamera@@QAEXH@Z
    inline void SetMonochrome(int32_t arg1)
    {
        return stub<member_func_t<void, asCamera, int32_t>>(0x5140C0, this, arg1);
    }

    // 0x5140E0 | ?Regen@asCamera@@AAEXXZ
    inline void Regen()
    {
        return stub<member_func_t<void, asCamera>>(0x5140E0, this);
    }

    // 0x514100 | ?AddWidgets@asCamera@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, asCamera, class Bank*>>(0x514100, this, arg1);
    }

    // 0x514110 | ?DeclareFields@asCamera@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x514110);
    }

    // 0x512E40 | ??1asCamera@@UAE@XZ
    inline ~asCamera() override
    {
        stub<member_func_t<void, asCamera>>(0x512E40, this);
    }

    // 0x514280 | ?GetClass@asCamera@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asCamera>>(0x514280, this);
    }

    // 0x513080 | ?Update@asCamera@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asCamera>>(0x513080, this);
    }
};
