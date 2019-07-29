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

#include "surface.h"

agiPixelFormat::agiPixelFormat()
{
    memset(this, 0, sizeof(*this));
}

agiSurfaceDesc::agiSurfaceDesc()
{
    memset(this, 0, sizeof(*this));
}

agiSurfaceDesc* agiSurfaceDesc::Init(int32_t width, int32_t height, agiSurfaceDesc& desc)
{
    uint32_t bytes_per_pixel = (desc.ddpfPixelFormat.dwRGBBitCount + 7) / 8;

    agiSurfaceDesc* sd = new agiSurfaceDesc(desc);

    sd->dwFlags = 6;
    sd->dwWidth = width;
    sd->dwHeight = height;
    sd->lPitch = width * bytes_per_pixel;

    sd->lpSurface = new uint8_t[width * height * bytes_per_pixel]();

    return sd;
}

void agiSurfaceDesc::Unload()
{
    delete[] static_cast<uint8_t*>(lpSurface);
    lpSurface = nullptr;
}

define_dummy_symbol(surface);

run_once([] {
    auto_hook(0x53C760, agiSurfaceDesc::Init);
    create_patch("agiSurfaceDesc::CopyFrom", "Fix Input Pitch Calculation", 0x53D0AE, "\x8b\x4f\x54", 3);
});
