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
    agi:physdef

    0x539090 | public: void __thiscall agiPhysParameters::Load(class Stream *) | ?Load@agiPhysParameters@@QAEXPAVStream@@@Z
    0x539140 | public: void __thiscall agiPhysParameters::Save(class Stream *) | ?Save@agiPhysParameters@@QAEXPAVStream@@@Z
*/

class agiPhysParameters
{
public:
    char m_Name[32] {};
    float m_dword20 {0.0f};
    float m_dword24 {0.0f};
    float m_dword28 {0.0f};
    float m_dword2C {0.0f};
    float m_dword30 {0.0f};
    float m_dword34 {0.0f};
    float m_dword38 {0.0f};
    uint32_t m_dword3C {0};
    uint32_t m_dword40 {0};
    uint32_t m_dword44[2] {};
    uint32_t m_dword4C[3] {};

    // 0x539090 | ?Load@agiPhysParameters@@QAEXPAVStream@@@Z
    inline void Load(class Stream* arg1)
    {
        return stub<member_func_t<void, agiPhysParameters, class Stream*>>(0x539090, this, arg1);
    }

    // 0x539140 | ?Save@agiPhysParameters@@QAEXPAVStream@@@Z
    inline void Save(class Stream* arg1)
    {
        return stub<member_func_t<void, agiPhysParameters, class Stream*>>(0x539140, this, arg1);
    }
};

check_size(agiPhysParameters, 0x58);

class agiPhysDef
{
    agiPhysDef() = delete;

public:
    inline void Release()
    {}
};
