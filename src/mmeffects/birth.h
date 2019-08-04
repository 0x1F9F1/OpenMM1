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
    mmeffects:birth

    0x4F2350 | public: __thiscall asBirthRule::asBirthRule(void) | ??0asBirthRule@@QAE@XZ
    0x4F2400 | public: void __thiscall asBirthRule::InitSpark(struct asSparkInfo *,struct asSparkPos *) | ?InitSpark@asBirthRule@@QAEXPAUasSparkInfo@@PAUasSparkPos@@@Z
    0x4F2680 | public: void __thiscall asBirthRule::AddWidgets(class Bank *) | ?AddWidgets@asBirthRule@@QAEXPAVBank@@@Z
    0x4F2690 | public: static void __cdecl asBirthRule::DeclareFields(void) | ?DeclareFields@asBirthRule@@SAXXZ
    0x4F2A10 | public: virtual class MetaClass * __thiscall asBirthRule::GetClass(void) | ?GetClass@asBirthRule@@UAEPAVMetaClass@@XZ
    0x4F2A20 | public: virtual void * __thiscall asBirthRule::`vector deleting destructor'(unsigned int) | ??_EasBirthRule@@UAEPAXI@Z
    0x5950D8 | const asBirthRule::`vftable' | ??_7asBirthRule@@6B@
    0x67B8A8 | class MetaClass asBirthRuleMetaClass | ?asBirthRuleMetaClass@@3VMetaClass@@A
    0x4F28F0 | void * __cdecl new_asBirthRule(int) | ?new_asBirthRule@@YAPAXH@Z
    0x4F29C0 | void __cdecl delete_asBirthRule(void *,int) | ?delete_asBirthRule@@YAXPAXH@Z
*/

// 0x67B8A8 | ?asBirthRuleMetaClass@@3VMetaClass@@A
inline extern_var(0x67B8A8, class MetaClass, asBirthRuleMetaClass);

// 0x4F28F0 | ?new_asBirthRule@@YAPAXH@Z
// 0x4F29C0 | ?delete_asBirthRule@@YAXPAXH@Z

class asBirthRule : asNode
{
public:
    // asBirthRule::`vftable' @ 0x5950D8

    // 0x4F2350 | ??0asBirthRule@@QAE@XZ
    inline asBirthRule()
    {
        // stub<member_func_t<void, asBirthRule>>(0x4F2350, this);

        unimplemented();
    }

    // 0x4F2400 | ?InitSpark@asBirthRule@@QAEXPAUasSparkInfo@@PAUasSparkPos@@@Z
    inline void InitSpark(struct asSparkInfo* arg1, struct asSparkPos* arg2)
    {
        return stub<member_func_t<void, asBirthRule, struct asSparkInfo*, struct asSparkPos*>>(
            0x4F2400, this, arg1, arg2);
    }

    // 0x4F2680 | ?AddWidgets@asBirthRule@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, asBirthRule, class Bank*>>(0x4F2680, this, arg1);
    }

    // 0x4F2690 | ?DeclareFields@asBirthRule@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4F2690);
    }

    // 0x44D600 | ??1asBirthRule@@UAE@XZ
    inline ~asBirthRule() override = 0
    {
        // stub<member_func_t<void, asBirthRule>>(0x44D600, this);

        unimplemented();
    }

    // 0x4F2A10 | ?GetClass@asBirthRule@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, asBirthRule>>(0x4F2A10, this);
    }
};
