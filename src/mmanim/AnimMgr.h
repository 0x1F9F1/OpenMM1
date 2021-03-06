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
    mmanim:AnimMgr

    0x4B6020 | public: __thiscall mmAnimMgr::mmAnimMgr(void) | ??0mmAnimMgr@@QAE@XZ
    0x4B60A0 | public: virtual __thiscall mmAnimMgr::~mmAnimMgr(void) | ??1mmAnimMgr@@UAE@XZ
    0x4B6100 | public: int __thiscall mmAnimMgr::Init(char *,class mmInstance *,class mmInstance * *,int) | ?Init@mmAnimMgr@@QAEHPADPAVmmInstance@@PAPAV2@H@Z
    0x4B62B0 | public: virtual void __thiscall mmAnimMgr::Update(void) | ?Update@mmAnimMgr@@UAEXXZ
    0x4B62C0 | public: void __thiscall mmAnimMgr::TestDOFAct(int) | ?TestDOFAct@mmAnimMgr@@QAEXH@Z
    0x4B62D0 | public: void __thiscall mmAnimMgr::AirlinerSwap(void) | ?AirlinerSwap@mmAnimMgr@@QAEXXZ
    0x4B6310 | public: void __thiscall mmAnimMgr::UFOSwap(void) | ?UFOSwap@mmAnimMgr@@QAEXXZ
    0x4B6350 | public: static void __cdecl mmAnimMgr::DeclareFields(void) | ?DeclareFields@mmAnimMgr@@SAXXZ
    0x4B64C0 | public: virtual class MetaClass * __thiscall mmAnimMgr::GetClass(void) | ?GetClass@mmAnimMgr@@UAEPAVMetaClass@@XZ
    0x4B64D0 | public: virtual void * __thiscall mmAnimSpline::`vector deleting destructor'(unsigned int) | ??_EmmAnimSpline@@UAEPAXI@Z
    0x4B6530 | public: virtual void * __thiscall mmAnimMgr::`vector deleting destructor'(unsigned int) | ??_EmmAnimMgr@@UAEPAXI@Z
    0x593EF8 | const mmAnimMgr::`vftable' | ??_7mmAnimMgr@@6B@
    0x668090 | class MetaClass mmAnimMgrMetaClass | ?mmAnimMgrMetaClass@@3VMetaClass@@A
    0x4B63A0 | void * __cdecl new_mmAnimMgr(int) | ?new_mmAnimMgr@@YAPAXH@Z
    0x4B6470 | void __cdecl delete_mmAnimMgr(void *,int) | ?delete_mmAnimMgr@@YAXPAXH@Z
*/

// 0x668090 | ?mmAnimMgrMetaClass@@3VMetaClass@@A
inline extern_var(0x668090, class MetaClass, mmAnimMgrMetaClass);

// 0x4B63A0 | ?new_mmAnimMgr@@YAPAXH@Z
// 0x4B6470 | ?delete_mmAnimMgr@@YAXPAXH@Z

struct mmAnimMgr : asNode
{
public:
    // mmAnimMgr::`vftable' @ 0x593EF8

    // 0x4B6020 | ??0mmAnimMgr@@QAE@XZ
    inline mmAnimMgr()
    {
        // stub<member_func_t<void, mmAnimMgr>>(0x4B6020, this);

        unimplemented();
    }

    // 0x4B6100 | ?Init@mmAnimMgr@@QAEHPADPAVmmInstance@@PAPAV2@H@Z
    inline int32_t Init(char* arg1, class mmInstance* arg2, class mmInstance** arg3, int32_t arg4)
    {
        return stub<member_func_t<int32_t, mmAnimMgr, char*, class mmInstance*, class mmInstance**, int32_t>>(
            0x4B6100, this, arg1, arg2, arg3, arg4);
    }

    // 0x4B62C0 | ?TestDOFAct@mmAnimMgr@@QAEXH@Z
    inline void TestDOFAct(int32_t arg1)
    {
        return stub<member_func_t<void, mmAnimMgr, int32_t>>(0x4B62C0, this, arg1);
    }

    // 0x4B62D0 | ?AirlinerSwap@mmAnimMgr@@QAEXXZ
    inline void AirlinerSwap()
    {
        return stub<member_func_t<void, mmAnimMgr>>(0x4B62D0, this);
    }

    // 0x4B6310 | ?UFOSwap@mmAnimMgr@@QAEXXZ
    inline void UFOSwap()
    {
        return stub<member_func_t<void, mmAnimMgr>>(0x4B6310, this);
    }

    // 0x4B6350 | ?DeclareFields@mmAnimMgr@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4B6350);
    }

    // 0x4B60A0 | ??1mmAnimMgr@@UAE@XZ
    inline ~mmAnimMgr() override = 0
    {
        // stub<member_func_t<void, mmAnimMgr>>(0x4B60A0, this);

        unimplemented();
    }

    // 0x4B64C0 | ?GetClass@mmAnimMgr@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, mmAnimMgr>>(0x4B64C0, this);
    }

    // 0x4B62B0 | ?Update@mmAnimMgr@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmAnimMgr>>(0x4B62B0, this);
    }
};
