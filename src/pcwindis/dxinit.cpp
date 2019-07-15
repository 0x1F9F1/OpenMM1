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
#include "data7/assert.h"
#include "data7/printer.h"

#include "minwin.h"

// TODO: Move SDL to separate file/folder

#include <SDL.h>
#include <SDL_syswm.h>

SDL_Window* s_SDLWindow {nullptr};
SDL_Renderer* s_SDLRenderer {nullptr};

void dxiWindowCreate(char* window_name)
{
    if (s_SDLWindow)
        return;

    s_SDLWindow = SDL_CreateWindow(
        window_name, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, dxiWidth, dxiHeight, SDL_WINDOW_OPENGL);

    SDL_SysWMinfo wmInfo;
    SDL_VERSION(&wmInfo.version);
    SDL_GetWindowWMInfo(s_SDLWindow, &wmInfo);
    hwndMain = wmInfo.info.win.window;
}

int32_t dxiChangeDisplaySettings(int32_t /*width*/, int32_t /*height*/, int32_t /*bpp*/)
{
    return 0;
}

void dxiInit(char* window_name, int32_t argc, char** argv)
{
    Displayf("Initializing SDL");

    Assert(SDL_Init(SDL_INIT_EVERYTHING) == 0);

    Displayf("Creating Window");

    dxiWindowCreate(window_name);

    Displayf("Creating Renderer");

    int renderer = -1;
    int renderers = SDL_GetNumRenderDrivers();

    SDL_RendererInfo info;

    for (int i = 0; i < renderers; ++i)
    {
        if (SDL_GetRenderDriverInfo(i, &info) == 0)
        {
            Displayf("Renderer: %s", info.name);

            if (!strcmp(info.name, "opengl"))
            {
                renderer = i;

                break;
            }
        }
    }

    Assert(renderer != -1);

    s_SDLRenderer = SDL_CreateRenderer(s_SDLWindow, renderer, SDL_RENDERER_ACCELERATED);

    Assert(s_SDLRenderer != nullptr);

    Displayf("Done");

    dxiDirectInputCreate();
}

void dxiShutdown()
{
    if (s_SDLRenderer)
    {
        SDL_DestroyRenderer(s_SDLRenderer);
        s_SDLRenderer = nullptr;
    }

    if (s_SDLWindow)
    {
        SDL_DestroyWindow(s_SDLWindow);
        s_SDLWindow = nullptr;
    }

    hwndMain = NULL;
}

define_dummy_symbol(dxinit);

run_once([] {
    auto_hook(0x5557B0, dxiChangeDisplaySettings);
    auto_hook(0x5560A0, dxiInit);
    auto_hook(0x555D90, dxiShutdown);
});
