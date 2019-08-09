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

#include "bitmap.h"

#include "data7/format.h"
#include "data7/hash.h"

agiBitmap::agiBitmap(class agiPipeline* pipe)
    : agiRefreshable(pipe)
{}

agiBitmap::~agiBitmap()
{
    char buffer[128];
    // TODO: Should be m_Width and m_Height?
    formatf(buffer, "%s.%x.%x.%d", m_Name.get(), *reinterpret_cast<uint32_t*>(&m_ScaleW_640),
        *reinterpret_cast<uint32_t*>(&m_ScaleH_480), m_Transparency);
    BitmapHash.Delete(buffer);
}
