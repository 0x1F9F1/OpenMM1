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

#include <dinput.h>

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

int CALLBACK MidtownMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    // OpenLog("OpenMM1.log");

    int result = stub<decltype(&MidtownMain)>(0x4027B0, hInstance, hPrevInstance, lpCmdLine, nCmdShow);

    // CloseLog();

    return result;
}

BOOL APIENTRY DllMain(HMODULE /*hinstDLL*/, DWORD fdwReason, LPVOID /*lpvReserved*/)
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

        create_hook("WinMain", "Entry Point", 0x566DEA, &MidtownMain, hook_type::call);

        // Printer = &CustomPrinter;
    }

    return TRUE;
}
