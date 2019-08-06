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

#include "dxsetup.h"

#include "setupdata.h"

#ifdef USE_SDL2
void dxiConfig(int32_t /*argc*/, char** /*argv*/)
{}
#endif

int32_t __stdcall ModeCallback(DDSURFACEDESC2* sd, void* context)
{
    dxiRendererInfo_t* info = static_cast<dxiRendererInfo_t*>(context);

    if (info->m_ResCount < 32)
    {
        float ar = static_cast<float>(sd->dwWidth) / static_cast<float>(sd->dwHeight);

        if ((ar > 1.6f) && (sd->ddpfPixelFormat.dwRGBBitCount == 32))
        {
            info->m_Resolutions[info->m_ResCount].uWidth = static_cast<uint16_t>(sd->dwWidth);
            info->m_Resolutions[info->m_ResCount].uHeight = static_cast<uint16_t>(sd->dwHeight);

            info->m_ResCount++;
        }
    }

    return 1;
}

define_dummy_symbol(dxsetup);

run_once([] {
    auto_hook(0x5578F0, ModeCallback);

#ifdef USE_SDL2
    auto_hook(0x556DF0, dxiConfig);
#endif

    create_patch("TestResolution", "Unsigned Comparison", 0x5577E4, "\x72", 1);
    create_patch("TestResolution", "Unsigned Comparison", 0x5577E8, "\x72", 1);

    create_patch("Res String", "Unsigned Printf", 0x5CDD54, "res %d x %d: %u %u / %u %u", 27);
    create_patch("EliminatingRes String", "Unsigned Printf", 0x5CDD70, "Eliminating res %d x %d; texmem=%u, vidmem=%u", 46);
});
