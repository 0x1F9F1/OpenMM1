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

#include "sdlinit.h"

#include "minwin.h"

#include <SDL.h>
#include <SDL_syswm.h>

#include "data7/assert.h"
#include "data7/printer.h"

#include "pcwindis/dxinit.h"

#include "sdlfont.h"

SDL_Window* s_Window = nullptr;
SDL_Renderer* s_Renderer = nullptr;

void sdlWindowCreate(const char* window_title)
{
    if (s_Window)
        return;

    s_Window = SDL_CreateWindow(
        window_title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, dxiWidth, dxiHeight, SDL_WINDOW_OPENGL);

    SDL_SysWMinfo wmInfo;
    SDL_VERSION(&wmInfo.version);
    SDL_GetWindowWMInfo(s_Window, &wmInfo);

    hwndMain = wmInfo.info.win.window;
}

void sdlRendererCreate(const char* driver_name)
{
    if (s_Renderer)
        return;

    int driver = -1;
    SDL_RendererInfo info;

    for (int i = 0, count = SDL_GetNumRenderDrivers(); i < count; ++i)
    {
        if (SDL_GetRenderDriverInfo(i, &info) != 0)
            continue;

        if (strcmp(info.name, driver_name) != 0)
            continue;

        driver = i;

        break;
    }

    if (driver == -1)
    {
        Quitf("SDL Renderer '%s' not found", driver_name);
    }

    s_Renderer = SDL_CreateRenderer(s_Window, driver, SDL_RENDERER_ACCELERATED);

    Assert(s_Renderer != nullptr);
}

void sdlInit(const char* window_title)
{
    Assert(SDL_Init(SDL_INIT_EVERYTHING) == 0);

    sdlWindowCreate(window_title);
    sdlRendererCreate("opengl");

    dxiDirectInputCreate();

    sdlFontInit();
}

void sdlShutdown()
{
    sdlFontShutdown();

    if (s_Renderer)
    {
        SDL_DestroyRenderer(s_Renderer);

        s_Renderer = nullptr;
    }

    if (s_Window)
    {
        SDL_DestroyWindow(s_Window);

        s_Window = nullptr;
    }

    hwndMain = NULL;
}