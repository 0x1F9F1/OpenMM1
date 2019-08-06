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

void agiSurfaceDesc::CopyFrom(agiSurfaceDesc* input, int32_t lod)
{
    int32_t output_width = dwWidth;
    int32_t output_height = dwHeight;
    int32_t output_pitch = lPitch;
    uint8_t* output_surface = static_cast<uint8_t*>(lpSurface);

    int32_t input_width = input->dwWidth;
    int32_t input_height = input->dwHeight;
    int32_t input_bytes_per_pixel = (input->ddpfPixelFormat.dwRGBBitCount + 7) >> 3;
    int32_t input_pitch = input_bytes_per_pixel * input->dwWidth;
    uint8_t* input_surface = static_cast<uint8_t*>(input->lpSurface);

#if 0
    while (lod--)
    {
        input_surface += input_pitch * input_height;
        input_width >>= 1;
        input_height >>= 1;
        input_pitch >>= 1;
    }
#else
    if (lod)
    {
        Assert(lod > 0 && lod < 16);

        uint32_t j = (lod << 1) - 2;

        input_surface += (input_pitch * input_height * (0x55555555 >> (30 - j))) >> j;

        input_width >>= lod;
        input_height >>= lod;
        input_pitch >>= lod;
    }
#endif

    int32_t width_step = (input_width << 16) / output_width;
    int32_t height_step = (input_height << 16) / output_height;

    if (!memcmp(&ddpfPixelFormat, &input->ddpfPixelFormat, sizeof(ddpfPixelFormat)))
    {
        if (input_width != output_width || input_height != output_height || input_pitch != output_pitch)
        {
            switch (input_bytes_per_pixel)
            {
#define X(TYPE)                                                                                 \
    case sizeof(TYPE):                                                                          \
        for (int32_t i = 0, j = 0; i < output_height; ++i, j += height_step)                    \
        {                                                                                       \
            TYPE* output_row = reinterpret_cast<TYPE*>(output_surface + output_pitch * i);      \
            TYPE* input_row = reinterpret_cast<TYPE*>(input_surface + input_pitch * (j >> 16)); \
                                                                                                \
            for (int32_t k = 0, l = 0; k < output_width; ++k, l += width_step)                  \
            {                                                                                   \
                output_row[k] = input_row[l >> 16];                                             \
            }                                                                                   \
        }                                                                                       \
        break

                X(uint8_t);
                X(uint16_t);
                X(uint32_t);

#undef X

                default: Quitf("Invalid Pixel Format");
            }
        }
        else
        {
            memcpy(lpSurface, input_surface, input_bytes_per_pixel * input_width * input_height);
        }
    }
    else
    {
        void (*copy_row)(void*, void*, uint32_t, uint32_t) = nullptr;

        switch (input->ddpfPixelFormat.dwRBitMask)
        {
            case 0xF800: // 565
                switch (ddpfPixelFormat.dwRBitMask)
                {
                    case 0xFF0000u: copy_row = copyrow565_to_888; break;
                    case 0xFFu: copy_row = copyrow565_to_888rev; break;

                    case 0x7C00u:
                        if (ddpfPixelFormat.dwRGBAlphaBitMask == 0x8000)
                        {
                            copy_row = copyrow565_to_5551;
                        }
                        else
                        {
                            copy_row = copyrow565_to_555;
                        }
                        break;
                }
                break;

            case 0xF00: // 4444
                switch (ddpfPixelFormat.dwRBitMask)
                {
                    case 0xFF0000u: copy_row = copyrow4444_to_8888; break;
                    case 0xFFu: copy_row = copyrow4444_to_8888rev; break;

                    case 0xF800u: copy_row = copyrow4444_to_565; break;
                    case 0x7C00u:
                        if (ddpfPixelFormat.dwRGBAlphaBitMask == 0x8000)
                        {
                            copy_row = copyrow4444_to_5551;
                        }
                        else
                        {
                            copy_row = copyrow4444_to_555;
                        }
                        break;
                }
                break;
        }

        if (!copy_row)
        {
            Quitf("Tell Dave to implement (%x,%x,%x,%x)-->(%x,%x,%x,%x) copyrow function.",
                input->ddpfPixelFormat.dwRBitMask, input->ddpfPixelFormat.dwGBitMask, input->ddpfPixelFormat.dwBBitMask,
                input->ddpfPixelFormat.dwRGBAlphaBitMask, ddpfPixelFormat.dwRBitMask, ddpfPixelFormat.dwGBitMask,
                ddpfPixelFormat.dwBBitMask, ddpfPixelFormat.dwRGBAlphaBitMask);
        }

        for (int32_t i = 0, j = 0; i < output_height; ++i, j += height_step)
        {
            copy_row(
                output_surface + output_pitch * i, input_surface + input_pitch * (j >> 16), output_width, width_step);
        }
    }
}

define_dummy_symbol(surface);

run_once([] {
    auto_hook(0x53C760, agiSurfaceDesc::Init);
    // create_patch("agiSurfaceDesc::CopyFrom", "Fix Input Pitch Calculation", 0x53D0AE, "\x8b\x4f\x54", 3);
    auto_hook(0x53D0A0, agiSurfaceDesc::CopyFrom);
});
