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

// agi:mtldef

#include "hooking.h"

class agiMtlParameters
{
public:
    // 0x53F9D0 | ??0agiMtlParameters@@QAE@XZ
    inline agiMtlParameters()
    {
        stub<member_func_t<void, agiMtlParameters>>(0x53F9D0, this);
    }

    // 0x53FA20 | ?Load@agiMtlParameters@@QAEXPAVStream@@@Z
    inline void Load(class Stream* arg1)
    {
        return stub<member_func_t<void, agiMtlParameters, class Stream*>>(0x53FA20, this, arg1);
    }

    // 0x53FA90 | ?Save@agiMtlParameters@@QAEXPAVStream@@@Z
    inline void Save(class Stream* arg1)
    {
        return stub<member_func_t<void, agiMtlParameters, class Stream*>>(0x53FA90, this, arg1);
    }

    // 0x53FB00 | ??4agiMtlParameters@@QAEXABV0@@Z
    inline void operator=(class agiMtlParameters const& arg1)
    {
        return stub<member_func_t<void, agiMtlParameters, class agiMtlParameters const&>>(0x53FB00, this, arg1);
    }
};

class agiMtlDef : agiRefreshable
{
public:
    // agiMtlDef::`vftable' @ 0x595DD8

    // 0x53FB20 | ??0agiMtlDef@@IAE@PAVagiPipeline@@@Z
    inline agiMtlDef(class agiPipeline* arg1)
    {
        stub<member_func_t<void, agiMtlDef, class agiPipeline*>>(0x53FB20, this, arg1);
    }

    // 0x53FB70 | ?Init@agiMtlDef@@QAEHABVagiMtlParameters@@@Z
    inline int32_t Init(class agiMtlParameters const& arg1)
    {
        return stub<member_func_t<int32_t, agiMtlDef, class agiMtlParameters const&>>(0x53FB70, this, arg1);
    }

    // 0x567350 | __purecall
    inline void EndGfx() override
    {
        return stub<member_func_t<void, agiMtlDef>>(0x567350, this);
    }

    // 0x53FC50 | ?GetName@agiMtlDef@@UAEPADXZ
    inline char* GetName() override
    {
        return stub<member_func_t<char*, agiMtlDef>>(0x53FC50, this);
    }

    // 0x53FBA0 | ??1agiMtlDef@@MAE@XZ
    inline ~agiMtlDef() override
    {
        stub<member_func_t<void, agiMtlDef>>(0x53FBA0, this);
    }

    // 0x567350 | __purecall
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, agiMtlDef>>(0x567350, this);
    }
};
