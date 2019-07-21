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

#include "midtown.h"

#include "data7/timer.h"

#include "pcwindis/dxinit.h"

#include <cstring>

#ifdef USE_SDL2
#    include "agigl/glpipe.h"
#endif

#ifdef USE_SDL2
agiPipeline* CreatePipeline(int32_t argc, char** argv)
{
    return glCreatePipeline(argc, argv);
}
#endif

void Application(int32_t argc, char** argv)
{
    dxiIcon = 111;

    SetProcessAffinityMask(GetCurrentProcess(), 1);

    __try
    {
        ApplicationHelper(argc, argv);

        Displayf("Normal exit.");
    }
    __except (GameFilter(GetExceptionInformation()))
    {
        // AIMAP.Dump()

        Quitf("Exception caught during init.");
    }
}

static char Main_ExecPath[1024] {};
static char* Main_ArgV[128] {};

int CALLBACK MidtownMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, LPSTR lpCmdLine, int /*nCmdShow*/)
{
    GetModuleFileNameA(0, Main_ExecPath, 1024);

    int argc = 0;
    Main_ArgV[argc++] = Main_ExecPath;

    char* current = lpCmdLine;

    while (*current)
    {
        current += std::strspn(current, " \t");

        char* cmd_start = nullptr;

        if (*current == '"')
        {
            ++current;

            cmd_start = current;

            current = std::strchr(current, '"');

            Assert(current != nullptr);
        }
        else if (*current != '\0')
        {
            cmd_start = current;

            current += std::strcspn(current, " \t");
        }
        else
        {
            break;
        }

        Main_ArgV[argc++] = cmd_start;

        if (*current)
        {
            *current++ = '\0';
        }
    }

    Main_ArgV[argc] = nullptr;

    Application(argc, Main_ArgV);

    Timer::Sleep(500);

    return 0;
}

define_dummy_symbol(midtown);

run_once([] {
#ifdef USE_SDL2
    auto_hook(0x401030, CreatePipeline);
#endif
});
