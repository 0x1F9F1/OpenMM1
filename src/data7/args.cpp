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

#include "args.h"

void ArgSet::Print(const char* title)
{
    Displayf("%s:", title ? title : "ARGSET");

    for (asArg* arg : m_pArgs)
    {
        if (arg)
        {
            arg->Print("\n");
        }
    }
}

asArg::asArg(char flag, const char* usage)
    : m_Flag(flag)
    , m_Usage(usage)
{}

void asArg::Print(const char* name)
{
    Displayf("%s: Found: %d Flag: %c Msg: (%s)", name ? name : "ARG", m_Found, m_Flag, m_Usage.get());

    Displayf("\tContents:");

    for (size_t i = 0; i < 5; ++i)
    {
        Displayf("\t\t[%d] IVal: %d FVal: %f SVal: (%s)", i, m_iValues[i], m_fValues[i], m_sValues[i]);
    }
}
