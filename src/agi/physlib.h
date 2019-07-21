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
    agi:physlib

    0x539220 | public: __thiscall agiLib<class agiPhysParameters,class agiPhysDef>::agiLib<class agiPhysParameters,class agiPhysDef>(void) | ??0?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@QAE@XZ
    0x539250 | public: __thiscall agiLib<class agiPhysParameters,class agiPhysDef>::~agiLib<class agiPhysParameters,class agiPhysDef>(void) | ??1?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@QAE@XZ
    0x7024D8 | class agiLib<class agiPhysParameters,class agiPhysDef> agiPhysLib | ?agiPhysLib@@3V?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@A
*/

// 0x7024D8 | ?agiPhysLib@@3V?$agiLib@VagiPhysParameters@@VagiPhysDef@@@@A
inline extern_var(0x7024D8, class agiLib<class agiPhysParameters, class agiPhysDef>, agiPhysLib);
