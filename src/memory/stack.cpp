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

#include "stack.h"

#include "minwin.h"

#include <algorithm>

#include <DbgHelp.h>

static extern_var(0x6E28A8, int32_t, MapInitialized);

struct MapSymbol
{
    char* Name;
    uint32_t Address;
};

static extern_var(0x6E28A4, MapSymbol*, MapSymbols);
static extern_var(0x6E289C, int32_t, MapSymbolCount);

bool DbgHelpLoaded = false;

const MapSymbol* LookupMapSymbol(uint32_t address)
{
    const MapSymbol* first = MapSymbols;
    const MapSymbol* last = first + MapSymbolCount;

    const MapSymbol* find = std::upper_bound(
        first, last, address, [](uint32_t address, const MapSymbol& entry) { return entry.Address >= address; });

    if (find == first || find == last)
    {
        return nullptr;
    }

    return find - 1;
}

void LookupAddress(char* buffer, uint32_t address)
{
    if (!MapInitialized)
    {
        InitMap();

        SymSetOptions(SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS);
        DbgHelpLoaded = SymInitialize(GetCurrentProcess(), NULL, TRUE);

        MapInitialized = 1;
    }

    if (DbgHelpLoaded)
    {
        DWORD64 dwDisplacement = 0;

        alignas(SYMBOL_INFO) char symbol_buffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME * sizeof(TCHAR)];
        PSYMBOL_INFO pSymbol = (PSYMBOL_INFO) symbol_buffer;

        pSymbol->SizeOfStruct = sizeof(SYMBOL_INFO);
        pSymbol->MaxNameLen = MAX_SYM_NAME;

        IMAGEHLP_MODULE module = {0};
        module.SizeOfStruct = sizeof(IMAGEHLP_MODULE);

        if (SymFromAddr(GetCurrentProcess(), address, &dwDisplacement, pSymbol) &&
            SymGetModuleInfo(GetCurrentProcess(), address, &module))
        {
            if (!_stricmp(module.ModuleName, "dinput"))
            {
                strcpy_s(module.ModuleName, "OpenMM1");
            }

            if (pSymbol->NameLen > 64)
            {
                strcpy_s(pSymbol->Name + 61, 4, "...");
            }

            sprintf_s(buffer, 128, "0x%X (%s.%s + 0x%X)", address, module.ModuleName, pSymbol->Name,
                static_cast<uint32_t>(dwDisplacement));

            return;
        }
    }

    const MapSymbol* entry = LookupMapSymbol(address);

    if (entry)
    {
        int offset = address - entry->Address;

        char undName[256];

        const char* function_name =
            UnDecorateSymbolName(entry->Name, undName, std::size(undName), UNDNAME_NAME_ONLY) ? undName : entry->Name;

        sprintf_s(buffer, 128, "0x%X (%s + 0x%X)", address, function_name, offset);

        return;
    }

    sprintf_s(buffer, 128, "0x%X (Unknown)", address);
}

void InitMap()
{
    char map_name[128];
    strcpy_s(map_name, "midtown.map");

    FILE* map_file = nullptr;

    if (fopen_s(&map_file, map_name, "r"))
    {
        Errorf("Map file '%s' not found", map_name);

        return;
    }

    Assert(map_file != nullptr);

    char* symbols = 0;
    size_t symbols_length = 0;

    for (int state = 1; state <= 2; ++state)
    {
        size_t strings_length = 0;
        bool parsing_symbols = false;

        MapSymbolCount = 0;

        fseek(map_file, 0, SEEK_SET);

        char line_buffer[256];

        while (fgets(line_buffer, 256, map_file))
        {
            if (strstr(line_buffer, "Publics by Value"))
            {
                parsing_symbols = true;
            }
            else if (!parsing_symbols)
            {
                continue;
            }

            int address;

            char value_buffer[256];
            if (!strncmp(line_buffer, " 0001:", 6u) &&
                sscanf_s(line_buffer, "%*s %255s %x", value_buffer, sizeof(value_buffer), &address) == 2)
            {
                value_buffer[255] = '\0';

                if (state == 2)
                {
                    strcpy_s(&symbols[strings_length], symbols_length - strings_length, value_buffer);
                    MapSymbols[MapSymbolCount].Name = &symbols[strings_length];
                    MapSymbols[MapSymbolCount].Address = address;
                }

                ++MapSymbolCount;

                strings_length += strlen(value_buffer) + 1;
            }
            else if (parsing_symbols && !strncmp(line_buffer, " 0002:", 6u))
            {
                break;
            }
        }

        if (state == 1)
        {
            MapSymbols = static_cast<MapSymbol*>(calloc(MapSymbolCount, sizeof(MapSymbol)));

            symbols = static_cast<char*>(calloc(strings_length, 1));
            symbols_length = strings_length;

            Errorf("%d symbols parsed from map file.", MapSymbolCount);
        }
    }

    fclose(map_file);

    std::sort(MapSymbols, MapSymbols + MapSymbolCount,
        [](const MapSymbol& lhs, const MapSymbol& rhs) { return lhs.Address < rhs.Address; });
}

define_dummy_symbol(stack);

run_once([] { auto_hook(0x50E0F0, LookupAddress); });
