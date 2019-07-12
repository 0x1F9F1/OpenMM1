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

#include "vfsystem.h"

#include "stream.h"

VirtualFileSystem::VirtualFileSystem(Stream* arg1)
{
    m_pFileStream = arg1;

    m_pFileStream->Read(&m_Magic, 4);

    if (memcmp(&m_Magic, "ARES", 4))
    {
        Quitf("VFS::VFS: Not a valid AngelRes file.");
    }

    m_pFileStream->Read(&m_NodeCount, 4);
    m_pFileStream->Read(&m_DirectoryCount, 4);
    m_pFileStream->Read(&m_NameDataSize, 4);

    m_pNodes = new VirtualFileInode[m_NodeCount];
    m_pFileStream->Read(m_pNodes, m_NodeCount * sizeof(VirtualFileInode));

    m_pNameData = new uint8_t[m_NameDataSize];
    m_pFileStream->Read(m_pNameData, m_NameDataSize);
}

VirtualFileSystem::~VirtualFileSystem()
{
    delete[] m_pNameData;
    delete[] m_pNodes;

    delete m_pFileStream;
}

define_dummy_symbol(vfsystem);

run_once([] { auto_hook_ctor(0x5421D0, VirtualFileSystem, Stream*); });
