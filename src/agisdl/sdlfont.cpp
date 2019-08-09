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

#include "sdlfont.h"

#include "sdlinit.h"

#include <SDL_filesystem.h>
#include <SDL_ttf.h>

void sdlFontInit()
{
    Assert(TTF_Init() == 0);
}

void sdlFontShutdown()
{
    TTF_Quit();
}

void* sdlLoadFont(const char* name, int ptsize)
{
    char path[1024];

    formatf(path, "%s%s", SDL_GetBasePath(), "GILI____.TTF");

    return TTF_OpenFont(path, ptsize);
}

void sdlDeleteFont(void* font)
{
    TTF_CloseFont(static_cast<TTF_Font*>(font));
}
