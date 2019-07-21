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
    agi:lmodel

    0x53DBC0 | public: __thiscall agiLightModelParameters::agiLightModelParameters(void) | ??0agiLightModelParameters@@QAE@XZ
    0x53DBF0 | public: void __thiscall agiLightModelParameters::operator=(class agiLightModelParameters const &) | ??4agiLightModelParameters@@QAEXABV0@@Z
    0x53DC10 | public: __thiscall agiLightModelParameters::~agiLightModelParameters(void) | ??1agiLightModelParameters@@QAE@XZ
    0x53DC20 | protected: __thiscall agiLightModel::agiLightModel(class agiPipeline *) | ??0agiLightModel@@IAE@PAVagiPipeline@@@Z
    0x53DC70 | public: int __thiscall agiLightModel::Init(class agiLightModelParameters const &) | ?Init@agiLightModel@@QAEHABVagiLightModelParameters@@@Z
    0x53DCA0 | public: virtual __thiscall agiLightModel::~agiLightModel(void) | ??1agiLightModel@@UAE@XZ
    0x53DCF0 | public: virtual char * __thiscall agiLightModel::GetName(void) | ?GetName@agiLightModel@@UAEPADXZ
    0x53DD10 | public: virtual void * __thiscall agiLightModel::`scalar deleting destructor'(unsigned int) | ??_GagiLightModel@@UAEPAXI@Z
    0x53DD10 | public: virtual void * __thiscall agiLightModel::`vector deleting destructor'(unsigned int) | ??_EagiLightModel@@UAEPAXI@Z
    0x595CB0 | const agiLightModel::`vftable' | ??_7agiLightModel@@6B@
*/

class agiLightModelParameters
{
public:
    // 0x53DBC0 | ??0agiLightModelParameters@@QAE@XZ
    inline agiLightModelParameters()
    {
        // stub<member_func_t<void, agiLightModelParameters>>(0x53DBC0, this);

        unimplemented();
    }

    // 0x53DBF0 | ??4agiLightModelParameters@@QAEXABV0@@Z
    inline void operator=(class agiLightModelParameters const& arg1)
    {
        return stub<member_func_t<void, agiLightModelParameters, class agiLightModelParameters const&>>(
            0x53DBF0, this, arg1);
    }

    // 0x53DC10 | ??1agiLightModelParameters@@QAE@XZ
    inline ~agiLightModelParameters()
    {
        stub<member_func_t<void, agiLightModelParameters>>(0x53DC10, this);
    }
};

class agiLightModel : agiRefreshable
{
public:
    // agiLightModel::`vftable' @ 0x595CB0

    // 0x53DC20 | ??0agiLightModel@@IAE@PAVagiPipeline@@@Z
    inline agiLightModel(class agiPipeline* arg1)
    {
        // stub<member_func_t<void, agiLightModel, class agiPipeline*>>(0x53DC20, this, arg1);

        unimplemented();
    }

    // 0x53DC70 | ?Init@agiLightModel@@QAEHABVagiLightModelParameters@@@Z
    inline int32_t Init(class agiLightModelParameters const& arg1)
    {
        return stub<member_func_t<int32_t, agiLightModel, class agiLightModelParameters const&>>(0x53DC70, this, arg1);
    }

    // 0x53DCF0 | ?GetName@agiLightModel@@UAEPADXZ
    inline char* GetName() override
    {
        return stub<member_func_t<char*, agiLightModel>>(0x53DCF0, this);
    }

    // 0x53DCA0 | ??1agiLightModel@@UAE@XZ
    inline ~agiLightModel() override = 0
    {
        // stub<member_func_t<void, agiLightModel>>(0x53DCA0, this);

        unimplemented();
    }
};
