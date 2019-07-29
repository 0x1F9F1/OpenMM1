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
    stream:problems

    0x542930 | void __cdecl InitProblems(void) | ?InitProblems@@YAXXZ
    0x542990 | void __cdecl DumpProblems(void) | ?DumpProblems@@YAXXZ
    0x542C80 | void __cdecl RegisterProblem(char *,char *,char *) | ?RegisterProblem@@YAXPAD00@Z
    0x542EC0 | public: __thiscall problem_t::~problem_t(void) | ??1problem_t@@QAE@XZ
    0x542BD0 | int __cdecl cmpProblem(void const *,void const *) | ?cmpProblem@@YAHPBX0@Z
*/

// 0x542930 | ?InitProblems@@YAXXZ
void InitProblems();

// 0x542990 | ?DumpProblems@@YAXXZ
void DumpProblems();

// 0x542C80 | ?RegisterProblem@@YAXPAD00@Z
void RegisterProblem(const char* message, const char* problem, const char* additional);

// 0x542BD0 | ?cmpProblem@@YAHPBX0@Z
int32_t cmpProblem(void const* lhs, void const* rhs);
