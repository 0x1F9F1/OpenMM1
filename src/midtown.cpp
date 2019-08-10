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

#include "data7/cstr.h"
#include "data7/timer.h"
#include "memory/allocator.h"
#include "pcwindis/dxinit.h"

#ifdef USE_SDL2
#    include "agigl/glpipe.h"
#endif

#include <cstring>
#include <mem/cmd_param-inl.h>

agiPipeline* CreatePipeline(int32_t argc, char** argv)
{
#ifdef USE_SDL2
    return glCreatePipeline(argc, argv);
#else
    return stub<cdecl_t<agiPipeline*, int32_t, char**>>(0x401030, argc, argv);
#endif
}

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

alignas(std::max_align_t) static char InitHeap[0x10000];

int CALLBACK MidtownMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, LPSTR lpCmdLine, int /*nCmdShow*/)
{
    asMemoryAllocator init_alloc;
    init_alloc.Init(InitHeap, 0x10000, 1);
    CURHEAP = &init_alloc;

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

        if (*current)
        {
            *current++ = '\0';
        }

        Assert(argc < 128);
        Main_ArgV[argc++] = cmd_start;
    }

    Assert(argc < 128);
    Main_ArgV[argc] = nullptr;

    mem::cmd_param::init(argc, Main_ArgV);

    Application(argc, Main_ArgV);

    // Timer::Sleep(500);

    return 0;
}

define_dummy_symbol(midtown);

run_once([] {
#ifdef USE_SDL2
    auto_hook(0x401030, CreatePipeline);
#endif
});
