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

#include "fsystem.h"

#include "data7/printer.h"

constexpr size_t MAX_FILESYSTEMS = 256;

FileSystem* FileSystem::FS[MAX_FILESYSTEMS] {};

FileSystem::FileSystem()
{
    if (FSCount >= MAX_FILESYSTEMS)
    {
        Abortf("Out of FileSystems, raise MAX_FILESYSTEMS");
    }

    FS[FSCount++] = this;
    m_Index = FSCount;
}

FileSystem* FileSystem::SearchAll(char* arg1, char* arg2, char* arg3, int32_t arg4, char* arg5)
{
    for (int32_t i = 0; i < FSCount; ++i)
    {
        FileSystem* f = FS[i];

        if (f->Search(arg1, arg2, arg3, arg4, arg5))
        {
            return f;
        }
    }

    return nullptr;
}

Stream* FileSystem::OpenAny(char* arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    for (int32_t i = 0; i < FSCount; ++i)
    {
        FileSystem* f = FS[i];

        if (f->QueryOn(arg1))
        {
            return f->OpenOn(arg1, arg2, arg3, arg4);
        }
    }

    return nullptr;
}

int32_t FileSystem::PagerInfoAny(char* arg1, PagerInfo_t& arg2)
{
    for (int32_t i = 0; i < FSCount; ++i)
    {
        FileSystem* f = FS[i];

        if (f->PagerInfo(arg1, arg2))
        {
            return 1;
        }
    }

    return 0;
}

FileSystem::~FileSystem()
{
    if (m_Index != FSCount)
    {
        Errorf("FileSystems destructed out of order.");
    }

    --FSCount;
}

int32_t FileSystem::PagerInfo(char* /*arg1*/, PagerInfo_t& /*arg2*/)
{
    return 0;
}

void FileSystem::NotifyDelete()
{}

define_dummy_symbol(fsystem);

run_once([] {
    auto_hook(0x5411A0, FileSystem::SearchAll);
    auto_hook(0x5419E0, FileSystem::OpenAny);
    auto_hook(0x541A50, FileSystem::PagerInfoAny);

    // Fix references to FileSystem::FS
    uint32_t fs_addr = reinterpret_cast<uint32_t>(FileSystem::FS);
    write_protected(0x4C04DF + 1, &fs_addr, 4); // mmCityList::LoadAll
    write_protected(0x4C0934 + 1, &fs_addr, 4); // mmVehList::LoadAll

    fs_addr -= 4;
    write_protected(0x4023E3 + 3, &fs_addr, 4); // ApplicationHelper
});
