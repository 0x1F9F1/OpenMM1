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

#include "data7/speed.h"
#include "setupdata.h"

#include <mem/cmd_param.h>
#include <mem/module.h>

void dxiConfig([[maybe_unused]] int32_t argc, [[maybe_unused]] char** argv)
{
#ifdef USE_SDL2
    dxiCpuSpeed = ComputeCpuSpeed();

    dxiRendererChoice = 0;
    dxiRendererInfo_t& info = dxiInfo[dxiRendererCount++];

    info.m_Valid = 1;
    info.m_CurrentIndex = 1;
    info.m_Hardware2 = 2;
    info.m_field_C = 0;
    info.m_bSmoothAlpha = 1;
    info.m_bAdditiveBlending = 1;
    info.m_bVertexFog = 1;
    info.m_bMultiTexture = 1;
    info.m_bTexturePalette = 1;
    info.m_bHaveMipmaps = 1;
    info.m_uSpecialFlags = 0;
    strcpy_s(info.m_Name, "OpenGL");
    memset(&info.m_InterfaceGuid, 0x11, sizeof(info.m_InterfaceGuid));
    memset(&info.m_DriverGuid, 0x22, sizeof(info.m_DriverGuid));
    info.m_Type = 2;
    info.m_ResCount = 0;
    info.m_ResolutionIndex = 0;

    dxiResolution& res = info.m_Resolutions[info.m_ResCount++];
    res.uWidth = 1920;
    res.uHeight = 1080;
    res.uTexMem = 0x40000000;
#else
    stub<cdecl_t<void, int32_t, char**>>(0x556DF0, argc, argv);
#endif
}

HMODULE g_DirectDrawDll = nullptr;

static extern_var(0x711798, int32_t(__stdcall*)(_GUID*, char*, char*, void*), CurrentDirectDrawEnumerator);

void MyDirectDrawEnumerate(int32_t(__stdcall* callback)(_GUID*, char*, char*, void*), void* context)
{
    if (auto pDirectDrawEnumerateExA = reinterpret_cast<decltype(&DirectDrawEnumerateExA)>(
            GetProcAddress(g_DirectDrawDll, "DirectDrawEnumerateExA")))
    {
        Displayf("using DirectDrawEnumerateEx...");

        CurrentDirectDrawEnumerator = callback;

        pDirectDrawEnumerateExA(MultiMonCallback, context, 7);
    }
    else if (auto pDirectDrawEnumerateA = reinterpret_cast<decltype(&DirectDrawEnumerateA)>(
                 GetProcAddress(g_DirectDrawDll, "DirectDrawEnumerateA")))
    {
        pDirectDrawEnumerateA(callback, context);
    }
    else
    {
        Quitf("Invalid/Corrupt DirectDraw DLL");
    }
}

static mem::cmd_param PARAM_widescreen {"widescreen"};

int32_t __stdcall ModeCallback(DDSURFACEDESC2* sd, void* context)
{
    dxiRendererInfo_t* info = static_cast<dxiRendererInfo_t*>(context);

    if (info->m_ResCount < 32)
    {
        float ar = static_cast<float>(sd->dwWidth) / static_cast<float>(sd->dwHeight);

        if (sd->dwWidth >= 640 && sd->dwHeight >= 480 && sd->ddpfPixelFormat.dwRGBBitCount == 32 &&
            (ar > 1.6f) == PARAM_widescreen.get_or(true))
        {
            info->m_Resolutions[info->m_ResCount].uWidth = static_cast<uint16_t>(sd->dwWidth);
            info->m_Resolutions[info->m_ResCount].uHeight = static_cast<uint16_t>(sd->dwHeight);

            info->m_ResCount++;
        }
    }

    return 1;
}

void UseLocalDirectDraw()
{
    //SystemParametersInfo(SPI_SETCLEARTYPE, 0, (void*) (size_t) TRUE, 0);
    //SystemParametersInfo(SPI_SETFONTSMOOTHING, 0, (void*) (size_t) TRUE, 0);
    //SystemParametersInfo(SPI_SETFONTSMOOTHINGTYPE, 0, (void*) (size_t) FE_FONTSMOOTHINGCLEARTYPE, 0);

    HMODULE ddraw = GetModuleHandleA("DDRAW.DLL");
    HMODULE ddraw_local = LoadLibraryA(".\\DDRAW.DLL");

    g_DirectDrawDll = ddraw;

    if (ddraw_local)
    {
        if (ddraw != ddraw_local)
        {
            g_DirectDrawDll = ddraw_local;

            Displayf("Use local DirectDraw DLL");

            create_hook("DirectDrawCreate", "Use Local DDRAW", 0x58F014,
                GetProcAddress(ddraw_local, "DirectDrawCreate"), hook_type::pointer);

            create_hook("DirectDrawEnumerateA", "Use Local DDRAW", 0x58F018,
                GetProcAddress(ddraw_local, "DirectDrawEnumerateA"), hook_type::pointer);

            FreeLibrary(ddraw);
        }
        else
        {
            FreeLibrary(ddraw_local);
        }
    }
}

define_dummy_symbol(dxsetup);

run_once([] {
    UseLocalDirectDraw();

    auto_hook(0x5578F0, ModeCallback);
    auto_hook(0x557110, MyDirectDrawEnumerate);

#ifdef USE_SDL2
    auto_hook(0x556DF0, dxiConfig);
#endif

    create_patch("TestResolution", "Unsigned Comparison", 0x5577E4, "\x72", 1);
    create_patch("TestResolution", "Unsigned Comparison", 0x5577E8, "\x72", 1);

    create_patch("Res String", "Unsigned Printf", 0x5CDD54, "res %d x %d: %u %u / %u %u", 27);
    create_patch(
        "EliminatingRes String", "Unsigned Printf", 0x5CDD70, "Eliminating res %d x %d; texmem=%u, vidmem=%u", 46);
});
