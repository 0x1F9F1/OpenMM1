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
    pcwindis:pcwindis

    0x557F90 | long __stdcall MasterWindowProc(struct HWND__ *,unsigned int,unsigned int,long) | ?MasterWindowProc@@YGJPAUHWND__@@IIJ@Z
    0x558010 | void __cdecl RegisterMap(char *,unsigned int *,int,class Dispatchable *) | ?RegisterMap@@YAXPADPAIHPAVDispatchable@@@Z
    0x5580F0 | void __cdecl UnregisterMap(char *) | ?UnregisterMap@@YAXPAD@Z
*/

// 0x557F90 | ?MasterWindowProc@@YGJPAUHWND__@@IIJ@Z
inline int32_t __stdcall MasterWindowProc(struct HWND__* arg1, uint32_t arg2, uint32_t arg3, int32_t arg4)
{
    return stub<stdcall_t<int32_t, struct HWND__*, uint32_t, uint32_t, int32_t>>(0x557F90, arg1, arg2, arg3, arg4);
}

// 0x558010 | ?RegisterMap@@YAXPADPAIHPAVDispatchable@@@Z
inline void RegisterMap(char* arg1, uint32_t* arg2, int32_t arg3, class Dispatchable* arg4)
{
    return stub<cdecl_t<void, char*, uint32_t*, int32_t, class Dispatchable*>>(0x558010, arg1, arg2, arg3, arg4);
}

// 0x5580F0 | ?UnregisterMap@@YAXPAD@Z
inline void UnregisterMap(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x5580F0, arg1);
}
