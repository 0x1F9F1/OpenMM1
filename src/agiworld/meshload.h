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
    agiworld:meshload

    0x505530 | public: void __thiscall agiMeshSet::BinaryLoad(class Stream *) | ?BinaryLoad@agiMeshSet@@QAEXPAVStream@@@Z
    0x505AE0 | private: static void __cdecl agiMeshSet::PageOutCallback(void *,int) | ?PageOutCallback@agiMeshSet@@CAXPAXH@Z
    0x505C00 | private: void __thiscall agiMeshSet::DoPageIn(void) | ?DoPageIn@agiMeshSet@@AAEXXZ
    0x6E10F0 | int MeshBytesPaged | ?MeshBytesPaged@@3HA
    0x6E10F4 | int MeshesPaged | ?MeshesPaged@@3HA
*/

// 0x6E10F0 | ?MeshBytesPaged@@3HA
inline extern_var(0x6E10F0, int32_t, MeshBytesPaged);

// 0x6E10F4 | ?MeshesPaged@@3HA
inline extern_var(0x6E10F4, int32_t, MeshesPaged);
