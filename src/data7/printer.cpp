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

#include "printer.h"

#include "minwin.h"
#include <stdarg.h>

void Displayf(char const* format, ...)
{
    va_list va;
    va_start(va, format);
    Printer(0, format, va);
    va_end(va);
}

void Printf(char const* format, ...)
{
    va_list va;
    va_start(va, format);
    Printer(0, format, va);
    va_end(va);
}

void Debugf(char const* format, ...)
{
    va_list va;
    va_start(va, format);
    Printer(0, format, va);
    va_end(va);
}

void Warningf(char const* format, ...)
{
    va_list va;
    va_start(va, format);
    Printer(1, format, va);
    va_end(va);
}

void Errorf(char const* format, ...)
{
    va_list va;
    va_start(va, format);
    Printer(2, format, va);
    va_end(va);
}

[[noreturn]] void Abortf(char const* format, ...)
{
    va_list va;
    va_start(va, format);
    Printer(4, format, va);
    va_end(va);

    *static_cast<volatile uint32_t*>(nullptr) = 0xDEADBEEF;

    exit(1);
}

const char* const PrinterPrefixes[5] {"", "WARNING: ", "ERROR: ", "FATAL ERROR: ", "ABORT: "};
const uint8_t PrinterColors[5] {7u, 14u, 12u, 12u, 12u};

static extern_var(0x5CDF50, HANDLE, DebugLogFile);

void DefaultPrinter(int32_t level, const char* format, va_list args)
{
    char buffer[512];
    strcpy_s(buffer, PrinterPrefixes[level]);

    {
        char buffer2[512];
        vsprintf_s(buffer2, format, args);

        if (!strcmp(buffer2, "DirectInput problem, code = -2147024884(8007000c) [not acquired]"))
            return;

        strcat_s(buffer, buffer2);
    }

    strcat_s(buffer, "\n");

    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(output, PrinterColors[level]);

    DWORD written = 0;

    if (!WriteConsoleA(output, buffer, strlen(buffer), &written, 0))
    {
        WriteFile(output, buffer, strlen(buffer), &written, 0);
    }

    SetConsoleTextAttribute(output, PrinterColors[0]);

    if (DebugLogFile != INVALID_HANDLE_VALUE)
    {
        WriteFile(DebugLogFile, buffer, strlen(buffer), &written, 0);

        if (level >= 3)
        {
            CloseHandle(DebugLogFile);
        }
    }
    else if (EnableDebugOutput)
    {
        OutputDebugStringA(buffer);
    }

    if (level >= 3)
    {
        if (IsDebuggerPresent())
        {
            DebugBreak();
        }

        MessageBoxA(NULL, buffer, "Fatal Error", MB_OK);

        if (level == 3)
        {
            _exit(1);
        }

        if (level == 4)
        {
            *static_cast<volatile uint32_t*>(0) = 0xDEADBEEF;
        }
    }
}

void LogToFile(const char* file)
{
    if (DebugLogFile != INVALID_HANDLE_VALUE)
    {
        CloseHandle(DebugLogFile);
    }

    DebugLogFile = CreateFileA(file, GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);

    if (DebugLogFile != INVALID_HANDLE_VALUE)
    {
        OutputDebugStringA("Logging output to file '");
        OutputDebugStringA(file);
        OutputDebugStringA("'.\n");
    }
    else
    {
        OutputDebugStringA("OUTPUT LOG FILE CREATE FAILED.\n");
    }
}

void LogToFile()
{
    LogToFile("OpenMM1.log");
}
