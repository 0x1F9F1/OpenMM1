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

#include "dxinit.h"
#include "data7/printer.h"

#include "minwin.h"

int32_t dxiChangeDisplaySettings(int32_t width, int32_t height, int32_t bpp)
{
    (void) width;
    (void) height;

    DEVMODEA dm;

    dm.dmSize = sizeof(dm);
    dm.dmBitsPerPel = bpp;
    dm.dmFields = DM_BITSPERPEL;

    int result = ChangeDisplaySettingsA(width != 0 ? &dm : nullptr, 0);

    if (result)
    {
        Errorf("ChangeDisplayMode failed, code %d.", result);
    }

    return result;
}

define_dummy_symbol(dxinit);

run_once([] { auto_hook(0x5557B0, dxiChangeDisplaySettings); });