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

#include "hooking.h"

#include "data7/printer.h"

#include "minwin.h"

#include "midtown.h"

#include <dinput.h>
#include <mem/module.h>

#include <DbgHelp.h>

static decltype(&DirectInputCreateA) DirectInputCreateA_Orig = nullptr;

#pragma comment(linker, "/EXPORT:DirectInputCreateA=_DirectInputCreateA_Impl@16")

extern "C" HRESULT WINAPI DirectInputCreateA_Impl(
    HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUTA* ppDI, LPUNKNOWN punkOuter)
{
    if (DirectInputCreateA_Orig == nullptr)
    {
        char szDllFile[MAX_PATH];
        GetSystemDirectoryA(szDllFile, sizeof(szDllFile));
        strncat_s(szDllFile, "\\dinput.dll", sizeof(szDllFile));

        if (HMODULE hDinput = LoadLibraryA(szDllFile))
        {
            Displayf("Loaded real dinput.dll at 0x%zX", (uintptr_t)(hDinput));

            DirectInputCreateA_Orig = (decltype(DirectInputCreateA_Orig)) GetProcAddress(hDinput, "DirectInputCreateA");

            if (DirectInputCreateA_Orig)
            {
                Displayf("Found DirectInputCreateA at 0x%zX", (uintptr_t) DirectInputCreateA_Orig);
            }
            else
            {
                MessageBoxA(NULL, "Fatal Error", "Failed to find DirectInputCreateA", MB_OK);
                exit(1);
            }
        }
        else
        {
            MessageBoxA(NULL, "Fatal Error", "Failed to load dinput.dll", MB_OK);
            exit(1);
        }
    }

    return DirectInputCreateA_Orig(hinst, dwVersion, ppDI, punkOuter);
}

void InitExportHooks(HMODULE instance)
{
    mem::module self = mem::module::nt(instance);

    self.enum_exports([](const char* name, uint32_t /*ordinal*/, mem::pointer address) {
        if (name != nullptr)
        {
            uint32_t target;
            char hook_name[256];

            if (sscanf_s(name, "Hook_%x_%s", &target, hook_name, 256) == 2)
            {
                hook_name[255] = '\0';

                char undName[256];

                const char* function_name =
                    UnDecorateSymbolName(hook_name, undName, std::size(undName), UNDNAME_NAME_ONLY) ? undName
                                                                                                    : hook_name;

                create_hook(function_name, "", target, address);
            }
        }

        return false;
    });
}

include_dummy_symbol(dxinit);
include_dummy_symbol(dxsetup);
include_dummy_symbol(allocator);
include_dummy_symbol(machname);
include_dummy_symbol(stream);
include_dummy_symbol(fsystem);
include_dummy_symbol(hfsystem);
include_dummy_symbol(vfsystem);
include_dummy_symbol(stack);
include_dummy_symbol(midtown);
include_dummy_symbol(mmtext);
include_dummy_symbol(memstat);
include_dummy_symbol(surface);
include_dummy_symbol(problems);
include_dummy_symbol(timer);
include_dummy_symbol(speed);

BOOL APIENTRY DllMain(HMODULE hinstDLL, DWORD fdwReason, LPVOID /*lpvReserved*/)
{
    if (fdwReason == DLL_PROCESS_ATTACH)
    {
        if (strcmp(mem::pointer(0x5A47FC).as<const char*>(), "Angel: 1588 / Apr 14 1999 15:07:10") != 0)
        {
            MessageBoxA(NULL, "Invalid MM1 Version Detected", "Fatal Error", MB_OK);

            exit(1);
        }

        if (GetConsoleWindow() == NULL)
        {
            AllocConsole();

            SetConsoleTitleA("OpenMM1");
        }

        LogToFile();

        create_hook("DefaultPrinter", "Use a custom printer", 0x558360, DefaultPrinter);

        create_hook("WinMain", "Entry Point", 0x566DEA, &MidtownMain, hook_type::call);
        create_patch("HW Menu", "Enable HW Menu Rendering", 0x401A1E, "\xEB", 1);

        create_patch("Heap Size", "Increase Heap Size", 0x401A5C, "\xb8\x00\x00\x00\x08", 5); // mov eax, 0x8000000

        for (uint32_t address : {0x4E1033, 0x4E1267, 0x4E1573})
        {
            // The code writes to the first 2 channels, even when there are less.
            // operator new(4 * pmxl.cChannels) -> operator new(4 * (pmxl.cChannels + 2))
            create_patch("MixerCT", "Fix paDetails allocation", address + 3, "\x08", 1);
        }

        create_patch("PolarCamCS", "Increase Max XCAM Distance", 0x594D84, "\x00\x00\x7A\x43", 4);

        mem::init_function::init();

        InitExportHooks(hinstDLL);
    }

    return TRUE;
}
