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
    agi:texlib

    0x53C730 | public: __thiscall agiLib<class agiTexParameters,class agiTexDef>::agiLib<class agiTexParameters,class agiTexDef>(void) | ??0?$agiLib@VagiTexParameters@@VagiTexDef@@@@QAE@XZ
    0x706668 | class agiLib<class agiTexParameters,class agiTexDef> agiTexLib | ?agiTexLib@@3V?$agiLib@VagiTexParameters@@VagiTexDef@@@@A
*/

#include "agilib.h"

class agiTexParameters;
class agiTexDef;

// 0x706668 | ?agiTexLib@@3V?$agiLib@VagiTexParameters@@VagiTexDef@@@@A
inline extern_var(0x706668, Ty(agiLib<agiTexParameters, agiTexDef>), agiTexLib);
