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
    mmeffects:mmtext

    0x4F0250 | void __cdecl ddGDIFlip(void) | ?ddGDIFlip@@YAXXZ
    0x4F0260 | public: __thiscall mmText::mmText(void) | ??0mmText@@QAE@XZ
    0x4F0270 | public: __thiscall mmText::~mmText(void) | ??1mmText@@QAE@XZ
    0x4F0280 | public: static void * __cdecl mmText::CreateLocFont(struct LocString *,int) | ?CreateLocFont@mmText@@SAPAXPAULocString@@H@Z
    0x4F0350 | public: static void * __cdecl mmText::CreateFont(char *,int) | ?CreateFont@mmText@@SAPAXPADH@Z
    0x4F0380 | public: static void __cdecl mmText::DeleteFont(void *) | ?DeleteFont@mmText@@SAXPAX@Z
    0x4F0390 | public: static void * __cdecl mmText::GetDC(class agiSurfaceDesc *) | ?GetDC@mmText@@SAPAXPAVagiSurfaceDesc@@@Z
    0x4F0430 | public: static void __cdecl mmText::ReleaseDC(void) | ?ReleaseDC@mmText@@SAXXZ
    0x4F04E0 | public: static class agiBitmap * __cdecl mmText::CreateFitBitmap(char *,void *,int,int) | ?CreateFitBitmap@mmText@@SAPAVagiBitmap@@PADPAXHH@Z
    0x4F0700 | public: void __thiscall mmText::Draw(class agiSurfaceDesc *,float,float,char *,void *) | ?Draw@mmText@@QAEXPAVagiSurfaceDesc@@MMPADPAX@Z
    0x4F0790 | public: void __thiscall mmText::Draw2(class agiSurfaceDesc *,float,float,char *,void *,unsigned int) | ?Draw2@mmText@@QAEXPAVagiSurfaceDesc@@MMPADPAXI@Z
    0x4F0880 | public: __thiscall mmTextNode::mmTextNode(void) | ??0mmTextNode@@QAE@XZ
    0x4F0900 | public: virtual __thiscall mmTextNode::~mmTextNode(void) | ??1mmTextNode@@UAE@XZ
    0x4F0970 | public: void __thiscall mmTextNode::Init(float,float,float,float,int,int) | ?Init@mmTextNode@@QAEXMMMMHH@Z
    0x4F0AC0 | public: void __thiscall mmTextNode::SetBGColor(class Vector4 &) | ?SetBGColor@mmTextNode@@QAEXAAVVector4@@@Z
    0x4F0B20 | public: void __thiscall mmTextNode::SetFGColor(class Vector4 &) | ?SetFGColor@mmTextNode@@QAEXAAVVector4@@@Z
    0x4F0B80 | public: void __thiscall mmTextNode::SetHlColor(class Vector4 &) | ?SetHlColor@mmTextNode@@QAEXAAVVector4@@@Z
    0x4F0BE0 | public: unsigned int __thiscall mmTextNode::GetFGColor(void) | ?GetFGColor@mmTextNode@@QAEIXZ
    0x4F0BF0 | public: void __thiscall mmTextNode::SetEffects(int,int) | ?SetEffects@mmTextNode@@QAEXHH@Z
    0x4F0C40 | public: int __thiscall mmTextNode::GetEffects(int) | ?GetEffects@mmTextNode@@QAEHH@Z
    0x4F0C70 | public: void __thiscall mmTextNode::GetTextDimensions(void *,struct LocString *,float &,float &) | ?GetTextDimensions@mmTextNode@@QAEXPAXPAULocString@@AAM2@Z
    0x4F0DB0 | public: void __thiscall mmTextNode::SetTextPosition(int,float,float) | ?SetTextPosition@mmTextNode@@QAEXHMM@Z
    0x4F0E30 | public: int __thiscall mmTextNode::AddText(void *,struct LocString *,int,float,float) | ?AddText@mmTextNode@@QAEHPAXPAULocString@@HMM@Z
    0x4F0F40 | public: void __thiscall mmTextNode::SetString(int,struct LocString *) | ?SetString@mmTextNode@@QAEXHPAULocString@@@Z
    0x4F0FC0 | public: void __thiscall mmTextNode::SetPosition(int,float,float) | ?SetPosition@mmTextNode@@QAEXHMM@Z
    0x4F1050 | public: void __cdecl mmTextNode::Printf(char const *,...) | ?Printf@mmTextNode@@QAAXPBDZZ
    0x4F1080 | public: virtual void __thiscall mmTextNode::Update(void) | ?Update@mmTextNode@@UAEXXZ
    0x4F10B0 | public: void __thiscall mmTextNode::RenderText(class agiSurfaceDesc *,struct mmTextData *,int,unsigned int) | ?RenderText@mmTextNode@@QAEXPAVagiSurfaceDesc@@PAUmmTextData@@HI@Z
    0x4F1300 | public: virtual void __thiscall mmTextNode::Cull(void) | ?Cull@mmTextNode@@UAEXXZ
    0x4F1410 | public: virtual void * __thiscall mmTextNode::`scalar deleting destructor'(unsigned int) | ??_GmmTextNode@@UAEPAXI@Z
    0x594FE8 | const mmTextNode::`vftable' | ??_7mmTextNode@@6B@
*/

#include "hooking.h"

// 0x4F0250 | ?ddGDIFlip@@YAXXZ
inline void ddGDIFlip()
{
    return stub<cdecl_t<void>>(0x4F0250);
}

class mmTextNode : asNode
{
public:
    // mmTextNode::`vftable' @ 0x594FE8

    // 0x4F0880 | ??0mmTextNode@@QAE@XZ
    inline mmTextNode()
    {
        stub<member_func_t<void, mmTextNode>>(0x4F0880, this);
    }

    // 0x4F0970 | ?Init@mmTextNode@@QAEXMMMMHH@Z
    inline void Init(float arg1, float arg2, float arg3, float arg4, int32_t arg5, int32_t arg6)
    {
        return stub<member_func_t<void, mmTextNode, float, float, float, float, int32_t, int32_t>>(
            0x4F0970, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4F0AC0 | ?SetBGColor@mmTextNode@@QAEXAAVVector4@@@Z
    inline void SetBGColor(class Vector4& arg1)
    {
        return stub<member_func_t<void, mmTextNode, class Vector4&>>(0x4F0AC0, this, arg1);
    }

    // 0x4F0B20 | ?SetFGColor@mmTextNode@@QAEXAAVVector4@@@Z
    inline void SetFGColor(class Vector4& arg1)
    {
        return stub<member_func_t<void, mmTextNode, class Vector4&>>(0x4F0B20, this, arg1);
    }

    // 0x4F0B80 | ?SetHlColor@mmTextNode@@QAEXAAVVector4@@@Z
    inline void SetHlColor(class Vector4& arg1)
    {
        return stub<member_func_t<void, mmTextNode, class Vector4&>>(0x4F0B80, this, arg1);
    }

    // 0x4F0BE0 | ?GetFGColor@mmTextNode@@QAEIXZ
    inline uint32_t GetFGColor()
    {
        return stub<member_func_t<uint32_t, mmTextNode>>(0x4F0BE0, this);
    }

    // 0x4F0BF0 | ?SetEffects@mmTextNode@@QAEXHH@Z
    inline void SetEffects(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmTextNode, int32_t, int32_t>>(0x4F0BF0, this, arg1, arg2);
    }

    // 0x4F0C40 | ?GetEffects@mmTextNode@@QAEHH@Z
    inline int32_t GetEffects(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmTextNode, int32_t>>(0x4F0C40, this, arg1);
    }

    // 0x4F0C70 | ?GetTextDimensions@mmTextNode@@QAEXPAXPAULocString@@AAM2@Z
    inline void GetTextDimensions(void* arg1, struct LocString* arg2, float& arg3, float& arg4)
    {
        return stub<member_func_t<void, mmTextNode, void*, struct LocString*, float&, float&>>(
            0x4F0C70, this, arg1, arg2, arg3, arg4);
    }

    // 0x4F0DB0 | ?SetTextPosition@mmTextNode@@QAEXHMM@Z
    inline void SetTextPosition(int32_t arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, mmTextNode, int32_t, float, float>>(0x4F0DB0, this, arg1, arg2, arg3);
    }

    // 0x4F0E30 | ?AddText@mmTextNode@@QAEHPAXPAULocString@@HMM@Z
    inline int32_t AddText(void* arg1, struct LocString* arg2, int32_t arg3, float arg4, float arg5)
    {
        return stub<member_func_t<int32_t, mmTextNode, void*, struct LocString*, int32_t, float, float>>(
            0x4F0E30, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4F0F40 | ?SetString@mmTextNode@@QAEXHPAULocString@@@Z
    inline void SetString(int32_t arg1, struct LocString* arg2)
    {
        return stub<member_func_t<void, mmTextNode, int32_t, struct LocString*>>(0x4F0F40, this, arg1, arg2);
    }

    // 0x4F0FC0 | ?SetPosition@mmTextNode@@QAEXHMM@Z
    inline void SetPosition(int32_t arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, mmTextNode, int32_t, float, float>>(0x4F0FC0, this, arg1, arg2, arg3);
    }

    // 0x4F1050 | ?Printf@mmTextNode@@QAAXPBDZZ
    // Skipped (Variable Arguments)

    // 0x4F10B0 | ?RenderText@mmTextNode@@QAEXPAVagiSurfaceDesc@@PAUmmTextData@@HI@Z
    inline void RenderText(class agiSurfaceDesc* arg1, struct mmTextData* arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, mmTextNode, class agiSurfaceDesc*, struct mmTextData*, int32_t, uint32_t>>(
            0x4F10B0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4F0900 | ??1mmTextNode@@UAE@XZ
    inline ~mmTextNode() override
    {
        stub<member_func_t<void, mmTextNode>>(0x4F0900, this);
    }

    // 0x4F1300 | ?Cull@mmTextNode@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmTextNode>>(0x4F1300, this);
    }

    // 0x4F1080 | ?Update@mmTextNode@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmTextNode>>(0x4F1080, this);
    }
};

struct mmText
{
public:
    // 0x4F0260 | ??0mmText@@QAE@XZ
    inline mmText()
    {
        stub<member_func_t<void, mmText>>(0x4F0260, this);
    }

    // 0x4F0270 | ??1mmText@@QAE@XZ
    inline ~mmText()
    {
        stub<member_func_t<void, mmText>>(0x4F0270, this);
    }

    // 0x4F0280 | ?CreateLocFont@mmText@@SAPAXPAULocString@@H@Z
    static inline void* CreateLocFont(struct LocString* arg1, int32_t arg2)
    {
        return stub<cdecl_t<void*, struct LocString*, int32_t>>(0x4F0280, arg1, arg2);
    }

    // 0x4F0350 | ?CreateFont@mmText@@SAPAXPADH@Z
    static inline void* CreateFont(char* arg1, int32_t arg2)
    {
        return stub<cdecl_t<void*, char*, int32_t>>(0x4F0350, arg1, arg2);
    }

    // 0x4F0380 | ?DeleteFont@mmText@@SAXPAX@Z
    static inline void DeleteFont(void* arg1)
    {
        return stub<cdecl_t<void, void*>>(0x4F0380, arg1);
    }

    // 0x4F0390 | ?GetDC@mmText@@SAPAXPAVagiSurfaceDesc@@@Z
    static inline void* GetDC(class agiSurfaceDesc* arg1)
    {
        return stub<cdecl_t<void*, class agiSurfaceDesc*>>(0x4F0390, arg1);
    }

    // 0x4F0430 | ?ReleaseDC@mmText@@SAXXZ
    static inline void ReleaseDC()
    {
        return stub<cdecl_t<void>>(0x4F0430);
    }

    // 0x4F04E0 | ?CreateFitBitmap@mmText@@SAPAVagiBitmap@@PADPAXHH@Z
    static inline class agiBitmap* CreateFitBitmap(char* arg1, void* arg2, int32_t arg3, int32_t arg4)
    {
        return stub<cdecl_t<class agiBitmap*, char*, void*, int32_t, int32_t>>(0x4F04E0, arg1, arg2, arg3, arg4);
    }

    // 0x4F0700 | ?Draw@mmText@@QAEXPAVagiSurfaceDesc@@MMPADPAX@Z
    inline void Draw(class agiSurfaceDesc* arg1, float arg2, float arg3, char* arg4, void* arg5)
    {
        return stub<member_func_t<void, mmText, class agiSurfaceDesc*, float, float, char*, void*>>(
            0x4F0700, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4F0790 | ?Draw2@mmText@@QAEXPAVagiSurfaceDesc@@MMPADPAXI@Z
    inline void Draw2(class agiSurfaceDesc* arg1, float arg2, float arg3, char* arg4, void* arg5, uint32_t arg6)
    {
        return stub<member_func_t<void, mmText, class agiSurfaceDesc*, float, float, char*, void*, uint32_t>>(
            0x4F0790, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }
};
